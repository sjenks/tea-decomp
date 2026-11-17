// name: FUN_00432ca1
// address: 0x432ca1
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00432ca1(int param_1,int *param_2)

{
  undefined4 in_EAX;
  BOOL BVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if (param_1 == *param_2) {
    uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  else {
    if ((*(uint *)(param_1 + 0x18) & 0xf00) >> 8 == param_2[1]) {
      if (*(int *)(param_1 + 0xc) == 0) {
        bVar3 = (*(byte *)(param_1 + 0x1b) & 0x10) != 0;
      }
      else {
        BVar1 = IsWindowVisible(*(HWND *)(param_1 + 0xc));
        bVar3 = BVar1 != 0;
      }
      if (bVar3) {
        param_2[2] = param_1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

