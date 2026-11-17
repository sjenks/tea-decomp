// rea decompile_all
// name: FUN_004a5e38
// address: 0x4a5e38
// body: available
// range: 0x4a5e38-0x4a5ee2 inclusive
// range: 0x4a5ee8-0x4a6090 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_004a5e38(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_20;
  uint local_1c [3];
  int local_10;
  undefined *local_c;
  uint local_8;
  
  if (param_2 == 0x7fff) {
    (**(code **)(param_1[2] + 0x50))();
    uVar2 = 0;
  }
  else if (param_2 == 0x111) {
    uVar2 = (**(code **)(param_1[2] + 0x48))();
  }
  else if (param_2 == 0x4e) {
    if (DAT_0050abed == '\0') {
      _DAT_0051b649 = 0;
      _DAT_0051b651 = 0;
      DAT_0050abed = '\x01';
    }
    _DAT_0051b64d = 0xffffffff;
    uVar2 = (**(code **)(param_1[2] + 0x4c))();
  }
  else {
    if (*(int *)((int)param_1 + 0x82) == 0) {
      if (param_1 == (undefined4 *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = param_1[2];
      }
      puVar3 = FUN_004dd5cc((int)param_1,iVar4,0x40299c);
      *(undefined4 *)((int)param_1 + 0x82) = puVar3[1];
    }
    local_8 = (*(uint *)((int)param_1 + 0x82) ^ param_2) % 0x1f;
    local_1c[0] = param_2;
    local_1c[1] = 0;
    local_10 = 0;
    local_c = FUN_004a486b();
    uVar2 = FUN_004a5dd0((int)local_c,local_8,param_2,*(int *)((int)param_1 + 0x82));
    if ((char)uVar2 == '\0') {
      cVar1 = (**(code **)(param_1[2] + 0x84))();
      if (cVar1 != '\0') {
        FUN_004a5da0((int)local_c,local_8,*(undefined4 *)((int)param_1 + 0x82),param_2,local_10,
                     local_1c[2] - (int)param_1);
        uVar2 = FUN_0048e7e0(*param_1,(int)local_1c);
        return uVar2;
      }
      FUN_004a5da0((int)local_c,local_8,*(undefined4 *)((int)param_1 + 0x82),param_2,0,0);
    }
    else {
      local_10 = *(int *)(local_c + local_8 * 0x10 + 4);
      if (local_10 != 0) {
        local_1c[2] = *(int *)(local_c + local_8 * 0x10 + 0xc) + (int)param_1;
        uVar2 = FUN_0048e7e0(*param_1,(int)local_1c);
        return uVar2;
      }
    }
    if ((*(byte *)(param_1 + 0x1d) & 0x10) != 0) {
      local_2c = param_2;
      local_28 = param_3;
      local_20 = 0;
      cVar1 = (**(code **)(*(int *)(param_1[0x1b] + 0x1b) + 0x2c))();
      if (cVar1 != '\0') {
        uVar2 = FUN_0048e7e0(*(undefined4 *)param_1[0x1b],(int)&local_2c);
        return uVar2;
      }
      cVar1 = (**(code **)(*(int *)(param_1[0x1b] + 0x1b) + 0x2c))();
      if (cVar1 != '\0') {
        uVar2 = FUN_0048e7e0(*(undefined4 *)param_1[0x1b],(int)local_1c);
        return uVar2;
      }
    }
    uVar2 = (**(code **)(param_1[2] + 0x44))();
  }
  return uVar2;
}

