// rea decompile_all
// name: FUN_00450bbc
// address: 0x450bbc
// body: available
// range: 0x450bbc-0x4511a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00450eb5) */
/* WARNING: Removing unreachable block (ram,0x00450eed) */
/* WARNING: Removing unreachable block (ram,0x00450fac) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffb8 : 0x00450fb4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * __cdecl
FUN_00450bbc(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  
  FUN_004dce64(0x4f7df4);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x336);
    param_1[0x336] = (int)(param_1 + 0x333);
    param_1[0x337] = (int)(param_1 + 0x334);
    param_1[1] = (int)(param_1 + 0x333);
    param_1[2] = (int)(param_1 + 0x334);
    param_1[0x332] = 0;
    param_1[0x335] = 0;
    param_1[0x333] = (int)&PTR_FUN_004ea94c;
    param_1[0x334] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x336,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xc68;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xc68;
  FUN_00413cf4(param_1,1,param_5,param_3,param_4,(uint *)0x109a,param_6,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xc68;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xc68;
  param_1[3] = (int)&PTR_FUN_004f9fac;
  *(undefined ***)param_1[1] = &PTR_LAB_004fa094;
  *(undefined ***)param_1[2] = &PTR_LAB_004fa0a0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fa0ac;
  param_1[0x18] = param_6;
  param_1[0x19] = -1;
  param_1[0x1a] = -1;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_004c279c((uint *)(param_1 + 0x1e),0x80c,(uint *)s_Text_Document__TXT____txt_TEA_Sy_004f7584,0,
               0,0,0,0,0);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  FUN_004c7a28(param_1 + 0x2a,0,*param_1,9000,0,0);
  FUN_0041c258(param_1 + 0x56,0,param_1,0x10ae,0);
  FUN_004179f0(param_1 + 0x84,0,param_1,0x10b8);
  FUN_0041af38(param_1 + 0xb6,0,param_1,0x111c,3);
  FUN_0041bb44(param_1 + 0xe5,0,param_1,0x1108);
  FUN_0041b680(param_1 + 0x116,0,param_1,0x1a22,0);
  FUN_0041af38(param_1 + 0x143,0,param_1,0x1112,3);
  FUN_0041bb44(param_1 + 0x172,0,param_1,0x10fe);
  param_1[0x1a3] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a8] = 0;
  param_1[0x1a8] = (int)&DAT_00513d64;
  param_1[0x1ad] = 0;
  param_1[0x1ae] = 0;
  param_1[0x1b2] = 0;
  param_1[0x1ac] = 0x100;
  param_1[0x1b4] = 0;
  FUN_0044fb08(param_1 + 0x1b5,0,*param_1,0x1144);
  param_1[0x1ec] = 0;
  FUN_004cc3c4(param_1 + 0x1ef,0x44,3,1,FUN_0041e888);
  FUN_0048faec((uint *)(param_1 + 0x31c));
  param_1[0x31e] = 0;
  param_1[799] = 0;
  param_1[0x321] = 0;
  param_1[0x322] = 0;
  param_1[0x326] = 0;
  param_1[800] = 0x100;
  param_1[0x328] = 1;
  param_1[0x329] = 0;
  param_1[0x32a] = 0;
  param_1[0x32b] = 0;
  param_1[0x32c] = 0;
  param_1[0x32e] = 0;
  param_1[0x32f] = 0;
  param_1[0x330] = 0;
  param_1[0x331] = 0;
  if (param_1[0x18] == 0) {
    piVar1 = (int *)FUN_004cc0f0();
    if (piVar1 != (int *)0x0) {
      FUN_00450940(piVar1,0,*param_1,0x3192);
    }
    param_1[0x1a3] = (int)piVar1;
  }
  else {
    piVar1 = (int *)FUN_004cc0f0();
    if (piVar1 != (int *)0x0) {
      FUN_0041b680(piVar1,0,param_1,0x161c,0);
    }
    param_1[0x329] = (int)piVar1;
    piVar1 = (int *)FUN_004cc0f0();
    if (piVar1 != (int *)0x0) {
      FUN_004179f0(piVar1,0,param_1,0x10cc);
    }
    param_1[0x32a] = (int)piVar1;
    piVar1 = (int *)FUN_004cc0f0();
    if (piVar1 != (int *)0x0) {
      FUN_004179f0(piVar1,0,param_1,2);
    }
    param_1[0x32b] = (int)piVar1;
    piVar1 = (int *)FUN_004cc0f0();
    if (piVar1 != (int *)0x0) {
      FUN_004179f0(piVar1,0,param_1,0x5fa);
    }
    param_1[0x32c] = (int)piVar1;
  }
  FUN_0045a7f0((int)param_1);
  *(undefined1 *)(param_1 + 0x222) = 0;
  FUN_004a6d7c(*param_1,0x1a04);
  *in_FS_OFFSET = local_3c;
  return param_1;
}

