// name: FUN_0045f315
// address: 0x45f315
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0045f315(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  puVar5 = &stack0xfffffffc;
  uVar6 = (uint)*(ushort *)(param_1 + 0x10);
  while ((uVar4 = uVar6, uVar4 != 0 && (uVar4 != *(uint *)(puVar5 + 0xc)))) {
    uVar6 = (uint)*(ushort *)(*(int *)(puVar5 + -4) + uVar4);
    uVar3 = (uint)*(ushort *)(*(int *)(puVar5 + -4) + uVar4 + 2);
    *(ushort *)(*(int *)(puVar5 + 8) + 0x10) = *(ushort *)(*(int *)(puVar5 + -4) + uVar4);
    if (uVar3 == 0) {
      _DAT_00477e28 = *(undefined4 *)(*(int *)(puVar5 + -4) + 4 + uVar4 + 4);
      *(undefined2 *)(*(int *)(puVar5 + 8) + 0x12) = 1;
      FUN_00456deb();
      *(undefined2 *)(*(int *)(puVar5 + 8) + 0x12) = 0;
    }
    else if (2 < uVar3 - 1) {
      if (uVar3 == 4) {
        uVar2 = FUN_00401140();
        *(undefined4 *)(puVar5 + -0x10) = uVar2;
        while ((puVar1 = (undefined4 *)**(int **)(puVar5 + -0x10), puVar1 != (undefined4 *)0x0 &&
               ((puVar1[10] != *(int *)(puVar5 + 8) || (uVar4 != puVar1[0xc]))))) {
          *(undefined4 **)(puVar5 + -0x10) = puVar1;
        }
        if ((puVar1 == (undefined4 *)0x0) || (puVar1 != (undefined4 *)**(int **)(puVar5 + -0x10))) {
          FUN_0045d2c4(s_xdrPtr____xdrPtr_____xdrLPP_0047637a,s_xx_cpp_00476396,0x8ba);
        }
        **(undefined4 **)(puVar5 + -0x10) = *puVar1;
        FUN_0045eec8((int)puVar1);
        (*(code *)puVar1[7])();
      }
      else if (uVar3 - 1 == 4) {
        uVar2 = FUN_0045fdee(*(int **)(*(int *)(puVar5 + -4) + uVar4 + 8),
                             *(int *)(*(int *)(puVar5 + -4) + uVar4 + 4) + *(int *)(puVar5 + -0xc),
                             *(int *)(puVar5 + 8),*(int *)(puVar5 + -8));
        *(undefined4 *)(puVar5 + -0xc) = uVar2;
      }
      else {
        FUN_0045d2c4(s___bogus_context_in_Local_unwind__004763bd,s_xx_cpp_004763e0,0x8e9);
      }
    }
  }
  return;
}

