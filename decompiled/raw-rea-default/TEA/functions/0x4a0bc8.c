// rea decompile_all
// name: FUN_004a0bc8
// address: 0x4a0bc8
// body: available
// range: 0x4a0bc8-0x4a0c7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_004a0bc8(undefined4 *param_1,int *param_2,undefined4 *param_3,int *param_4,int *param_5,
            int param_6,char param_7,char param_8,int *param_9,uint *param_10)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  ICONINFO local_4c;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  uint local_14 [2];
  uint local_c [2];
  
  FUN_004dce64(0x509c8c);
  GetIconInfo((HICON)*param_1,&local_4c);
  local_28 = 0x14;
  puVar1 = FUN_004883bc(local_14,local_4c.hbmColor,0);
  local_1c = local_1c + 2;
  FUN_0048852c(local_c,puVar1);
  FUN_004886b0(local_14,2);
  local_28 = 8;
  FUN_004a05b0(local_c,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  local_1c = local_1c + -2;
  FUN_004886b0(local_c,2);
  *in_FS_OFFSET = local_38;
  return;
}

