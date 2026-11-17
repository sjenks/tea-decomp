// name: GetModulePtr
// address: 0x44b10c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __stdcall GetModulePtr(uint param_1)

{
  undefined4 *puVar1;
  
                    /* 0x4b10c  3  GetModulePtr */
  if ((param_1 & 0xfff0) == 0x620) {
    puVar1 = &DAT_00470a60;
  }
  else {
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}

