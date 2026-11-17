// name: FUN_004a5b0c
// address: 0x4a5b0c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a5b0c(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  local_10 = *(undefined4 *)(param_2 + 4);
  local_14 = 0x7fff;
  local_8 = 0;
  cVar1 = (**(code **)(param_1[2] + 0x84))();
  if (cVar1 != '\0') {
    FUN_0048e7e0(*param_1,(int)&local_14);
  }
  return;
}

