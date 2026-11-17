// rea decompile_all
// name: FUN_004a5b5c
// address: 0x4a5b5c
// body: available
// range: 0x4a5b5c-0x4a5ccc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004a5b5c(undefined4 *param_1,HWND param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  HWND hWnd;
  LRESULT LVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  HWND local_10;
  char local_9;
  HWND local_8;
  
  hWnd = param_2;
  if (param_3[2] == param_1[3]) {
    for (; (hWnd != (HWND)0x0 && (hWnd != (HWND)param_1[3])); hWnd = GetParent(hWnd)) {
      local_8 = hWnd;
      LVar3 = FUN_004a614c(hWnd,param_1[0x1b]);
      if ((LVar3 != 0) &&
         ((**(code **)(*(int *)(LVar3 + 8) + 0x50))(), (*(byte *)(param_3 + 3) & 1) != 0)) {
        return;
      }
    }
  }
  FUN_004a5b0c(param_1,(int)param_3);
  if (((param_3[2] == param_1[3]) && ((*(byte *)(param_3 + 3) & 1) == 0)) &&
     ((*(byte *)(param_3 + 3) & 2) == 0)) {
    local_9 = '\0';
    local_1c = param_3[1];
    local_20 = 0;
    local_14 = 0;
    while ((local_10 = param_2, LVar3 = FUN_004a614c(param_2,param_1[0x1b]), LVar3 == 0 ||
           (cVar2 = (**(code **)(*(int *)(LVar3 + 8) + 0x84))(), cVar2 == '\0'))) {
      if ((param_2 == (HWND)0x0) || (param_2 == (HWND)param_1[3])) goto LAB_004a5c59;
      param_2 = GetParent(param_2);
    }
    local_9 = '\x01';
LAB_004a5c59:
    if (local_9 == '\0') {
      local_2c = param_3[1];
      local_30 = 0x7fff;
      local_24 = 0;
      puVar1 = (undefined4 *)param_1[0x1b];
      cVar2 = (**(code **)(*(int *)((int)puVar1 + 0x1b) + 0x2c))();
      if ((cVar2 != '\0') &&
         (FUN_0048e7e0(*puVar1,(int)&local_30), (*(byte *)(param_3 + 3) & 1) != 0)) {
        return;
      }
      local_9 = (**(code **)(*(int *)((int)puVar1 + 0x1b) + 0x2c))();
    }
    (**(code **)*param_3)();
  }
  return;
}

