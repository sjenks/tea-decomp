// name: FUN_004024c4
// address: 0x4024c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004024c4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStackY_107fc [1024];
  uint auStackY_103fc [250];
  CHAR aCStackY_10014 [32768];
  CHAR local_8014 [26600];
  undefined4 uStackY_182c;
  int local_c;
  
  iVar1 = 0x10;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + -1;
  } while (iVar2 + -1 != 0);
  if (param_1[7] == 1) {
    GetWindowTextA(*(HWND *)(*(int *)((int)param_1 + 0xd6) + 0xc),local_8014,0x8000);
    GetWindowTextA(*(HWND *)(param_1[0x62] + 0xc),aCStackY_10014,0x8000);
    GetWindowTextA(*(HWND *)(*(int *)((int)param_1 + 0x23a) + 0xc),(LPSTR)auStackY_103fc,1000);
    iVar1 = FUN_00438338(param_1[0xbb],0xf0,0,0);
    iVar2 = FUN_00403588(param_1,param_1 + 0x2c7);
    if (100 < iVar2) {
      iVar2 = 100;
    }
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    iVar3 = FUN_00403588(param_1,(int *)((int)param_1 + 0xbce));
    if (100 < iVar3) {
      iVar3 = 100;
    }
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    local_c = FUN_00403588(param_1,param_1 + 800);
    if (100 < local_c) {
      local_c = 100;
    }
    if (local_c < 0) {
      local_c = 0;
    }
    iVar4 = thunk_FUN_00468a98(aCStackY_10014,0);
    if (iVar4 == 0) {
      FUN_0046a5c8(auStackY_107fc,PTR_s_A_file_named__s_already_exists__A_004742f0);
      iVar4 = (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
      if (iVar4 != 6) {
        return iVar4;
      }
    }
    FUN_0040339c((int)param_1);
    param_1[7] = 2;
    FUN_00438410(*(int *)((int)param_1 + 0x702),(uint *)s__Abandon_0047434f);
    piVar5 = FUN_0046997c(local_8014,&DAT_00474513);
    param_1[0x34d] = (int)piVar5;
    if (param_1[0x34d] == 0) {
      (**(code **)(param_1[3] + 0x4c))();
    }
    if (param_1[0x34d] != 0) {
      uStackY_182c = 0x4026de;
      FUN_00406f08(param_1 + 6,0x48b33c,aCStackY_10014,auStackY_103fc,iVar2,iVar3,local_c,
                   (uint)(iVar1 == 1));
    }
    (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
    if ((int *)param_1[0x34d] != (int *)0x0) {
      FUN_00469508((int *)param_1[0x34d]);
      param_1[0x34d] = 0;
    }
    FUN_0040339c((int)param_1);
    FUN_004029e8((int)param_1);
    iVar2 = FUN_00438410(*(int *)((int)param_1 + 0x702),(uint *)s__Start_00474348);
  }
  else if (param_1[7] == 2) {
    param_1[7] = 3;
  }
  return iVar2;
}

