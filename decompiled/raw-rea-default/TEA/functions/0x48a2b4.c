// rea decompile_all
// name: FUN_0048a2b4
// address: 0x48a2b4
// body: available
// range: 0x48a2b4-0x48a3c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl
FUN_0048a2b4(uint *param_1,uint *param_2,int *param_3,int *param_4,int param_5,int param_6)

{
  BOOL BVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_78;
  HDC local_54 [10];
  HDC local_2c [10];
  
  FUN_004dce64(0x504ea4);
  FUN_00497828((int *)local_2c,param_2);
  FUN_00497828((int *)local_54,param_1);
  BVar1 = BitBlt(local_54[0],*param_3,param_3[1],(*param_3 + *param_4) - *param_3,
                 (param_3[1] + param_4[1]) - param_3[1],local_2c[0],param_5,param_6,0xcc0020);
  uVar2 = (uint)(BVar1 != 0);
  FUN_00497930((int *)local_54,2);
  FUN_00497930((int *)local_2c,2);
  *in_FS_OFFSET = local_78;
  return uVar2;
}

