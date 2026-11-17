// name: FUN_00411d78
// address: 0x411d78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00411d78(char *param_1,uint *param_2)

{
  byte bVar1;
  char *pcVar2;
  uint uVar4;
  uint uVar5;
  int iVar3;
  
  pcVar2 = FUN_0041f304(param_1,PTR_DAT_0042def8);
  if (pcVar2 == (char *)0x0) {
    bVar1 = 0;
  }
  else {
    iVar3 = FUN_00424b58(pcVar2);
    bVar1 = (byte)iVar3;
  }
  uVar4 = FUN_00411910();
  uVar5 = FUN_00411910();
  *param_2 = (uint)bVar1 | (uVar4 & 0xff) << 8 | (uVar5 & 0xff) << 0x10;
  return;
}

