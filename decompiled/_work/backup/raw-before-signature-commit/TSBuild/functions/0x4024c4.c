// name: FUN_004024c4
// address: 0x4024c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004024c4(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStackY_107fc [1024];
  CHAR aCStackY_103fc [1000];
  CHAR aCStackY_10014 [32768];
  CHAR local_8014 [26600];
  undefined4 uStackY_182c;
  int *piStackY_1828;
  undefined *puStackY_1824;
  CHAR *pCStackY_1820;
  CHAR *pCStackY_181c;
  
  iVar1 = 0x10;
  do {
    iVar3 = iVar1;
    iVar1 = iVar3 + -1;
  } while (iVar3 + -1 != 0);
  if (param_1[7] == 1) {
    GetWindowTextA(*(HWND *)(*(int *)((int)param_1 + 0xd6) + 0xc),local_8014,0x8000);
    GetWindowTextA(*(HWND *)(param_1[0x62] + 0xc),aCStackY_10014,0x8000);
    GetWindowTextA(*(HWND *)(*(int *)((int)param_1 + 0x23a) + 0xc),aCStackY_103fc,1000);
    pCStackY_181c = (CHAR *)0x402556;
    FUN_00438338(param_1[0xbb],0xf0,0,0);
    FUN_00403588(param_1,param_1 + 0x2c7);
    FUN_00403588(param_1,(int *)((int)param_1 + 0xbce));
    FUN_00403588(param_1,param_1 + 800);
    iVar1 = thunk_FUN_00468a98(aCStackY_10014,0);
    if (iVar1 == 0) {
      FUN_0046a5c8(auStackY_107fc,PTR_s_A_file_named__s_already_exists__A_004742f0);
      pCStackY_181c = *(CHAR **)(*param_1 + 0x6c);
      pCStackY_1820 = (CHAR *)0x402644;
      iVar1 = (**(code **)(*(int *)((int)pCStackY_181c + 0x1b) + 0x30))();
      if (iVar1 != 6) {
        return iVar1;
      }
    }
    FUN_0040339c((int)param_1);
    param_1[7] = 2;
    FUN_00438410(*(int *)((int)param_1 + 0x702),(uint *)s__Abandon_0047434f);
    piVar2 = FUN_0046997c(local_8014,&DAT_00474513);
    param_1[0x34d] = (int)piVar2;
    if (param_1[0x34d] == 0) {
      (**(code **)(param_1[3] + 0x4c))();
    }
    if (param_1[0x34d] != 0) {
      pCStackY_181c = aCStackY_103fc;
      pCStackY_1820 = aCStackY_10014;
      piStackY_1828 = param_1 + 6;
      puStackY_1824 = &DAT_0048b33c;
      uStackY_182c = 0x4026de;
      FUN_00406f08();
    }
    pCStackY_181c = *(CHAR **)(*param_1 + 0x6c);
    pCStackY_1820 = (CHAR *)0x40270d;
    (**(code **)(*(int *)((int)pCStackY_181c + 0x1b) + 0x30))();
    if ((int *)param_1[0x34d] != (int *)0x0) {
      FUN_00469508((int *)param_1[0x34d]);
      param_1[0x34d] = 0;
    }
    FUN_0040339c((int)param_1);
    FUN_004029e8((int)param_1);
    iVar3 = FUN_00438410(*(int *)((int)param_1 + 0x702),(uint *)s__Start_00474348);
  }
  else if (param_1[7] == 2) {
    param_1[7] = 3;
  }
  return iVar3;
}

