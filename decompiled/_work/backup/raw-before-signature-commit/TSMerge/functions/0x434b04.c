// name: FUN_00434b04
// address: 0x434b04
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00434b04(int *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  LONG dwNewLong;
  int local_20 [3];
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  if (param_2 != 0xc) {
    if (param_2 == 0x30) {
      if ((*(byte *)(*param_1 + 0x74) & 0x20) == 0) {
        local_20[0] = param_2;
        local_20[1] = 0;
        local_14 = 0;
        cVar2 = (**(code **)(param_1[3] + 0x38))();
        if (cVar2 != '\0') {
          iVar3 = FUN_004179cc(param_1[1],(int)local_20);
          return iVar3 == 0;
        }
      }
      return true;
    }
    if (1 < param_2 - 0x85U) {
      if (param_2 != 0x110) {
        return false;
      }
      uVar1 = (**(code **)(param_1[3] + 8))();
      return (bool)uVar1;
    }
  }
  if (*(char *)(*(int *)(*param_1 + 0x6c) + 0x52) != '\0') {
    local_8 = param_3;
    local_c = param_2;
    local_10 = *(undefined4 *)(*param_1 + 0xc);
    dwNewLong = (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x53) + 0x35))();
    SetWindowLongA(*(HWND *)(*param_1 + 0xc),0,dwNewLong);
  }
  return false;
}

