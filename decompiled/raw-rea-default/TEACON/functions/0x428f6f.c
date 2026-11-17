// rea decompile_all
// name: FUN_00428f6f
// address: 0x428f6f
// body: available
// range: 0x428f6f-0x429092 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00428f6f(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint local_c;
  
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    FUN_00426830(s_varType_>tpMask___TM_IS_ARRAY_00433f60,s_xx_cpp_00433f7e,0xdcc);
  }
  if ((*(byte *)(*(int *)(param_2 + 8) + 0xc) & 2) == 0) {
    FUN_00426830(s_varType_>tpArr_tpaElemType_>tpCl_00433f85,s_xx_cpp_00433fc0,0xdcd);
  }
  uVar1 = *(uint *)(param_2 + 0xc);
  piVar2 = *(int **)(param_2 + 8);
  uVar3 = piVar2[8];
  if (uVar3 == 0) {
    FUN_00426830(s_vdtCount_00433fc7,s_xx_cpp_00433fd0,0xdd6);
  }
  if (param_3 == 0) {
    param_3 = uVar3 * uVar1;
  }
  local_c = param_3 / uVar3;
  if ((uVar1 < local_c) && (uVar1 != 0)) {
    FUN_00426830(s_etdCount_<__elemCount____elemCou_00433fd7,s_xx_cpp_00433fff,0xddf);
  }
  uVar1 = param_3 - local_c * uVar3;
  if (uVar3 < uVar1) {
    FUN_00426830(s_dtrCount_<__vdtCount_00434006,s_xx_cpp_0043401b,0xde0);
  }
  iVar4 = param_1 + local_c * *piVar2;
  if (uVar1 != 0) {
    FUN_00428cbf(iVar4,(int)piVar2,0,uVar1,1,param_4,param_5);
  }
  while (local_c != 0) {
    iVar4 = iVar4 - *piVar2;
    FUN_00428cbf(iVar4,(int)piVar2,0,uVar3,1,param_4,param_5);
    local_c = local_c - 1;
  }
  return;
}

