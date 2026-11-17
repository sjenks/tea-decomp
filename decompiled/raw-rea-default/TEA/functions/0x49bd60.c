// rea decompile_all
// name: FUN_0049bd60
// address: 0x49bd60
// body: available
// range: 0x49bd60-0x49be78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl
FUN_0049bd60(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int *param_4,RECT *param_5)

{
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  HRGN local_c [2];
  
  FUN_004dce64(0x508afc);
  FUN_0049bcdc(param_1,param_2,param_3);
  *(undefined ***)((int)param_1 + 5) = &PTR_FUN_00508d18;
  *(undefined4 *)((int)param_1 + 0x39) = 0;
  *(undefined4 *)((int)param_1 + 0x3d) = 0;
  SetMapMode((HDC)*param_1,8);
  SetWindowExtEx((HDC)*param_1,param_4[2] - *param_4,param_4[3] - param_4[1],(LPSIZE)0x0);
  BVar1 = SetViewportExtEx((HDC)*param_1,param_4[2] - *param_4,param_4[3] - param_4[1],(LPSIZE)0x0);
  (**(code **)(*(int *)((int)param_1 + 5) + 100))
            (BVar1 != 0,param_1,*(int *)((int)param_1 + 5),param_1);
  FUN_0049ced4((int *)local_c,param_5);
  SelectClipRgn((HDC)*param_1,local_c[0]);
  FUN_0049cf24(local_c,2);
  uVar2 = FUN_0048db7c(*(undefined4 **)((int)param_1 + 0x35),6);
  *(undefined4 *)((int)param_1 + 0x39) = uVar2;
  (**(code **)(*(int *)((int)param_1 + 5) + 0x60))();
  *in_FS_OFFSET = local_30;
  return param_1;
}

