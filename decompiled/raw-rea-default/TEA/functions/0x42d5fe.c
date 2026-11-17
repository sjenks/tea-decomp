// rea decompile_all
// name: FUN_0042d5fe
// address: 0x42d5fe
// body: available
// range: 0x42d5fe-0x42d764 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __stdcall FUN_0042d5fe(void)

{
  HWND pHVar1;
  int *piVar2;
  SHORT SVar3;
  HWND pHVar4;
  int iVar5;
  int iVar6;
  int unaff_EBP;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  piVar2 = *(int **)(unaff_EBP + 8);
  SVar3 = GetKeyState(1);
  if (-1 < SVar3) {
    pHVar4 = GetFocus();
    pHVar1 = *(HWND *)(*piVar2 + 0xc);
    SetFocus(*(HWND *)(*piVar2 + 0xc));
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    FUN_004a7a6c(*piVar2,(LPRECT)(unaff_EBP + -0x20));
    puVar7 = (undefined4 *)(unaff_EBP + -0x20);
    puVar8 = (undefined4 *)(unaff_EBP + -0x10);
    for (iVar6 = 4; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    if (pHVar4 != pHVar1) {
      iVar6 = piVar2[0x40];
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -8) - *(int *)(unaff_EBP + -0x10);
      *(int *)(unaff_EBP + -0x24) = iVar6;
      (**(code **)(*(int *)(*piVar2 + 8) + 0x6c))();
    }
    if ((*(byte *)(unaff_EBP + 0xc) & 0xc) == 0) {
      iVar6 = 0;
      if (0 < piVar2[0x40]) {
        iVar6 = (*(int *)(*(int *)(*piVar2 + 0x44) + 0xc) + *(int *)(*(int *)(unaff_EBP + 0x10) + 4)
                ) / piVar2[0x40];
      }
      iVar5 = FUN_0042ba08((int)piVar2);
      if (iVar6 < iVar5) {
        iVar5 = FUN_004307e4((int)piVar2,iVar6);
        if (iVar5 == 0) {
          FUN_00430438(piVar2);
          iVar5 = piVar2[0x27];
          *(int *)(unaff_EBP + -0x38) = iVar5;
          *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(iVar5 + 8);
          FUN_0042a474((undefined4 *)(unaff_EBP + -0x60),(int)(piVar2 + 0x1e),
                       *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                       *(int *)(unaff_EBP + -0x48));
          piVar2[0x44] = iVar6;
          FUN_0042ed8c((int *)(unaff_EBP + -0x70),piVar2,iVar6,1,1,'\0');
          (**(code **)(*(int *)(*piVar2 + 8) + 0x6c))();
        }
      }
    }
  }
  return;
}

