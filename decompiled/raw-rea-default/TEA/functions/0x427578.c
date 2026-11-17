// rea decompile_all
// name: FUN_00427578
// address: 0x427578
// body: available
// range: 0x427578-0x4276a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00427578(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  FUN_004ae93c(param_1);
  if (*(int *)(param_1[0x24] + 0x168) != 0) {
    FUN_004a76a8(param_1[1],0x80,1,*(int *)(param_1[0x24] + 0x168));
  }
  if (*(int *)(param_1[0x24] + 0x16c) != 0) {
    FUN_004a76a8(param_1[1],0x80,0,*(int *)(param_1[0x24] + 0x16c));
  }
  (**(code **)(*(int *)param_1[0x15] + 4))();
  iVar1 = *(int *)(param_1[0x14] + 8);
  (**(code **)(*(int *)param_1[0x15] + 0x24))();
  *(undefined4 *)(iVar1 + 0xc) = 1;
  *(undefined4 *)(iVar1 + 8) = 1;
  iVar1 = (**(code **)(*(int *)((int)param_1 + 0x35) + 0x48))();
  param_1[0x1a] = iVar1;
  (**(code **)(*(int *)(iVar1 + 8) + 0x10))();
  param_1[0x1b] = 0;
  iVar1 = GetSystemMetrics(2);
  iVar2 = GetSystemMetrics(3);
  iVar1 = iVar1 + iVar2;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  param_1[0x27] = iVar1 >> 2;
  piVar4 = param_1;
  uVar3 = (**(code **)(*(int *)((int)param_1 + 0x35) + 0x44))();
  (**(code **)(*(int *)((int)param_1 + 0x35) + 0x50))
            (uVar3,*(int *)((int)param_1 + 0x35),piVar4,param_1);
  return;
}

