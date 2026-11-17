// name: FUN_0045f0dc
// address: 0x45f0dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

byte * FUN_0045f0dc(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_2 + 1);
  do {
    bVar1 = pcVar2[1];
    if (0xef < bVar1) {
      return (byte *)(pcVar2 + 1);
    }
    pcVar2 = pcVar2 + 2;
  } while (*(char *)(param_3 + (uint)bVar1) == *pcVar2);
  return (byte *)0x0;
}

