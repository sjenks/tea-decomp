// name: FUN_004e6dec
// address: 0x4e6dec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004e6dec(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_1;
  iVar2 = FUN_004e6b64(param_1);
  if (iVar2 == -1) {
    uVar3 = 1;
  }
  else {
    pcVar1 = *(code **)(&DAT_00518d8c + iVar2 * 4);
    if (pcVar1 != (code *)0x1) {
      if (pcVar1 == (code *)0x0) {
        if ((1 < param_1 - 0x10U) && (param_1 != 0x14)) {
          if (param_1 == 0x16) {
            FUN_004e6270();
          }
          else {
            FUN_004e6304(3);
          }
        }
      }
      else {
        *(undefined4 *)(&DAT_00518d8c + iVar2 * 4) = 0;
        (*pcVar1)(pcVar1,(&DAT_00518ddc)[iVar2],iVar4,param_1,(&DAT_00518ddc)[iVar2],0);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

