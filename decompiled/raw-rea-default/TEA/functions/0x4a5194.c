// rea decompile_all
// name: FUN_004a5194
// address: 0x4a5194
// body: available
// range: 0x4a5194-0x4a52bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004a5194(int param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  *(undefined2 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x800;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = DAT_0051b19c;
  puVar1 = FUN_0049acf4(param_1);
  *(undefined1 **)(param_1 + 0x68) = puVar1;
  if (*(int *)(param_1 + 0x14) == 0) {
    *(undefined4 *)(param_1 + 0x7e) = 0;
  }
  else {
    FUN_004a7560(*(int *)(param_1 + 0x14),param_1);
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    if (param_3 == 0) {
      param_3 = 0;
    }
    *(int *)(param_1 + 0x70) = param_3;
    if (*(int *)(param_1 + 0x70) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = **(int **)(param_1 + 0x70);
    }
    puVar2 = FUN_004dd744(*(int *)(param_1 + 0x70),iVar4,(int *)&DAT_00469dc4,(int *)&DAT_004756a8,0
                         );
    *(undefined4 **)(param_1 + 0x6c) = puVar2;
    if (*(int *)(param_1 + 0x6c) == 0) {
      piVar3 = FUN_00488138(0);
      *(int **)(param_1 + 0x6c) = piVar3;
      if (*(int *)(param_1 + 0x70) == 0) {
        if (*(int *)(param_1 + 0x6c) == 0) {
          iVar4 = *(int *)(param_1 + 0x6c);
        }
        else {
          iVar4 = *(int *)(param_1 + 0x6c) + 4;
        }
        *(int *)(param_1 + 0x70) = iVar4;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x6c);
    if (param_3 == 0) {
      param_3 = *(int *)(*(int *)(param_1 + 0x14) + 0x70);
    }
    *(int *)(param_1 + 0x70) = param_3;
  }
  FUN_004a5e28(param_1);
  return;
}

