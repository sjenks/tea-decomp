// name: FUN_0047fb1c
// address: 0x47fb1c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0047fb1c(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(param_1 + 0x248) == 3) {
      FUN_004d50d0(*(int **)(param_1 + 0x244),0x5c);
      FUN_004d5374(*(int **)(param_1 + 0x244),(uint *)(&PTR_s_sbknone_00501658)[param_2]);
      FUN_004d50d0(*(int **)(param_1 + 0x244),0x20);
    }
    iVar1 = FUN_00480608(param_1);
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0xc0) = param_2;
    }
  }
  return;
}

