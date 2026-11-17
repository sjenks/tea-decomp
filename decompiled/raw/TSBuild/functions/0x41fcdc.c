// name: FUN_0041fcdc
// address: 0x41fcdc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_0041fcdc(char *param_1,HWND param_2,char param_3)

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
  
  FUN_00467ba8(0x479b90);
  FUN_0041fe58(param_1,param_2);
  if ((param_3 != '\0') && (*param_1 == '\0')) {
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 1;
    puVar2 = &LAB_0041fdbc;
    uVar1 = 0;
    FUN_0041fe74(local_10,0x7fd9);
    FUN_00471ae8((uint *)&DAT_0041fd60,local_10,uVar1,puVar2,uVar3,uVar4,uVar5,uVar6);
  }
  *in_FS_OFFSET = local_34;
  return param_1;
}

