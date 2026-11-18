// Variable names for the generated tree.
//
// Ghidra names every parameter and local after its storage (param_1, local_28, iVar3, ...). This module
// gives them names, per function, in this order of trust:
//   1. hand-assigned names (_work/manual/<Program>.vars.json), and hand names carried over from another
//      of the four programs where the function body is identical (xmatch.js);
//   2. rules that recognise what a variable is from how the code uses it (below; each rule is listed in
//      RULES with the evidence it needs);
//   3. names carried between functions: a variable passed to a parameter that has a name takes that name,
//      and a variable that only ever holds the result of one named function is named after it.
// Variables nothing identifies keep Ghidra's name. Every renamed variable is listed with the rule that
// named it in <Program>/varnames.tsv, so each name can be traced to its evidence.
//
// Only declared identifiers of the one function are touched, every new name is checked against every
// identifier the function already uses, C++ keywords, and macros/types in scope, and the result must
// still compile (compile.js).
"use strict";

const GENERIC = /^(param_\d+|local_[0-9a-f]+(?:_[0-9a-f]+)?|local_res[0-9a-f]+|[a-zA-Z]{1,8}Var\d+|[a-z]{1,4}Stack_[0-9a-f]+|in_[A-Za-z0-9_]+|unaff_[A-Za-z0-9_]+|extraout_[A-Za-z0-9_]+|in_stack_[0-9a-f]+|this_)$/;
const IDENT = /^[A-Za-z_][A-Za-z0-9_]*$/;

// identifiers a variable must never be called: keywords, macros and types visible in every file
const RESERVED = new Set((
  "alignas alignof and and_eq asm auto bitand bitor bool break case catch char char8_t char16_t char32_t class compl concept const consteval constexpr constinit const_cast continue co_await co_return co_yield decltype default delete do double dynamic_cast else enum explicit export extern false float for friend goto if inline int long mutable namespace new noexcept not not_eq nullptr operator or or_eq private protected public register reinterpret_cast requires return short signed sizeof static static_assert static_cast struct switch template this thread_local throw true try typedef typeid typename union unsigned using virtual void volatile wchar_t while xor xor_eq " +
  "main near far pascal cdecl interface small hyper boolean errno stdin stdout stderr environ assert offsetof alloca setjmp longjmp va_list va_start va_arg va_end min max abs " +
  "byte sbyte uchar ushort uint ulong longlong ulonglong word dword qword code undefined string size_t std tea self_ NULL TRUE FALSE " +
  "exception type_info bad_alloc timezone daylight tzname"
).split(/\s+/));

