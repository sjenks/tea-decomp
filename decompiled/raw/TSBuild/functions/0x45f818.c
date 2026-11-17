// name: FUN_0045f818
// address: 0x45f818
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0045f818(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 local_88 [12];
  undefined4 uStack_7c;
  undefined1 local_60 [16];
  uint local_50;
  undefined4 local_4c;
  undefined2 local_3c;
  int local_30;
  int local_28;
  undefined4 local_24 [8];
  
  FUN_00467ba8(0x486b9c);
  local_50 = 0;
  local_3c = 0x14;
  FUN_0045c2d8(local_24,param_1);
  local_30 = local_30 + 1;
  local_3c = 0x20;
  cVar1 = FUN_0045f768((int)local_24);
  if (cVar1 != '\0') {
    FUN_0045f800(*param_1);
    FUN_0045f7b4((int)local_88,param_1);
    local_3c = 0x2c;
    FUN_00459808(&local_28,*param_1);
    local_30 = local_30 + 1;
    piVar2 = (int *)FUN_0045f774(&local_28);
    FUN_0045f990(local_60,piVar2);
    cVar1 = FUN_0045f80c((int)local_60);
    local_30 = local_30 + -1;
    uStack_7c = 0x45f8d8;
    FUN_00405004(&local_28,2);
    if (cVar1 != '\0') {
      local_50 = 1;
    }
    FUN_0045f6c8(*param_1,0);
  }
  local_30 = local_30 + -1;
  FUN_0045c440(local_24,2);
  local_3c = 0;
  if (local_50 != 0) {
    FUN_0045b7d4(*param_1,local_50);
  }
  *in_FS_OFFSET = local_4c;
  return param_1;
}

