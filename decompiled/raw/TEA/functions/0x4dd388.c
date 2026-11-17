// name: FUN_004dd388
// address: 0x4dd388
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_004dd388(int param_1)

{
  if (param_1 == 0) {
    return s_<notype>_00516ec8;
  }
  if (*(short *)(param_1 + 6) == 0) {
    FUN_004e5ce8(s_id_>tpName_00516ed1,s_xxtype_cpp_00516edc,0x22);
  }
  return (char *)((uint)*(ushort *)(param_1 + 6) + param_1);
}

