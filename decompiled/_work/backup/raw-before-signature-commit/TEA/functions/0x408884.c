// name: FUN_00408884
// address: 0x408884
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00408884(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  
  FUN_004dce64(0x4eb7b4);
  if (param_1 != 0) {
    for (piVar4 = *(int **)(param_1 + 0xc); piVar4 < *(int **)(param_1 + 0x10); piVar4 = piVar4 + 1)
    {
      piVar3 = (int *)FUN_00408984(DAT_004eb4a4,DAT_004eb4a8,piVar4);
      puVar2 = (undefined4 *)*piVar3;
      piVar1 = puVar2 + 0x804;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)();
        }
        if (piVar3 + 1 != DAT_004eb4a8) {
          FUN_004089a4(piVar3 + 1,DAT_004eb4a8,piVar3);
        }
        DAT_004eb4a8 = DAT_004eb4a8 + -1;
      }
    }
    if (param_1 != 0) {
      FUN_004076a8(param_1,3);
    }
  }
  *in_FS_OFFSET = local_34;
  return;
}

