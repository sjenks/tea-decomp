// name: FUN_004ceb10
// address: 0x4ceb10
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004ceb10(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_24 [16];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  while( true ) {
    iVar1 = param_1 + 8;
    iVar3 = FUN_004ceb88(iVar1);
    if (iVar3 == 0) break;
    FUN_004ceb94(iVar1);
    puVar2 = (undefined4 *)FUN_004ceb88(iVar1);
    FUN_004ceba0((int)local_24,iVar1,puVar2);
    FUN_004cec20(local_c);
    FUN_004cec48();
    FUN_004cec58(local_14);
    FUN_004cec80();
  }
  return;
}

