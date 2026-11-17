// rea decompile_all
// name: FUN_004760d8
// address: 0x4760d8
// body: available
// range: 0x4760d8-0x476456 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00476162) */
/* WARNING: Removing unreachable block (ram,0x0047621a) */
/* WARNING: Removing unreachable block (ram,0x004761de) */
/* WARNING: Removing unreachable block (ram,0x00476213) */
/* WARNING: Removing unreachable block (ram,0x00476293) */
/* WARNING: Removing unreachable block (ram,0x004762ac) */
/* WARNING: Removing unreachable block (ram,0x004762b7) */
/* WARNING: Removing unreachable block (ram,0x004762db) */
/* WARNING: Removing unreachable block (ram,0x004762c5) */
/* WARNING: Removing unreachable block (ram,0x004762d4) */
/* WARNING: Removing unreachable block (ram,0x004762cd) */
/* WARNING: Removing unreachable block (ram,0x004762e0) */
/* WARNING: Removing unreachable block (ram,0x004762e4) */
/* WARNING: Removing unreachable block (ram,0x00476332) */
/* WARNING: Removing unreachable block (ram,0x00476352) */

void __cdecl FUN_004760d8(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_60;
  undefined1 local_14 [8];
  char *local_c;
  
  FUN_004dce64(0x4ffff0);
  piVar1 = (int *)FUN_00422fc4(*(int *)(param_1 + 0x38));
  iVar2 = FUN_00423c2c(piVar1);
  (**(code **)(*(int *)(*(int *)(param_1 + 0x10e) + 8) + 0x60))();
  FUN_00464a94((int)local_14,*(int *)(param_1 + 0x38),
               (uint)(iVar2 < 1) + *(int *)(param_1 + 0x298) * 2 + 0x325a);
  pcVar3 = thunk_FUN_004dcd18(local_c,&DAT_004ffe56);
  iVar2 = DAT_005140ac;
  if (pcVar3 != (char *)0x0) {
    iVar2 = (int)pcVar3 - (int)local_c;
  }
  if (iVar2 != -1) {
    FUN_004d5a8c((int)local_14,iVar2 + 1,param_1 + 0x288);
  }
  SetWindowTextA(*(HWND *)(*(int *)(param_1 + 0x60) + 0xc),local_c);
  if (local_c != (LPCSTR)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar1 = (int *)(local_c + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_00476440;
    }
    FUN_004cc0bc();
  }
LAB_00476440:
  *in_FS_OFFSET = local_60;
  return;
}

