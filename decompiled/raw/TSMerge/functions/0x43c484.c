// name: FUN_0043c484
// address: 0x43c484
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_0043c484(int *param_1,int param_2)

{
  int iVar1;
  LPSTR pCVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  undefined **local_18;
  int *local_14;
  undefined1 local_10;
  undefined4 local_f;
  undefined4 local_b;
  
  FUN_00455f04(0x46da04);
  if ((param_2 == 0) && (param_1[0x18] == 0)) {
    uVar4 = 0;
    *in_FS_OFFSET = local_3c;
  }
  else {
    uVar4 = 0;
    local_18 = &PTR_FUN_00466164;
    local_14 = (int *)0x0;
    local_10 = 1;
    local_f = 0;
    local_b = 0;
    (*(code *)PTR_FUN_0046616c)();
    if ((local_14 != (int *)0x0) && (iVar1 = (**(code **)(*local_14 + 0x38))(), -1 < iVar1)) {
      (**(code **)(param_1[3] + 0x24))();
      pCVar2 = FUN_0043af08(param_1,iVar1 + 1);
      if (pCVar2 != (LPSTR)0x0) {
        iVar3 = (**(code **)(*local_14 + 0x1c))();
        if (iVar3 == iVar1) {
          pCVar2[iVar1] = '\0';
          FUN_0042d1a4(*param_1,0xb9,0,0);
        }
        uVar4 = (uint)(iVar3 == iVar1);
        FUN_0043afc4(param_1,pCVar2,'\x01');
      }
    }
    FUN_0043f27c((int *)&local_18,2);
    *in_FS_OFFSET = local_3c;
  }
  return uVar4;
}

