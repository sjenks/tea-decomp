// name: FUN_00438dc4
// address: 0x438dc4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00438dc4(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int *piVar4;
  undefined4 local_30;
  
  FUN_00455f04(0x46cc5c);
  piVar2 = (int *)(**(code **)(*(int *)(param_1 + 8) + 0x2c))();
  if (piVar2 != (int *)0x0) {
    piVar4 = piVar2;
    uVar3 = (**(code **)(*piVar2 + 0x30))();
    if ((char)uVar3 != '\0') {
      cVar1 = (**(code **)(*piVar2 + 0x10))(uVar3,*piVar2,piVar4,piVar2);
      if (cVar1 == '\0') {
        (**(code **)(*(int *)(param_1 + 8) + 0x4c))();
      }
      else if (piVar2 != (int *)0x0) {
        (**(code **)*piVar2)();
      }
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

