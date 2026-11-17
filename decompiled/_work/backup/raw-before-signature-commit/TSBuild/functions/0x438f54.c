// name: FUN_00438f54
// address: 0x438f54
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00438f54(undefined4 *param_1,int param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  uint uVar4;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_00467ba8(0x47e864);
  iVar2 = DAT_00484890;
  uVar4 = param_3;
  puVar1 = FUN_004359b3(param_2);
  FUN_004235b8((int)local_14,param_3,puVar1,iVar2);
  FUN_00423088(param_1,(int)local_14,uVar4);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0043901c;
    }
    FUN_0045680c();
  }
LAB_0043901c:
  *param_1 = &PTR_FUN_0047e958;
  param_1[3] = param_2;
  *in_FS_OFFSET = local_38;
  return param_1;
}

