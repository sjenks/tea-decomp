// rea decompile_all
// name: FUN_004a0c7c
// address: 0x4a0c7c
// body: available
// range: 0x4a0c7c-0x4a0d3a inclusive
// range: 0x4a0d4f-0x4a1173 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_004a0c7c(undefined4 param_1,int *param_2,int *param_3,int *param_4,int param_5,char param_6,
            char param_7,COLORREF *param_8,ushort param_9)

{
  int iVar1;
  HDC pHVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  char cVar8;
  int local_e0;
  int local_dc;
  undefined4 local_cc;
  undefined4 local_c8;
  COLORREF local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  COLORREF local_9c;
  COLORREF local_98 [2];
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined2 local_70;
  int local_64;
  uint local_5c [2];
  int local_54 [10];
  int local_2c [10];
  
  bVar7 = 0;
  FUN_004dce64(0x509cf8);
  piVar5 = param_3;
  piVar6 = &local_e0;
  for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = *piVar5;
    piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  local_88 = *param_4;
  local_84 = param_4[1];
  if (param_7 == '\0') {
    iVar4 = 1;
  }
  else {
    iVar4 = 2;
  }
  iVar1 = (**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  if (iVar1 != *param_2) {
    SetBkMode((HDC)*param_2,iVar4);
  }
  pHVar2 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  iVar4 = SetBkMode(pHVar2,iVar4);
  if ((param_6 != '\0') || (iVar1 = local_dc, param_5 == 1)) {
    local_88 = local_88 + 1;
    local_84 = local_84 + 1;
    iVar1 = local_e0 + 1;
    if ((param_9 & 1) != 0) {
      iVar1 = local_e0 + 2;
    }
    local_e0 = iVar1;
    iVar1 = local_dc + 1;
    if ((param_9 & 4) != 0) {
      iVar1 = local_dc + 2;
    }
  }
  local_dc = iVar1;
  switch(param_5) {
  case 0:
    local_8c = 0;
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      local_8c = local_90;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x48))();
    }
    (**(code **)(*(int *)((int)param_2 + 5) + 0x50))();
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    }
    break;
  case 1:
    iVar1 = (**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
    if (iVar1 != *param_2) {
      SetBkMode((HDC)*param_2,1);
    }
    iVar1 = 1;
    pHVar2 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
    SetBkMode(pHVar2,iVar1);
    pHVar2 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
    local_98[0] = GetBkColor(pHVar2);
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      local_98[0] = local_9c;
      if (param_6 != '\0') {
        (**(code **)(*(int *)((int)param_2 + 5) + 0x48))();
      }
    }
    if (param_6 == '\0') {
      local_70 = 8;
      FUN_004977c0(local_2c,param_2);
      local_64 = local_64 + 3;
      local_70 = 0x20;
      local_a4 = param_3[3] - param_3[1];
      local_a8 = param_3[2] - *param_3;
      local_a0 = local_a8;
      puVar3 = (uint *)FUN_004a02fc(&local_a8);
      FUN_00497828(local_54,puVar3);
      local_64 = local_64 + 3;
      local_70 = 0x14;
      if (param_7 == '\0') {
        param_8 = local_98;
      }
      local_ac = param_3[3] - param_3[1];
      local_b0 = param_3[2] - *param_3;
      FUN_004a0314(local_54,&local_88,&local_b0,local_2c,param_3,(int *)param_8);
      FUN_004a0494(param_2,local_54,param_3);
      (**(code **)(*(int *)((int)param_2 + 5) + 0x50))();
      local_64 = local_64 + -3;
      FUN_00497930(local_54,2);
      local_64 = local_64 + -3;
      FUN_00497930(local_2c,2);
      local_70 = 0;
    }
    else {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x50))();
    }
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    }
    break;
  case 2:
    local_b8 = 0;
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      local_b8 = local_bc;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x48))();
    }
    local_70 = 0x2c;
    cVar8 = '\x01';
    pHVar2 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
    local_c0 = GetTextColor(pHVar2);
    FUN_004ab84c(local_5c,&local_c0,cVar8);
    local_64 = local_64 + 2;
    (**(code **)(*(int *)((int)param_2 + 5) + 0x58))();
    local_64 = local_64 + -2;
    FUN_004ab9b4(local_5c,2);
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    }
    break;
  case 3:
    local_c8 = 0;
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      local_c8 = local_cc;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x48))();
    }
    FUN_004a04b0(param_2);
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    }
    break;
  case 4:
    (**(code **)(*(int *)((int)param_2 + 5) + 0x50))();
  }
  iVar1 = (**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  if (iVar1 != *param_2) {
    SetBkMode((HDC)*param_2,iVar4);
  }
  pHVar2 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  SetBkMode(pHVar2,iVar4);
  *in_FS_OFFSET = local_80;
  return;
}

