// name: FUN_0043d314
// address: 0x43d314
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043d314(int *param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  
  if (param_3 == 0) {
    uVar1 = FUN_00438338(*param_1,0xf0,0,0);
    *param_2 = uVar1;
  }
  else if (param_3 == 1) {
    FUN_0043d358(param_1,(uint)*param_2);
  }
  return 2;
}

