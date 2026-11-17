// name: FUN_004680cc
// address: 0x4680cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_004680cc(int param_1)

{
  if (param_1 == 0) {
    return s_<notype>_00488bfc;
  }
  if (*(short *)(param_1 + 6) == 0) {
    FUN_0046fe00(s_id_>tpName_00488c05,s_xxtype_cpp_00488c10,0x22);
  }
  return (char *)((uint)*(ushort *)(param_1 + 6) + param_1);
}

