// rea decompile_all
// name: FUN_0048a404
// address: 0x48a404
// body: available
// range: 0x48a404-0x48a613 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_0048a404(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  char cVar6;
  undefined4 local_a8;
  HDC local_80 [10];
  HDC local_58 [10];
  uint *local_30;
  int local_2c [10];
  
  FUN_004dce64(0x504f48);
  if (*(char *)(param_1 + 8) == '\0') {
    uVar2 = 0;
    *in_FS_OFFSET = local_a8;
  }
  else {
    local_30 = (uint *)FUN_004cc0f0();
    if (local_30 != (uint *)0x0) {
      cVar6 = '\0';
      iVar5 = *(int *)(param_1 + 0x19) * *(int *)(param_1 + 0x29);
      iVar4 = *(int *)(param_1 + 0x15) * param_2;
      piVar3 = FUN_004a8760(local_2c);
      FUN_004884a0(local_30,piVar3,iVar4,iVar5,cVar6);
    }
    puVar1 = local_30;
    uVar2 = FUN_004a86dc(local_2c,0);
    if (*(int *)(param_1 + 4) != 0) {
      FUN_00497828((int *)local_58,*(uint **)(param_1 + 4));
      FUN_00497828((int *)local_80,puVar1);
      BitBlt(local_80[0],0,0,*(int *)(param_1 + 0x15) * *(int *)(param_1 + 0x11),
             *(int *)(param_1 + 0x19) * *(int *)(param_1 + 0x29),local_58[0],0,0,0xcc0020);
      FUN_00497904(local_58);
      if (*(uint **)(param_1 + 4) != (uint *)0x0) {
        FUN_004886b0(*(uint **)(param_1 + 4),3);
      }
      FUN_00497930((int *)local_80,2);
      uVar2 = FUN_00497930((int *)local_58,2);
    }
    *(uint **)(param_1 + 4) = puVar1;
    *(int *)(param_1 + 0x11) = param_2;
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
    *in_FS_OFFSET = local_a8;
  }
  return uVar2;
}

