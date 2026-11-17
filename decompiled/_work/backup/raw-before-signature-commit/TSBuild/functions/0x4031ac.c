// name: FUN_004031ac
// address: 0x4031ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004031ac(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  char cVar3;
  undefined4 local_160;
  int local_13c;
  int local_138;
  undefined4 local_bc [2];
  undefined4 local_b4 [34];
  uint local_2c [2];
  LPCSTR local_24;
  
  FUN_00467ba8(0x474c24);
  FUN_00450b7c(local_2c,0x80c,(uint *)s_TEA_Sympathy_Dictionary_files____00474617,0,0,0x474359,0,0,0
              );
  FUN_004029ac(param_1,param_1 + 0x62,(int)local_2c);
  piVar1 = FUN_004511f4(&local_13c,0,*param_1,(int)local_2c,0,0x474657,0);
  iVar2 = (**(code **)(piVar1[3] + 0x14))();
  cVar3 = iVar2 == 1;
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x5c;
  *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + -0x5c;
  FUN_00420788(&local_13c,0);
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x5c;
  *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + 0x5c;
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x96;
  FUN_00435f74(local_b4,0);
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x96;
  FUN_0041e99c(local_bc,0);
  if (cVar3 != '\0') {
    SetWindowTextA(*(HWND *)(param_1[0x62] + 0xc),local_24);
  }
  FUN_00450c68((int)local_2c,2);
  *in_FS_OFFSET = local_160;
  return;
}

