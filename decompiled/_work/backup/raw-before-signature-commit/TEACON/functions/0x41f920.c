// name: FUN_0041f920
// address: 0x41f920
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_0041f920(int param_1)

{
  if (param_1 == 0) {
    return s_<notype>_00431c20;
  }
  if (*(short *)(param_1 + 6) == 0) {
    FUN_00426830(s_id_>tpName_00431c29,s_xxtype_cpp_00431c34,0x22);
  }
  return (char *)((uint)*(ushort *)(param_1 + 6) + param_1);
}

