// rea decompile_all
// name: FUN_0040ae88
// address: 0x40ae88
// body: available
// range: 0x40ae88-0x40b4b7 inclusive
// range: 0x40b4df-0x40b4ef inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0040afd7) */
/* WARNING: Removing unreachable block (ram,0x0040b0e4) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff90 : 0x0040afdf */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0040ae88(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined **local_c;
  undefined **local_8;
  
  FUN_004dce64(0x4ebd8c);
  iVar2 = param_1;
  while (param_1 = iVar2, iVar3 = param_2 + -1, param_2 != 0) {
    iVar2 = param_1 + 0x80;
    param_2 = iVar3;
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 8) = 0;
      iVar3 = *(int *)(*(int *)(param_3 + 8) + -0xc);
      if (iVar3 == -1 || iVar3 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(param_3 + 8) + -4);
        piVar4 = FUN_004cf7b0(param_1,uVar1,uVar1);
        *(int **)(param_1 + 8) = piVar4 + 3;
        FUN_004dc7d4(*(undefined4 **)(param_1 + 8),*(undefined4 **)(param_3 + 8),uVar1);
      }
      else {
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 8);
        piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
        if (piVar4 != &DAT_00513d58) {
          *piVar4 = *piVar4 + 1;
        }
      }
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0x40;
      iVar3 = FUN_004cc0f0();
      if (iVar3 == 0) {
        local_8 = &PTR_FUN_004eac74;
        FUN_004e7cc4((uint *)&DAT_004040dc,&local_8,0,&LAB_00404134,1,0,0,0);
      }
      *(int *)(param_1 + 0x1c) = iVar3;
      iVar3 = FUN_0040a988(*(int *)(param_3 + 0x1c),*(int *)(param_3 + 0x20),
                           *(int *)(param_1 + 0x1c));
      *(int *)(param_1 + 0x20) = iVar3;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0x40;
      iVar3 = FUN_004cc0f0();
      if (iVar3 == 0) {
        local_c = &PTR_FUN_004eac74;
        FUN_004e7cc4((uint *)&DAT_004040dc,&local_c,0,&LAB_00404134,1,0,0,0);
      }
      *(int *)(param_1 + 0x3c) = iVar3;
      iVar3 = FUN_0040a988(*(int *)(param_3 + 0x3c),*(int *)(param_3 + 0x40),
                           *(int *)(param_1 + 0x3c));
      *(int *)(param_1 + 0x40) = iVar3;
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x60) = 0;
      iVar3 = *(int *)(*(int *)(param_3 + 0x60) + -0xc);
      if (iVar3 == -1 || iVar3 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(param_3 + 0x60) + -4);
        piVar4 = FUN_004cf7b0(param_1 + 0x58,uVar1,uVar1);
        *(int **)(param_1 + 0x60) = piVar4 + 3;
        FUN_004dc7d4(*(undefined4 **)(param_1 + 0x60),*(undefined4 **)(param_3 + 0x60),uVar1);
      }
      else {
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_3 + 0x60);
        piVar4 = (int *)(*(int *)(param_1 + 0x60) + -0xc);
        if (piVar4 != &DAT_00513d58) {
          *piVar4 = *piVar4 + 1;
        }
      }
      *(undefined4 *)(param_1 + 0x70) = 0;
      iVar3 = *(int *)(*(int *)(param_3 + 0x70) + -0xc);
      if (iVar3 == -1 || iVar3 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(param_3 + 0x70) + -4);
        piVar4 = FUN_004cf7b0(param_1 + 0x68,uVar1,uVar1);
        *(int **)(param_1 + 0x70) = piVar4 + 3;
        FUN_004dc7d4(*(undefined4 **)(param_1 + 0x70),*(undefined4 **)(param_3 + 0x70),uVar1);
      }
      else {
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_3 + 0x70);
        piVar4 = (int *)(*(int *)(param_1 + 0x70) + -0xc);
        if (piVar4 != &DAT_00513d58) {
          *piVar4 = *piVar4 + 1;
        }
      }
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_3 + 0x78);
    }
  }
  *in_FS_OFFSET = local_34;
  return;
}

