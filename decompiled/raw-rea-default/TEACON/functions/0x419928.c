// rea decompile_all
// name: FUN_00419928
// address: 0x419928
// body: available
// range: 0x419928-0x419a85 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_00419928(int param_1,int param_2)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  int local_10;
  char local_9;
  int local_8;
  
  iVar3 = FUN_00417ee0();
  if (iVar3 == *(int *)(param_1 + 0x24)) {
    iVar3 = FUN_004181e8();
  }
  else {
    iVar3 = FUN_00418cd4(param_1);
    if ((iVar3 == 0) && (iVar3 = FUN_004197a4(param_1), iVar3 != 0)) {
      if (*(char *)(param_1 + 0x28) == '\0') {
        uVar4 = FUN_004197a4(param_1);
        uVar5 = FUN_004197a4(param_1);
        uVar6 = FUN_004197b0(param_1);
        FUN_00418da8(param_1,uVar6,uVar5,uVar4);
      }
      else {
        uVar4 = FUN_004197c8(param_1);
        uVar5 = FUN_004197a4(param_1);
        uVar6 = FUN_004197b0(param_1);
        FUN_00418da8(param_1,uVar6,uVar5,uVar4);
      }
    }
    local_8 = FUN_004181e8();
    bVar1 = FUN_00418bc0(&param_2,&local_8);
    if (!bVar1) {
      uVar7 = FUN_00418cd4(param_1);
      uVar8 = FUN_004197bc(param_1);
      if (uVar8 < uVar7) {
        local_9 = FUN_0041929c((undefined1 *)&param_2);
        pcVar10 = &local_9;
        iVar3 = FUN_00418cd4(param_1);
        bVar1 = FUN_00416e3c((char *)(iVar3 + -1),pcVar10);
        if (bVar1) {
          FUN_00418d7c(param_1,-1);
          return param_2;
        }
        FUN_00418d7c(param_1,-1);
        uVar2 = FUN_0041929c((undefined1 *)&param_2);
        puVar9 = (undefined1 *)FUN_00418cd4(param_1);
        *puVar9 = uVar2;
        return param_2;
      }
    }
    local_10 = FUN_004181e8();
    bVar1 = FUN_00418bc0(&param_2,&local_10);
    if (bVar1) {
      uVar7 = FUN_00418cd4(param_1);
      uVar8 = FUN_004197bc(param_1);
      if (uVar8 < uVar7) {
        FUN_00418d7c(param_1,-1);
        iVar3 = FUN_0041978c(&param_2);
        return iVar3;
      }
    }
    iVar3 = FUN_004181e8();
  }
  return iVar3;
}

