// name: FUN_004bad7c
// address: 0x4bad7c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004bad7c(int param_1)

{
  HANDLE hTargetProcessHandle;
  HANDLE hSourceProcessHandle;
  undefined4 *in_FS_OFFSET;
  HANDLE hSourceHandle;
  HANDLE *lpTargetHandle;
  DWORD dwDesiredAccess;
  BOOL BVar1;
  DWORD dwOptions;
  HANDLE local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  undefined4 *local_8;
  
  FUN_004dce64(0x50eff0);
  local_30 = (HANDLE)0x0;
  dwOptions = 2;
  BVar1 = 0;
  dwDesiredAccess = 0;
  lpTargetHandle = &local_30;
  hTargetProcessHandle = GetCurrentProcess();
  hSourceHandle = *(HANDLE *)(param_1 + 4);
  hSourceProcessHandle = GetCurrentProcess();
  BVar1 = DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,lpTargetHandle,
                          dwDesiredAccess,BVar1,dwOptions);
  if ((BVar1 == 0) || (local_30 == (HANDLE)0x0)) {
    local_8 = (undefined4 *)0x0;
    *in_FS_OFFSET = local_2c;
  }
  else {
    local_8 = (undefined4 *)FUN_004cc0f0();
    if (local_8 != (undefined4 *)0x0) {
      local_1c = 0x14;
      FUN_004bad10(local_8,local_30,*(uint **)(param_1 + 0x14),*(undefined4 *)(param_1 + 8));
    }
    *in_FS_OFFSET = local_2c;
  }
  return local_8;
}

