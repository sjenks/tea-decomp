// name: FUN_0040fdf4
// address: 0x40fdf4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0040fe1d) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd0 : 0x0040fe25 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0040fdf4(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  FUN_00467ba8(0x47624c);
  *param_1 = 0x12;
  piVar1 = (int *)FUN_00456840();
  if (piVar1 == (int *)0x0) {
    local_8 = &PTR_FUN_00476b30;
    FUN_00471ae8((uint *)&DAT_0040eb28,&local_8,0,&LAB_0040eb80,1,0,0,0);
  }
  param_1[1] = piVar1;
  FUN_0040ff14(piVar1,param_2,param_3);
  param_1[2] = param_1[1] + param_2 * 0x38;
  param_1[6] = param_1[2];
  *in_FS_OFFSET = local_2c;
  return;
}

