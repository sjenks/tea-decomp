// name: FUN_004ddaec
// address: 0x4ddaec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004ddaec(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 local_c;
  undefined4 *local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_004ddb38(&local_c);
    param_1 = local_8;
  }
  uVar2 = 0x9c;
  puVar1 = (undefined4 *)FUN_00401140();
  FUN_004dc7d4(puVar1,param_1,uVar2);
  FUN_004dd974();
  return;
}

