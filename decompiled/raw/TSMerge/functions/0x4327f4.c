// name: FUN_004327f4
// address: 0x4327f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004327f4(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  FUN_00455f04(0x46bd04);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_00432afc;
  puVar1 = FUN_0045666c(1,0,0x40580c);
  puVar2 = (uint *)FUN_0045677c((int)puVar1);
  FUN_00421cd4((undefined4 *)&DAT_00477280,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

