// rea decompile_all
// name: FUN_0048a134
// address: 0x48a134
// body: available
// range: 0x48a134-0x48a242 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_0048a134(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  HDC local_2c [10];
  
  iVar1 = FUN_004dce64(0x504e48);
  if (param_2 < *(int *)(param_1 + 0x25)) {
    if (param_2 < 0) {
      *(undefined4 *)(param_1 + 0x25) = 0;
    }
    else if (param_2 < *(int *)(param_1 + 0x25)) {
      iVar1 = *(int *)(param_1 + 0x25) + -1;
      if (param_2 < iVar1) {
        FUN_00489f44(&local_60,param_1,param_2,0);
        local_58 = local_60;
        local_54 = local_5c;
        local_40 = 8;
        FUN_00497828((int *)local_2c,*(uint **)(param_1 + 4));
        local_34 = local_34 + 3;
        local_40 = 0x14;
        BitBlt(local_2c[0],local_58,local_54,
               ((*(int *)(param_1 + 0x25) - param_2) + -1) * *(int *)(param_1 + 0x15),
               *(int *)(param_1 + 0x19) * *(int *)(param_1 + 0x29),local_2c[0],
               local_58 + *(int *)(param_1 + 0x15),local_54,0xcc0020);
        local_34 = local_34 + -3;
        iVar1 = FUN_00497930((int *)local_2c,2);
      }
      *(int *)(param_1 + 0x25) = *(int *)(param_1 + 0x25) + -1;
    }
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1);
    *in_FS_OFFSET = local_50;
  }
  else {
    uVar2 = 0;
    *in_FS_OFFSET = local_50;
  }
  return uVar2;
}

