// rea decompile_all
// name: FUN_004089c8
// address: 0x4089c8
// body: available
// range: 0x4089c8-0x408b13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __stdcall FUN_004089c8(void)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_40;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4eb81c);
  piVar4 = DAT_004eb4a4;
  do {
    piVar1 = DAT_004eb4a8;
    piVar5 = DAT_004eb4a4;
    if (DAT_004eb4a8 <= piVar4) {
      puVar3 = FUN_004089a4(DAT_004eb4a8,DAT_004eb4a8,DAT_004eb4a4);
      piVar4 = DAT_004eb4a8;
      iVar6 = (int)piVar1 - (int)piVar5;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 3;
      }
      DAT_004eb4a8 = DAT_004eb4a8 + -(iVar6 >> 2);
      FUN_0040771c(&DAT_004eb4a0,(int)puVar3,(int)piVar4);
      *in_FS_OFFSET = local_40;
      return;
    }
    piVar5 = (int *)*piVar4;
    puVar2 = (uint *)(**(code **)(*piVar5 + 0x10))();
    FUN_004cf628((int)local_14,puVar2);
    if (piVar5 != (int *)0x0) {
      (**(code **)*piVar5)();
    }
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar5 = (int *)(local_c + -0xc);
        if (piVar5 == &DAT_00513d58) {
          iVar6 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar6 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar6 = *piVar5 + 1;
        }
        if (iVar6 != 0) goto LAB_00408aa7;
      }
      FUN_004cc0bc();
      local_c = 0;
    }
LAB_00408aa7:
    piVar4 = piVar4 + 1;
  } while( true );
}

