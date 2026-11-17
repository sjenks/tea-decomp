// rea decompile_all
// name: FUN_0047fdac
// address: 0x47fdac
// body: available
// range: 0x47fdac-0x48011e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0047ff3b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0047fdac(int param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 local_e8 [15];
  undefined4 local_ac [17];
  undefined4 local_68;
  undefined *local_58;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_2c;
  int local_20;
  undefined4 *local_18;
  undefined1 local_14 [8];
  undefined *local_c;
  
  bVar5 = 0;
  FUN_004dce64(0x502ac8);
  if ((param_3 == *(int *)(param_1 + 8 + param_2 * 4)) ||
     (*(int *)(param_1 + 8 + param_2 * 4) = param_3, *(int *)(param_1 + 4) != 0)) goto LAB_0048010f;
  if (*(int *)(param_1 + 0x248) == 2) {
    local_40 = DAT_005017a0;
    if ((int)param_2 < 4) {
      FUN_004d50d0(*(int **)(param_1 + 0x244),0x3c);
      if (param_3 != 1) {
        FUN_004d50d0(*(int **)(param_1 + 0x244),0x2f);
      }
      FUN_004d50d0(*(int **)(param_1 + 0x244),*(undefined1 *)((int)&local_40 + param_2));
      FUN_004d50d0(*(int **)(param_1 + 0x244),0x3e);
    }
  }
  else if ((*(int *)(param_1 + 0x248) == 3) && (param_3 != -0x80000000)) {
    FUN_004d50d0(*(int **)(param_1 + 0x244),0x5c);
    FUN_004d5374(*(int **)(param_1 + 0x244),(uint *)(&PTR_DAT_005017a4)[param_2]);
    if (param_2 < 4) {
      if (param_3 == 0) {
        FUN_004d50d0(*(int **)(param_1 + 0x244),0x30);
      }
    }
    else if (param_2 == 4) {
      if ((*(int *)(param_1 + 0x250) != 0) && (-1 < param_3)) {
        iVar2 = *(int *)(param_1 + 0x1b8) - *(int *)(param_1 + 0x1b4);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0xf;
        }
        if (param_3 < iVar2 >> 4) {
          FUN_00482a60(*(int *)(param_1 + 0x250),param_3 * 0x10 + *(int *)(param_1 + 0x1b4));
          FUN_004d4ca4(*(int **)(param_1 + 0x244));
        }
      }
    }
    else if (param_2 == 5) {
      if (*(int *)(param_1 + 0x250) != 0) {
        local_c = &DAT_00513d64;
        local_58 = &DAT_00513d64;
        local_20 = local_20 + 1;
        local_2c = 0x20;
        if (-1 < param_3) {
          iVar2 = *(int *)(param_1 + 0x198) - *(int *)(param_1 + 0x194);
          if (iVar2 < 0) {
            iVar2 = iVar2 + 0xf;
          }
          if (param_3 < iVar2 >> 4) {
            FUN_004cf384((int)local_14,param_3 * 0x10 + *(int *)(param_1 + 0x194));
          }
        }
        FUN_00482908(*(int *)(param_1 + 0x250),(int)local_14);
        FUN_004d4ca4(*(int **)(param_1 + 0x244));
        local_20 = local_20 + -1;
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
            if (iVar2 != 0) goto LAB_00480014;
          }
          local_44 = local_c + -0xc;
          FUN_004cc0bc();
          local_48 = 0;
          local_4c = local_14;
          local_c = (undefined *)0x0;
          local_68 = 0;
        }
LAB_00480014:
        local_2c = 0;
      }
    }
    else if (param_2 == 6) {
      FUN_004d4ca4(*(int **)(param_1 + 0x244));
    }
    FUN_004d50d0(*(int **)(param_1 + 0x244),0x20);
  }
  puVar1 = (undefined4 *)FUN_0048070c(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(int *)(puVar1[0x12] + -4) == 0) {
      FUN_00480754(local_ac,param_1);
      puVar4 = local_ac;
      for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar1 = *puVar4;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        puVar1 = puVar1 + (uint)bVar5 * -2 + 1;
      }
    }
    else {
      iVar2 = FUN_00480608(param_1);
      if (iVar2 != 0) {
        local_18 = (undefined4 *)FUN_004cc0f0();
        if (local_18 != (undefined4 *)0x0) {
          local_2c = 0x44;
          FUN_00480754(local_e8,param_1);
          FUN_00481c1c(local_18,local_e8);
          local_2c = 0x38;
        }
        piVar3 = *(int **)(iVar2 + 0xa8);
        if (piVar3 == *(int **)(iVar2 + 0xb8)) {
          FUN_00480144(iVar2 + 0xa0,piVar3,&local_18);
        }
        else {
          *piVar3 = (int)local_18;
          *(int *)(iVar2 + 0xa8) = *(int *)(iVar2 + 0xa8) + 4;
        }
      }
    }
  }
LAB_0048010f:
  *in_FS_OFFSET = local_3c;
  return;
}

