// name: FUN_004ac70c
// address: 0x4ac70c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004ac70c(int *param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  
  if (param_3 == 0) {
    uVar1 = FUN_004a76a8(*param_1,0xf0,0,0);
    *param_2 = uVar1;
  }
  else if (param_3 == 1) {
    FUN_004ac750(param_1,(uint)*param_2);
  }
  return 2;
}

