// rea decompile_all
// name: FUN_00414acc
// address: 0x414acc
// body: available
// range: 0x414acc-0x414bd4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00414acc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  byte *pbVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff6c;
  undefined4 in_stack_ffffff70;
  byte *pbVar5;
  undefined4 local_28;
  
  FUN_004dce64(0x4ed888);
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + -0xc);
    if (iVar1 == -1 || iVar1 + 1 < 0) {
      uVar2 = *(uint *)(*(int *)(param_1 + 8) + -4);
      piVar3 = FUN_004cf7b0(&stack0xffffff6c,uVar2,uVar2);
      pbVar5 = (byte *)(piVar3 + 3);
      FUN_004dc7d4((undefined4 *)pbVar5,*(undefined4 **)(param_1 + 8),uVar2);
    }
    else {
      pbVar5 = *(byte **)(param_1 + 8);
      pbVar4 = pbVar5 + -0xc;
      if (pbVar4 != (byte *)&DAT_00513d58) {
        *(int *)pbVar4 = *(int *)pbVar4 + 1;
      }
    }
    FUN_004149d4(param_1,in_stack_ffffff6c,in_stack_ffffff70,pbVar5);
  }
  *in_FS_OFFSET = local_28;
  return;
}

