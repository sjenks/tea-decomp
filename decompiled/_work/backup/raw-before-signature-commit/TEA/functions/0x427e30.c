// name: FUN_00427e30
// address: 0x427e30
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00427e30(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint local_68 [25];
  
  piVar1 = (int *)FUN_00490dd0(*(int *)(param_1 + 100) + 4,0x1680);
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  puVar2 = FUN_004dd744((int)piVar1,iVar3,(int *)&DAT_00427ee4,(int *)&DAT_00427f30,0);
  if (puVar2 != (undefined4 *)0x0) {
    if ((*(int *)(param_1 + 0x6c) == 0) || (*(int *)(*(int *)(param_1 + 0x6c) + 0x86) == 0)) {
      FUN_004e0344((undefined1 *)local_68,(byte *)s_Page__d_of__d_004f1973);
    }
    else {
      FUN_004e0344((undefined1 *)local_68,(byte *)s_Page__d____d_004f1966);
    }
    FUN_0049ed44((int)puVar2,local_68);
  }
  return;
}

