// rea decompile_all
// name: FUN_004723b0
// address: 0x4723b0
// body: available
// range: 0x4723b0-0x472ec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00472632) */
/* WARNING: Removing unreachable block (ram,0x00472c9d) */

int * __cdecl
FUN_004723b0(int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,int param_6)

{
  BOOL BVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  int iVar6;
  undefined1 *puVar7;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_fc;
  undefined1 *local_f4;
  undefined4 local_f0;
  char *local_ec;
  char *local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  undefined1 *local_d0;
  undefined4 local_cc;
  int local_c8;
  int local_c4;
  undefined1 *local_b8;
  undefined4 local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int *local_a0;
  undefined4 local_9c;
  undefined2 local_8c;
  int local_80;
  undefined1 local_78 [8];
  int local_70;
  undefined1 local_68 [8];
  int local_60;
  undefined1 local_58 [8];
  char *local_50;
  int local_48 [2];
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  uint *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  FUN_004dce64(0x4febe0);
  local_8c = 8;
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x132;
    *(int **)((int)param_1 + 0x132) = param_1 + 0x2a;
    param_1[0x2a] = (int)(param_1 + 0x27);
    param_1[0x2b] = (int)(param_1 + 0x28);
    *(int **)((int)param_1 + 0x136) = param_1 + 0x27;
    *(int **)((int)param_1 + 0x13a) = param_1 + 0x28;
    param_1[1] = (int)(param_1 + 0x2a);
    param_1[2] = (int)(param_1 + 0x27);
    param_1[3] = (int)(param_1 + 0x28);
    param_1[0x26] = 0;
    param_1[0x29] = 0;
    *(undefined4 *)((int)param_1 + 0x12e) = 0;
    param_1[0x27] = (int)&PTR_FUN_004ea94c;
    param_1[0x28] = (int)&PTR_FUN_004ea93c;
    local_80 = local_80 + 1;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x2a,1);
    local_80 = local_80 + 1;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x96;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe4;
    FUN_004bda48((int *)((int)param_1 + 0x132),1);
    local_80 = local_80 + 1;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe4;
  }
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x51;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x51;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x51;
  iVar6 = 0;
  uVar5 = 1;
  local_8 = (int *)FUN_004cc0f0();
  if (local_8 != (int *)0x0) {
    local_8c = 0x20;
    FUN_0046a40c(local_8,0,param_4,param_6);
    local_8c = 0x14;
  }
  if (local_8 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *local_8;
  }
  FUN_004ae248(param_1,1,param_3,(uint *)s_DefinitionFrame_004fd41c,iVar3,uVar5,iVar6);
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x51;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x51;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x51;
  *(undefined ***)((int)param_1 + 0x35) = &PTR_FUN_004feef0;
  param_1[4] = (int)&PTR_LAB_004fef38;
  *(undefined ***)param_1[2] = &PTR_LAB_004fef50;
  *(undefined ***)param_1[3] = &PTR_LAB_004fef5c;
  *(undefined ***)(param_1[1] + 8) = &PTR_LAB_004fef68;
  *(undefined ***)(*param_1 + 0xc) = &PTR_LAB_004feff8;
  param_1[0x12] = param_4;
  local_a0 = param_1 + 0x22;
  param_1[0x24] = 0;
  local_8c = 8;
  param_1[0x24] = (int)&DAT_00513d64;
  local_fc = param_1[0x24];
  local_80 = local_80 + 3;
  local_c = (int *)FUN_004cc0f0();
  if (local_c != (int *)0x0) {
    local_8c = 0x44;
    FUN_0047be04(local_c,0,param_1[1],3,0x40);
    local_8c = 0x38;
  }
  param_1[0x13] = (int)local_c;
  (**(code **)(*(int *)((int)param_1 + 0x35) + 4))();
  local_10 = (int *)FUN_004cc0f0();
  if (local_10 != (int *)0x0) {
    local_8c = 0x5c;
    iVar6 = 0;
    local_14 = (uint *)FUN_004cc0f0();
    if (local_14 != (uint *)0x0) {
      local_8c = 0x68;
      FUN_00490fa8(local_14,10,'\0',0);
      local_8c = 0x5c;
    }
    FUN_0048ce64(local_10,0,param_1[1],0,local_14,iVar6);
  }
  piVar4 = local_10;
  local_8c = 8;
  *(undefined1 *)((int)local_10 + 0x36) = 2;
  local_a4 = GetSystemMetrics(7);
  local_a8 = local_a4 << 3;
  local_18 = (int *)FUN_004cc0f0();
  if (local_18 != (int *)0x0) {
    local_8c = 0x80;
    FUN_00488c78(local_18,(uint *)0x31c4,0x31c4,'\0',1,0,'\0');
    local_8c = 0x74;
  }
  (**(code **)(piVar4[6] + 0x14))();
  local_1c = (int *)FUN_004cc0f0();
  if (local_1c != (int *)0x0) {
    local_8c = 0x98;
    FUN_00490848(local_1c,local_a4,0,1);
    local_8c = 0x8c;
  }
  (**(code **)(piVar4[6] + 0x14))();
  local_20 = (int *)FUN_004cc0f0();
  if (local_20 != (int *)0x0) {
    local_8c = 0xb0;
    FUN_00488c78(local_20,(uint *)0x31ba,0x31ba,'\0',1,0,'\0');
    local_8c = 0xa4;
  }
  (**(code **)(piVar4[6] + 0x14))();
  local_24 = (int *)FUN_004cc0f0();
  if (local_24 != (int *)0x0) {
    local_8c = 200;
    FUN_00490848(local_24,local_a8,0,1);
    local_8c = 0xbc;
  }
  (**(code **)(piVar4[6] + 0x14))();
  local_28 = (int *)FUN_004cc0f0();
  if (local_28 != (int *)0x0) {
    local_8c = 0xe0;
    FUN_00488c78(local_28,(uint *)0x1d42,0x1d42,'\0',1,0,'\0');
    local_8c = 0xd4;
  }
  (**(code **)(piVar4[6] + 0x14))();
  local_2c = (int *)FUN_004cc0f0();
  if (local_2c != (int *)0x0) {
    local_8c = 0xf8;
    FUN_00490848(local_2c,local_a4,0,1);
    local_8c = 0xec;
  }
  (**(code **)(piVar4[6] + 0x14))();
  local_30 = (int *)FUN_004cc0f0();
  if (local_30 != (int *)0x0) {
    local_8c = 0x110;
    FUN_00488c78(local_30,(uint *)0x31a6,0x31a6,'\0',1,0,'\0');
    local_8c = 0x104;
  }
  (**(code **)(piVar4[6] + 0x14))();
  local_34 = (int *)FUN_004cc0f0();
  if (local_34 != (int *)0x0) {
    local_8c = 0x128;
    FUN_00490848(local_34,local_a8,0,1);
    local_8c = 0x11c;
  }
  (**(code **)(piVar4[6] + 0x14))();
  local_38 = (int *)FUN_004cc0f0();
  if (local_38 != (int *)0x0) {
    local_8c = 0x140;
    FUN_00488c78(local_38,(uint *)0x1658,0x316a,'\0',1,0,'\0');
    local_8c = 0x134;
  }
  (**(code **)(piVar4[6] + 0x14))();
  local_3c = (int *)FUN_004cc0f0();
  if (local_3c != (int *)0x0) {
    local_8c = 0x158;
    FUN_00490848(local_3c,local_a4,0,1);
    local_8c = 0x14c;
  }
  (**(code **)(piVar4[6] + 0x14))();
  local_40 = (int *)FUN_004cc0f0();
  if (local_40 != (int *)0x0) {
    local_8c = 0x170;
    FUN_00488c78(local_40,(uint *)0x1662,0x3174,'\0',1,0,'\0');
    local_8c = 0x164;
  }
  (**(code **)(piVar4[6] + 0x14))();
  (**(code **)(*(int *)((int)param_1 + 0x35) + 4))();
  FUN_004e0344((undefined1 *)(param_1 + 0x14),(byte *)s____s___d__004fd42c);
  FUN_004cf41c((int)(param_1 + 0x22),(uint *)(param_1 + 0x14));
  FUN_004e0344((undefined1 *)(param_1 + 0x14),(byte *)s__s_d_s_004fd437);
  local_114 = 0;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  local_8c = 8;
  BVar1 = SystemParametersInfoA(0x30,0,&local_114,0);
  if (BVar1 == 0) goto LAB_00472eb2;
  uVar2 = local_10c - local_114 >> 1;
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + ((local_10c - local_114 & 1U) != 0);
  }
  iVar6 = param_1[1];
  *(uint *)(iVar6 + 0x28) = uVar2;
  iVar3 = (int)uVar2 >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
  }
  *(int *)(iVar6 + 0x20) = iVar3 + local_114;
  uVar2 = local_108 - local_110 >> 1;
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + ((local_108 - local_110 & 1U) != 0);
  }
  *(uint *)(iVar6 + 0x2c) = uVar2;
  iVar3 = (int)uVar2 >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
  }
  *(int *)(iVar6 + 0x24) = iVar3 + local_110;
  local_8c = 0x188;
  iVar3 = 0;
  iVar6 = 0;
  FUN_004649b0((int)local_68);
  local_80 = local_80 + 1;
  FUN_0044e83c(local_48,(int)local_68,iVar6,iVar3);
  if (local_60 != 0) {
    if (*(int *)(local_60 + -0xc) != -1) {
      piVar4 = (int *)(local_60 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar6 = *piVar4 + 1;
      }
      if (iVar6 != 0) goto LAB_00472c6c;
    }
    local_ac = local_60 + -0xc;
    local_b0 = local_60 + -0xc;
    FUN_004cc0bc();
    local_b4 = 0;
    local_b8 = local_68;
    local_60 = 0;
  }
