// name: FUN_004dd5cc
// address: 0x4dd5cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004dd5cc(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_1 == 0) {
    FUN_004e7cc4((uint *)&DAT_004a9acc,(undefined4 *)&DAT_0051bc10,0,(undefined *)0x0,0,0,0,0);
  }
  if (param_2 != 0) {
    if ((*(byte *)(param_3 + 0xc) & 0x80) == 0) {
      param_2 = param_2 - *(int *)(param_2 + -4);
      if (*(int *)(param_2 + -4) != 0) {
        FUN_004e5ce8(s___unsigned___far___vtablePtr___1_00516fa8,s_xxtype_cpp_00516fcf,0x29e);
      }
      param_3 = *(int *)(param_2 + -0xc);
    }
    else {
      param_3 = 0;
    }
  }
  uVar2 = param_2 + param_3 >> 4 & 0xff;
  for (puVar3 = (undefined4 *)(&DAT_0051bc18)[uVar2];
      (puVar3 != (undefined4 *)0x0 && ((param_3 != puVar3[1] || (param_2 != puVar3[2]))));
      puVar3 = (undefined4 *)puVar3[3]) {
  }
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_004cc0f0();
    if (puVar3 != (undefined4 *)0x0) {
      uVar1 = (&DAT_0051bc18)[uVar2];
      *puVar3 = &PTR_FUN_005171fc;
      puVar3[1] = param_3;
      *puVar3 = &PTR_FUN_005171ec;
      puVar3[2] = param_2;
      puVar3[3] = uVar1;
      puVar3[4] = 0;
    }
    (&DAT_0051bc18)[uVar2] = puVar3;
  }
  return puVar3;
}

