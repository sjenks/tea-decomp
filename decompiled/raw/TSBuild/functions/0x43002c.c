// name: FUN_0043002c
// address: 0x43002c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043002c(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_4c;
  int *local_48;
  int *local_44;
  int local_40;
  int *local_3c;
  int local_38;
  char local_31;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  int *local_8;
  
  iVar1 = *(int *)(param_1 + 8);
  FUN_004380e4(iVar1);
  bVar3 = false;
  if (((*(byte *)(iVar1 + 0x74) & 0x40) == 0) && ((*(byte *)(iVar1 + 0x74) & 0x10) == 0)) {
    if ((*(int *)(iVar1 + 0x14) != 0) &&
       ((((*(byte *)(*(int *)(iVar1 + 0x14) + 0x74) & 0x40) != 0 ||
         ((*(byte *)(*(int *)(iVar1 + 0x14) + 0x74) & 0x10) != 0)) &&
        (iVar1 == *(int *)(*(int *)(iVar1 + 0x14) + 0x7a))))) {
      bVar3 = false;
    }
  }
  else {
    bVar3 = true;
  }
  local_8 = param_2;
  FUN_0042df1c(param_2);
  if (!bVar3) {
    FUN_004509d4(param_2,*(int **)(iVar1 + 0x70));
    local_c = *(undefined4 *)(iVar1 + 0x10);
    FUN_004394f4(param_2,&local_c);
    local_10 = *(uint *)(iVar1 + 0x74);
    if (*(int *)(iVar1 + 0xc) != 0) {
      local_10 = local_10 | 2;
    }
    FUN_0042de94(param_2,&local_10,4);
    if ((*(byte *)(iVar1 + 0x74) & 4) == 0) {
      uVar6 = *(uint *)(iVar1 + 0x18) & 0xc6ffffff;
      if (*(int *)(iVar1 + 0xc) != 0) {
        uVar4 = GetWindowLongA(*(HWND *)(iVar1 + 0xc),-0x10);
        uVar6 = uVar6 | uVar4 & 0x39000000;
      }
      local_14 = *(undefined4 *)(iVar1 + 0x38);
      local_18 = *(undefined4 *)(iVar1 + 0x2c);
      local_1c = *(undefined4 *)(iVar1 + 0x28);
      local_20 = *(undefined4 *)(iVar1 + 0x24);
      local_24 = *(undefined4 *)(iVar1 + 0x20);
      local_28 = *(undefined4 *)(iVar1 + 0x1c);
      local_2c = uVar6;
      FUN_0042de94(param_2,&local_2c,4);
      FUN_0042de94(param_2,&local_28,4);
      FUN_0042df1c(param_2);
      FUN_0042df1c(param_2);
      FUN_0042df1c(param_2);
      FUN_0042df1c(param_2);
      FUN_0042de94(param_2,&local_14,4);
    }
    puVar8 = (undefined4 *)(iVar1 + 0x3c);
    puVar7 = (undefined4 *)(iVar1 + 0x30);
    local_30 = *(undefined4 *)(iVar1 + 0x34);
    FUN_0042df1c(param_2);
    piVar5 = FUN_004394f4(param_2,puVar7);
    FUN_004394f4(piVar5,puVar8);
    FUN_0042dee0(param_2);
    FUN_0042fccc(param_2,*(int *)(iVar1 + 0x14));
    if (*(int *)(iVar1 + 0x14) != 0) {
      local_31 = DAT_0047cd05;
      DAT_0047cd05 = 1;
      local_38 = *(int *)(iVar1 + 0x7a);
      local_3c = param_2;
      FUN_0042fccc(param_2,local_38);
      DAT_0047cd05 = local_31;
      if (local_31 != '\0') {
        DAT_0047cd05 = 0;
        local_40 = FUN_004380cc(*(int *)(iVar1 + 0x14));
        local_40 = local_40 + -1;
        local_44 = param_2;
        FUN_0042df1c(param_2);
        for (iVar2 = *(int *)(iVar1 + 0x7e); iVar1 != iVar2; iVar2 = *(int *)(iVar2 + 0x7e)) {
          FUN_0042fccc(param_2,iVar2);
        }
        DAT_0047cd05 = '\x01';
      }
    }
    FUN_004529cc(param_2,*(int **)(iVar1 + 0x44));
    puVar8 = (undefined4 *)(iVar1 + 0x54);
    local_48 = param_2;
    piVar5 = FUN_004509d4(param_2,*(int **)(iVar1 + 0x50));
    FUN_004394f4(piVar5,puVar8);
    local_4c = *(undefined4 *)(iVar1 + 0x5c);
    FUN_0042de94(param_2,&local_4c,4);
  }
  return;
}

