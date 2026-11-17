// name: FUN_0044ef10
// address: 0x44ef10
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_0044ef10(char *param_1,uint *param_2)

{
  byte bVar1;
  char *pcVar2;
  uint uVar4;
  uint uVar5;
  int iVar3;
  
  pcVar2 = FUN_004dcd6c(param_1,PTR_DAT_004f735c);
  if (pcVar2 == (char *)0x0) {
    bVar1 = 0;
  }
  else {
    iVar3 = FUN_004e39d0(pcVar2);
    bVar1 = (byte)iVar3;
  }
  uVar4 = FUN_0044e810();
  uVar5 = FUN_0044e810();
  *param_2 = (uint)bVar1 | (uVar4 & 0xff) << 8 | (uVar5 & 0xff) << 0x10;
  return param_2;
}

