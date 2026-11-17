// name: FUN_00453d90
// address: 0x453d90
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00453d90(int *param_1,undefined4 param_2,LONG *param_3)

{
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  tagPOINT local_10;
  int local_8;
  
  if ((*(char *)((int)param_1 + 0x21) != '\0') && (*(int *)((int)param_1 + 0x2a) != 0)) {
    ReleaseCapture();
    FUN_00453b70(param_1,param_2,param_3);
    local_10.x = *param_3;
    local_10.y = param_3[1];
    ClientToScreen(*(HWND *)(*param_1 + 0xc),&local_10);
    FUN_004534f8(param_1,&local_10.x,&local_8);
    if (local_8 == *(int *)((int)param_1 + 0x2a)) {
      *(undefined4 *)((int)param_1 + 0x2a) = 0;
      if (local_8 == 3) {
        if ((char)param_1[8] != '\0') {
          PostMessageA(*(HWND *)(*param_1 + 0xc),0x10,0,0);
        }
        return 1;
      }
      if (local_8 == 8) {
        FUN_00436d48(*param_1,0x112,0xf020,0);
        return 1;
      }
      if (local_8 == 9) {
        uVar3 = 0;
        BVar1 = IsZoomed(*(HWND *)(*param_1 + 0xc));
        if (BVar1 == 0) {
          uVar2 = 0xf030;
        }
        else {
          uVar2 = 0xf120;
        }
        FUN_00436d48(*param_1,0x112,uVar2,uVar3);
        return 1;
      }
    }
    *(undefined4 *)((int)param_1 + 0x2a) = 0;
  }
  return 0;
}

