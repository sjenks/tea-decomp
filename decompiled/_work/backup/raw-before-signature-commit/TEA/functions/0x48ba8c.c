// name: FUN_0048ba8c
// address: 0x48ba8c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_0048ba8c(char *param_1,HWND param_2,char param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  FUN_004dce64(0x505708);
  FUN_0048bc20(param_1,param_2);
  if ((param_3 != '\0') && (*param_1 == '\0')) {
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 1;
    puVar2 = &LAB_0048bb6c;
    uVar1 = 0;
    FUN_0048bc3c(local_10,0x7fd9);
    FUN_004e7cc4((uint *)&DAT_0048bb10,local_10,uVar1,puVar2,uVar3,uVar4,uVar5,uVar6);
  }
  *in_FS_OFFSET = local_34;
  return param_1;
}

