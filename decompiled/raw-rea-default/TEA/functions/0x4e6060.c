// rea decompile_all
// name: FUN_004e6060
// address: 0x4e6060
// body: available
// range: 0x4e6060-0x4e6241 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004e6060(undefined1 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *local_c;
  undefined1 *local_8;
  
  do {
    if (param_2 < 3) {
      if (param_2 == 2) {
        puVar4 = param_1 + DAT_0051c404;
        iVar1 = (*DAT_0051c400)();
        if (0 < iVar1) {
          FUN_004e6038(param_1,puVar4);
        }
      }
      return;
    }
    puVar4 = param_1 + (param_2 - 1) * DAT_0051c404;
    puVar3 = param_1 + (param_2 >> 1) * DAT_0051c404;
    iVar1 = (*DAT_0051c400)();
    if (0 < iVar1) {
      FUN_004e6038(puVar3,puVar4);
    }
    iVar1 = (*DAT_0051c400)();
    if (iVar1 < 1) {
      iVar1 = (*DAT_0051c400)();
      if (0 < iVar1) {
        FUN_004e6038(param_1,puVar4);
      }
    }
    else {
      FUN_004e6038(puVar3,param_1);
    }
    if (param_2 == 3) {
      FUN_004e6038(param_1,puVar3);
      return;
    }
    puVar3 = param_1 + DAT_0051c404;
    local_8 = puVar3;
    do {
      while (iVar1 = (*DAT_0051c400)(), iVar1 < 1) {
        if (iVar1 == 0) {
          FUN_004e6038(puVar3,local_8);
          local_8 = local_8 + DAT_0051c404;
        }
        if (puVar4 <= puVar3) goto LAB_004e61a7;
        puVar3 = puVar3 + DAT_0051c404;
      }
      for (; puVar3 < puVar4; puVar4 = puVar4 + -DAT_0051c404) {
        iVar1 = (*DAT_0051c400)();
        if (-1 < iVar1) {
          FUN_004e6038(puVar3,puVar4);
          if (iVar1 != 0) {
            puVar3 = puVar3 + DAT_0051c404;
            puVar4 = puVar4 + -DAT_0051c404;
          }
          break;
        }
      }
    } while (puVar3 < puVar4);
LAB_004e61a7:
    iVar1 = (*DAT_0051c400)();
    if (iVar1 < 1) {
      puVar3 = puVar3 + DAT_0051c404;
    }
    puVar4 = param_1;
    for (local_c = puVar3 + -DAT_0051c404; (puVar4 < local_8 && (local_8 <= local_c));
        local_c = local_c + -DAT_0051c404) {
      FUN_004e6038(puVar4,local_c);
      puVar4 = puVar4 + DAT_0051c404;
    }
    uVar2 = (uint)((int)puVar3 - (int)local_8) / DAT_0051c404;
    param_2 = (uint)(param_1 + (param_2 * DAT_0051c404 - (int)puVar3)) / DAT_0051c404;
    if (param_2 < uVar2) {
      FUN_004e6060(puVar3,param_2);
      param_2 = uVar2;
    }
    else {
      FUN_004e6060(param_1,uVar2);
      param_1 = puVar3;
    }
  } while( true );
}

