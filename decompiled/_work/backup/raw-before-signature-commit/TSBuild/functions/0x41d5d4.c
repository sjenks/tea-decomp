// name: FUN_0041d5d4
// address: 0x41d5d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void FUN_0041d5d4(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *param_1;
  bVar2 = (byte)param_1;
  *param_1 = *param_1 + bVar2;
  *param_1 = *param_1 + bVar2 + CARRY1(bVar1,bVar2);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

