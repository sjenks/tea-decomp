// name: FUN_0045bc54
// address: 0x45bc54
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0045bc54(undefined4 *param_1,int *param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  int local_8;
  
  FUN_00467ba8(0x486460);
  local_1c = 8;
  *param_1 = param_2;
  bVar1 = FUN_0045be3c(*param_2);
  if (!bVar1) {
    FUN_0045b7d4(*param_2,4);
    *(undefined1 *)(param_1 + 1) = 0;
    goto LAB_0045bdc2;
  }
  iVar2 = FUN_0045be50(*param_2);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_0045be50(*param_2);
    FUN_0045be5c(piVar3);
  }
  if (param_3 == '\0') {
    uVar4 = FUN_0045bdd8(*param_2);
    if ((uVar4 & 0x1000) != 0) {
      local_1c = 0x14;
      FUN_00459808(&local_8,*param_2);
      local_10 = local_10 + 1;
      iVar2 = FUN_00459448(&local_8);
      local_1c = 8;
      do {
        piVar3 = (int *)FUN_0045bea8(*param_2);
        local_30 = FUN_0045beb4(piVar3);
        local_34 = FUN_0045b17c();
        bVar1 = FUN_0045bde4(&local_30,&local_34);
        if (bVar1) {
LAB_0045bd51:
          bVar1 = false;
        }
        else {
          bVar1 = FUN_0045bdfc(iVar2,1,(byte)local_30);
          if (!bVar1) goto LAB_0045bd51;
          bVar1 = true;
        }
        if (!bVar1) goto code_r0x0045bd5e;
        piVar3 = (int *)FUN_0045bea8(*param_2);
        FUN_0045bf10(piVar3);
      } while( true );
    }
  }
  goto LAB_0045bd98;
code_r0x0045bd5e:
  local_38 = FUN_0045b17c();
  bVar1 = FUN_0045bde4(&local_30,&local_38);
  if (bVar1) {
    FUN_0045b7d4(*param_2,2);
  }
  local_10 = local_10 + -1;
  FUN_00405004(&local_8,2);
LAB_0045bd98:
  bVar1 = FUN_0045be3c(*param_2);
  if (bVar1) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    FUN_0045b7d4(*param_2,4);
    *(undefined1 *)(param_1 + 1) = 0;
  }
LAB_0045bdc2:
  *in_FS_OFFSET = local_2c;
  return param_1;
}

