// name: FUN_004987e0
// address: 0x4987e0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004987e0(int param_1,int param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  piVar1 = (int *)FUN_00490dd0(param_1 + 4,param_2);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  puVar3 = FUN_004dd744((int)piVar1,iVar2,(int *)&DAT_00427ee4,(int *)&DAT_00427f30,0);
  if (puVar3 != (undefined4 *)0x0) {
    FUN_0049ed44((int)puVar3,param_3);
  }
  return;
}

