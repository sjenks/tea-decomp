// name: FUN_004355bc
// address: 0x4355bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004355bc(int param_1,int param_2,uint *param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_8;
  
  if (((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x19))) && (*(short *)(param_1 + 0x1d) == 0))
  {
    uVar1 = FUN_00415374(param_3);
    iVar2 = FUN_00415388(param_3);
    uVar3 = FUN_004153a0(param_3);
    local_8 = (uint)CONCAT21(CONCAT11(uVar1,(char)iVar2),(char)uVar3);
    *(uint *)(*(int *)(param_1 + 0x11) + param_2 * 4) = local_8;
  }
  return;
}

