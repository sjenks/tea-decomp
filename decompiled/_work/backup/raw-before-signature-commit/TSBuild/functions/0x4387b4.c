// name: FUN_004387b4
// address: 0x4387b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004387b4(int param_1,int param_2)

{
  int iVar1;
  BOOL BVar2;
  bool bVar3;
  
  if (DAT_0047e14c == '\0') {
    if (*(int *)(param_1 + 0xc) == 0) {
      switch(param_2) {
      case 0:
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xefffffff;
        break;
      case 1:
      case 9:
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10000000;
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xdeffffff;
        break;
      case 2:
      case 6:
      case 7:
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10000000;
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x20000000;
        break;
      case 3:
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10000000;
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x1000000;
        break;
      case 4:
      case 5:
      case 8:
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10000000;
      }
      bVar3 = true;
    }
    else if (param_2 == 6) {
      iVar1 = FUN_00436d48(param_1,0x112,0xf020,0);
      bVar3 = iVar1 != 0;
    }
    else {
      BVar2 = ShowWindow(*(HWND *)(param_1 + 0xc),param_2);
      bVar3 = BVar2 != 0;
    }
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}

