// name: FUN_004451dc
// address: 0x4451dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_004451dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  iVar3 = 0;
  do {
    iVar3 = FUN_004453d4((undefined4 *)(param_1 + 8),iVar3);
    if (iVar3 == 0) {
      local_14 = 0x7ffb;
      local_8 = 0;
      puVar2 = *(undefined4 **)(param_1 + 0x26);
      local_10 = param_2;
      while( true ) {
        if (puVar2 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        if (((param_4 != puVar2) && (cVar1 = (*(code *)**(undefined4 **)*puVar2)(), cVar1 != '\0'))
           && (iVar3 = FUN_00422b40(*puVar2,(int)&local_14), iVar3 != 0)) break;
        puVar2 = (undefined4 *)puVar2[5];
      }
      return puVar2;
    }
    puVar2 = FUN_004451dc(iVar3,param_2,param_3,param_4);
  } while (puVar2 == (undefined4 *)0x0);
  return puVar2;
}

