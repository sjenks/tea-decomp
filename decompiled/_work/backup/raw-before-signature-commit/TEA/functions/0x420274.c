// name: FUN_00420274
// address: 0x420274
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00420274(int *param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  
  FUN_004dce64(0x4efa00);
  if (param_1 == (int *)0x0) goto LAB_0042051b;
  if (param_1[0x16c] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x16c] + 0xc))();
  }
  if (param_1[0x16d] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x16d] + 0xc))();
  }
  if (param_1[0x16e] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x16e] + 0xc))();
  }
  if (param_1[0x16f] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x16f] + 0xc))();
  }
  if (param_1[0x16a] != 0) {
    if (*(int *)(param_1[0x16a] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0x16a] + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004203d5;
    }
    FUN_004cc0bc();
    param_1[0x16a] = 0;
  }
LAB_004203d5:
  FUN_004abd9c(param_1 + 0x13c,2);
  FUN_004abd9c(param_1 + 0x111,2);
  FUN_004abd9c(param_1 + 0xe6,2);
  FUN_004abd9c(param_1 + 0xbb,2);
  FUN_004abd9c(param_1 + 0x90,2);
  if (param_1[0x8e] != 0) {
    if (*(int *)(param_1[0x8e] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0x8e] + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004204c9;
    }
    FUN_004cc0bc();
    param_1[0x8e] = 0;
  }
LAB_004204c9:
  FUN_0041b094(param_1 + 0x5a,2);
  FUN_0041f020(param_1 + 0x2c,2);
  FUN_0041f020(param_1,2);
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_0042051b:
  *in_FS_OFFSET = local_48;
  return;
}

