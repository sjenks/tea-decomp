// rea decompile_all
// name: FUN_0049d994
// address: 0x49d994
// body: available
// range: 0x49d994-0x49da2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0049d994(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  int local_3c [4];
  undefined4 local_2c;
  undefined2 local_1c;
  int *local_8;
  
  bVar5 = 0;
  FUN_004dce64(0x5091b4);
  local_8 = (int *)FUN_004cc0f0();
  if (local_8 != (int *)0x0) {
    local_1c = 0x14;
    FUN_00490ab0(local_8,0x7537);
    local_1c = 8;
  }
  piVar1 = local_8;
  FUN_00492644(param_1,(int)local_8,1,0);
  piVar3 = (int *)((int)piVar1 + 10);
  piVar4 = local_3c;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  FUN_00494470(local_3c,1,1);
  (**(code **)(*piVar1 + 0xc))();
  *(int *)((int)param_1 + 0x5e) = *(int *)((int)param_1 + 0x5e) + 1;
  *in_FS_OFFSET = local_2c;
  return;
}

