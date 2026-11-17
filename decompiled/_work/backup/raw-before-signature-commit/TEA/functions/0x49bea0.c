// name: FUN_0049bea0
// address: 0x49bea0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049bea0(int *param_1,byte param_2)

{
  HGDIOBJ pvVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x508b3c);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 5) = &PTR_FUN_00508d18;
    pvVar1 = GetStockObject(0xd);
    pvVar1 = SelectObject((HDC)*param_1,pvVar1);
    DeleteObject(pvVar1);
    if (*(uint **)((int)param_1 + 0x3d) != (uint *)0x0) {
      FUN_00494064(*(uint **)((int)param_1 + 0x3d),0);
      FUN_004cc0bc();
    }
    FUN_0048d3a4(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

