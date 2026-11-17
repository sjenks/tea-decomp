// rea decompile_all
// name: FUN_004b560c
// address: 0x4b560c
// body: available
// range: 0x4b560c-0x4b56f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004b560c(int *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  undefined4 in_EAX;
  undefined3 uVar5;
  undefined4 uVar4;
  int iVar6;
  char *pcVar7;
  CHAR *pCVar8;
  CHAR local_108 [260];
  
  if ((param_2 != (uint *)0x0) && (param_2 == *(uint **)((int)param_1 + 0x2e))) {
    uVar5 = (undefined3)((uint)in_EAX >> 8);
    goto LAB_004b56ec;
  }
  FUN_004cc0cc();
  if ((param_2 == (uint *)0x0) || ((char)*param_2 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00496d48(param_2);
  }
  *(undefined4 *)((int)param_1 + 0x2e) = uVar4;
  pcVar7 = s_Unknown_0050dd58;
  pCVar8 = local_108;
  for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pCVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pCVar8 = pCVar8 + 4;
  }
  if (*(int *)((int)param_1 + 0x2e) == 0) {
LAB_004b5686:
    iVar6 = FUN_004c0cd4(*(int *)(*(int *)((int)param_1 + 0xe) + 0x20) + 4,0x7ef7,local_108,0x104);
    if ((*(byte *)(*(int *)((int)param_1 + 0xe) + 0x18) & 2) != 0) {
      iVar2 = *(int *)((int)param_1 + 0xe);
      piVar1 = (int *)(iVar2 + 0xc);
      *piVar1 = *piVar1 + 1;
      wsprintfA(local_108 + iVar6,&DAT_0050dea0,*(undefined4 *)(iVar2 + 0xc));
    }
  }
  else {
    sVar3 = FUN_0048c314();
    if (sVar3 != 0) goto LAB_004b5686;
  }
  uVar4 = (**(code **)(*param_1 + 0x24))();
  uVar5 = (undefined3)((uint)uVar4 >> 8);
LAB_004b56ec:
  return CONCAT31(uVar5,1);
}

