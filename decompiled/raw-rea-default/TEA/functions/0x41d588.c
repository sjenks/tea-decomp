// rea decompile_all
// name: FUN_0041d588
// address: 0x41d588
// body: available
// range: 0x41d588-0x41d795 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl
FUN_0041d588(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5,int param_6
            )

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ef1a4);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x14);
    param_1[0x14] = (int)(param_1 + 0x11);
    param_1[0x15] = (int)(param_1 + 0x12);
    param_1[1] = (int)(param_1 + 0x11);
    param_1[2] = (int)(param_1 + 0x12);
    param_1[0x10] = 0;
    param_1[0x13] = 0;
    param_1[0x11] = (int)&PTR_FUN_004ea94c;
    param_1[0x12] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x14,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x24;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x24;
  if (param_3 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *param_3;
  }
  FUN_004b6184(param_1,1,uVar3,param_4,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x24;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x24;
  param_1[3] = (int)&PTR_FUN_004efff4;
  *(undefined ***)param_1[1] = &PTR_LAB_004f0064;
  *(undefined ***)param_1[2] = &PTR_LAB_004f0070;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f007c;
  param_1[7] = (int)param_3;
  param_1[10] = 0;
  iVar1 = *(int *)(*(int *)(param_5 + 8) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_5 + 8) + -4);
    piVar4 = FUN_004cf7b0(param_1 + 8,uVar2,uVar2);
    param_1[10] = (int)(piVar4 + 3);
    FUN_004dc7d4((undefined4 *)param_1[10],*(undefined4 **)(param_5 + 8),uVar2);
  }
  else {
    param_1[10] = *(int *)(param_5 + 8);
    piVar4 = (int *)(param_1[10] + -0xc);
    if (piVar4 != &DAT_00513d58) {
      *piVar4 = *piVar4 + 1;
    }
  }
  param_1[0xc] = param_6;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

