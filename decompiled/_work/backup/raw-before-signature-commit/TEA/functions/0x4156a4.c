// name: FUN_004156a4
// address: 0x4156a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004156a4(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  if ((param_3 == 0xffff) && (param_4 == 0)) {
    DAT_0051ac88 = 0;
    DAT_0051ac84 = 0;
    return;
  }
  if ((param_3 & 0x870) != 0) {
    DAT_0051ac84 = DAT_0051ac88;
    return;
  }
  if (DAT_0051ac88 != 0xe4c) {
    DAT_0051ac84 = param_2;
  }
  return;
}

