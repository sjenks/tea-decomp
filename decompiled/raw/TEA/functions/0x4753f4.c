// name: FUN_004753f4
// address: 0x4753f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004753f4(int param_1,int param_2,LPCSTR param_3)

{
  DWORD DVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  uint local_170 [67];
  uint *local_64;
  undefined1 *local_60;
  undefined4 local_5c;
  int local_58;
  LPSTR local_4c;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  uint *local_c;
  
  FUN_004dce64(0x4ffbd4);
  DVar1 = GetFullPathNameA(param_3,0x104,(LPSTR)local_170,&local_4c);
  if (DVar1 == 0) goto LAB_00475571;
  local_38 = 0x14;
  FUN_004cf628((int)local_24,local_170);
  local_2c = local_2c + 1;
  FUN_00435de0((int)local_14,(int)local_24);
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar4 = (int *)(local_1c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4 + 1;
      }
      if (iVar2 != 0) goto LAB_004754d5;
    }
    local_58 = local_1c + -0xc;
    FUN_004cc0bc();
    local_5c = 0;
    local_60 = local_24;
    local_1c = 0;
  }
LAB_004754d5:
  local_38 = 8;
  FUN_0041251c(param_2,local_c);
  FUN_00464bb4(*(int *)(param_1 + 0x70),local_c);
  local_2c = local_2c + -1;
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      puVar3 = local_c + -3;
      if (puVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (puVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *puVar3 = *puVar3 - 1;
        iVar2 = *puVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_00475571;
    }
    local_64 = local_c + -3;
    FUN_004cc0bc();
  }
LAB_00475571:
  *in_FS_OFFSET = local_48;
  return;
}

