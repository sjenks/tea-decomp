// name: FUN_0041fedc
// address: 0x41fedc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0041ffb4) */
/* WARNING: Removing unreachable block (ram,0x004200cc) */

int * __cdecl FUN_0041fedc(int *param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  
  FUN_004dce64(0x4ef8c4);
  FUN_0041eec8(param_1,0,param_2,param_5 + 0x1e96);
  FUN_0041eec8(param_1 + 0x2c,0,param_2,param_5 + 0x1ea0);
  param_1[0x58] = (int)param_2;
  param_1[0x59] = param_3;
  FUN_0041af38(param_1 + 0x5a,0,param_2,param_5 + 0x1eaa,0);
  param_1[0x89] = param_4;
  param_1[0x8a] = param_5;
  param_1[0x8e] = 0;
  param_1[0x8e] = (int)&DAT_00513d64;
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_2;
  }
  FUN_004abc64(param_1 + 0x90,0,uVar1,param_5 + 0x1ebe,0);
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_2;
  }
  FUN_004abc64(param_1 + 0xbb,0,uVar1,param_5 + 0x1ec8,0);
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_2;
  }
  FUN_004abc64(param_1 + 0xe6,0,uVar1,param_5 + 0x1ed2,0);
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_2;
  }
  FUN_004abc64(param_1 + 0x111,0,uVar1,param_5 + 0x1edc,0);
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_2;
  }
  FUN_004abc64(param_1 + 0x13c,0,uVar1,param_5 + 0x1ee6,0);
  param_1[0x16a] = 0;
  param_1[0x16a] = (int)&DAT_00513d64;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  if (param_5 == 0) {
    piVar2 = (int *)FUN_004cc0f0();
    if (piVar2 != (int *)0x0) {
      FUN_0041af38(piVar2,0,param_2,0x38ff,0);
    }
    param_1[0x16c] = (int)piVar2;
    piVar2 = (int *)FUN_004cc0f0();
    if (piVar2 != (int *)0x0) {
      if (param_2 == (undefined4 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *param_2;
      }
      FUN_004a1f48(piVar2,0,uVar1,0x3909,0,0);
    }
    param_1[0x16d] = (int)piVar2;
    piVar2 = (int *)FUN_004cc0f0();
    if (piVar2 != (int *)0x0) {
      FUN_0041af38(piVar2,0,param_2,0x38fe,0);
    }
    param_1[0x16e] = (int)piVar2;
    piVar2 = (int *)FUN_004cc0f0();
    if (piVar2 != (int *)0x0) {
      if (param_2 == (undefined4 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *param_2;
      }
      FUN_004a1f48(piVar2,0,uVar1,0x3908,0,0);
    }
    param_1[0x16f] = (int)piVar2;
  }
  *in_FS_OFFSET = local_38;
  return param_1;
}

