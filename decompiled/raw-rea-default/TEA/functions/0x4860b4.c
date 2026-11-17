// rea decompile_all
// name: FUN_004860b4
// address: 0x4860b4
// body: available
// range: 0x4860b4-0x486229 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl FUN_004860b4(byte *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *pcVar6;
  int local_8;
  
  DAT_0051aeb4 = 0;
  _DAT_0051aeb0 = 0;
  for (pbVar4 = PTR_s_TEAWIN_00503a90; *pbVar4 != 0; pbVar4 = pbVar4 + 1) {
    FUN_0048622c(*pbVar4,&DAT_0051aeb0,&DAT_00503a88);
  }
  local_8 = 0;
  for (pbVar4 = param_1; *pbVar4 != 0; pbVar4 = pbVar4 + 1) {
  }
  while (param_1 < pbVar4) {
    pbVar4 = pbVar4 + -1;
    bVar3 = *pbVar4;
    uVar2 = (uint)bVar3;
    iVar1 = FUN_004e1394((uint)bVar3);
    if (iVar1 != 0) {
      uVar2 = FUN_004e3054((uint)bVar3);
    }
    iVar1 = FUN_004e1310(uVar2 & 0xff);
    if (iVar1 != 0) {
      local_8 = local_8 + 1;
      FUN_0048622c((byte)uVar2,&DAT_0051aeb0,&DAT_00503a88);
    }
  }
  pbVar4 = param_1;
  pcVar6 = param_2;
  if (0 < local_8) {
    do {
      do {
        while (pbVar5 = pbVar4, *pbVar5 != 0) {
          pbVar4 = pbVar5 + 1;
        }
        pbVar4 = param_1;
      } while (pbVar5 <= param_1);
      do {
        pbVar5 = pbVar5 + -1;
        bVar3 = *pbVar5;
        uVar2 = (uint)bVar3;
        iVar1 = FUN_004e1394((uint)bVar3);
        if (iVar1 != 0) {
          uVar2 = FUN_004e3054((uint)bVar3);
        }
        iVar1 = FUN_004e1310(uVar2 & 0xff);
        if (iVar1 != 0) {
          bVar3 = (byte)((char)uVar2 + -0x41 + (char)((ulonglong)DAT_0051aeb4 % 0x1a)) % 0x1a + 0x41
          ;
          if (((uint)bVar3 != (int)*pcVar6) &&
             (uVar2 = FUN_004e3000((uint)bVar3), uVar2 != (int)*pcVar6)) {
            return false;
          }
          pcVar6 = pcVar6 + 1;
          FUN_0048622c(bVar3,&DAT_0051aeb0,&DAT_00503a88);
          if (pcVar6 == param_2 + 10) {
            return *pcVar6 == '\0';
          }
        }
      } while (param_1 < pbVar5);
    } while( true );
  }
  return false;
}

