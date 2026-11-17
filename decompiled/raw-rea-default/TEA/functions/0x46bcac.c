// rea decompile_all
// name: FUN_0046bcac
// address: 0x46bcac
// body: available
// range: 0x46bcac-0x46bded inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0046bcac(int *param_1)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  tagRECT local_54;
  LONG local_44 [4];
  undefined4 local_34;
  undefined2 local_24;
  int *local_10;
  int *local_c;
  int *local_8;
  
  bVar4 = 0;
  FUN_004dce64(0x4fdcac);
  local_54.left = 0;
  local_54.top = 0;
  local_54.right = 0;
  local_54.bottom = 0;
  FUN_004a7a6c(*param_1,&local_54);
  ptVar2 = &local_54;
  pLVar3 = local_44;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar3 = ptVar2->left;
    ptVar2 = (tagRECT *)((int)ptVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pLVar3 = pLVar3 + (uint)bVar4 * -2 + 1;
  }
  local_8 = (int *)FUN_004cc0f0();
  if (local_8 != (int *)0x0) {
    local_24 = 0x14;
    FUN_004173c0(local_8,(int)local_44,param_1[0x2e],3,0);
    local_24 = 8;
  }
  FUN_00417498((int)param_1,local_8);
  local_c = (int *)FUN_004cc0f0();
  if (local_c != (int *)0x0) {
    local_24 = 0x2c;
    FUN_004173c0(local_c,(int)local_44,*(int *)((int)param_1 + 0x166),0,3);
    local_24 = 0x20;
  }
  FUN_00417498((int)param_1,local_c);
  local_10 = (int *)FUN_004cc0f0();
  if (local_10 != (int *)0x0) {
    local_24 = 0x44;
    if (param_1[0x85] == 0) {
      iVar1 = param_1[0x85];
    }
    else {
      iVar1 = *(int *)param_1[0x85];
    }
    FUN_004173c0(local_10,(int)local_44,iVar1,3,3);
    local_24 = 0x38;
  }
  FUN_00417498((int)param_1,local_10);
  *in_FS_OFFSET = local_34;
  return;
}

