// TEA.exe — application module "Persist"
// 20 functions, 0x0044e83c..0x0044f21c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0044e83c  Persist::Persist   (201 bytes)   [analysis (matched TSBuild.exe)]
//   identical body to TSBuild.exe 0x004198b4. opens or creates the registry key (machine-wide first when asked)
int * __cdecl Persist::Persist(int *self,int param_2,int create,int tryLocalMachine)

{
  HKEY hKey;
  int regStatus;
  undefined4 *sehChainHead;
  DWORD lpdwDisposition;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x4f73d4);
  *self = create;
  self[m_hKey / 4] = 0;
  while( true ) {
    if (tryLocalMachine == 0) {
      hKey = (HKEY)0x80000001;
    }
    else {
      hKey = (HKEY)0x80000002;
    }
    ehContext = 8;
    if (*self == 1) {
      regStatus = RegCreateKeyExA(hKey,*(LPCSTR *)(param_2 + 8),0,"Position" + 8,0,0x2001f,
                              (LPSECURITY_ATTRIBUTES)0x0,(PHKEY)(self + m_hKey / 4),&lpdwDisposition);
    }
    else {
      regStatus = RegOpenKeyExA(hKey,*(LPCSTR *)(param_2 + 8),0,0x20019,(PHKEY)(self + m_hKey / 4));
    }
    if (regStatus == 0) break;
    if (tryLocalMachine == 0) {
      self[m_hKey / 4] = 0;
      *sehChainHead = sehPrevFrame;
LAB_0044e8f3:
      *sehChainHead = sehPrevFrame;
      return self;
    }
    tryLocalMachine = 0;
  }
  *sehChainHead = sehPrevFrame;
  goto LAB_0044e8f3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e920  Persist::~Persist   (42 bytes)   [rtti:dtor destructor]
