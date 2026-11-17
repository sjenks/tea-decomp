// name: FUN_004566bc
// address: 0x4566bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004566bc(HMODULE param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 *in_FS_OFFSET;
  uint local_130 [65];
  undefined4 local_2c;
  undefined2 local_1c;
  
  FUN_00467ba8(0x4848e8);
  if (DAT_00484890 == (undefined *)0x0) {
    GetModuleFileNameA(param_1,(LPSTR)local_130,0x104);
    if (DAT_00484898 == '\0') {
      local_1c = 8;
      FUN_0044ed8c((undefined4 *)&DAT_0048ce60,local_130,param_1,'\x01');
      DAT_00484898 = DAT_00484898 + '\x01';
    }
    DAT_00484890 = &DAT_0048ce60;
  }
  if (param_3 == (uint *)0x0) {
    param_3 = (uint *)&DAT_004848a1;
  }
  DAT_0048cc38 = param_1;
  DAT_0048cc3c = param_2;
  if (param_3 != (uint *)0x0) {
    puVar1 = FUN_0043986c();
    FUN_00459b6c((int)puVar1,param_3);
  }
  DAT_0048cc40 = param_4;
  local_1c = 0x14;
  FUN_00403870();
  *in_FS_OFFSET = local_2c;
  return;
}

