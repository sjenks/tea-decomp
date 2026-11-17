// name: FUN_00418b98
// address: 0x418b98
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00418ce2) */

int __cdecl FUN_00418b98(int param_1)

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
  
  FUN_00467ba8(0x477a84);
  DVar1 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_154,0x104);
  *(undefined1 *)((int)local_154 + DVar1) = 0;
  puVar2 = thunk_FUN_00467a68(local_154,'\\');
  if (puVar2 == (uint *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined **)(param_1 + 8) = &DAT_00485bd8;
    *in_FS_OFFSET = local_38;
    return param_1;
  }
  local_28 = 8;
  iVar3 = FUN_0045c644((int)local_14,local_154,(int)puVar2 + (1 - (int)local_154));
  local_1c = local_1c + 1;
  FUN_00417718(param_1,iVar3);
  local_28 = 0x14;
  local_1c = local_1c + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar4 = (int *)(local_c + -0xc);
      if (piVar4 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_00418c99;
    }
    local_44 = local_c + -0xc;
    FUN_0045680c();
  }
LAB_00418c99:
  *in_FS_OFFSET = local_38;
  return param_1;
}

