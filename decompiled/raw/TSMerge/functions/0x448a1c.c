// name: FUN_00448a1c
// address: 0x448a1c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl
FUN_00448a1c(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    uVar1 = 0;
  }
  else if (param_2 < 0xf000) {
    *param_5 = 0;
    uVar1 = 0;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x2f) = 0;
    uVar1 = FUN_0042bbb4(*param_1,0x112,param_2,param_4);
    *param_5 = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}

