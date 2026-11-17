// name: USER32.DLL::GetIconInfo
// address: 0x4e9820
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall GetIconInfo(HICON hIcon,PICONINFO piconinfo)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetIconInfo(hIcon,piconinfo);
  return BVar1;
}

