// rea decompile_all
// name: FUN_004d47dc
// address: 0x4d47dc
// body: available
// range: 0x4d47dc-0x4d487a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_004d47dc(int *param_1,undefined4 *param_2,uint param_3)

{
  undefined1 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  int local_c;
  int local_8;
  
  if ((param_2 == (undefined4 *)0x0) || (param_3 == 0)) {
    uVar3 = 0;
  }
  else {
    iVar4 = FUN_004d44f8(param_1);
    uVar3 = param_3;
    if (iVar4 <= (int)param_3) {
      uVar3 = FUN_004d44f8(param_1);
    }
    if (0 < (int)uVar3) {
      uVar6 = uVar3;
      puVar5 = (undefined4 *)FUN_004d17a8((int)param_1);
      puVar5 = FUN_004cf758(param_2,puVar5,uVar6);
      param_2 = (undefined4 *)((int)puVar5 + uVar3);
      FUN_004d1850((int)param_1,uVar3);
    }
    for (; (int)uVar3 < (int)param_3; uVar3 = uVar3 + 1) {
      local_c = FUN_004d0a2c();
      piVar7 = &local_c;
      local_8 = FUN_004d1804(param_1);
      bVar2 = FUN_004d1694(&local_8,piVar7);
      if (bVar2) {
        return uVar3;
      }
      uVar1 = FUN_004d2f44((undefined1 *)&local_8);
      *(undefined1 *)param_2 = uVar1;
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
  }
  return uVar3;
}

