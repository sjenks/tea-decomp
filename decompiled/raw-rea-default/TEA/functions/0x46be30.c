// rea decompile_all
// name: FUN_0046be30
// address: 0x46be30
// body: available
// range: 0x46be30-0x46bff2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0046be30(int *param_1,byte param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  uVar6 = FUN_0046c024(param_1,param_3);
  if ((char)uVar6 == '\0') {
    FUN_004a7bfc(*param_1,0,0x7f00);
  }
  else {
    FUN_004a7bfc(*param_1,0,0x7f84);
  }
  if (*(char *)((int)param_1 + 0x219) != '\0') {
    if ((param_2 & 1) == 0) {
      *(undefined1 *)((int)param_1 + 0x219) = 0;
      FUN_0046c198(param_1);
      return;
    }
    iVar1 = *(int *)((int)param_1 + 0x166);
    iVar2 = *(int *)(iVar1 + 0x20);
    iVar7 = iVar2 + *(int *)(iVar1 + 0x28);
    iVar8 = *(int *)param_1[0x85];
    iVar3 = *(int *)(iVar8 + 0x2c);
    iVar4 = *(int *)(iVar8 + 0x24);
    iVar5 = *(int *)(iVar8 + 0x20);
    iVar8 = iVar5 + *(int *)(iVar8 + 0x28);
    uVar10 = iVar5 - iVar7;
    iVar9 = (int)uVar10 >> 1;
    if (iVar9 < 0) {
      iVar9 = iVar9 + (uint)((uVar10 & 1) != 0);
    }
    iVar9 = (*param_3 + iVar9) - iVar5;
    iVar7 = iVar7 + iVar9;
    iVar5 = iVar5 + iVar9;
    if (((iVar9 < 1) || ((int)(uVar10 * 8) <= iVar8 - iVar5)) &&
       ((-1 < iVar9 || ((int)(uVar10 * 8) <= iVar7 - iVar2)))) {
      FUN_004a7aa0(*(int *)((int)param_1 + 0x166),(HWND)0x0,iVar2,*(int *)(iVar1 + 0x24),
                   iVar7 - iVar2,*(int *)(iVar1 + 0x2c),0x214);
      FUN_004a7aa0(*(int *)param_1[0x85],(HWND)0x0,iVar5,iVar4,iVar8 - iVar5,iVar3,0x214);
    }
  }
  FUN_004a5774(*param_1);
  return;
}

