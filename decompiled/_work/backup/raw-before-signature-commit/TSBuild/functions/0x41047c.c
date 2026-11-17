// name: FUN_0041047c
// address: 0x41047c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x004104a5) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd0 : 0x004104ad */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0041047c(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  FUN_00467ba8(0x4763f0);
  *param_1 = 0x100;
  puVar1 = (undefined4 *)FUN_00456840();
  if (puVar1 == (undefined4 *)0x0) {
    local_8 = &PTR_FUN_00476b30;
    FUN_00471ae8((uint *)&DAT_0040eb28,&local_8,0,&LAB_0040eb80,1,0,0,0);
  }
  param_1[1] = puVar1;
  FUN_0041058c(puVar1,param_2,param_3);
  param_1[2] = param_1[1] + param_2 * 4;
  param_1[6] = param_1[2];
  *in_FS_OFFSET = local_2c;
  return;
}

