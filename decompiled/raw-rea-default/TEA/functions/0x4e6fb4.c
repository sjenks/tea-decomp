// rea decompile_all
// name: FUN_004e6fb4
// address: 0x4e6fb4
// body: available
// range: 0x4e6fb4-0x4e7136 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004e6fb4(int param_1)

{
  char cVar1;
  int *piVar2;
  UINT UVar3;
  char cVar4;
  int *piVar5;
  char *pcVar6;
  int local_10;
  undefined1 local_c [8];
  
  DAT_00518de8 = *(uint *)(param_1 + 0x10) & 1;
  FUN_004e3bec();
  FUN_004e4034(*(undefined **)(param_1 + 0x1c),*(undefined **)(param_1 + 0x20));
  FUN_004de938(*(undefined **)(param_1 + 0x28));
  FUN_004de948(*(undefined4 **)(param_1 + 0x44));
  _DAT_0051c460 = 1;
  _DAT_0051c464 = param_1;
  DAT_0051c44c = local_c;
  FUN_004ddcd4();
  DAT_0051c43c = GetEnvironmentStrings();
  DAT_0051c438 = GetCommandLineA();
  FUN_004e6394(*(undefined4 **)(param_1 + 0x2c),*(undefined4 **)(param_1 + 0x30));
  FUN_004e63d8(*(undefined **)(param_1 + 0x34),*(undefined **)(param_1 + 0x38),
               *(undefined **)(param_1 + 0x3c),*(undefined **)(param_1 + 0x40));
  piVar2 = (int *)FUN_004e6e6c();
  if (piVar2 != (int *)0x0) {
    piVar2[*piVar2 + 1] = -1;
    FUN_004e6e74(piVar2,0);
    piVar5 = piVar2;
    for (local_10 = 0; piVar5 = piVar5 + 1, local_10 < *piVar2; local_10 = local_10 + 1) {
      (**(code **)(*piVar5 + 0x18))();
    }
  }
  FUN_004e6e74((int *)&DAT_0051c460,0);
  pcVar6 = DAT_0051c438;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    UVar3 = (**(code **)(param_1 + 0x18))();
    FUN_004e62ec(UVar3);
  }
  else {
    for (; (*pcVar6 == ' ' || (*pcVar6 == '\t')); pcVar6 = pcVar6 + 1) {
    }
    if (*pcVar6 == '\"') {
      cVar4 = '\"';
      pcVar6 = pcVar6 + 1;
    }
    else {
      cVar4 = ' ';
    }
    for (; ((cVar1 = *pcVar6, cVar1 != '\0' && (cVar4 != cVar1)) && (cVar1 != '\t'));
        pcVar6 = pcVar6 + 1) {
    }
    if (*pcVar6 == '\"') {
      pcVar6 = pcVar6 + 1;
    }
    for (; ((cVar4 = *pcVar6, cVar4 != '\0' && (cVar4 == ' ')) || (cVar4 == '\t'));
        pcVar6 = pcVar6 + 1) {
    }
    FUN_004e7138();
    GetModuleHandleA((LPCSTR)0x0);
    UVar3 = (**(code **)(param_1 + 0x18))();
    FUN_004e62ec(UVar3);
  }
  return;
}

