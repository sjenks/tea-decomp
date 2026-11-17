// name: FUN_0041c1e4
// address: 0x41c1e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041c1e4(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar2 = GetDlgCtrlID(*(HWND *)(*param_1 + 0xc));
  piVar4 = param_1;
  uVar3 = (**(code **)(param_1[3] + 0x6c))();
  iVar1 = param_1[8];
  (**(code **)(*(int *)(iVar1 + 0xc) + 0x74))(iVar1,*(int *)(iVar1 + 0xc),piVar4,iVar1,uVar3,iVar2);
  return;
}

