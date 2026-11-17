// name: FUN_0044a07c
// address: 0x44a07c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0044a0a5) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd0 : 0x0044a0ad */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0044a07c(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  FUN_004dce64(0x4f6f44);
  *param_1 = 0x100;
  puVar1 = (undefined4 *)FUN_004cc0f0();
  if (puVar1 == (undefined4 *)0x0) {
    local_8 = &PTR_FUN_004eac74;
    FUN_004e7cc4((uint *)&DAT_004040dc,&local_8,0,&LAB_00404134,1,0,0,0);
  }
  param_1[1] = puVar1;
  FUN_004102ac(puVar1,param_2,param_3);
  param_1[2] = param_1[1] + param_2 * 4;
  param_1[6] = param_1[2];
  *in_FS_OFFSET = local_2c;
  return;
}

