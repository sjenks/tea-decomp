// rea decompile_all
// name: FUN_004e28d4
// address: 0x4e28d4
// body: available
// range: 0x4e28d4-0x4e2a52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __cdecl FUN_004e28d4(LCID param_1,undefined2 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  int iVar19;
  undefined **ppuVar20;
  undefined4 local_34 [12];
  
  ppuVar20 = &PTR_DAT_0051877c;
  puVar18 = local_34;
  for (iVar19 = 0xc; iVar19 != 0; iVar19 = iVar19 + -1) {
    *puVar18 = *ppuVar20;
    ppuVar20 = ppuVar20 + 1;
    puVar18 = puVar18 + 1;
  }
  uVar1 = FUN_004e2734(param_1,0x16,(undefined4 *)(param_2 + 0xc));
  uVar2 = FUN_004e2734(param_1,0x17,(undefined4 *)(param_2 + 10));
  uVar3 = FUN_004e2734(param_1,0x14,(undefined4 *)(param_2 + 0xe));
  uVar4 = FUN_004e2734(param_1,0x15,(undefined4 *)(param_2 + 0x10));
  uVar5 = FUN_004e2734(param_1,0x18,(undefined4 *)(param_2 + 0x12));
  uVar6 = FUN_004e2734(param_1,0x50,(undefined4 *)(param_2 + 0x14));
  uVar7 = FUN_004e2734(param_1,0x51,(undefined4 *)(param_2 + 0x16));
  uVar8 = FUN_004e2790(param_1,0x19,param_2,3);
  uVar9 = FUN_004e2790(param_1,0x1a,param_2 + 1,3);
  uVar10 = FUN_004e2790(param_1,0x1b,param_2 + 2,2);
  uVar11 = FUN_004e2790(param_1,0x1c,param_2 + 3,3);
  uVar12 = FUN_004e2790(param_1,0x52,param_2 + 4,2);
  uVar13 = FUN_004e2790(param_1,0x53,param_2 + 5,3);
  uVar14 = FUN_004e2790(param_1,0x54,param_2 + 6,2);
  uVar15 = FUN_004e2790(param_1,0x55,param_2 + 7,2);
  uVar16 = FUN_004e2790(param_1,0x56,param_2 + 8,2);
  uVar17 = FUN_004e2790(param_1,0x57,param_2 + 9,2);
  puVar18 = FUN_004dcbc4((uint *)local_34[(short)param_2[3]]);
  *(undefined4 **)(param_2 + 0x18) = puVar18;
  return (uVar1 & 1 & uVar2 & uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 &
          uVar11 & uVar12 & uVar13 & uVar14 & uVar15 & uVar16 & uVar17) != 0;
}

