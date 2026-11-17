// name: FUN_0044b17c
// address: 0x44b17c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0044b17c(HMODULE param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 *in_FS_OFFSET;
  uint local_130 [65];
  undefined4 local_2c;
  undefined2 local_1c;
  
  FUN_00455f04(0x470ab8);
  if (DAT_00470a60 == (undefined *)0x0) {
    GetModuleFileNameA(param_1,(LPSTR)local_130,0x104);
    if (DAT_00470a68 == '\0') {
      local_1c = 8;
      FUN_00443bf8((undefined4 *)&DAT_004773b8,local_130,param_1,'\x01');
      DAT_00470a68 = DAT_00470a68 + '\x01';
    }
    DAT_00470a60 = &DAT_004773b8;
  }
  if (param_3 == (uint *)0x0) {
    param_3 = (uint *)&DAT_00470a71;
  }
  DAT_00477190 = param_1;
  DAT_00477194 = param_2;
  if (param_3 != (uint *)0x0) {
    puVar1 = FUN_0042e6d8();
    FUN_0044cf10((int)puVar1,param_3);
  }
  DAT_00477198 = param_4;
  local_1c = 0x14;
  FUN_00404270();
  *in_FS_OFFSET = local_2c;
  return;
}

