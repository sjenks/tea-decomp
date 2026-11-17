// name: FUN_0046d184
// address: 0x46d184
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

byte * __cdecl FUN_0046d184(byte *param_1)

{
  uint uVar1;
  byte *pbVar2;
  
  pbVar2 = param_1;
  while( true ) {
    uVar1 = FUN_0046d1a8((uint)*pbVar2);
    *pbVar2 = (byte)uVar1;
    if ((byte)uVar1 == 0) break;
    pbVar2 = pbVar2 + 1;
  }
  return param_1;
}

