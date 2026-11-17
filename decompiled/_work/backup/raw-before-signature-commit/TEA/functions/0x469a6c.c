// name: FUN_00469a6c
// address: 0x469a6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00469a6c(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *in_FS_OFFSET;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined4 local_28;
  
  FUN_004dce64(0x4fcfc8);
  cVar5 = '\x01';
  cVar4 = '\x01';
  cVar3 = '\x01';
  iVar1 = FUN_00469b1c('\0');
  if (iVar1 < 2) {
    pcVar2 = s_RICHED32_DLL_004fcbf8;
  }
  else {
    pcVar2 = s_RICHED20_DLL_004fcc05;
  }
  FUN_004c08dc(param_1,(uint *)pcVar2,cVar3,cVar4,cVar5);
  *param_1 = &PTR_FUN_004fcfe8;
  *in_FS_OFFSET = local_28;
  return param_1;
}

