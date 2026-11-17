// name: FUN_004314f0
// address: 0x4314f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_004314f0(uint *param_1)

{
  if (*(int *)((int)param_1 + 5) != DAT_0048c6ac) {
    FUN_0043c698(param_1,0x47f530,&DAT_0048c698,(uint *)&DAT_0048c6ac);
    *(int *)((int)param_1 + 5) = DAT_0048c6ac;
  }
  return param_1;
}

