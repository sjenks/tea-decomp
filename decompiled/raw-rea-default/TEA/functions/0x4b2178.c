// rea decompile_all
// name: FUN_004b2178
// address: 0x4b2178
// body: available
// range: 0x4b2178-0x4b22de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004b2178(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int *piVar4;
  undefined4 local_38;
  
  FUN_004dce64(0x50d33c);
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = &PTR_FUN_0050da2c;
    *(undefined ***)*param_1 = &PTR_LAB_0050daa4;
    *(undefined ***)param_1[1] = &PTR_LAB_0050dab0;
    while (piVar3 = (int *)FUN_004b5d60(param_1 + 5,0), piVar3 != (int *)0x0) {
      piVar4 = piVar3;
      uVar2 = (**(code **)(*piVar3 + 0x2c))();
      if ((char)uVar2 != '\0') {
        (**(code **)(*piVar3 + 0x10))(uVar2,*piVar3,piVar4,piVar3);
      }
      if (piVar3 != (int *)0x0) {
        (**(code **)*piVar3)();
      }
      FUN_00498d7c((int *)(param_1[8] + 0x11));
    }
    while (param_1[7] != 0) {
      puVar1 = (undefined4 *)param_1[7];
      param_1[7] = puVar1[1];
      if ((*(byte *)((int)puVar1 + 0x1d) & 0x80) == 0) {
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)();
        }
      }
      else {
        puVar1[6] = 0;
      }
    }
    FUN_004b5da0(param_1 + 5);
    if ((param_2 & 2) != 0) {
      FUN_00489c54(param_1 + 0xd,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_38;
  return;
}

