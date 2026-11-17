// rea decompile_all
// name: FUN_00420ec0
// address: 0x420ec0
// body: available
// range: 0x420ec0-0x42116b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00420f55) */

void __cdecl FUN_00420ec0(int param_1,int *param_2,int param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined *local_88;
  undefined *local_7c;
  WPARAM local_78;
  WPARAM local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined2 local_58;
  int local_4c;
  undefined4 local_44 [12];
  undefined1 local_14 [8];
  undefined *local_c;
  
  FUN_004dce64(0x4efc04);
  iVar2 = GetDlgCtrlID(*(HWND *)(*param_2 + 0xc));
  if ((((iVar2 == 0x1e96) || (iVar2 == 0x1ea0)) || (iVar2 == 0x1e97)) || (iVar2 == 0x1ea1)) {
    if (param_2 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_2[3];
    }
    piVar3 = FUN_004dd744((int)param_2,iVar2,(int *)&DAT_00402be8,(int *)&DAT_004070f4,0);
    local_c = &DAT_00513d64;
    local_88 = &DAT_00513d64;
    local_4c = local_4c + 1;
    local_58 = 0x20;
    uVar4 = *(uint *)(param_3 + 0xc);
    local_70 = (int)(short)uVar4;
    local_6c = (int)(short)(uVar4 >> 0x10);
    local_74 = FUN_004a76a8(*piVar3,0x1a9,0,local_6c << 0x10 | uVar4 & 0xffff);
    iVar2 = (**(code **)(piVar3[3] + 0x24))();
    if ((int)local_74 < iVar2) {
      local_a0 = 0;
      local_9c = 0;
      local_98 = 0;
      local_94 = 0;
      local_78 = local_74;
      iVar2 = FUN_004a76a8(*piVar3,0x198,local_74,(LPARAM)&local_a0);
      if (iVar2 != -1) {
        if (((local_70 < local_a0) || (local_98 <= local_70)) ||
           ((local_6c < local_9c || (local_94 <= local_6c)))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_00408dac(piVar3[5],local_74);
        }
      }
    }
    uVar4 = FUN_004d40d0((int)local_14,0,*(uint *)(local_c + -4),*(byte **)(param_1 + 0x5a8),
                         *(uint *)(*(int *)(param_1 + 0x5a8) + -4));
    if (uVar4 != 0) {
      FUN_004cf384(param_1 + 0x5a0,(int)local_14);
      local_58 = 0x2c;
      puVar5 = FUN_0049f498(local_44,*(undefined4 *)(**(int **)(param_1 + 0x160) + 0xc),
                            *(undefined4 *)(*param_2 + 0xc),*(uint **)(param_1 + 0x5a8));
      local_4c = local_4c + 2;
      FUN_004a76a8(*param_4,0x40c,0,(LPARAM)puVar5);
      local_4c = local_4c + -2;
      FUN_004cc0cc();
      local_58 = 0x20;
    }
    local_4c = local_4c + -1;
    if (local_c != (undefined *)0x0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar3 = (int *)(local_c + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_0042115b;
      }
      local_7c = local_c + -0xc;
      FUN_004cc0bc();
    }
  }
LAB_0042115b:
  *in_FS_OFFSET = local_68;
  return;
}

