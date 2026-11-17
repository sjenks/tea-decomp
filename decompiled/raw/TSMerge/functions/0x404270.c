// name: FUN_00404270
// address: 0x404270
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_00404270(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_a0;
  undefined ***local_7c;
  undefined **local_78;
  undefined **local_6b;
  undefined **local_61;
  undefined4 local_d;
  undefined **local_9;
  
  FUN_00455f04(0x461ee0);
  FUN_0044b2ec(&LAB_00404230);
  local_7c = &local_9;
  local_d = 0;
  local_9 = &PTR_FUN_00462234;
  FUN_0042e748((int *)&local_7c,1,(uint *)s_TEA_Sympathy_Word_List_Merge_00461790,&DAT_00470a60,
               (undefined *)0x0);
  local_61 = &PTR_FUN_00461f40;
  local_78 = &PTR_LAB_00461f94;
  local_6b = &PTR_LAB_00461fa4;
  *local_7c = &PTR_LAB_00461fc4;
  uVar1 = (*(code *)local_61[2])();
  FUN_0042e9b4(&local_7c,0);
  *in_FS_OFFSET = local_a0;
  return uVar1;
}

