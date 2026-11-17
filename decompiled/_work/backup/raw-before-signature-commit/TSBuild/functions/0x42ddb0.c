// name: FUN_0042ddb0
// address: 0x42ddb0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0042ddb0(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (*(int *)(*param_1 + 8) == 0) {
    uVar3 = FUN_0042d94c(param_1);
    cVar1 = (char)uVar3;
    if (cVar1 == '\0') {
      *param_2 = 0;
    }
    else if (cVar1 == '\x01') {
      uVar3 = FUN_0042da9c(param_1);
      iVar2 = FUN_0042d688(param_1 + 2,uVar3);
      *param_2 = iVar2;
    }
    else if (cVar1 == '\x02') {
      puVar4 = (undefined4 *)FUN_0042dc10(param_1,param_3);
      FUN_0042dc94(param_1,puVar4,param_2);
      FUN_0042dd80(param_1);
    }
    else {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
    iVar2 = *param_2;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

