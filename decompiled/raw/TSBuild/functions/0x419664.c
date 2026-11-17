// name: FUN_00419664
// address: 0x419664
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00419664(LPCSTR param_1,char *param_2,uint param_3,int *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  char *pcVar8;
  int local_554 [256];
  undefined4 local_154;
  byte local_104 [256];
  
  *param_4 = 0;
  piVar1 = FUN_0046997c(param_1,&DAT_004776f8);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar3 = 0;
    pbVar6 = local_104;
    do {
      *pbVar6 = (byte)uVar3;
      uVar3 = uVar3 + 1;
      pbVar6 = pbVar6 + 1;
    } while (uVar3 < 0x100);
    while (puVar4 = FUN_00469618(&local_154,0x50,piVar1), puVar4 != (undefined4 *)0x0) {
      *param_4 = *param_4 + 1;
      pcVar8 = thunk_FUN_004676d0((char *)&local_154,'\n');
      if (pcVar8 != (char *)0x0) {
        *pcVar8 = '\0';
      }
      pcVar8 = FUN_004677a0(&local_154);
      if ((((int)pcVar8 < 2) || (3 < (int)pcVar8)) || (local_154._1_1_ != '=')) {
        FUN_00469508(piVar1);
        return 0;
      }
      if (pcVar8 == (char *)0x2) {
        local_104[(byte)local_154] = 0;
      }
      else {
        local_104[(byte)local_154] = local_154._2_1_;
      }
    }
    FUN_00469508(piVar1);
    uVar3 = 0;
    pcVar8 = param_2;
    do {
      uVar7 = 0;
      piVar1 = local_554;
      do {
        *piVar1 = 0;
        uVar7 = uVar7 + 1;
        piVar1 = piVar1 + 1;
        uVar5 = uVar3;
      } while (uVar7 < 0x100);
      for (; ((char)uVar5 != '\0' && (local_554[uVar5 & 0xff] == 0));
          uVar5 = (uint)local_104[uVar5 & 0xff]) {
        local_554[uVar5 & 0xff] = 1;
      }
      if (uVar3 < param_3) {
        *pcVar8 = (char)uVar5;
      }
      uVar3 = uVar3 + 1;
      pcVar8 = pcVar8 + 1;
    } while (uVar3 < 0x100);
    *param_2 = '\0';
    param_2[10] = '\0';
    param_2[0xd] = '\0';
    uVar2 = 1;
  }
  return uVar2;
}

