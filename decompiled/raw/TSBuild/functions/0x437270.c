// name: FUN_00437270
// address: 0x437270
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00437270(int param_1,int param_2,undefined4 param_3,HWND param_4)

{
  int iVar1;
  LRESULT LVar2;
  uint uVar3;
  
  if (param_4 == (HWND)0x0) {
    FUN_00436428(param_1);
  }
  else {
    LVar2 = FUN_00436e00(param_4,*(LPARAM *)(param_1 + 0x6c));
    if (LVar2 != 0) {
      FUN_00438398(LVar2,'\x01');
    }
    uVar3 = GetDlgCtrlID(param_4);
    iVar1 = *(int *)(param_1 + 0x6c);
    *(undefined4 *)(iVar1 + 0x5b) = 0x111;
    *(uint *)(iVar1 + 0x5f) = param_2 << 0x10 | uVar3 & 0xffff;
    *(HWND *)(iVar1 + 99) = param_4;
    (**(code **)(*(int *)(param_1 + 8) + 0x48))();
  }
  return;
}

