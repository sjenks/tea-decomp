// name: FUN_0048687b
// address: 0x48687b
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0048687b(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  FUN_004dce64(0x503d95);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_00486b88;
  puVar1 = FUN_004dd5cc(1,0,0x421acc);
  puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  FUN_00499268((undefined4 *)&DAT_0051aeb9,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

