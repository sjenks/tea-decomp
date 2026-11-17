// name: FUN_004b10dc
// address: 0x4b10dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004b10dc(int param_1,int param_2,uint *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_8;
  
  if (((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x19))) && (*(short *)(param_1 + 0x1d) == 0))
  {
    uVar1 = FUN_0048c160(param_3);
    iVar2 = FUN_0048c174(param_3);
    uVar3 = FUN_0048c18c(param_3);
    local_8 = CONCAT31(CONCAT21((short)uVar1,(char)iVar2),(char)uVar3) & 0xffffff;
    *(uint *)(*(int *)(param_1 + 0x11) + param_2 * 4) = local_8;
  }
  return;
}

