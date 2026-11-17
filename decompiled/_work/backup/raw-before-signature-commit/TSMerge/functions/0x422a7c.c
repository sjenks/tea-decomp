// name: FUN_00422a7c
// address: 0x422a7c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00422a7c(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  char local_84 [128];
  
  uVar1 = FUN_004227b8(param_1);
  if ((char)uVar1 == '[') {
    local_84[0] = '\0';
    FUN_004229e8(param_1,(int)local_84,0x80);
    if (local_84[0] == '\0') {
      *(undefined4 *)(*param_1 + 8) = 4;
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00421960(param_2,(uint *)local_84);
      if (iVar2 == 0) {
        *(undefined4 *)(*param_1 + 8) = 4;
        iVar2 = 0;
      }
    }
  }
  else {
    *(undefined4 *)(*param_1 + 8) = 4;
    iVar2 = 0;
  }
  return iVar2;
}

