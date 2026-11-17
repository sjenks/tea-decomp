// rea decompile_all
// name: FUN_00485bb8
// address: 0x485bb8
// body: available
// range: 0x485bb8-0x485ec7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00485bff) */
/* WARNING: Removing unreachable block (ram,0x00485ca3) */
/* WARNING: Removing unreachable block (ram,0x00485d64) */
/* WARNING: Removing unreachable block (ram,0x00485d2c) */
/* WARNING: Removing unreachable block (ram,0x00485d5d) */
/* WARNING: Removing unreachable block (ram,0x00485dbf) */
/* WARNING: Removing unreachable block (ram,0x00485de3) */
/* WARNING: Removing unreachable block (ram,0x00485dee) */
/* WARNING: Removing unreachable block (ram,0x00485e12) */
/* WARNING: Removing unreachable block (ram,0x00485dfc) */
/* WARNING: Removing unreachable block (ram,0x00485e0b) */
/* WARNING: Removing unreachable block (ram,0x00485e04) */
/* WARNING: Removing unreachable block (ram,0x00485e17) */
/* WARNING: Removing unreachable block (ram,0x00485e1b) */
/* WARNING: Removing unreachable block (ram,0x00485e69) */

int __cdecl FUN_00485bb8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  uint local_1f4 [67];
  undefined4 local_e8;
  undefined1 local_df [143];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  
  FUN_004dce64(0x5039fc);
  local_40 = 8;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined **)(param_1 + 8) = &DAT_00513d64;
  local_e8 = *(undefined4 *)(param_1 + 8);
  local_34 = local_34 + 1;
  iVar2 = SHGetFolderPathA();
  if (iVar2 == 0) {
    FUN_004cf41c(param_1,local_1f4);
    FUN_004d573c(param_1,param_2);
    iVar2 = thunk_FUN_004ddd54(*(LPCSTR *)(param_1 + 8),0);
    if (iVar2 == 0) {
      uVar1 = *(uint *)(*(int *)(param_1 + 8) + -4);
      pcVar3 = FUN_004dc9f4((uint *)s__common_ini_00503990);
      FUN_004cfad4(param_1,uVar1,0,0x503990,(uint)pcVar3,0,(uint)pcVar3);
    }
    else {
      uVar1 = *(uint *)(*(int *)(param_1 + 8) + -4);
      local_df[0] = 0;
      uVar4 = DAT_005140ac;
      if (uVar1 <= DAT_005140ac) {
        uVar4 = uVar1;
      }
      FUN_004cfad4(param_1,0,uVar4,(uint)local_df,0,0,0);
    }
  }
  *in_FS_OFFSET = local_50;
  return param_1;
}

