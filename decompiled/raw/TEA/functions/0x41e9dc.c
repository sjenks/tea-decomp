// name: FUN_0041e9dc
// address: 0x41e9dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041e9dc(int *param_1,int *param_2)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  byte bVar4;
  tagRECT local_40;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 local_20 [16];
  int local_10;
  int local_c;
  undefined4 local_8;
  
  bVar4 = 0;
  if ((WPARAM *)*param_1 != (WPARAM *)0x0) {
    FUN_004a76a8(*param_2,0x30,*(WPARAM *)*param_1,0);
    (**(code **)(*(int *)(*param_2 + 8) + 0x68))();
    local_8 = 0x216;
    local_40.left = 0;
    local_40.top = 0;
    local_40.right = 0;
    local_40.bottom = 0;
    FUN_004a7a30(*param_2,&local_40);
    ptVar2 = &local_40;
    pLVar3 = &local_30;
    for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pLVar3 = ptVar2->left;
      ptVar2 = (tagRECT *)((int)ptVar2 + ((uint)bVar4 * -2 + 1) * 4);
      pLVar3 = pLVar3 + (uint)bVar4 * -2 + 1;
    }
    local_10 = local_28 - local_30;
    local_c = local_24 - local_2c;
    FUN_004a76a8(*param_2,0x47,0,(LPARAM)local_20);
  }
  return;
}

