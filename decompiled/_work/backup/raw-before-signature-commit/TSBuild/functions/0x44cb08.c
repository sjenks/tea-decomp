// name: FUN_0044cb08
// address: 0x44cb08
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044cb08(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 1) {
    uVar1 = 8;
  }
  else {
    uVar1 = 0;
  }
  CheckMenuItem(*(HMENU *)(param_1 + 0x10),*(UINT *)(param_1 + 0x14),uVar1 | 0x400);
  return;
}

