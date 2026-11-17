// name: GetDocTemplateHead
// address: 0x45662c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall GetDocTemplateHead(uint param_1)

{
  undefined *puVar1;
  
                    /* 0x5662c  2  GetDocTemplateHead */
  if ((param_1 & 0xfff0) == 0x620) {
    puVar1 = &DAT_00484894;
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}

