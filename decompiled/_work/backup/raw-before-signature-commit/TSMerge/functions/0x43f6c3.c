// name: FUN_0043f6c3
// address: 0x43f6c3
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0043f6c3(ushort *param_1,ushort *param_2,undefined4 param_3,int param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = param_5;
  while (iVar2 != 0) {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_2 = uVar1 >> 8 | uVar1 << 8;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  }
  return param_5 * param_4;
}

