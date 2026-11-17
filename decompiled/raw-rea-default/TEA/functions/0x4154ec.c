// rea decompile_all
// name: FUN_004154ec
// address: 0x4154ec
// body: available
// range: 0x4154ec-0x41565b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004154ec(int *param_1,HMENU param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  UINT UVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar5;
  undefined4 local_44;
  int local_18;
  undefined4 local_10;
  HMENU local_c;
  
  FUN_004dce64(0x4ed9e8);
  FUN_004a7d1c(*param_1,param_2,param_3,param_4);
  FUN_00497aec(&local_10,param_2,0);
  iVar1 = GetMenuItemCount(local_c);
  if ((iVar1 != 0) && (UVar2 = FUN_00497c2c((int)&local_10,iVar1 + -1), UVar2 == 0x1414)) {
    (**(code **)(param_1[3] + 0xb0))();
    puVar5 = &local_10;
    uVar3 = (uint)(*(int *)(local_18 + -4) != 0);
    piVar4 = (int *)FUN_00422fc4(param_1[0xe]);
    FUN_00423e14(piVar4,(int)puVar5,uVar3);
    if (local_18 != 0) {
      if (*(int *)(local_18 + -0xc) != -1) {
        piVar4 = (int *)(local_18 + -0xc);
        if (piVar4 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else if (piVar4 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else {
          *piVar4 = *piVar4 + -1;
          iVar1 = *piVar4 + 1;
        }
        if (iVar1 != 0) goto LAB_00415623;
      }
      FUN_004cc0bc();
    }
  }
LAB_00415623:
  if ((param_2 != (HMENU)0x0) && (param_4 != '\0')) {
    _DAT_0051ac88 = 0xe4c;
    DAT_0051ac84 = 0xe4c;
  }
  FUN_00497bf4(&local_10,2);
  *in_FS_OFFSET = local_44;
  return;
}

