// name: FUN_004e5ca0
// address: 0x4e5ca0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004e5ca0(uint *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 *local_8;
  
  *(undefined1 *)param_1 = 0;
  local_8 = (undefined4 *)&stack0x0000000c;
  while( true ) {
    pcVar1 = (char *)*local_8;
    if (pcVar1 == (char *)0x0) {
      return;
    }
    pcVar2 = FUN_004dc9f4(param_1);
    uVar3 = (param_2 - (int)pcVar2) - 1;
    if ((int)uVar3 < 1) break;
    FUN_004dca50((char *)param_1,pcVar1,uVar3);
    local_8 = local_8 + 1;
  }
  return;
}

