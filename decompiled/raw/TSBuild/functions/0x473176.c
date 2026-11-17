// name: KERNEL32.DLL::GetTimeZoneInformation
// address: 0x473176
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __stdcall GetTimeZoneInformation(LPTIME_ZONE_INFORMATION lpTimeZoneInformation)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473176. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTimeZoneInformation(lpTimeZoneInformation);
  return DVar1;
}

