// name: FUN_004276e0
// address: 0x4276e0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004276e0(int *param_1,LPMSG param_2)

{
  undefined4 uVar1;
  
  if (param_2->message == 0x100) {
    switch(param_2->wParam) {
    case 0x1b:
      uVar1 = FUN_00428340((int)param_1);
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    case 0x21:
    case 0x25:
    case 0x26:
      uVar1 = FUN_004282a8((int)param_1);
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    case 0x22:
    case 0x27:
    case 0x28:
      uVar1 = FUN_004282f4((int)param_1);
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    case 0x23:
      uVar1 = FUN_004283a8((int)param_1);
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    case 0x24:
      uVar1 = FUN_0042835c((int)param_1);
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  if (param_2->message == 0x20a) {
    param_2->message = 0x115;
    param_2->wParam = (uint)((int)param_2->wParam < 0);
    param_2->lParam = 0;
  }
  uVar1 = FUN_004aebdc(param_1,param_2);
  return uVar1;
}

