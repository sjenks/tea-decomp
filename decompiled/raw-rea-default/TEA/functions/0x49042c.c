// rea decompile_all
// name: FUN_0049042c
// address: 0x49042c
// body: available
// range: 0x49042c-0x49055f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0049042c(int param_1,undefined4 *param_2)

{
  LPRECT ptVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_78 [6];
  undefined4 local_60 [6];
  int local_48 [3];
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined2 local_20;
  int local_14;
  uint local_c [2];
  
  FUN_004dce64(0x50692c);
  if (*(int *)(param_1 + 0x1a) != 0) {
    local_34 = GetSystemMetrics(DAT_00509de8);
    local_38 = GetSystemMetrics(DAT_00509df0);
    local_3c = *(int *)(param_1 + 0x16) - *(int *)(param_1 + 0xe);
    local_48[2] = *(int *)(param_1 + 0x12) - *(int *)(param_1 + 10);
    local_48[0] = 0;
    local_48[1] = 0;
    if (*(int *)(param_1 + 0x1a) == 1) {
      local_20 = 8;
      FUN_004ab84c(local_c,(uint *)&DAT_0051b1bc,'\x01');
      local_14 = local_14 + 2;
      local_20 = 0x14;
      FUN_0048db90(param_2,local_c,local_48,local_34,local_38,0xf00021);
      FUN_0048da64(param_2);
      local_14 = local_14 + -2;
      FUN_004ab9b4(local_c,2);
    }
    else if ((DAT_00506c48 & 1) == 0) {
      ptVar1 = (LPRECT)FUN_0049f930(local_78,local_48,*(int *)(param_1 + 0x1a),0);
      FUN_0049fa58(ptVar1,param_2);
    }
    else {
      if (*(int *)(param_1 + 0x1a) == 3) {
        uVar2 = 2;
      }
      else {
        uVar2 = 4;
      }
      ptVar1 = (LPRECT)FUN_0049f990(local_60,local_48,uVar2,0xf);
      FUN_0049fa58(ptVar1,param_2);
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

