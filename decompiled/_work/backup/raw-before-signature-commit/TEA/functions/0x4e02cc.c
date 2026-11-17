// name: FUN_004e02cc
// address: 0x4e02cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004e02cc(int *param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  
  if ((((char)param_1 == *(char *)((int)param_1 + 0x17)) && (param_3 < 3)) && (param_4 < 0x80000000)
     ) {
    if (param_1[2] != 0) {
      FUN_004dedd8(param_1,0,1);
    }
    uVar1 = FUN_004de744(param_1,param_2,param_3,param_4);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

