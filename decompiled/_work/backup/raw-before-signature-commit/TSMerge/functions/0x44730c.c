// name: FUN_0044730c
// address: 0x44730c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0044730c(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  FUN_00455f04(0x46fc3c);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_00447738;
  puVar1 = FUN_0045666c(1,0,0x42e134);
  puVar2 = (uint *)FUN_0045677c((int)puVar1);
  FUN_00421cd4((undefined4 *)&DAT_00477338,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

