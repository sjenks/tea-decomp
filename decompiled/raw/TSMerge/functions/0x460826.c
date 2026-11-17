// name: USER32.DLL::InsertMenuA
// address: 0x460826
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall
InsertMenuA(HMENU hMenu,UINT uPosition,UINT uFlags,UINT_PTR uIDNewItem,LPCSTR lpNewItem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460826. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InsertMenuA(hMenu,uPosition,uFlags,uIDNewItem,lpNewItem);
  return BVar1;
}

