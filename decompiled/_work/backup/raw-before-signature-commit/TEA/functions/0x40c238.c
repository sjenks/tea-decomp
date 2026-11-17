// name: FUN_0040c238
// address: 0x40c238
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0040c238(int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  _FILETIME local_c;
  
  bVar1 = FUN_004378c0((int)(param_1 + 0xbe5),1,&local_c);
  if (((CONCAT31(extraout_var,bVar1) == 0) || (local_c.dwLowDateTime != param_1[0x802])) ||
     (local_c.dwHighDateTime != param_1[0x803])) {
    (**(code **)(*param_1 + 4))();
    (**(code **)(*param_1 + 4))();
  }
  return param_1[0x801];
}

