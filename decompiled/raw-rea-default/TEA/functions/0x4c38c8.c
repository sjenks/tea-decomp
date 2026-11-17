// rea decompile_all
// name: FUN_004c38c8
// address: 0x4c38c8
// body: available
// range: 0x4c38c8-0x4c3c8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004c38c8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  HINSTANCE hInstance;
  undefined4 *puVar5;
  undefined4 *puVar6;
  HWND hWnd;
  undefined4 local_2c [4];
  undefined4 local_1c [4];
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(char *)(*(int *)((int)param_1 + 0x10e) + 0x48) == '\0') {
    *(code **)((int)param_1 + 0x46) = FUN_004b070c;
    *(code **)((int)param_1 + 0x4a) = FUN_004b070c;
    FUN_004c3e7c(*(int *)((int)param_1 + 0x10e));
    param_1[9] = *(int *)(*(int *)((int)param_1 + 0x10e) + 0x4a);
    param_1[10] = *(int *)(*(int *)((int)param_1 + 0x10e) + 0x4e);
    hWnd = (HWND)0x0;
    if (((*(char *)(*(int *)((int)param_1 + 0x10e) + 0x49) == '\0') &&
        (puVar3 = FUN_0048751c(), 4 < *(uint *)(puVar3 + 4))) &&
       (*(int *)((int)param_1 + 0xb6) == 0)) {
      if (*(int *)(*param_1 + 0x6c) == 0) {
        hInstance = (HINSTANCE)0x0;
      }
      else {
        hInstance = *(HINSTANCE *)(*(int *)(*param_1 + 0x6c) + 0xc);
      }
      hWnd = CreateWindowExA(0,s_STATIC_00510bec,s_STATIC_00510bec + 6,0,0,0,0,0,(HWND)0x0,
                             (HMENU)0x0,hInstance,(LPVOID)0x0);
      *(HWND *)((int)param_1 + 0xb6) = hWnd;
    }
    if (((*(char *)(*(int *)((int)param_1 + 0x10e) + 0x49) == '\0') &&
        (puVar3 = FUN_0048751c(), 4 < *(uint *)(puVar3 + 4))) &&
       (*(int *)((int)param_1 + 0xb6) != 0)) {
      *(undefined4 *)((int)param_1 + 0xba) = *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x4a);
      *(undefined4 *)((int)param_1 + 0xbe) = *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x4e);
      iVar1 = FUN_0048c3cc();
      if (iVar1 == 0) {
        if (((*(byte *)((int)param_1 + 199) & 4) == 0) && (*(int *)((int)param_1 + 0x102) == 0)) {
          *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 4) = 0;
          uVar2 = 2;
        }
        else {
          **(undefined4 **)((int)param_1 + 0x10e) = *(undefined4 *)((int)param_1 + 0xc6);
          *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 4) = 0;
          *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x52) =
               *(undefined4 *)((int)param_1 + 0xc2);
          *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 8) =
               **(undefined4 **)((int)param_1 + 0xda);
          *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0xc) =
               *(undefined4 *)(*(int *)((int)param_1 + 0xda) + 4);
          *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x18) =
               *(undefined4 *)((int)param_1 + 0xe6);
          if (((*(byte *)((int)param_1 + 199) & 4) == 0) && (*(int *)((int)param_1 + 0x102) != 1)) {
            uVar2 = 2;
          }
          else {
            uVar2 = 1;
          }
        }
      }
      else {
        uVar2 = FUN_0048c2ac();
        *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 4) = uVar2;
        uVar2 = 2;
      }
      *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x4a) = *(undefined4 *)((int)param_1 + 0xba);
      *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x4e) = *(undefined4 *)((int)param_1 + 0xbe);
      if (hWnd != (HWND)0x0) {
        DestroyWindow(hWnd);
      }
    }
    else {
      iVar1 = FUN_0048c404();
      if (iVar1 == 0) {
        uVar2 = FUN_0048c2ac();
        *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 4) = uVar2;
        uVar2 = 2;
      }
      else {
        **(int **)((int)param_1 + 0x10e) = param_1[0xc];
        *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 4) = 0;
        *(int *)(*(int *)((int)param_1 + 0x10e) + 0x52) = param_1[0xb];
        *(uint *)(*(int *)((int)param_1 + 0x10e) + 8) = (uint)*(ushort *)(param_1 + 0xd);
        *(uint *)(*(int *)((int)param_1 + 0x10e) + 0xc) = (uint)*(ushort *)((int)param_1 + 0x36);
        *(uint *)(*(int *)((int)param_1 + 0x10e) + 0x18) = (uint)*(ushort *)(param_1 + 0xf);
        uVar2 = 1;
      }
      *(int *)(*(int *)((int)param_1 + 0x10e) + 0x4a) = param_1[9];
      *(int *)(*(int *)((int)param_1 + 0x10e) + 0x4e) = param_1[10];
    }
    FUN_004c3e40(*(int *)((int)param_1 + 0x10e));
  }
  else {
    *(code **)((int)param_1 + 0xa2) = FUN_004b070c;
    *(code **)((int)param_1 + 0xa6) = FUN_004b070c;
    FUN_004c3e7c(*(int *)((int)param_1 + 0x10e));
    *(undefined4 *)((int)param_1 + 0x66) = *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x4a);
    *(undefined4 *)((int)param_1 + 0x6a) = *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x4e);
    iVar1 = FUN_0048c394();
    if (iVar1 == 0) {
      uVar2 = FUN_0048c2ac();
      *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 4) = uVar2;
    }
    else {
      *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x1c) = *(undefined4 *)((int)param_1 + 0x6e);
      *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 4) = 0;
      iVar4 = *(int *)((int)param_1 + 0x10e);
      local_c = *(undefined4 *)((int)param_1 + 0x72);
      local_8 = *(undefined4 *)((int)param_1 + 0x76);
      *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)((int)param_1 + 0x72);
      *(undefined4 *)(iVar4 + 0x24) = local_8;
      puVar5 = (undefined4 *)((int)param_1 + 0x7a);
      puVar6 = local_1c;
      for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar5 = local_1c;
      puVar6 = (undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x28);
      for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar5 = (undefined4 *)((int)param_1 + 0x8a);
      puVar6 = local_2c;
      for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar5 = local_2c;
      puVar6 = (undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x38);
      for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x4a) = *(undefined4 *)((int)param_1 + 0x66);
    *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x4e) = *(undefined4 *)((int)param_1 + 0x6a);
    FUN_004c3e40(*(int *)((int)param_1 + 0x10e));
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

