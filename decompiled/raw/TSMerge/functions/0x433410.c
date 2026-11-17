// name: FUN_00433410
// address: 0x433410
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00433410(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  UINT UVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  FUN_00455f04(0x46bef0);
  if (*(char *)(param_1 + 0x39) != '\0') {
    if ((param_3 == 0xffff) && (param_4 == 0)) {
      iVar1 = FUN_0042d188(*(int *)(param_1 + 4));
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar1 + 8);
      }
      puVar2 = FUN_004567e4(iVar1,iVar4,(int *)&DAT_0040467c,(int *)&DAT_00421420,0);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)(puVar2[6] + 0x6c))();
      }
      *(undefined4 *)(param_1 + 0x3a) = 0;
    }
    else if ((param_3 & 0x10) == 0) {
      if ((param_3 & 0x860) == 0) {
        *(int *)(param_1 + 0x3a) = param_2;
      }
      else {
        *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
      }
    }
    else {
      puVar2 = FUN_00420a90(local_10,param_4,0);
      UVar3 = FUN_00420b74((int)puVar2,param_2);
      *(UINT *)(param_1 + 0x3a) = UVar3;
      FUN_00420b3c(local_10,2);
    }
  }
  *in_FS_OFFSET = local_34;
  return;
}

