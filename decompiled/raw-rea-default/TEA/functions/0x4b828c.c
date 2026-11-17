// rea decompile_all
// name: FUN_004b828c
// address: 0x4b828c
// body: available
// range: 0x4b828c-0x4b83b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_004b828c(int *param_1,int param_2)

{
  int iVar1;
  LPSTR pCVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  undefined **local_18;
  int *local_14;
  undefined1 local_10;
  undefined4 local_f;
  undefined4 local_b;
  
  FUN_004dce64(0x50e768);
  if ((param_2 == 0) && (param_1[0x18] == 0)) {
    uVar4 = 0;
    *in_FS_OFFSET = local_3c;
  }
  else {
    uVar4 = 0;
    local_18 = &PTR_FUN_00505a90;
    local_14 = (int *)0x0;
    local_10 = 1;
    local_f = 0;
    local_b = 0;
    (*(code *)PTR_FUN_00505a98)();
    if ((local_14 != (int *)0x0) && (iVar1 = (**(code **)(*local_14 + 0x38))(), -1 < iVar1)) {
      (**(code **)(param_1[3] + 0x24))();
      pCVar2 = FUN_004b6ba0(param_1,iVar1 + 1);
      if (pCVar2 != (LPSTR)0x0) {
        iVar3 = (**(code **)(*local_14 + 0x1c))();
        if (iVar3 == iVar1) {
          pCVar2[iVar1] = '\0';
          FUN_004a76a8(*param_1,0xb9,0,0);
        }
        uVar4 = (uint)(iVar3 == iVar1);
        FUN_004b6c5c(param_1,pCVar2,'\x01');
      }
    }
    FUN_004bb1e8((int *)&local_18,2);
    *in_FS_OFFSET = local_3c;
  }
  return uVar4;
}

