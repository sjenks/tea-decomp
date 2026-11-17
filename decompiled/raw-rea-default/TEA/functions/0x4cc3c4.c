// rea decompile_all
// name: FUN_004cc3c4
// address: 0x4cc3c4
// body: available
// range: 0x4cc3c4-0x4cc4c1 inclusive
// range: 0x4cc56b-0x4cc57e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_004cc3c4(int *param_1,int param_2,int param_3,uint param_4,undefined *param_5)

{
  uint uVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  int local_2c;
  undefined4 local_28;
  
  FUN_004dce64(0x512bc4);
  if ((param_1 == (int *)0x0) && (param_1 = (int *)FUN_004cc180(), param_1 == (int *)0x0)) {
    param_1 = (int *)0x0;
    *in_FS_OFFSET = local_28;
  }
  else {
    if ((param_4 & 0x10) != 0) {
      *param_1 = param_3;
      param_1 = param_1 + 1;
    }
    if (param_5 == (undefined *)0x0) {
      *in_FS_OFFSET = local_28;
    }
    else {
      local_2c = param_3;
      piVar2 = param_1;
      while (0 < local_2c) {
        uVar1 = param_4 & 7;
        if (uVar1 == 1) {
          (*(code *)param_5)();
        }
        else if (uVar1 == 2) {
          (*(code *)param_5)();
        }
        else if (uVar1 == 3) {
          (*(code *)param_5)(piVar2);
        }
        else if (uVar1 == 5) {
          (*(code *)param_5)();
        }
        else {
          FUN_004e5f84((uint *)s_Illegal_mode_in__vector_new__00512bd8);
        }
        piVar2 = (int *)((int)piVar2 + param_2);
        local_2c = local_2c + -1;
      }
      *in_FS_OFFSET = local_28;
    }
  }
  return param_1;
}

