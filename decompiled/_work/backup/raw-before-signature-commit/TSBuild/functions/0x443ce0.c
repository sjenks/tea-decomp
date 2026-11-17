// name: FUN_00443ce0
// address: 0x443ce0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00443ce0(int param_1,int param_2)

{
  HMENU uIDNewItem;
  undefined4 *in_FS_OFFSET;
  CHAR local_5c [40];
  undefined4 local_34;
  undefined2 local_24;
  int local_18;
  undefined4 local_10;
  HMENU local_c;
  
  FUN_00467ba8(0x4809c8);
  uIDNewItem = FUN_0044fec8(*(int *)(param_1 + 0x20) + 4,(LPCSTR)0x7e91);
  if (uIDNewItem == (HMENU)0x0) {
    uIDNewItem = FUN_0044fec8(DAT_00484890,(LPCSTR)0x7e91);
  }
  if (uIDNewItem != (HMENU)0x0) {
    FUN_0044f0b4(*(int *)(param_1 + 0x20) + 4,0x7ef4,local_5c,0x28);
    local_24 = 8;
    FUN_0042bc04(&local_10,uIDNewItem,0);
    local_18 = local_18 + 1;
    local_24 = 0x14;
    if ((*(byte *)(param_1 + 0x18) & 0x20) != 0) {
      DeleteMenu(local_c,0x5f0f,0);
    }
    DeleteMenu(*(HMENU *)(param_2 + 4),0,0x400);
    InsertMenuA(*(HMENU *)(param_2 + 4),0,0x410,(UINT_PTR)uIDNewItem,local_5c);
    local_18 = local_18 + -1;
    FUN_0042bcb0(&local_10,2);
  }
  *in_FS_OFFSET = local_34;
  return;
}

