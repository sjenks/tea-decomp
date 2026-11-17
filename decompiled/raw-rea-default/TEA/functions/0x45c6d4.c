// rea decompile_all
// name: FUN_0045c6d4
// address: 0x45c6d4
// body: available
// range: 0x45c6d4-0x45c915 inclusive
// range: 0x45c92a-0x45cbcc inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0045c6d4(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  int iVar7;
  int iVar8;
  undefined4 local_4c;
  undefined1 local_28 [8];
  int local_20;
  undefined1 local_18 [8];
  int local_10;
  int local_8;
  
  FUN_004dce64(0x4f9be8);
  if (param_2 < 4) {
    if (param_2 == 2) {
      pcVar1 = s__Stop_004f78bf;
    }
    else if (param_2 == 3) {
      pcVar1 = s_Re_sume_004f78c5;
    }
    else if (*(int *)(param_1 + 0x690) == 0) {
      pcVar1 = s_Word__Search_004f78cd;
    }
    else {
      pcVar1 = s_Full_Text__Search_004f78da;
    }
    FUN_004a7780(*(int *)(param_1 + 0x210),(uint *)pcVar1);
  }
  if ((param_2 != *(int *)(param_1 + 100)) && (*(int *)(param_1 + 100) = param_2, param_2 < 4)) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 8) + 0x60))();
    (**(code **)(*(int *)(*(int *)(param_1 + 0x158) + 8) + 0x60))();
    (**(code **)(*(int *)(*(int *)(param_1 + 0x2d8) + 8) + 0x60))();
    (**(code **)(*(int *)(*(int *)(param_1 + 0x50c) + 8) + 0x60))();
    if (*(int **)(param_1 + 0xca8) == (int *)0x0) {
      FUN_004a8278();
      (**(code **)(*(int *)(**(int **)(param_1 + 0x68c) + 8) + 0x60))();
    }
    else {
      (**(code **)(*(int *)(**(int **)(param_1 + 0xca8) + 8) + 0x60))();
    }
    uVar6 = 0;
    while( true ) {
      iVar4 = *(int *)(param_1 + 0xc88) - *(int *)(param_1 + 0xc84);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 3;
      }
      if ((uint)(iVar4 >> 2) <= uVar6) break;
      piVar5 = (int *)(uVar6 * 4 + *(int *)(param_1 + 0xc84));
      if (*piVar5 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*piVar5 + 8);
      }
      piVar5 = FUN_004dd744(*piVar5,iVar4,(int *)&DAT_0040299c,(int *)&DAT_00406af0,0);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*(int *)(*piVar5 + 8) + 0x60))();
      }
      uVar6 = uVar6 + 1;
    }
  }
  switch(*(undefined4 *)(param_1 + 100)) {
  case 0:
    FUN_0044fdb8((int *)(param_1 + 0x6d4),0,0,0,0);
    break;
  case 1:
    FUN_00411748(*(int *)(param_1 + 0x6c),3);
    local_8 = *(int *)(param_1 + 0x70);
    if (local_8 != 0) {
      FUN_0041066c(local_8,3);
    }
    FUN_004108b8(*(int *)(param_1 + 0x74),3);
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  case 3:
    iVar8 = 0;
    iVar7 = 0;
    iVar4 = *(int *)(param_1 + 0x6d0);
    iVar2 = FUN_00466b18(*(int *)(param_1 + 0x38));
    FUN_0044fdb8((int *)(param_1 + 0x6d4),iVar2,iVar4,iVar7,iVar8);
    if (*(int *)(param_1 + 100) == 1) {
      uVar6 = 0x3318;
    }
    else {
      uVar6 = 0x136a;
    }
    iVar4 = *(int *)(param_1 + 0x38);
    FUN_00464a94((int)local_18,iVar4,uVar6);
    FUN_00465a64(iVar4,(int)local_18);
    if (local_10 != 0) {
      if (*(int *)(local_10 + -0xc) != -1) {
        piVar5 = (int *)(local_10 + -0xc);
        if (piVar5 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar4 = *piVar5 + 1;
        }
        if (iVar4 != 0) break;
      }
      FUN_004cc0bc();
    }
    break;
  case 2:
    iVar4 = *(int *)(param_1 + 0x38);
    FUN_00464a94((int)local_28,iVar4,0x1360);
    FUN_00465a64(iVar4,(int)local_28);
    if (local_20 != 0) {
      if (*(int *)(local_20 + -0xc) != -1) {
        piVar5 = (int *)(local_20 + -0xc);
        if (piVar5 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar4 = *piVar5 + 1;
        }
        if (iVar4 != 0) break;
      }
      FUN_004cc0bc();
    }
    break;
  case 4:
    uVar6 = 0;
    while( true ) {
      iVar4 = *(int *)(param_1 + 0xc88) - *(int *)(param_1 + 0xc84);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 3;
      }
      if ((uint)(iVar4 >> 2) <= uVar6) break;
      if (*(int *)(uVar6 * 4 + *(int *)(param_1 + 0xc84)) != 0) {
        piVar5 = (int *)(uVar6 * 4 + *(int *)(param_1 + 0xc84));
        if (*piVar5 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(*piVar5 + 8);
        }
        puVar3 = FUN_004dd744(*piVar5,iVar4,(int *)&DAT_0040299c,(int *)&DAT_00402910,0);
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)(puVar3[3] + 0x90))();
        }
        (**(code **)(*(int *)(*(int *)(uVar6 * 4 + *(int *)(param_1 + 0xc84)) + 8) + 0x24))();
      }
      uVar6 = uVar6 + 1;
    }
    FUN_0045adf0(param_1);
  }
  *in_FS_OFFSET = local_4c;
  return;
}

