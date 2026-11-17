// name: FUN_00448960
// address: 0x448960
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined1
FUN_00448960(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,undefined1 param_5)

{
  int iVar1;
  undefined4 uStack_8;
  
  uStack_8 = param_3;
  iVar1 = FUN_00448998(param_4,CONCAT31((int3)((uint)param_2 >> 8),param_5),
                       (undefined1 *)((int)&uStack_8 + 3));
  if (iVar1 == 0) {
    iVar1 = FUN_0042b294(*param_4);
    uStack_8 = (uint)(iVar1 != 0) << 0x18;
  }
  return uStack_8._3_1_;
}

