// rea decompile_all
// name: FUN_004d49a4
// address: 0x4d49a4
// body: available
// range: 0x4d49a4-0x4d4b65 inclusive
// range: 0x4d4bb4-0x4d4bdf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_004d49a4(int *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *in_FS_OFFSET;
  char *pcVar9;
  int local_70 [2];
  char local_65;
  undefined4 *local_64;
  uint local_60;
  int local_5c;
  char local_55;
  undefined4 *local_54;
  uint local_50;
  int local_4c;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  undefined4 local_24 [8];
  
  FUN_004dce64(0x514ce0);
  local_50 = 0;
  local_38 = 0x14;
  FUN_004d1504(local_24,param_1,'\x01');
  local_2c = local_2c + 1;
  local_38 = 0x20;
  cVar1 = FUN_004d4740((int)local_24);
  if (cVar1 != '\0') {
    piVar4 = (int *)FUN_004d1758(*param_1);
    local_4c = FUN_004d1804(piVar4);
    uVar7 = 0;
    puVar5 = (undefined4 *)FUN_004cc180();
    local_55 = '\0';
    uVar6 = 0x20;
    local_54 = puVar5;
    while( true ) {
      local_5c = FUN_004d0a2c();
      bVar2 = FUN_004d1694(&local_4c,&local_5c);
      if (bVar2) break;
      uVar8 = uVar6;
      if (uVar6 == uVar7) {
        uVar8 = uVar6 * 2;
        local_38 = 0x20;
        local_60 = uVar6;
        local_64 = (undefined4 *)FUN_004cc180();
        FUN_004cff5c(local_64,puVar5,local_60);
        FUN_004cc0cc();
        local_54 = (undefined4 *)(uVar7 + (int)local_64);
        puVar5 = local_64;
      }
      pcVar9 = &stack0x0000000c;
      local_65 = FUN_004d2f44((undefined1 *)&local_4c);
      bVar2 = FUN_004cf5f0(&local_65,pcVar9);
      if (bVar2) {
        local_55 = '\x01';
        break;
      }
      uVar7 = uVar7 + 1;
      uVar6 = FUN_004d4968();
      if (uVar7 == uVar6) {
        local_50 = local_50 | 4;
        break;
      }
      uVar3 = FUN_004d2f44((undefined1 *)&local_4c);
      *(undefined1 *)local_54 = uVar3;
      local_54 = (undefined4 *)((int)local_54 + 1);
      piVar4 = (int *)FUN_004d1758(*param_1);
      local_4c = FUN_004d1804(piVar4);
      uVar6 = uVar8;
    }
    local_70[1] = 0;
    uVar3 = FUN_004d2f44((undefined1 *)(local_70 + 1));
    *(undefined1 *)local_54 = uVar3;
    FUN_004d4978(param_2,(uint)puVar5,uVar7);
    FUN_004cc0cc();
    local_70[0] = FUN_004d0a2c();
    bVar2 = FUN_004d1694(&local_4c,local_70);
    if (bVar2) {
      local_50 = local_50 | 2;
    }
    if ((uVar7 == 0) && (local_55 == '\0')) {
      local_50 = local_50 | 4;
    }
  }
  local_2c = local_2c + -1;
  FUN_004d1860((int)local_24,2);
  local_38 = 0;
  if (local_50 != 0) {
    FUN_004d1084(*param_1,local_50);
  }
  *in_FS_OFFSET = local_48;
  return param_1;
}

