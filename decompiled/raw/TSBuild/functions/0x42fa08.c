// name: FUN_0042fa08
// address: 0x42fa08
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042fa08(undefined4 *param_1,byte param_2)

{
  BOOL BVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    if (*(char *)(param_1 + 1) != '\0') {
      BVar1 = DeleteObject((HGDIOBJ)*param_1);
      if (BVar1 == 0) {
        FUN_00427c44(0x7fde,*param_1);
      }
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  return;
}

