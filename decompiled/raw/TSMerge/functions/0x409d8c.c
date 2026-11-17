// name: FUN_00409d8c
// address: 0x409d8c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl
FUN_00409d8c(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  
  if ((param_5 < param_4) && (param_5 <= param_7)) {
    iVar1 = FUN_00409868(param_2,param_3,param_6);
    FUN_004068fc(param_1,param_2,param_3);
    iVar1 = FUN_00409868(param_6,iVar1,param_1);
  }
  else if (param_7 < param_4) {
    if ((param_2 != param_1) && (param_2 != param_3)) {
      FUN_00409e44(param_1,param_2,param_3);
    }
    iVar1 = param_1 + param_5 * 0x10;
  }
  else {
    iVar1 = FUN_00409868(param_1,param_2,param_6);
    FUN_00409868(param_2,param_3,param_1);
    iVar1 = FUN_004068fc(param_6,iVar1,param_3);
  }
  return iVar1;
}

