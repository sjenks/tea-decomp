// rea decompile_all
// name: FUN_004837d0
// address: 0x4837d0
// body: available
// range: 0x4837d0-0x483a85 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_004837d0(int param_1,int param_2)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int *local_c;
  
  FUN_004dce64(0x503430);
  local_c = (int *)0x0;
  iVar3 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    uVar4 = *(uint *)(*(int *)(param_2 + 8) + -4);
    local_c = FUN_004cf7b0(local_14,uVar4,uVar4);
    local_c = local_c + 3;
    FUN_004dc7d4(local_c,*(undefined4 **)(param_2 + 8),uVar4);
  }
  else {
    local_c = *(int **)(param_2 + 8);
    piVar5 = local_c + -3;
    if (piVar5 != &DAT_00513d58) {
      *piVar5 = *piVar5 + 1;
    }
  }
  uVar4 = local_c[-1];
  while (uVar4 != 0) {
    uVar4 = uVar4 - 1;
    if (local_c[-3] != 0 && 0 < local_c[-3] + 1) {
      FUN_004d48d8((int)local_14);
    }
    if (local_c + -3 != &DAT_00513d58) {
      local_c[-3] = -1;
    }
    if ((0x7f < *(byte *)((int)local_c + uVar4)) &&
       (puVar1 = (uint *)(&PTR_s__euro__00501830)[*(byte *)((int)local_c + uVar4) - 0x80],
       puVar1 != (uint *)0x0)) {
      pcVar2 = FUN_004dc9f4(puVar1);
      FUN_004cfad4((int)local_14,uVar4,1,(uint)puVar1,(uint)pcVar2,0,(uint)pcVar2);
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar4 = local_c[-1];
    piVar5 = FUN_004cf7b0(param_1,uVar4,uVar4);
    *(int **)(param_1 + 8) = piVar5 + 3;
    FUN_004dc7d4(*(undefined4 **)(param_1 + 8),local_c,uVar4);
  }
  else {
    *(int **)(param_1 + 8) = local_c;
    piVar5 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar5 != &DAT_00513d58) {
      *piVar5 = *piVar5 + 1;
    }
  }
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar5 = local_c + -3;
      if (piVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar3 = *piVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_00483a6b;
    }
    FUN_004cc0bc();
  }
LAB_00483a6b:
  *in_FS_OFFSET = local_38;
  return param_1;
}

