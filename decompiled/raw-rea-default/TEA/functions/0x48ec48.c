// rea decompile_all
// name: FUN_0048ec48
// address: 0x48ec48
// body: available
// range: 0x48ec48-0x48ed24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_0048ec48(int *param_1,LPCSTR param_2,char *param_3)

{
  int iVar1;
  uint *puVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 local_108;
  uint local_8;
  
  local_8 = 0;
  iVar1 = (**(code **)(*param_1 + 4))();
  if (iVar1 == 0) {
    pcVar3 = (char *)0x0;
  }
  else {
    puVar2 = (uint *)(**(code **)(*param_1 + 4))();
    pcVar3 = FUN_004dc9f4(puVar2);
  }
  if (param_2 == (LPCSTR)0x0) {
    param_2 = PTR_s_Unhandled_Exception_00506258;
  }
  if (pcVar3 == (char *)0x0) {
    FUN_004dc9c4((char *)&local_108,s_Unknown_Exception_00506270);
    pcVar3 = FUN_004dc9f4(&local_108);
  }
  else {
    pcVar4 = (char *)(**(code **)(*param_1 + 4))();
    FUN_004dc9c4((char *)&local_108,pcVar4);
  }
  if (param_3 != (char *)0x0) {
    local_8 = 4;
    *(char *)((int)&local_108 + (int)pcVar3) = '\n';
    FUN_004dc9c4(pcVar3 + (int)&local_108 + 1,param_3);
  }
  uVar5 = FUN_0048ebe4();
  iVar1 = MessageBoxExA((HWND)0x0,(LPCSTR)&local_108,param_2,uVar5 | local_8 | 0x10,0);
  if (iVar1 == 6) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}

