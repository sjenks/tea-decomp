// rea decompile_all
// name: FUN_0044b574
// address: 0x44b574
// body: available
// range: 0x44b574-0x44b675 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl
FUN_0044b574(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_stack_00000024;
  undefined4 local_54 [4];
  undefined4 local_44 [6];
  int local_2c;
  int local_1c;
  undefined4 local_14 [4];
  
  local_14[2] = *(undefined4 *)(param_2 + 0x24);
  iVar3 = *(int *)(param_2 + 0x24);
  local_1c = *(int *)(iVar3 + 8);
  if (((local_1c == param_5) && (local_2c = iVar3, iVar3 == in_stack_00000024)) &&
     (*(int *)(param_2 + 0x28) != 0)) {
    FUN_0044b678(param_2,*(int *)(iVar3 + 4));
    iVar3 = *(int *)(param_2 + 0x24);
    *(int *)(iVar3 + 8) = iVar3;
    *(undefined4 *)(iVar3 + 4) = 0;
    *(int *)(iVar3 + 0xc) = iVar3;
    *(undefined4 *)(param_2 + 0x28) = 0;
    local_44[2] = *(undefined4 *)(param_2 + 0x24);
    puVar4 = local_44;
    puVar5 = local_14;
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    while (iVar3 = param_5, uVar2 = param_4, uVar1 = param_3, param_5 != in_stack_00000024) {
      FUN_0044b8bc((int)&param_3);
      FUN_0044b920(local_54,param_2,uVar1,uVar2,iVar3);
      puVar4 = local_54;
      puVar5 = local_14;
      for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
  }
  *param_1 = local_14[0];
  param_1[1] = local_14[1];
  param_1[2] = local_14[2];
  return param_1;
}

