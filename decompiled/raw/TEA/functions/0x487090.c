// name: FUN_00487090
// address: 0x487090
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __stdcall FUN_00487090(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (DAT_00503ef8 == '\0') {
    puVar1 = FUN_004870d0();
    FUN_004c1b80((int *)&DAT_0051af8c,(int)puVar1,s_ImageList_Destroy_005042f8);
    DAT_00503ef8 = DAT_00503ef8 + '\x01';
  }
  iVar2 = (*DAT_0051af8c)();
  return iVar2 != 0;
}

