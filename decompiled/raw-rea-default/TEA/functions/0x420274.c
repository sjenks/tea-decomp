// rea decompile_all
// name: FUN_00420274
// address: 0x420274
// body: available
// range: 0x420274-0x42052b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00420274(int *param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  
  FUN_004dce64(0x4efa00);
  if (param_1 == (int *)0x0) goto LAB_0042051b;
  if (param_1[0x16c] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x16c] + 0xc))();
  }
  if (param_1[0x16d] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x16d] + 0xc))();
  }
  if (param_1[0x16e] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x16e] + 0xc))();
  }
  if (param_1[0x16f] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x16f] + 0xc))();
  }
  if (param_1[0x16a] != 0) {
    if (*(int *)(param_1[0x16a] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0x16a] + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004203d5;
    }
    FUN_004cc0bc();
    param_1[0x16a] = 0;
  }
LAB_004203d5:
  FUN_004abd9c(param_1 + 0x13c,2);
  FUN_004abd9c(param_1 + 0x111,2);
  FUN_004abd9c(param_1 + 0xe6,2);
  FUN_004abd9c(param_1 + 0xbb,2);
  FUN_004abd9c(param_1 + 0x90,2);
  if (param_1[0x8e] != 0) {
    if (*(int *)(param_1[0x8e] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0x8e] + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004204c9;
    }
    FUN_004cc0bc();
    param_1[0x8e] = 0;
  }
LAB_004204c9:
  FUN_0041b094(param_1 + 0x5a,2);
  FUN_0041f020(param_1 + 0x2c,2);
  FUN_0041f020(param_1,2);
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_0042051b:
  *in_FS_OFFSET = local_48;
  return;
}

