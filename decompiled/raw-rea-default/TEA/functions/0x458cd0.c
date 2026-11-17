// rea decompile_all
// name: FUN_00458cd0
// address: 0x458cd0
// body: available
// range: 0x458cd0-0x45914e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00458cd0(int *param_1)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  tagRECT local_78;
  LONG local_68 [3];
  int local_5c;
  undefined4 local_58;
  undefined2 local_48;
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
  FUN_004dce64(0x4f9208);
  local_78.left = 0;
  local_78.top = 0;
  local_78.right = 0;
  local_78.bottom = 0;
  FUN_004a7a6c(*param_1,&local_78);
  ptVar2 = &local_78;
  pLVar3 = local_68;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar3 = ptVar2->left;
    ptVar2 = (tagRECT *)((int)ptVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pLVar3 = pLVar3 + (uint)bVar4 * -2 + 1;
  }
  local_8 = (int *)FUN_004cc0f0();
  if (local_8 != (int *)0x0) {
    local_48 = 0x14;
    if (param_1[0x18] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 3;
    }
    FUN_004173c0(local_8,(int)local_68,param_1[0x2a],3,iVar1);
    local_48 = 8;
  }
  FUN_00417498((int)param_1,local_8);
  local_c = (int *)FUN_004cc0f0();
  if (local_c != (int *)0x0) {
    local_48 = 0x2c;
    FUN_004173c0(local_c,(int)local_68,param_1[0x56],3,0);
    local_48 = 0x20;
  }
  FUN_00417498((int)param_1,local_c);
  local_10 = (int *)FUN_004cc0f0();
  if (local_10 != (int *)0x0) {
    local_48 = 0x44;
    FUN_004173c0(local_10,(int)local_68,param_1[0x84],2,0);
    local_48 = 0x38;
  }
  FUN_00417498((int)param_1,local_10);
  local_14 = (int *)FUN_004cc0f0();
  if (local_14 != (int *)0x0) {
    local_48 = 0x5c;
    FUN_004173c0(local_14,(int)local_68,param_1[0x1b5],3,0);
    local_48 = 0x50;
  }
  FUN_00417498((int)param_1,local_14);
  local_18 = (int *)FUN_004cc0f0();
  if (local_18 != (int *)0x0) {
    local_48 = 0x74;
    FUN_004173c0(local_18,(int)local_68,param_1[0x116],2,0);
    local_48 = 0x68;
  }
  FUN_00417498((int)param_1,local_18);
  local_1c = (int *)FUN_004cc0f0();
  if (local_1c != (int *)0x0) {
    local_48 = 0x8c;
    FUN_004173c0(local_1c,(int)local_68,param_1[0x143],2,0);
    local_48 = 0x80;
  }
  FUN_00417498((int)param_1,local_1c);
  local_20 = (int *)FUN_004cc0f0();
  if (local_20 != (int *)0x0) {
    local_48 = 0xa4;
    FUN_004173c0(local_20,(int)local_68,param_1[0x172],2,0);
    local_48 = 0x98;
  }
  FUN_00417498((int)param_1,local_20);
  if (param_1[0x1a3] != 0) {
    local_24 = (int *)FUN_004cc0f0();
    if (local_24 != (int *)0x0) {
      local_48 = 0xbc;
      if (param_1[0x1a3] == 0) {
        iVar1 = param_1[0x1a3];
      }
      else {
        iVar1 = *(int *)param_1[0x1a3];
      }
      FUN_004173c0(local_24,(int)local_68,iVar1,2,0);
      local_48 = 0xb0;
    }
    FUN_00417498((int)param_1,local_24);
  }
  param_1[0x1ed] =
       *(int *)(param_1[0x1b5] + 0x24) -
       (*(int *)(param_1[0x143] + 0x24) + *(int *)(param_1[0x143] + 0x2c));
  if (param_1[0x18] == 0) {
    param_1[0x1ee] = 0;
  }
  else {
    local_28 = (int *)FUN_004cc0f0();
    if (local_28 != (int *)0x0) {
      local_48 = 0xd4;
      if (param_1[0x329] == 0) {
        iVar1 = param_1[0x329];
      }
      else {
        iVar1 = *(int *)param_1[0x329];
      }
      FUN_004173c0(local_28,(int)local_68,iVar1,3,0);
      local_48 = 200;
    }
    FUN_00417498((int)param_1,local_28);
    local_2c = (int *)FUN_004cc0f0();
    if (local_2c != (int *)0x0) {
      local_48 = 0xec;
      if (param_1[0x32a] == 0) {
        iVar1 = param_1[0x32a];
      }
      else {
        iVar1 = *(int *)param_1[0x32a];
      }
      FUN_004173c0(local_2c,(int)local_68,iVar1,0,2);
      local_48 = 0xe0;
    }
    FUN_00417498((int)param_1,local_2c);
    local_30 = (int *)FUN_004cc0f0();
    if (local_30 != (int *)0x0) {
      local_48 = 0x104;
      if (param_1[0x32b] == 0) {
        iVar1 = param_1[0x32b];
      }
      else {
        iVar1 = *(int *)param_1[0x32b];
      }
      FUN_004173c0(local_30,(int)local_68,iVar1,2,2);
      local_48 = 0xf8;
    }
    FUN_00417498((int)param_1,local_30);
    local_34 = (int *)FUN_004cc0f0();
    if (local_34 != (int *)0x0) {
      local_48 = 0x11c;
      if (param_1[0x32c] == 0) {
        iVar1 = param_1[0x32c];
      }
      else {
        iVar1 = *(int *)param_1[0x32c];
      }
      FUN_004173c0(local_34,(int)local_68,iVar1,2,2);
      local_48 = 0x110;
    }
    FUN_00417498((int)param_1,local_34);
    param_1[0x1ee] =
         (local_5c - (*(int *)(param_1[0x2a] + 0x24) + *(int *)(param_1[0x2a] + 0x2c))) +
         param_1[0x1ed];
  }
  *in_FS_OFFSET = local_58;
  return;
}

