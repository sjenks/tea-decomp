// rea decompile_all
// name: FUN_004e69f8
// address: 0x4e69f8
// body: available
// range: 0x4e69f8-0x4e6b41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall FUN_004e69f8(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  
  if (DAT_0051c41c == (undefined4 *)0x0) {
    if ((DAT_0051c43c == (uint *)0x0) &&
       (DAT_0051c43c = (uint *)GetEnvironmentStrings(), DAT_0051c43c == (uint *)0x0)) {
      FUN_004e5f84((uint *)s_GetEnvironmentStrings_failed_00518d38);
    }
    pcVar6 = (char *)0x0;
    iVar8 = 0;
    puVar4 = DAT_0051c43c;
    while (pcVar1 = FUN_004dc9f4(puVar4), pcVar1 != (char *)0x0) {
      iVar8 = iVar8 + 1;
      pcVar6 = pcVar6 + (int)(pcVar1 + 1);
      puVar4 = (uint *)((int)puVar4 + (int)(pcVar1 + 1));
    }
    DAT_0051c420 = (uint *)FUN_004cc734();
    if (DAT_0051c420 == (uint *)0x0) {
      return 0;
    }
    FUN_004dc7d4(DAT_0051c420,DAT_0051c43c,(uint)(pcVar6 + 1));
  }
  else {
    iVar8 = 0;
    for (puVar2 = DAT_0051c41c; (uint *)*puVar2 != (uint *)0x0; puVar2 = puVar2 + 1) {
      pcVar6 = FUN_004dc9f4((uint *)*puVar2);
      if (pcVar6 == (char *)0x0) {
        iVar8 = iVar8 + -1;
      }
      iVar8 = iVar8 + 1;
    }
  }
  _DAT_0051c424 = iVar8 + 4;
  puVar2 = FUN_004cc090(iVar8 + 5,4);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = DAT_0051c41c;
    puVar4 = DAT_0051c420;
    puVar7 = puVar2;
    if (DAT_0051c41c == (undefined4 *)0x0) {
      while (pcVar6 = FUN_004dc9f4(puVar4), pcVar6 != (char *)0x0) {
        *puVar7 = puVar4;
        puVar4 = (uint *)((int)puVar4 + (int)(pcVar6 + 1));
        puVar7 = puVar7 + 1;
      }
    }
    else {
      for (; (uint *)*puVar5 != (uint *)0x0; puVar5 = puVar5 + 1) {
        pcVar6 = FUN_004dc9f4((uint *)*puVar5);
        if (pcVar6 == (char *)0x0) {
          puVar7 = puVar7 + -1;
        }
        else {
          *puVar7 = *puVar5;
        }
        puVar7 = puVar7 + 1;
      }
    }
    if (DAT_0051c41c != (undefined4 *)0x0) {
      FUN_004cc744();
    }
    uVar3 = 1;
    DAT_0051c41c = puVar2;
  }
  return uVar3;
}

