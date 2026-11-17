// rea decompile_all
// name: FUN_004b6ba0
// address: 0x4b6ba0
// body: available
// range: 0x4b6ba0-0x4b6c5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


LPSTR __cdecl FUN_004b6ba0(int *param_1,SIZE_T param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  LPSTR pCVar4;
  HLOCAL hMem;
  
  uVar1 = GetWindowLongA(*(HWND *)(*param_1 + 0xc),-0x10);
  if (((((uVar1 & 4) != 0) && (iVar2 = FUN_00487178(), *(uint *)(iVar2 + 0xd) < 0x60000)) &&
      (puVar3 = FUN_0048751c(), *(int *)(puVar3 + 0x10) != 1)) &&
     (puVar3 = FUN_0048751c(), *(int *)(puVar3 + 0x10) != 0)) {
    hMem = (HLOCAL)FUN_004a76a8(*param_1,0xbd,0,0);
    if ((param_2 != 0) && (hMem = LocalReAlloc(hMem,param_2,0x42), hMem == (HLOCAL)0x0)) {
      return (LPSTR)0x0;
    }
    pCVar4 = LocalLock(hMem);
    return pCVar4;
  }
  if (param_2 == 0) {
    iVar2 = GetWindowTextLengthA(*(HWND *)(*param_1 + 0xc));
    param_2 = iVar2 + 1;
  }
  pCVar4 = (LPSTR)FUN_004cc180();
  GetWindowTextA(*(HWND *)(*param_1 + 0xc),pCVar4,param_2);
  return pCVar4;
}

