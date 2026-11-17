// rea decompile_all
// name: FUN_0041fedc
// address: 0x41fedc
// body: available
// range: 0x41fedc-0x42023f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0041ffb4) */
/* WARNING: Removing unreachable block (ram,0x004200cc) */

int * __cdecl FUN_0041fedc(int *param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  
  FUN_004dce64(0x4ef8c4);
  FUN_0041eec8(param_1,0,param_2,param_5 + 0x1e96);
  FUN_0041eec8(param_1 + 0x2c,0,param_2,param_5 + 0x1ea0);
  param_1[0x58] = (int)param_2;
  param_1[0x59] = param_3;
  FUN_0041af38(param_1 + 0x5a,0,param_2,param_5 + 0x1eaa,0);
  param_1[0x89] = param_4;
  param_1[0x8a] = param_5;
  param_1[0x8e] = 0;
  param_1[0x8e] = (int)&DAT_00513d64;
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_2;
  }
  FUN_004abc64(param_1 + 0x90,0,uVar1,param_5 + 0x1ebe,0);
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_2;
  }
  FUN_004abc64(param_1 + 0xbb,0,uVar1,param_5 + 0x1ec8,0);
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_2;
  }
  FUN_004abc64(param_1 + 0xe6,0,uVar1,param_5 + 0x1ed2,0);
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_2;
  }
  FUN_004abc64(param_1 + 0x111,0,uVar1,param_5 + 0x1edc,0);
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_2;
  }
  FUN_004abc64(param_1 + 0x13c,0,uVar1,param_5 + 0x1ee6,0);
  param_1[0x16a] = 0;
  param_1[0x16a] = (int)&DAT_00513d64;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  if (param_5 == 0) {
    piVar2 = (int *)FUN_004cc0f0();
    if (piVar2 != (int *)0x0) {
      FUN_0041af38(piVar2,0,param_2,0x38ff,0);
    }
    param_1[0x16c] = (int)piVar2;
    piVar2 = (int *)FUN_004cc0f0();
    if (piVar2 != (int *)0x0) {
      if (param_2 == (undefined4 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *param_2;
      }
      FUN_004a1f48(piVar2,0,uVar1,0x3909,0,0);
    }
    param_1[0x16d] = (int)piVar2;
    piVar2 = (int *)FUN_004cc0f0();
    if (piVar2 != (int *)0x0) {
      FUN_0041af38(piVar2,0,param_2,0x38fe,0);
    }
    param_1[0x16e] = (int)piVar2;
    piVar2 = (int *)FUN_004cc0f0();
    if (piVar2 != (int *)0x0) {
      if (param_2 == (undefined4 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *param_2;
      }
      FUN_004a1f48(piVar2,0,uVar1,0x3908,0,0);
    }
    param_1[0x16f] = (int)piVar2;
  }
  *in_FS_OFFSET = local_38;
  return param_1;
}

