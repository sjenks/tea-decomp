// name: FUN_00450b7c
// address: 0x450b7c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl
FUN_00450b7c(uint *param_1,uint param_2,uint *param_3,uint param_4,uint param_5,uint param_6,
            uint param_7,uint param_8,uint param_9)

{
  char *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x4834c0);
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_4;
  param_1[5] = param_8;
  param_1[6] = param_5;
  param_1[7] = param_6;
  if (param_7 == 0) {
    param_7 = 0x104;
  }
  param_1[8] = param_7;
  param_1[9] = param_9;
  uVar3 = FUN_004568d0();
  param_1[2] = uVar3;
  pcVar1 = (char *)param_1[2];
  *pcVar1 = '\0';
  FUN_00450c98(pcVar1,param_1,param_1,(int)param_1,param_3);
  *param_1 = *param_1 | 0x200000;
  bVar2 = FUN_0041b9e4();
  if (bVar2) {
    *param_1 = *param_1 | 0x80000;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

