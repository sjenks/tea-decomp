// rea decompile_all
// name: FUN_004b0f84
// address: 0x4b0f84
// body: available
// range: 0x4b0f84-0x4b1039 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004b0f84(undefined4 *param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  if (*(int *)((int)param_1 + 9) == 0) {
    if (*(char *)((int)param_1 + 0x1f) == '\0') {
      pvVar1 = GlobalLock((HGLOBAL)*param_1);
      *(LPVOID *)((int)param_1 + 9) = pvVar1;
    }
    else {
      pvVar1 = LockResource((HGLOBAL)*param_1);
      *(LPVOID *)((int)param_1 + 9) = pvVar1;
    }
  }
  if (**(int **)((int)param_1 + 9) != 0x28) {
    GlobalUnlock((HGLOBAL)*param_1);
    FUN_00493800(0x7fdc,0);
  }
  if (*(int *)(*(int *)((int)param_1 + 9) + 0x10) == 3) {
    *(int *)((int)param_1 + 0xd) = *(int *)((int)param_1 + 9) + 0x28;
    *(int *)((int)param_1 + 0x11) = *(int *)((int)param_1 + 9) + 0x34;
  }
  else {
    *(undefined4 *)((int)param_1 + 0xd) = 0;
    *(int *)((int)param_1 + 0x11) = *(int *)((int)param_1 + 9) + 0x28;
  }
  if (*(int *)(*(int *)((int)param_1 + 9) + 0x20) == 0) {
    iVar2 = FUN_0048c0a0(*(short *)(*(int *)((int)param_1 + 9) + 0xe));
  }
  else {
    iVar2 = *(int *)(*(int *)((int)param_1 + 9) + 0x20);
  }
  *(int *)((int)param_1 + 0x19) = iVar2;
  *(int *)((int)param_1 + 0x15) = *(int *)((int)param_1 + 0x19) * 4 + *(int *)((int)param_1 + 0x11);
  if (*(int *)((int)param_1 + 0x19) == 0) {
    *(undefined4 *)((int)param_1 + 0x11) = 0;
  }
  *(undefined2 *)((int)param_1 + 0x1d) = 0;
  return;
}

