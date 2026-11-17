// name: FUN_0043c6d4
// address: 0x43c6d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HBRUSH __cdecl FUN_0043c6d4(int param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  HBRUSH pHVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  HGLOBAL local_24 [5];
  undefined4 *local_f;
  
  FUN_00467ba8(0x47f510);
  FUN_00440cd0((int *)local_24,8,8,2,0);
  FUN_004675f0(local_f,0,0x20);
  iVar1 = 0;
  do {
    *(undefined1 *)(local_f + (7 - iVar1)) = *(undefined1 *)(param_1 + iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  FUN_00440750((int)local_24,0,param_3);
  FUN_00440750((int)local_24,1,param_2);
  pHVar2 = CreateDIBPatternBrush(local_24[0],0);
  FUN_0042798c((int)pHVar2,0x7fe3);
  FUN_0044070c((int *)local_24,2);
  *in_FS_OFFSET = local_48;
  return pHVar2;
}

