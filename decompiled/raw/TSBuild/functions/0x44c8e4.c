// name: FUN_0044c8e4
// address: 0x44c8e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_0044c8e4(HMENU param_1,int param_2)

{
  UINT UVar1;
  UINT uId;
  uint uVar2;
  undefined4 local_8;
  
  uVar2 = 1;
  local_8 = 0;
  uId = 0;
  if (0 < param_2) {
    do {
      UVar1 = GetMenuState(param_1,uId,0x400);
      if ((UVar1 != 0xffffffff) && ((UVar1 & 3) == 0)) {
        local_8 = local_8 | uVar2;
      }
      uVar2 = uVar2 * 2;
      uId = uId + 1;
    } while ((int)uId < param_2);
  }
  return local_8;
}

