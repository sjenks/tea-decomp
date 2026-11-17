// name: FUN_0043d988
// address: 0x43d988
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0043d988(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  FUN_00467ba8(0x47fae0);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_0043dc90;
  puVar1 = FUN_00468310(1,0,0x404ef0);
  puVar2 = (uint *)FUN_00468420((int)puVar1);
  FUN_0042ce68((undefined4 *)&DAT_0048cd28,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

