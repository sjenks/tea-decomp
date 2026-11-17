// name: FUN_00461484
// address: 0x461484
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00461484(int param_1,int param_2,uint *param_3,int *param_4)

{
  WPARAM WVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(*(int *)(param_2 + 8) + -4);
  if (((*(int *)(param_3[4] - 4) == 0) != (iVar2 == 0)) &&
     (uVar3 = (uint)(iVar2 != 0), uVar3 != *param_3)) {
    *param_3 = uVar3;
    if (*param_3 == 0) {
      WVar1 = 0;
    }
    else {
      WVar1 = 2;
    }
    FUN_004ac750(param_4,WVar1);
  }
  FUN_004cf384((int)(param_3 + 2),param_2);
  iVar2 = FUN_004a76a8(*param_4,0xf0,0,0);
  if (iVar2 == 1) {
    FUN_004cf384(*(int *)(param_1 + 0x60) + 0x20,param_2);
  }
  return;
}

