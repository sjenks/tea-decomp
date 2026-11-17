// name: FUN_0043b6a0
// address: 0x43b6a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043b6a0(int param_1,int param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  
  bVar1 = false;
  if (*(int *)(param_1 + 0x49) != 0) {
    bVar1 = false;
    for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x45); iVar2 = iVar2 + 1) {
      if (*(int *)(*(int *)(param_1 + 0x49) + iVar2 * 4) == param_2) {
        bVar1 = true;
        unaff_EDI = iVar2;
      }
    }
  }
  if (param_3 == '\0') {
    if (bVar1) {
      if (*(int *)(param_1 + 0x45) == 1) {
        FUN_0045681c();
        *(undefined4 *)(param_1 + 0x49) = 0;
        *(undefined4 *)(param_1 + 0x45) = 0;
      }
      else {
        iVar2 = FUN_004568d0();
        iVar3 = 0;
        if (0 < unaff_EDI) {
          do {
            *(undefined4 *)(iVar2 + iVar3 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x49) + iVar3 * 4);
            iVar3 = iVar3 + 1;
          } while (iVar3 < unaff_EDI);
        }
        while (unaff_EDI = unaff_EDI + 1, unaff_EDI < *(int *)(param_1 + 0x45)) {
          *(undefined4 *)(iVar2 + -4 + unaff_EDI * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0x49) + unaff_EDI * 4);
        }
        FUN_0045681c();
        *(int *)(param_1 + 0x49) = iVar2;
        *(int *)(param_1 + 0x45) = *(int *)(param_1 + 0x45) + -1;
      }
    }
  }
  else if (!bVar1) {
    iVar2 = FUN_004568d0();
    for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x45); iVar3 = iVar3 + 1) {
      *(undefined4 *)(iVar2 + iVar3 * 4) = *(undefined4 *)(*(int *)(param_1 + 0x49) + iVar3 * 4);
    }
    FUN_0045681c();
    *(int *)(param_1 + 0x49) = iVar2;
    *(int *)(*(int *)(param_1 + 0x49) + *(int *)(param_1 + 0x45) * 4) = param_2;
    *(int *)(param_1 + 0x45) = *(int *)(param_1 + 0x45) + 1;
  }
  return;
}

