// rea decompile_all
// name: FUN_00469954
// address: 0x469954
// body: available
// range: 0x469954-0x469a6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_00469954(int *param_1,LPCSTR param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_ac;
  int local_88 [33];
  
  FUN_004dce64(0x4fcf98);
  if ((param_2 == (LPCSTR)0x0) && (param_2 = (LPCSTR)param_1[0x18], param_2 == (LPCSTR)0x0)) {
    uVar2 = 0;
    *in_FS_OFFSET = local_ac;
  }
  else {
    FUN_004d18dc(local_88,0,param_2,10,0x1b6);
    if (((*(byte *)(local_88[0] + 0x30) & 5) == 0) &&
       (bVar1 = FUN_004697f8(param_1,local_88,param_1[0x19]), bVar1)) {
      uVar2 = FUN_004a76a8(*param_1,0xb9,0,0);
      uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
      FUN_004d19d4(local_88,2);
      *in_FS_OFFSET = local_ac;
    }
    else {
      uVar2 = 0;
      FUN_004d19d4(local_88,2);
      *in_FS_OFFSET = local_ac;
    }
  }
  return uVar2;
}

