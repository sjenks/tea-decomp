// rea decompile_all
// name: FUN_0043e91c
// address: 0x43e91c
// body: available
// range: 0x43e91c-0x43ec00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_0043e91c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4f5944);
  if (-1 < *(int *)(param_1 + 0x6c)) {
    *in_FS_OFFSET = local_48;
    return local_48;
  }
  iVar2 = *(int *)(param_1 + 0x98);
  if ((iVar2 < 0) || (iVar1 = (**(code **)(*(int *)(param_1 + 0x47f) + 0x24))(), iVar1 <= iVar2))
  goto LAB_0043eac2;
  FUN_0041b2b0((int)local_14,(int *)(param_1 + 0x5cc));
  FUN_004cf384(*(int *)(param_1 + 0x98) * 0x10 + *(int *)(param_1 + 0xa4),(int)local_14);
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
      if (iVar2 != 0) goto LAB_0043ea19;
    }
    FUN_004cc0bc();
    local_c = 0;
  }
LAB_0043ea19:
  FUN_0041b2b0((int)local_24,(int *)(param_1 + 400));
  FUN_004cf384(*(int *)(param_1 + 0x98) * 0x10 + *(int *)(param_1 + 0xc4),(int)local_24);
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar4 = (int *)(local_1c + -0xc);
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
      if (iVar2 != 0) goto LAB_0043eac2;
    }
    FUN_004cc0bc();
    local_1c = 0;
  }
LAB_0043eac2:
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  iVar2 = FUN_004bfd60((int *)(param_1 + 0x473));
  if ((iVar2 == 1) && (iVar2 = FUN_004bfdd8((int *)(param_1 + 0x473),param_1 + 0x98,1), iVar2 == 1))
  {
    FUN_0041b474((int *)(param_1 + 0x5cc),*(int *)(param_1 + 0x98) * 0x10 + *(int *)(param_1 + 0xa4)
                );
    FUN_0041b474((int *)(param_1 + 400),*(int *)(param_1 + 0x98) * 0x10 + *(int *)(param_1 + 0xc4));
  }
  else {
    (**(code **)(*(int *)(param_1 + 0x5d8) + 0x24))();
    (**(code **)(*(int *)(param_1 + 0x19c) + 0x24))();
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x51d) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x5cc) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x688) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0xe0) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 400) + 8) + 0x60))();
  uVar3 = FUN_0043dfb0(param_1);
  *in_FS_OFFSET = local_48;
  return uVar3;
}

