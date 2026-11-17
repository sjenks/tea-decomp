// name: FUN_00431540
// address: 0x431540
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HBRUSH __cdecl FUN_00431540(int param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  HBRUSH pHVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  HGLOBAL local_24 [5];
  undefined4 *local_f;
  
  FUN_00455f04(0x46b734);
  FUN_00435b3c((int *)local_24,8,8,2,0);
  FUN_00455a40(local_f,0,0x20);
  iVar1 = 0;
  do {
    *(undefined1 *)(local_f + (7 - iVar1)) = *(undefined1 *)(param_1 + iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  FUN_004355bc((int)local_24,0,param_3);
  FUN_004355bc((int)local_24,1,param_2);
  pHVar2 = CreateDIBPatternBrush(local_24[0],0);
  FUN_0041c818((int)pHVar2,0x7fe3);
  FUN_00435578((int *)local_24,2);
  *in_FS_OFFSET = local_48;
  return pHVar2;
}

