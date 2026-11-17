// name: FUN_00455bf0
// address: 0x455bf0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_00455bf0(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = param_1;
  if (((uint)param_1 & 3) == 0) {
LAB_00455bf8:
    do {
      do {
        uVar1 = *puVar2;
        puVar2 = puVar2 + 1;
        uVar3 = uVar1 + 0xfefefeff & 0x80808080;
      } while (uVar3 == 0);
      uVar3 = uVar3 & ~uVar1;
    } while (uVar3 == 0);
    if ((char)uVar3 == '\0') {
      if ((char)(uVar3 >> 8) == '\0') {
        if ((uVar3 & 0xff0000) == 0) goto LAB_00455c42;
        goto LAB_00455c41;
      }
    }
    else {
LAB_00455c3f:
      puVar2 = (uint *)((int)puVar2 + -1);
    }
LAB_00455c40:
    puVar2 = (uint *)((int)puVar2 + -1);
  }
  else {
    puVar2 = param_1 + 1;
    if ((char)*param_1 == '\0') goto LAB_00455c3f;
    if (*(char *)((int)param_1 + 1) == '\0') goto LAB_00455c40;
    if (*(char *)((int)param_1 + 2) != '\0') {
      puVar2 = (uint *)((int)param_1 + 3U & 0xfffffffc);
      goto LAB_00455bf8;
    }
  }
LAB_00455c41:
  puVar2 = (uint *)((int)puVar2 + -1);
LAB_00455c42:
  return (char *)((int)puVar2 + (-1 - (int)param_1));
}

