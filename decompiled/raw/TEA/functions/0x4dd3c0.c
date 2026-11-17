// name: FUN_004dd3c0
// address: 0x4dd3c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004dd3c0(int *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (param_1 == (int *)0x0) {
    FUN_004e5ce8(&DAT_00516ee7,s_xxtype_cpp_00516eeb,0x105);
  }
  if (param_2 == (int *)0x0) {
    FUN_004e5ce8(&DAT_00516ef6,s_xxtype_cpp_00516efa,0x106);
  }
  if (param_2 == param_1) {
    uVar3 = 1;
  }
  else if (((short)param_1[1] == (short)param_2[1]) && (*param_1 == *param_2)) {
    if (((*(ushort *)(param_1 + 1) | *(ushort *)(param_2 + 1)) & 0x80) == 0) {
      pcVar5 = (char *)((uint)*(ushort *)((int)param_1 + 6) + (int)param_1);
      if (*(short *)((int)param_1 + 6) == 0) {
        FUN_004e5ce8(s_tp1_>tpName_00516f05,s_xxtype_cpp_00516f11,0x11e);
      }
      pcVar4 = (char *)((uint)*(ushort *)((int)param_2 + 6) + (int)param_2);
      if (*(short *)((int)param_2 + 6) == 0) {
        FUN_004e5ce8(s_tp2_>tpName_00516f1c,s_xxtype_cpp_00516f28,0x11f);
      }
      do {
        cVar1 = *pcVar5;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
        if (cVar2 != cVar1) {
          return 0;
        }
      } while (cVar1 != '\0');
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

