// name: FUN_004d7274
// address: 0x4d7274
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_004d7274(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6,int param_7,undefined4 param_8,char param_9)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 local_284 [624];
  int local_14;
  
  uVar2 = param_8;
  iVar1 = param_7;
  FUN_004cf0fc((int)local_284,&param_3,param_7);
  uVar3 = FUN_004d1688(iVar1);
  if ((uVar3 & 1) == 0) {
    FUN_004dbfc4((int)local_284);
    FUN_004d6e54((int)local_284,(char)uVar2);
  }
  else {
    FUN_004d7414(local_14 + -0x18,param_9);
    FUN_004d7320((int)local_284);
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  *(undefined1 *)(param_1 + 3) = param_6;
  return param_1;
}

