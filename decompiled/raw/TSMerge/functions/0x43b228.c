// name: FUN_0043b228
// address: 0x43b228
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043b228(int *param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  bool bVar2;
  WPARAM WVar3;
  WPARAM WVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  uint uVar9;
  int iVar11;
  WPARAM WVar12;
  int local_8;
  int iVar10;
  
  local_8 = 0;
  if (param_3 <= param_4) {
    bVar1 = true;
    WVar3 = FUN_0042d1a4(*param_1,0xc9,param_3,0);
    WVar4 = FUN_0042d1a4(*param_1,0xc9,param_4,0);
    iVar5 = FUN_0042d1a4(*param_1,0xbb,WVar3,0);
    iVar6 = FUN_0042d1a4(*param_1,0xbb,WVar4,0);
    WVar12 = WVar3;
    while (((int)WVar12 <= (int)WVar4 && (bVar1))) {
      iVar7 = FUN_0043ae50(param_1,WVar12);
      puVar8 = (undefined2 *)FUN_0044b390();
      iVar11 = param_3 - iVar5;
      if (WVar12 != WVar3) {
        iVar11 = 0;
      }
      iVar10 = iVar7;
      if ((WVar12 == WVar4) && (iVar10 = param_4 - iVar6, iVar7 < (int)(param_4 - iVar6))) {
        iVar10 = iVar7;
      }
      uVar9 = iVar10 - iVar11;
      bVar2 = FUN_0043ae94(param_1,puVar8,iVar7 + 2,WVar12);
      if (bVar2) {
        if (0 < (int)uVar9) {
          FUN_004559d0((undefined4 *)(param_2 + local_8),(undefined4 *)((int)puVar8 + iVar11),uVar9)
          ;
          local_8 = local_8 + uVar9;
        }
        if (WVar12 != WVar4) {
          *(undefined1 *)(param_2 + local_8) = 0xd;
          *(undefined1 *)(param_2 + local_8 + 1) = 10;
          local_8 = local_8 + 2;
        }
      }
      else {
        bVar1 = false;
      }
      FUN_0044b2dc();
      WVar12 = WVar12 + 1;
    }
  }
  *(undefined1 *)(param_2 + local_8) = 0;
  return;
}

