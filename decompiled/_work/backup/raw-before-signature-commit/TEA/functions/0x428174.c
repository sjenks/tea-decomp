// name: FUN_00428174
// address: 0x428174
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00428174(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x50) + 8);
  (**(code **)(**(int **)(param_1 + 0x54) + 4))();
  (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  puVar2 = *(undefined4 **)(param_1 + 0x58);
  *(undefined4 *)((int)puVar2 + 0x25) = *(undefined4 *)(*(int *)(param_1 + 0x54) + 4);
  *(undefined4 *)((int)puVar2 + 0x29) = 0;
  *(undefined4 *)((int)puVar2 + 0x2d) = 0;
  StartDocA((HDC)*puVar2,(DOCINFOA *)((int)puVar2 + 0x21));
  (**(code **)(**(int **)(param_1 + 0x54) + 0x10))();
  for (iVar5 = *(int *)(iVar1 + 8); iVar5 <= *(int *)(iVar1 + 8); iVar5 = iVar5 + 1) {
    cVar4 = (**(code **)(**(int **)(param_1 + 0x54) + 0x14))();
    if (cVar4 == '\0') break;
    StartPage((HDC)**(undefined4 **)(param_1 + 0x58));
    (**(code **)(**(int **)(param_1 + 0x54) + 0x18))();
    piVar3 = *(int **)(param_1 + 0x58);
    FUN_0048db40(piVar3);
    EndPage((HDC)*piVar3);
  }
  (**(code **)(**(int **)(param_1 + 0x54) + 0x1c))();
  EndDoc((HDC)**(undefined4 **)(param_1 + 0x58));
  (**(code **)(**(int **)(param_1 + 0x54) + 0x20))();
  return;
}

