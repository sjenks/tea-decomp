// rea decompile_all
// name: FUN_00449d70
// address: 0x449d70
// body: available
// range: 0x449d70-0x449ed8 inclusive
// range: 0x449f02-0x449f15 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl FUN_00449d70(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x4f6e64);
  puVar3 = (undefined4 *)param_1[6];
  if (puVar3 == (undefined4 *)0x0) {
    if (param_1[7] == param_1[8]) {
      FUN_00449f30(param_1);
      puVar3 = (undefined4 *)param_1[7];
      param_1[7] = param_1[7] + 0x28;
    }
    else {
      puVar3 = (undefined4 *)param_1[7];
      param_1[7] = param_1[7] + 0x28;
    }
  }
  else {
    param_1[6] = *(int *)(param_1[6] + 0xc);
  }
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  if (puVar3 + 4 != (undefined4 *)0x0) {
    puVar3[6] = 0;
    iVar1 = *(int *)(*(int *)(param_2 + 8) + -0xc);
    if (iVar1 == -1 || iVar1 + 1 < 0) {
      uVar2 = *(uint *)(*(int *)(param_2 + 8) + -4);
      piVar4 = FUN_004cf7b0(puVar3 + 4,uVar2,uVar2);
      puVar3[6] = piVar4 + 3;
      FUN_004dc7d4((undefined4 *)puVar3[6],*(undefined4 **)(param_2 + 8),uVar2);
    }
    else {
      puVar3[6] = *(undefined4 *)(param_2 + 8);
      piVar4 = (int *)(puVar3[6] + -0xc);
      if (piVar4 != &DAT_00513d58) {
        *piVar4 = *piVar4 + 1;
      }
    }
    puVar3[8] = *(undefined4 *)(param_2 + 0x10);
  }
  *in_FS_OFFSET = local_2c;
  return puVar3;
}

