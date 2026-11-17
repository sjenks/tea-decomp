// rea decompile_all
// name: FUN_0045a4c8
// address: 0x45a4c8
// body: available
// range: 0x45a4c8-0x45a586 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0045a4c8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x4f95d8);
  if (*(uint **)(param_1 + 0xc7c) != (uint *)0x0) {
    FUN_004ab9b4(*(uint **)(param_1 + 0xc7c),3);
  }
  *(undefined4 *)(param_1 + 0xc7c) = 0;
  uVar4 = 0;
  while( true ) {
    iVar2 = *(int *)(param_1 + 0xc88) - *(int *)(param_1 + 0xc84);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    if ((uint)(iVar2 >> 2) <= uVar4) break;
    piVar3 = (int *)(*(int *)(param_1 + 0xc84) + uVar4 * 4);
    if (*piVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*piVar3 + 8);
    }
    puVar1 = FUN_004dd744(*piVar3,iVar2,(int *)&DAT_0040299c,(int *)&DAT_0045a588,0);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00467844((int)puVar1);
    }
    uVar4 = uVar4 + 1;
  }
  *in_FS_OFFSET = local_2c;
  return;
}

