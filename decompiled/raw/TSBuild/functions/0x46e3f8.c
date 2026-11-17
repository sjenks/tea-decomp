// name: FUN_0046e3f8
// address: 0x46e3f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0046e3f8(uint *param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*param_1 * 10 + (ulonglong)param_2;
  *param_1 = (uint)uVar2;
  lVar1 = (ulonglong)param_1[1] * 10 + (uVar2 >> 0x20);
  param_1[1] = (uint)lVar1;
  return (int)((ulonglong)lVar1 >> 0x20);
}

