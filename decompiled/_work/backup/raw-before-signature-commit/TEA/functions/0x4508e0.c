// name: FUN_004508e0
// address: 0x4508e0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004508e0(int *param_1,LPMSG param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_2->message == 0x200) {
    if (*(int *)(*param_1 + 0x14) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(*param_1 + 0x14) + 8);
    }
    puVar1 = FUN_004dd744(*(int *)(*param_1 + 0x14),iVar2,(int *)&DAT_0040299c,(int *)&DAT_0044fec4,
                          0);
    (**(code **)(puVar1[3] + 0xac))();
  }
  FUN_004a54b4(*param_1,param_2);
  return;
}

