// rea decompile_all
// name: FUN_0042d792
// address: 0x42d792
// body: available
// range: 0x42d792-0x42d99e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0042d891) */

void __stdcall FUN_0042d792(void)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  
  puVar1 = *(undefined2 **)(unaff_EBP + 0x10);
  piVar7 = *(int **)(unaff_EBP + 8);
  FUN_004dce64(0x4f28d4);
  if (piVar7[0x41] != -1) {
    if ((*(byte *)(unaff_EBP + 0xc) & 1) == 0) {
      piVar7[0x41] = -1;
    }
    else {
      iVar5 = 0;
      if (0 < piVar7[0x40]) {
        iVar5 = (*(int *)(*(int *)(*piVar7 + 0x44) + 0xc) + *(int *)(puVar1 + 2)) / piVar7[0x40];
      }
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else {
        iVar2 = FUN_0042ba08((int)piVar7);
        if (iVar2 <= iVar5) {
          iVar5 = FUN_0042ba08((int)piVar7);
          iVar5 = iVar5 + -1;
        }
      }
      iVar2 = piVar7[0x44];
      if (iVar5 != iVar2) {
        if (iVar5 < iVar2) {
          iVar3 = iVar2 - iVar5;
          iVar2 = iVar5;
        }
        else {
          iVar3 = iVar5 - iVar2;
        }
        *(undefined4 *)(unaff_EBP + -0x50) = 0;
        *(undefined4 *)(unaff_EBP + -0x4c) = 0;
        *(undefined4 *)(unaff_EBP + -0x48) = 0;
        *(undefined4 *)(unaff_EBP + -0x44) = 0;
        uVar4 = FUN_00430290(piVar7,iVar2,iVar3 + 1,(int *)(unaff_EBP + -0x50));
        if ((char)uVar4 != '\0') {
          (**(code **)(*(int *)(*piVar7 + 8) + 0x6c))();
        }
        piVar7[0x44] = iVar5;
      }
      (**(code **)(**(int **)(*piVar7 + 0x44) + 0x3c))();
    }
  }
  *(undefined2 *)(unaff_EBP + -0x24) = 8;
  *(undefined4 *)(unaff_EBP + -8) = 0;
  *(undefined **)(unaff_EBP + -8) = &DAT_00513d64;
  *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + -8);
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
  *(undefined2 *)(unaff_EBP + -0x24) = 0x20;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  if (0 < piVar7[0x40]) {
    *(int *)(unaff_EBP + -0x38) =
         (*(int *)(*(int *)(*piVar7 + 0x44) + 0xc) + *(int *)(puVar1 + 2)) / piVar7[0x40];
  }
  iVar5 = FUN_0042d9a0((int *)piVar7[0x31],(int *)piVar7[0x32],(int *)(unaff_EBP + -0x38));
  if (iVar5 != piVar7[0x32]) {
    puVar6 = FUN_004308e4((int)piVar7,*(int *)(unaff_EBP + -0x38));
    FUN_004cf41c(unaff_EBP + -0x10,(uint *)((int)puVar6 + 9));
  }
  FUN_0045e060(piVar7[0x38],unaff_EBP + -0x10,*(undefined4 *)(*piVar7 + 0xc),
               *(undefined4 *)(unaff_EBP + 0xc),puVar1,0);
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + -1;
  if (*(int *)(unaff_EBP + -8) != 0) {
    if (*(int *)(*(int *)(unaff_EBP + -8) + -0xc) != -1) {
      piVar7 = (int *)(*(int *)(unaff_EBP + -8) + -0xc);
      if (piVar7 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar7 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar7 = *piVar7 + -1;
        iVar5 = *piVar7 + 1;
      }
      if (iVar5 != 0) goto LAB_0042d98e;
    }
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -8) + -0xc;
    FUN_004cc0bc();
    *(undefined4 *)(unaff_EBP + -8) = 0;
    *(int *)(unaff_EBP + -0x40) = unaff_EBP + -0x10;
    *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(*(int *)(unaff_EBP + -0x40) + 8);
  }
LAB_0042d98e:
  *in_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x34);
  return;
}

