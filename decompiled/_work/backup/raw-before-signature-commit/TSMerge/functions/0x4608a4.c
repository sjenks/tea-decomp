// name: USER32.DLL::ModifyMenuA
// address: 0x4608a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall
ModifyMenuA(HMENU hMnu,UINT uPosition,UINT uFlags,UINT_PTR uIDNewItem,LPCSTR lpNewItem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004608a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ModifyMenuA(hMnu,uPosition,uFlags,uIDNewItem,lpNewItem);
  return BVar1;
}

