// name: FUN_004601c8
// address: 0x4601c8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004601c8(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(byte *)(param_1 + 4) & 8) != 0) {
    iVar1 = FUN_0045de3c(param_1);
    iVar2 = FUN_0045de48(param_1);
    if (iVar1 - iVar2 < param_3) {
      if (param_2 == (undefined4 *)0x0) {
        param_2 = (undefined4 *)FUN_004568d0();
      }
      if (param_2 == (undefined4 *)0x0) {
        param_1 = 0;
      }
      else {
        iVar1 = FUN_0045de3c(param_1);
        if (iVar1 == 0) {
          FUN_0045c008(param_1,param_2,param_3 + -1 + (int)param_2);
          if ((*(byte *)(param_1 + 4) & 4) != 0) {
            FUN_0045bfec(param_1,param_2,param_2,param_2);
          }
          *(undefined4 **)(param_1 + 0x24) = param_2;
        }
        else {
          iVar1 = FUN_0045de3c(param_1);
          uVar3 = iVar1 - *(int *)(param_1 + 0x24);
          FUN_00459ea8(param_2,*(undefined4 **)(param_1 + 0x24),uVar3);
          FUN_0045c008(param_1,param_2,param_3 + -1 + (int)param_2);
          FUN_0045c020(param_1,uVar3);
          iVar1 = FUN_0045bef8(param_1);
          iVar2 = FUN_0045de54(param_1);
          iVar4 = FUN_0045de3c(param_1);
          FUN_0045bfec(param_1,param_2,(iVar1 - iVar2) + (int)param_2,iVar4 + 1);
          FUN_0045681c();
          *(undefined4 **)(param_1 + 0x24) = param_2;
        }
      }
    }
    else {
      param_1 = 0;
    }
  }
  return param_1;
}

