// name: FUN_0043dc00
// address: 0x43dc00
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043dc00(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  
  FUN_00455f04(0x46dea0);
  if (param_1[0xd] == 0) {
    param_1[0xd] = 0x5f1f;
    if (param_1[0xc] != 0) {
      (*(code *)**(undefined4 **)(param_1[0xc] + 0xc))();
    }
    piVar1 = (int *)FUN_0044b300();
    if (piVar1 != (int *)0x0) {
      FUN_004410b4(piVar1,0,*param_1,(int)(param_1 + 7),0,0,0);
    }
    param_1[0xc] = piVar1;
    (**(code **)(*(int *)(param_1[0xc] + 0xc) + 0xc))();
  }
  *in_FS_OFFSET = local_34;
  return;
}

