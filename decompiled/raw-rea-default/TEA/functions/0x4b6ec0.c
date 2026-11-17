// rea decompile_all
// name: FUN_004b6ec0
// address: 0x4b6ec0
// body: available
// range: 0x4b6ec0-0x4b7023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004b6ec0(int *param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  bool bVar2;
  WPARAM WVar3;
  WPARAM WVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  uint uVar9;
  int iVar11;
  WPARAM WVar12;
  int local_8;
  int iVar10;
  
  local_8 = 0;
  if (param_3 <= param_4) {
    bVar1 = true;
    WVar3 = FUN_004a76a8(*param_1,0xc9,param_3,0);
    WVar4 = FUN_004a76a8(*param_1,0xc9,param_4,0);
    iVar5 = FUN_004a76a8(*param_1,0xbb,WVar3,0);
    iVar6 = FUN_004a76a8(*param_1,0xbb,WVar4,0);
    WVar12 = WVar3;
    while (((int)WVar12 <= (int)WVar4 && (bVar1))) {
      iVar7 = FUN_004b6ae8(param_1,WVar12);
      puVar8 = (undefined2 *)FUN_004cc180();
      iVar11 = param_3 - iVar5;
      if (WVar12 != WVar3) {
        iVar11 = 0;
      }
      iVar10 = iVar7;
      if ((WVar12 == WVar4) && (iVar10 = param_4 - iVar6, iVar7 < (int)(param_4 - iVar6))) {
        iVar10 = iVar7;
      }
      uVar9 = iVar10 - iVar11;
      bVar2 = FUN_004b6b2c(param_1,puVar8,iVar7 + 2,WVar12);
      if (bVar2) {
        if (0 < (int)uVar9) {
          FUN_004dc7d4((undefined4 *)(param_2 + local_8),(undefined4 *)((int)puVar8 + iVar11),uVar9)
          ;
          local_8 = local_8 + uVar9;
        }
        if (WVar12 != WVar4) {
          *(undefined1 *)(param_2 + local_8) = 0xd;
          *(undefined1 *)(param_2 + local_8 + 1) = 10;
          local_8 = local_8 + 2;
        }
      }
      else {
        bVar1 = false;
      }
      FUN_004cc0cc();
      WVar12 = WVar12 + 1;
    }
  }
  *(undefined1 *)(param_2 + local_8) = 0;
  return;
}

