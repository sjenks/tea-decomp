// rea decompile_all
// name: FUN_004a5774
// address: 0x4a5774
// body: available
// range: 0x4a5774-0x4a5955 inclusive
// range: 0x4a5958-0x4a5965 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004a5774(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint local_3c;
  uint local_38;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  iVar4 = *(int *)(param_1 + 0x6c);
  piVar5 = (int *)(iVar4 + 0x57);
  if (*(int *)(iVar4 + 0x5b) == 0x7fff) {
    if (param_1 != *piVar5) {
      if (*(int *)(param_1 + 0x14) == 0) {
        puVar6 = (undefined4 *)*piVar5;
      }
      else {
        puVar6 = *(undefined4 **)(param_1 + 0x14);
      }
      local_18 = *(undefined4 *)(*(int *)(iVar4 + 99) + 4);
      local_1c = 0x7fff;
      local_10 = 0;
      cVar2 = (**(code **)(puVar6[2] + 0x84))();
      if (cVar2 != '\0') {
        uVar3 = FUN_0048e7e0(*puVar6,(int)&local_1c);
        return uVar3;
      }
    }
    uVar3 = 0;
  }
  else if ((*(int *)(iVar4 + 0x5b) == 0x111) || (*(int *)(iVar4 + 0x5b) == 0x4e)) {
    if (*(int *)(iVar4 + 0x5b) == 0x111) {
      local_8 = *(uint *)(iVar4 + 0x5f) >> 0x10;
      local_c = (uint)*(ushort *)(iVar4 + 0x5f);
      iVar4 = *(int *)(iVar4 + 99);
    }
    else {
      piVar1 = *(int **)(iVar4 + 99);
      local_8 = piVar1[2];
      local_c = piVar1[1];
      if ((piVar1[2] == -0x208) && ((*(byte *)(piVar1 + 0x19) & 1) != 0)) {
        local_c = GetDlgCtrlID((HWND)piVar1[1]);
      }
      iVar4 = *piVar1;
    }
    if (param_1 == *piVar5) {
      if (iVar4 == 0) {
        local_2c = 0;
        local_28 = local_c;
        local_20 = 0;
        puVar6 = *(undefined4 **)(param_1 + 0x6c);
        cVar2 = (**(code **)(*(int *)((int)puVar6 + 0x1b) + 0x2c))();
        if (cVar2 != '\0') {
          FUN_0048e7e0(*puVar6,(int)&local_2c);
          return 0;
        }
      }
      uVar3 = (**(code **)(*(int *)(param_1 + 8) + 0x44))();
    }
    else {
      if (iVar4 == 0) {
        if (*(int *)(param_1 + 0x14) == 0) {
          puVar6 = (undefined4 *)*piVar5;
        }
        else {
          puVar6 = *(undefined4 **)(param_1 + 0x14);
        }
        local_8 = 0;
      }
      else {
        puVar6 = (undefined4 *)*piVar5;
        if (((*(byte *)(puVar6 + 0x1d) & 1) != 0) || (local_c == 0)) {
          uVar3 = (**(code **)(puVar6[2] + 0x44))();
          return uVar3;
        }
      }
      local_3c = local_8;
      local_38 = local_c;
      local_30 = 0;
      cVar2 = (**(code **)(puVar6[2] + 0x84))();
      if (cVar2 == '\0') {
        uVar3 = FUN_004a5774((int)puVar6);
      }
      else {
        uVar3 = FUN_0048e7e0(*puVar6,(int)&local_3c);
      }
    }
  }
  else {
    uVar3 = (**(code **)(*(int *)(param_1 + 8) + 0x44))();
  }
  return uVar3;
}

