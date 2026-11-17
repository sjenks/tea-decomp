// name: FUN_0042cc74
// address: 0x42cc74
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042cc74(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 9) == 0) {
    uVar2 = FUN_00456e84();
    *(undefined4 *)(param_1 + 9) = uVar2;
  }
  else {
    puVar1 = (undefined4 *)FUN_00456ea4();
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)FUN_00456e84();
      FUN_00467580(puVar1,*(undefined4 **)(param_1 + 9),*(int *)(param_1 + 5) << 2);
      FUN_00456e94();
    }
    *(undefined4 **)(param_1 + 9) = puVar1;
  }
  FUN_004675f0((undefined4 *)(*(int *)(param_1 + 5) * 4 + *(int *)(param_1 + 9)),0,param_2 << 2);
  *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + param_2;
  return;
}

