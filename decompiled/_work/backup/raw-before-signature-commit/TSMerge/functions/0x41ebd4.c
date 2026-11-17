// name: FUN_0041ebd4
// address: 0x41ebd4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041ebd4(int *param_1)

{
  HGDIOBJ pvVar1;
  undefined4 *in_FS_OFFSET;
  LONG local_68 [14];
  undefined4 local_30;
  undefined2 local_20;
  int local_14;
  uint local_c [2];
  
  FUN_00455f04(0x467b68);
  pvVar1 = (HGDIOBJ)0x0;
  if (*(int *)(*param_1 + 0xc) != 0) {
    pvVar1 = (HGDIOBJ)FUN_0042bbb4(*param_1,0x31,0,0);
  }
  if (pvVar1 == (HGDIOBJ)0x0) {
    pvVar1 = GetStockObject(0xd);
  }
  local_20 = 8;
  FUN_004188f4(local_c,pvVar1,0);
  local_14 = local_14 + 2;
  local_20 = 0x14;
  FUN_00418ae8(local_68,local_c);
  *(LONG *)((int)param_1 + 0x2d) = local_68[0];
  local_14 = local_14 + -2;
  FUN_0041d334(local_c,0);
  *in_FS_OFFSET = local_30;
  return;
}

