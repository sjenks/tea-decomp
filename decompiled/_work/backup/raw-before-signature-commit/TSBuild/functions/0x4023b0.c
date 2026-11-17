// name: FUN_004023b0
// address: 0x4023b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl
FUN_004023b0(int *param_1,undefined4 *param_2,int param_3,uint param_4,int param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined3 extraout_var;
  int iVar4;
  
  if ((param_2 != (undefined4 *)0x0) &&
     (puVar2 = FUN_00469618(param_2,param_3,(int *)param_1[0x34d]), puVar2 == (undefined4 *)0x0)) {
    return 1;
  }
  uVar3 = param_4 & 0x8000001f;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
  }
  if (uVar3 == 0) {
    if (param_5 < 1) {
      if ((int)param_4 < 0) {
        param_4 = param_4 + 0x1f;
      }
      iVar4 = (int)(CONCAT44((int)param_4 >> 0x1f,(int)param_4 >> 5) % 100);
    }
    else {
      iVar4 = (int)(param_4 * 100) / param_5;
    }
    bVar1 = FUN_0040234c(param_1,iVar4);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      return 0;
    }
  }
  return 2;
}

