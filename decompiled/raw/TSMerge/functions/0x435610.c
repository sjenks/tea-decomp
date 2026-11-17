// name: FUN_00435610
// address: 0x435610
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00435610(int param_1,uint *param_2,uint *param_3,char param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_10;
  int local_8;
  
  local_8 = 0;
  iVar5 = 0;
  do {
    if (*(int *)(param_1 + 0x19) <= iVar5) {
      return local_8;
    }
    puVar1 = (undefined1 *)(*(int *)(param_1 + 0x11) + iVar5 * 4);
    if (*param_2 == (uint)CONCAT12(*puVar1,CONCAT11(puVar1[1],puVar1[2]))) {
      uVar2 = FUN_00415374(param_3);
      iVar3 = FUN_00415388(param_3);
      uVar4 = FUN_004153a0(param_3);
      local_10 = CONCAT31(CONCAT21((short)uVar2,(char)iVar3),(char)uVar4) & 0xffffff;
      *(uint *)(*(int *)(param_1 + 0x11) + iVar5 * 4) = local_10;
      local_8 = local_8 + 1;
      if (param_4 == '\0') {
        return local_8;
      }
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

