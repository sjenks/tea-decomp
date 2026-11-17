// name: FUN_00440850
// address: 0x440850
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00440850(int param_1,uint param_2,uint *param_3)

{
  if ((param_2 & 1) != 0) {
    FUN_004407a4(param_1,(uint *)&DAT_0048c630,&DAT_0048c698,'\0');
  }
  if ((param_2 & 2) != 0) {
    FUN_004407a4(param_1,(uint *)&DAT_0048c62c,(uint *)&DAT_0048c6a4,'\0');
  }
  if ((param_2 & 4) != 0) {
    FUN_004407a4(param_1,(uint *)&DAT_0048c634,&DAT_0048c69c,'\0');
  }
  if ((param_2 & 8) != 0) {
    FUN_004407a4(param_1,(uint *)&DAT_0048c650,&DAT_0048c6ac,'\0');
  }
  if ((param_2 & 0x10) != 0) {
    FUN_004407a4(param_1,(uint *)&DAT_0048c648,(uint *)&DAT_0048c674,'\0');
  }
  if (param_3 != (uint *)0x0) {
    FUN_004407a4(param_1,(uint *)&DAT_0048c640,param_3,'\0');
  }
  return;
}

