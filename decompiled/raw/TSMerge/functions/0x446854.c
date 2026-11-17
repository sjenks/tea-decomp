// name: FUN_00446854
// address: 0x446854
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00446854(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  tagRECT local_14;
  
  if ((param_1[1] != 0) && (*(int *)(param_1[1] + 0xc) != 0)) {
    local_14.left = 0;
    local_14.top = 0;
    local_14.right = 0;
    local_14.bottom = 0;
    FUN_0042d568(param_1[1],&local_14);
    iVar2 = local_14.right - local_14.left;
    iVar4 = local_14.bottom - local_14.top;
    if ((iVar2 != 0) && (0 < param_1[8])) {
      iVar3 = (iVar2 + 1) % param_1[8];
      if ((iVar2 + 1) / param_1[8] + -1 < 1) {
        iVar1 = 1;
      }
      else {
        iVar3 = (iVar2 + 1) % param_1[8];
        iVar1 = (iVar2 + 1) / param_1[8] + -1;
      }
      param_1[0xc] = iVar1;
      if ((param_1[6] == 0) || (param_1[6] <= iVar2)) {
        (**(code **)(*param_1 + 0x40))(*param_1,iVar3,iVar2,param_1,0,param_1[0xc],0);
      }
      else {
        iVar3 = (iVar2 * param_1[4]) / param_1[6];
        (**(code **)(*param_1 + 0x40))
                  (iVar3,(iVar2 * param_1[4]) % param_1[6],*param_1,param_1,0,iVar3,1);
      }
    }
    if ((iVar4 != 0) && (0 < param_1[9])) {
      iVar2 = (iVar4 + 1) % param_1[9];
      if ((iVar4 + 1) / param_1[9] + -1 < 1) {
        iVar3 = 1;
      }
      else {
        iVar2 = (iVar4 + 1) % param_1[9];
        iVar3 = (iVar4 + 1) / param_1[9] + -1;
      }
      param_1[0xd] = iVar3;
      if ((param_1[7] == 0) || (param_1[7] <= iVar4)) {
        (**(code **)(*param_1 + 0x40))(*param_1,iVar2,iVar3,param_1,1,param_1[0xd],0);
      }
      else {
        iVar2 = (iVar4 * param_1[5]) / param_1[7];
        (**(code **)(*param_1 + 0x40))
                  (iVar2,(iVar4 * param_1[5]) % param_1[7],*param_1,param_1,1,iVar2,1);
      }
    }
  }
  return;
}

