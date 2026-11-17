// name: FUN_00469618
// address: 0x469618
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Type propagation algorithm not settling */

undefined4 * __cdecl FUN_00469618(undefined4 *param_1,int param_2,int *param_3)

{
  int *piVar1;
  char *pcVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined4 *puVar5;
  uint unaff_EDI;
  char *local_8;
  
  puVar5 = param_1;
  if (param_3[3] == 0) {
    unaff_EDI = 0;
    while ((unaff_EDI != 10 && (param_2 = param_2 + -1, 0 < param_2))) {
      piVar1 = param_3 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        unaff_EDI = FUN_0046a0a0(param_3);
      }
      else {
        pbVar3 = (byte *)*param_3;
        *param_3 = *param_3 + 1;
        unaff_EDI = (uint)*pbVar3;
      }
      if (unaff_EDI == 0xffffffff) break;
      *(char *)puVar5 = (char)unaff_EDI;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  else {
    pcVar2 = (char *)(param_2 - 1);
    do {
      while( true ) {
        if ((int)pcVar2 < 1) goto LAB_00469720;
        local_8 = (char *)param_3[2];
        if ((int)local_8 < 1) break;
        if (pcVar2 <= local_8) {
          local_8 = pcVar2;
        }
        pcVar4 = FUN_00467540((char *)*param_3,'\n',(int)local_8);
        if (pcVar4 != (char *)0x0) {
          local_8 = pcVar4 + (1 - *param_3);
        }
        FUN_00467580(puVar5,(undefined4 *)*param_3,(uint)local_8);
        *param_3 = (int)(local_8 + *param_3);
        param_3[2] = param_3[2] - (int)local_8;
        puVar5 = (undefined4 *)((int)puVar5 + (int)local_8);
        pcVar2 = (char *)((int)pcVar2 - (int)local_8);
        if ((pcVar4 != (char *)0x0) || (pcVar2 == (char *)0x0)) {
          unaff_EDI = 10;
          goto LAB_00469720;
        }
      }
      piVar1 = param_3 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        unaff_EDI = FUN_0046a0a0(param_3);
      }
      else {
        pbVar3 = (byte *)*param_3;
        *param_3 = *param_3 + 1;
        unaff_EDI = (uint)*pbVar3;
      }
      if (unaff_EDI == 0xffffffff) {
        *(ushort *)((int)param_3 + 0x12) = *(ushort *)((int)param_3 + 0x12) | 0x20;
        break;
      }
      *(char *)puVar5 = (char)unaff_EDI;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      pcVar2 = pcVar2 + -1;
    } while (unaff_EDI != 10);
  }
LAB_00469720:
  if ((unaff_EDI == 0xffffffff) && (puVar5 == param_1)) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    *(undefined1 *)puVar5 = 0;
    if ((*(byte *)((int)param_3 + 0x12) & 0x10) != 0) {
      param_1 = (undefined4 *)0x0;
    }
  }
  return param_1;
}

