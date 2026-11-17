// name: FUN_00414cb8
// address: 0x414cb8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_00414cb8(char *param_1,HWND param_2,char param_3)

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
  
  FUN_00455f04(0x465ddc);
  FUN_00414e34(param_1,param_2);
  if ((param_3 != '\0') && (*param_1 == '\0')) {
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 1;
    puVar2 = &LAB_00414d98;
    uVar1 = 0;
    FUN_00414e50(local_10,0x7fd9);
    FUN_0045ed74((uint *)&DAT_00414d3c,local_10,uVar1,puVar2,uVar3,uVar4,uVar5,uVar6);
  }
  *in_FS_OFFSET = local_34;
  return param_1;
}

