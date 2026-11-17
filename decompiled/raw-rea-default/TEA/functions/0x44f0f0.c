// rea decompile_all
// name: FUN_0044f0f0
// address: 0x44f0f0
// body: available
// range: 0x44f0f0-0x44f1d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_0044f0f0(LPCSTR param_1,LPCSTR param_2,uint *param_3)

{
  UINT UVar1;
  HSZ hszService;
  HSZ hszTopic;
  HCONV hConv;
  char *pcVar2;
  HDDEDATA pHVar3;
  undefined4 uVar4;
  HCONV hConv_00;
  HSZ hszItem;
  UINT wType;
  DWORD dwTimeout;
  LPDWORD pdwResult;
  
  uVar4 = 0;
  DAT_004f74f8 = 0;
  UVar1 = DdeInitializeA(&DAT_004f74f8,FUN_0044f0dc,0x3c0010,0);
  if (UVar1 == 0) {
    hszService = DdeCreateStringHandleA(DAT_004f74f8,param_1,0x3ec);
    hszTopic = DdeCreateStringHandleA(DAT_004f74f8,param_2,0x3ec);
    hConv = DdeConnect(DAT_004f74f8,hszService,hszTopic,(PCONVCONTEXT)0x0);
    if (hConv == (HCONV)0x0) {
      uVar4 = 2;
    }
    else {
      pdwResult = (LPDWORD)0x0;
      dwTimeout = 10000;
      wType = 0x4050;
      UVar1 = 1;
      hszItem = (HSZ)0x0;
      hConv_00 = hConv;
      pcVar2 = FUN_004dc9f4(param_3);
      pHVar3 = DdeClientTransaction
                         ((LPBYTE)param_3,(DWORD)(pcVar2 + 1),hConv_00,hszItem,UVar1,wType,dwTimeout
                          ,pdwResult);
      if (pHVar3 == (HDDEDATA)0x0) {
        uVar4 = 3;
      }
      DdeDisconnect(hConv);
    }
    DdeFreeStringHandle(DAT_004f74f8,hszService);
    DdeFreeStringHandle(DAT_004f74f8,hszTopic);
    DdeUninitialize(DAT_004f74f8);
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

