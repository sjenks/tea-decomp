// name: FUN_004a50ec
// address: 0x4a50ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a50ec(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  HWND pHVar2;
  LRESULT LVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (param_3 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *param_3;
    }
    puVar1 = FUN_004dd744((int)param_3,iVar4,(int *)&DAT_00469dc4,(int *)&DAT_004756a8,0);
    *(undefined4 **)(param_1 + 0x6c) = puVar1;
    if (*(int *)(param_1 + 0xc) == 0) {
      pHVar2 = (HWND)0x0;
    }
    else {
      pHVar2 = GetParent(*(HWND *)(param_1 + 0xc));
    }
    if (pHVar2 == (HWND)0x0) {
      LVar3 = 0;
    }
    else {
      LVar3 = FUN_004a614c(pHVar2,*(LPARAM *)(param_1 + 0x6c));
    }
    FUN_004a5194(param_1,LVar3,(int)param_3);
    FUN_004a70e4(param_1);
    FUN_004a77c8(param_1);
    FUN_004a783c(param_1,'\x01');
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x21;
    FUN_004a5e28(param_1);
  }
  return;
}

