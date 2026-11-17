// name: FUN_00403a18
// address: 0x403a18
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00403a18(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *in_FS_OFFSET;
  char cVar6;
  undefined4 local_170;
  undefined1 local_14c [8];
  int local_144;
  int local_13c;
  int local_138;
  undefined4 local_bc [2];
  undefined4 local_b4 [34];
  uint local_2c [2];
  uint *local_24;
  undefined4 local_14;
  
  FUN_00455f04(0x461dd4);
  FUN_004459e8(local_2c,0x180c,(uint *)s_Word_list_file____txt____txt_All_004616db,0,0,0x46170c,0,0,
               0);
  iVar2 = GetWindowTextLengthA(*(HWND *)(*param_2 + 0xc));
  if (iVar2 < 1) {
    local_14 = DAT_004768a4;
  }
  else {
    GetWindowTextA(*(HWND *)(*param_2 + 0xc),(LPSTR)local_24,0x104);
  }
  piVar3 = FUN_00445ea8(&local_13c,0,*param_1,(int)local_2c,0,param_3,0);
  iVar2 = (**(code **)(piVar3[3] + 0x14))();
  cVar6 = iVar2 == 1;
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x5c;
  *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + -0x5c;
  FUN_00415764(&local_13c,0);
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x5c;
  *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + 0x5c;
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x96;
  FUN_0042ade0(local_b4,0);
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x96;
  FUN_00413978(local_bc,0);
  if (cVar6 != '\0') {
    uVar4 = FUN_0040e7b8((LPCSTR)local_24);
    if ((char)uVar4 == '\0') {
      FUN_0044d11c((int)local_14c,local_24);
      uVar1 = *(uint *)(local_144 + -4);
      pcVar5 = FUN_00455bf0((uint *)s_doesn_t_seem_to_be_an_ANSI_text_f_00461710);
      FUN_0044d5c8((int)local_14c,uVar1,0,0x461710,(uint)pcVar5,0,(uint)pcVar5);
      (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
      if (local_144 != 0) {
        if (*(int *)(local_144 + -0xc) != -1) {
          piVar3 = (int *)(local_144 + -0xc);
          if (piVar3 == &DAT_00471d5c) {
            iVar2 = 1;
          }
          else if (piVar3 == &DAT_00471d5c) {
            iVar2 = 1;
          }
          else {
            *piVar3 = *piVar3 + -1;
            iVar2 = *piVar3 + 1;
          }
          if (iVar2 != 0) goto LAB_00403ccd;
        }
        FUN_0044b2cc();
        local_144 = 0;
      }
    }
    else {
      SetWindowTextA(*(HWND *)(*param_2 + 0xc),(LPCSTR)local_24);
      FUN_00403920((int)param_1);
    }
  }
LAB_00403ccd:
  FUN_00445ad4((int)local_2c,2);
  *in_FS_OFFSET = local_170;
  return;
}

