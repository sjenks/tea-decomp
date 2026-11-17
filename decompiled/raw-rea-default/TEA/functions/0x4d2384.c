// rea decompile_all
// name: FUN_004d2384
// address: 0x4d2384
// body: available
// range: 0x4d2384-0x4d23f6 inclusive
// range: 0x4d2430-0x4d2491 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004d2384(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 local_54 [24];
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined4 *local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_004dce64(0x5148c4);
  FUN_004ceb88((int)(param_1 + 2));
  FUN_004cec58(local_34);
  local_2c = (undefined4 *)FUN_004d2494();
  local_18 = 8;
  FUN_004cec20(local_3c);
  iVar1 = FUN_004d2504();
  local_2c[2] = iVar1;
  local_18 = 0;
  piVar3 = param_1 + 2;
  uVar2 = FUN_004ceb94((int)piVar3);
  *local_2c = uVar2;
  local_2c[1] = *param_1;
  FUN_004ceba0((int)local_54,(int)piVar3,&local_2c);
  iVar1 = FUN_004ceb88((int)piVar3);
  iVar1 = *(int *)(iVar1 + 8);
  param_1[7] = iVar1;
  param_1[8] = iVar1 + *param_1 * 0x28;
  *in_FS_OFFSET = local_28;
  return;
}

