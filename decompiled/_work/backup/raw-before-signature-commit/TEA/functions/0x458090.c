// name: FUN_00458090
// address: 0x458090
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x004580b9) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd0 : 0x004580c1 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00458090(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  FUN_004dce64(0x4f8f08);
  *param_1 = 8;
  iVar1 = FUN_004cc0f0();
  if (iVar1 == 0) {
    local_8 = &PTR_FUN_004eac74;
    FUN_004e7cc4((uint *)&DAT_004040dc,&local_8,0,&LAB_00404134,1,0,0,0);
  }
  param_1[1] = iVar1;
  FUN_0040ae88(iVar1,param_2,param_3);
  param_1[2] = param_1[1] + param_2 * 0x80;
  param_1[6] = param_1[2];
  *in_FS_OFFSET = local_2c;
  return;
}

