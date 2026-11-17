// name: FUN_0046a550
// address: 0x46a550
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0046a550(int *param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  
  if ((((char)param_1 == *(char *)((int)param_1 + 0x17)) && (param_3 < 3)) && (param_4 < 0x80000000)
     ) {
    if (param_1[2] != 0) {
      FUN_00469ae0(param_1,0,1);
    }
    uVar1 = FUN_00469480(param_1,param_2,param_3,param_4);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

