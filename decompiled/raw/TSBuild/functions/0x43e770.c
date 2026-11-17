// name: FUN_0043e770
// address: 0x43e770
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043e770(int *param_1,int param_2,HWND param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  BOOL BVar3;
  undefined4 uVar4;
  bool bVar5;
  int local_10;
  
  if ((param_3 == (HWND)0x0) && (iVar2 = FUN_0043831c(param_1[1]), iVar2 != 0)) {
    if (*(int *)(iVar2 + 0xc) == 0) {
      bVar5 = (*(byte *)(iVar2 + 0x1b) & 0x10) != 0;
    }
    else {
      BVar3 = IsWindowVisible(*(HWND *)(iVar2 + 0xc));
      bVar5 = BVar3 != 0;
    }
    if (bVar5) {
      FUN_00429290((int)(param_1 + 1),iVar2);
    }
    else {
      uVar1 = *(uint *)(iVar2 + 0x18);
      local_10 = 0;
      if ((*(byte *)(iVar2 + 0x75) & 0x80) == 0) {
        FUN_00438220(param_1[1],FUN_0043de35);
      }
      else {
        local_10 = FUN_00438220(param_1[1],FUN_0043de8b);
      }
      if (local_10 == 0) {
        local_10 = *(int *)(*param_1 + 0x15);
      }
      switch((uVar1 & 0xf00) >> 8) {
      case 1:
        FUN_0043e9b0((int)param_1,iVar2,local_10);
        break;
      case 2:
        FUN_0043eb34(param_1,iVar2,local_10);
        break;
      case 3:
        FUN_0043ecf8(param_1,iVar2,local_10);
        break;
      case 4:
        FUN_0043ef34(param_1,iVar2,local_10);
      }
    }
    (**(code **)(param_1[4] + 4))();
    (**(code **)(*(int *)(iVar2 + 8) + 100))();
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044d0cc((int *)*param_1,param_2,param_3,param_4);
  }
  return uVar4;
}

