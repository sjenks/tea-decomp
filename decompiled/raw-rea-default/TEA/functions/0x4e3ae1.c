// rea decompile_all
// name: FUN_004e3ae1
// address: 0x4e3ae1
// body: available
// range: 0x4e3ae1-0x4e3ba0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_004e3ae1(void)

{
  ushort uVar1;
  undefined2 in_CX;
  short sVar2;
  longdouble in_ST0;
  longdouble lVar3;
  longdouble lVar4;
  
  sVar2 = CONCAT11((char)((ushort)in_CX >> 8),1);
  lVar4 = in_ST0;
  lVar3 = (longdouble)1.4426950408889634;
  if (sVar2 != 0) {
    lVar4 = (longdouble)1.4426950408889634;
    lVar3 = in_ST0;
  }
  if (in_ST0 != (longdouble)0) {
    if (sVar2 != 0) {
      lVar4 = lVar4 * lVar3;
    }
    lVar4 = ABS(lVar4);
    if ((longdouble)_DAT_00518988 < lVar4) {
      lVar3 = (longdouble)fscale(lVar4,(longdouble)1);
      uVar1 = (ushort)ROUND(ROUND(lVar3));
      lVar3 = (longdouble)fscale(ROUND(lVar3),-(longdouble)1);
      lVar4 = (longdouble)f2xm1(lVar4 - lVar3);
      lVar4 = (longdouble)1 + lVar4;
      if ((uVar1 & 1) != 0) {
        lVar4 = _DAT_0051898c * lVar4;
      }
      fscale(lVar4,(longdouble)(uVar1 >> 1));
    }
    else {
      f2xm1(lVar4);
    }
  }
  return;
}

