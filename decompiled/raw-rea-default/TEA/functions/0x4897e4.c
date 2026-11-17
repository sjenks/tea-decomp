// rea decompile_all
// name: FUN_004897e4
// address: 0x4897e4
// body: available
// range: 0x4897e4-0x48996d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004897e4(int param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  byte bVar7;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38 [4];
  int local_28 [4];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  bVar7 = 0;
  if (*(int *)(param_1 + 0x48) == 0) {
    iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 6) + 0x18) + 0x2c))();
  }
  else {
    iVar3 = *(int *)(param_1 + 0x48);
  }
  if ((DAT_00506c48 & 2) != 0) {
    if (*(char *)(param_1 + 0x39) == '\0') {
      if (1 < *(int *)(iVar3 + 0x29)) {
        *(undefined4 *)(iVar3 + 0x2d) = 1;
      }
    }
    else {
      *(undefined4 *)(iVar3 + 0x2d) = 0;
    }
  }
  FUN_00489f80(local_38,iVar3,*(int *)(param_1 + 0x58),-1);
  piVar4 = local_38;
  piVar6 = local_28;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = *piVar4;
    piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  local_14 = *(int *)(param_1 + 0x50) - param_3[1];
  local_18 = *(int *)(param_1 + 0x4c) - *param_3;
  local_5c = *(undefined4 *)(iVar3 + 4);
  local_58 = 1;
  piVar4 = local_54;
  local_10 = local_14;
  local_c = local_18;
  local_8 = local_14;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = *param_3;
    param_3 = param_3 + (uint)bVar7 * -2 + 1;
    piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
  }
  local_44 = DAT_0051b1e0;
  local_40 = DAT_0051b1e0;
  local_3c = 0;
  uVar5 = 3;
  bVar7 = 0;
  if ((*(byte *)(param_1 + 0x42) & 1) != 0) {
    iVar3 = (int)((uint)*(byte *)(param_1 + 0x54) << 0x1c) >> 0x1c;
    if (iVar3 == 1) {
      if ((DAT_00506c48 & 1) == 0) {
        uVar5 = (uint)((*(byte *)(param_1 + 0x56) & 2) != 0);
        bVar7 = *(byte *)(param_1 + 0x56) >> 1 & 1;
      }
      else {
        if ((*(char *)(param_1 + 0x39) == '\0') &&
           (param_1 != *(int *)(*(int *)(param_1 + 6) + 0x20))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        uVar5 = (uint)bVar1;
        if (bVar1) {
          bVar7 = 1;
        }
        else {
          bVar7 = *(byte *)(param_1 + 0x56) >> 1 & 1;
        }
      }
    }
    else if (iVar3 == 2) {
      uVar5 = 2;
      bVar7 = *(byte *)(param_1 + 0x56) >> 1 & 1;
    }
    else {
      uVar5 = 0;
      bVar7 = *(byte *)(param_1 + 0x56) >> 1 & 1;
    }
  }
  FUN_004a12b4(&local_5c,param_2,local_28,&local_c,uVar5,bVar7,'\0');
  return;
}

