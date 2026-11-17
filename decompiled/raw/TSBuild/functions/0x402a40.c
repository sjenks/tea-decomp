// name: FUN_00402a40
// address: 0x402a40
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00402a40(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  char cVar3;
  undefined *puVar4;
  int local_1e4;
  undefined4 local_1e0;
  undefined2 local_1d0;
  int local_1c4;
  undefined1 local_1bc [8];
  int local_1b4;
  int local_1ac [28];
  int local_13c;
  int local_138;
  undefined4 local_bc [2];
  undefined4 local_b4 [34];
  uint local_2c [2];
  LPCSTR local_24;
  
  FUN_00467ba8(0x474af8);
  local_1d0 = 8;
  FUN_00450b7c(local_2c,0x180c,(uint *)s_Alphabet_mapping_files____tsm____00474538,0,0,0x474571,0,0,
               0);
  local_1c4 = local_1c4 + 1;
  local_1d0 = 0x14;
  FUN_004029ac(param_1,param_1 + 9,(int)local_2c);
  local_1d0 = 0x20;
  piVar1 = FUN_0045103c(&local_13c,0,*param_1,(int)local_2c,0,0x474575,0);
  local_1c4 = local_1c4 + 6;
  iVar2 = (**(code **)(piVar1[3] + 0x14))();
  cVar3 = iVar2 == 1;
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x5c;
  *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + -0x5c;
  local_1c4 = local_1c4 + -6;
  FUN_00420788(&local_13c,0);
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x5c;
  *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + 0x5c;
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x96;
  local_1c4 = local_1c4 + -2;
  FUN_00435f74(local_b4,0);
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x96;
  local_1c4 = local_1c4 + -1;
  FUN_0041e99c(local_bc,0);
  if (cVar3 == '\0') goto LAB_00402d5b;
  iVar2 = FUN_00419664(local_24,&DAT_0048b33c,0x100,&local_1e4);
  param_1[8] = iVar2;
  if (iVar2 == 0) {
    if (local_1e4 < 1) {
      (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
    }
    else {
      local_1d0 = 0x2c;
      FUN_0045c504(local_1ac,0,8);
      local_1c4 = local_1c4 + 8;
      local_1d0 = 0x38;
      puVar4 = &LAB_00402f00;
      piVar1 = FUN_0045fc44(local_1ac,(uint *)PTR_s_Alphabet_mapping_file_error_at_l_00474300);
      piVar1 = FUN_0045f818(piVar1);
      FUN_0045f9d8(piVar1,puVar4);
      local_1d0 = 0x44;
      FUN_0045fefc((int)local_1bc,(int)local_1ac);
      local_1c4 = local_1c4 + 1;
      local_1d0 = 0x38;
      (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
      local_1c4 = local_1c4 + -1;
      if (local_1b4 != 0) {
        if (*(int *)(local_1b4 + -0xc) != -1) {
          piVar1 = (int *)(local_1b4 + -0xc);
          if (piVar1 == &DAT_00485bcc) {
            iVar2 = 1;
          }
          else if (piVar1 == &DAT_00485bcc) {
            iVar2 = 1;
          }
          else {
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1 + 1;
          }
          if (iVar2 != 0) goto LAB_00402d03;
        }
        FUN_0045680c();
        local_1b4 = 0;
      }
LAB_00402d03:
      local_1c4 = local_1c4 + -8;
      FUN_0045c5a4(local_1ac,2);
      local_1d0 = 0x14;
    }
    SetWindowTextA(*(HWND *)(param_1[9] + 0xc),s__Start_00474348 + 6);
  }
  else {
    SetWindowTextA(*(HWND *)(param_1[9] + 0xc),local_24);
  }
  FUN_004029e8((int)param_1);
LAB_00402d5b:
  local_1c4 = local_1c4 + -1;
  FUN_00450c68((int)local_2c,2);
  *in_FS_OFFSET = local_1e0;
  return;
}

