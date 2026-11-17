// name: FUN_0041e11c
// address: 0x41e11c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0041e11c(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  
  piVar3 = (int *)(param_1 + 0x18);
  while( true ) {
    if (*piVar3 == 0) {
      return 0;
    }
    if (param_2 == *(int *)(*piVar3 + 1)) break;
    piVar3 = (int *)(*piVar3 + 0x55);
  }
  puVar1 = (undefined1 *)*piVar3;
  *piVar3 = *(int *)(puVar1 + 0x55);
  FUN_0041e954(param_1,puVar1);
  *(int *)(param_1 + 0x29) = *(int *)(param_1 + 0x29) + -1;
  for (puVar2 = *(undefined1 **)(param_1 + 0x18); puVar2 != (undefined1 *)0x0;
      puVar2 = *(undefined1 **)(puVar2 + 0x55)) {
    if (param_2 == *(int *)(puVar2 + 5)) {
      FUN_0041e954(param_1,puVar2);
      *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(puVar1 + 5);
      if (*(int *)(puVar2 + 5) == 0) {
        puVar2[0xb] = puVar1[0xb] & 0xf | puVar2[0xb] & 0xf0;
      }
    }
    if (param_2 == *(int *)(puVar2 + 0x10)) {
      FUN_0041e954(param_1,puVar2);
      *(undefined4 *)(puVar2 + 0x10) = *(undefined4 *)(puVar1 + 0x10);
      if (*(int *)(puVar2 + 0x10) == 0) {
        puVar2[0x16] = puVar1[0x16] & 0xf | puVar2[0x16] & 0xf0;
      }
    }
    if (param_2 == *(int *)(puVar2 + 0x1b)) {
      FUN_0041e954(param_1,puVar2);
      if ((puVar2[0x1f] & 0xf) == 5) {
        puVar2[0x20] = puVar2[0x20] & 0xf0;
      }
      else if ((puVar1[0x1f] & 0xf) == 5) {
        *(undefined4 *)(puVar2 + 0x1b) = *(undefined4 *)(puVar1 + 5);
        if (*(int *)(puVar2 + 0x1b) == 0) {
          puVar2[0x21] = puVar1[0xb] & 0xf | puVar2[0x21] & 0xf0;
        }
      }
      else {
        *(undefined4 *)(puVar2 + 0x1b) = *(undefined4 *)(puVar1 + 0x1b);
        if (*(int *)(puVar2 + 0x1b) == 0) {
          puVar2[0x21] = puVar1[0x21] & 0xf | puVar2[0x21] & 0xf0;
        }
      }
    }
    if (param_2 == *(int *)(puVar2 + 0x26)) {
      FUN_0041e954(param_1,puVar2);
      if ((puVar2[0x2a] & 0xf) == 6) {
        puVar2[0x2b] = puVar2[0x2b] & 0xf0;
      }
      else if ((puVar1[0x2a] & 0xf) == 6) {
        *(undefined4 *)(puVar2 + 0x26) = *(undefined4 *)(puVar1 + 0x10);
        if (*(int *)(puVar2 + 0x26) == 0) {
          puVar2[0x2c] = puVar1[0x16] & 0xf | puVar2[0x2c] & 0xf0;
        }
      }
      else {
        *(undefined4 *)(puVar2 + 0x26) = *(undefined4 *)(puVar1 + 0x26);
        if (*(int *)(puVar2 + 0x26) == 0) {
          puVar2[0x2c] = puVar1[0x2c] & 0xf | puVar2[0x2c] & 0xf0;
        }
      }
    }
  }
  uVar4 = FUN_0044b2cc();
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}

