// name: FUN_0045fb0c
// address: 0x45fb0c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0045fb0c(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_24 [8];
  
  FUN_00467ba8(0x486cd8);
  local_4c = 0;
  if (param_2 == 0) {
    local_4c = 1;
  }
  else {
    FUN_0045c2d8(local_24,param_1);
    cVar1 = FUN_0045f768((int)local_24);
    if (cVar1 != '\0') {
      piVar2 = (int *)FUN_0045bea8(*param_1);
      iVar3 = FUN_0045fc28(piVar2);
      if (iVar3 != param_3) {
        local_4c = 1;
      }
    }
    FUN_0045c440(local_24,2);
  }
  if (local_4c != 0) {
    FUN_0045b7d4(*param_1,local_4c);
  }
  *in_FS_OFFSET = local_48;
  return param_1;
}

