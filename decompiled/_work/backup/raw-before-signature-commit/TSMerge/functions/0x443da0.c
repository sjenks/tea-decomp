// name: FUN_00443da0
// address: 0x443da0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00443da0(int param_1,uint *param_2)

{
  uint *lpFilename;
  DWORD DVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00455f04(0x46f1a4);
  FUN_0044b2dc();
  if ((0x20 < *(uint *)(param_1 + 8)) && (param_2 == (uint *)0x0)) {
    lpFilename = (uint *)FUN_0044b390();
    FUN_0044b2dc();
    DVar1 = GetModuleFileNameA(*(HMODULE *)(param_1 + 8),(LPSTR)lpFilename,0x104);
    if (DVar1 != 0) {
      param_2 = lpFilename;
    }
  }
  uVar2 = FUN_0041fd2c(param_2);
  *(undefined4 *)(param_1 + 4) = uVar2;
  FUN_0044b2dc();
  *in_FS_OFFSET = local_2c;
  return;
}

