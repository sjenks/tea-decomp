// name: FUN_00403870
// address: 0x403870
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_00403870(void)

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
  
  FUN_00467ba8(0x474d10);
  local_7c = &local_9;
  local_d = 0;
  local_9 = &PTR_FUN_00474f84;
  FUN_004398dc((int *)&local_7c,1,(uint *)s_TEA_Sympathy_Dictionary_Builder_00474674,&DAT_00484890,
               (undefined *)0x0);
  local_61 = &PTR_FUN_00474d70;
  local_78 = &PTR_LAB_00474dc4;
  local_6b = &PTR_LAB_00474dd4;
  *local_7c = &PTR_LAB_00474df4;
  uVar1 = (*(code *)local_61[2])();
  FUN_00439b48(&local_7c,0);
  *in_FS_OFFSET = local_a0;
  return uVar1;
}

