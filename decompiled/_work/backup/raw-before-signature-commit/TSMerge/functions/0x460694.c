// name: USER32.DLL::AppendMenuA
// address: 0x460694
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall AppendMenuA(HMENU hMenu,UINT uFlags,UINT_PTR uIDNewItem,LPCSTR lpNewItem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = AppendMenuA(hMenu,uFlags,uIDNewItem,lpNewItem);
  return BVar1;
}