LAB_00472c6c:
  local_50 = &DAT_00513d64;
  local_80 = local_80 + 1;
  puVar7 = local_58;
  local_8c = 0x1b8;
  FUN_004cf628((int)local_78,(uint *)(param_1 + 0x14));
  local_80 = local_80 + 1;
  FUN_0044e94c((int)local_48,(int)local_78,(int)puVar7);
  local_80 = local_80 + -1;
  if (local_70 != 0) {
    if (*(int *)(local_70 + -0xc) != -1) {
      piVar4 = (int *)(local_70 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar6 = *piVar4 + 1;
      }
      if (iVar6 != 0) goto LAB_00472d75;
    }
    local_c4 = local_70 + -0xc;
    local_c8 = local_70 + -0xc;
    FUN_004cc0bc();
    local_cc = 0;
    local_d0 = local_78;
    local_70 = 0;
  }
LAB_00472d75:
  local_8c = 0x17c;
  if (*(int *)(local_50 + -4) != 0) {
    FUN_0044ee84(local_50,&local_d4,&local_d8,&local_dc,&local_e0,&local_e4);
    iVar6 = FUN_004153ec(local_d8,local_dc,local_e0,local_e4);
    if (iVar6 != 0) {
      iVar6 = param_1[1];
      *(int *)(iVar6 + 0x20) = local_d8;
      *(int *)(iVar6 + 0x24) = local_dc;
      *(int *)(iVar6 + 0x28) = local_e0;
      *(int *)(iVar6 + 0x2c) = local_e4;
    }
  }
  local_80 = local_80 + -1;
  if (local_50 != (char *)0x0) {
    if (*(int *)(local_50 + -0xc) != -1) {
      piVar4 = (int *)(local_50 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar6 = *piVar4 + 1;
      }
      if (iVar6 != 0) goto LAB_00472e9b;
    }
    local_e8 = local_50 + -0xc;
    local_ec = local_50 + -0xc;
    FUN_004cc0bc();
    local_f0 = 0;
    local_f4 = local_58;
    local_50 = (char *)0x0;
  }
LAB_00472e9b:
  local_80 = local_80 + -1;
  FUN_0044e920((int)local_48,2);
LAB_00472eb2:
  *in_FS_OFFSET = local_9c;
  return param_1;
}

