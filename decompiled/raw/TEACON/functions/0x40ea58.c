// name: FUN_0040ea58
// address: 0x40ea58
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

byte * FUN_0040ea58(int param_1,byte *param_2,byte *param_3,undefined4 param_4,uint param_5,
                   int param_6,undefined4 param_7)

{
  int iVar1;
  char local_10c [259];
  byte local_9;
  int local_8;
  
  local_9 = *param_2;
  if (local_9 != 0xfc) {
    local_8 = param_1;
    if ((local_9 == 0xfa) || (local_9 == 0xfb)) {
      iVar1 = FUN_0040dc68(param_1,param_2[2]);
      param_2 = (byte *)FUN_0040e79c(local_8,param_2 + 3,(int)param_3,local_9,(uint)param_2[1],
                                     *(int *)(iVar1 + 8),param_4,param_5,param_6,param_7);
    }
    else {
      FUN_0041ee4c((undefined4 *)local_10c,0,0x100);
      while (0 < param_6) {
        local_10c[*param_3] = local_10c[*param_3] + '\x01';
        param_3 = param_3 + 1;
        param_6 = param_6 + -1;
      }
      param_2 = (byte *)(*(code *)(&PTR_FUN_0042c990)[local_9])
                                  (local_8,param_2 + 1,local_10c,param_5,param_7);
    }
  }
  return param_2;
}

