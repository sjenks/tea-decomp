// name: FUN_0046823c
// address: 0x46823c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0046823c(int *param_1)

{
  HWND pHVar1;
  WPARAM WVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *in_FS_OFFSET;
  uint local_78 [11];
  undefined1 *local_4c;
  undefined4 local_48;
  uint *local_44;
  uint *local_40;
  uint *local_3c;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  uint *local_c;
  
  FUN_004dce64(0x4fc92c);
  FUN_004156f4(param_1);
  pHVar1 = (HWND)FUN_004a76a8(param_1[0x18],0x132d,0,0);
  FUN_00417760(param_1,pHVar1);
  uVar4 = 0;
  do {
    if ((uint)param_1[0x45] <= uVar4) {
      if (param_1[0x13] == 0) {
        (**(code **)(param_1[3] + 0xc0))();
      }
      *in_FS_OFFSET = local_38;
      return;
    }
    local_28 = 0x14;
    FUN_00464a94((int)local_14,param_1[0xe],*(uint *)(param_1[0x44] + uVar4 * 0x10));
    local_1c = local_1c + 1;
    local_28 = 8;
    local_3c = FUN_0049e814(local_78,local_c,(char *)0x0,0);
    WVar2 = FUN_004a76a8(param_1[0x18],0x1304,0,0);
    FUN_004a76a8(param_1[0x18],0x1307,WVar2,(LPARAM)local_3c);
    local_1c = local_1c + -1;
    if (local_c != (uint *)0x0) {
      if (local_c[-3] != 0xffffffff) {
        puVar5 = local_c + -3;
        if (puVar5 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (puVar5 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *puVar5 = *puVar5 - 1;
          iVar3 = *puVar5 + 1;
        }
        if (iVar3 != 0) goto LAB_0046836a;
      }
      local_40 = local_c + -3;
      local_44 = local_c + -3;
      FUN_004cc0bc();
      local_48 = 0;
      local_4c = local_14;
      local_c = (uint *)0x0;
    }
LAB_0046836a:
    local_28 = 0;
    uVar4 = uVar4 + 1;
  } while( true );
}

