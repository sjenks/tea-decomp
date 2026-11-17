// rea decompile_all
// name: FUN_0040e240
// address: 0x40e240
// body: available
// range: 0x40e240-0x40e544 inclusive
// range: 0x40e566-0x40e5dd inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0040e240(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined **local_c;
  int local_8;
  
  FUN_004dce64(0x4ec4b4);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == *(int *)(param_1 + 0x18)) {
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    if (iVar3 >> 4 == 0) {
      iVar3 = 0x40;
    }
    else {
      iVar3 = (iVar3 >> 4) * 2;
    }
    iVar4 = FUN_004cc0f0();
    if (iVar4 == 0) {
      local_c = &PTR_FUN_004eac74;
      FUN_004e7cc4((uint *)&DAT_004040dc,&local_c,0,&LAB_00404134,1,0,0,0);
    }
    FUN_0040df24(*(int *)(param_1 + 4),param_2,iVar4);
    iVar5 = param_2 - *(int *)(param_1 + 4);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    iVar5 = (iVar5 >> 4) * 0x10 + iVar4;
    if (iVar5 != 0) {
      *(undefined4 *)(iVar5 + 8) = 0;
      iVar2 = *(int *)(*(int *)(param_3 + 8) + -0xc);
      if (iVar2 == -1 || iVar2 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(param_3 + 8) + -4);
        piVar6 = FUN_004cf7b0(iVar5,uVar1,uVar1);
        *(int **)(iVar5 + 8) = piVar6 + 3;
        FUN_004dc7d4(*(undefined4 **)(iVar5 + 8),*(undefined4 **)(param_3 + 8),uVar1);
      }
      else {
        *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(param_3 + 8);
        piVar6 = (int *)(*(int *)(iVar5 + 8) + -0xc);
        if (piVar6 != &DAT_00513d58) {
          *piVar6 = *piVar6 + 1;
        }
      }
    }
    iVar5 = param_2 - *(int *)(param_1 + 4);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    FUN_0040df24(param_2,*(int *)(param_1 + 8),(iVar5 >> 4) * 0x10 + iVar4 + 0x10);
    iVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    FUN_0040b4f0(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    FUN_004cc0bc();
    *(int *)(param_1 + 0x18) = iVar3 * 0x10 + iVar4;
    *(int *)(param_1 + 8) = (iVar5 >> 4) * 0x10 + iVar4 + 0x10;
    *(int *)(param_1 + 4) = iVar4;
  }
  else {
    local_8 = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 8) = 0;
      iVar4 = *(int *)(*(int *)(iVar3 + -8) + -0xc);
      if (iVar4 == -1 || iVar4 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(iVar3 + -8) + -4);
        piVar6 = FUN_004cf7b0(iVar3,uVar1,uVar1);
        *(int **)(local_8 + 8) = piVar6 + 3;
        FUN_004dc7d4(*(undefined4 **)(local_8 + 8),*(undefined4 **)(iVar3 + -8),uVar1);
      }
      else {
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar3 + -8);
        piVar6 = (int *)(*(int *)(iVar3 + 8) + -0xc);
        if (piVar6 != &DAT_00513d58) {
          *piVar6 = *piVar6 + 1;
        }
      }
    }
    FUN_0040e070(param_2,*(int *)(param_1 + 8) + -0x10,*(int *)(param_1 + 8));
    FUN_004cf384(param_2,param_3);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  }
  *in_FS_OFFSET = local_34;
  return;
}

