// name: FUN_0048f258
// address: 0x48f258
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0048f258(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *in_FS_OFFSET;
  uint local_158 [69];
  byte *local_44;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  byte *local_c;
  
  FUN_004dce64(0x5064c0);
  local_28 = 0x14;
  FUN_0048f078((int)local_14,(char *)0x0,param_2,param_4);
  local_1c = local_1c + 1;
  local_28 = 8;
  FUN_004e0344((undefined1 *)local_158,local_c);
  local_28 = 0x20;
  FUN_004cf628(param_1,local_158);
  local_28 = 0x2c;
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      pbVar2 = local_c + -0xc;
      if (pbVar2 == (byte *)&DAT_00513d58) {
        iVar1 = 1;
      }
      else if (pbVar2 == (byte *)&DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *(int *)pbVar2 = *(int *)pbVar2 + -1;
        iVar1 = *(int *)pbVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0048f33f;
    }
    local_44 = local_c + -0xc;
    FUN_004cc0bc();
  }
LAB_0048f33f:
  *in_FS_OFFSET = local_38;
  return param_1;
}

