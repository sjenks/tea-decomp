// name: FUN_004adae0
// address: 0x4adae0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004adae0(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if ((*(int *)(*param_1 + 0xc) != 0) && (*(int *)(param_2 + 0x10) != *(int *)(param_2 + 0x18))) {
    if (*(int *)(param_2 + 0x10) != 0) {
      puVar3 = *(undefined4 **)(param_2 + 0x10);
      piVar1 = FUN_004a8294(puVar3);
      if (piVar1 != (int *)0x0) {
        uVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,*piVar1,puVar3,piVar1,param_2);
        return uVar2;
      }
    }
    return 0;
  }
  return 0;
}

