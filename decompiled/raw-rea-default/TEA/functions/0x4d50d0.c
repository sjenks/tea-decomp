// rea decompile_all
// name: FUN_004d50d0
// address: 0x4d50d0
// body: available
// range: 0x4d50d0-0x4d52f8 inclusive
// range: 0x4d5347-0x4d5372 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_004d50d0(int *param_1,undefined1 param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  int *piVar7;
  int local_6c;
  int local_68;
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
  
  FUN_004dce64(0x514f74);
  local_4c = 0;
  local_38 = 0x14;
  FUN_004d1a74(local_24,param_1);
  local_2c = local_2c + 1;
  local_38 = 0x20;
  cVar1 = FUN_004d4bf4((int)local_24);
  if (cVar1 != '\0') {
    iVar4 = FUN_004d4948(*param_1);
    iVar4 = iVar4 + -1;
    uVar5 = FUN_004d1688(*param_1);
    if (((uVar5 & 0xb0) == 0) || (uVar5 = FUN_004d1688(*param_1), (uVar5 & 0x80) != 0)) {
      do {
        iVar4 = iVar4 + -1;
        if (iVar4 < 0) goto LAB_004d519d;
        local_54 = FUN_004d0a2c();
        piVar7 = &local_54;
        uVar3 = FUN_004d4c8c(*param_1);
        piVar6 = (int *)FUN_004d1758(*param_1);
        local_50 = FUN_004d34bc(piVar6,uVar3);
        bVar2 = FUN_004d1694(&local_50,piVar7);
      } while (!bVar2);
      local_4c = 1;
    }
LAB_004d519d:
    bVar2 = FUN_004d16ec(*param_1);
    if ((bVar2) && (uVar5 = FUN_004d1688(*param_1), (uVar5 & 0x10) != 0)) {
      do {
        iVar4 = iVar4 + -1;
        if (iVar4 < 0) goto LAB_004d520c;
        local_5c = FUN_004d0a2c();
        piVar7 = &local_5c;
        uVar3 = FUN_004d4c8c(*param_1);
        piVar6 = (int *)FUN_004d1758(*param_1);
        local_58 = FUN_004d34bc(piVar6,uVar3);
        bVar2 = FUN_004d1694(&local_58,piVar7);
      } while (!bVar2);
      local_4c = 1;
    }
LAB_004d520c:
    bVar2 = FUN_004d16ec(*param_1);
    if (bVar2) {
      local_64 = FUN_004d0a2c();
      piVar7 = &local_64;
      piVar6 = (int *)FUN_004d1758(*param_1);
      local_60 = FUN_004d34bc(piVar6,param_2);
      bVar2 = FUN_004d1694(&local_60,piVar7);
      if (bVar2) {
        local_4c = 1;
      }
    }
    bVar2 = FUN_004d16ec(*param_1);
    if ((bVar2) && (uVar5 = FUN_004d1688(*param_1), (uVar5 & 0x20) != 0)) {
      do {
        iVar4 = iVar4 + -1;
        if (iVar4 < 0) goto LAB_004d52ca;
        local_6c = FUN_004d0a2c();
        piVar7 = &local_6c;
        uVar3 = FUN_004d4c8c(*param_1);
        piVar6 = (int *)FUN_004d1758(*param_1);
        local_68 = FUN_004d34bc(piVar6,uVar3);
        bVar2 = FUN_004d1694(&local_68,piVar7);
      } while (!bVar2);
      local_4c = 1;
    }
LAB_004d52ca:
    FUN_004d4954(*param_1,0);
  }
  local_2c = local_2c + -1;
  FUN_00484c30(local_24,2);
  local_38 = 0;
  if (local_4c != 0) {
    FUN_004d1084(*param_1,local_4c);
  }
  *in_FS_OFFSET = local_48;
  return param_1;
}

