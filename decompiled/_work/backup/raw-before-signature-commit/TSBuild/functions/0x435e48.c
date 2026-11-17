// name: FUN_00435e48
// address: 0x435e48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00435e48(int param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  *(undefined2 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x800;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = DAT_0048c654;
  puVar1 = FUN_0042e8f4(param_1);
  *(undefined1 **)(param_1 + 0x68) = puVar1;
  if (*(int *)(param_1 + 0x14) == 0) {
    *(undefined4 *)(param_1 + 0x7e) = 0;
  }
  else {
    FUN_004381f0(*(int *)(param_1 + 0x14),param_1);
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    if (param_3 == 0) {
      param_3 = 0;
    }
    *(int *)(param_1 + 0x70) = param_3;
    if (*(int *)(param_1 + 0x70) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = **(int **)(param_1 + 0x70);
    }
    puVar2 = FUN_00468488(*(int *)(param_1 + 0x70),iVar4,(int *)&DAT_00404d74,(int *)&DAT_004039bc,0
                         );
    *(undefined4 **)(param_1 + 0x6c) = puVar2;
    if (*(int *)(param_1 + 0x6c) == 0) {
      piVar3 = FUN_0041ca18(0);
      *(int **)(param_1 + 0x6c) = piVar3;
      if (*(int *)(param_1 + 0x70) == 0) {
        if (*(int *)(param_1 + 0x6c) == 0) {
          iVar4 = *(int *)(param_1 + 0x6c);
        }
        else {
          iVar4 = *(int *)(param_1 + 0x6c) + 4;
        }
        *(int *)(param_1 + 0x70) = iVar4;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x6c);
    if (param_3 == 0) {
      param_3 = *(int *)(*(int *)(param_1 + 0x14) + 0x70);
    }
    *(int *)(param_1 + 0x70) = param_3;
  }
  FUN_00436adc(param_1);
  return;
}

