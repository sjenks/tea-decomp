// name: FUN_0045a42c
// address: 0x45a42c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045a42c(int *param_1)

{
  int iVar1;
  uint *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  while( true ) {
    uVar4 = FUN_004a87e0();
    if (uVar4 <= uVar5) break;
    iVar1 = FUN_004a87f8();
    puVar2 = (uint *)FUN_004cc180();
    FUN_004a87c4();
    *(undefined1 *)((int)puVar2 + iVar1) = 0;
    FUN_00464bb4(param_1[0xe],puVar2);
    puVar3 = FUN_0041238c(param_1[0xe],param_1[0x18]);
    FUN_0041251c((int)puVar3,puVar2);
    FUN_0045269c(param_1);
    FUN_004cc0cc();
    uVar5 = uVar5 + 1;
  }
  FUN_004a8814();
  return;
}

