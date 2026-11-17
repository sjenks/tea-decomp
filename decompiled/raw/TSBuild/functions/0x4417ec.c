// name: FUN_004417ec
// address: 0x4417ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004417ec(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int *piVar4;
  undefined4 local_38;
  
  FUN_00467ba8(0x4803fc);
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = &PTR_FUN_00480aec;
    *(undefined ***)*param_1 = &PTR_LAB_00480b64;
    *(undefined ***)param_1[1] = &PTR_LAB_00480b70;
    while (piVar3 = (int *)FUN_004453d4(param_1 + 5,0), piVar3 != (int *)0x0) {
      piVar4 = piVar3;
      uVar2 = (**(code **)(*piVar3 + 0x2c))();
      if ((char)uVar2 != '\0') {
        (**(code **)(*piVar3 + 0x10))(uVar2,*piVar3,piVar4,piVar3);
      }
      if (piVar3 != (int *)0x0) {
        (**(code **)*piVar3)();
      }
      FUN_0042c95c((int *)(param_1[8] + 0x11));
    }
    while (param_1[7] != 0) {
      puVar1 = (undefined4 *)param_1[7];
      param_1[7] = puVar1[1];
      if ((*(byte *)((int)puVar1 + 0x1d) & 0x80) == 0) {
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)();
        }
      }
      else {
        puVar1[6] = 0;
      }
    }
    FUN_00445414(param_1 + 5);
    if ((param_2 & 2) != 0) {
      FUN_0041e99c(param_1 + 0xd,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_38;
  return;
}

