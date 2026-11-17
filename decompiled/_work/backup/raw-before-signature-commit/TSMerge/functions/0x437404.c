// name: FUN_00437404
// address: 0x437404
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00437404(int param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  undefined4 local_2c;
  
  FUN_00455f04(0x46c8c0);
  iVar4 = *(int *)(param_1 + 0x1c);
  do {
    if (iVar4 == 0) {
      *in_FS_OFFSET = local_2c;
      return 0;
    }
    puVar1 = (uint *)FUN_00439734(iVar4);
    if ((puVar1 != (uint *)0x0) && ((*(byte *)(iVar4 + 0x17) & 2) == 0)) {
      puVar1 = (uint *)FUN_0041fd2c(puVar1);
      while (puVar1 != (uint *)0x0) {
        puVar2 = (uint *)thunk_FUN_00455b20((char *)puVar1,';');
        if (puVar2 != (uint *)0x0) {
          *(undefined1 *)puVar2 = 0;
          puVar2 = (uint *)((int)puVar2 + 1);
        }
        uVar3 = FUN_004374fc(param_2,puVar1);
        if ((char)uVar3 != '\0') {
          FUN_0044b2dc();
          *in_FS_OFFSET = local_2c;
          return iVar4;
        }
        if ((puVar2 == (uint *)0x0) || (puVar1 = puVar2, (char)*puVar2 == '\0')) {
          puVar1 = (uint *)0x0;
        }
      }
      FUN_0044b2dc();
    }
    iVar4 = *(int *)(iVar4 + 4);
  } while( true );
}

