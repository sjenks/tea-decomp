// name: FUN_00403e14
// address: 0x403e14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00403e14(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  char cVar3;
  undefined4 local_160;
  int local_13c;
  int local_138;
  undefined4 local_bc [2];
  undefined4 local_b4 [34];
  uint local_2c [2];
  LPSTR local_24;
  undefined4 local_14;
  
  FUN_00455f04(0x461e54);
  FUN_004459e8(local_2c,0x80c,(uint *)s_Word_list_file____txt____txt_All_004616db,0,0,0x46170c,0,0,0
              );
  iVar1 = GetWindowTextLengthA(*(HWND *)(param_1[0x219] + 0xc));
  if (iVar1 < 1) {
    local_14 = DAT_004768a4;
  }
  else {
    GetWindowTextA(*(HWND *)(param_1[0x219] + 0xc),local_24,0x104);
  }
  piVar2 = FUN_00446060(&local_13c,0,*param_1,(int)local_2c,0,0x461775,0);
  iVar1 = (**(code **)(piVar2[3] + 0x14))();
  cVar3 = iVar1 == 1;
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x5c;
  *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + -0x5c;
  FUN_00415764(&local_13c,0);
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x5c;
  *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + 0x5c;
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x96;
  FUN_0042ade0(local_b4,0);
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x96;
  FUN_00413978(local_bc,0);
  if (cVar3 != '\0') {
    SetWindowTextA(*(HWND *)(param_1[0x219] + 0xc),local_24);
    FUN_00403920((int)param_1);
  }
  FUN_00445ad4((int)local_2c,2);
  *in_FS_OFFSET = local_160;
  return;
}

