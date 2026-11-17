// rea decompile_all
// name: FUN_004253c4
// address: 0x4253c4
// body: available
// range: 0x4253c4-0x42567a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_004253c4(longdouble *param_1,int param_2,ushort *param_3,ushort param_4,short param_5,
            int param_6)

{
  ushort *puVar1;
  int iVar2;
  wchar16 *pwVar3;
  ushort *puVar4;
  uint uVar5;
  ushort *puVar6;
  int iVar7;
  ushort local_68 [44];
  ushort local_10;
  ushort local_e;
  int local_c;
  uint local_8;
  
  puVar1 = (ushort *)FUN_004224f4(0xe);
  local_10 = *puVar1;
  if (0x28 < param_2) {
    param_2 = 0x28;
  }
  local_c = param_2;
  local_e = param_4 & 0xdf;
  if (local_e == 0x46) {
    iVar2 = -param_2;
    if (0 < -param_2) {
      param_2 = 0;
      iVar2 = 0;
    }
  }
  else if (param_2 < 1) {
    iVar2 = 1;
  }
  else {
    iVar2 = param_2;
    if (local_e == 0x45) {
      iVar2 = param_2 + 1;
      param_2 = param_2 + 1;
    }
  }
  iVar2 = FUN_00426344(param_1,iVar2,&local_8,local_68,param_6);
  if (iVar2 == 0x7fff) {
    if (local_8 == 0) {
      pwVar3 = u__INF_004336d6;
    }
    else {
      pwVar3 = u__INF_004336cc;
    }
    FUN_0041f3bc((short *)param_3,pwVar3);
    return;
  }
  if (iVar2 == 0x7ffe) {
    if (local_8 == 0) {
      pwVar3 = u__NAN_004336ea;
    }
    else {
      pwVar3 = u__NAN_004336e0;
    }
    FUN_0041f3bc((short *)param_3,pwVar3);
    return;
  }
  puVar1 = param_3;
  if (local_8 != 0) {
    *param_3 = 0x2d;
    puVar1 = param_3 + 1;
  }
  if (local_e != 0x46) {
    if ((local_e != 0x47) || (iVar2 < -3)) goto LAB_0042558f;
    iVar7 = param_2;
    if (param_2 == 0) {
      iVar7 = 1;
    }
    if (iVar7 < iVar2) goto LAB_0042558f;
  }
  if (iVar2 < 0x29) {
    if (iVar2 < 1) {
      *puVar1 = 0x30;
      puVar1[1] = local_10;
      puVar1 = puVar1 + 2;
      for (iVar7 = iVar2; iVar2 = 0, iVar7 != 0; iVar7 = iVar7 + 1) {
        *puVar1 = 0x30;
        puVar1 = puVar1 + 1;
      }
    }
    iVar7 = 0;
    for (puVar4 = local_68; *puVar4 != 0; puVar4 = puVar4 + 1) {
      *puVar1 = *puVar4;
      puVar6 = puVar1 + 1;
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) {
        *puVar6 = local_10;
        puVar6 = puVar1 + 2;
        iVar7 = iVar7 + 1;
      }
      puVar1 = puVar6;
    }
    if (iVar7 + local_c < param_2) {
      uVar5 = param_2 - (iVar7 + local_c);
      FUN_0041ee4c((undefined4 *)puVar1,0x30,uVar5);
      puVar1 = puVar1 + uVar5;
    }
    else if ((iVar2 != 1) && (param_5 == 0)) {
      puVar1 = (ushort *)FUN_00425378(param_4,(uint)param_3,(uint)puVar1);
    }
    if (puVar1 == param_3) {
      *puVar1 = 0x30;
      puVar1 = puVar1 + 1;
    }
    *puVar1 = 0;
    return;
  }
LAB_0042558f:
  *puVar1 = local_68[0];
  puVar4 = puVar1 + 1;
  if (local_68[1] == 0) {
    if (param_5 != 0) {
      *puVar4 = local_10;
      puVar4 = puVar1 + 2;
    }
  }
  else {
    *puVar4 = local_10;
    puVar4 = puVar1 + 2;
    puVar1 = local_68 + 2;
    while (local_68[1] != 0) {
      *puVar4 = local_68[1];
      puVar4 = puVar4 + 1;
      local_68[1] = *puVar1;
      puVar1 = puVar1 + 1;
    }
    if (param_5 == 0) {
      puVar4 = (ushort *)FUN_00425378(param_4,(uint)param_3,(uint)puVar4);
    }
  }
  *puVar4 = param_4 & 0x20 | 0x45;
  iVar2 = iVar2 + -1;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
    puVar4[1] = 0x2d;
  }
  else {
    puVar4[1] = 0x2b;
  }
  if (iVar2 < 1000) {
    if (iVar2 < 100) {
      iVar7 = 2;
    }
    else {
      iVar7 = 3;
    }
  }
  else {
    iVar7 = 4;
  }
  puVar4[iVar7 + 2] = 0;
  puVar4 = puVar4 + iVar7 + 2;
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar4 = puVar4 + -1;
    *puVar4 = (short)(iVar2 % 10) + 0x30;
    iVar2 = iVar2 / 10;
  }
  return;
}

