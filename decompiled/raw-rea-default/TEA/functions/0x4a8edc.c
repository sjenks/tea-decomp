// rea decompile_all
// name: FUN_004a8edc
// address: 0x4a8edc
// body: available
// range: 0x4a8edc-0x4a9157 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004a8edc(undefined4 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_50;
  
  FUN_004dce64(0x50b748);
  if (param_1 == (undefined4 *)0x0) goto LAB_004a9147;
  *(undefined ***)((int)param_1 + 0x1b) = &PTR_FUN_0050b660;
  param_1[1] = &PTR_LAB_0050b6b4;
  *(undefined ***)((int)param_1 + 0x11) = &PTR_LAB_0050b6c4;
  *(undefined ***)*param_1 = &PTR_LAB_0050b6e4;
  FUN_004aaef4((int)param_1);
  if (*(int *)((int)param_1 + 0x53) != 0) {
    (**(code **)(*(int *)((int)param_1 + 0x53) + 0x11))();
    if (*(undefined4 **)((int)param_1 + 0x53) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x53))();
    }
  }
  if (*(int *)((int)param_1 + 0x4e) != 0) {
    (**(code **)(*(int *)((int)param_1 + 0x4e) + 0x15))();
    if (*(undefined4 **)((int)param_1 + 0x4e) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x4e))();
    }
  }
  piVar1 = (int *)FUN_004a95d8((int)param_1,0);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 8) + 0x18))();
    if (iVar2 != 0) {
      (*(code *)**(undefined4 **)(iVar2 + 8))();
    }
    if (*(int *)((int)param_1 + 0x31) != 0) {
      (*(code *)**(undefined4 **)(*(int *)((int)param_1 + 0x31) + 0xc))();
    }
  }
  if (*(int *)((int)param_1 + 0x27) != 0) {
    (*(code *)**(undefined4 **)(*(int *)((int)param_1 + 0x27) + 8))();
  }
  FUN_00487e60(*(undefined4 **)((int)param_1 + 0x6b));
  if (*(int *)((int)param_1 + 0x3d) != 0) {
    if (*(int *)(*(int *)((int)param_1 + 0x3d) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)((int)param_1 + 0x3d) + -0xc);
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
      if (iVar2 != 0) goto LAB_004a9115;
    }
    FUN_004cc0bc();
    *(undefined4 *)((int)param_1 + 0x3d) = 0;
  }
LAB_004a9115:
  FUN_004c0aac(param_1 + 1,0);
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_004a9147:
  *in_FS_OFFSET = local_50;
  return;
}

