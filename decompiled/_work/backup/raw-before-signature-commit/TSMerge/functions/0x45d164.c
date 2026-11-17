// name: FUN_0045d164
// address: 0x45d164
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0045d164(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  pbVar2 = param_1;
  pbVar3 = param_2;
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    iVar6 = param_3 + -1;
    bVar1 = *pbVar2;
    param_1 = pbVar2 + 1;
    if (((&DAT_00477b8d)[bVar1] & 4) == 0) {
      uVar4 = FUN_0045aad4((uint)bVar1);
    }
    else {
      if (iVar6 == 0) {
        return 0;
      }
      if (*param_1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (uint)CONCAT11(bVar1,*param_1);
        param_1 = pbVar2 + 2;
      }
    }
    bVar1 = *pbVar3;
    param_2 = pbVar3 + 1;
    if (((&DAT_00477b8d)[bVar1] & 4) == 0) {
      uVar5 = FUN_0045aad4((uint)bVar1);
    }
    else {
      if (iVar6 == 0) {
        return 0;
      }
      iVar6 = param_3 + -2;
      if (*param_2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (uint)CONCAT11(bVar1,*param_2);
        param_2 = pbVar3 + 2;
      }
    }
    if (uVar5 != uVar4) break;
    pbVar2 = param_1;
    pbVar3 = param_2;
    param_3 = iVar6;
    if (uVar4 == 0) {
      return 0;
    }
  }
  if (uVar5 <= uVar4) {
    return 1;
  }
  return 0xffffffff;
}

