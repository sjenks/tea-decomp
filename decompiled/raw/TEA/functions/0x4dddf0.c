// name: FUN_004dddf0
// address: 0x4dddf0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_004dddf0(uint param_1)

{
  uint uVar1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  if (param_1 < DAT_005177f0) {
    if (((&DAT_005177f4)[param_1] & 0x200) == 0) {
      if (((&DAT_005177f4)[param_1] & 0x2000) == 0) {
        DVar2 = FUN_004ddec0(param_1,0,1);
        if (DVar2 == 0xffffffff) {
          uVar1 = 0xffffffff;
        }
        else {
          DVar3 = FUN_004ddec0(param_1,0,2);
          if (DVar3 == 0xffffffff) {
            uVar1 = 0xffffffff;
          }
          else {
            DVar4 = FUN_004ddec0(param_1,DVar2,0);
            if (DVar4 == 0xffffffff) {
              uVar1 = 0xffffffff;
            }
            else {
              uVar1 = (uint)((int)DVar3 <= (int)DVar2);
            }
          }
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = FUN_004df280(-6);
  }
  return uVar1;
}

