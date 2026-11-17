// name: FUN_00442598
// address: 0x442598
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00442598(int param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  undefined4 local_2c;
  
  FUN_00467ba8(0x48069c);
  iVar4 = *(int *)(param_1 + 0x1c);
  do {
    if (iVar4 == 0) {
      *in_FS_OFFSET = local_2c;
      return 0;
    }
    puVar1 = (uint *)FUN_004448c8(iVar4);
    if ((puVar1 != (uint *)0x0) && ((*(byte *)(iVar4 + 0x17) & 2) == 0)) {
      puVar1 = (uint *)FUN_0042aea0(puVar1);
      while (puVar1 != (uint *)0x0) {
        puVar2 = (uint *)thunk_FUN_004676d0((char *)puVar1,';');
        if (puVar2 != (uint *)0x0) {
          *(undefined1 *)puVar2 = 0;
          puVar2 = (uint *)((int)puVar2 + 1);
        }
        uVar3 = FUN_00442690(param_2,puVar1);
        if ((char)uVar3 != '\0') {
          FUN_0045681c();
          *in_FS_OFFSET = local_2c;
          return iVar4;
        }
        if ((puVar2 == (uint *)0x0) || (puVar1 = puVar2, (char)*puVar2 == '\0')) {
          puVar1 = (uint *)0x0;
        }
      }
      FUN_0045681c();
    }
    iVar4 = *(int *)(iVar4 + 4);
  } while( true );
}

