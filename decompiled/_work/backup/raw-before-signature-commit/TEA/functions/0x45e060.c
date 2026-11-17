// name: FUN_0045e060
// address: 0x45e060
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_0045e060(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined2 *param_5,
            int param_6)

{
  BOOL BVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  char *local_8c;
  undefined4 local_88;
  undefined2 local_78;
  int local_6c;
  undefined4 local_64 [12];
  undefined4 local_34 [12];
  
  FUN_004dce64(0x4f9e74);
  BVar1 = IsWindow(*(HWND *)(**(int **)(param_1 + 0x58) + 0xc));
  if (BVar1 != 0) {
    local_8c = FUN_004dc9f4((uint *)(param_1 + 0x888));
    uVar2 = FUN_004d40d0(param_2,0,*(uint *)(*(int *)(param_2 + 8) + -4),(byte *)(param_1 + 0x888),
                         (uint)local_8c);
    if (uVar2 != 0) {
      FUN_004dcc40((undefined4 *)(param_1 + 0x888),*(uint **)(param_2 + 8),(char *)0x3e7);
      *(undefined1 *)(param_1 + 0xc6f) = 0;
      iVar3 = FUN_004a76a8(**(int **)(param_1 + 0x58),0x40d,0,0);
      if (iVar3 != 0) {
        local_78 = 8;
        FUN_0049f374(local_34,'\0');
        local_6c = local_6c + 2;
        local_78 = 0x14;
        FUN_004a76a8(**(int **)(param_1 + 0x58),0x40e,0,(LPARAM)local_34);
        FUN_004a76a8(**(int **)(param_1 + 0x58),0x405,0,(LPARAM)local_34);
        local_6c = local_6c + -2;
        FUN_004cc0cc();
      }
      local_78 = 0x2c;
      puVar4 = FUN_0049f498(local_64,param_3,param_3,(uint *)(param_1 + 0x888));
      local_6c = local_6c + 2;
      FUN_004a76a8(**(int **)(param_1 + 0x58),0x404,0,(LPARAM)puVar4);
      local_6c = local_6c + -2;
      FUN_004cc0cc();
    }
    if (param_6 == 0) {
      local_a8 = param_3;
      local_a4 = 0x200;
      local_a0 = param_4;
      local_9c = CONCAT22(param_5[2],*param_5);
      FUN_004a76a8(**(int **)(param_1 + 0x58),0x407,0,(LPARAM)&local_a8);
    }
    else {
      FUN_004a76a8(**(int **)(param_1 + 0x58),0x407,0,param_6);
    }
  }
  *in_FS_OFFSET = local_88;
  return;
}

