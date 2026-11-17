// rea decompile_all
// name: FUN_004b662c
// address: 0x4b662c
// body: available
// range: 0x4b662c-0x4b671e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004b662c(int *param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  char *local_c;
  
  if ((param_2 == 9) && (cVar3 = FUN_004b7060(param_1,'\0'), cVar3 == '\0')) {
    FUN_004b6920(param_1);
    return;
  }
  if ((param_1[6] == 0) || ((*(byte *)(param_1[6] + 4) & 4) == 0)) {
    FUN_004a5774(*param_1);
    return;
  }
  (**(code **)(param_1[3] + 0x34))();
  pcVar4 = (char *)GetWindowTextLengthA(*(HWND *)(*param_1 + 0xc));
  FUN_004a5774(*param_1);
  if (pcVar4 == local_c) {
    return;
  }
  (**(code **)(param_1[3] + 0x34))();
  puVar5 = (uint *)FUN_004b6ba0(param_1,0);
  puVar6 = puVar5;
  pcVar4 = FUN_004dc9f4(puVar5);
  if (pcVar4 == local_c) {
    piVar1 = (int *)param_1[6];
    cVar3 = (**(code **)(*piVar1 + 8))(piVar1,*piVar1,puVar6,piVar1,puVar5,0);
    if (cVar3 == '\0') {
      bVar2 = true;
      goto LAB_004b66f0;
    }
  }
  bVar2 = false;
LAB_004b66f0:
  FUN_004b6c5c(param_1,(LPCSTR)puVar5,'\0');
  if (bVar2) {
    (**(code **)(*(int *)param_1[6] + 4))();
  }
  return;
}

