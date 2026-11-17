// name: FUN_0046914c
// address: 0x46914c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0046914c(undefined4 *param_1,int *param_2,uint *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = *param_3 == DAT_0051b19c;
  if (*param_3 == DAT_0051b19c) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0048c12c(param_3);
  }
  uVar1 = FUN_004a76a8(*param_2,0x443,(uint)bVar3,uVar2);
  *param_1 = uVar1;
  return param_1;
}

