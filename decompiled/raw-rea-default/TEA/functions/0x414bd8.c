// rea decompile_all
// name: FUN_00414bd8
// address: 0x414bd8
// body: available
// range: 0x414bd8-0x414e81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00414bd8(uint param_1,uint param_2)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff4c;
  uint in_stack_ffffff50;
  byte *pbVar7;
  undefined4 local_28;
  
  FUN_004dce64(0x4ed8c4);
  while( true ) {
    iVar3 = param_2 - param_1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    if (iVar3 >> 4 < 0x11) break;
    iVar3 = param_2 - param_1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    iVar5 = iVar3 >> 5;
    if (iVar5 < 0) {
      iVar5 = iVar5 + (uint)((iVar3 >> 4 & 1U) != 0);
    }
    uVar6 = iVar5 * 0x10 + param_1;
    iVar3 = FUN_0043c624(*(byte **)(param_1 + 8),*(int *)(*(int *)(param_1 + 8) + -4),
                         *(byte **)(uVar6 + 8),*(int *)(*(int *)(uVar6 + 8) + -4));
    if (iVar3 < 0) {
      iVar3 = FUN_0043c624(*(byte **)(uVar6 + 8),*(int *)(*(int *)(uVar6 + 8) + -4),
                           *(byte **)(param_2 - 8),*(int *)(*(int *)(param_2 - 8) + -4));
      uVar4 = uVar6;
      if ((-1 < iVar3) &&
         (iVar3 = FUN_0043c624(*(byte **)(param_1 + 8),*(int *)(*(int *)(param_1 + 8) + -4),
                               *(byte **)(param_2 - 8),*(int *)(*(int *)(param_2 - 8) + -4)),
         uVar4 = param_1, iVar3 < 0)) {
        uVar4 = param_2 - 0x10;
      }
    }
    else {
      iVar3 = FUN_0043c624(*(byte **)(param_1 + 8),*(int *)(*(int *)(param_1 + 8) + -4),
                           *(byte **)(param_2 - 8),*(int *)(*(int *)(param_2 - 8) + -4));
      uVar4 = param_1;
      if ((-1 < iVar3) &&
         (iVar3 = FUN_0043c624(*(byte **)(uVar6 + 8),*(int *)(*(int *)(uVar6 + 8) + -4),
                               *(byte **)(param_2 - 8),*(int *)(*(int *)(param_2 - 8) + -4)),
         uVar4 = uVar6, iVar3 < 0)) {
        uVar4 = param_2 - 0x10;
      }
    }
    iVar3 = *(int *)(*(int *)(uVar4 + 8) + -0xc);
    if (iVar3 == -1 || iVar3 + 1 < 0) {
      uVar6 = *(uint *)(*(int *)(uVar4 + 8) + -4);
      piVar2 = FUN_004cf7b0(&stack0xffffff4c,uVar6,uVar6);
      pbVar7 = (byte *)(piVar2 + 3);
      FUN_004dc7d4((undefined4 *)pbVar7,*(undefined4 **)(uVar4 + 8),uVar6);
    }
    else {
      pbVar7 = *(byte **)(uVar4 + 8);
      pbVar1 = pbVar7 + -0xc;
      if (pbVar1 != (byte *)&DAT_00513d58) {
        *(int *)pbVar1 = *(int *)pbVar1 + 1;
      }
    }
    uVar6 = FUN_00414e84(param_1,param_2,in_stack_ffffff4c,in_stack_ffffff50,pbVar7);
    iVar3 = uVar6 - param_1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    iVar5 = param_2 - uVar6;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    if (iVar3 >> 4 < iVar5 >> 4) {
      in_stack_ffffff4c = 0x414e52;
      in_stack_ffffff50 = param_1;
      FUN_00414bd8(param_1,uVar6);
      param_1 = uVar6;
    }
    else {
      in_stack_ffffff4c = 0x414e36;
      in_stack_ffffff50 = uVar6;
      FUN_00414bd8(uVar6,param_2);
      param_2 = uVar6;
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

