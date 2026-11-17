// name: FUN_004486a0
// address: 0x4486a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x004486c9) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd0 : 0x004486d1 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_004486a0(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  FUN_004dce64(0x4f6b84);
  *param_1 = 0x12;
  piVar1 = (int *)FUN_004cc0f0();
  if (piVar1 == (int *)0x0) {
    local_8 = &PTR_FUN_004eac74;
    FUN_004e7cc4((uint *)&DAT_004040dc,&local_8,0,&LAB_00404134,1,0,0,0);
  }
  param_1[1] = piVar1;
  FUN_004487c0(piVar1,param_2,param_3);
  param_1[2] = param_1[1] + param_2 * 0x38;
  param_1[6] = param_1[2];
  *in_FS_OFFSET = local_2c;
  return;
}

