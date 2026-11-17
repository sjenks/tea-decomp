// name: FUN_004d4f98
// address: 0x4d4f98
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004d4f98(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_24 [8];
  
  FUN_004dce64(0x514edc);
  local_4c = 0;
  if (param_2 == 0) {
    local_4c = 1;
  }
  else {
    FUN_004d1a74(local_24,param_1);
    cVar1 = FUN_004d4bf4((int)local_24);
    if (cVar1 != '\0') {
      piVar2 = (int *)FUN_004d1758(*param_1);
      iVar3 = FUN_004d50b4(piVar2);
      if (iVar3 != param_3) {
        local_4c = 1;
      }
    }
    FUN_00484c30(local_24,2);
  }
  if (local_4c != 0) {
    FUN_004d1084(*param_1,local_4c);
  }
  *in_FS_OFFSET = local_48;
  return param_1;
}

