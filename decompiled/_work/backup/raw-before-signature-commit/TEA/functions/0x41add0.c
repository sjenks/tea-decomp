// name: FUN_0041add0
// address: 0x41add0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041add0(int *param_1)

{
  undefined4 local_40;
  undefined4 local_3c;
  
  if (param_1[0x1b] == 0) {
    param_1[0x1b] = 1;
    SetWindowTextA(*(HWND *)(*param_1 + 0xc),s_Beta_Test_Expiry_004ed29c + 0x10);
    local_40 = 0x3c;
    local_3c = 0;
    FUN_004857f4((int)&local_40);
    FUN_00469120(param_1,(LPARAM)&local_40,4);
    param_1[0x1b] = 0;
    FUN_004a76a8(*param_1,0xb9,0,0);
  }
  return;
}

