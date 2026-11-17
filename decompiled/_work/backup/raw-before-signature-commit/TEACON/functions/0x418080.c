// name: FUN_00418080
// address: 0x418080
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00418080(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_0041f3fc(0x42fecc);
  FUN_00414f78();
  FUN_00414f78();
  puVar2 = (undefined4 *)FUN_00414fac();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00417d8c(puVar2,0);
  }
  param_1[0xe] = (int)puVar2;
  puVar2 = (undefined4 *)FUN_00414fac();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00417d8c(puVar2,0);
  }
  param_1[0xf] = (int)puVar2;
  param_1[0xd] = 0;
  bVar1 = FUN_004181ec(param_1,param_1[9]);
  if ((bVar1) && (iVar3 = FUN_00417ee0(), iVar3 != param_1[9])) {
    if (*(char *)((int)param_1 + 0x29) != '\0') {
      FUN_004181e8();
      (**(code **)(*param_1 + 0x24))();
    }
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)((int)param_1 + 0x29) = 0;
    param_1[0xb] = 0;
    *in_FS_OFFSET = local_30;
  }
  else {
    iVar3 = FUN_00417ee0();
    if (iVar3 == param_1[9]) {
      param_1 = (int *)0x0;
      *in_FS_OFFSET = local_30;
    }
    else {
      if (*(char *)((int)param_1 + 0x29) != '\0') {
        FUN_004181e8();
        (**(code **)(*param_1 + 0x24))();
      }
      FUN_00414f88();
      param_1[0x10] = 0;
      *(undefined1 *)(param_1 + 10) = 0;
      *(undefined1 *)((int)param_1 + 0x29) = 0;
      param_1[0xb] = 0;
      iVar3 = FUN_004181fc(param_1,param_1[9]);
      if (iVar3 == -1) {
        param_1 = (int *)0x0;
        *in_FS_OFFSET = local_30;
      }
      else {
        iVar3 = FUN_00417ee0();
        param_1[9] = iVar3;
        *in_FS_OFFSET = local_30;
      }
    }
  }
  return param_1;
}

