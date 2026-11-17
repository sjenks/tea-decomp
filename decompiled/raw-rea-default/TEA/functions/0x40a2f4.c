// rea decompile_all
// name: FUN_0040a2f4
// address: 0x40a2f4
// body: available
// range: 0x40a2f4-0x40a92e inclusive
// range: 0x40a956-0x40a969 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0040a451) */
/* WARNING: Removing unreachable block (ram,0x0040a55e) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff90 : 0x0040a459 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl FUN_0040a2f4(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined **local_c;
  undefined **local_8;
  
  FUN_004dce64(0x4ebc08);
  while (iVar3 = param_3, iVar2 = param_1, iVar2 != param_2) {
    param_1 = iVar2 + 0x80;
    param_3 = iVar3 + 0x80;
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 8) = 0;
      iVar4 = *(int *)(*(int *)(iVar2 + 8) + -0xc);
      if (iVar4 == -1 || iVar4 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(iVar2 + 8) + -4);
        piVar5 = FUN_004cf7b0(iVar3,uVar1,uVar1);
        *(int **)(iVar3 + 8) = piVar5 + 3;
        FUN_004dc7d4(*(undefined4 **)(iVar3 + 8),*(undefined4 **)(iVar2 + 8),uVar1);
      }
      else {
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 8);
        piVar5 = (int *)(*(int *)(iVar3 + 8) + -0xc);
        if (piVar5 != &DAT_00513d58) {
          *piVar5 = *piVar5 + 1;
        }
      }
      *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(undefined4 *)(iVar3 + 0x30) = 0;
      *(undefined4 *)(iVar3 + 0x18) = 0x40;
      iVar4 = FUN_004cc0f0();
      if (iVar4 == 0) {
        local_8 = &PTR_FUN_004eac74;
        FUN_004e7cc4((uint *)&DAT_004040dc,&local_8,0,&LAB_00404134,1,0,0,0);
      }
      *(int *)(iVar3 + 0x1c) = iVar4;
      iVar4 = FUN_0040a988(*(int *)(iVar2 + 0x1c),*(int *)(iVar2 + 0x20),*(int *)(iVar3 + 0x1c));
      *(int *)(iVar3 + 0x20) = iVar4;
      *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)(iVar3 + 0x3c) = 0;
      *(undefined4 *)(iVar3 + 0x40) = 0;
      *(undefined4 *)(iVar3 + 0x50) = 0;
      *(undefined4 *)(iVar3 + 0x38) = 0x40;
      iVar4 = FUN_004cc0f0();
      if (iVar4 == 0) {
        local_c = &PTR_FUN_004eac74;
        FUN_004e7cc4((uint *)&DAT_004040dc,&local_c,0,&LAB_00404134,1,0,0,0);
      }
      *(int *)(iVar3 + 0x3c) = iVar4;
      iVar4 = FUN_0040a988(*(int *)(iVar2 + 0x3c),*(int *)(iVar2 + 0x40),*(int *)(iVar3 + 0x3c));
      *(int *)(iVar3 + 0x40) = iVar4;
      *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(iVar3 + 0x40);
      *(undefined4 *)(iVar3 + 0x60) = 0;
      iVar4 = *(int *)(*(int *)(iVar2 + 0x60) + -0xc);
      if (iVar4 == -1 || iVar4 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(iVar2 + 0x60) + -4);
        piVar5 = FUN_004cf7b0(iVar3 + 0x58,uVar1,uVar1);
        *(int **)(iVar3 + 0x60) = piVar5 + 3;
        FUN_004dc7d4(*(undefined4 **)(iVar3 + 0x60),*(undefined4 **)(iVar2 + 0x60),uVar1);
      }
      else {
        *(undefined4 *)(iVar3 + 0x60) = *(undefined4 *)(iVar2 + 0x60);
        piVar5 = (int *)(*(int *)(iVar3 + 0x60) + -0xc);
        if (piVar5 != &DAT_00513d58) {
          *piVar5 = *piVar5 + 1;
        }
      }
      *(undefined4 *)(iVar3 + 0x70) = 0;
      iVar4 = *(int *)(*(int *)(iVar2 + 0x70) + -0xc);
      if (iVar4 == -1 || iVar4 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(iVar2 + 0x70) + -4);
        piVar5 = FUN_004cf7b0(iVar3 + 0x68,uVar1,uVar1);
        *(int **)(iVar3 + 0x70) = piVar5 + 3;
        FUN_004dc7d4(*(undefined4 **)(iVar3 + 0x70),*(undefined4 **)(iVar2 + 0x70),uVar1);
      }
      else {
        *(undefined4 *)(iVar3 + 0x70) = *(undefined4 *)(iVar2 + 0x70);
        piVar5 = (int *)(*(int *)(iVar3 + 0x70) + -0xc);
        if (piVar5 != &DAT_00513d58) {
          *piVar5 = *piVar5 + 1;
        }
      }
      *(undefined4 *)(iVar3 + 0x78) = *(undefined4 *)(iVar2 + 0x78);
    }
  }
  *in_FS_OFFSET = local_34;
  return iVar3;
}

