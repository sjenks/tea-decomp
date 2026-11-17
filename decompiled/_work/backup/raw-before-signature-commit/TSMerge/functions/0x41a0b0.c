// name: FUN_0041a0b0
// address: 0x41a0b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_0041a0b0(uint *param_1,int param_2,char param_3,byte param_4)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  int nDenominator;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined4 local_70;
  int local_4c;
  int local_47;
  undefined1 local_24 [8];
  LPCSTR local_1c;
  uint local_14 [2];
  uint local_c [2];
  
  FUN_00455f04(0x46728c);
  bVar14 = 0;
  bVar13 = 0;
  bVar12 = 0;
  bVar11 = 1;
  bVar10 = 0;
  bVar9 = 0;
  puVar2 = FUN_00418cd8(local_c);
  bVar1 = FUN_00418cb0(puVar2);
  if (param_3 == '\0') {
    iVar3 = 400;
  }
  else {
    iVar3 = 700;
  }
  iVar8 = 0;
  iVar7 = 0;
  iVar6 = 0;
  FUN_0042e298(&local_4c);
  nDenominator = 0x48;
  iVar4 = (**(code **)(local_47 + 0xc))();
  iVar4 = MulDiv(-param_2,iVar4,nDenominator);
  FUN_0042e214(&local_4c,0);
  puVar2 = FUN_00418cd8(local_14);
  FUN_00418c54((int)local_24,puVar2);
  FUN_00418948(param_1,local_1c,iVar4,iVar6,iVar7,iVar8,iVar3,bVar1,param_4,bVar9,bVar10,bVar11,
               bVar12,bVar13,bVar14);
  if (local_1c != (LPCSTR)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar5 = (int *)(local_1c + -0xc);
      if (piVar5 == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else if (piVar5 == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar3 = *piVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_0041a208;
    }
    FUN_0044b2cc();
    local_1c = (LPCSTR)0x0;
  }
LAB_0041a208:
  FUN_0041d334(local_14,0);
  FUN_0041d334(local_c,0);
  *in_FS_OFFSET = local_70;
  return param_1;
}

