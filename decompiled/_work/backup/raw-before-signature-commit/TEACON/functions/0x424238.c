// name: FUN_00424238
// address: 0x424238
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_00424238(uint param_1)

{
  uint local_8;
  
  local_8 = 0;
  if (param_1 == 0xffffffff) {
    return 0xffffffff;
  }
  if (*(int *)(PTR_DAT_0043330c + 8) != 0) {
    return (uint)(byte)(&DAT_00432eb8)[param_1 & 0xff];
  }
  LCMapStringA(*(LCID *)(PTR_DAT_0043330c + 4),0x100,(LPCSTR)&param_1,1,(LPSTR)&local_8,4);
  return local_8;
}

