// rea decompile_all
// name: FUN_0044fdb8
// address: 0x44fdb8
// body: available
// range: 0x44fdb8-0x44fec1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0044fdb8(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_10;
  int local_c;
  int local_8;
  
  param_1[6] = param_2;
  param_1[7] = param_3;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_5;
  if ((param_2 != 0) && (iVar1 = FUN_00408c68(param_2,param_1[7]), iVar1 != 0)) {
    if (*(int *)(*param_1 + 0x14) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(*param_1 + 0x14) + 8);
    }
    puVar2 = FUN_004dd744(*(int *)(*param_1 + 0x14),iVar1,(int *)&DAT_0040299c,(int *)&DAT_0044fec4,
                          0);
    FUN_00452bdc((int)puVar2,param_1[7],&local_8,&local_c,&local_10);
    iVar1 = local_c;
    if (0 < local_10) {
      iVar1 = local_8;
    }
    for (; (local_8 <= iVar1 && (iVar1 <= local_c)); iVar1 = iVar1 + local_10) {
      iVar3 = FUN_00408e54(param_1[6],param_1[7],iVar1);
      if (0 < iVar3) {
        if (((0 < local_10) && (iVar1 < param_4)) ||
           ((local_10 < 0 && ((param_4 < iVar1 && (param_4 != 0)))))) {
          param_1[10] = param_1[10] + iVar3;
        }
        param_1[0xc] = param_1[0xc] + iVar3;
        if (param_1[8] == 0) {
          param_1[8] = iVar1;
        }
        param_1[9] = iVar1;
      }
    }
  }
  (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
  return;
}

