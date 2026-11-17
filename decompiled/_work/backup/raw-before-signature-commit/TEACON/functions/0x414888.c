// name: FUN_00414888
// address: 0x414888
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl FUN_00414888(byte *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *pcVar6;
  int local_8;
  
  DAT_00434698 = 0;
  _DAT_00434694 = 0;
  for (pbVar4 = PTR_s_TEAWIN_0042e708; *pbVar4 != 0; pbVar4 = pbVar4 + 1) {
    FUN_00414a00(*pbVar4,&DAT_00434694,&DAT_0042e700);
  }
  local_8 = 0;
  for (pbVar4 = param_1; *pbVar4 != 0; pbVar4 = pbVar4 + 1) {
  }
  while (param_1 < pbVar4) {
    pbVar4 = pbVar4 + -1;
    bVar3 = *pbVar4;
    uVar2 = (uint)bVar3;
    iVar1 = FUN_004225cc((uint)bVar3);
    if (iVar1 != 0) {
      uVar2 = FUN_0042428c((uint)bVar3);
    }
    iVar1 = FUN_00422548(uVar2 & 0xff);
    if (iVar1 != 0) {
      local_8 = local_8 + 1;
      FUN_00414a00((byte)uVar2,&DAT_00434694,&DAT_0042e700);
    }
  }
  pbVar4 = param_1;
  pcVar6 = param_2;
  if (0 < local_8) {
    do {
      do {
        while (pbVar5 = pbVar4, *pbVar5 != 0) {
          pbVar4 = pbVar5 + 1;
        }
        pbVar4 = param_1;
      } while (pbVar5 <= param_1);
      do {
        pbVar5 = pbVar5 + -1;
        bVar3 = *pbVar5;
        uVar2 = (uint)bVar3;
        iVar1 = FUN_004225cc((uint)bVar3);
        if (iVar1 != 0) {
          uVar2 = FUN_0042428c((uint)bVar3);
        }
        iVar1 = FUN_00422548(uVar2 & 0xff);
        if (iVar1 != 0) {
          bVar3 = (byte)((char)uVar2 + -0x41 + (char)((ulonglong)DAT_00434698 % 0x1a)) % 0x1a + 0x41
          ;
          if (((uint)bVar3 != (int)*pcVar6) &&
             (uVar2 = FUN_00424238((uint)bVar3), uVar2 != (int)*pcVar6)) {
            return false;
          }
          pcVar6 = pcVar6 + 1;
          FUN_00414a00(bVar3,&DAT_00434694,&DAT_0042e700);
          if (pcVar6 == param_2 + 10) {
            return *pcVar6 == '\0';
          }
        }
      } while (param_1 < pbVar5);
    } while( true );
  }
  return false;
}

