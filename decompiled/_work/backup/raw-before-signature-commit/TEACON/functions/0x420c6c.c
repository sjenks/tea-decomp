// name: FUN_00420c6c
// address: 0x420c6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_00420c6c(char *param_1,char *param_2,int *param_3)

{
  int *piVar1;
  byte *pbVar2;
  char *pcVar3;
  uint uVar4;
  char *unaff_ESI;
  char *pcVar5;
  char *local_c;
  uint local_8;
  
  local_c = param_1;
  if (param_3[3] != 0) {
LAB_00420c8b:
    if (param_2 == (char *)0x0) {
      return unaff_ESI;
    }
    do {
      pcVar3 = (char *)param_3[2];
      if (pcVar3 != (char *)0x0) {
        pcVar5 = param_2;
        if (pcVar3 < param_2) {
          pcVar5 = pcVar3;
        }
        FUN_0041eddc((undefined4 *)local_c,(undefined4 *)*param_3,(uint)pcVar5);
        *param_3 = (int)(pcVar5 + *param_3);
        param_3[2] = param_3[2] - (int)pcVar5;
        if (param_2 == pcVar5) {
          return unaff_ESI;
        }
        local_c = local_c + (int)pcVar5;
        param_2 = param_2 + -(int)pcVar5;
      }
      if ((char *)param_3[3] <= param_2) {
        pcVar5 = param_2 + -((uint)param_2 % (uint)param_3[3]);
        pcVar3 = FUN_004203ec((int)*(char *)((int)param_3 + 0x16),local_c,pcVar5);
        if (param_2 == pcVar3) {
          return unaff_ESI;
        }
        if (pcVar3 == (char *)0xffffffff) {
          *(ushort *)((int)param_3 + 0x12) = *(ushort *)((int)param_3 + 0x12) | 0x10;
          return unaff_ESI;
        }
        local_c = local_c + (int)pcVar3;
        param_2 = param_2 + -(int)pcVar3;
        if (pcVar5 != pcVar3) goto code_r0x00420d18;
      }
      uVar4 = FUN_004212fc(param_3);
      if (uVar4 == 0xffffffff) {
        *(ushort *)((int)param_3 + 0x12) = *(ushort *)((int)param_3 + 0x12) | 0x20;
        return unaff_ESI;
      }
      local_8._0_1_ = (char)uVar4;
      *local_c = (char)local_8;
      local_c = local_c + 1;
      param_2 = param_2 + -1;
      if (param_2 == (char *)0x0) {
        return unaff_ESI;
      }
    } while( true );
  }
  for (; param_2 != (char *)0x0; param_2 = param_2 + -1) {
    piVar1 = param_3 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      local_8 = FUN_004212e4(param_3);
    }
    else {
      pbVar2 = (byte *)*param_3;
      *param_3 = *param_3 + 1;
      local_8 = (uint)*pbVar2;
    }
    if (local_8 == 0xffffffff) break;
    *local_c = (char)local_8;
    local_c = local_c + 1;
  }
  if (local_8 == 0xffffffff) {
    *(ushort *)((int)param_3 + 0x12) = *(ushort *)((int)param_3 + 0x12) | 0x20;
  }
  return unaff_ESI;
code_r0x00420d18:
  if (((*(byte *)((int)param_3 + 0x12) & 0x40) != 0) || (pcVar3 == (char *)0x0)) {
    *(ushort *)((int)param_3 + 0x12) = *(ushort *)((int)param_3 + 0x12) | 0x20;
    return unaff_ESI;
  }
  goto LAB_00420c8b;
}

