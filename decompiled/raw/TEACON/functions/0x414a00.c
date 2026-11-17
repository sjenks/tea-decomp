// name: FUN_00414a00
// address: 0x414a00
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00414a00(byte param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int local_c;
  
  local_c = 0;
  do {
    bVar1 = *param_2;
    uVar5 = 0;
    iVar2 = 7;
    pbVar3 = param_2 + 7;
    do {
      uVar5 = (uint)*pbVar3 * 2 + (uint)(uVar5 != 0);
      iVar2 = iVar2 + -1;
      *pbVar3 = (byte)uVar5;
      pbVar3 = pbVar3 + -1;
      uVar5 = uVar5 & 0x100;
    } while (-1 < iVar2);
    if (((bVar1 ^ param_1) & 0x80) != 0) {
      iVar2 = 0;
      pbVar3 = param_3;
      pbVar4 = param_2;
      do {
        *pbVar4 = *pbVar4 ^ *pbVar3;
        iVar2 = iVar2 + 1;
        pbVar4 = pbVar4 + 1;
        pbVar3 = pbVar3 + 1;
      } while (iVar2 < 8);
    }
    param_1 = param_1 << 1;
    local_c = local_c + 1;
  } while (local_c < 8);
  return;
}

