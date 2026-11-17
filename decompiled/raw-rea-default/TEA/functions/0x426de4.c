// rea decompile_all
// name: FUN_00426de4
// address: 0x426de4
// body: available
// range: 0x426de4-0x4270ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00426de4(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_40;
  
  FUN_004dce64(0x4f1bec);
  if (param_1 == (int *)0x0) goto LAB_004270df;
  *(undefined ***)((int)param_1 + 0x35) = &PTR_FUN_004f1ee4;
  param_1[4] = (int)&PTR_LAB_004f1f44;
  *(undefined ***)param_1[2] = &PTR_LAB_004f1f5c;
  *(undefined ***)param_1[3] = &PTR_LAB_004f1f68;
  *(undefined ***)(param_1[1] + 8) = &PTR_LAB_004f1f74;
  *(undefined ***)(*param_1 + 0xc) = &PTR_LAB_004f2004;
  if (param_1[0x1a] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x1a] + 8))();
  }
  if (param_1[0x1b] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x1b] + 8))();
  }
  if (param_1[0x16] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x16] + 5))();
  }
  if (param_1[0x22] != 0) {
    if (*(int *)(param_1[0x22] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0x22] + -0xc);
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
      if (iVar1 != 0) goto LAB_00426f60;
    }
    FUN_004cc0bc();
    param_1[0x22] = 0;
  }
LAB_00426f60:
  if (param_1[0x1e] != 0) {
    if (*(int *)(param_1[0x1e] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0x1e] + -0xc);
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
      if (iVar1 != 0) goto LAB_00426fe0;
    }
    FUN_004cc0bc();
    param_1[0x1e] = 0;
  }
LAB_00426fe0:
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x61;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x61;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x61;
  FUN_004ae77c(param_1,0);
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x61;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x61;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x61;
  if ((param_2 & 2) != 0) {
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe4;
    FUN_004bdc6c((int *)((int)param_1 + 0x142),0);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe4;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x96;
    FUN_004a52c0(param_1 + 0x2e,0);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x96;
    FUN_00489c54(param_1 + 0x2c,0);
  }
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_004270df:
  *in_FS_OFFSET = local_40;
  return;
}

