// name: FUN_00422bc0
// address: 0x422bc0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_00422bc0(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x47a57c);
  *param_1 = &PTR_FUN_00474e18;
  *param_1 = &PTR_FUN_0047a6a0;
  _DAT_0047a558 = _DAT_0047a558 + 1;
  iVar3 = FUN_00456840();
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 8) = 0;
    iVar1 = *(int *)(*(int *)(param_2 + 8) + -0xc);
    if (iVar1 == -1 || iVar1 + 1 < 0) {
      uVar2 = *(uint *)(*(int *)(param_2 + 8) + -4);
      piVar4 = FUN_00459f00(iVar3,uVar2,uVar2);
      *(int **)(iVar3 + 8) = piVar4 + 3;
      FUN_00467580(*(undefined4 **)(iVar3 + 8),*(undefined4 **)(param_2 + 8),uVar2);
    }
    else {
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_2 + 8);
      piVar4 = (int *)(*(int *)(iVar3 + 8) + -0xc);
      if (piVar4 != &DAT_00485bcc) {
        *piVar4 = *piVar4 + 1;
      }
    }
  }
  param_1[1] = iVar3;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

