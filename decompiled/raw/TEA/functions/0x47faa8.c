// name: FUN_0047faa8
// address: 0x47faa8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0047faa8(int param_1)

{
  int iVar1;
  uint in_stack_00000008;
  
  if (*(int *)(param_1 + 0x29c) == 0) {
    FUN_0047c9d0((undefined4 *)param_1,in_stack_00000008,0xd,(int *)0x0);
  }
  FUN_0047f9f8(param_1);
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(param_1 + 0x248) == 3) {
      FUN_004d5374(*(int **)(param_1 + 0x244),(uint *)s__sect_sectd_00501cce);
    }
    iVar1 = FUN_00480608(param_1);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0xc4) = 1;
      *(undefined4 *)(iVar1 + 0xc0) = 1;
    }
  }
  return;
}

