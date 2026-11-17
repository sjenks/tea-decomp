// name: FUN_0043cc6c
// address: 0x43cc6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043cc6c(int *param_1,int param_2)

{
  uint *puVar1;
  char *pcVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 local_3c;
  undefined **local_18;
  int *local_14;
  undefined1 local_10;
  undefined4 local_f;
  undefined4 local_b;
  
  FUN_00455f04(0x46db40);
  if ((param_2 == 0) && (param_1[0x18] == 0)) {
    uVar3 = 0;
    *in_FS_OFFSET = local_3c;
  }
  else {
    local_18 = &PTR_FUN_00466164;
    local_14 = (int *)0x0;
    local_10 = 1;
    local_f = 0;
    local_b = 0;
    (*(code *)PTR_FUN_0046616c)();
    if (local_14 == (int *)0x0) {
      uVar3 = 0;
      FUN_0043f27c((int *)&local_18,2);
      *in_FS_OFFSET = local_3c;
    }
    else {
      uVar3 = 0;
      puVar1 = (uint *)FUN_0043af08(param_1,0);
      if (puVar1 != (uint *)0x0) {
        puVar4 = puVar1;
        pcVar2 = FUN_00455bf0(puVar1);
        uVar3 = (**(code **)(*local_14 + 0x20))(local_14,*local_14,puVar4,local_14,puVar1,pcVar2);
        FUN_0043afc4(param_1,(LPCSTR)puVar1,'\0');
        if ((char)uVar3 != '\0') {
          FUN_0042d1a4(*param_1,0xb9,0,0);
        }
      }
      FUN_0043f27c((int *)&local_18,2);
      *in_FS_OFFSET = local_3c;
    }
  }
  return uVar3;
}

