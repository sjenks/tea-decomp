// rea decompile_all
// name: FUN_004ab84c
// address: 0x4ab84c
// body: available
// range: 0x4ab84c-0x4ab950 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * __cdecl FUN_004ab84c(uint *param_1,uint *param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  HBRUSH pHVar5;
  uint *puVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50befc);
  FUN_00493fdc(param_1);
  *(bool *)(param_1 + 1) = param_3 == '\0';
  uVar2 = FUN_0048c12c(param_2);
  if (param_3 != '\0') {
    uVar4 = uVar2;
    puVar3 = (undefined4 *)FUN_004ab4bc();
    uVar4 = FUN_004ab7a0(puVar3,uVar4);
    *param_1 = uVar4;
    if (uVar4 != 0) {
      *in_FS_OFFSET = local_28;
      goto LAB_004ab93d;
    }
  }
  if ((*param_2 & 0xf0000000) == 0x80000000) {
    pHVar5 = GetSysColorBrush(*param_2 & 0xffff);
    *param_1 = (uint)pHVar5;
  }
  else {
    pHVar5 = CreateSolidBrush(uVar2);
    *param_1 = (uint)pHVar5;
  }
  FUN_00493530((int *)param_1,0x7fe3);
  if (param_3 == '\0') {
    FUN_00493c34(*param_1,2);
  }
  else {
    uVar4 = FUN_0048c12c(param_2);
    uVar2 = *param_1;
    puVar6 = (uint *)FUN_004ab4bc();
    cVar1 = FUN_004ab670(puVar6,uVar2,uVar4);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
LAB_004ab93d:
  *in_FS_OFFSET = local_28;
  return param_1;
}

