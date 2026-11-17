// name: FUN_00445cd8
// address: 0x445cd8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00445cd8(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  char *local_c;
  
  FUN_00467ba8(0x481338);
  if (param_1[6] != 0) {
    (**(code **)(param_1[3] + 0x34))();
    puVar1 = (uint *)FUN_0044609c(param_1,0);
    FUN_00459d78((int)local_14,puVar1);
    iVar2 = (**(code **)(*(int *)param_1[6] + 0x14))();
    if (iVar2 != 0) {
      FUN_00467770((char *)puVar1,local_c);
    }
    FUN_00446158(param_1,(LPCSTR)puVar1,iVar2 != 0);
    (**(code **)(param_1[3] + 0x3c))();
    if (local_c != (char *)0x0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar3 = (int *)(local_c + -0xc);
        if (piVar3 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_00445df7;
      }
      FUN_0045680c();
    }
  }
LAB_00445df7:
  *in_FS_OFFSET = local_38;
  return 0;
}

