// name: FUN_004a01ec
// address: 0x4a01ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_004a01ec(uint *param_1)

{
  if (*(int *)((int)param_1 + 5) != DAT_0051b1f4) {
    FUN_004aba90(param_1,0x50bfbc,&DAT_0051b1e0,(uint *)&DAT_0051b1f4);
    *(int *)((int)param_1 + 5) = DAT_0051b1f4;
  }
  return param_1;
}

