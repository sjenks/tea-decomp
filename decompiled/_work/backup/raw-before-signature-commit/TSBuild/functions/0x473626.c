// name: USER32.DLL::ModifyMenuA
// address: 0x473626
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall
ModifyMenuA(HMENU hMnu,UINT uPosition,UINT uFlags,UINT_PTR uIDNewItem,LPCSTR lpNewItem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473626. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ModifyMenuA(hMnu,uPosition,uFlags,uIDNewItem,lpNewItem);
  return BVar1;
}

