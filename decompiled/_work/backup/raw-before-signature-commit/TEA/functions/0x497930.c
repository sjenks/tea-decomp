// name: FUN_00497930
// address: 0x497930
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00497930(int *param_1,byte param_2)

{
  undefined *puVar1;
  undefined4 *in_FS_OFFSET;
  int iVar2;
  undefined4 local_28;
  
  FUN_004dce64(0x507d0c);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 5) = &PTR_FUN_00507d2c;
    FUN_00497904(param_1);
    FUN_0048db40(param_1);
    FUN_00497904(param_1);
    if ((char)param_1[1] == '\0') {
      iVar2 = *param_1;
      puVar1 = FUN_0049754c();
      FUN_00497724((int)puVar1,iVar2);
    }
    FUN_0048d3a4(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

