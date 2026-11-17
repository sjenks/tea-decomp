// name: FUN_004dc9f4
// address: 0x4dc9f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_004dc9f4(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = param_1;
  if (((uint)param_1 & 3) == 0) {
LAB_004dc9fc:
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
        if ((uVar3 & 0xff0000) == 0) goto LAB_004dca46;
        goto LAB_004dca45;
      }
    }
    else {
LAB_004dca43:
      puVar2 = (uint *)((int)puVar2 + -1);
    }
LAB_004dca44:
    puVar2 = (uint *)((int)puVar2 + -1);
  }
  else {
    puVar2 = param_1 + 1;
    if ((char)*param_1 == '\0') goto LAB_004dca43;
    if (*(char *)((int)param_1 + 1) == '\0') goto LAB_004dca44;
    if (*(char *)((int)param_1 + 2) != '\0') {
      puVar2 = (uint *)((int)param_1 + 3U & 0xfffffffc);
      goto LAB_004dc9fc;
    }
  }
LAB_004dca45:
  puVar2 = (uint *)((int)puVar2 + -1);
LAB_004dca46:
  return (char *)((int)puVar2 + (-1 - (int)param_1));
}