//   written in code as Persist::_dtor
void __cdecl Persist::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    if (*(HKEY *)(self + m_hKey) != (HKEY)0x0) {
      RegCloseKey(*(HKEY *)(self + m_hKey));
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e94c  Persist::QueryString   (116 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00411a4c. reads a REG_SZ value (up to 64 KB) into a std::string; true if present
undefined4 __cdecl Persist::QueryString(int self,int valueName,int out)

{
  int probe;
  LSTATUS regStatus;
  uint buf [15352];
  undefined4 retAddr;
  DWORD typeAndSize [2];
  
  probe = 0x10;
  do {
    probe = probe + -1;
  } while (probe != 0);
  if (*(int *)(self + m_hKey) != 0) {
    typeAndSize[1] = 0x10000;
    typeAndSize[0] = 1;
    retAddr = 0x44e99e;
    regStatus = RegQueryValueExA(*(HKEY *)(self + m_hKey),*(LPCSTR *)(valueName + 8),(LPDWORD)0x0,typeAndSize,
                             (LPBYTE)buf,typeAndSize + 1);
    if (regStatus == 0) {
      probe = std::string::assign_cstr(out,buf);
      return CONCAT31((int3)((uint)probe >> 8),1);
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e9c0  Persist::QueryDword   (83 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00411ac0. reads a REG_DWORD value; true if present
undefined4 __cdecl Persist::QueryDword(int self,int valueName,undefined4 *out)

{
  LSTATUS regStatus;
  DWORD typeAndSize [2];
  undefined4 value;
  
  if (*(int *)(self + m_hKey) != 0) {
    typeAndSize[1] = 4;
    typeAndSize[0] = 4;
    regStatus = RegQueryValueExA(*(HKEY *)(self + m_hKey),*(LPCSTR *)(valueName + 8),(LPDWORD)0x0,typeAndSize,
                             (LPBYTE)&value,typeAndSize + 1);
    if (regStatus == 0) {
      *out = value;
      return CONCAT31((int3)((uint)out >> 8),1);
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ea14  Persist::QueryFont   (364 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00411b14. reads a font value ("height width escapement ... facename") into a LOGFONT; the default text is used when the value is absent
undefined4 __cdecl Persist::QueryFont(int self,int valueName,int defaultText,uint *logFont)

{
  uint len;
  undefined4 found;
  int refs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 text [8];
  int *textData;
  
  __InitExceptBlockLDTC(0x4f7408);
  textData = (int *)0x0;
  refs = *(int *)(*(int *)(defaultText + 8) + -0xc);
  if (refs == -1 || refs + 1 < 0) {
    len = *(uint *)(*(int *)(defaultText + 8) + -4);
    textData = std::string::__getRep(text,len,len);
    textData = textData + 3;
    memcpy(textData,*(undefined4 **)(defaultText + 8),len);
  }
  else {
    textData = *(int **)(defaultText + 8);
    strRep = textData + -3;
    if (strRep != &g_nullStringRep) {
      *strRep = *strRep + 1;
    }
  }
  found = Persist::QueryString(self,valueName,(int)text);
  ParseLogFont((char *)textData,logFont);
  if (textData != (int *)0x0) {
    if (textData[-3] != -1) {
      strRep = textData + -3;
      if (strRep == &g_nullStringRep) {
        refs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        refs = 1;
      }
      else {
        *strRep = *strRep + -1;
        refs = *strRep + 1;
      }
      if (refs != 0) goto LAB_0044eb6e;
    }
    operator_delete();
  }
LAB_0044eb6e:
  *sehChainHead = sehPrevFrame;
  return found;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044eb80  Persist::QueryColour   (248 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00411c80. reads a colour value ("r g b") into a COLORREF; true if present
/* WARNING: Removing unreachable block (ram,0x0044ebbe) */
uint __cdecl Persist::QueryColour(int self,int valueName,uint *colour)

{
  char found;
  undefined4 result;
  uint ret;
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 text [8];
  char *textData;
  
  __InitExceptBlockLDTC(0x4f7460);
  textData = &g_emptyStringData;
  result = Persist::QueryString(self,valueName,(int)text);
  found = (char)result;
  if (found == '\x01') {
    result = ParseColour(textData,colour);
  }
  ret = CONCAT31((int3)((uint)result >> 8),found);
  if (textData != (char *)0x0) {
    if (*(int *)(textData + -0xc) != -1) {
      strRep = (int *)(textData + -0xc);
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep + -1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_0044ec66;
    }
    operator_delete();
  }
LAB_0044ec66:
  *sehChainHead = sehPrevFrame;
  return ret;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ec78  Persist::SetString   (46 bytes)   [analysis]
//   writes a REG_SZ value
void __cdecl Persist::SetString(int self,int valueName,int value)

{
  RegSetValueExA(*(HKEY *)(self + m_hKey),*(LPCSTR *)(valueName + 8),0,1,*(BYTE **)(value + 8),
                 *(int *)(*(BYTE **)(value + 8) + -4) + 1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044eca8  Persist::SetDword   (36 bytes)   [analysis]
//   writes a REG_DWORD value (the value is the third argument on the stack)
void __cdecl Persist::SetDword(int self,int valueName)

{
  RegSetValueExA(*(HKEY *)(self + m_hKey),*(LPCSTR *)(valueName + 8),0,4,&GHIDRA_STACK(0x0000000c),4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044eccc  Persist::SetFont   (219 bytes)   [analysis]
//   writes a LOGFONT as its comma-separated text form
void __cdecl Persist::SetFont(int self,int valueName,undefined4 logFont)

{
  int text;
  int *strRep;
  undefined4 *sehChainHead;
  uint buf [257];
  int unused;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 textStr [8];
  int textData;
  
  __InitExceptBlockLDTC(0x4f74a8);
  FormatLogFont(logFont,(undefined1 *)buf);
  ehContext = 8;
  text = std::string::string_from_cstr((int)textStr,buf);
  ehDtorCount = ehDtorCount + 1;
  Persist::SetString(self,valueName,text);
  ehDtorCount = ehDtorCount + -1;
  if (textData != 0) {
    if (*(int *)(textData + -0xc) != -1) {
      strRep = (int *)(textData + -0xc);
      if (strRep == &g_nullStringRep) {
        text = 1;
      }
      else if (strRep == &g_nullStringRep) {
        text = 1;
      }
      else {
        *strRep = *strRep + -1;
        text = *strRep + 1;
      }
      if (text != 0) goto LAB_0044ed96;
    }
    unused = textData + -0xc;
    operator_delete();
  }
LAB_0044ed96:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044eda8  Persist::SetColour   (219 bytes)   [analysis]
//   writes a COLORREF as "r,g,b"
void __cdecl Persist::SetColour(int self,int valueName,undefined4 colour)

{
  int text;
  int *strRep;
  undefined4 *sehChainHead;
  uint buf [257];
  int unused;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  int str2;
  
  __InitExceptBlockLDTC(0x4f74d8);
  FormatColour(colour,(undefined1 *)buf);
  ehContext = 8;
  text = std::string::string_from_cstr((int)str,buf);
  ehDtorCount = ehDtorCount + 1;
  Persist::SetString(self,valueName,text);
  ehDtorCount = ehDtorCount + -1;
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep = (int *)(str2 + -0xc);
      if (strRep == &g_nullStringRep) {
        text = 1;
      }
      else if (strRep == &g_nullStringRep) {
        text = 1;
      }
      else {
        *strRep = *strRep + -1;
        text = *strRep + 1;
      }
      if (text != 0) goto LAB_0044ee72;
    }
    unused = str2 + -0xc;
    operator_delete();
  }
LAB_0044ee72:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ee84  ParseWindowPlacement   (95 bytes)   [analysis]
//   five comma-separated integers (show state and window rectangle)
//   file placement: inferred (address adjacency)
void __cdecl ParseWindowPlacement(char *text,int *showCmd,int *left,int *top,int *right,int *bottom)

{
  char *token;
  int value;
  
  token = strtok(text,PTR_DAT_004f735c);
  if (token == (char *)0x0) {
    *showCmd = 0;
  }
  else {
    value = atoi(token);
    *showCmd = value;
  }
  value = NextTokenInt();
  *left = value;
  value = NextTokenInt();
  *top = value;
  value = NextTokenInt();
  *right = value;
  value = NextTokenInt();
  *bottom = value;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044eee4  FormatWindowPlacement   (42 bytes)   [analysis]
//   "%d,%d,%d,%d,%d"
//   file placement: inferred (address adjacency)
void __cdecl FormatWindowPlacement(undefined1 *buf)

{
  sprintf(buf,(byte *)"%d,%d,%d,%d,%d");
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ef10  ParseColour   (95 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00411d78. "r g b" -> COLORREF (r | g << 8 | b << 16)
//   file placement: inferred (address adjacency)
uint * __cdecl ParseColour(char *text,uint *colour)

{
  byte red;
  char *token;
  uint green;
  uint blue;
  int value;
  
  token = strtok(text,PTR_DAT_004f735c);
  if (token == (char *)0x0) {
    red = 0;
  }
  else {
    value = atoi(token);
    red = (byte)value;
  }
  green = NextTokenInt();
  blue = NextTokenInt();
  *colour = (uint)red | (green & 0xff) << 8 | (blue & 0xff) << 0x10;
  return colour;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ef70  FormatColour   (50 bytes)   [analysis]
//   "%d,%d,%d" (r, g, b)
//   file placement: inferred (address adjacency)
void __cdecl FormatColour(undefined4 colour,undefined1 *buf)

{
  sprintf(buf,(byte *)("%d,%d,%d,%d,%d" + 6));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044efa4  ParseLogFont   (186 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00411dd8. space-separated LOGFONT fields (height, width, escapement, orientation, weight, italic, underline, strikeout, charset, out/clip precision, quality, pitch) then the face name
//   file placement: inferred (address adjacency)
void __cdecl ParseLogFont(char *text,uint *logFont)

{
  uint value;
  int byteValue;
  uint *faceName;
  
  memset(logFont,0,0x40);
  ParseColour(text,logFont);
  value = NextTokenInt();
  logFont[1] = value;
  value = NextTokenInt();
  logFont[2] = value;
  value = NextTokenInt();
  logFont[3] = value;
  value = NextTokenInt();
  logFont[4] = value;
  value = NextTokenInt();
  logFont[5] = value;
  byteValue = NextTokenInt();
  *(char *)(logFont + 6) = (char)byteValue;
  byteValue = NextTokenInt();
  *(char *)((int)logFont + 0x19) = (char)byteValue;
  byteValue = NextTokenInt();
  *(char *)((int)logFont + 0x1a) = (char)byteValue;
  byteValue = NextTokenInt();
  *(char *)((int)logFont + 0x1b) = (char)byteValue;
  byteValue = NextTokenInt();
  *(char *)(logFont + 7) = (char)byteValue;
  byteValue = NextTokenInt();
  *(char *)((int)logFont + 0x1d) = (char)byteValue;
  byteValue = NextTokenInt();
  *(char *)((int)logFont + 0x1e) = (char)byteValue;
  byteValue = NextTokenInt();
  *(char *)((int)logFont + 0x1f) = (char)byteValue;
  faceName = (uint *)strtok((char *)0x0,PTR_DAT_004f735c);
  if (faceName == (uint *)0x0) {
    *(undefined1 *)(logFont + 8) = 0;
  }
  else {
    strncpy(logFont + 8,faceName,(char *)0x20);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f060  FormatLogFont   (122 bytes)   [analysis]
//   the LOGFONT fields and face name as comma-separated text
//   file placement: inferred (address adjacency)
void __cdecl FormatLogFont(undefined4 logFont,undefined1 *buf)

{
  sprintf(buf,(byte *)"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%s");
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f0dc  DdeNullCallback   (17 bytes)   [analysis]
//   DDE callback that ignores every transaction
//   file placement: inferred (address adjacency)
undefined4 __stdcall DdeNullCallback(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f0f0  SendDdeExecute   (230 bytes)   [analysis]
//   DDE execute of `command` on service/topic (external lookup): 0 sent, 1 DdeInitialize failed, 2 no conversation, 3 transaction failed
//   file placement: inferred (address adjacency)
undefined4 __cdecl SendDdeExecute(LPCSTR service,LPCSTR topic,uint *command)

{
  UINT status;
  HSZ hszService;
  HSZ hszTopic;
  HCONV hConv;
  char *len;
  HDDEDATA result;
  undefined4 error;
  HCONV hConv_00;
  HSZ hszItem;
  UINT wType;
  DWORD dwTimeout;
  LPDWORD pdwResult;
  
  error = 0;
  g_ddeInstance = 0;
  status = DdeInitializeA(&g_ddeInstance,DdeNullCallback,0x3c0010,0);
  if (status == 0) {
    hszService = DdeCreateStringHandleA(g_ddeInstance,service,0x3ec);
    hszTopic = DdeCreateStringHandleA(g_ddeInstance,topic,0x3ec);
    hConv = DdeConnect(g_ddeInstance,hszService,hszTopic,(PCONVCONTEXT)0x0);
    if (hConv == (HCONV)0x0) {
      error = 2;
    }
    else {
      pdwResult = (LPDWORD)0x0;
      dwTimeout = 10000;
      wType = 0x4050;
      status = 1;
      hszItem = (HSZ)0x0;
      hConv_00 = hConv;
      len = strlen(command);
      result = DdeClientTransaction
                         ((LPBYTE)command,(DWORD)(len + 1),hConv_00,hszItem,status,wType,dwTimeout
                          ,pdwResult);
      if (result == (HDDEDATA)0x0) {
        error = 3;
      }
      DdeDisconnect(hConv);
    }
    DdeFreeStringHandle(g_ddeInstance,hszService);
    DdeFreeStringHandle(g_ddeInstance,hszTopic);
    DdeUninitialize(g_ddeInstance);
  }
  else {
    error = 1;
  }
  return error;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f1d8  FloatComputationToInt   (61 bytes)   [analysis]
//   floating-point computation (not visible in the decompile) returned through __ftol
//   file placement: inferred (address adjacency)
undefined4 __stdcall FloatComputationToInt(void)

{
  undefined4 result;
  
  result = __ftol();
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f21c  FloatComputationToInt2   (61 bytes)   [analysis]
//   floating-point computation (not visible in the decompile) converted through __ftol
//   file placement: inferred (address adjacency)
void __stdcall FloatComputationToInt2(void)

{
  __ftol();
  return;
}

} // namespace tea
