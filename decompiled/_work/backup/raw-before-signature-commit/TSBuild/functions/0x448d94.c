// name: FUN_00448d94
// address: 0x448d94
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00448d94(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  
  FUN_00467ba8(0x481c7c);
  if (param_1[0xd] == 0) {
    param_1[0xd] = 0x5f1f;
    if (param_1[0xc] != 0) {
      (*(code *)**(undefined4 **)(param_1[0xc] + 0xc))();
    }
    piVar1 = (int *)FUN_00456840();
    if (piVar1 != (int *)0x0) {
      FUN_0044c248(piVar1,0,*param_1,(int)(param_1 + 7),0,0,0);
    }
    param_1[0xc] = piVar1;
    (**(code **)(*(int *)(param_1[0xc] + 0xc) + 0xc))();
  }
  *in_FS_OFFSET = local_34;
  return;
}

