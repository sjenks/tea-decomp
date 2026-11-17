// name: FUN_00456428
// address: 0x456428
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_00456428(int param_1)

{
  if (param_1 == 0) {
    return s_<notype>_00474210;
  }
  if (*(short *)(param_1 + 6) == 0) {
    FUN_0045d2c4(s_id_>tpName_00474219,s_xxtype_cpp_00474224,0x22);
  }
  return (char *)((uint)*(ushort *)(param_1 + 6) + param_1);
}

