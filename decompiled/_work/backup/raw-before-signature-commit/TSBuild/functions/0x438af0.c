// name: FUN_00438af0
// address: 0x438af0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00438af0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int local_20;
  int local_1c;
  int local_18;
  HWND local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_00436428(param_1);
  }
  else {
    local_8 = param_3;
    local_10 = param_3;
    local_c = param_4;
    local_20 = param_3;
    local_1c = param_4;
    local_18 = param_1;
    FUN_00436d48(**(int **)(*(int *)(param_1 + 0x6c) + 0x2b),0x7ef1,0,&local_20);
    local_14 = *(HWND *)(param_1 + 0xc);
    TrackPopupMenu(*(HMENU *)(*(int *)(param_1 + 0x60) + 4),2,param_3,param_4,0,local_14,(RECT *)0x0
                  );
  }
  return;
}

