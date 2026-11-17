// rea decompile_all
// name: FUN_004ae248
// address: 0x4ae248
// body: available
// range: 0x4ae248-0x4ae6dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl
FUN_004ae248(int *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5,
            undefined1 param_6,int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_88 [4];
  code *local_78;
  undefined4 local_74 [4];
  code *local_64;
  undefined4 local_60;
  byte local_5c;
  byte local_5b;
  byte local_5a;
  undefined4 local_59;
  undefined4 local_55;
  byte local_51;
  byte local_50;
  byte local_4f;
  undefined4 local_4e;
  undefined4 local_4a;
  byte local_46;
  byte local_45;
  byte local_44;
  undefined4 local_43;
  undefined4 local_3f;
  byte local_3b;
  byte local_3a;
  byte local_39;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_24;
  int local_18;
  int *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  FUN_004dce64(0x50cb24);
  local_24 = 8;
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0xe1;
    *(int *)((int)param_1 + 0xe1) = (int)param_1 + 0x57;
    *(int *)((int)param_1 + 0x57) = (int)param_1 + 0x4b;
    *(int *)((int)param_1 + 0x5b) = (int)param_1 + 0x4f;
    *(int *)((int)param_1 + 0xe5) = (int)param_1 + 0x4b;
    *(int *)((int)param_1 + 0xe9) = (int)param_1 + 0x4f;
    param_1[1] = (int)param_1 + 0x57;
    param_1[2] = (int)param_1 + 0x4b;
    param_1[3] = (int)param_1 + 0x4f;
    *(undefined4 *)((int)param_1 + 0x47) = 0;
    *(undefined4 *)((int)param_1 + 0x53) = 0;
    *(undefined4 *)((int)param_1 + 0xdd) = 0;
    *(undefined ***)((int)param_1 + 0x4b) = &PTR_FUN_004ea94c;
    *(undefined ***)((int)param_1 + 0x4f) = &PTR_FUN_004ea93c;
    local_18 = local_18 + 1;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x96;
    FUN_004a4fbc((int *)((int)param_1 + 0x57),1);
    local_18 = local_18 + 1;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x96;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe4;
    FUN_004bda48((int *)((int)param_1 + 0xe1),1);
    local_18 = local_18 + 1;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe4;
  }
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x12;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x12;
  FUN_00494b04(param_1 + 1,1,param_3,param_4,param_7);
  local_18 = local_18 + 1;
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x12;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x12;
  *(undefined ***)((int)param_1 + 0x35) = &PTR_FUN_0050cc2c;
  param_1[4] = (int)&PTR_LAB_0050cc70;
  *(undefined ***)param_1[2] = &PTR_LAB_0050cc88;
  *(undefined ***)param_1[3] = &PTR_LAB_0050cc94;
  *(undefined ***)(param_1[1] + 8) = &PTR_LAB_0050cca0;
  *(undefined ***)(*param_1 + 0xc) = &PTR_LAB_0050cd30;
  FUN_004a5098(param_1[1],param_3,param_4,param_7);
  FUN_004bdb60((int *)*param_1,param_5,'\0');
  FUN_00495f90(&local_60);
  *(undefined1 *)((int)param_1 + 0x39) = param_6;
  *(undefined4 *)((int)param_1 + 0x3a) = 0;
  *(undefined1 *)((int)param_1 + 0x3e) = 0;
  local_8 = (undefined4 *)FUN_004cc0f0();
  if (local_8 != (undefined4 *)0x0) {
    local_8[3] = 0;
    *local_8 = 0;
    local_24 = 0x14;
  }
  *(undefined4 **)((int)param_1 + 0x3f) = local_8;
  local_c = (undefined4 *)FUN_004cc0f0();
  if (local_c != (undefined4 *)0x0) {
    local_c[3] = 0;
    *local_c = 0;
    local_24 = 0x2c;
  }
  *(undefined4 **)((int)param_1 + 0x43) = local_c;
  FUN_0048fb40(local_74,0,(undefined4 *)FUN_004ae07c,0);
  local_64 = FUN_004ae754;
  FUN_004ae8fc((int)param_1,local_74);
  FUN_0048fb40(local_88,0,(undefined4 *)FUN_004ae20c,0);
  local_78 = FUN_004ae764;
  FUN_004ae91c((int)param_1,local_88);
  if (*(int *)(*param_1 + 0x15) == 0) {
    local_10 = (int *)FUN_004cc0f0();
    if (local_10 != (int *)0x0) {
      local_24 = 0x50;
      FUN_004a4de0(local_10,0,param_1[1],(uint *)&DAT_0050ca80,0);
      local_24 = 0x44;
    }
    *(int **)(*param_1 + 0x15) = local_10;
  }
  if ((*(byte *)(*(int *)(*param_1 + 0x15) + 0x1a) & 0x80) == 0) {
    local_5b = local_5b & 0xf0 | 3;
    local_50 = local_50 & 0xf0 | 3;
    local_45 = local_45 & 0xf0 | 2;
    local_3a = local_3a & 0xf0 | 2;
  }
  else {
    local_5b = local_5b & 0xf0 | 4;
    local_50 = local_50 & 0xf0 | 4;
    local_45 = local_45 & 0xf0 | 4;
    local_3a = local_3a & 0xf0 | 4;
  }
  local_39 = local_39 & 0xf0 | 3;
  local_3b = local_3b & 0xf0 | 3;
  local_44 = local_44 & 0xf0 | 2;
  local_46 = local_46 & 0xf0 | 2;
  local_4f = local_4f & 0xf0 | 1;
  local_51 = local_51 & 0xf0 | 1;
  local_5a = local_5a & 0xf0;
  local_5c = local_5c & 0xf0;
  local_38 = 0;
  local_3f = 0;
  local_43 = 0;
  local_4a = 0;
  local_4e = 0;
  local_55 = 0;
  local_59 = 0;
  local_60 = 0;
  FUN_00494fc8((int)(param_1 + 1),*(int *)(*param_1 + 0x15),&local_60);
  *in_FS_OFFSET = local_34;
  return param_1;
}

