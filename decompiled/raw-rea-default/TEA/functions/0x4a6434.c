// rea decompile_all
// name: FUN_004a6434
// address: 0x4a6434
// body: available
// range: 0x4a6434-0x4a6467 inclusive
// range: 0x4a646d-0x4a6515 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004a6434(undefined4 *param_1,WPARAM param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  HWND local_8;
  
  if (*param_3 == 1) {
    piVar2 = FUN_004a8294((undefined4 *)param_3[5]);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
      return;
    }
  }
  else {
    local_8 = GetDlgItem((HWND)param_1[3],param_3[1]);
    puVar3 = (undefined4 *)FUN_004a614c(local_8,param_1[0x1b]);
    if (puVar3 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)FUN_0049ac6c();
      if (puVar4 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)FUN_004a768c((int)param_1);
      }
      else if (param_1 != puVar4) {
        puVar3 = puVar4;
      }
    }
    if (puVar3 != (undefined4 *)0x0) {
      if (puVar3[3] != 0) {
        FUN_004a76a8((int)puVar3,0x2c,param_2,(LPARAM)param_3);
        return;
      }
      local_18 = 0x2c;
      local_14 = 0;
      local_c = 0;
      cVar1 = (**(code **)(puVar3[2] + 0x84))();
      if (cVar1 != '\0') {
        FUN_0048e7e0(*puVar3,(int)&local_18);
        return;
      }
    }
  }
  FUN_004a5774((int)param_1);
  return;
}

