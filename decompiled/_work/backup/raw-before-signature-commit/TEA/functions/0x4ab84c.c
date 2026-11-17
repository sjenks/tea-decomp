// name: FUN_004ab84c
// address: 0x4ab84c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_004ab84c(uint *param_1,uint *param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  HBRUSH pHVar5;
  uint *puVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50befc);
  FUN_00493fdc(param_1);
  *(bool *)(param_1 + 1) = param_3 == '\0';
  uVar2 = FUN_0048c12c(param_2);
  if (param_3 != '\0') {
    uVar4 = uVar2;
    puVar3 = (undefined4 *)FUN_004ab4bc();
    uVar4 = FUN_004ab7a0(puVar3,uVar4);
    *param_1 = uVar4;
    if (uVar4 != 0) {
      *in_FS_OFFSET = local_28;
      goto LAB_004ab93d;
    }
  }
  if ((*param_2 & 0xf0000000) == 0x80000000) {
    pHVar5 = GetSysColorBrush(*param_2 & 0xffff);
    *param_1 = (uint)pHVar5;
  }
  else {
    pHVar5 = CreateSolidBrush(uVar2);
    *param_1 = (uint)pHVar5;
  }
  FUN_00493530((int *)param_1,0x7fe3);
  if (param_3 == '\0') {
    FUN_00493c34(*param_1,2);
  }
  else {
    uVar4 = FUN_0048c12c(param_2);
    uVar2 = *param_1;
    puVar6 = (uint *)FUN_004ab4bc();
    cVar1 = FUN_004ab670(puVar6,uVar2,uVar4);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
LAB_004ab93d:
  *in_FS_OFFSET = local_28;
  return param_1;
}

