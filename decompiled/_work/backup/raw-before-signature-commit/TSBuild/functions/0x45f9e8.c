// name: FUN_0045f9e8
// address: 0x45f9e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0045f9e8(int *param_1,undefined1 param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int *piVar4;
  int local_54;
  int local_50;
  uint local_4c;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  undefined4 local_24 [8];
  
  FUN_00467ba8(0x486c40);
  local_4c = 0;
  local_38 = 0x14;
  FUN_0045c2d8(local_24,param_1);
  local_2c = local_2c + 1;
  local_38 = 0x20;
  cVar1 = FUN_0045f768((int)local_24);
  if (cVar1 != '\0') {
    local_54 = FUN_0045b17c();
    piVar4 = &local_54;
    piVar3 = (int *)FUN_0045bea8(*param_1);
    local_50 = FUN_0045de6c(piVar3,param_2);
    bVar2 = FUN_0045bde4(&local_50,piVar4);
    if (bVar2) {
      local_4c = 1;
    }
  }
  local_2c = local_2c + -1;
  FUN_0045c440(local_24,2);
  local_38 = 0;
  if (local_4c != 0) {
    FUN_0045b7d4(*param_1,local_4c);
  }
  *in_FS_OFFSET = local_48;
  return param_1;
}

