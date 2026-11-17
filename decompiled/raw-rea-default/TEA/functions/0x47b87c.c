// rea decompile_all
// name: FUN_0047b87c
// address: 0x47b87c
// body: available
// range: 0x47b87c-0x47ba19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0047b8d2) */

void __cdecl FUN_0047b87c(int param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x501150);
  *(undefined4 *)(param_1 + 0x84) = 0;
  iVar2 = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 100);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xf;
  }
  if ((uint)(iVar2 >> 4) <= *(uint *)(param_1 + 0x80)) goto LAB_0047ba0a;
  iVar2 = *(uint *)(param_1 + 0x80) * 0x10 + *(int *)(param_1 + 100);
  pcVar1 = thunk_FUN_004dc794(*(char **)(iVar2 + 8),' ',*(int *)(*(int *)(iVar2 + 8) + -4));
  uVar3 = DAT_005140ac;
  if (pcVar1 != (char *)0x0) {
    uVar3 = (int)pcVar1 - *(int *)(iVar2 + 8);
  }
  if (uVar3 < *(uint *)(*(int *)(iVar2 + 8) + -4)) {
    FUN_004d6118((int)local_14,iVar2,uVar3 + 1,DAT_005140ac);
    FUN_0041ac90(*(int **)(param_1 + 0x88),(int)local_14);
    iVar2 = FUN_004e39d0(*(char **)(iVar2 + 8));
    *(int *)(param_1 + 0x84) = iVar2;
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar4 = (int *)(local_c + -0xc);
        if (piVar4 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar4 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar4 = *piVar4 + -1;
          iVar2 = *piVar4 + 1;
        }
        if (iVar2 != 0) goto LAB_0047b9e2;
      }
      FUN_004cc0bc();
    }
  }
LAB_0047b9e2:
  iVar2 = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 100);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xf;
  }
  *(uint *)(param_1 + 0x80) = (*(int *)(param_1 + 0x80) + 1U) % (uint)(iVar2 >> 4);
LAB_0047ba0a:
  *in_FS_OFFSET = local_38;
  return;
}

