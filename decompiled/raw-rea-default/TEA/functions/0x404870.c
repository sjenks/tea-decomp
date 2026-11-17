// rea decompile_all
// name: FUN_00404870
// address: 0x404870
// body: available
// range: 0x404870-0x404f57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_00404870(int *param_1,int param_2,undefined4 *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  DWORD DVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4eaea4);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x81c);
    param_1[0x81c] = (int)(param_1 + 0x819);
    param_1[0x81d] = (int)(param_1 + 0x81a);
    param_1[1] = (int)(param_1 + 0x819);
    param_1[2] = (int)(param_1 + 0x81a);
    param_1[0x818] = 0;
    param_1[0x81b] = 0;
    param_1[0x819] = (int)&PTR_FUN_004ea94c;
    param_1[0x81a] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x81c,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -8000;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -8000;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  FUN_00467d88(param_1,1,0x4eadec,5,5,0x4eae54,uVar1,param_4,(uint *)0x10d6,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 8000;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 8000;
  param_1[3] = (int)&PTR_FUN_004eb1fc;
  *(undefined ***)param_1[1] = &PTR_LAB_004eb2c8;
  *(undefined ***)param_1[2] = &PTR_LAB_004eb2d4;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004eb2e0;
  FUN_0041af38(param_1 + 0x48,0,param_1,0x10e0,0);
  FUN_0041af38(param_1 + 0x77,0,param_1,0x10ea,0);
  FUN_00418398(param_1 + 0xa6,0,param_1,0x2a4e);
  FUN_00418398(param_1 + 0xd8,0,param_1,0x3a20);
  FUN_00417e40(param_1 + 0x10a,0,param_1,0x1a36,0);
  FUN_00417e40(param_1 + 0x13e,0,param_1,0x1a2c,0);
  FUN_00417e40(param_1 + 0x172,0,param_1,0x1a40,0);
  FUN_004179f0(param_1 + 0x1a6,0,param_1,0x8d4);
  FUN_0041c258(param_1 + 0x1d8,0,param_1,0x8de,0);
  FUN_004c7a28(param_1 + 0x206,0,*param_1,0x314c,0,0);
  FUN_004187a4(param_1 + 0x232,0,param_1,0x312e,param_1[0x206]);
  FUN_004c7a28(param_1 + 0x263,0,*param_1,0x12ca,0,0);
  FUN_00419138(param_1 + 0x290,0,param_1,0x12b6,param_1[0x263],DAT_004ead2c,0x4eae5c);
  FUN_004c7a28(param_1 + 0x2d8,0,*param_1,0x12c0,0,0);
  FUN_00419138(param_1 + 0x304,0,param_1,0x12ac,param_1[0x2d8],DAT_004ead2c,0x4eae64);
  FUN_004c7a28(param_1 + 0x34c,0,*param_1,0x323c,0,0);
  FUN_00419138(param_1 + 0x378,0,param_1,0x3232,param_1[0x34c],DAT_004ead2c,0x4eae6c);
  FUN_004c7a28(param_1 + 0x3c0,0,*param_1,0x164e,0,0);
  FUN_00419138(param_1 + 0x3ec,0,param_1,0x1644,param_1[0x3c0],DAT_004ead2c,0x4eae64);
  FUN_004c7a28(param_1 + 0x434,0,*param_1,0x3142,0,0);
  FUN_00419138(param_1 + 0x460,0,param_1,0x3124,param_1[0x434],DAT_004ead2c,0x4eae71);
  FUN_004c7a28(param_1 + 0x4a8,0,*param_1,0x3156,0,0);
  FUN_00419138(param_1 + 0x4d4,0,param_1,0x3138,param_1[0x4a8],DAT_004ead2c,0x4eae71);
  FUN_00418398(param_1 + 0x51c,0,param_1,0x361a);
  FUN_00418398(param_1 + 0x54e,0,param_1,0x1694);
  FUN_00417e40(param_1 + 0x580,0,param_1,0x3426,0);
  FUN_00417e40(param_1 + 0x5b4,0,param_1,0x3430,0);
  FUN_00418398(param_1 + 0x5e8,0,param_1,0x369c);
  FUN_00417e40(param_1 + 0x61a,0,param_1,0x36a6,0);
  FUN_00417e40(param_1 + 0x64e,0,param_1,0x36a7,0);
  FUN_00417e40(param_1 + 0x682,0,param_1,0x36a8,0);
  FUN_00418398(param_1 + 0x6b6,0,param_1,0x36ba);
  FUN_00418398(param_1 + 0x6e8,0,param_1,0x36c4);
  FUN_00418398(param_1 + 0x71a,0,param_1,0x2f26);
  FUN_00418398(param_1 + 0x74c,0,param_1,0x2f27);
  FUN_00418398(param_1 + 0x77e,0,param_1,0x2f28);
  FUN_00418398(param_1 + 0x7b0,0,param_1,0x2f29);
  DVar2 = GetSysColor(5);
  param_1[0x7e2] = DVar2;
  param_1[0x7e3] = (int)param_3;
  param_1[0x7e4] = param_5;
  FUN_004179f0(param_1 + 0x7e6,0,param_1,0x10f4);
  *in_FS_OFFSET = local_28;
  return param_1;
}

