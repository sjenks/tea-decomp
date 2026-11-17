// rea decompile_all
// name: FUN_00413e18
// address: 0x413e18
// body: available
// range: 0x413e18-0x414464 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00413f58) */
/* WARNING: Removing unreachable block (ram,0x0041403d) */
/* WARNING: Removing unreachable block (ram,0x00413fec) */
/* WARNING: Removing unreachable block (ram,0x00414033) */
/* WARNING: Removing unreachable block (ram,0x004140bc) */
/* WARNING: Removing unreachable block (ram,0x004140e0) */
/* WARNING: Removing unreachable block (ram,0x004140eb) */
/* WARNING: Removing unreachable block (ram,0x0041410f) */
/* WARNING: Removing unreachable block (ram,0x004140f9) */
/* WARNING: Removing unreachable block (ram,0x00414108) */
/* WARNING: Removing unreachable block (ram,0x00414101) */
/* WARNING: Removing unreachable block (ram,0x00414114) */
/* WARNING: Removing unreachable block (ram,0x00414118) */
/* WARNING: Removing unreachable block (ram,0x00414166) */
/* WARNING: Removing unreachable block (ram,0x00414199) */
/* WARNING: Removing unreachable block (ram,0x00414282) */
/* WARNING: Removing unreachable block (ram,0x0041422e) */
/* WARNING: Removing unreachable block (ram,0x00414275) */
/* WARNING: Removing unreachable block (ram,0x00414319) */
/* WARNING: Removing unreachable block (ram,0x0041433d) */
/* WARNING: Removing unreachable block (ram,0x00414348) */
/* WARNING: Removing unreachable block (ram,0x0041436c) */
/* WARNING: Removing unreachable block (ram,0x00414356) */
/* WARNING: Removing unreachable block (ram,0x00414365) */
/* WARNING: Removing unreachable block (ram,0x0041435e) */
/* WARNING: Removing unreachable block (ram,0x00414371) */
/* WARNING: Removing unreachable block (ram,0x00414375) */
/* WARNING: Removing unreachable block (ram,0x004143c3) */

void __cdecl FUN_00413e18(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 local_125;
  uint local_124;
  uint local_d8;
  int local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  int *local_80;
  undefined4 local_7c;
  undefined2 local_6c;
  int local_60;
  int local_8;
  
  FUN_0041f3fc(0x42e5d0);
  uVar4 = 0;
  do {
    iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    if ((uint)(iVar2 >> 2) <= uVar4) {
      FUN_00414468(param_1,0);
      local_d8 = *(uint *)(*(int *)(param_1 + 0x28) + -4);
      if (local_d8 == 0) {
        FUN_0041ae90(param_1 + 0x20,0,0,0,0);
      }
      else {
        local_124 = *(uint *)(*(int *)(param_1 + 0x28) + -4);
        local_125 = 0;
        uVar4 = local_124;
        if (local_d8 < local_124) {
          uVar4 = local_d8;
        }
        FUN_00417320(param_1 + 0x20,0,uVar4,(uint)&local_125,0,0,0);
      }
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x28) + -0xc);
      if (puVar1 != &DAT_0042fab4) {
        *puVar1 = 0;
      }
      *in_FS_OFFSET = local_7c;
      return;
    }
    iVar2 = *(int *)(uVar4 * 4 + *(int *)(param_1 + 4));
    local_8 = iVar2;
    if (iVar2 != 0) {
      local_6c = 0x14;
      local_60 = local_60 + -1;
      if (*(int *)(iVar2 + 0x1010) != 0) {
        if (*(int *)(*(int *)(iVar2 + 0x1010) + -0xc) != -1) {
          local_80 = (int *)(*(int *)(iVar2 + 0x1010) + -0xc);
          if (local_80 == &DAT_0042fab4) {
            iVar3 = 1;
          }
          else if (local_80 == &DAT_0042fab4) {
            iVar3 = 1;
          }
          else {
            *local_80 = *local_80 + -1;
            iVar3 = *local_80 + 1;
          }
          if (iVar3 != 0) goto LAB_00413ef7;
        }
        local_84 = *(int *)(iVar2 + 0x1010) + -0xc;
        local_88 = *(int *)(iVar2 + 0x1010) + -0xc;
        FUN_00414f78();
        local_8c = 0;
        *(undefined4 *)(iVar2 + 0x1010) = 0;
        local_90 = iVar2 + 0x1008;
      }
LAB_00413ef7:
      local_60 = local_60 + -0x101;
      FUN_0040db54(local_8,2);
      FUN_00414f78();
      local_6c = 8;
    }
    uVar4 = uVar4 + 1;
  } while( true );
}

