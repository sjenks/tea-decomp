// rea decompile_all
// name: FUN_004d2ad6
// address: 0x4d2ad6
// body: available
// range: 0x4d2ad6-0x4d2bbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __stdcall FUN_004d2ad6(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int unaff_EBP;
  undefined4 uVar8;
  
  piVar1 = *(int **)(unaff_EBP + 0x10);
  iVar2 = *(int *)(unaff_EBP + 0xc);
  uVar8 = *(undefined4 *)(iVar2 + 0x24);
  puVar5 = (undefined4 *)FUN_004d2bbc(iVar2);
  *(undefined4 *)(unaff_EBP + -4) = *puVar5;
  while( true ) {
    bVar4 = FUN_004cda78((int *)(unaff_EBP + -4));
    if (bVar4) break;
    piVar7 = piVar1;
    piVar6 = (int *)FUN_004d2a94(*(int *)(unaff_EBP + -4));
    bVar4 = FUN_004d2ab8(iVar2 + 0x30,piVar6,piVar7);
    if (bVar4) {
      puVar5 = (undefined4 *)FUN_004cda90(*(int *)(unaff_EBP + -4));
      *(undefined4 *)(unaff_EBP + -4) = *puVar5;
    }
    else {
      uVar8 = *(undefined4 *)(unaff_EBP + -4);
      puVar5 = (undefined4 *)FUN_004cd864(*(int *)(unaff_EBP + -4));
      *(undefined4 *)(unaff_EBP + -4) = *puVar5;
    }
  }
  FUN_004cd870(unaff_EBP + -0x14,uVar8);
  FUN_004cd89c(unaff_EBP + -0x24,iVar2);
  bVar4 = FUN_004cd9ec(unaff_EBP + -0x14,unaff_EBP + -0x24);
  if (!bVar4) {
    piVar7 = (int *)FUN_004d2a94(*(int *)(unaff_EBP + -0xc));
    bVar4 = FUN_004d2ab8(iVar2 + 0x30,piVar1,piVar7);
    if (!bVar4) {
      puVar5 = (undefined4 *)(unaff_EBP + -0x14);
      goto LAB_004d2b9c;
    }
  }
  FUN_004cd89c(unaff_EBP + -0x34,iVar2);
  puVar5 = (undefined4 *)(unaff_EBP + -0x34);
LAB_004d2b9c:
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *puVar3 = *puVar5;
  puVar3[1] = puVar5[1];
  *(undefined4 *)(*(int *)(unaff_EBP + 8) + 8) = puVar5[2];
  return *(undefined4 *)(unaff_EBP + 8);
}

