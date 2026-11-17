// name: FUN_0041f12c
// address: 0x41f12c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041f12c(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x14) + 8);
  }
  puVar1 = FUN_004dd744(*(int *)(*param_1 + 0x14),iVar2,(int *)&DAT_0040299c,(int *)&DAT_00402910,0)
  ;
  (**(code **)(puVar1[3] + 0xac))();
  FUN_004a5774(*param_1);
  return;
}

