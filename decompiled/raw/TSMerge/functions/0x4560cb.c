// name: FUN_004560cb
// address: 0x4560cb
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004560cb(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x474208);
  iVar3 = 0;
  do {
    puVar1 = (undefined4 *)(&DAT_004775e0)[iVar3];
    if ((undefined4 *)(&DAT_004775e0)[iVar3] != (undefined4 *)0x0) {
      while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)puVar2[3];
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)();
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x100);
  *in_FS_OFFSET = local_28;
  return;
}

