// name: FUN_004a1e90
// address: 0x4a1e90
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl
FUN_004a1e90(undefined4 param_1,undefined4 *param_2,LPRECT param_3,UINT param_4,UINT param_5)

{
  BOOL BVar1;
  DWORD DVar2;
  
  if (DAT_0050a058 != '\0') {
    BVar1 = DrawFrameControl((HDC)*param_2,param_3,param_4,param_5);
    if (BVar1 != 0) {
      return CONCAT31((int3)((uint)BVar1 >> 8),1);
    }
    DVar2 = GetLastError();
    if (DVar2 != 0x78) {
      return 0;
    }
    DAT_0050a058 = '\0';
  }
  return 0;
}

