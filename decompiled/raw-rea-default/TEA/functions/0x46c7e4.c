// rea decompile_all
// name: FUN_0046c7e4
// address: 0x46c7e4
// body: available
// range: 0x46c7e4-0x46caa0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0046c7e4(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 *in_FS_OFFSET;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined2 local_48;
  int local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  uint *local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4fde84);
  uVar1 = FUN_0046c244((int)param_1,param_1[0x2c] * 0x80 + param_1[0x25],&local_5c,&local_60);
  if ((char)uVar1 == '\0') goto LAB_0046ca90;
  local_48 = 0x14;
  FUN_00408d5c(local_14,local_5c,local_60);
  local_3c = local_3c + 1;
  local_48 = 8;
  FUN_004a76a8(*(int *)param_1[0x85],0xb,0,0);
  FUN_0046c760((int)param_1);
  FUN_0041ac90((int *)param_1[0x85],(int)local_14);
  FUN_004a76a8(*(int *)param_1[0x85],0xb,1,0);
  (**(code **)(*(int *)(*(int *)param_1[0x85] + 8) + 0x68))();
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(*param_1 + 0x14) + 8);
  }
  puVar2 = FUN_004dd744(*(int *)(*param_1 + 0x14),iVar3,(int *)&DAT_0040299c,(int *)&DAT_0045da64,0)
  ;
  local_48 = 0x20;
  FUN_004cf628((int)local_24,(uint *)s_Description_of_004fd3d5);
  local_3c = local_3c + 1;
  local_48 = 0x2c;
  FUN_00408cbc(local_34,local_5c,local_60);
  local_3c = local_3c + 1;
  FUN_004d573c((int)local_24,(int)local_34);
  local_3c = local_3c + -1;
  if (local_2c != 0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      piVar4 = (int *)(local_2c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_0046c997;
    }
    FUN_004cc0bc();
    local_2c = 0;
  }
LAB_0046c997:
  local_48 = 8;
  FUN_00473470((int)puVar2,local_1c);
  local_3c = local_3c + -1;
  if (local_1c != (uint *)0x0) {
    if (local_1c[-3] != 0xffffffff) {
      puVar5 = local_1c + -3;
      if (puVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (puVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *puVar5 = *puVar5 - 1;
        iVar3 = *puVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_0046ca1a;
    }
    FUN_004cc0bc();
    local_1c = (uint *)0x0;
  }
LAB_0046ca1a:
  local_3c = local_3c + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar4 = (int *)(local_c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_0046ca90;
    }
    FUN_004cc0bc();
  }
LAB_0046ca90:
  *in_FS_OFFSET = local_58;
  return;
}

