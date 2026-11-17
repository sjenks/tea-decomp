// rea decompile_all
// name: FUN_0043ce14
// address: 0x43ce14
// body: available
// range: 0x43ce14-0x43d303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0043d15d) */
/* WARNING: Removing unreachable block (ram,0x0043d1a1) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff7c : 0x0043d1ac */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * __cdecl
FUN_0043ce14(int *param_1,int param_2,undefined4 param_3,int param_4,uint *param_5,int param_6,
            int param_7,int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4f555c);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x1d8);
    param_1[0x1d8] = (int)(param_1 + 0x1d5);
    param_1[0x1d9] = (int)(param_1 + 0x1d6);
    param_1[1] = (int)(param_1 + 0x1d5);
    param_1[2] = (int)(param_1 + 0x1d6);
    param_1[0x1d4] = 0;
    param_1[0x1d7] = 0;
    param_1[0x1d5] = (int)&PTR_FUN_004ea94c;
    param_1[0x1d6] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x1d8,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x6f0;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x6f0;
  FUN_00413cf4(param_1,1,0x4f5414,param_3,param_4,(uint *)0x16b2,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x6f0;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x6f0;
  FUN_0043fd98(param_1 + 0x18);
  param_1[3] = (int)&PTR_FUN_004f5990;
  param_1[0x18] = (int)&PTR_LAB_004f5a68;
  *(undefined ***)param_1[1] = &PTR_LAB_004f5a84;
  *(undefined ***)param_1[2] = &PTR_LAB_004f5a90;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f5a9c;
  param_1[0x19] = 0;
  param_1[0x1a] = param_6;
  param_1[0x1b] = param_7;
  param_1[0x1c] = param_10;
  param_1[0x1d] = param_11;
  param_1[0x20] = 0;
  iVar1 = *(int *)(*(int *)(param_8 + 8) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_8 + 8) + -4);
    piVar3 = FUN_004cf7b0(param_1 + 0x1e,uVar2,uVar2);
    param_1[0x20] = (int)(piVar3 + 3);
    FUN_004dc7d4((undefined4 *)param_1[0x20],*(undefined4 **)(param_8 + 8),uVar2);
  }
  else {
    param_1[0x20] = *(int *)(param_8 + 8);
    piVar3 = (int *)(param_1[0x20] + -0xc);
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  param_1[0x24] = 0;
  iVar1 = *(int *)(*(int *)(param_9 + 8) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_9 + 8) + -4);
    piVar3 = FUN_004cf7b0(param_1 + 0x22,uVar2,uVar2);
    param_1[0x24] = (int)(piVar3 + 3);
    FUN_004dc7d4((undefined4 *)param_1[0x24],*(undefined4 **)(param_9 + 8),uVar2);
  }
  else {
    param_1[0x24] = *(int *)(param_9 + 8);
    piVar3 = (int *)(param_1[0x24] + -0xc);
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  param_1[0x26] = -1;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2e] = 0;
  param_1[0x28] = 0x40;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x36] = 0;
  param_1[0x30] = 0x40;
  FUN_004c7a28(param_1 + 0x38,0,*param_1,0x2fa8,0,0);
  FUN_0041af38(param_1 + 100,0,param_1,0x1130,1000);
  FUN_0041b680(param_1 + 0x93,0,param_1,0x1702,0);
  FUN_004179f0(param_1 + 0xc0,0,param_1,1);
  FUN_004bf504(param_1 + 0xf2,0,*param_1,0x2cb0,0);
  FUN_004bf9d8((int *)((int)param_1 + 0x473),0,*param_1,0x1e96,0);
  FUN_004c7a28((int *)((int)param_1 + 0x51d),0,*param_1,0x2ca6,0,0);
  FUN_0041af38(param_1 + 0x173,0,param_1,0x8de,0);
  FUN_004179f0(param_1 + 0x1a2,0,param_1,0x8d4);
  FUN_004b0c44(param_1,param_5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

