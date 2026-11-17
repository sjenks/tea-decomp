// name: FUN_004865c0
// address: 0x4865c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004865c0(int *param_1,int param_2)

{
  int iVar1;
  uint local_44 [3];
  uint local_38 [13];
  
  if (param_2 == 1) {
    GetWindowTextA(*(HWND *)(param_1[0x1a] + 0xc),(LPSTR)local_38,0x34);
    GetWindowTextA(*(HWND *)(*(int *)((int)param_1 + 0x11a) + 0xc),(LPSTR)local_44,0xc);
    iVar1 = FUN_0048609c((byte *)local_38,(char *)local_44);
    if (iVar1 == 0) {
      (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
      return;
    }
    FUN_004cf41c(param_1[0x18],local_38);
    FUN_004cf41c(param_1[0x19],local_44);
    (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
  }
  FUN_004b0b88(param_1,param_2);
  return;
}

