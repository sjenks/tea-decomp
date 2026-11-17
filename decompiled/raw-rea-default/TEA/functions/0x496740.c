// rea decompile_all
// name: FUN_00496740
// address: 0x496740
// body: available
// range: 0x496740-0x4968ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_00496740(int param_1,ushort param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  ushort uVar5;
  HMODULE hModule;
  int iVar6;
  HRSRC hResInfo;
  ushort local_e;
  byte *local_c;
  HGLOBAL local_8;
  
  if (*(short *)(param_1 + 0xe) == -1) {
    local_8 = *(HGLOBAL *)(param_1 + 0x15);
    *(ushort *)(param_1 + 0xe) = param_2;
  }
  else {
    if ((*(char *)(param_1 + 0x14) == '\x02') && (iVar6 = FUN_00496a1c(param_2), iVar6 != 0)) {
      return *(int *)(param_1 + 4);
    }
    if (param_2 == *(ushort *)(param_1 + 0xc)) {
      return param_1 + 0x15;
    }
    if (param_2 == *(ushort *)(param_1 + 0xe)) {
      if (*(short *)(param_1 + 0xc) != -1) {
        return param_1 + 0x15;
      }
      if (*(char *)(param_1 + 0x14) == '\x02') {
        return *(int *)(param_1 + 4);
      }
      return 0;
    }
    hResInfo = *(HRSRC *)(param_1 + 0x10);
    hModule = DAT_005077bc;
    if (DAT_005077bc == (HMODULE)0x0) {
      iVar6 = 0;
      puVar3 = (undefined4 *)FUN_00487bc0();
      iVar6 = FUN_00487e08(puVar3,iVar6);
      hModule = *(HMODULE *)(iVar6 + 0xc);
    }
    local_8 = LoadResource(hModule,hResInfo);
    if (local_8 == (HGLOBAL)0x0) {
      return *(int *)(param_1 + 4);
    }
  }
  pbVar4 = LockResource(local_8);
  local_c = (byte *)0x0;
  local_e = 0xffff;
  while (bVar1 = *pbVar4, uVar5 = local_e, pbVar2 = local_c, bVar1 != 0) {
    if (bVar1 < 0x21) {
      uVar5 = (bVar1 - 1) * 0x400 | (ushort)pbVar4[1];
      pbVar4 = pbVar4 + 2;
    }
    else {
      local_e = DAT_00507894;
      uVar5 = DAT_00507894;
      local_c = pbVar4;
    }
    pbVar2 = pbVar4;
    if (param_2 == uVar5) break;
    if (((char)uVar5 == (char)param_2) &&
       (((char)local_e != (char)param_2 || (uVar5 == (param_2 & 0xff))))) {
      local_e = uVar5;
      local_c = pbVar4;
    }
    for (; 0x1f < *pbVar4; pbVar4 = pbVar4 + 1) {
    }
  }
  local_c = pbVar2;
  local_e = uVar5;
  if (local_c == (byte *)0x0) {
    if (*(char *)(param_1 + 0x14) == '\x02') {
      iVar6 = *(int *)(param_1 + 4);
    }
    else {
      iVar6 = 0;
    }
  }
  else {
    for (; *local_c < 0x20; local_c = local_c + 2) {
    }
    if (*(ushort *)(param_1 + 0xc) != local_e) {
      pbVar4 = (byte *)(param_1 + 0x15);
      for (; 0x1f < *local_c; local_c = local_c + 1) {
        *pbVar4 = *local_c;
        pbVar4 = pbVar4 + 1;
      }
      *pbVar4 = 0;
      *(ushort *)(param_1 + 0xc) = local_e;
      if (param_2 != *(ushort *)(param_1 + 0xc)) {
        *(ushort *)(param_1 + 0xe) = param_2;
      }
    }
    iVar6 = param_1 + 0x15;
  }
  FreeResource(local_8);
  return iVar6;
}

