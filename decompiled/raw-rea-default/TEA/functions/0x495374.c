// rea decompile_all
// name: FUN_00495374
// address: 0x495374
// body: available
// range: 0x495374-0x495465 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00495374(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  undefined4 uVar6;
  int *piVar7;
  
  piVar7 = (int *)0x0;
  FUN_0049533c((int)param_1);
  for (iVar1 = param_1[6]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x55)) {
    *(bool *)(iVar1 + 0x39) = *(int *)(iVar1 + 0x35) == 0;
    *(bool *)(iVar1 + 0x42) = *(int *)(iVar1 + 0x3e) == 0;
    *(bool *)(iVar1 + 0x4b) = *(int *)(iVar1 + 0x47) == 0;
    *(bool *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x50) == 0;
  }
  do {
    bVar5 = false;
    piVar2 = (int *)param_1[7];
    piVar4 = (int *)0x0;
    while (piVar3 = piVar2, piVar3 != (int *)0x0) {
      uVar6 = FUN_00495ec8(piVar3);
      if ((char)uVar6 == '\0') {
        piVar2 = (int *)piVar3[8];
        piVar4 = piVar3;
      }
      else {
        *(undefined1 *)(piVar3[3] + 8) = 1;
        bVar5 = true;
        if (piVar4 == (int *)0x0) {
          param_1[7] = piVar3[8];
        }
        else {
          piVar4[8] = piVar3[8];
        }
        piVar2 = (int *)piVar3[8];
        if (piVar7 == (int *)0x0) {
          param_1[8] = (int)piVar3;
          piVar7 = piVar3;
        }
        else {
          piVar7[8] = (int)piVar3;
          piVar7 = piVar3;
        }
      }
    }
  } while (bVar5);
  if (param_1[7] != 0) {
    FUN_004a857c(*param_1,0x7fe5);
  }
  return;
}

