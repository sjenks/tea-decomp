// name: FUN_00459260
// address: 0x459260
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00459260(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_24 [16];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  while( true ) {
    iVar1 = param_1 + 8;
    iVar3 = FUN_004592d8(iVar1);
    if (iVar3 == 0) break;
    FUN_004592e4(iVar1);
    puVar2 = (undefined4 *)FUN_004592d8(iVar1);
    FUN_004592f0((int)local_24,iVar1,puVar2);
    FUN_00459370(local_c);
    FUN_00459398();
    FUN_004593a8(local_14);
    FUN_004593d0();
  }
  return;
}

