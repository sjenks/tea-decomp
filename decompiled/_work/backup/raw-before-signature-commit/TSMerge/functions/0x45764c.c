// name: FUN_0045764c
// address: 0x45764c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0045764c(uint param_1,LPVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  BOOL BVar2;
  DWORD local_8;
  
  if (DAT_00474b38 <= param_1) {
    uVar1 = FUN_00457c6c(6);
    return uVar1;
  }
  BVar2 = ReadFile(*(HANDLE *)(&DAT_00477ac0 + param_1 * 4),param_2,param_3,&local_8,
                   (LPOVERLAPPED)0x0);
  if (BVar2 != 1) {
    uVar1 = FUN_00457cd0();
    return uVar1;
  }
  return local_8;
}

