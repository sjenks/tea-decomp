// rea decompile_all
// name: FUN_004a681c
// address: 0x4a681c
// body: available
// range: 0x4a681c-0x4a697b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __cdecl FUN_004a681c(int param_1,undefined4 param_2)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  byte bVar5;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  tagRECT local_68;
  COLORREF local_58;
  undefined4 local_54;
  undefined2 local_44;
  int local_38;
  uint local_30 [2];
  HDC local_28 [9];
  
  bVar5 = 0;
  FUN_004dce64(0x50b17c);
  if (*(int *)(param_1 + 0x5c) == DAT_0051b19c) {
    iVar1 = FUN_004a5774(param_1);
    bVar4 = iVar1 != 0;
    *in_FS_OFFSET = local_54;
  }
  else {
    if (*(int *)(param_1 + 0x5c) != DAT_0051b1a0) {
      local_44 = 8;
      FUN_0048d7c8(local_28,param_2);
      local_38 = local_38 + 1;
      local_44 = 0x20;
      FUN_004ab84c(local_30,(uint *)(param_1 + 0x5c),'\x01');
      local_38 = local_38 + 2;
      local_44 = 0x14;
      FUN_0048d938(local_28,local_30);
      FUN_0048dd20(&local_58,(int *)local_28,(uint *)(param_1 + 0x5c));
      local_68.left = 0;
      local_68.top = 0;
      local_68.right = 0;
      local_68.bottom = 0;
      FUN_004a7a6c(param_1,&local_68);
      ptVar2 = &local_68;
      pLVar3 = &local_78;
      for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pLVar3 = ptVar2->left;
        ptVar2 = (tagRECT *)((int)ptVar2 + ((uint)bVar5 * -2 + 1) * 4);
        pLVar3 = pLVar3 + (uint)bVar5 * -2 + 1;
      }
      PatBlt(local_28[0],local_78,local_74,local_70 - local_78,local_6c - local_74,0xf00021);
      FUN_0048da64(local_28);
      local_38 = local_38 + -2;
      FUN_004ab9b4(local_30,2);
      local_38 = local_38 + -1;
      FUN_0048d8bc((int *)local_28,2);
    }
    bVar4 = true;
    *in_FS_OFFSET = local_54;
  }
  return bVar4;
}

