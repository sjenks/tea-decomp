// name: FUN_00430650
// address: 0x430650
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_00430650(uint *param_1,FILETIME *param_2)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  _SYSTEMTIME local_40;
  int local_30;
  uint local_2c;
  undefined4 local_28;
  
  FUN_00467ba8(0x47ce7c);
  FileTimeToSystemTime(param_2,&local_40);
  uVar4 = (uint)local_40.wSecond;
  uVar1 = (uint)local_40.wMinute;
  uVar5 = (uint)local_40.wHour;
  piVar2 = FUN_004217a0(&local_30,&local_40.wYear);
  puVar3 = FUN_004305b0(&local_2c,piVar2,uVar5,uVar1,uVar4);
  *param_1 = *puVar3;
  *in_FS_OFFSET = local_28;
  return param_1;
}

