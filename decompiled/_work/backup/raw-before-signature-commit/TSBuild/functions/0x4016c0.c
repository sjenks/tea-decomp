// name: FUN_004016c0
// address: 0x4016c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004016c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  uint local_8004 [7162];
  undefined4 uStackY_101c;
  
  iVar1 = 8;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  bVar3 = *(int *)(param_1 + 0x1c) != 2;
  if (bVar3) {
    GetWindowTextA(*(HWND *)(*(int *)(param_1 + 0x24) + 0xc),(LPSTR)local_8004,0x8000);
    FUN_00459b6c(param_1 + 0xd58,local_8004);
    GetWindowTextA(*(HWND *)(*(int *)(param_1 + 0xd6) + 0xc),(LPSTR)local_8004,0x8000);
    FUN_00459b6c(param_1 + 0xd68,local_8004);
    uVar2 = FUN_00403588(param_1,(int *)(param_1 + 0xb1c));
    *(undefined4 *)(param_1 + 0xd78) = uVar2;
    uVar2 = FUN_00403588(param_1,(int *)(param_1 + 0xbce));
    *(undefined4 *)(param_1 + 0xd7c) = uVar2;
    uVar2 = FUN_00403588(param_1,(int *)(param_1 + 0xc80));
    *(undefined4 *)(param_1 + 0xd80) = uVar2;
    uStackY_101c = 0x4017a0;
    iVar1 = FUN_00438338(*(int *)(param_1 + 0x2ec),0xf0,0,0);
    *(uint *)(param_1 + 0xd84) = (uint)(iVar1 == 1);
    FUN_00416c8c(param_1 + 0xd38);
  }
  return bVar3;
}

