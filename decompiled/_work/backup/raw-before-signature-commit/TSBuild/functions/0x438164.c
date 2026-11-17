// name: FUN_00438164
// address: 0x438164
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00438164(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  HWND pHVar4;
  uint3 extraout_var;
  
  iVar1 = FUN_00438220(param_1,FUN_004358fd);
  if (iVar1 != 0) {
    FUN_004391f0(iVar1,0x7fe9);
  }
  pHVar4 = (HWND)0x0;
  iVar1 = FUN_004380cc(param_1);
  iVar3 = iVar1;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    iVar2 = FUN_00438294(param_1,PTR_FUN_0047e1f3);
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_00438730(iVar2,pHVar4,0,0,0,0,0x13);
      iVar3 = (uint)extraout_var << 8;
      pHVar4 = *(HWND *)(iVar2 + 0xc);
    }
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}

