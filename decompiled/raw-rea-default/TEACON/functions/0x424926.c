// rea decompile_all
// name: FUN_00424926
// address: 0x424926
// body: available
// range: 0x424926-0x424973 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00424926(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  if ((param_5 == 0) && ((param_2 == 0 || (param_4 == 0)))) {
    uVar3 = (uint)(CONCAT44(param_2,param_1) % (ulonglong)param_4);
  }
  else {
    iVar2 = 0x40;
    uVar4 = 0;
    uVar3 = 0;
    do {
      bVar5 = param_1 < 0;
      param_1 = param_1 * 2;
      uVar1 = (ulonglong)CONCAT14(bVar5,param_2) << 1;
      param_2 = (uint)uVar1 | (uint)bVar5;
      bVar5 = (uVar1 & 0x100000000) != 0;
      uVar1 = (ulonglong)CONCAT14(bVar5,uVar3) << 1;
      uVar3 = (uint)uVar1 | (uint)bVar5;
      uVar4 = uVar4 << 1 | (uint)((uVar1 & 0x100000000) != 0);
      if ((param_5 <= uVar4) && ((param_5 < uVar4 || (param_4 <= uVar3)))) {
        bVar5 = uVar3 < param_4;
        uVar3 = uVar3 - param_4;
        uVar4 = (uVar4 - param_5) - (uint)bVar5;
        param_1 = param_1 + 1;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return uVar3;
}

