// name: FUN_004cb50c
// address: 0x4cb50c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004cb50c(uint *param_1,uint *param_2,char param_3)

{
  int in_EAX;
  
  if ((param_3 != '\0') || ((*param_1 & 8) == 0)) {
    *param_1 = *param_1 | 8;
    in_EAX = FUN_004a76a8(*(int *)param_1[10],0x110c,0,(LPARAM)param_1);
    if (in_EAX == 0) {
      *param_1 = *param_1 & 0xfffffff7;
      return 0;
    }
  }
  *param_2 = param_1[2];
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

