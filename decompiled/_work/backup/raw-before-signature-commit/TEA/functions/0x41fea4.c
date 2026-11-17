// name: FUN_0041fea4
// address: 0x41fea4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0041fea4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar2 = FUN_00408b14(*(int *)(param_1 + 0x14));
    if (iVar2 <= iVar3) {
      return 0;
    }
    uVar1 = FUN_00408dd8();
    if ((char)uVar1 != '\0') break;
    iVar3 = iVar3 + 1;
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

