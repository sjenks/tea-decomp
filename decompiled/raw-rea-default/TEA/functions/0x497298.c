// rea decompile_all
// name: FUN_00497298
// address: 0x497298
// body: available
// range: 0x497298-0x497330 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_00497298(int *param_1,int param_2)

{
  int *piVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x507b74);
  iVar4 = 0;
  do {
    if (param_2 < (int)(&DAT_005078c4)[iVar4]) break;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xc);
  if (iVar4 < 0xc) {
    puVar2 = FUN_00496b94();
    piVar1 = *(int **)(puVar2 + iVar4 * 4 + 300);
    if (*piVar1 == 0) {
      piVar3 = (int *)FUN_0048c8fc((int)(piVar1 + 1),*(uint *)((int)piVar1 + 0x15));
    }
    else {
      piVar3 = (int *)*piVar1;
      *piVar1 = *piVar3;
    }
    *param_1 = (int)piVar3;
    param_1[1] = iVar4;
  }
  else {
    iVar4 = FUN_004cc180();
    *param_1 = iVar4;
    param_1[1] = -1;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

