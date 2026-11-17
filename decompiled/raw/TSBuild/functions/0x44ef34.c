// name: FUN_0044ef34
// address: 0x44ef34
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044ef34(int param_1,uint *param_2)

{
  uint *lpFilename;
  DWORD DVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x482f80);
  FUN_0045681c();
  if ((0x20 < *(uint *)(param_1 + 8)) && (param_2 == (uint *)0x0)) {
    lpFilename = (uint *)FUN_004568d0();
    FUN_0045681c();
    DVar1 = GetModuleFileNameA(*(HMODULE *)(param_1 + 8),(LPSTR)lpFilename,0x104);
    if (DVar1 != 0) {
      param_2 = lpFilename;
    }
  }
  uVar2 = FUN_0042aea0(param_2);
  *(undefined4 *)(param_1 + 4) = uVar2;
  FUN_0045681c();
  *in_FS_OFFSET = local_2c;
  return;
}

