// name: FUN_004356bc
// address: 0x4356bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004356bc(int param_1,uint param_2,uint *param_3)

{
  if ((param_2 & 1) != 0) {
    FUN_00435610(param_1,(uint *)&DAT_00476b88,&DAT_00476bf0,'\0');
  }
  if ((param_2 & 2) != 0) {
    FUN_00435610(param_1,(uint *)&DAT_00476b84,(uint *)&DAT_00476bfc,'\0');
  }
  if ((param_2 & 4) != 0) {
    FUN_00435610(param_1,(uint *)&DAT_00476b8c,&DAT_00476bf4,'\0');
  }
  if ((param_2 & 8) != 0) {
    FUN_00435610(param_1,(uint *)&DAT_00476ba8,&DAT_00476c04,'\0');
  }
  if ((param_2 & 0x10) != 0) {
    FUN_00435610(param_1,(uint *)&DAT_00476ba0,(uint *)&DAT_00476bcc,'\0');
  }
  if (param_3 != (uint *)0x0) {
    FUN_00435610(param_1,(uint *)&DAT_00476b98,param_3,'\0');
  }
  return;
}

