// name: FUN_004b72d0
// address: 0x4b72d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004b72d0(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  FUN_004dce64(0x50e454);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004b753c;
  puVar1 = FUN_004dd5cc(1,0,0x402cfc);
  puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  FUN_00499268((undefined4 *)&DAT_0051b89c,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