// ---------------------------------------------------------------- helpers
const lowerFirst = (s) => {
  // "TSDictionaryList" -> "tsDictionaryList", "DC" -> "dc", "Window" -> "window"
  const m = s.match(/^([A-Z]+)(?=[A-Z][a-z]|$)/);
  if (m && m[1].length > 1) return m[1].toLowerCase() + s.slice(m[1].length);
  if (/^[A-Z]{2,}$/.test(s)) return s.toLowerCase();
  return s.charAt(0).toLowerCase() + s.slice(1);
};
const lastScope = (n) => {
  let d = 0, cut = 0;
  for (let i = 0; i < n.length; i++) { if (n[i] === "<") d++; else if (n[i] === ">") d--; else if (d === 0 && n[i] === ":" && n[i + 1] === ":") { cut = i + 2; i++; } }
  return n.slice(cut).replace(/<.*$/, "").trim();
};
// name for an object of a class: OWL "TWindow" -> "window", "TSDictionaryList::Dictionary" -> "dictionary"
const OBJ_SPECIAL = { basic_string: "str", string: "str", wstring: "wstr", vector: "vec", basic_ios: "ios", basic_istream: "in", basic_ostream: "out", basic_filebuf: "filebuf", basic_streambuf: "streambuf", ios_base: "ios", locale: "loc" };
const objName = (cls) => {
  const leaf = lastScope(cls);
  if (OBJ_SPECIAL[leaf]) return OBJ_SPECIAL[leaf];
  let s = /^T[A-Z][a-z]/.test(leaf) ? leaf.slice(1) : leaf;
  s = s.replace(/_([a-z])/g, (m, c) => c.toUpperCase()).replace(/^_+/, "");
  return IDENT.test(s) ? lowerFirst(s) : null;
};
// API parameter name -> variable name: lpFileName -> fileName, dwFlags -> flags; handles and w/lParam kept
const fromApiParam = (n) => {
  if (!n || /^param_\d+$/.test(n) || /^(Reserved|reserved|lpReserved)$/.test(n)) return null;
  if (/^(wParam|lParam|hWnd|hDC|hdc|hInstance|hMenu)$/.test(n)) return n;
  let m;
  if ((m = n.match(/^(?:lpsz|psz|lpcsz|lpch|lpcb|lpc|lp|sz|pcb|pv|pb|pdw)([A-Z]\w*)$/))) return lowerFirst(m[1]);
  if ((m = n.match(/^(?:dw|n|u|i|cb|cch|f|b|w|fu|ui)([A-Z]\w*)$/))) return lowerFirst(m[1]);
  if (/^h[A-Z]/.test(n)) return n;
  return /^[a-z]/.test(n) ? n : lowerFirst(n);
};
// result of a call -> variable name, for functions whose names say what they return
const RET_TABLE = {
  strlen: "len", wcslen: "len", lstrlenA: "len", strcmp: "cmp", stricmp: "cmp", strcmpi: "cmp", strncmp: "cmp", strnicmp: "cmp", memcmp: "cmp", lstrcmpiA: "cmp", lstrcmpA: "cmp", CompareStringA: "cmp",
  strchr: "found", strrchr: "found", strstr: "found", memchr: "found", format: "msgText",
  GetLastError: "lastError", GetTickCount: "tickCount", GetDC: "hdc", GetWindowDC: "hdc", CreateCompatibleDC: "hdcMem", BeginPaint: "hdc",
  SelectObject: "hPrevObject", CreateFontIndirectA: "hFont", CreateSolidBrush: "hBrush", CreatePen: "hPen", CreateCompatibleBitmap: "hBitmap", GetStockObject: "hStockObject",
  LoadCursorA: "hCursor", LoadIconA: "hIcon", LoadBitmapA: "hBitmap", LoadMenuA: "hMenu", LoadAcceleratorsA: "hAccel", LoadLibraryA: "hLibrary", GetModuleHandleA: "hModule", GetProcAddress: "procAddress",
  GetDlgItem: "hCtrl", GetParent: "hWndParent", GetFocus: "hWndFocus", GetActiveWindow: "hWndActive", GetDesktopWindow: "hWndDesktop", FindWindowA: "hWndFound", WindowFromPoint: "hWndAtPoint", CreateWindowExA: "hWnd", GetWindow: "hWndRelated", GetTopWindow: "hWndTop", GetNextDlgTabItem: "hWndNext",
  GetSubMenu: "hSubMenu", GetMenu: "hMenu", GetSystemMenu: "hSysMenu", CreatePopupMenu: "hMenu", CreateMenu: "hMenu", GetMenuItemCount: "itemCount", GetMenuItemID: "itemId", GetMenuState: "menuState",
  CreateFileA: "hFile", FindFirstFileA: "hFind", GetFileSize: "fileSize", GetFileAttributesA: "attributes", SetFilePointer: "filePos", GetFileType: "fileType",
  GetSystemMetrics: "metric", GetDeviceCaps: "deviceCap", GetSysColor: "sysColor", GetTextColor: "prevTextColor", SetTextColor: "prevTextColor", SetBkColor: "prevBkColor", SetBkMode: "prevBkMode", SetMapMode: "prevMapMode",
  SendMessageA: "msgResult", SendDlgItemMessageA: "msgResult", DefWindowProcA: "defResult", CallWindowProcA: "procResult", DialogBoxParamA: "dialogResult", MessageBoxA: "choice",
  GetWindowLongA: "windowLong", SetWindowLongA: "prevWindowLong", GetClassLongA: "classLong", GetWindowTextLengthA: "textLen", GetWindowTextA: "textLen", GetDlgItemInt: "itemValue", GetDlgCtrlID: "ctrlId",
  IsWindow: "isWindow", IsWindowVisible: "isVisible", IsWindowEnabled: "isEnabled", IsIconic: "isIconic", IsZoomed: "isZoomed", IsChild: "isChild", IsDlgButtonChecked: "checkState",
  RegOpenKeyExA: "regStatus", RegCreateKeyExA: "regStatus", RegQueryValueExA: "regStatus", RegSetValueExA: "regStatus", RegEnumKeyExA: "regStatus", RegEnumValueA: "regStatus", RegDeleteKeyA: "regStatus", RegDeleteValueA: "regStatus", RegQueryInfoKeyA: "regStatus",
  GlobalAlloc: "hGlobal", GlobalLock: "lockedMem", LocalAlloc: "hLocal", LocalLock: "lockedMem", HeapAlloc: "mem", VirtualAlloc: "mem", malloc: "mem", calloc: "mem", realloc: "mem",
  GetClipboardData: "hClipData", SetClipboardData: "hClipData", SetCursor: "hPrevCursor", SetCapture: "hWndPrevCapture", SetFocus: "hWndPrevFocus", GetCapture: "hWndCapture",
  ImageList_Create: "hImageList", CreateDialogParamA: "hDlg", GetCurrentProcess: "hProcess", GetCurrentThreadId: "threadId", GetVersion: "version", TlsAlloc: "tlsIndex", TlsGetValue: "tlsValue",
  SetTimer: "timerId", MulDiv: "scaled", GetTextExtentPoint32A: "ok", FindNextFileA: "found", ShellExecuteA: "hShellResult", WinHelpA: "ok", PeekMessageA: "hasMessage", GetMessageA: "gotMessage",
  TranslateAcceleratorA: "translated", IsDialogMessageA: "isDialogMsg", RegisterWindowMessageA: "msgId", RegisterClipboardFormatA: "clipFormat", GlobalSize: "memSize", GetPrivateProfileIntA: "profileInt",
};
// own (hand-named) functions only: Windows API names do not reliably say what they return (RET_TABLE covers those)
const retFromName = (leaf, own) => {
  if (RET_TABLE[leaf]) return RET_TABLE[leaf];
  if (!own) return null;
  let m;
  if ((m = leaf.match(/^(?:Get|get|Find|find|Lookup|lookup|Create|create|New|Make|make|Alloc|Build|Calc|Calculate|Compute|Fetch|Retrieve|Determine)_?([A-Z][A-Za-z0-9]*)$/))) return lowerFirst(m[1]);
  if ((m = leaf.match(/^(?:Count|count)_?([A-Z][A-Za-z0-9]*)$/))) return lowerFirst(m[1]) + "Count";
  if ((m = leaf.match(/^(Is|is|Has|has|Can|can|Should|Was|Contains|Matches)([A-Z][A-Za-z0-9]*)$/))) return m[1].toLowerCase() + m[2];
  return null;
};
// Win32 types -> variable names (struct values; pointers get a p prefix)
const TYPE_NAMES = {
  _WIN32_FIND_DATAA: "findData", tagRECT: "rect", RECT: "rect", tagPOINT: "pt", POINT: "pt", tagSIZE: "size", SIZE: "size", tagMSG: "msg", MSG: "msg", tagPAINTSTRUCT: "paint", PAINTSTRUCT: "paint",
  tagLOGFONTA: "logFont", LOGFONTA: "logFont", tagTEXTMETRICA: "textMetrics", TEXTMETRICA: "textMetrics", _SYSTEMTIME: "sysTime", SYSTEMTIME: "sysTime", _FILETIME: "fileTime", FILETIME: "fileTime",
  tagOFNA: "ofn", OPENFILENAMEA: "ofn", tagWNDCLASSA: "wndClass", WNDCLASSA: "wndClass", tagWNDCLASSEXA: "wndClass", _OSVERSIONINFOA: "osVersion", tagCHOOSECOLORA: "chooseColor", tagCHOOSEFONTA: "chooseFont",
  _STARTUPINFOA: "startupInfo", _RTL_CRITICAL_SECTION: "critSection", tagWINDOWPLACEMENT: "placement", WINDOWPLACEMENT: "placement", tagLOGBRUSH: "logBrush", tagLOGPEN: "logPen", tagBITMAP: "bitmap",
  tagBITMAPINFOHEADER: "bmiHeader", tagMENUITEMINFOA: "menuItemInfo", tagTVITEMA: "tvItem", _TVITEMA: "tvItem", tagTVINSERTSTRUCTA: "tvInsert", tagLVITEMA: "lvItem", tagLVCOLUMNA: "lvColumn", tagTCITEMA: "tcItem",
  tagHDITEMA: "hdItem", tagTOOLINFOA: "toolInfo", tagNMHDR: "nmhdr", tagDRAWITEMSTRUCT: "drawItem", tagMEASUREITEMSTRUCT: "measureItem", tagSCROLLINFO: "scrollInfo", tagCREATESTRUCTA: "createStruct",
  tagMINMAXINFO: "minMaxInfo", tagWINDOWPOS: "windowPos", _charformat: "charFormat", _charformat2a: "charFormat", _paraformat: "paraFormat", _editstream: "editStream", _charrange: "charRange", _textrange: "textRange",
  _findtexta: "findText", _formatrange: "formatRange", tagPRINTDLGA: "printDlg", tagPDA: "printDlg", _devicemodeA: "devMode", _DOCINFOA: "docInfo", tagDOCINFOA: "docInfo", tagHELPINFO: "helpInfo",
  tagCOMPAREITEMSTRUCT: "compareItem", tagDELETEITEMSTRUCT: "deleteItem", tagLOGPALETTE: "logPalette", tagPALETTEENTRY: "paletteEntry", tagRGBQUAD: "rgb", _SECURITY_ATTRIBUTES: "securityAttrs",
  _MEMORY_BASIC_INFORMATION: "memInfo", _SYSTEM_INFO: "sysInfo", _CONTEXT: "context", _EXCEPTION_RECORD: "exceptionRecord", _EXCEPTION_POINTERS: "exceptionPointers", tagACCEL: "accel", tagTRACKMOUSEEVENT: "trackMouse",
  HWND: "hWnd", HDC: "hdc", HFONT: "hFont", HBRUSH: "hBrush", HPEN: "hPen", HBITMAP: "hBitmap", HGDIOBJ: "hGdiObject", HMENU: "hMenu", HKEY: "hKey", HINSTANCE: "hInstance", HMODULE: "hModule", HCURSOR: "hCursor",
  HICON: "hIcon", HRGN: "hRgn", HPALETTE: "hPalette", HGLOBAL: "hGlobal", HLOCAL: "hLocal", HACCEL: "hAccel", HIMAGELIST: "hImageList", HTREEITEM: "hTreeItem", HDWP: "hDwp", HRSRC: "hResource", HFILE: "hFile",
  LRESULT: "lResult", WPARAM: "wParam", LPARAM: "lParam", ATOM: "atom", COLORREF: "color", HRESULT: "hr", LSTATUS: "regStatus", BOOL: "ok",
};
const typeName = (type) => {
  const t = type.replace(/\bconst\b/g, "").replace(/\bstruct\b/g, "").trim();
  if (/\[/.test(t)) return null;
  const ptr = (t.match(/\*/g) || []).length;
  const base = t.replace(/\*/g, "").trim();
  if (ptr === 0 && TYPE_NAMES[base]) return TYPE_NAMES[base];
  // Ghidra prints handle types as pointers to their tag struct: HWND__ *
  const h = base.match(/^(HWND|HDC|HFONT|HBRUSH|HPEN|HBITMAP|HMENU|HKEY|HINSTANCE|HICON|HRGN|HPALETTE|HACCEL|HIMAGELIST|HTREEITEM|HDWP|HRSRC)__$/);
  if (h && ptr === 1) return TYPE_NAMES[h[1]];
  if (ptr === 1 && TYPE_NAMES[base] && /^[a-z]/.test(TYPE_NAMES[base]) && !/^h[A-Z]/.test(TYPE_NAMES[base]) && !/^(ok|wParam|lParam|lResult|regStatus|hr|color|atom)$/.test(TYPE_NAMES[base])) return "p" + TYPE_NAMES[base][0].toUpperCase() + TYPE_NAMES[base].slice(1);
  return null;
};

// OWL event handlers: parameter names after the message's arguments (OWL's own naming)
const EV_PARAMS = {
  EvSize: ["sizeType", "size"], EvMove: ["clientOrigin"], EvChar: ["key", "repeatCount", "flags"], EvKeyDown: ["key", "repeatCount", "flags"], EvKeyUp: ["key", "repeatCount", "flags"],
  EvSysKeyDown: ["key", "repeatCount", "flags"], EvSysChar: ["key", "repeatCount", "flags"], EvLButtonDown: ["modKeys", "point"], EvLButtonUp: ["modKeys", "point"], EvLButtonDblClk: ["modKeys", "point"],
  EvRButtonDown: ["modKeys", "point"], EvRButtonUp: ["modKeys", "point"], EvMButtonDown: ["modKeys", "point"], EvMouseMove: ["modKeys", "point"], EvTimer: ["timerId"], EvSetFocus: ["hWndLostFocus"],
  EvKillFocus: ["hWndGetFocus"], EvHScroll: ["scrollCode", "thumbPos", "hWndCtl"], EvVScroll: ["scrollCode", "thumbPos", "hWndCtl"], EvCtlColor: ["hdc", "hWndChild", "ctlType"],
  EvDrawItem: ["ctrlId", "drawInfo"], EvMeasureItem: ["ctrlId", "measureInfo"], EvGetMinMaxInfo: ["minMaxInfo"], EvSysCommand: ["cmdType", "point"], EvActivate: ["active", "minimized", "hWndOther"],
  EvCreate: ["createStruct"], EvEraseBkgnd: ["hdc"], EvSetCursor: ["hWndCursor", "hitTest", "mouseMsg"], EvMenuSelect: ["menuItemId", "flags", "hMenu"], EvInitMenuPopup: ["hPopupMenu", "index", "sysMenu"],
  EvShowWindow: ["show", "status"], EvWindowPosChanged: ["windowPos"], EvWindowPosChanging: ["windowPos"], EvActivateApp: ["active", "threadId"], EvSysColorChange: [], EvDropFiles: ["dropInfo"],
  EvHelp: ["helpInfo"], EvContextMenu: ["hWndChild", "x", "y"], EvNotify: ["ctlId", "notifyInfo"], EvCommand: ["id", "hWndCtl", "notifyCode"], EvMouseWheel: ["modKeys", "zDelta", "point"],
  EvParentNotify: ["event", "childHandleOrX", "childIdOrY"], EvSetFont: ["hFont", "redraw"], EvNCHitTest: ["point"], EvNCLButtonDown: ["hitTest", "point"], EvMDIActivate: ["hWndActivated", "hWndDeactivated"],
  EvCompareItem: ["ctrlId", "compareInfo"], EvDeleteItem: ["ctrlId", "deleteInfo"], EvCharToItem: ["key", "hWndListBox", "caretPos"], EvVKeyToItem: ["key", "hWndListBox", "caretPos"],
  EvQueryEndSession: [], EvEndSession: ["endSession", "logOff"], EvSettingChange: ["flags", "section"], EvWinIniChange: ["section"], EvEnable: ["enabled"], EvPaletteChanged: ["hWndPalChg"],
};

// ---------------------------------------------------------------- parsing
function splitTopLevel(s, sep = ",") {
  const out = [];
  let d = 0, start = 0;
  for (let i = 0; i < s.length; i++) {
    const c = s[i];
    if (c === "(" || c === "[" || c === "{") d++;
    else if (c === ")" || c === "]" || c === "}") d--;
    else if (c === '"' || c === "'") { const q = c; for (i++; i < s.length && s[i] !== q; i++) if (s[i] === "\\") i++; }
    else if (d === 0 && c === sep) { out.push(s.slice(start, i)); start = i + 1; }
  }
  out.push(s.slice(start));
  return out.map((x) => x.trim());
}
// one function's text -> declared variables and statement lines
function parse(text) {
  const lines = text.split("\n");
  const bi = lines.indexOf("{");
  if (bi < 1) return null;
  let pi = bi - 1;
  while (pi > 0 && lines[pi].trim() === "") pi--;
  const proto = lines[pi];
  const open = proto.indexOf("(");
  const params = [];
  if (open >= 0) {
    let d = 0, close = -1;
    for (let i = open; i < proto.length; i++) { if (proto[i] === "(") d++; else if (proto[i] === ")") { d--; if (d === 0) { close = i; break; } } }
    const inner = close > open ? proto.slice(open + 1, close).trim() : "";
    if (inner && inner !== "void" && inner !== "...") {
      for (const p of splitTopLevel(inner)) {
        const m = p.match(/^(.*?)([A-Za-z_][A-Za-z0-9_]*)\s*((?:\[[^\]]*\])*)$/);
        if (m && m[1].trim()) params.push({ name: m[2], type: (m[1] + m[3]).trim(), param: true });
        else params.push({ name: null, type: p, param: true });
      }
    }
  }
  const locals = [];
  let i = bi + 1;
  for (; i < lines.length; i++) {
    const l = lines[i];
    if (!/^  \S.*;$/.test(l) || /[=(]/.test(l.replace(/\(\*[A-Za-z_]\w*\)/, ""))) break;
    const m = l.match(/^  (.*?)([A-Za-z_][A-Za-z0-9_]*)\s*((?:\[[^\]]*\]\s*)*);$/);
    if (!m) break;
    locals.push({ name: m[2], type: (m[1] + m[3]).trim(), line: i });
  }
  return { lines, protoLine: pi, braceLine: bi, bodyStart: i, params, locals };
}

