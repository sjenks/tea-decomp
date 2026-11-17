// rea decompile_all
// name: FUN_004149d4
// address: 0x4149d4
// body: available
// range: 0x4149d4-0x414ac9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004149d4(int param_1,undefined4 param_2,undefined4 param_3,byte *param_4)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ed858);
  while( true ) {
    iVar1 = FUN_0043c624(param_4,*(int *)(param_4 + -4),*(byte **)(param_1 + -8),
                         *(int *)(*(int *)(param_1 + -8) + -4));
    if (-1 < iVar1) break;
    FUN_004cf384(param_1,param_1 + -0x10);
    param_1 = param_1 + -0x10;
  }
  FUN_004cf384(param_1,(int)&param_2);
  if (param_4 != (byte *)0x0) {
    if (*(int *)(param_4 + -0xc) != -1) {
      pbVar2 = param_4 + -0xc;
      if (pbVar2 == (byte *)&DAT_00513d58) {
        iVar1 = 1;
      }
      else if (pbVar2 == (byte *)&DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *(int *)pbVar2 = *(int *)pbVar2 + -1;
        iVar1 = *(int *)pbVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00414ab3;
    }
    FUN_004cc0bc();
  }
LAB_00414ab3:
  *in_FS_OFFSET = local_28;
  return;
}

