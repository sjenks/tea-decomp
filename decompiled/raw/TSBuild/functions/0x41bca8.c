// name: FUN_0041bca8
// address: 0x41bca8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_0041bca8(undefined4 *param_1,undefined4 param_2,undefined1 param_3,uint *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x478cf4);
  *param_1 = param_2;
  uVar1 = FUN_0042aea0(param_4);
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 4) = param_3;
  iVar2 = FUN_0041bda0(param_1,(LPSTR)0x0,(LPDWORD)0x0,param_1 + 2,(LPDWORD)0x0,(DWORD *)0x0,
                       param_1 + 3,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
  if ((iVar2 != 0) && (iVar2 != 0x7a)) {
    *param_1 = 0;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

