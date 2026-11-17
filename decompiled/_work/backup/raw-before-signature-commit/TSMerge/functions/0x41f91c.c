// name: FUN_0041f91c
// address: 0x41f91c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0041f91c(int *param_1,ushort param_2)

{
  char cVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  ushort uVar5;
  char *pcVar6;
  
  if (*param_1 == 0) {
    iVar4 = *param_1;
  }
  else {
    uVar5 = DAT_00467e1c;
    if (((param_2 != 0) && (uVar5 = DAT_00467d34, param_2 != 0x800)) &&
       (uVar5 = param_2, param_2 == 0x400)) {
      uVar5 = DAT_00467d3c;
    }
    cVar1 = *(char *)*param_1;
    if ((byte)(cVar1 - 1U) < 2) {
      iVar4 = FUN_0041f724(*param_1 + -0x14,uVar5);
    }
    else if (cVar1 == '!') {
      iVar4 = FUN_0041fa00(uVar5);
      if (iVar4 == 0) {
        pcVar6 = (char *)*param_1;
        puVar2 = (undefined4 *)FUN_0041f2cc();
        puVar3 = FUN_0041f4d0(puVar2,pcVar6);
        if (puVar3 == (uint *)0x0) {
          *param_1 = *param_1 + 1;
          iVar4 = *param_1;
        }
        else {
          *param_1 = (int)(puVar3 + 5);
          iVar4 = FUN_0041f724((int)puVar3,uVar5);
        }
      }
      else {
        iVar4 = *param_1 + 1;
      }
    }
    else if ((cVar1 == '#') || (cVar1 == '@')) {
      pcVar6 = (char *)*param_1;
      puVar2 = (undefined4 *)FUN_0041f2cc();
      puVar3 = FUN_0041f4d0(puVar2,pcVar6);
      if (puVar3 == (uint *)0x0) {
        *param_1 = 0;
        iVar4 = 0;
      }
      else {
        *param_1 = (int)(puVar3 + 5);
        iVar4 = FUN_0041f724((int)puVar3,uVar5);
      }
    }
    else {
      iVar4 = *param_1;
    }
  }
  return iVar4;
}

