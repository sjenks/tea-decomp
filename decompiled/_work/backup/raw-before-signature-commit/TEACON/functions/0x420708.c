// name: FUN_00420708
// address: 0x420708
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00420708(uint param_1,LPCVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  BOOL BVar2;
  DWORD local_8;
  
  if (DAT_00432528 <= param_1) {
    uVar1 = FUN_004211cc(6);
    return uVar1;
  }
  BVar2 = WriteFile(*(HANDLE *)(&DAT_00434d98 + param_1 * 4),param_2,param_3,&local_8,
                    (LPOVERLAPPED)0x0);
  if (BVar2 != 1) {
    uVar1 = FUN_00421230();
    return uVar1;
  }
  return local_8;
}

