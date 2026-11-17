// name: FUN_0040dee4
// address: 0x40dee4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0040e02e) */

int __cdecl FUN_0040dee4(int param_1)

{
  DWORD DVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  uint local_154 [68];
  int local_44;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_00455f04(0x463cd0);
  DVar1 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_154,0x104);
  *(undefined1 *)((int)local_154 + DVar1) = 0;
  puVar2 = thunk_FUN_00455e2c(local_154,'\\');
  if (puVar2 == (uint *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined **)(param_1 + 8) = &DAT_00471d68;
    *in_FS_OFFSET = local_38;
    return param_1;
  }
  local_28 = 8;
  iVar3 = FUN_0044f6d0((int)local_14,local_154,(int)puVar2 + (1 - (int)local_154));
  local_1c = local_1c + 1;
  FUN_0040ca90(param_1,iVar3);
  local_28 = 0x14;
  local_1c = local_1c + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar4 = (int *)(local_c + -0xc);
      if (piVar4 == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_0040dfe5;
    }
    local_44 = local_c + -0xc;
    FUN_0044b2cc();
  }
LAB_0040dfe5:
  *in_FS_OFFSET = local_38;
  return param_1;
}

