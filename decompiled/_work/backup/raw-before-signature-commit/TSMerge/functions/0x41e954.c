// name: FUN_0041e954
// address: 0x41e954
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041e954(int param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_8;
  
  puVar3 = (undefined4 *)(param_2 + 0x31);
  *(undefined1 *)(param_1 + 0x28) = 1;
  FUN_0041e38c(param_1);
  *param_2 = 0;
  local_8 = 0;
  do {
    iVar1 = puVar3[1];
    *puVar3 = 0;
    if (iVar1 != 0) {
      if (iVar1 == *(int *)(param_1 + 0x1c)) {
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar1 + 0x20);
      }
      else {
        for (iVar2 = *(int *)(param_1 + 0x1c); *(int *)(iVar2 + 0x20) != 0;
            iVar2 = *(int *)(iVar2 + 0x20)) {
          if (iVar1 == *(int *)(iVar2 + 0x20)) {
            *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar1 + 0x20);
            break;
          }
        }
      }
      FUN_0044b2cc();
      puVar3[1] = 0;
    }
    puVar3 = (undefined4 *)((int)puVar3 + 9);
    local_8 = local_8 + 1;
    if (3 < local_8) {
      return;
    }
  } while( true );
}

