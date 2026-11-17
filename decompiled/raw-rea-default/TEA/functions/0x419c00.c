// rea decompile_all
// name: FUN_00419c00
// address: 0x419c00
// body: available
// range: 0x419c00-0x419d99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl
FUN_00419c00(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,int *param_5,
            int param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ee76c);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x20);
    param_1[0x20] = (int)(param_1 + 0x1d);
    param_1[0x21] = (int)(param_1 + 0x1e);
    param_1[1] = (int)(param_1 + 0x1d);
    param_1[2] = (int)(param_1 + 0x1e);
    param_1[0x1c] = 0;
    param_1[0x1f] = 0;
    param_1[0x1d] = (int)&PTR_FUN_004ea94c;
    param_1[0x1e] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x20,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -8;
  if (param_3 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *param_3;
  }
  FUN_00468d58(param_1,1,uVar2,param_4,(uint *)(s_Beta_Test_Expiry_004ed29c + 0x10),*param_5,
               param_5[1],param_5[2] - *param_5,param_5[3] - param_5[1],(uint *)0x0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 8;
  param_1[3] = (int)&PTR_FUN_004f066c;
  *(undefined ***)param_1[1] = &PTR_LAB_004f06f8;
  *(undefined ***)param_1[2] = &PTR_LAB_004f0704;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f0710;
  param_1[0x1a] = (int)param_3;
  param_1[0x1b] = 0;
  param_1[0xc] = 0;
  uVar1 = 0x50a31044;
  param_1[0xd] = 0;
  if (param_6 != 0) {
    uVar1 = 0x50a31844;
  }
  FUN_004a7988(*param_1,0x100180,uVar1,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

