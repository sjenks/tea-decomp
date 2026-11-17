// rea decompile_all
// name: FUN_00434cd0
// address: 0x434cd0
// body: available
// range: 0x434cd0-0x4350ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_00434cd0(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 local_48;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4f318c);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xbc);
    param_1[0xbc] = (int)(param_1 + 0xb9);
    param_1[0xbd] = (int)(param_1 + 0xba);
    param_1[1] = (int)(param_1 + 0xb9);
    param_1[2] = (int)(param_1 + 0xba);
    param_1[0xb8] = 0;
    param_1[0xbb] = 0;
    param_1[0xb9] = (int)&PTR_FUN_004ea94c;
    param_1[0xba] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0xbc,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x280;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x280;
  FUN_00413cf4(param_1,1,0x4f3154,param_3,param_4,(uint *)0xfaa,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x280;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x280;
  param_1[3] = (int)&PTR_FUN_004f3248;
  *(undefined ***)param_1[1] = &PTR_LAB_004f3310;
  *(undefined ***)param_1[2] = &PTR_LAB_004f331c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f3328;
  FUN_0041af38(param_1 + 0x18,0,param_1,0x2b98,0);
  iVar3 = 1;
  FUN_004cf628((int)local_14,(uint *)s_http___www_crosswordman_com_tea__004ecec0);
  FUN_0041d588(param_1 + 0x48,0,param_1,0x7526,(int)local_14,iVar3);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_00434ef6;
    }
    FUN_004cc0bc();
    local_c = 0;
  }
LAB_00434ef6:
  iVar3 = 1;
  FUN_004cf628((int)local_24,(uint *)s_mailto_support_crosswordman_com__004ecf10);
  FUN_0041d588(param_1 + 0x7e,0,param_1,0x7527,(int)local_24,iVar3);
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar2 = (int *)(local_1c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_00434fb2;
    }
    FUN_004cc0bc();
    local_1c = 0;
  }
LAB_00434fb2:
  param_1[0xb6] = 0;
  iVar3 = *(int *)(*(int *)(param_5 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(param_5 + 8) + -4);
    piVar2 = FUN_004cf7b0(param_1 + 0xb4,uVar1,uVar1);
    param_1[0xb6] = (int)(piVar2 + 3);
    FUN_004dc7d4((undefined4 *)param_1[0xb6],*(undefined4 **)(param_5 + 8),uVar1);
  }
  else {
    param_1[0xb6] = *(int *)(param_5 + 8);
    piVar2 = (int *)(param_1[0xb6] + -0xc);
    if (piVar2 != &DAT_00513d58) {
      *piVar2 = *piVar2 + 1;
    }
  }
  *in_FS_OFFSET = local_48;
  return param_1;
}

