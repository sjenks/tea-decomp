// name: FUN_0041b48c
// address: 0x41b48c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041b48c(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  tagRECT local_270;
  CHAR local_260 [519];
  undefined1 local_59;
  undefined4 local_58;
  undefined2 local_48;
  int local_3c;
  uint local_34 [2];
  HDC local_2c;
  int local_27;
  
  FUN_004dce64(0x4eeb60);
  iVar1 = FUN_004a76a8(*param_1,0x31,0,0);
  if (iVar1 != 0) {
    local_48 = 8;
    FUN_004a8674((int *)&local_2c,*(undefined4 *)(*param_1 + 0xc));
    local_3c = local_3c + 2;
    local_48 = 0x20;
    FUN_0048f708(local_34,iVar1,0);
    local_3c = local_3c + 2;
    (**(code **)(local_27 + 0x14))();
    local_3c = local_3c + -2;
    FUN_00494064(local_34,0);
    FUN_004dcc40((undefined4 *)local_260,*(uint **)(param_2 + 8),(char *)0x207);
    local_59 = 0;
    local_270.left = 0;
    local_270.top = 0;
    local_270.right = 0;
    local_270.bottom = 0;
    local_48 = 0x14;
    FUN_004a76a8(*param_1,0xb2,0,(LPARAM)&local_270);
    DrawTextA(local_2c,local_260,-1,&local_270,0x14420);
    FUN_0041b1ec(param_1,local_260);
    local_3c = local_3c + -2;
    FUN_004a86dc((int *)&local_2c,2);
  }
  *in_FS_OFFSET = local_58;
  return;
}

