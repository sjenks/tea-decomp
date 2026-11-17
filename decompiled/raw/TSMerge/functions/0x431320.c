// name: FUN_00431320
// address: 0x431320
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_00431320(uint *param_1,uint *param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  HBRUSH pHVar5;
  uint *puVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46b6b8);
  FUN_0041d2ac(param_1);
  *(bool *)(param_1 + 1) = param_3 == '\0';
  uVar2 = FUN_00415340(param_2);
  if (param_3 != '\0') {
    uVar4 = uVar2;
    puVar3 = (undefined4 *)FUN_00430f74();
    uVar4 = FUN_00431258(puVar3,uVar4);
    *param_1 = uVar4;
    if (uVar4 != 0) {
      *in_FS_OFFSET = local_28;
      goto LAB_00431411;
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
  FUN_0041c800((int *)param_1,0x7fe3);
  if (param_3 == '\0') {
    FUN_0041cf04(*param_1,2);
  }
  else {
    uVar4 = FUN_00415340(param_2);
    uVar2 = *param_1;
    puVar6 = (uint *)FUN_00430f74();
    cVar1 = FUN_00431128(puVar6,uVar2,uVar4);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
LAB_00431411:
  *in_FS_OFFSET = local_28;
  return param_1;
}

