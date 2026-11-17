// name: FUN_0046c6b4
// address: 0x46c6b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0046c6b4(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  byte local_5c [4];
  undefined4 local_58;
  undefined4 uStack_4c;
  uint local_34 [12];
  
  bVar5 = 200;
  FUN_004dce64(0x4fde0c);
  iVar3 = 9;
  do {
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  FUN_004cb348(local_34,param_1 + 0x166,bVar5);
  uStack_4c = 0x46c70b;
  uVar2 = FUN_004cb50c(local_34,(uint *)local_5c,'\x01');
  if ((char)uVar2 != '\0') {
    uVar4 = (uint)((local_5c[0] & 0x20) != 0);
    uStack_4c = 0x46c728;
    bVar1 = FUN_004cb5ec(local_34,uVar4,'\x01');
    if (bVar1) {
      uStack_4c = 0x46c73b;
      FUN_004cb628(local_34,uVar4,'\x01');
    }
  }
  FUN_004cc0cc();
  *in_FS_OFFSET = local_58;
  return;
}

