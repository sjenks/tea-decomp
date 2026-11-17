// rea decompile_all
// name: FUN_004b466c
// address: 0x4b466c
// body: available
// range: 0x4b466c-0x4b4775 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004b466c(int param_1,int param_2)

{
  HMENU uIDNewItem;
  undefined4 *in_FS_OFFSET;
  CHAR local_5c [40];
  undefined4 local_34;
  undefined2 local_24;
  int local_18;
  undefined4 local_10;
  HMENU local_c;
  
  FUN_004dce64(0x50d908);
  uIDNewItem = FUN_004c1ae8(*(int *)(param_1 + 0x20) + 4,(LPCSTR)0x7e91);
  if (uIDNewItem == (HMENU)0x0) {
    uIDNewItem = FUN_004c1ae8(DAT_00512a1c,(LPCSTR)0x7e91);
  }
  if (uIDNewItem != (HMENU)0x0) {
    FUN_004c0cd4(*(int *)(param_1 + 0x20) + 4,0x7ef4,local_5c,0x28);
    local_24 = 8;
    FUN_00497aec(&local_10,uIDNewItem,0);
    local_18 = local_18 + 1;
    local_24 = 0x14;
    if ((*(byte *)(param_1 + 0x18) & 0x20) != 0) {
      DeleteMenu(local_c,0x5f0f,0);
    }
    DeleteMenu(*(HMENU *)(param_2 + 4),0,0x400);
    InsertMenuA(*(HMENU *)(param_2 + 4),0,0x410,(UINT_PTR)uIDNewItem,local_5c);
    local_18 = local_18 + -1;
    FUN_00497bf4(&local_10,2);
  }
  *in_FS_OFFSET = local_34;
  return;
}

