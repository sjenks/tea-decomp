// name: FUN_004513e0
// address: 0x4513e0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004513e0(int *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int local_c;
  int local_8;
  
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    iVar3 = 0;
  }
  else {
    for (iVar3 = 0; iVar3 < param_3; iVar3 = iVar3 + 1) {
      local_c = FUN_0044e520();
      piVar4 = &local_c;
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      local_8 = FUN_00450258(param_1,uVar1);
      bVar2 = FUN_0044f188(&local_8,piVar4);
      if (bVar2) {
        return iVar3;
      }
    }
  }
  return iVar3;
}

