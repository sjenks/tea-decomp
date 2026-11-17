// rea decompile_all
// name: FUN_0040209c
// address: 0x40209c
// body: available
// range: 0x40209c-0x4024bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0040209c(int *param_1)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  tagRECT local_80;
  LONG local_70 [4];
  undefined4 local_60;
  undefined2 local_50;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  bVar4 = 0;
  FUN_004dce64(0x4ea664);
  local_80.left = 0;
  local_80.top = 0;
  local_80.right = 0;
  local_80.bottom = 0;
  FUN_004a7a6c(*param_1,&local_80);
  ptVar2 = &local_80;
  pLVar3 = local_70;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar3 = ptVar2->left;
    ptVar2 = (tagRECT *)((int)ptVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pLVar3 = pLVar3 + (uint)bVar4 * -2 + 1;
  }
  local_8 = (int *)FUN_004cc0f0();
  if (local_8 != (int *)0x0) {
    local_50 = 0x14;
    FUN_004173c0(local_8,(int)local_70,param_1[0x1a],3,3);
    local_50 = 8;
  }
  FUN_00417498((int)param_1,local_8);
  local_c = (int *)FUN_004cc0f0();
  if (local_c != (int *)0x0) {
    local_50 = 0x2c;
    FUN_004173c0(local_c,(int)local_70,param_1[0x45],3,0);
    local_50 = 0x20;
  }
  FUN_00417498((int)param_1,local_c);
  local_10 = (int *)FUN_004cc0f0();
  if (local_10 != (int *)0x0) {
    local_50 = 0x44;
    FUN_004173c0(local_10,(int)local_70,param_1[0x74],3,0);
    local_50 = 0x38;
  }
  FUN_00417498((int)param_1,local_10);
  local_14 = (int *)FUN_004cc0f0();
  if (local_14 != (int *)0x0) {
    local_50 = 0x5c;
    FUN_004173c0(local_14,(int)local_70,param_1[0xa3],3,3);
    local_50 = 0x50;
  }
  FUN_00417498((int)param_1,local_14);
  local_18 = (int *)FUN_004cc0f0();
  if (local_18 != (int *)0x0) {
    local_50 = 0x74;
    FUN_004173c0(local_18,(int)local_70,param_1[0xd2],0,2);
    local_50 = 0x68;
  }
  FUN_00417498((int)param_1,local_18);
  local_1c = (int *)FUN_004cc0f0();
  if (local_1c != (int *)0x0) {
    local_50 = 0x8c;
    FUN_004173c0(local_1c,(int)local_70,*(int *)((int)param_1 + 0x3f6),0,2);
    local_50 = 0x80;
  }
  FUN_00417498((int)param_1,local_1c);
  local_20 = (int *)FUN_004cc0f0();
  if (local_20 != (int *)0x0) {
    local_50 = 0xa4;
    FUN_004173c0(local_20,(int)local_70,param_1[0x129],0,2);
    local_50 = 0x98;
  }
  FUN_00417498((int)param_1,local_20);
  local_24 = (int *)FUN_004cc0f0();
  if (local_24 != (int *)0x0) {
    local_50 = 0xbc;
    FUN_004173c0(local_24,(int)local_70,*(int *)((int)param_1 + 0x552),0,2);
    local_50 = 0xb0;
  }
  FUN_00417498((int)param_1,local_24);
  local_28 = (int *)FUN_004cc0f0();
  if (local_28 != (int *)0x0) {
    local_50 = 0xd4;
    FUN_004173c0(local_28,(int)local_70,param_1[0x180],0,2);
    local_50 = 200;
  }
  FUN_00417498((int)param_1,local_28);
  local_2c = (int *)FUN_004cc0f0();
  if (local_2c != (int *)0x0) {
    local_50 = 0xec;
    FUN_004173c0(local_2c,(int)local_70,param_1[0x1af],0,2);
    local_50 = 0xe0;
  }
  FUN_00417498((int)param_1,local_2c);
  local_30 = (int *)FUN_004cc0f0();
  if (local_30 != (int *)0x0) {
    local_50 = 0x104;
    FUN_004173c0(local_30,(int)local_70,param_1[0x1de],0,2);
    local_50 = 0xf8;
  }
  FUN_00417498((int)param_1,local_30);
  local_34 = (int *)FUN_004cc0f0();
  if (local_34 != (int *)0x0) {
    local_50 = 0x11c;
    FUN_004173c0(local_34,(int)local_70,param_1[0x20d],0,2);
    local_50 = 0x110;
  }
  FUN_00417498((int)param_1,local_34);
  local_38 = (int *)FUN_004cc0f0();
  if (local_38 != (int *)0x0) {
    local_50 = 0x134;
    FUN_004173c0(local_38,(int)local_70,param_1[0x23c],2,2);
    local_50 = 0x128;
  }
  FUN_00417498((int)param_1,local_38);
  local_3c = (int *)FUN_004cc0f0();
  if (local_3c != (int *)0x0) {
    local_50 = 0x14c;
    FUN_004173c0(local_3c,(int)local_70,param_1[0x267],2,2);
    local_50 = 0x140;
  }
  FUN_00417498((int)param_1,local_3c);
  *in_FS_OFFSET = local_60;
  return;
}

