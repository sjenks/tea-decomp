// name: FUN_004cbf6c
// address: 0x4cbf6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004cbf6c(HMODULE param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 *in_FS_OFFSET;
  uint local_130 [65];
  undefined4 local_2c;
  undefined2 local_1c;
  
  FUN_004dce64(0x512a74);
  if (DAT_00512a1c == (undefined *)0x0) {
    GetModuleFileNameA(param_1,(LPSTR)local_130,0x104);
    if (DAT_00512a24 == '\0') {
      local_1c = 8;
      FUN_004c09ac((undefined4 *)&DAT_0051b9e4,local_130,param_1,'\x01');
      DAT_00512a24 = DAT_00512a24 + '\x01';
    }
    DAT_00512a1c = &DAT_0051b9e4;
  }
  if (param_3 == (uint *)0x0) {
    param_3 = (uint *)&DAT_00512a2d;
  }
  DAT_0051b78c = param_1;
  DAT_0051b790 = param_2;
  if (param_3 != (uint *)0x0) {
    puVar1 = FUN_004a8c00();
    FUN_004cf41c((int)puVar1,param_3);
  }
  DAT_0051b794 = param_4;
  local_1c = 0x14;
  FUN_004755ac();
  *in_FS_OFFSET = local_2c;
  return;
}

