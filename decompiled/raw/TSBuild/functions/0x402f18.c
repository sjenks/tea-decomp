// name: FUN_00402f18
// address: 0x402f18
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00402f18(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
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
  
  FUN_00467ba8(0x474ba4);
  FUN_00450b7c(local_2c,0x180c,(uint *)s_Word_list_files____txt____txt_Al_00474595,0,0,0x4745c7,0,0,
               0);
  FUN_004029ac(param_1,(int *)((int)param_1 + 0xd6),(int)local_2c);
  piVar2 = FUN_0045103c(&local_13c,0,*param_1,(int)local_2c,0,0x4745cb,0);
  iVar3 = (**(code **)(piVar2[3] + 0x14))();
  cVar6 = iVar3 == 1;
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x5c;
  *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + -0x5c;
  FUN_00420788(&local_13c,0);
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x5c;
  *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + 0x5c;
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x96;
  FUN_00435f74(local_b4,0);
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x96;
  FUN_0041e99c(local_bc,0);
  if (cVar6 != '\0') {
    uVar4 = FUN_0041946c((LPCSTR)local_24);
    if ((char)uVar4 == '\0') {
      FUN_00459d78((int)local_14c,local_24);
      uVar1 = *(uint *)(local_144 + -4);
      pcVar5 = FUN_004677a0((uint *)s_doesn_t_seem_to_be_an_ANSI_text_f_004745e4);
      FUN_0045a224((int)local_14c,uVar1,0,0x4745e4,(uint)pcVar5,0,(uint)pcVar5);
      (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
      if (local_144 != 0) {
        if (*(int *)(local_144 + -0xc) != -1) {
          piVar2 = (int *)(local_144 + -0xc);
          if (piVar2 == &DAT_00485bcc) {
            iVar3 = 1;
          }
          else if (piVar2 == &DAT_00485bcc) {
            iVar3 = 1;
          }
          else {
            *piVar2 = *piVar2 + -1;
            iVar3 = *piVar2 + 1;
          }
          if (iVar3 != 0) goto LAB_0040318c;
        }
        FUN_0045680c();
        local_144 = 0;
      }
    }
    else {
      FUN_004035b8((int)param_1,local_24);
    }
  }
LAB_0040318c:
  FUN_00450c68((int)local_2c,2);
  *in_FS_OFFSET = local_170;
  return;
}

