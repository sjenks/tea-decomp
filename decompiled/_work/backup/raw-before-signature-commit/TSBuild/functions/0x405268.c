// name: FUN_00405268
// address: 0x405268
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00405268(uint param_1,uint param_2,uint param_3)

{
  double dVar1;
  
  if (param_1 != 0) {
    dVar1 = ((double)param_3 * (double)param_1) / (double)param_2;
    FUN_0046e008(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
    FUN_0046ddac();
  }
  return;
}

