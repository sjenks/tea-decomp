// rea decompile_all
// name: FUN_004511c8
// address: 0x4511c8
// body: available
// range: 0x4511c8-0x4516c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004511c8(int *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_60;
  
  FUN_004dce64(0x4f7fac);
  if (param_1 == (int *)0x0) goto LAB_004516b5;
  param_1[3] = (int)&PTR_FUN_004f9fac;
  *(undefined ***)param_1[1] = &PTR_LAB_004fa094;
  *(undefined ***)param_1[2] = &PTR_LAB_004fa0a0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fa0ac;
  FUN_0045daf8((int)param_1);
  uVar2 = 0;
  while( true ) {
    iVar1 = param_1[0x322] - param_1[0x321];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if ((uint)(iVar1 >> 2) <= uVar2) break;
    iVar1 = *(int *)(param_1[0x321] + uVar2 * 4);
    if (iVar1 != 0) {
      (*(code *)**(undefined4 **)(iVar1 + 8))();
    }
    uVar2 = uVar2 + 1;
  }
  if ((uint *)param_1[799] != (uint *)0x0) {
    FUN_004ab9b4((uint *)param_1[799],3);
  }
  if (param_1[0x32c] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x32c] + 0xc))();
  }
  if (param_1[0x32b] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x32b] + 0xc))();
  }
  if (param_1[0x32a] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x32a] + 0xc))();
  }
  if (param_1[0x329] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x329] + 0xc))();
  }
  if (param_1[0x1a3] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x1a3] + 0xc))();
  }
  FUN_00411748(param_1[0x1b],3);
  if (param_1[0x1c] != 0) {
    FUN_0041066c(param_1[0x1c],3);
  }
  FUN_004108b8(param_1[0x1d],3);
  FUN_00451754(param_1 + 800,param_1[0x321],param_1[0x322]);
  FUN_004cc0bc();
  FUN_00494064((uint *)(param_1 + 0x31c),0);
  FUN_004cc264((int)(param_1 + 0x1ef),0x44,3,1,&LAB_0041e8d8);
  FUN_0044fc80(param_1 + 0x1b5,2);
  FUN_0045176c(param_1 + 0x1ac,param_1[0x1ad],param_1[0x1ae]);
  FUN_004cc0bc();
  if (param_1[0x1a8] != 0) {
    if (*(int *)(param_1[0x1a8] + -0xc) != -1) {
      piVar3 = (int *)(param_1[0x1a8] + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_00451501;
    }
    FUN_004cc0bc();
    param_1[0x1a8] = 0;
  }
LAB_00451501:
  FUN_0041bc94(param_1 + 0x172,2);
  FUN_0041b094(param_1 + 0x143,2);
  FUN_0041b7d4(param_1 + 0x116,2);
  FUN_0041bc94(param_1 + 0xe5,2);
  FUN_0041b094(param_1 + 0xb6,2);
  FUN_00417b74(param_1 + 0x84,2);
  FUN_0041c3b4(param_1 + 0x56,2);
  piVar3 = param_1 + 0x2a;
  *(int *)(param_1[0x2b] + -4) = *(int *)(param_1[0x2b] + -4) + -4;
  *(int *)(*piVar3 + -4) = *(int *)(*piVar3 + -4) + -4;
  FUN_004ad9d8(piVar3,0);
  *(int *)(param_1[0x2b] + -4) = *(int *)(param_1[0x2b] + -4) + 4;
  *(int *)(*piVar3 + -4) = *(int *)(*piVar3 + -4) + 4;
  *(int *)(param_1[0x2b] + -4) = *(int *)(param_1[0x2b] + -4) + 0x96;
  FUN_004a52c0(param_1 + 0x34,0);
  *(int *)(param_1[0x2b] + -4) = *(int *)(param_1[0x2b] + -4) + -0x96;
  FUN_00489c54(param_1 + 0x32,0);
  FUN_004c2888((int)(param_1 + 0x1e),2);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xc68;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xc68;
  FUN_00413f3c(param_1,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xc68;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xc68;
  if ((param_2 & 2) != 0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a52c0(param_1 + 0x336,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
    FUN_00489c54(param_1 + 0x334,0);
  }
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_004516b5:
  *in_FS_OFFSET = local_60;
  return;
}

