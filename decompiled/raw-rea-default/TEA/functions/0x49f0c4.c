// rea decompile_all
// name: FUN_0049f0c4
// address: 0x49f0c4
// body: available
// range: 0x49f0c4-0x49f1b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_0049f0c4(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_2 < 0x7c3) {
    if (param_2 == 0x7b6) {
      iVar2 = 2;
      piVar1 = FUN_0048d474(&local_18,6,1,0x7b6);
      FUN_0049f098(param_1,piVar1,iVar2);
    }
    else if (param_2 == 0x7b7) {
      iVar2 = 2;
      piVar1 = FUN_0048d474(&local_14,0x17,2,0x7b7);
      FUN_0049f098(param_1,piVar1,iVar2);
    }
    else {
      FUN_0048d474(&local_c,0x1e,4,param_2);
      iVar2 = 2;
      FUN_0048d6d8(&local_10,&local_c,7);
      FUN_0049f098(param_1,&local_10,iVar2);
    }
  }
  else {
    FUN_0048d474(&local_8,0x1f,3,param_2);
    iVar3 = 2;
    iVar2 = 7;
    FUN_0048d6d8(&local_20,&local_8,7);
    FUN_0048d78c(&local_1c,&local_20,iVar2);
    FUN_0049f098(param_1,&local_1c,iVar3);
  }
  return param_1;
}

