// name: FUN_0040dbb8
// address: 0x40dbb8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0040dbb8(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_8;
  
  local_8 = 0;
  do {
    if (*param_1 <= local_8) {
      if (*param_1 < 0x100) {
        FUN_0041ac7c((int)(param_1 + *param_1 * 4 + 2),param_2);
        iVar3 = *param_1;
        *param_1 = *param_1 + 1;
      }
      else {
        iVar3 = -1;
      }
      return iVar3;
    }
    uVar1 = *(uint *)(*(int *)(param_2 + 8) + -4);
    if (uVar1 == *(uint *)(param_1[local_8 * 4 + 4] + -4)) {
      uVar2 = 0;
      if (uVar1 != 0) {
        do {
          if (*(char *)(*(int *)(param_2 + 8) + uVar2) !=
              *(char *)(param_1[local_8 * 4 + 4] + uVar2)) break;
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar1);
      }
      if (uVar1 <= uVar2) {
        return local_8;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

