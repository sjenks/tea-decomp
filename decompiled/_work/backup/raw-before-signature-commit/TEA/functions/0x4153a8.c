// name: FUN_004153a8
// address: 0x4153a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004153a8(int param_1,undefined4 param_2,LPARAM param_3)

{
  BOOL BVar1;
  
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    BVar1 = IsWindow(*(HWND *)(**(int **)(param_1 + 0x58) + 0xc));
    if (BVar1 != 0) {
      FUN_004a76a8(**(int **)(param_1 + 0x58),0x407,0,param_3);
    }
  }
  return;
}

