// rea decompile_all
// name: FUN_00430438
// address: 0x430438
// body: available
// range: 0x430438-0x43043d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __stdcall FUN_00430438(int *param_1)

{
  undefined4 uVar1;
  int aiStack_74 [5];
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_3c;
  int iStack_2c;
  int iStack_1c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  iStack_1c = *(int *)(param_1[0x27] + 8);
  iStack_c = iStack_1c;
  while( true ) {
    iStack_3c = param_1[0x27];
    if (iStack_3c == iStack_c) break;
    aiStack_74[0] = 0;
    aiStack_74[1] = 0;
    aiStack_74[2] = 0;
    aiStack_74[3] = 0;
    iStack_2c = iStack_3c;
    uVar1 = FUN_00430290(param_1,*(int *)(iStack_c + 0x10),*(int *)(iStack_c + 0x14),aiStack_74);
    if ((char)uVar1 != '\0') {
      (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
    }
    uStack_54 = uStack_14;
    uStack_50 = uStack_10;
    iStack_4c = iStack_c;
    FUN_0042ba94((int)&uStack_14);
    aiStack_74[4] = uStack_54;
    uStack_60 = uStack_50;
    iStack_5c = iStack_4c;
  }
  return;
}

