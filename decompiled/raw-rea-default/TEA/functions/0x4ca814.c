// rea decompile_all
// name: FUN_004ca814
// address: 0x4ca814
// body: available
// range: 0x4ca814-0x4ca96c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004ca814(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  undefined4 *local_8;
  
  FUN_004dce64(0x512254);
  if ((*(int *)(param_1 + 0x1c) == 0) ||
     (uVar3 = FUN_004ca7d0(*(int **)(param_1 + 0x1c)), (char)uVar3 == '\0')) {
    uVar3 = 0;
    *in_FS_OFFSET = local_2c;
  }
  else {
    if (*(int *)(*(int *)(param_1 + 0x30) + 1) == 0) {
      FUN_004ca482(*(int *)(param_1 + 0x30),*(int *)(param_1 + 0x2c),*(int *)(param_1 + 0x1c));
    }
    puVar4 = (undefined4 *)FUN_0049cce4(*(int *)(param_1 + 0x1c));
    iVar5 = FUN_00488728(puVar4);
    uVar1 = FUN_0049cd34(*(int *)(param_1 + 0x1c));
    iVar5 = iVar5 / CONCAT22(extraout_var,uVar1);
    local_8 = (undefined4 *)FUN_004cc0f0();
    if (local_8 != (undefined4 *)0x0) {
      local_1c = 0x14;
      uVar7 = 5;
      uVar1 = FUN_0049ccf0(*(int *)(param_1 + 0x1c));
      iVar6 = CONCAT22(extraout_var_00,uVar1);
      uVar3 = 0;
      uVar1 = FUN_0049cd34(*(int *)(param_1 + 0x1c));
      uVar2 = FUN_0049cd1c(*(int *)(param_1 + 0x1c));
      local_38 = CONCAT22(extraout_var_02,uVar2);
      local_34 = CONCAT22(extraout_var_01,uVar1);
      local_30 = local_38;
      FUN_00489df0(local_8,&local_38,uVar3,iVar6,uVar7,iVar5);
      local_1c = 8;
    }
    puVar4 = local_8;
    FUN_0048a134((int)local_8,-1);
    (**(code **)(*(int *)(param_2 + 0x18) + 0x28))();
    iVar5 = 0;
    local_3c = 0;
    for (iVar6 = 0; iVar6 < *(int *)(*(int *)(param_1 + 0x30) + 1); iVar6 = iVar6 + 1) {
      (**(code **)(*(int *)(param_2 + 0x18) + 0x14))();
      iVar5 = *(int *)(param_1 + 0x30);
      if (*(char *)(*(int *)(*(int *)(iVar5 + 9) + iVar6 * 4) + 4) != '\0') {
        iVar5 = FUN_0048a094((int)puVar4,*(int *)(param_1 + 0x20),local_3c);
        local_3c = local_3c + 1;
      }
    }
    uVar3 = CONCAT31((int3)((uint)iVar5 >> 8),1);
    *in_FS_OFFSET = local_2c;
  }
  return uVar3;
}

