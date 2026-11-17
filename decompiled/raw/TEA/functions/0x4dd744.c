// name: FUN_004dd744
// address: 0x4dd744
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004dd744(int param_1,int param_2,int *param_3,int *param_4,int param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint local_c;
  int *local_8;
  
  local_8 = param_3;
  if (param_1 != 0) {
    puVar4 = (undefined4 *)(param_1 - *(int *)(param_2 + -8));
    iVar3 = param_2 - *(int *)(param_2 + -4);
    if (*(int *)(iVar3 + -4) != 0) {
      FUN_004e5ce8(s___unsigned___far___vtablePtr___1_0051711f,s_xxtype_cpp_00517146,1099);
    }
    piVar1 = *(int **)(iVar3 + -0xc);
    if (param_4 == (int *)0x0) {
      return puVar4;
    }
    iVar3 = FUN_004dd3c0(param_4,piVar1);
    if (iVar3 != 0) {
      return puVar4;
    }
    iVar3 = FUN_004dd3c0(local_8,piVar1);
    if ((iVar3 == 0) &&
       (puVar2 = FUN_004dd07e((int)puVar4,piVar1,(undefined4 *)0x0,param_4,param_1,local_8,&local_c,
                              1), puVar2 != (undefined4 *)0x0)) {
      return puVar2;
    }
    puVar4 = FUN_004dd07e((int)puVar4,piVar1,(undefined4 *)0x0,param_4,0,(int *)0x0,&local_c,1);
    if ((puVar4 != (undefined4 *)0x0) && (local_c != 0)) {
      return puVar4;
    }
  }
  if (param_5 != 0) {
    FUN_004e7cc4((uint *)&DAT_004a9aac,(undefined4 *)&DAT_0051c018,0,(undefined *)0x0,0,0,0,0);
  }
  return (undefined4 *)0x0;
}

