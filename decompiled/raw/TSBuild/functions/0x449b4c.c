// name: FUN_00449b4c
// address: 0x449b4c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00449b4c(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  if ((param_4 & 1) != 0) {
    *param_1 = *param_1 | 0x80000000;
  }
  if ((param_4 & 2) != 0) {
    *param_1 = *param_1 | 0x40000000;
  }
  if ((param_4 & 0x40) != 0) {
    *param_2 = *param_2;
  }
  if ((param_4 & 0x20) != 0) {
    *param_2 = *param_2 | 1;
  }
  if ((param_4 & 0x10) != 0) {
    *param_2 = *param_2 | 2;
  }
  if ((param_4 & 0x100) != 0) {
    *param_3 = *param_3 | 1;
  }
  if ((param_4 & 0x200) != 0) {
    *param_3 = *param_3 | 2;
  }
  if ((param_4 & 0x400) != 0) {
    *param_3 = *param_3 | 3;
  }
  if ((param_4 & 0x800) != 0) {
    *param_3 = *param_3 | 5;
  }
  return;
}

