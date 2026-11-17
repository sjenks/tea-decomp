// name: FUN_004c0b54
// address: 0x4c0b54
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004c0b54(int param_1,uint *param_2)

{
  uint *lpFilename;
  DWORD DVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x510334);
  FUN_004cc0cc();
  if ((0x20 < *(uint *)(param_1 + 8)) && (param_2 == (uint *)0x0)) {
    lpFilename = (uint *)FUN_004cc180();
    FUN_004cc0cc();
    DVar1 = GetModuleFileNameA(*(HMODULE *)(param_1 + 8),(LPSTR)lpFilename,0x104);
    if (DVar1 != 0) {
      param_2 = lpFilename;
    }
  }
  uVar2 = FUN_00496d48(param_2);
  *(undefined4 *)(param_1 + 4) = uVar2;
  FUN_004cc0cc();
  *in_FS_OFFSET = local_2c;
  return;
}

