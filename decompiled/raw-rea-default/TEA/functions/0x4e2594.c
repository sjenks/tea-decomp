// rea decompile_all
// name: FUN_004e2594
// address: 0x4e2594
// body: available
// range: 0x4e2594-0x4e2732 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004e2594(uint *param_1,uint *param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int cchData;
  uint uVar4;
  uint local_204 [128];
  
  GetLocaleInfoA(param_1[1],0x1001,(LPSTR)local_204,0x200);
  FUN_004dc8e8((char *)local_204,&DAT_00518513);
  pcVar1 = FUN_004dc9f4(local_204);
  cchData = 0x200 - (int)pcVar1;
  pcVar1 = FUN_004dc9f4(local_204);
  GetLocaleInfoA(param_1[1],0x1002,pcVar1 + (int)local_204,cchData);
  FUN_004dc8e8((char *)local_204,&DAT_00518515);
  uVar4 = 10;
  pcVar1 = FUN_004dc9f4(local_204);
  thunk_FUN_004e3fb0(*param_1,pcVar1 + (int)local_204,uVar4);
  if (param_1[9] == 0) {
    FUN_004dc9f4(param_2);
    FUN_004dc9f4(local_204);
    puVar2 = (undefined4 *)FUN_004cc734();
    param_1[9] = (uint)puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    pcVar1 = FUN_004dc9f4(param_2);
    pcVar3 = FUN_004dc9f4(local_204);
    FUN_004dc844(puVar2,0,(uint)(pcVar1 + (int)pcVar3 + 3));
  }
  else {
    FUN_004dc9f4((uint *)param_1[9]);
    FUN_004dc9f4(param_2);
    FUN_004dc9f4(local_204);
    uVar4 = FUN_004cc754();
    param_1[9] = uVar4;
    if (param_1[9] == 0) {
      return 0;
    }
  }
  FUN_004dc8e8((char *)param_1[9],(char *)param_2);
  FUN_004dc8e8((char *)param_1[9],&DAT_00518517);
  FUN_004dc8e8((char *)param_1[9],(char *)local_204);
  FUN_004dc8e8((char *)param_1[9],&DAT_00518519);
  return 1;
}

