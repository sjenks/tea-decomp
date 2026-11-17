// name: FUN_004520dc
// address: 0x4520dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004520dc(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  int *local_38;
  undefined4 local_30;
  
  FUN_00455f04(0x472c18);
  piVar1 = (int *)FUN_0044b390();
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_0044b5d4(piVar1,0x10,param_2,0x211,FUN_0044c998);
  }
  uVar3 = param_2;
  if ((uint)param_1[1] < param_2) {
    uVar3 = param_1[1];
  }
  local_38 = piVar1;
  for (iVar2 = *param_1; iVar2 != *param_1 + uVar3 * 0x10; iVar2 = iVar2 + 0x10) {
    FUN_0044ce78((int)local_38,iVar2);
    local_38 = local_38 + 4;
  }
  for (; uVar3 < param_2; uVar3 = uVar3 + 1) {
    FUN_0044ce78((int)(piVar1 + uVar3 * 4),(int)&stack0x0000000c);
  }
  if (*param_1 != 0) {
    FUN_0044b474(*param_1,0x10,0,0x19,FUN_004052c4);
  }
  *param_1 = (int)piVar1;
  param_1[1] = param_2;
  iVar2 = *param_1;
  FUN_004052c4((int)&stack0x0000000c,2);
  *in_FS_OFFSET = local_30;
  return iVar2;
}

