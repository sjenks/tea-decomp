// name: FUN_004281f4
// address: 0x4281f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004281f4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_00435104;
  if (*(char *)(param_1 + 0x44) != '\0') {
    if ((*(byte *)(param_1 + 0x1a) & 2) != 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      FUN_0042817f(param_1 + 0x52,iVar1,*(undefined **)(iVar1 + 0x28),
                   (uint)*(ushort *)(iVar1 + 0x2c));
    }
    DAT_00435104 = uVar2;
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  if (*(char *)(param_1 + 0x45) != '\0') {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      FUN_00426830(s_argType_00433bc3,s_xx_cpp_00433bcb,0x5fe);
    }
    if (((*(byte *)(iVar1 + 4) & 2) != 0) && ((*(byte *)(iVar1 + 0xc) & 2) != 0)) {
      FUN_0042817f(*(undefined4 *)(param_1 + 0x40),iVar1,*(undefined **)(iVar1 + 0x28),
                   (uint)*(ushort *)(iVar1 + 0x2c));
    }
    *(undefined1 *)(param_1 + 0x45) = 0;
  }
  return;
}

