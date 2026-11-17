// name: FUN_004380b0
// address: 0x4380b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004380b0(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  CHAR local_10c [256];
  undefined4 local_c;
  uint local_8;
  
  iVar1 = FUN_00443f20(*(int *)(param_1 + 0x20) + 4,param_3,local_10c,0x100);
  if (iVar1 == 0) {
    FUN_00457ef4(local_10c,(byte *)s_Error__Message__string_ID__u__no_0046c3a2);
  }
  local_8 = 0;
  if (param_4 != 0) {
    local_8 = param_4 | 0x20;
  }
  local_c = *(undefined4 *)(param_2 + 0x1e);
  (**(code **)(*(int *)(*(int *)(**(int **)(*(int *)(param_1 + 0x20) + 0x2b) + 0x6c) + 0x1b) + 0x30)
  )();
  return;
}

