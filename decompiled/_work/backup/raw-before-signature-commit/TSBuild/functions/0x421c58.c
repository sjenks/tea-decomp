// name: FUN_00421c58
// address: 0x421c58
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Control flow encountered bad instruction data */

void FUN_00421c58(char *param_1,byte *param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  
  *param_1 = *param_1 + (char)param_1;
  *(char *)((int)param_1 * 2) = *(char *)((int)param_1 * 2) + (char)param_3;
  iVar2 = CONCAT31((int3)((uint)param_1 >> 8),DAT_4f004175);
  *param_2 = *param_2 & (byte)((uint)param_3 >> 8);
  pcVar1 = (char *)(iVar2 + -0x7c1374ab);
  *pcVar1 = *pcVar1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

