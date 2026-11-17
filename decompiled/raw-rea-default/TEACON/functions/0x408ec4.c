// rea decompile_all
// name: FUN_00408ec4
// address: 0x408ec4
// body: available
// range: 0x408ec4-0x408ffe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_00408ec4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  uint local_43c [250];
  undefined4 *local_54;
  undefined4 *local_50;
  uint local_4c;
  int local_48;
  int *local_44;
  int *local_40;
  undefined4 local_34;
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_0041f3fc(0x42c2b0);
  sVar3 = GetFileTitleA(*(LPCSTR *)(param_2 + 8),(LPSTR)local_43c,1000);
  if (sVar3 == 0) {
    local_18 = 8;
    FUN_00416e74(param_1,local_43c);
    *in_FS_OFFSET = local_28;
  }
  else {
    local_18 = 0x14;
    local_34 = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = *(int *)(*(int *)(param_2 + 8) + -0xc);
    if (iVar1 == -1 || iVar1 + 1 < 0) {
      uVar2 = *(uint *)(*(int *)(param_2 + 8) + -4);
      local_44 = FUN_00416ffc(param_1,uVar2,uVar2);
      local_40 = local_44 + 3;
      *(int **)(param_1 + 8) = local_40;
      local_48 = param_1;
      local_50 = *(undefined4 **)(param_2 + 8);
      local_54 = *(undefined4 **)(param_1 + 8);
      local_4c = uVar2;
      FUN_0041eddc(local_54,local_50,uVar2);
    }
    else {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar4 != &DAT_0042fab4) {
        *piVar4 = *piVar4 + 1;
      }
    }
    *in_FS_OFFSET = local_28;
  }
  return param_1;
}

