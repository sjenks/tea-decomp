// name: FUN_00428bb4
// address: 0x428bb4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00428bb4(int *param_1,undefined4 param_2,int *param_3)

{
  bool bVar1;
  tagRECT local_14;
  
  FUN_0042b294(*param_1);
  if (*(char *)((int)param_1 + 0x3e) == '\0') {
    SetCapture(*(HWND *)(*param_1 + 0xc));
    *(undefined1 *)((int)param_1 + 0x3e) = 1;
    (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
  }
  else {
    local_14.left = 0;
    local_14.top = 0;
    local_14.right = 0;
    local_14.bottom = 0;
    FUN_0042d568(*param_1,&local_14);
    if ((((*param_3 < local_14.left) || (local_14.right <= *param_3)) || (param_3[1] < local_14.top)
        ) || (local_14.bottom <= param_3[1])) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      ReleaseCapture();
      *(undefined1 *)((int)param_1 + 0x3e) = 0;
      (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
    }
  }
  return;
}

