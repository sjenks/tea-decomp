// name: FUN_00403298
// address: 0x403298
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void FUN_00403298(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  undefined1 local_1010 [12];
  undefined4 uStack_1004;
  CHAR local_c10;
  char local_c0f [1027];
  CHAR local_80c;
  char local_80b [1027];
  CHAR local_408;
  char local_407 [1027];
  
  if (param_4[7] == 1) {
    uStack_1004 = param_1;
    GetWindowTextA(*(HWND *)(param_4[0x1c0] + 0xc),&local_408,0x401);
    GetWindowTextA(*(HWND *)(*(int *)((int)param_4 + 0x7b2) + 0xc),&local_80c,0x401);
    GetWindowTextA(*(HWND *)(param_4[0x219] + 0xc),&local_c10,0x401);
    pcVar2 = &local_408;
    pcVar4 = &local_c10;
    do {
      bVar5 = *pcVar2 == *pcVar4;
      if (!bVar5) break;
      if (*pcVar2 == '\0') goto LAB_00403359;
      pcVar1 = pcVar2 + 1;
      bVar5 = *pcVar1 == pcVar4[1];
      if (!bVar5) break;
      pcVar2 = pcVar2 + 2;
      pcVar4 = pcVar4 + 2;
      bVar5 = *pcVar1 == '\0';
    } while (!bVar5);
    if (!bVar5) {
      pcVar2 = &local_80c;
      pcVar4 = &local_c10;
      do {
        if (*pcVar2 != *pcVar4) goto LAB_0040337d;
        bVar5 = true;
        if (*pcVar2 == '\0') break;
        pcVar1 = pcVar2 + 1;
        if (*pcVar1 != pcVar4[1]) goto LAB_0040337d;
        pcVar2 = pcVar2 + 2;
        pcVar4 = pcVar4 + 2;
        bVar5 = *pcVar1 == '\0';
      } while (!bVar5);
      if (!bVar5) {
LAB_0040337d:
        iVar3 = thunk_FUN_00456df4(&local_c10,0);
        if (iVar3 == 0) {
          FUN_00457ef4(local_1010,(byte *)s_A_file_named__s_already_exists__A_00461433);
          iVar3 = (**(code **)(*(int *)(*(int *)(*param_4 + 0x6c) + 0x1b) + 0x30))();
          if (iVar3 != 6) {
            return;
          }
        }
        FUN_0040402c((int)param_4);
        param_4[7] = 2;
        FUN_0042d27c(*(int *)((int)param_4 + 0xc7e),(uint *)s_S_top_0046132b);
        iVar3 = FUN_004088f4(param_4 + 6,&local_408,&local_80c,param_4[0x376],param_4[0x377],
                             &local_c10);
        switch(iVar3) {
        case 0:
          FUN_00403258((int)param_4,(byte *)s_Merging_completed_successfully_00461619);
          break;
        case 1:
          FUN_00403258((int)param_4,(byte *)s_Merging_abandoned_00461638);
          break;
        case 2:
          FUN_00403258((int)param_4,(byte *)s_Primary_list_couldn_t_be_loaded_0046164a);
          break;
        case 3:
          FUN_00403258((int)param_4,(byte *)s_Secondary_list_couldn_t_be_loade_0046166a);
          break;
        case 4:
          FUN_00403258((int)param_4,(byte *)s_Insufficient_disk_space_to_save_o_0046168c);
          break;
        case 5:
          FUN_00403258((int)param_4,(byte *)s_Insufficient_resources_to_do_mer_004616b8);
        }
        (**(code **)(*(int *)(*(int *)(*param_4 + 0x6c) + 0x1b) + 0x30))();
        FUN_0040402c((int)param_4);
        FUN_00403920((int)param_4);
        FUN_0042d27c(*(int *)((int)param_4 + 0xc7e),(uint *)&DAT_00461324);
        return;
      }
    }
LAB_00403359:
    (**(code **)(*(int *)(*(int *)(*param_4 + 0x6c) + 0x1b) + 0x30))();
  }
  else if (param_4[7] == 2) {
    param_4[7] = 3;
  }
  return;
}

