// name: FUN_00424570
// address: 0x424570
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00424570(int param_1)

{
  int *piVar1;
  BOOL BVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *in_FS_OFFSET;
  byte bVar8;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  char local_8a;
  undefined1 local_89;
  undefined4 local_88;
  undefined2 local_78;
  int local_6c;
  undefined4 local_64 [12];
  undefined4 local_34 [4];
  int local_24 [8];
  
  bVar8 = 0;
  FUN_00467ba8(0x47ad20);
  if ((*(int *)(param_1 + 6) != 0) && (*(int *)(**(int **)(param_1 + 6) + 0xc) != 0)) {
    piVar1 = (int *)(**(code **)(*(int *)(*(int *)(param_1 + 6) + 0x18) + 0xc))();
    if (piVar1 != (int *)0x0) {
      BVar2 = IsWindow(*(HWND *)(*piVar1 + 0xc));
      if (BVar2 != 0) {
        uVar3 = FUN_00423f84(*(int *)(param_1 + 0x3a));
        if ((char)uVar3 == '\0') {
          local_78 = 8;
          FUN_00430728(local_34,'\x01');
          local_6c = local_6c + 2;
          local_78 = 0x14;
          FUN_0043084c((int)local_34,*(undefined4 *)(**(int **)(param_1 + 6) + 0xc),
                       *(undefined4 *)(param_1 + 0x3a));
          iVar4 = FUN_00438338(*piVar1,0x408,0,(LPARAM)local_34);
          if (iVar4 != 0) {
            piVar6 = local_24;
            piVar7 = &local_9c;
            for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar7 = *piVar6;
              piVar6 = piVar6 + (uint)bVar8 * -2 + 1;
              piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
            }
            if ((((*(int *)(param_1 + 10) == local_9c) && (*(int *)(param_1 + 0xe) == local_98)) &&
                (*(int *)(param_1 + 0x12) == local_94)) && (*(int *)(param_1 + 0x16) == local_90)) {
              local_8a = '\x01';
            }
            else {
              local_8a = '\0';
            }
            local_89 = local_8a == '\0';
            if ((bool)local_89) {
              local_78 = 0x20;
              puVar5 = FUN_004307c8(local_64,*(undefined4 *)(**(int **)(param_1 + 6) + 0xc),
                                    (undefined4 *)(param_1 + 10),*(undefined4 *)(param_1 + 0x3a),
                                    (uint *)0xffffffff);
              local_6c = local_6c + 2;
              FUN_00438338(*piVar1,0x406,0,(LPARAM)puVar5);
              local_6c = local_6c + -2;
              FUN_0045681c();
              local_78 = 0x14;
            }
          }
          local_6c = local_6c + -2;
          FUN_0045681c();
        }
      }
    }
  }
  *in_FS_OFFSET = local_88;
  return;
}

