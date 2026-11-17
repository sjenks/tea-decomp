// name: FUN_004de634
// address: 0x4de634
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004de634(uint param_1,LPVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  BOOL BVar2;
  DWORD local_8;
  
  if (DAT_005177f0 <= param_1) {
    uVar1 = FUN_004df280(6);
    return uVar1;
  }
  BVar2 = ReadFile(*(HANDLE *)(&DAT_0051c0f8 + param_1 * 4),param_2,param_3,&local_8,
                   (LPOVERLAPPED)0x0);
  if (BVar2 != 1) {
    uVar1 = FUN_004df2e4();
    return uVar1;
  }
  return local_8;
}

