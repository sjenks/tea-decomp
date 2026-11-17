// rea decompile_all
// name: FUN_0049d444
// address: 0x49d444
// body: available
// range: 0x49d444-0x49d971 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl
FUN_0049d444(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            uint *param_6,int param_7)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  ushort uVar7;
  uint *puVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined *local_5c;
  undefined4 local_58;
  undefined2 local_48;
  int local_3c;
  int *local_34;
  int *local_30;
  int local_2c;
  int local_27;
  
  FUN_004dce64(0x509148);
  local_48 = 8;
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x7b;
    *(int *)((int)param_1 + 0x7b) = (int)param_1 + 0x6f;
    *(int *)((int)param_1 + 0x7f) = (int)param_1 + 0x73;
    param_1[4] = (int)param_1 + 0x6f;
    param_1[5] = (int)param_1 + 0x73;
    *(undefined4 *)((int)param_1 + 0x6b) = 0;
    *(undefined4 *)((int)param_1 + 0x77) = 0;
    *(undefined ***)((int)param_1 + 0x6f) = &PTR_FUN_004ea94c;
    *(undefined ***)((int)param_1 + 0x73) = &PTR_FUN_004ea93c;
    local_3c = local_3c + 1;
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
    FUN_004a4fbc((int *)((int)param_1 + 0x7b),1);
    local_3c = local_3c + 1;
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
  }
  *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x19;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x19;
  FUN_0049834c(param_1,1,param_3,param_6,param_7);
  local_3c = local_3c + 3;
  *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x19;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x19;
  param_1[6] = (int)&PTR_LAB_00509210;
  param_1[1] = (int)&PTR_LAB_00509288;
  *(undefined ***)param_1[4] = &PTR_LAB_005092a8;
  *(undefined ***)param_1[5] = &PTR_LAB_005092b4;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_005092c0;
  *(undefined4 *)((int)param_1 + 0x56) = 1;
  *(undefined4 *)((int)param_1 + 0x5a) = 0;
  *(undefined4 *)((int)param_1 + 0x52) = param_4;
  *(undefined4 *)((int)param_1 + 0x62) = param_5;
  *(undefined4 *)((int)param_1 + 0x66) = 0;
  *(undefined4 *)((int)param_1 + 0x5e) = 0;
  *(undefined1 *)((int)param_1 + 0x6a) = 1;
  pcVar10 = s_EXT_CAPS_NUM_SCRL_OVR_REC_00508fbc;
  uVar7 = 0x7f12;
  iVar5 = *(int *)(*param_1 + 0x70);
  piVar1 = (int *)FUN_0049d0a8();
  FUN_0049d148(piVar1,iVar5,uVar7,(uint *)pcVar10);
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) | 0x8000;
  if ((*(int *)((int)param_1 + 0x52) == 1) || (*(int *)((int)param_1 + 0x52) == 4)) {
    *(undefined1 *)((int)param_1 + 0x4d) = 0;
  }
  else {
    *(undefined4 *)((int)param_1 + 0x5a) = 2;
  }
  iVar5 = *(int *)((int)param_1 + 0x52);
  if (iVar5 != 0) {
    if (iVar5 == 1) {
      param_1[10] = 2;
      *(undefined1 *)((int)param_1 + 0x2f) = 0xff;
      *(undefined1 *)((int)param_1 + 0x2d) = 0xff;
      *(undefined1 *)((int)param_1 + 0x2e) = *(undefined1 *)((int)param_1 + 0x2d);
      *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)((int)param_1 + 0x2e);
    }
    else if (iVar5 - 2U < 2) {
      param_1[10] = 0;
      uVar2 = FUN_004917ac((int)param_1,4);
      *(char *)(param_1 + 0xb) = (char)uVar2;
      uVar2 = FUN_004917ac((int)param_1,4);
      *(char *)((int)param_1 + 0x2d) = (char)uVar2;
      if ((*(byte *)((int)param_1 + 0x62) & 0x40) != 0) {
        uVar2 = FUN_004917ac((int)param_1,1);
        *(char *)((int)param_1 + 0x2d) = (char)uVar2;
      }
      iVar5 = GetSystemMetrics(DAT_00509df0);
      *(char *)((int)param_1 + 0x2f) = (char)iVar5;
      *(undefined1 *)((int)param_1 + 0x2e) = *(undefined1 *)((int)param_1 + 0x2f);
    }
  }
  FUN_0048ff7c(param_1[2],*(undefined4 *)((int)param_1 + 0x52));
  local_48 = 0x14;
  FUN_004a8760(&local_2c);
  local_3c = local_3c + 3;
  local_48 = 0x20;
  (**(code **)(local_27 + 0x14))();
  for (iVar5 = 0; piVar1 = (int *)FUN_0049d0a8(), iVar5 < *piVar1; iVar5 = iVar5 + 1) {
    if ((1 << ((byte)iVar5 & 0x1f) & *(uint *)((int)param_1 + 0x62)) != 0) {
      if ((&DAT_00508ffc)[iVar5] == 0) {
        local_30 = (int *)FUN_004cc0f0();
        if (local_30 != (int *)0x0) {
          local_48 = 0x38;
          uVar11 = 0;
          local_5c = FUN_0049d0a8();
          puVar8 = *(uint **)(*(int *)(local_5c + 8) + iVar5 * 4);
          puVar3 = FUN_0049d0a8();
          iVar4 = lstrlenA(*(LPCSTR *)(*(int *)(puVar3 + 8) + iVar5 * 4));
          FUN_0049eb84(local_30,(&DAT_00509014)[iVar5],*(undefined4 *)((int)param_1 + 0x52),0,iVar4,
                       puVar8,uVar11);
          local_48 = 0x2c;
        }
        piVar1 = local_30;
        (**(code **)(*local_30 + 4))();
      }
      else {
        piVar1 = (int *)FUN_004cc0f0();
        local_34 = piVar1;
        if (piVar1 != (int *)0x0) {
          local_48 = 0x50;
          uVar12 = 0;
          uVar9 = 1;
          uVar11 = *(undefined4 *)((int)param_1 + 0x52);
          uVar6 = (&DAT_00509014)[iVar5];
          puVar3 = FUN_0049d0a8();
          FUN_004989b8(local_34,(&DAT_00508ffc)[iVar5],*(uint **)(*(int *)(puVar3 + 8) + iVar5 * 4),
                       uVar6,uVar11,uVar9,uVar12);
          piVar1 = local_34;
        }
      }
      local_64 = *(undefined4 *)((int)piVar1 + 0x2e);
      local_5e = (undefined1)piVar1[0xd];
      local_5d = *(undefined1 *)((int)piVar1 + 0x35);
      local_48 = 0x20;
      local_5f = 2;
      local_60 = 2;
      FUN_0048ff54((int)piVar1,&local_64);
      FUN_00492644(param_1,(int)piVar1,1,0);
      *(int *)((int)param_1 + 0x5e) = *(int *)((int)param_1 + 0x5e) + 1;
    }
  }
  if ((*(byte *)((int)param_1 + 0x62) & 0x40) != 0) {
    FUN_0049d994(param_1);
  }
  local_3c = local_3c + -3;
  FUN_004a86dc(&local_2c,0);
  *in_FS_OFFSET = local_58;
  return param_1;
}

