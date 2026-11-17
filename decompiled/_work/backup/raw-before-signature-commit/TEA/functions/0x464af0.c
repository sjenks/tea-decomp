// name: FUN_00464af0
// address: 0x464af0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00464af0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  
  FUN_004dce64(0x4fbd64);
  if (*(int *)(param_1 + 0x18) == 0) {
    piVar2 = (int *)FUN_004cc0f0();
    if (piVar2 != (int *)0x0) {
      FUN_004c4c74(piVar2,0);
    }
    *(int **)(param_1 + 0x18) = piVar2;
    if (*(int *)(piVar2[2] + 4) == 0x1008) {
      if (piVar2 != (int *)0x0) {
        (**(code **)*piVar2)();
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *in_FS_OFFSET = local_34;
  return uVar1;
}

