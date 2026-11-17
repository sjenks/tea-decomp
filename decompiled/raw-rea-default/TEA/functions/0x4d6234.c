// rea decompile_all
// name: FUN_004d6234
// address: 0x4d6234
// body: available
// range: 0x4d6234-0x4d634c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004d6234(int param_1,uint param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_15c [16];
  undefined1 local_14c [240];
  int local_5c;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  FUN_004dce64(0x515350);
  if (param_2 == DAT_005140ac) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 1;
    puVar6 = &LAB_00408370;
    uVar5 = 0;
    local_40 = 0x14;
    FUN_004ceae8(local_58);
    puVar1 = FUN_004dc320(local_14c,PTR_s_invalid_string_size_parameter_in_00516d20);
    puVar2 = (uint *)FUN_004cf594(puVar1);
    FUN_004cf628((int)local_2c,puVar2);
    local_34 = local_34 + 1;
    FUN_004cff14(local_1c,(int)local_2c);
    local_34 = local_34 + 3;
    FUN_00402880((int)local_2c,2);
    local_40 = 8;
    FUN_004e7cc4((uint *)&DAT_00408314,local_1c,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
  }
  piVar3 = FUN_004cf7b0(param_1,param_2,param_2);
  local_5c = FUN_004cfaa0((int)piVar3);
  FUN_004cea90((int)local_15c,param_1,&local_5c);
  while (param_2 != 0) {
    puVar1 = &stack0x0000000c;
    iVar4 = FUN_004ce924(param_1);
    FUN_004cf608((undefined1 *)(iVar4 + (param_2 - 1)),puVar1);
    param_2 = param_2 - 1;
  }
  *in_FS_OFFSET = local_50;
  return;
}

