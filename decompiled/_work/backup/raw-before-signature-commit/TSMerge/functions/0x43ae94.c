// name: FUN_0043ae94
// address: 0x43ae94
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_0043ae94(int *param_1,undefined2 *param_2,uint param_3,WPARAM param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if ((int)param_3 < 1) {
    bVar3 = false;
  }
  else {
    iVar1 = FUN_0043ae50(param_1,param_4);
    bVar3 = iVar1 + 1 <= (int)param_3;
    if (param_3 < 2) {
      *(undefined1 *)param_2 = 0;
      bVar3 = iVar1 == 0;
    }
    else {
      *param_2 = (short)param_3;
      iVar2 = FUN_0042d1a4(*param_1,0xc4,param_4,(LPARAM)param_2);
      *(undefined1 *)((int)param_2 + iVar2) = 0;
      if (iVar1 != iVar2) {
        bVar3 = false;
      }
    }
  }
  return bVar3;
}

