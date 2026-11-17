// name: FUN_0042635c
// address: 0x42635c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_0042635c(uint *param_1)

{
  if (*(int *)((int)param_1 + 5) != DAT_00476c04) {
    FUN_00431504(param_1,0x46b754,&DAT_00476bf0,(uint *)&DAT_00476c04);
    *(int *)((int)param_1 + 5) = DAT_00476c04;
  }
  return param_1;
}

