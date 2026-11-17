// rea decompile_all
// name: FUN_004a6dcc
// address: 0x4a6dcc
// body: available
// range: 0x4a6dcc-0x4a6e18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004a6dcc(int param_1,HMENU param_2)

{
  LPCSTR lpClassName;
  HWND pHVar1;
  LPCSTR lpWindowName;
  DWORD dwStyle;
  int X;
  int Y;
  int nWidth;
  int nHeight;
  HINSTANCE hInstance;
  LPVOID lpParam;
  
  lpParam = *(LPVOID *)(param_1 + 0x38);
  hInstance = *(HINSTANCE *)(*(int *)(param_1 + 0x70) + 8);
  if (*(int *)(param_1 + 0x14) == 0) {
    pHVar1 = (HWND)0x0;
  }
  else {
    pHVar1 = *(HWND *)(*(int *)(param_1 + 0x14) + 0xc);
  }
  nHeight = *(int *)(param_1 + 0x2c);
  nWidth = *(int *)(param_1 + 0x28);
  Y = *(int *)(param_1 + 0x24);
  X = *(int *)(param_1 + 0x20);
  dwStyle = *(DWORD *)(param_1 + 0x18);
  lpWindowName = *(LPCSTR *)(param_1 + 0x10);
  lpClassName = (LPCSTR)(**(code **)(*(int *)(param_1 + 8) + 0x74))();
  pHVar1 = CreateWindowExA(*(DWORD *)(param_1 + 0x1c),lpClassName,lpWindowName,dwStyle,X,Y,nWidth,
                           nHeight,pHVar1,param_2,hInstance,lpParam);
  *(HWND *)(param_1 + 0xc) = pHVar1;
  return;
}

