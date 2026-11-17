// rea decompile_all
// name: FUN_004cab8c
// address: 0x4cab8c
// body: available
// range: 0x4cab8c-0x4cacb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004cab8c(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  BOOL BVar6;
  int iVar7;
  int local_14;
  int local_10;
  int local_c;
  
  if ((*(int *)(param_1 + 0x1c) != 0) &&
     (uVar2 = FUN_004ca7d0(*(int **)(param_1 + 0x1c)), (char)uVar2 != '\0')) {
    FUN_004cacbc(param_1,(int)param_2);
    iVar3 = (**(code **)(param_2[6] + 0x2c))();
    FUN_0048a134(iVar3,-1);
    local_c = 0;
    local_10 = 0;
    iVar7 = 0;
    do {
      if (*(int *)(param_1 + 4 + iVar7 * 4) != 0) {
        for (local_14 = 0; local_14 < *(int *)(param_1 + 4 + iVar7 * 4); local_14 = local_14 + 1) {
          piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x30) + 9) + local_c * 4);
          (**(code **)(param_2[6] + 0x14))();
          if ((char)piVar1[1] != '\0') {
            FUN_0048a094(iVar3,*(int *)(param_1 + 0x20),local_10);
            if (*piVar1 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = *(int *)*piVar1;
            }
            puVar5 = FUN_004dd744(*piVar1,iVar4,(int *)&DAT_00427ee4,(int *)&DAT_0042850c,0);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00489588((int)puVar5,local_10);
            }
            local_10 = local_10 + 1;
          }
          local_c = local_c + 1;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 6);
    (**(code **)(*(int *)(*param_2 + 8) + 0x68))();
    (**(code **)(param_2[6] + 0x34))();
    BVar6 = UpdateWindow(*(HWND *)(*param_2 + 0xc));
    return CONCAT31((int3)((uint)BVar6 >> 8),1);
  }
  return 0;
}

