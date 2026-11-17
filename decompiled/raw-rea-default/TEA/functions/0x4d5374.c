// rea decompile_all
// name: FUN_004d5374
// address: 0x4d5374
// body: available
// range: 0x4d5374-0x4d55b1 inclusive
// range: 0x4d5600-0x4d562b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_004d5374(int *param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *in_FS_OFFSET;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  undefined4 local_24 [8];
  
  FUN_004dce64(0x51500c);
  local_4c = 0;
  if (param_2 == (uint *)0x0) {
    local_4c = 1;
  }
  else {
    local_38 = 0x14;
    FUN_004d1a74(local_24,param_1);
    local_2c = local_2c + 1;
    local_38 = 0x20;
    cVar1 = FUN_004d4bf4((int)local_24);
    if (cVar1 != '\0') {
      iVar4 = FUN_004cf618(param_2);
      iVar5 = FUN_004d4948(*param_1);
      iVar5 = iVar5 - iVar4;
      uVar6 = FUN_004d1688(*param_1);
      if (((uVar6 & 0xb0) == 0) || (uVar6 = FUN_004d1688(*param_1), (uVar6 & 0x80) != 0)) {
        do {
          iVar5 = iVar5 + -1;
          if (iVar5 < 0) goto LAB_004d5456;
          local_54 = FUN_004d0a2c();
          piVar8 = &local_54;
          uVar3 = FUN_004d4c8c(*param_1);
          piVar9 = (int *)FUN_004d1758(*param_1);
          local_50 = FUN_004d34bc(piVar9,uVar3);
          bVar2 = FUN_004d1694(&local_50,piVar8);
        } while (!bVar2);
        local_4c = 1;
      }
LAB_004d5456:
      bVar2 = FUN_004d16ec(*param_1);
      if ((bVar2) && (uVar6 = FUN_004d1688(*param_1), (uVar6 & 0x10) != 0)) {
        do {
          iVar5 = iVar5 + -1;
          if (iVar5 < 0) goto LAB_004d54c5;
          local_5c = FUN_004d0a2c();
          piVar8 = &local_5c;
          uVar3 = FUN_004d4c8c(*param_1);
          piVar9 = (int *)FUN_004d1758(*param_1);
          local_58 = FUN_004d34bc(piVar9,uVar3);
          bVar2 = FUN_004d1694(&local_58,piVar8);
        } while (!bVar2);
        local_4c = 1;
      }
LAB_004d54c5:
      bVar2 = FUN_004d16ec(*param_1);
      if (((bVar2) && (iVar4 != 0)) && (iVar7 = FUN_004d1758(*param_1), iVar7 != 0)) {
        piVar8 = (int *)FUN_004d1758(*param_1);
        iVar7 = FUN_004d50b4(piVar8);
        if (iVar4 != iVar7) {
          local_4c = 1;
        }
      }
      bVar2 = FUN_004d16ec(*param_1);
      if ((bVar2) && (uVar6 = FUN_004d1688(*param_1), (uVar6 & 0x20) != 0)) {
        do {
          iVar5 = iVar5 + -1;
          if (iVar5 < 0) goto LAB_004d557a;
          local_64 = FUN_004d0a2c();
          piVar8 = &local_64;
          uVar3 = FUN_004d4c8c(*param_1);
          piVar9 = (int *)FUN_004d1758(*param_1);
          local_60 = FUN_004d34bc(piVar9,uVar3);
          bVar2 = FUN_004d1694(&local_60,piVar8);
        } while (!bVar2);
        local_4c = 1;
      }
LAB_004d557a:
      FUN_004d4954(*param_1,0);
    }
    local_2c = local_2c + -1;
    FUN_00484c30(local_24,2);
  }
  local_38 = 0;
  if (local_4c != 0) {
    FUN_004d1084(*param_1,local_4c);
  }
  *in_FS_OFFSET = local_48;
  return param_1;
}

