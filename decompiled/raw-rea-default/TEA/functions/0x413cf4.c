// rea decompile_all
// name: FUN_00413cf4
// address: 0x413cf4
// body: available
// range: 0x413cf4-0x413efc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00413e3c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd0 : 0x00413e44 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * __cdecl
FUN_00413cf4(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5,uint *param_6,
            int param_7,int param_8)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x4ed5c8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x1c);
    param_1[0x1c] = (int)(param_1 + 0x19);
    param_1[0x1d] = (int)(param_1 + 0x1a);
    param_1[1] = (int)(param_1 + 0x19);
    param_1[2] = (int)(param_1 + 0x1a);
    param_1[0x18] = 0;
    param_1[0x1b] = 0;
    param_1[0x19] = (int)&PTR_FUN_004ea94c;
    param_1[0x1a] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x1c,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x48;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x48;
  FUN_004affb4(param_1,1,param_4,param_6,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x48;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x48;
  param_1[3] = (int)&PTR_FUN_004f0c20;
  *(undefined ***)param_1[1] = &PTR_LAB_004f0ce8;
  *(undefined ***)param_1[2] = &PTR_LAB_004f0cf4;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f0d00;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[6] = 0x100;
  param_1[0xe] = param_5;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = (int)param_6;
  param_1[0x13] = param_7;
  param_1[0x14] = param_3;
  param_1[0x15] = param_8;
  param_1[0x16] = 0;
  if ((param_1[0x15] != 0) && (param_1[0x13] == 0)) {
    piVar1 = (int *)FUN_004cc0f0();
    if (piVar1 != (int *)0x0) {
      FUN_0049f628(piVar1,0,*param_1,'\x01',0);
    }
    param_1[0x16] = (int)piVar1;
    FUN_004a7910(*piVar1,2);
  }
  *in_FS_OFFSET = local_2c;
  return param_1;
}

