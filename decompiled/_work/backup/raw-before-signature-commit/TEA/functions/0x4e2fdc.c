// name: FUN_004e2fdc
// address: 0x4e2fdc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

byte * __cdecl FUN_004e2fdc(byte *param_1)

{
  uint uVar1;
  byte *pbVar2;
  
  pbVar2 = param_1;
  while( true ) {
    uVar1 = FUN_004e3000((uint)*pbVar2);
    *pbVar2 = (byte)uVar1;
    if ((byte)uVar1 == 0) break;
    pbVar2 = pbVar2 + 1;
  }
  return param_1;
}

