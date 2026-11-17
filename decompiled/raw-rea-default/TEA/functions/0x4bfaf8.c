// rea decompile_all
// name: FUN_004bfaf8
// address: 0x4bfaf8
// body: available
// range: 0x4bfaf8-0x4bfd5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004bfaf8(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  WPARAM WVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *in_FS_OFFSET;
  char cVar13;
  uint local_48;
  int local_38;
  undefined4 local_2c;
  
  FUN_004dce64(0x50fd98);
  iVar3 = *param_1;
  uVar2 = FUN_004a78f0(iVar3);
  if (param_3 == 0) {
    FUN_004bf6d0(param_2);
    iVar3 = (**(code **)(param_1[3] + 0x24))();
    local_38 = 0;
    iVar11 = 0;
    if (0 < iVar3) {
      do {
        iVar4 = (**(code **)(param_1[3] + 0x40))();
        if (local_38 < iVar4) {
          local_38 = iVar4;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar3);
    }
    puVar5 = (uint *)FUN_004cc180();
    for (iVar3 = 0; iVar11 = (**(code **)(param_1[3] + 0x24))(), iVar3 < iVar11; iVar3 = iVar3 + 1)
    {
      (**(code **)(param_1[3] + 0x44))();
      cVar13 = '\0';
      uVar6 = (**(code **)(param_1[3] + 0x48))();
      FUN_004bf908(param_2,puVar5,uVar6,cVar13);
    }
    FUN_004bf704((int)param_2);
    if ((uVar2 & 0x808) == 0) {
      iVar3 = (**(code **)(param_1[3] + 0x6c))();
      FUN_004bf950((int)param_2,iVar3);
    }
    else {
      WVar7 = FUN_004bfd60(param_1);
      if (0 < (int)WVar7) {
        iVar3 = FUN_004cc180();
        FUN_004bfdd8(param_1,iVar3,WVar7);
        iVar11 = 0;
        if (0 < (int)WVar7) {
          do {
            FUN_004bf950((int)param_2,*(int *)(iVar3 + iVar11 * 4));
            iVar11 = iVar11 + 1;
          } while (iVar11 < (int)WVar7);
        }
        FUN_004cc0cc();
      }
    }
    FUN_004cc0cc();
  }
  else if (param_3 == 1) {
    (**(code **)(param_1[3] + 0x58))(uVar2,param_1[3],iVar3,param_1);
    uVar8 = FUN_004bf6f4((int)param_2);
    local_48 = 0xffffffff;
    for (uVar12 = 0; uVar12 < *(uint *)(*param_2 + 1); uVar12 = uVar12 + 1) {
      uVar9 = (**(code **)(param_1[3] + 0x60))();
      if (uVar12 < *(uint *)(param_2[1] + 1)) {
        (**(code **)(param_1[3] + 0x4c))();
      }
      uVar1 = local_48;
      if ((uVar2 & 0x808) == 0) {
        if ((((uVar8 == 0) || (uVar1 = uVar9, uVar12 != **(uint **)(param_2[2] + 9))) &&
            (uVar1 = local_48, local_48 != 0xffffffff)) && ((int)uVar9 <= (int)local_48)) {
          uVar1 = local_48 + 1;
        }
      }
      else {
        uVar10 = 0;
        if (uVar8 != 0) {
          do {
            if (*(uint *)(*(int *)(param_2[2] + 9) + uVar10 * 4) == uVar12) {
              FUN_004a76a8(*param_1,0x185,1,uVar9 & 0xffff);
              break;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar8);
        }
      }
      local_48 = uVar1;
    }
    if ((local_48 != 0xffffffff) && ((uVar2 & 0x808) == 0)) {
      (**(code **)(param_1[3] + 0x70))();
    }
  }
  *in_FS_OFFSET = local_2c;
  return 0xc;
}

