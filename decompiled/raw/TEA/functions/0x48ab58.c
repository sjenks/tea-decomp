// name: FUN_0048ab58
// address: 0x48ab58
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_0048ab58(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00504fca == '\0') {
    puVar1 = FUN_0048aac0();
    FUN_004c1b80((int *)&DAT_0051b14e,(int)puVar1,s_SymGetModuleInfo_00505207);
    DAT_00504fca = DAT_00504fca + '\x01';
  }
  uVar2 = (*DAT_0051b14e)();
  return uVar2;
}

