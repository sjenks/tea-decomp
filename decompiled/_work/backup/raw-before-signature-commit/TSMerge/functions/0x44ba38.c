// name: FUN_0044ba38
// address: 0x44ba38
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0044ba38(void)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = 0xc; iVar2 < DAT_00470d28; iVar2 = iVar2 + 4) {
    iVar1 = iVar2 * 2 + DAT_00470d3c;
    *(int *)(iVar1 + -8) = iVar1 + -0xc;
    *(int *)(iVar1 + -4) = iVar1 + -0xc;
  }
  iVar2 = DAT_00470d28 * 2 + DAT_00470d3c;
  *(undefined4 *)(iVar2 + -8) = 0;
  *(undefined4 *)(iVar2 + -4) = 0;
  return;
}

