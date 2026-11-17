// name: FUN_0042ddc0
// address: 0x42ddc0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0042ddc0(undefined4 *param_1,int param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  uint uVar4;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_00455f04(0x46aa88);
  iVar2 = DAT_00470a60;
  uVar4 = param_3;
  puVar1 = FUN_0042a81f(param_2);
  FUN_00418444((int)local_14,param_3,puVar1,iVar2);
  FUN_00417f14(param_1,(int)local_14,uVar4);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0042de88;
    }
    FUN_0044b2cc();
  }
LAB_0042de88:
  *param_1 = &PTR_FUN_0046ab7c;
  param_1[3] = param_2;
  *in_FS_OFFSET = local_38;
  return param_1;
}

