// rea decompile_all
// name: FUN_0049ee80
// address: 0x49ee80
// body: available
// range: 0x49ee80-0x49f040 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0049ee80(int *param_1,int *param_2)

{
  uint uVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  int local_68 [6];
  undefined4 local_50;
  int local_4c;
  uint local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_28;
  undefined4 local_24;
  int *local_20;
  uint local_1c [5];
  undefined4 local_8;
  
  bVar7 = 0;
  (**(code **)(*param_1 + 0x34))();
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  FUN_004906a0((int)param_1,&local_44);
  if (param_1[0x15] == 0) {
    (**(code **)(*(int *)((int)param_2 + 5) + 0x14))();
  }
  else {
    (**(code **)(*(int *)((int)param_2 + 5) + 0x14))();
  }
  (**(code **)(*param_1 + 0x54))();
  if ((*(byte *)((int)param_1 + 0x42) & 1) == 0) {
    bVar2 = FUN_004875a8();
    if (bVar2) {
      puVar3 = &DAT_0051b1f4;
    }
    else {
      puVar3 = &DAT_0051b1e8;
    }
    local_8 = *puVar3;
  }
  if (param_1[0x11] == 0) {
    (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    (**(code **)(*(int *)((int)param_2 + 5) + 0x48))();
    (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    goto LAB_0049f032;
  }
  local_1c[0] = DAT_00509640;
  local_1c[1] = DAT_00509644;
  local_1c[2] = DAT_00509648;
  uVar1 = local_1c[param_1[0x13]];
  local_20 = param_1 + 0x16;
  local_68[0] = param_1[0x11];
  local_68[1] = 0;
  piVar5 = &local_44;
  piVar6 = local_68 + 2;
  for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = *piVar5;
    piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  local_50 = DAT_0051b19c;
  local_4c = *local_20;
  local_28 = local_44;
  local_24 = local_40;
  local_48 = uVar1 | 0x24;
  (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
  (**(code **)(*(int *)((int)param_2 + 5) + 0x24))();
  if ((*(byte *)((int)param_1 + 0x42) & 1) == 0) {
    bVar2 = FUN_004875a8();
    if (!bVar2) goto LAB_0049f009;
    FUN_004a1174(local_68,param_2,&local_28,3,'\0','\x01');
  }
  else {
LAB_0049f009:
    FUN_004a1174(local_68,param_2,&local_28,0,'\0','\x01');
  }
  (**(code **)(*(int *)((int)param_2 + 5) + 0x24))();
LAB_0049f032:
  (**(code **)(*(int *)((int)param_2 + 5) + 0x1c))();
  return;
}

