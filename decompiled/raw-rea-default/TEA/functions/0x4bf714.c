// rea decompile_all
// name: FUN_004bf714
// address: 0x4bf714
// body: available
// range: 0x4bf714-0x4bf906 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004bf714(int *param_1,uint *param_2,char param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  FUN_004dce64(0x50fd1c);
  FUN_004cf628((int)local_14,param_2);
  iVar3 = *param_1;
  if (*(uint *)(iVar3 + 5) <= *(uint *)(iVar3 + 1)) {
    FUN_0049baac(iVar3,*(int *)(iVar3 + 1) + 1);
  }
  piVar4 = (int *)(iVar3 + 0xd);
  if (*piVar4 == 0) {
    piVar2 = (int *)FUN_0048c8fc(iVar3 + 0x11,*(uint *)(iVar3 + 0x22));
  }
  else {
    piVar2 = (int *)*piVar4;
    *piVar4 = *piVar2;
  }
  if (piVar2 != (int *)0x0) {
    piVar2[2] = 0;
    if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
      uVar1 = local_c[-1];
      piVar4 = FUN_004cf7b0(piVar2,uVar1,uVar1);
      piVar2[2] = (int)(piVar4 + 3);
      FUN_004dc7d4((undefined4 *)piVar2[2],local_c,uVar1);
    }
    else {
      piVar2[2] = (int)local_c;
      piVar4 = (int *)(piVar2[2] + -0xc);
      if (piVar4 != &DAT_00513d58) {
        *piVar4 = *piVar4 + 1;
      }
    }
  }
  *(int **)(*(int *)(iVar3 + 9) + *(int *)(iVar3 + 1) * 4) = piVar2;
  *(int *)(iVar3 + 1) = *(int *)(iVar3 + 1) + 1;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_004bf8db;
    }
    FUN_004cc0bc();
    local_c = (undefined4 *)0x0;
  }
LAB_004bf8db:
  if (param_3 != '\0') {
    FUN_004bf950((int)param_1,*(int *)(*param_1 + 1) + -1);
  }
  *in_FS_OFFSET = local_3c;
  return;
}

