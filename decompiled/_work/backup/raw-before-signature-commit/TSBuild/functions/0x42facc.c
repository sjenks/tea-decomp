// name: FUN_0042facc
// address: 0x42facc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0042facc(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  FUN_00467ba8(0x47cd16);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004302e4;
  puVar1 = FUN_00468310(1,0,0x403c70);
  puVar2 = (uint *)FUN_00468420((int)puVar1);
  FUN_0042ce68((undefined4 *)&DAT_0048c8c0,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

