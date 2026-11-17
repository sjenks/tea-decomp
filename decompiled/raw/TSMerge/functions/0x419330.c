// name: FUN_00419330
// address: 0x419330
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00419330(int param_1)

{
  int *piVar1;
  BOOL BVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_58;
  undefined4 local_34 [12];
  
  FUN_00455f04(0x466ee8);
  if ((*(int *)(param_1 + 6) != 0) && (*(int *)(**(int **)(param_1 + 6) + 0xc) != 0)) {
    piVar1 = (int *)(**(code **)(*(int *)(*(int *)(param_1 + 6) + 0x18) + 0xc))();
    if (piVar1 != (int *)0x0) {
      BVar2 = IsWindow(*(HWND *)(*piVar1 + 0xc));
      if (BVar2 != 0) {
        uVar3 = FUN_00418e10(*(int *)(param_1 + 0x3a));
        if ((char)uVar3 == '\0') {
          FUN_00425634(local_34,*(undefined4 *)(**(int **)(param_1 + 6) + 0xc),
                       (undefined4 *)(param_1 + 10),*(undefined4 *)(param_1 + 0x3a),
                       (uint *)0xffffffff);
          FUN_0042d1a4(*piVar1,0x405,0,(LPARAM)local_34);
          FUN_0044b2dc();
        }
      }
    }
  }
  *in_FS_OFFSET = local_58;
  return;
}

