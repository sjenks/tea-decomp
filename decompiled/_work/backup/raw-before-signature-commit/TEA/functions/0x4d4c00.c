// name: FUN_004d4c00
// address: 0x4d4c00
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004d4c00(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_004ced34((undefined4 *)&DAT_00514d20);
  iVar2 = FUN_004ced40(param_1,uVar1);
  if (iVar2 == 0) {
    FUN_004db7f8(param_1,(uint *)&DAT_00514d20,'\x01',0x80,FUN_004d2e04);
  }
  return;
}

