// name: FUN_004359b3
// address: 0x4359b3
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __cdecl FUN_004359b3(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  DWORD local_18 [3];
  int local_c;
  
  FUN_00467ba8(0x47e218);
  if (param_1 == 0) {
    *in_FS_OFFSET = local_3c;
    return s_MSWHEEL_ROLLMSG_0047e240 + 0xf;
  }
  FUN_0044e764(local_18);
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
  }
  puVar1 = FUN_00468310(param_1,iVar2,0x403c70);
  FUN_00468420((int)puVar1);
  FUN_0046a5c8(&DAT_0048cb24,(byte *)s__s___u___s__Error___s_0047e2aa);
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
      if (iVar2 != 0) goto LAB_00435ac1;
    }
    FUN_0045680c();
  }
LAB_00435ac1:
  *in_FS_OFFSET = local_3c;
  return &DAT_0048cb24;
}

