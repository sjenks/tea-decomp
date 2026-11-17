// name: FUN_0040d844
// address: 0x40d844
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0040d844(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int local_10;
  uint local_8;
  
  if (DAT_00434680 == 1) {
    local_8 = 0;
    do {
      bVar1 = true;
      piVar5 = &DAT_00434280;
      local_10 = 0;
      do {
        if ((*piVar5 != 0) && (0 < *piVar5 == local_8)) {
          if (bVar1) {
            if (local_8 == 0) {
              FUN_0041ae90(param_2,*(uint *)(*(int *)(param_2 + 8) + -4),0,1,0x2d);
            }
            else {
              FUN_0041ae90(param_2,*(uint *)(*(int *)(param_2 + 8) + -4),0,1,0x2b);
            }
            bVar1 = false;
          }
          if (local_8 == 0) {
            iVar2 = -*piVar5;
          }
          else {
            iVar2 = *piVar5;
          }
          iVar4 = 0;
          if (0 < iVar2) {
            do {
              uVar3 = FUN_00406780(*(int *)(param_1 + 0x112c),*(int *)(param_1 + 0x1130),local_10);
              FUN_0041ae90(param_2,*(uint *)(*(int *)(param_2 + 8) + -4),0,1,(char)uVar3);
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar2);
          }
        }
        local_10 = local_10 + 1;
        piVar5 = piVar5 + 1;
      } while (local_10 < 0x100);
      local_8 = local_8 + 1;
    } while ((int)local_8 < 2);
  }
  return;
}

