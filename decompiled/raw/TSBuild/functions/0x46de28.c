// name: FUN_0046de28
// address: 0x46de28
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

ushort __cdecl FUN_0046de28(longdouble *param_1)

{
  longdouble lVar1;
  longdouble lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longdouble)0;
  return (ushort)NAN(lVar1) << 8 | (ushort)(lVar1 < lVar2) << 9 | (ushort)(lVar1 != lVar2) << 10 |
         (ushort)(lVar1 == lVar2) << 0xe;
}

