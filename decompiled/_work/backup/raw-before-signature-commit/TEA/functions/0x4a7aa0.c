// name: FUN_004a7aa0
// address: 0x4a7aa0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl
FUN_004a7aa0(int param_1,HWND param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  BOOL BVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if ((param_7 & 2) == 0) {
      *(int *)(param_1 + 0x20) = param_3;
      *(int *)(param_1 + 0x24) = param_4;
    }
    if ((param_7 & 1) == 0) {
      *(int *)(param_1 + 0x28) = param_5;
      *(int *)(param_1 + 0x2c) = param_6;
    }
    if ((param_7 & 0x40) == 0) {
      if ((param_7 & 0x80) != 0) {
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xefffffff;
      }
    }
    else {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10000000;
    }
    bVar2 = true;
  }
  else {
    BVar1 = SetWindowPos(*(HWND *)(param_1 + 0xc),param_2,param_3,param_4,param_5,param_6,param_7);
    bVar2 = BVar1 != 0;
  }
  return bVar2;
}

