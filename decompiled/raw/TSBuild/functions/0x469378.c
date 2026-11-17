// name: FUN_00469378
// address: 0x469378
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00469378(uint param_1,LPVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  BOOL BVar2;
  DWORD local_8;
  
  if (DAT_00489524 <= param_1) {
    uVar1 = FUN_00469f88(6);
    return uVar1;
  }
  BVar2 = ReadFile(*(HANDLE *)(&DAT_0048d570 + param_1 * 4),param_2,param_3,&local_8,
                   (LPOVERLAPPED)0x0);
  if (BVar2 != 1) {
    uVar1 = FUN_00469fec();
    return uVar1;
  }
  return local_8;
}

