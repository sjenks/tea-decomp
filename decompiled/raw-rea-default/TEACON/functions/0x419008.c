// rea decompile_all
// name: FUN_00419008
// address: 0x419008
// body: available
// range: 0x419008-0x4190e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_00419008(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  int local_3c;
  undefined4 local_38;
  undefined1 local_34 [8];
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_0041f3fc(0x430200);
  local_18 = 8;
  FUN_004168f8(local_34);
  local_2c = 0;
  FUN_00417c04(param_1,&local_2c);
  piVar1 = (int *)FUN_00416740(param_2);
  iVar2 = FUN_00416754(piVar1);
  if (iVar2 < 1) {
    uVar3 = FUN_0041687c(param_2);
    piVar1 = FUN_00416ffc(param_1,uVar3,uVar3);
    local_3c = FUN_004172ec((int)piVar1);
    FUN_004168a0((int)local_5c,param_1,&local_3c);
    puVar4 = (undefined4 *)FUN_00416c58(param_2);
    puVar5 = (undefined4 *)FUN_00416734(param_1);
    FUN_00416fa4(puVar5,puVar4,uVar3);
  }
  else {
    local_38 = FUN_00416734(param_2);
    FUN_004168a0((int)local_4c,param_1,&local_38);
    piVar1 = (int *)FUN_00416740(param_1);
    FUN_00416c40(piVar1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

