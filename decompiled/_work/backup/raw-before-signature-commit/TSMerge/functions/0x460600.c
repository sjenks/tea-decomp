// name: GDI32.DLL::MoveToEx
// address: 0x460600
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall MoveToEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MoveToEx(hdc,x,y,lppt);
  return BVar1;
}

