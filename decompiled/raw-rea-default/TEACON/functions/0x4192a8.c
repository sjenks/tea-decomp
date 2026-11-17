// rea decompile_all
// name: FUN_004192a8
// address: 0x4192a8
// body: available
// range: 0x4192a8-0x419737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004192a8(int *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 *in_FS_OFFSET;
  int local_54;
  uint local_50;
  char *local_4c;
  char *local_48;
  int local_44;
  int local_40;
  int local_3c;
  char local_35;
  int local_34;
  undefined4 local_30;
  undefined2 local_20;
  int local_14;
  int local_c;
  int local_8;
  
  FUN_0041f3fc(0x4302a0);
  iVar3 = FUN_004197a4((int)param_1);
  local_34 = FUN_004197b0((int)param_1);
  local_34 = iVar3 - local_34;
  iVar3 = FUN_00417ee0();
  if (iVar3 == param_1[9]) {
    FUN_004181e8();
    *in_FS_OFFSET = local_30;
    return;
  }
  iVar3 = FUN_004197a4((int)param_1);
  if ((iVar3 == 0) && (iVar3 = FUN_00418cd4((int)param_1), iVar3 != 0)) {
    iVar3 = FUN_004197bc((int)param_1);
    iVar3 = iVar3 + param_1[0xc];
    uVar4 = FUN_004197bc((int)param_1);
    FUN_00418dc4((int)param_1,uVar4,iVar3);
    iVar3 = FUN_00418cd4((int)param_1);
    iVar5 = FUN_004197bc((int)param_1);
    FUN_00418ddc((int)param_1,iVar3 - iVar5);
    FUN_00418da8((int)param_1,0,0,0);
    uVar6 = FUN_004197a4((int)param_1);
    uVar7 = FUN_004197c8((int)param_1);
    if (uVar6 < uVar7) {
      local_3c = FUN_004181e8();
      bVar1 = FUN_00418bc0((int *)&stack0x00000008,&local_3c);
      if (!bVar1) {
        uVar2 = FUN_0041929c(&stack0x00000008);
        FUN_004197d4(param_1,uVar2);
        FUN_00418d7c((int)param_1,1);
        *(undefined1 *)((int)param_1 + 0x29) = 1;
        puVar8 = (undefined1 *)FUN_004197a4((int)param_1);
        FUN_00418cc8(puVar8);
        *in_FS_OFFSET = local_30;
        return;
      }
    }
    iVar3 = FUN_004197a4((int)param_1);
    local_34 = FUN_004197b0((int)param_1);
    local_34 = iVar3 - local_34;
  }
  iVar3 = FUN_004197a4((int)param_1);
  if ((iVar3 == 0) && (iVar3 = FUN_00418cd4((int)param_1), iVar3 == 0)) {
    FUN_00418dc4((int)param_1,param_1[0x10],param_1[0x10] + param_1[0xc]);
  }
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  if (local_34 != 0) {
    local_20 = 8;
    FUN_00419820(&local_8,(int)param_1);
    local_14 = local_14 + 1;
    piVar9 = (int *)FUN_004198b8(&local_8);
    local_35 = FUN_00419738(piVar9);
    local_14 = local_14 + -1;
    FUN_00409948(&local_8,2);
    if (local_35 == '\0') {
      local_40 = local_34;
      local_44 = 0;
      pcVar10 = (char *)FUN_0041503c();
      local_48 = (char *)0x0;
      if ((char)param_1[10] != '\0') {
        iVar3 = FUN_00418748(param_1,param_1[9],-param_1[0xb],1);
        if (iVar3 == -1) {
          FUN_004181e8();
          *in_FS_OFFSET = local_30;
          return;
        }
        iVar3 = param_1[0xe];
        param_1[0xe] = param_1[0xf];
        param_1[0xf] = iVar3;
      }
      FUN_00419748((undefined4 *)param_1[0xe],(undefined4 *)param_1[0xf]);
      do {
        FUN_004197a4((int)param_1);
        FUN_004197b0((int)param_1);
        local_20 = 0x14;
        FUN_00419820(&local_c,(int)param_1);
        local_14 = local_14 + 1;
        piVar9 = (int *)FUN_004198b8(&local_c);
        iVar3 = FUN_0041975c(piVar9);
        local_14 = local_14 + -1;
        FUN_00409948(&local_c,2);
        if (iVar3 == 3) break;
        if ((iVar3 == 1) || (iVar5 = FUN_004197a4((int)param_1), iVar5 != local_44)) {
          local_40 = local_40 * 2;
          local_4c = (char *)FUN_0041503c();
          local_50 = (int)local_48 - (int)pcVar10;
          FUN_0041eddc((undefined4 *)local_4c,(undefined4 *)pcVar10,local_50);
          FUN_00414f88();
          local_48 = local_4c + local_50;
          pcVar10 = local_4c;
        }
      } while ((iVar3 == 1) || (iVar5 = FUN_004197a4((int)param_1), iVar5 != local_44));
      if (iVar3 == 2) {
        FUN_00414f88();
        FUN_004181e8();
        *in_FS_OFFSET = local_30;
        return;
      }
      if (iVar3 == 3) {
        iVar5 = 1;
        iVar3 = local_34;
        pcVar10 = (char *)FUN_004197b0((int)param_1);
        bVar1 = FUN_004198f4(param_1,param_1[9],pcVar10,iVar5,iVar3);
        if (!bVar1) {
          FUN_00414f88();
          FUN_004181e8();
          *in_FS_OFFSET = local_30;
          return;
        }
      }
      else {
        bVar1 = FUN_004198f4(param_1,param_1[9],pcVar10,1,(int)local_48 - (int)pcVar10);
        if (!bVar1) {
          FUN_00414f88();
          FUN_004181e8();
          *in_FS_OFFSET = local_30;
          return;
        }
      }
      FUN_00414f88();
    }
    else {
      if (((char)param_1[10] != '\0') &&
         (iVar3 = FUN_00418748(param_1,param_1[9],-param_1[0xb],1), iVar3 == -1)) {
        FUN_004181e8();
        *in_FS_OFFSET = local_30;
        return;
      }
      iVar5 = 1;
      iVar3 = local_34;
      pcVar10 = (char *)FUN_004197b0((int)param_1);
      bVar1 = FUN_004198f4(param_1,param_1[9],pcVar10,iVar5,iVar3);
      if (!bVar1) {
        FUN_004181e8();
        *in_FS_OFFSET = local_30;
        return;
      }
    }
  }
  FUN_00418dc4((int)param_1,param_1[0x10],param_1[0x10] + param_1[0xc]);
  FUN_00418da8((int)param_1,0,0,0);
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  iVar3 = FUN_00418748(param_1,param_1[9],0,1);
  param_1[0xd] = iVar3;
  local_54 = FUN_004181e8();
  bVar1 = FUN_00418bc0((int *)&stack0x00000008,&local_54);
  if (bVar1) {
    FUN_00418dc4((int)param_1,0,0);
  }
  else {
    uVar2 = FUN_0041929c(&stack0x00000008);
    FUN_004197d4(param_1,uVar2);
    FUN_00418d7c((int)param_1,1);
    *(undefined1 *)((int)param_1 + 0x29) = 1;
  }
  FUN_0041978c((int *)&stack0x00000008);
  *in_FS_OFFSET = local_30;
  return;
}

