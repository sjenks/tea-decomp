// name: FUN_00418afc
// address: 0x418afc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00418b13) */

bool __cdecl FUN_00418afc(int param_1)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  
  pcVar1 = thunk_FUN_00467540(*(char **)(param_1 + 8),':',*(int *)(*(int *)(param_1 + 8) + -4));
  iVar2 = DAT_00485f20;
  if (pcVar1 != (char *)0x0) {
    iVar2 = (int)pcVar1 - *(int *)(param_1 + 8);
  }
  if (iVar2 == -1) {
    if ((*(int *)(*(char **)(param_1 + 8) + -4) == 0) || (**(char **)(param_1 + 8) != '\\')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  else {
    bVar3 = *(char *)(*(int *)(param_1 + 8) + iVar2 + 1) != '\\';
  }
  return bVar3;
}

