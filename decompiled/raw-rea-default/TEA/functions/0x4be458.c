// rea decompile_all
// name: FUN_004be458
// address: 0x4be458
// body: available
// range: 0x4be458-0x4be621 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004be4a1) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __cdecl FUN_004be458(int *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  BOOL BVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  uint local_48 [3];
  uint local_3c;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  LPCSTR local_c;
  
  BVar2 = FUN_004dce64(0x50f9bc);
  if (-1 < (int)param_3) {
    local_c = &DAT_00513d64;
    local_1c = local_1c + 1;
    local_28 = 0x20;
    if ((*(int *)(*param_1 + 0x10) != 0) && (**(char **)(*param_1 + 0x10) != '\0')) {
      FUN_004cf41c((int)local_14,*(uint **)(*param_1 + 0x10));
      uVar1 = *(uint *)(local_c + -4);
      pcVar3 = FUN_004dc9f4((uint *)&DAT_0050f7e9);
      FUN_004cfad4((int)local_14,uVar1,0,0x50f7e9,(uint)pcVar3,0,(uint)pcVar3);
    }
    if (param_2 != (uint *)0x0) {
      local_3c = *(uint *)(local_c + -4);
      pcVar3 = FUN_004dc9f4(param_2);
      FUN_004cfad4((int)local_14,local_3c,0,(uint)param_2,(uint)pcVar3,0,(uint)pcVar3);
    }
    if (0 < (int)param_3) {
      uVar1 = *(uint *)(local_c + -4);
      pcVar3 = FUN_004dc9f4((uint *)&DAT_0050f7ed);
      FUN_004cfad4((int)local_14,uVar1,0,0x50f7ed,(uint)pcVar3,0,(uint)pcVar3);
      FUN_004e3f60(param_3,(char *)local_48,10);
      uVar1 = *(uint *)(local_c + -4);
      pcVar3 = FUN_004dc9f4(local_48);
      FUN_004cfad4((int)local_14,uVar1,0,(uint)local_48,(uint)pcVar3,0,(uint)pcVar3);
    }
    BVar2 = SetWindowTextA(*(HWND *)(*param_1 + 0xc),local_c);
    local_1c = local_1c + -1;
    if (local_c != (LPCSTR)0x0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar4 = (int *)(local_c + -0xc);
        if (piVar4 == &DAT_00513d58) {
          BVar2 = 1;
        }
        else if (piVar4 == &DAT_00513d58) {
          BVar2 = 1;
        }
        else {
          *piVar4 = *piVar4 + -1;
          BVar2 = *piVar4 + 1;
        }
        if (BVar2 != 0) goto LAB_004be60f;
      }
      FUN_004cc0bc();
      BVar2 = 0;
    }
  }
LAB_004be60f:
  *in_FS_OFFSET = local_38;
  return CONCAT31((int3)((uint)BVar2 >> 8),1);
}

