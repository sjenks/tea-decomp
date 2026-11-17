// name: FUN_0044a1f8
// address: 0x44a1f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0044a1f8(uint *param_1,int param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00455f04(0x470488);
  *param_3 = 0;
  if (param_2 == 0) {
    piVar1 = (int *)FUN_0044b300();
    if (piVar1 != (int *)0x0) {
      FUN_00419a98(piVar1,0,0,1);
    }
    *in_FS_OFFSET = local_30;
  }
  else {
    *param_3 = 1;
    piVar1 = (int *)FUN_0044b300();
    if (piVar1 != (int *)0x0) {
      FUN_00412978(piVar1,param_1,param_2,'\0',0,0,'\x01');
    }
    *in_FS_OFFSET = local_30;
  }
  return piVar1;
}

