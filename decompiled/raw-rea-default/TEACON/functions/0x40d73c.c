// rea decompile_all
// name: FUN_0040d73c
// address: 0x40d73c
// body: available
// range: 0x40d73c-0x40d841 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __cdecl FUN_0040d73c(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  byte *local_c;
  char local_5;
  
  FUN_0040da78();
  if (*(int *)(param_1 + 0x1128) == 0) {
LAB_0040d80f:
    iVar2 = (**(code **)(param_1 + 0x114c))
                      (param_1,*(int *)(param_1 + 0x1010) + 3,param_2,0,
                       *(undefined4 *)(param_1 + 0x1140),*(undefined4 *)(param_1 + 0x113c));
    return iVar2 != 0;
  }
  pcVar3 = (char *)(param_2 + 0x80);
  pbVar4 = (byte *)(param_2 + 0x100);
  local_5 = '\0';
  local_c = (byte *)(param_2 + 1000);
LAB_0040d77b:
  bVar1 = *local_c;
  if (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x112c) + 0xc) + *(int *)(param_1 + 0x1130) * 4)
               + 8 + (uint)bVar1 * 8) == 0xff) {
    if ((pcVar3 == (char *)(param_2 + *(int *)(param_1 + 0x113c) + 0x80U)) &&
       ((bVar1 == 0 || (bVar1 == 0x20)))) {
      *pcVar3 = local_5;
LAB_0040d80c:
      *pbVar4 = 0;
      goto LAB_0040d80f;
    }
    if (*(char *)(param_1 + 0x1025 + (uint)bVar1) == -1) {
      *pbVar4 = bVar1;
      pbVar4 = pbVar4 + 1;
      local_5 = local_5 + '\x01';
    }
  }
  else {
    *pbVar4 = bVar1;
    pbVar4 = pbVar4 + 1;
    *pcVar3 = local_5;
    pcVar3 = pcVar3 + 1;
    if ((char *)(param_2 + *(int *)(param_1 + 0x113c) + 0x80U) < pcVar3) goto LAB_0040d80c;
  }
  local_c = local_c + 1;
  goto LAB_0040d77b;
}

