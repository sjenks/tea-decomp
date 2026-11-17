// rea decompile_all
// name: FUN_004b070c
// address: 0x4b070c
// body: available
// range: 0x4b070c-0x4b07c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 __stdcall FUN_004b070c(HWND param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  LRESULT LVar3;
  int *piVar4;
  int iVar5;
  
  if (param_2 == DAT_0050b5c4) {
    uVar2 = 0;
  }
  else {
    LVar3 = FUN_004a614c(param_1,0);
    if (LVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(LVar3 + 8);
    }
    piVar4 = FUN_004dd744(LVar3,iVar5,(int *)&DAT_0040299c,(int *)&DAT_00402e14,0);
    if ((((DAT_0050cd7c != (int *)0x0) && (piVar4 == (int *)0x0)) && (param_2 != 0x1f)) &&
       (param_2 != 10)) {
      *(HWND *)(*DAT_0050cd7c + 0xc) = param_1;
      FUN_004a70e4(*DAT_0050cd7c);
      piVar4 = DAT_0050cd7c;
      DAT_0050cd7c = (int *)0x0;
    }
    if (piVar4 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = FUN_00487548();
      if (cVar1 == '\0') {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)(piVar4[3] + 4))();
      }
    }
  }
  return uVar2;
}

