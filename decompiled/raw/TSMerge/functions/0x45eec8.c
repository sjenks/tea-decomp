// name: FUN_0045eec8
// address: 0x45eec8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045eec8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_00477e20;
  if (*(char *)(param_1 + 0x44) != '\0') {
    if ((*(byte *)(param_1 + 0x1a) & 2) != 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      FUN_0045ee53(param_1 + 0x52,iVar1,*(undefined **)(iVar1 + 0x28),
                   (uint)*(ushort *)(iVar1 + 0x2c));
    }
    DAT_00477e20 = uVar2;
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  if (*(char *)(param_1 + 0x45) != '\0') {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      FUN_0045d2c4(s_argType_004761ff,s_xx_cpp_00476207,0x5fe);
    }
    if (((*(byte *)(iVar1 + 4) & 2) != 0) && ((*(byte *)(iVar1 + 0xc) & 2) != 0)) {
      FUN_0045ee53(*(undefined4 *)(param_1 + 0x40),iVar1,*(undefined **)(iVar1 + 0x28),
                   (uint)*(ushort *)(iVar1 + 0x2c));
    }
    *(undefined1 *)(param_1 + 0x45) = 0;
  }
  return;
}

