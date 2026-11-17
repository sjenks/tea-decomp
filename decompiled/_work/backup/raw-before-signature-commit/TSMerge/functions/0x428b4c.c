// name: FUN_00428b4c
// address: 0x428b4c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00428b4c(int *param_1)

{
  int iVar1;
  
  FUN_0042c654(*param_1);
  iVar1 = (**(code **)(param_1[3] + 0x4c))();
  if (iVar1 < 0x21) {
    MessageBeep(0x30);
    (**(code **)(param_1[3] + 0x50))();
  }
  else {
    ReleaseCapture();
    *(undefined1 *)((int)param_1 + 0x3e) = 0;
    (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
    FUN_00428e48(param_1,1);
  }
  return;
}

