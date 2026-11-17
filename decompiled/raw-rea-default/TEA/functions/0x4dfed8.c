// rea decompile_all
// name: FUN_004dfed8
// address: 0x4dfed8
// body: available
// range: 0x4dfed8-0x4e0049 inclusive
// range: 0x4e004f-0x4e009d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl
FUN_004dfed8(undefined *param_1,undefined *param_2,undefined4 param_3,uint param_4,int param_5,
            int *param_6,int *param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  iVar5 = 0;
  bVar6 = false;
  local_c = 0;
  local_10 = 1;
  local_14 = 0;
  local_18 = 0;
  iVar1 = local_c;
LAB_004dff00:
  do {
    local_c = iVar1;
    iVar1 = local_c + 1;
    uVar2 = (*(code *)param_1)();
    if (iVar5 == 0) {
      if (((-1 < (int)uVar2) && ((int)uVar2 < 0x80)) && (iVar3 = FUN_004e5b18(uVar2), iVar3 != 0))
      goto LAB_004dff00;
      iVar5 = 1;
    }
    iVar3 = param_5 + -1;
    if (iVar3 < 0) goto LAB_004e004f;
    if ((iVar5 != 1) || ((iVar5 = 2, uVar2 != 0x2b && (uVar2 != 0x2d)))) {
      if (iVar5 == 2) {
        iVar5 = 3;
        if ((uVar2 == 0x30) && ((local_18 = 1, param_4 == 0 || (param_4 == 0x10)))) {
          iVar1 = local_c + 2;
          uVar2 = (*(code *)param_1)();
          param_5 = param_5 + -2;
          if (param_5 < 0) goto LAB_004e004f;
          if ((uVar2 == 0x78) || (uVar2 == 0x58)) {
            param_4 = 0x10;
            goto LAB_004dff00;
          }
          iVar3 = param_5;
          if (param_4 == 0) {
            param_4 = 8;
          }
        }
        local_c = iVar1;
        param_5 = iVar3;
        iVar3 = param_5;
        iVar1 = local_c;
        if (param_4 == 0) {
          param_4 = 10;
        }
        else if (((int)param_4 < 1) || (0x24 < (int)param_4)) goto LAB_004e004f;
      }
      local_c = iVar1;
      param_5 = iVar3;
      iVar1 = local_c;
      if (iVar5 == 3) {
        if (((int)uVar2 < 0x30) || (0x39 < (int)uVar2)) {
          if (((int)uVar2 < 0x61) || (0x7a < (int)uVar2)) {
            if (((int)uVar2 < 0x41) || (0x5a < (int)uVar2)) goto LAB_004e004f;
            local_1c = uVar2 - 0x37;
          }
          else {
            local_1c = uVar2 - 0x57;
          }
        }
        else {
          local_1c = uVar2 - 0x30;
        }
        if ((int)param_4 <= local_1c) goto LAB_004e004f;
        local_18 = local_18 + 1;
        uVar4 = local_14 * param_4 + local_1c;
        bVar7 = local_14 != (uVar4 - local_1c) / param_4;
        local_14 = uVar4;
        if (bVar7) {
          local_10 = 2;
          if (bVar6) {
            local_14 = 0x80000000;
          }
          else {
            local_14 = 0x7fffffff;
          }
LAB_004e004f:
          local_c = iVar1;
          if (local_10 != 2) {
            (*(code *)param_2)();
            local_c = local_c + -1;
            if (bVar6) {
              local_14 = -local_14;
            }
          }
          if (local_18 == 0) {
            if (uVar2 == 0xffffffff) {
              local_10 = -1;
            }
            else {
              local_10 = 0;
            }
          }
          *param_7 = local_10;
          *param_6 = *param_6 + local_c;
          return local_14;
        }
      }
      goto LAB_004dff00;
    }
    bVar6 = uVar2 == 0x2d;
    param_5 = iVar3;
  } while( true );
}