const CALL_SKIP = new Set(["if", "while", "for", "switch", "return", "sizeof", "do", "else", "case", "goto"]);
const stripCasts = (s) => {
  let t = s.trim(), prev;
  do {
    prev = t;
    const m = t.match(/^\((?:const\s+)?[A-Za-z_][A-Za-z0-9_:]*(?:\s+const)?(?:\s*\*+\s*(?:const)?)*\s*\)\s*(.*)$/s);
    if (m) t = m[1].trim();
    if (/^\(.*\)$/s.test(t)) { // redundant outer parentheses
      let d = 0, ok = true;
      for (let i = 0; i < t.length; i++) { if (t[i] === "(") d++; else if (t[i] === ")") { d--; if (d === 0 && i < t.length - 1) { ok = false; break; } } }
      if (ok) t = t.slice(1, -1).trim();
    }
  } while (t !== prev);
  return t;
};
// every call in a line: {callee, args[]}; nested calls included
function findCalls(line, out = []) {
  const re = /([A-Za-z_][A-Za-z0-9_]*(?:::[A-Za-z_~][A-Za-z0-9_]*)*)\s*\(/g;
  let m;
  while ((m = re.exec(line))) {
    const callee = m[1];
    const start = m.index + m[0].length;
    let d = 1, i = start;
    for (; i < line.length && d > 0; i++) {
      const c = line[i];
      if (c === "(") d++; else if (c === ")") d--;
      else if (c === '"' || c === "'") { const q = c; for (i++; i < line.length && line[i] !== q; i++) if (line[i] === "\\") i++; }
    }
    if (d !== 0) continue;
    if (CALL_SKIP.has(callee)) continue;
    // a cast like (int *)(x) is not a call: the identifier is a type when followed by '*' or ')' before '('
    const inner = line.slice(start, i - 1);
    out.push({ callee, args: inner.trim() === "" ? [] : splitTopLevel(inner), at: m.index, end: i });
  }
  return out;
}

// ---------------------------------------------------------------- per-function analysis
function analyse(fn) {
  const P = parse(fn.text);
  if (!P) return null;
  const vars = new Map();
  for (const v of [...P.params, ...P.locals]) if (v.name && !vars.has(v.name)) vars.set(v.name, { ...v, lhs: 0, other: 0, assigns: [], forAssigns: 0, args: [], decl: true });
  // statements: Ghidra wraps long ones over several lines; join them while parentheses are open
  const bodyLines = [];
  {
    let cur = null, depth = 0;
    for (const raw of P.lines.slice(P.bodyStart)) {
      const l = cur === null ? raw : cur + " " + raw.trim();
      let d = 0;
      for (const ch of raw.replace(/"(?:[^"\\]|\\.)*"|'(?:[^'\\]|\\.)*'/g, "")) { if (ch === "(") d++; else if (ch === ")") d--; }
      depth += d;
      if (depth > 0) { cur = l; continue; }
      bodyLines.push(l);
      cur = null; depth = 0;
    }
    if (cur !== null) bodyLines.push(cur);
  }
  const tokens = new Set();
  for (const m of fn.text.matchAll(/[A-Za-z_][A-Za-z0-9_]*/g)) tokens.add(m[0]);
  const tokRe = /[A-Za-z_][A-Za-z0-9_]*/g;
  const calls = [];
  const ehFn = /__InitExceptBlock/.test(fn.text);
  for (let li = 0; li < bodyLines.length; li++) {
    const line = bodyLines[li];
    const t = line.trim();
    // direct assignment V = rhs;
    let am = t.match(/^([A-Za-z_][A-Za-z0-9_]*) = (.*);$/);
    const form = t.match(/^for \(([A-Za-z_][A-Za-z0-9_]*) = ([^;]*);[^;]*;\s*([A-Za-z_][A-Za-z0-9_]*) = ([^)]*(?:\([^)]*\)[^)]*)*)\) \{$/);
    const counted = new Map();
    for (const m of line.matchAll(tokRe)) { if (vars.has(m[0])) counted.set(m[0], (counted.get(m[0]) || 0) + 1); }
    for (const [name, n] of counted) {
      const v = vars.get(name);
      let lhsHere = 0;
      if (am && am[1] === name) { lhsHere = 1; v.assigns.push(am[2]); }
      if (form) {
        if (form[1] === name) { lhsHere++; v.assigns.push(form[2]); v.forAssigns++; }
        if (form[3] === name) { lhsHere++; v.assigns.push(form[4]); v.forAssigns++; }
      }
      v.lhs += lhsHere;
      v.other += n - lhsHere;
      (v.lines ||= []).push(t);
    }
    for (const c of findCalls(line)) {
      calls.push(c);
      c.args.forEach((a, i) => {
        const s = stripCasts(a);
        if (vars.has(s)) vars.get(s).args.push({ callee: c.callee, i, addr: false });
        else if (s.startsWith("&") && vars.has(stripCasts(s.slice(1)))) vars.get(stripCasts(s.slice(1))).args.push({ callee: c.callee, i, addr: true });
      });
    }
  }
  return { P, vars, tokens, calls, ehFn };
}

