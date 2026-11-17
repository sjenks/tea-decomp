// name: FUN_00428438
// address: 0x428438
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00428438(int *param_1,byte param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00455f04(0x469c78);
  if (param_1[7] == 0) {
    piVar1 = (int *)FUN_0044b300();
    if (piVar1 != (int *)0x0) {
      FUN_004257c4(piVar1,0,*param_1,'\x01',0);
    }
    FUN_004284cc(param_1,(int)piVar1);
  }
  else if (*(int *)(*(int *)param_1[7] + 0xc) != 0) {
    FUN_0042d1a4(*(int *)param_1[7],0x401,(uint)param_2,0);
  }
  *in_FS_OFFSET = local_2c;
  return;
}

