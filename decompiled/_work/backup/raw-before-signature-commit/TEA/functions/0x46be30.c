// name: FUN_0046be30
// address: 0x46be30
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0046be30(int *param_1,byte param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  uVar6 = FUN_0046c024(param_1,param_3);
  if ((char)uVar6 == '\0') {
    FUN_004a7bfc(*param_1,0,0x7f00);
  }
  else {
    FUN_004a7bfc(*param_1,0,0x7f84);
  }
  if (*(char *)((int)param_1 + 0x219) != '\0') {
    if ((param_2 & 1) == 0) {
      *(undefined1 *)((int)param_1 + 0x219) = 0;
      FUN_0046c198(param_1);
      return;
    }
    iVar1 = *(int *)((int)param_1 + 0x166);
    iVar2 = *(int *)(iVar1 + 0x20);
    iVar7 = iVar2 + *(int *)(iVar1 + 0x28);
    iVar8 = *(int *)param_1[0x85];
    iVar3 = *(int *)(iVar8 + 0x2c);
    iVar4 = *(int *)(iVar8 + 0x24);
    iVar5 = *(int *)(iVar8 + 0x20);
    iVar8 = iVar5 + *(int *)(iVar8 + 0x28);
    uVar10 = iVar5 - iVar7;
    iVar9 = (int)uVar10 >> 1;
    if (iVar9 < 0) {
      iVar9 = iVar9 + (uint)((uVar10 & 1) != 0);
    }
    iVar9 = (*param_3 + iVar9) - iVar5;
    iVar7 = iVar7 + iVar9;
    iVar5 = iVar5 + iVar9;
    if (((iVar9 < 1) || ((int)(uVar10 * 8) <= iVar8 - iVar5)) &&
       ((-1 < iVar9 || ((int)(uVar10 * 8) <= iVar7 - iVar2)))) {
      FUN_004a7aa0(*(int *)((int)param_1 + 0x166),(HWND)0x0,iVar2,*(int *)(iVar1 + 0x24),
                   iVar7 - iVar2,*(int *)(iVar1 + 0x2c),0x214);
      FUN_004a7aa0(*(int *)param_1[0x85],(HWND)0x0,iVar5,iVar4,iVar8 - iVar5,iVar3,0x214);
    }
  }
  FUN_004a5774(*param_1);
  return;
}

