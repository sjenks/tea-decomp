// name: FUN_0048fb88
// address: 0x48fb88
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0048fb88(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 * param_2 + 4;
  if (iVar1 < 0) {
    iVar1 = param_1 * param_2 + 0xb;
  }
  return iVar1 >> 3;
}

