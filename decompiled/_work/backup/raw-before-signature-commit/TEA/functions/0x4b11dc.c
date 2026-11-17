// name: FUN_004b11dc
// address: 0x4b11dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004b11dc(int param_1,uint param_2,uint *param_3)

{
  if ((param_2 & 1) != 0) {
    FUN_004b1130(param_1,(uint *)&DAT_0051b178,&DAT_0051b1e0,'\0');
  }
  if ((param_2 & 2) != 0) {
    FUN_004b1130(param_1,&DAT_0051b174,&DAT_0051b1ec,'\0');
  }
  if ((param_2 & 4) != 0) {
    FUN_004b1130(param_1,(uint *)&DAT_0051b17c,&DAT_0051b1e4,'\0');
  }
  if ((param_2 & 8) != 0) {
    FUN_004b1130(param_1,&DAT_0051b198,&DAT_0051b1f4,'\0');
  }
  if ((param_2 & 0x10) != 0) {
    FUN_004b1130(param_1,(uint *)&DAT_0051b190,(uint *)&DAT_0051b1bc,'\0');
  }
  if (param_3 != (uint *)0x0) {
    FUN_004b1130(param_1,(uint *)&DAT_0051b188,param_3,'\0');
  }
  return;
}

