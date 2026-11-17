// rea decompile_all
// name: FUN_0043db94
// address: 0x43db94
// body: available
// range: 0x43db94-0x43dfaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_0043db94(int *param_1,int param_2)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar6;
  _FILETIME local_9c;
  undefined1 *local_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  undefined1 *local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  char *local_6c;
  undefined4 local_68;
  undefined2 local_58;
  int local_4c;
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  LPCSTR local_c;
  
  FUN_004dce64(0x4f5758);
  uVar4 = DAT_005140ac;
  if (*(uint *)(*(int *)(param_2 + 8) + -4) < DAT_005140ac) {
    uVar4 = *(uint *)(*(int *)(param_2 + 8) + -4);
  }
  local_6c = FUN_00420b88(*(char **)(param_2 + 8),'\\',uVar4);
  uVar4 = DAT_005140ac;
  if (local_6c != (char *)0x0) {
    uVar4 = (int)local_6c - *(int *)(param_2 + 8);
  }
  puVar2 = (uint *)FUN_004e0520((char *)0x0);
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)(s_DictionaryOpen_004f5414 + 0xe);
  }
  local_58 = 0x14;
  FUN_004cf628((int)local_14,puVar2);
  local_4c = local_4c + 1;
  local_58 = 8;
  if (uVar4 != 0xffffffff) {
    local_58 = 0x20;
    puVar6 = local_14;
    FUN_004d6118((int)local_24,param_2,0,uVar4 + 1);
    local_4c = local_4c + 1;
    FUN_00436b94((int)local_34,(int)local_24,(int)puVar6);
    local_4c = local_4c + 1;
    FUN_004cf384((int)local_14,(int)local_34);
    local_4c = local_4c + -1;
    if (local_2c != 0) {
      if (*(int *)(local_2c + -0xc) != -1) {
        piVar5 = (int *)(local_2c + -0xc);
        if (piVar5 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar3 = *piVar5 + 1;
        }
        if (iVar3 != 0) goto LAB_0043dce1;
      }
      local_78 = local_2c + -0xc;
      local_7c = local_2c + -0xc;
      FUN_004cc0bc();
      local_80 = 0;
      local_84 = local_34;
      local_2c = 0;
    }
LAB_0043dce1:
    local_58 = 8;
    local_4c = local_4c + -1;
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar5 = (int *)(local_1c + -0xc);
        if (piVar5 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar3 = *piVar5 + 1;
        }
        if (iVar3 != 0) goto LAB_0043dd7a;
      }
      local_88 = local_1c + -0xc;
      local_8c = local_1c + -0xc;
      FUN_004cc0bc();
      local_90 = 0;
      local_94 = local_24;
      local_1c = 0;
    }
  }
LAB_0043dd7a:
  iVar3 = FUN_00408c68(param_1[0x1a],param_1[0x1b]);
  if (iVar3 == 0) {
    FUN_00408c98(param_1[0x1a],param_1[0x1b]);
    (**(code **)(param_1[3] + 0xc4))();
    cVar1 = '\0';
  }
  else {
    FUN_00408edc(param_1[0x1a],param_1[0x1b]);
    cVar1 = FUN_00440d08();
  }
  if (cVar1 != '\0') {
    FUN_00437928(param_2,&local_9c);
    iVar3 = FUN_004df65c(local_c,*(LPCSTR *)(param_2 + 8));
    if (iVar3 != 0) {
      (**(code **)(param_1[3] + 0xc4))();
      cVar1 = '\0';
    }
  }
  if (cVar1 == '\0') {
    thunk_FUN_004e0588(local_c);
    local_58 = 0x50;
    FUN_0041b914((int)local_44,param_1 + 0x93);
    local_4c = local_4c + 1;
    local_58 = 0x44;
    (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
    local_4c = local_4c + -1;
    if (local_3c != 0) {
      if (*(int *)(local_3c + -0xc) != -1) {
        piVar5 = (int *)(local_3c + -0xc);
        if (piVar5 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar3 = *piVar5 + 1;
        }
        if (iVar3 != 0) goto LAB_0043df06;
      }
      FUN_004cc0bc();
      local_3c = 0;
    }
LAB_0043df06:
    local_58 = 8;
  }
  uVar4 = (uint)(cVar1 != '\0');
  local_4c = local_4c + -1;
  if (local_c != (LPCSTR)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar5 = (int *)(local_c + -0xc);
      if (piVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar3 = *piVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_0043df98;
    }
    FUN_004cc0bc();
  }
LAB_0043df98:
  *in_FS_OFFSET = local_68;
  return uVar4;
}

