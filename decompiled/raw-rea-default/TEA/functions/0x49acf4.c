// rea decompile_all
// name: FUN_0049acf4
// address: 0x49acf4
// body: available
// range: 0x49acf4-0x49adb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * __cdecl FUN_0049acf4(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined4 local_10 [3];
  
  FUN_004dce64(0x5087e4);
  puVar1 = FUN_0049adbc();
  puVar2 = HeapAlloc((HANDLE)*puVar1,0,10);
  if (puVar2 == (undefined1 *)0x0) {
    puVar1 = local_10;
    piVar3 = FUN_0048f460(puVar1);
    (**(code **)(*piVar3 + 0xc))(piVar3,*piVar3,puVar1,piVar3);
    FUN_0048ee7c(local_10,0);
  }
  else {
    *puVar2 = 0xb8;
    puVar2[5] = 0xe9;
    *(undefined4 *)(puVar2 + 1) = param_1;
    *(int *)(puVar2 + 6) = 0x49ae9a - (int)puVar2;
  }
  *in_FS_OFFSET = local_38;
  return puVar2;
}

