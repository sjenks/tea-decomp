// name: FUN_0048a244
// address: 0x48a244
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0048a244(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_18;
  int local_14;
  int local_10;
  int local_c [2];
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x25) <= param_2)) {
    uVar2 = 0;
  }
  else {
    iVar4 = 0;
    iVar5 = 0;
    local_14 = *(int *)(param_1 + 0x19) * *(int *)(param_1 + 0x29);
    local_18 = *(int *)(param_1 + 0x15);
    piVar3 = &local_18;
    local_10 = local_18;
    FUN_00489f44(local_c,param_1,param_2,0);
    uVar1 = FUN_0048a2b4(*(uint **)(param_1 + 4),param_3,local_c,piVar3,iVar4,iVar5);
    uVar2 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar2;
}

