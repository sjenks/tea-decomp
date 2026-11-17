// name: FUN_00434898
// address: 0x434898
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00434898(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  byte *local_c;
  char local_5;
  
  FUN_00468bb8();
  if (*(int *)(param_1 + 0x1128) == 0) {
LAB_0043496b:
    iVar2 = (**(code **)(param_1 + 0x114c))
                      (param_1,*(int *)(param_1 + 0x1010) + 3,param_2,0,
                       *(undefined4 *)(param_1 + 0x1140),*(undefined4 *)(param_1 + 0x113c));
    return iVar2 != 0;
  }
  pcVar3 = (char *)(param_2 + 0x80);
  pbVar4 = (byte *)(param_2 + 0x100);
  local_5 = '\0';
  local_c = (byte *)(param_2 + 1000);
LAB_004348d7:
  bVar1 = *local_c;
  if (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x112c) + 0xc) + *(int *)(param_1 + 0x1130) * 4)
               + 8 + (uint)bVar1 * 8) == 0xff) {
    if ((pcVar3 == (char *)(param_2 + *(int *)(param_1 + 0x113c) + 0x80U)) &&
       ((bVar1 == 0 || (bVar1 == 0x20)))) {
      *pcVar3 = local_5;
LAB_00434968:
      *pbVar4 = 0;
      goto LAB_0043496b;
    }
    if (*(char *)(param_1 + 0x1028 + (uint)bVar1) == -1) {
      *pbVar4 = bVar1;
      pbVar4 = pbVar4 + 1;
      local_5 = local_5 + '\x01';
    }
  }
  else {
    *pbVar4 = bVar1;
    pbVar4 = pbVar4 + 1;
    *pcVar3 = local_5;
    pcVar3 = pcVar3 + 1;
    if ((char *)(param_2 + *(int *)(param_1 + 0x113c) + 0x80U) < pcVar3) goto LAB_00434968;
  }
  local_c = local_c + 1;
  goto LAB_004348d7;
}

