// name: FUN_00421590
// address: 0x421590
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00421590(uint *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  
  if (param_1 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    pcVar2 = FUN_0041ef80(param_1);
    pcVar3 = (char *)FUN_00420b90((byte *)param_1,(uint)pcVar2,&DAT_00432090);
    if ((pcVar2 == pcVar3) && (uVar4 = FUN_004213e4(10,&DAT_00432090), uVar4 == 10)) {
      return 10;
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

