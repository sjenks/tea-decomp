// name: FUN_00421dc0
// address: 0x421dc0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00421dc0(undefined4 *param_1,int param_2)

{
  HGDIOBJ pvVar1;
  
  pvVar1 = GetStockObject(param_2);
  pvVar1 = SelectObject((HDC)*param_1,pvVar1);
  if ((HGDIOBJ)0x1 < pvVar1) {
    FUN_004282f8((uint)pvVar1);
  }
  return;
}

