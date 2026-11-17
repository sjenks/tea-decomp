// name: FUN_00438b4c
// address: 0x438b4c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00438b4c(int param_1,int param_2)

{
  HMENU uIDNewItem;
  undefined4 *in_FS_OFFSET;
  CHAR local_5c [40];
  undefined4 local_34;
  undefined2 local_24;
  int local_18;
  undefined4 local_10;
  HMENU local_c;
  
  FUN_00455f04(0x46cbec);
  uIDNewItem = FUN_00444d34(*(int *)(param_1 + 0x20) + 4,(LPCSTR)0x7e91);
  if (uIDNewItem == (HMENU)0x0) {
    uIDNewItem = FUN_00444d34(DAT_00470a60,(LPCSTR)0x7e91);
  }
  if (uIDNewItem != (HMENU)0x0) {
    FUN_00443f20(*(int *)(param_1 + 0x20) + 4,0x7ef4,local_5c,0x28);
    local_24 = 8;
    FUN_00420a90(&local_10,uIDNewItem,0);
    local_18 = local_18 + 1;
    local_24 = 0x14;
    if ((*(byte *)(param_1 + 0x18) & 0x20) != 0) {
      DeleteMenu(local_c,0x5f0f,0);
    }
    DeleteMenu(*(HMENU *)(param_2 + 4),0,0x400);
    InsertMenuA(*(HMENU *)(param_2 + 4),0,0x410,(UINT_PTR)uIDNewItem,local_5c);
    local_18 = local_18 + -1;
    FUN_00420b3c(&local_10,2);
  }
  *in_FS_OFFSET = local_34;
  return;
}

