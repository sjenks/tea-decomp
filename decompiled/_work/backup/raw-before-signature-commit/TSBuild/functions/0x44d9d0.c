// name: FUN_0044d9d0
// address: 0x44d9d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044d9d0(int *param_1,int param_2,HWND param_3)

{
  LRESULT LVar1;
  BOOL BVar2;
  
  if (param_2 == 2) {
    if ((*(int *)((int)param_1 + 0x15) != 0) &&
       (*(HWND *)(*(int *)((int)param_1 + 0x15) + 0xc) == param_3)) {
      PostMessageA(*(HWND *)(*param_1 + 0xc),0x10,0,0);
    }
    LVar1 = FUN_00436e00(param_3,*(LPARAM *)(*param_1 + 0x6c));
    if (LVar1 != 0) {
      *(uint *)(LVar1 + 0x74) = *(uint *)(LVar1 + 0x74) & 0xffffffdf;
    }
  }
  else if ((((param_2 == 5) && ((*(byte *)(*param_1 + 0x74) & 8) != 0)) &&
           (*(int *)((int)param_1 + 0x15) != 0)) &&
          ((*(HWND *)(*(int *)((int)param_1 + 0x15) + 0xc) == param_3 &&
           (BVar2 = IsIconic(*(HWND *)(*param_1 + 0xc)), BVar2 == 0)))) {
    FUN_0044daec(param_1,'\x01');
  }
  FUN_00436428(*param_1);
  return;
}

