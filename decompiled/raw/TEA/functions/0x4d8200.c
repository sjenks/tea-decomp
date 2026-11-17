// name: FUN_004d8200
// address: 0x4d8200
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004d8200(int param_1,char *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  FUN_004dce64(0x51585c);
  local_18 = 8;
  FUN_004ceae8(local_30);
  FUN_004d0348(param_1 + 0x10);
  local_c = local_c + 2;
  FUN_004ceae8(local_38);
  FUN_004d0348(param_1 + 0x20);
  local_c = local_c + 1;
  FUN_004ceae8(local_40);
  FUN_004d0348(param_1 + 0x30);
  local_c = local_c + 1;
  if (param_2 == (char *)0x0) {
    *(undefined1 *)(param_1 + 8) = 0x2e;
    *(undefined1 *)(param_1 + 9) = 0x2c;
  }
  else {
    *(char *)(param_1 + 8) = param_2[1];
    *(char *)(param_1 + 9) = param_2[2];
    FUN_004cf41c(param_1 + 0x10,*(uint **)(param_2 + 4));
    FUN_004cf41c(param_1 + 0x20,*(uint **)(param_2 + 8));
    FUN_004cf41c(param_1 + 0x30,*(uint **)(param_2 + 0xc));
    if (*param_2 != '\0') {
      FUN_004cc0cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