// ---------------------------------------------------------------- naming
// fns: [{addr, code, display, cls, kind, slot, source, text, protoParams}], ctx: {hand: Map(addr->{tok:name}), apiParams: Map(api->[names]), globalsRenamed}
function nameAll(fns, ctx) {
  const byCode = new Map(fns.map((f) => [f.code, f]));
  const A = new Map();
  for (const f of fns) { const a = analyse(f); if (a) A.set(f.addr, a); }
  const nullRep = ctx.nullRep || "g_nullStringRep";
  const final = new Map(); // addr -> Map(token -> {name, score, rule})

  // callee parameter names usable by callers: name and whether it may travel
  const calleeParamName = (callee, i) => {
    const g = byCode.get(callee);
    if (g) {
      const fm = final.get(g.addr);
      const a = A.get(g.addr);
      if (!fm || !a) return null;
      const p = a.P.params[i];
      if (!p || !p.name) return null;
      const r = fm.get(p.name);
      if (r && r.travel) {
        if (r.name === "self") {
          const cls = g.cls || (/::/.test(g.display) ? g.display.replace(/::[^:]+$/, "") : null);
          const o = cls ? objName(cls) : null;
          return o ? { name: o, score: 35, rule: `passed as 'this' to ${g.display}` } : null;
        }
        return { name: r.name, score: r.score >= 100 ? 50 : 42, rule: `passed as '${r.name}' to ${g.display}` };
      }
      // a name kept local to its function still names a variable that exists only to carry a constant to it
      if (r && r.score >= 100) return { name: r.name, score: 41, rule: `constant passed as '${r.name}' to ${g.display}`, localOnly: true };
      return null;
    }
    const api = callee.replace(/^import_/, "");
    const ps = ctx.apiParams.get(api);
    if (ps && ps[i]) { const n = fromApiParam(ps[i]); if (n) return { name: n, score: 40, rule: `passed as '${ps[i]}' to ${api}` }; }
    return null;
  };

  const ruleCandidates = (f, a, withCalls) => {
    const out = new Map();
    const add = (tok, name, score, rule, travel = false) => {
      if (!name || !IDENT.test(name)) return;
      const cur = out.get(tok);
      if (!cur || score > cur.score) out.set(tok, { name, score, rule, travel });
    };
    const hand = ctx.hand.get(f.addr) || {};
    // a hand name written "~name" stays in its function: callers' arguments are not named after it
    for (const [tok, name] of Object.entries(hand)) {
      if (!a.vars.has(tok)) continue;
      const n = name.name || name;
      add(tok, n.replace(/^~/, ""), 100, name.rule || "hand-assigned", !n.startsWith("~"));
    }
    const members = f.cls && /^(destructor|virtual|message-handler|response-table-find|constructor)$/.test(f.kind || "");
    const params = a.P.params;
    if (members && params[0] && params[0].name && /^(param_1|this_)$/.test(params[0].name) && !/\*\s*\*/.test(params[0].type)) add(params[0].name, "self", 85, "'this' of a member function (" + f.kind + ")", true);
    if (f.kind === "destructor" && params[1] && params[1].name === "param_2") add("param_2", "dtorFlags", 85, "destructor flags (bit 0: free the memory)", true);
    // Borland constructors of classes with virtual bases: a second argument says whether the virtual bases are already built
    if (f.kind === "constructor" && params[1] && params[1].name === "param_2" && f.text.includes("if (param_2 == 0) {")) add("param_2", "vbasesBuilt", 85, "constructor flag: nonzero when the most-derived class has already built the virtual bases", false);
    if (f.kind === "message-handler" && f.cls) {
      const leaf = lastScope(f.display);
      const evp = EV_PARAMS[leaf];
      if (evp && params.length === evp.length + 1) evp.forEach((n, i) => params[i + 1].name && add(params[i + 1].name, n, 80, `${leaf} argument (OWL message cracker)`, true));
      if (/^Ce/.test(leaf) && params.length === 2 && params[1].name) add(params[1].name, "commandEnabler", 80, "command-enabler handler argument (OWL TCommandEnabler&)", true);
    }
    for (const [tok, v] of a.vars) {
      if (!GENERIC.test(tok)) continue;
      const lines = v.lines || [];
      // structured exception frame (Borland __InitExceptBlockLDTC): FS:[0] and the saved previous frame
      if (tok === "in_FS_OFFSET") { add(tok, "sehChainHead", 90, "FS:[0], head of the structured-exception chain"); continue; }
      if (lines.length && lines.every((l) => /^\*(in_FS_OFFSET|sehChainHead) = [A-Za-z_][A-Za-z0-9_]*;$/.test(l))) { add(tok, "sehPrevFrame", 90, "restored into FS:[0] on exit: previous exception-registration frame"); continue; }
      if (a.ehFn && v.lhs > 0 && v.other === v.lhs && v.assigns.length && v.assigns.every((r) => new RegExp(`^${tok} (\\+|-) -?(0x[0-9a-f]+|\\d+)$`).test(r))) { add(tok, "ehDtorCount", 80, "Borland exception frame: count of constructed objects to destroy on unwind"); continue; }
      if (a.ehFn && v.lhs > 0 && v.other === 0 && /^(undefined2|short|ushort|word)$/.test(v.type) && v.assigns.every((r) => /^(0x[0-9a-f]+|\d+)$/.test(r))) { add(tok, "ehContext", 80, "Borland exception frame: current unwind context id"); continue; }
      // a value written and never read
      if (!v.param && v.lhs > 0 && v.other === 0 && v.assigns.every((r) => !new RegExp(`(?<![A-Za-z0-9_])${tok}(?![A-Za-z0-9_])`).test(r))) { add(tok, "unused", 20, "written, never read (a dead store left by the decompiler)"); continue; }
      // Borland std::string internals: rep = data - 12 {refs, capacity, length}, data pointer, length
      const repRhs = (r) => /^(\([a-z ]+\*\))?\(?(.+) \+ -(0xc|3)\)?$/.test(r);
      if (v.assigns.length && v.assigns.every(repRhs) && lines.some((l) => l.includes(`${tok} == &${nullRep}`) || l.includes(`${tok} != &${nullRep}`) || l.includes(`${tok} == (`) && l.includes(`&${nullRep}`))) { add(tok, "strRep", 30, "string rep (data - 12: refs, capacity, length), compared with the shared empty rep"); continue; }
      if (v.assigns.length && v.assigns.every((r) => /^std::string::__getRep\(/.test(r))) { add(tok, "newRep", 35, "result of std::string::__getRep"); continue; }
      // string copy sequence: refs = data[-12]; if (refs == -1 || refs + 1 < 0) { len = data[-4]; rep = __getRep(..); copy } else { share the rep }
      if (v.assigns.length && v.assigns.every((r) => /^std::string::__getRep\(/.test(r) || repRhs(r)) && v.assigns.some((r) => /^std::string::__getRep\(/.test(r)) &&
          lines.some((l) => l.includes(`${tok} != &${nullRep}`) || l.includes(`${tok} == &${nullRep}`))) { add(tok, "rep", 30, "string rep: a new one from std::string::__getRep, or the source's (shared)"); continue; }
      if (v.assigns.length && v.assigns.every((r) => /^\*\(int \*\)\(.* \+ -0xc\)$/.test(r) || /^[A-Za-z_]\w*\[-3\]$/.test(r)) && lines.some((l) => l.includes(`if (${tok} == -1 || ${tok} + 1 < 0)`))) { add(tok, "refs", 30, "string refcount (-1 = unshareable: copy instead of sharing)"); continue; }
      if (v.assigns.length && v.assigns.every((r) => /^\*\(uint \*\)\(\*\(int \*\)\(.* \+ 8\) \+ -4\)$/.test(r))) { add(tok, "len", 25, "string length (data - 4)"); continue; }
      // string copy (exception paths): len = s[-1]; rep = __getRep(obj, len, len); data = rep + 3
      if (v.assigns.length && v.assigns.every((r) => /^[A-Za-z_]\w*\[-1\]$/.test(r)) && lines.some((l) => l.includes("std::string::__getRep(") && l.includes(`,${tok},${tok})`))) { add(tok, "len", 25, "string length (data[-1]), the size of the copy"); continue; }
      if (v.assigns.length === 1 && /^[A-Za-z_]\w* \+ 3$/.test(v.assigns[0])) {
        const src = a.vars.get(v.assigns[0].split(" ")[0]);
        if (src && src.assigns.some((r) => /^std::string::__getRep\(/.test(r))) { add(tok, "newData", 30, "character data of a new string rep (rep + 12)"); continue; }
      }
      if (!v.param && /\[\d+\]$/.test(v.type) && lines.length && lines.every((l) => l.includes(`std::string::__getRep(${tok},`) || l.endsWith(` = ${tok};`))) { add(tok, "newStr", 30, "string object whose rep is created here (std::string::__getRep)"); continue; }
      if (v.assigns.length >= 2 && v.assigns.every((r) => r === "1" || /^\*[A-Za-z_][A-Za-z0-9_]* \+ 1$/.test(r) || /^\*\(int \*\)[A-Za-z_][A-Za-z0-9_]* \+ 1$/.test(r)) && lines.some((l) => new RegExp(`^if \\(${tok} != 0\\) goto `).test(l))) { add(tok, "prevRefs", 35, "string refcount before release (0 = sole owner, so free the rep)"); continue; }
      if (!v.param && lines.some((l) => l === `if (${tok} != 0) {` || l === `if (${tok} != (int *)0x0) {` || l === `if (${tok} != (undefined1 *)0x0) {` || l === `if (${tok} != (char *)0x0) {`) &&
          lines.some((l) => l.includes(`(${tok} + -0xc) != -1`) || l.includes(`${tok}[-3] != -1`))) { add(tok, "str", 30, "std::string (pointer to refcounted character data; destroyed here)"); continue; }
      // loop index: assigned only in for-headers, stepping by one
      if (v.forAssigns > 0 && v.forAssigns === v.lhs && v.assigns.some((r) => new RegExp(`^${tok} [+-] (1|-1)$`).test(r))) { add(tok, "i", 30, "loop index"); continue; }
      // upper bytes of a register around a call that returns a byte/short: CONCAT31(extraout_var, b)
      if (/^extraout_var/.test(tok) && lines.length && lines.every((l) => l.includes(`(${tok},`) && /CONCAT(31|22|13)\(/.test(l))) { add(tok, "regHigh", 60, "upper bytes of EAX after a call that returns a byte or short (garbage)"); continue; }
      // an object built in place: its vtable pointer is stored (the last store is the most derived class)
      {
        let cls = null;
        const re = new RegExp(String.raw`^(?:${tok}\[0\]|\*${tok}|${tok}|\*\([a-z0-9_ ]+\*+\)&?${tok}) = \(?(?:[a-z0-9_ ]+\*+\))?&([A-Za-z_][A-Za-z0-9_:]*)::vftable(?:_\d+)?;$`);
        for (const l of lines) { const m = l.match(re); if (m) cls = m[1]; }
        if (cls) { const o = objName(cls.replace(/_ptr$/, "")); if (o) { add(tok, o, 45, `object of class ${cls} (its vtable pointer is stored here)`, true); continue; } }
      }
      const tn = typeName(v.type);
      if (tn) add(tok, tn, 55, `type ${v.type}`, tn !== "ok");
    }
    if (!withCalls) return out;
    // a copy of another variable that has a name: assigned once from it, then only read
    for (const [tok, v] of a.vars) {
      if (!GENERIC.test(tok) || v.param || out.has(tok) || v.assigns.length !== 1 || v.lhs !== 1) continue;
      const src = v.assigns[0].trim();
      if (!a.vars.has(src) || src === tok) continue;
      const s = out.get(src) || (GENERIC.test(src) ? null : { name: src, score: 50 });
      if (!s || s.score < 40 || /^(unused|sehPrevFrame|ehContext|ehDtorCount|regHigh)$/.test(s.name)) continue;
      add(tok, s.name, 28, `copy of ${s.name}`);
    }
    // names carried from callees: arguments and results
    for (const [tok, v] of a.vars) {
      if (!GENERIC.test(tok)) continue;
      if (out.get(tok) && out.get(tok).score >= 50) continue;
      const votes = new Map();
      for (const use of v.args) {
        const c = calleeParamName(use.callee, use.i);
        if (!c) continue;
        const CONST_RHS = /^(\([a-z0-9_ ]+\*?\))?(0x[0-9a-f]+|-?\d+|&[A-Za-z_][A-Za-z0-9_:]*)$/;
        if (c.localOnly && !(v.other === v.args.length && v.args.every((u) => u.callee === use.callee && u.i === use.i) && (v.assigns.length === 0 || v.assigns.length === 1 || v.assigns.every((r) => CONST_RHS.test(r))))) continue;
        let name = c.name;
        if (use.addr && /^p[A-Z]/.test(name)) name = lowerFirst(name.slice(1));
        const k = name;
        const e = votes.get(k) || { name, score: c.score, rule: c.rule, n: 0 };
        e.n++;
        votes.set(k, e);
      }
      if (votes.size) {
        const ranked = [...votes.values()].sort((x, y) => y.score - x.score || y.n - x.n);
        const best = ranked[0];
        const total = ranked.reduce((s, e) => s + e.n, 0);
        // the most specific evidence wins outright (a named parameter beats "an object of class X");
        // between equally specific names the majority must agree
        const clear = votes.size === 1 || best.score > ranked[1].score || best.n * 2 > total;
        if (clear) add(tok, best.name, best.score - (votes.size > 1 ? 3 : 0), best.rule + (votes.size > 1 ? ` (${best.n} of ${total} uses)` : ""), true);
      }
      if (v.assigns.length) {
        const leaves = new Set();
        let ok = true;
        for (const r of v.assigns) {
          const s = stripCasts(r);
          const cm = s.match(/^([A-Za-z_][A-Za-z0-9_]*(?:::[A-Za-z_~][A-Za-z0-9_]*)*)\s*\(/);
          if (!cm) { ok = false; break; }
          const cs = findCalls(s);
          if (!cs.length || cs[0].at !== 0 || cs[0].end !== s.length) { ok = false; break; }
          leaves.add(cm[1]);
        }
        if (ok && leaves.size === 1) {
          const callee = [...leaves][0];
          const g = byCode.get(callee);
          const leaf = g ? lastScope(g.display) : callee.replace(/^import_/, "");
          const n = retFromName(leaf, !!(g && g.handNamed));
          if (n) add(tok, n, g && g.handNamed ? 45 : 40, `result of ${g ? g.display : leaf}`, !!(g && g.handNamed));
        }
      }
    }
    return out;
  };

  for (const f of fns) { const a = A.get(f.addr); if (a) final.set(f.addr, ruleCandidates(f, a, false)); }
  for (let iter = 0; iter < 4; iter++) {
    let changed = 0;
    for (const f of fns) {
      const a = A.get(f.addr);
      if (!a) continue;
      const next = ruleCandidates(f, a, true);
      const prev = final.get(f.addr);
      for (const [k, v] of next) { const p = prev.get(k); if (!p || p.name !== v.name) changed++; }
      final.set(f.addr, next);
    }
    if (!changed) break;
  }

  // resolve: unique, valid, no collision with anything else the function uses
  const result = new Map(); // addr -> {map: Map(tok->name), rows: [[tok,name,rule]]}
  for (const f of fns) {
    const a = A.get(f.addr);
    const cand = final.get(f.addr);
    if (!a || !cand) continue;
    const used = new Set([...a.tokens].filter((t) => !cand.has(t)));
    for (const r of ctx.reserved || []) used.add(r);
    const map = new Map(), rows = [];
    const order = [...a.vars.keys()].filter((t) => cand.has(t)).sort((x, y) => cand.get(y).score - cand.get(x).score || 0);
    const declOrder = [...a.vars.keys()];
    order.sort((x, y) => cand.get(y).score - cand.get(x).score || declOrder.indexOf(x) - declOrder.indexOf(y));
    for (const tok of order) {
      const c = cand.get(tok);
      if (c.name === tok) { used.add(tok); continue; }
      let base = c.name, n = base, k = 2;
      if (RESERVED.has(base) || /^(FUN|DAT|LAB|PTR|param|local)_/.test(base)) { base = base + "_"; n = base; }
      if (base === "i") for (const alt of ["i", "j", "k", "m"]) { if (!used.has(alt)) { n = alt; break; } }
      while (used.has(n) || RESERVED.has(n)) n = base + k++;
      used.add(n);
      map.set(tok, n);
      rows.push([tok, n, c.score >= 100 ? "hand" : "rule", c.rule]);
    }
    result.set(f.addr, { map, rows });
  }
  return result;
}

function applyNames(text, map) {
  if (!map || !map.size) return text;
  const keys = [...map.keys()].sort((a, b) => b.length - a.length).map((k) => k.replace(/[$]/g, "\\$"));
  const re = new RegExp("(?<![A-Za-z0-9_])(" + keys.join("|") + ")(?![A-Za-z0-9_])", "g");
  // leave string and character literals alone
  return text.replace(/("(?:[^"\\\n]|\\.)*"|'(?:[^'\\\n]|\\.)*')|[^"']+/g, (seg, lit) => (lit ? seg : seg.replace(re, (m) => map.get(m))));
}

module.exports = { nameAll, applyNames, parse, GENERIC, objName, lowerFirst, findCalls, stripCasts, splitTopLevel };
