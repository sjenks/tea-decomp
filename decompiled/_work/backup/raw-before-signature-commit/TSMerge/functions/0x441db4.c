// name: FUN_00441db4
// address: 0x441db4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00441db4(int *param_1,HMENU param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  HMENU pHVar2;
  uint uVar3;
  undefined4 local_c;
  
  if ((param_4 == '\0') && (param_2 != (HMENU)0x0)) {
    iVar1 = GetMenuItemCount(param_2);
    local_c = 0;
    pHVar2 = GetMenu(*(HWND *)(*param_1 + 0xc));
    if (param_2 == pHVar2) {
      local_c = FUN_00441750(param_2,iVar1);
    }
    FUN_0042d818(*param_1,param_2,param_3,'\0');
    pHVar2 = GetMenu(*(HWND *)(*param_1 + 0xc));
    if (param_2 == pHVar2) {
      uVar3 = FUN_00441750(param_2,iVar1);
      if (uVar3 != local_c) {
        DrawMenuBar(*(HWND *)(*param_1 + 0xc));
      }
    }
  }
  return;
}

