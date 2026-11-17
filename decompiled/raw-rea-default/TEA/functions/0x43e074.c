// rea decompile_all
// name: FUN_0043e074
// address: 0x43e074
// body: available
// range: 0x43e074-0x43e894 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0043e074(int *param_1)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_80;
  undefined1 local_58 [8];
  undefined4 *local_50;
  int local_48;
  undefined1 local_44 [8];
  undefined4 *local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4f585c);
  FUN_004156f4(param_1);
  if (param_1[0x1b] < 0) {
    for (iVar5 = 0; iVar4 = FUN_00408b14(param_1[0x1a]), iVar5 < iVar4; iVar5 = iVar5 + 1) {
      FUN_00408cbc(local_34,param_1[0x1a],iVar5);
      (**(code **)(*(int *)((int)param_1 + 0x47f) + 0x60))();
      puVar3 = (uint *)FUN_00408c98(param_1[0x1a],iVar5);
      FUN_004cf628((int)local_44,puVar3);
      if (param_1[0x2a] == param_1[0x2e]) {
        FUN_0040e240((int)(param_1 + 0x28),param_1[0x2a],(int)local_44);
      }
      else {
        local_48 = param_1[0x2a];
        if (local_48 != 0) {
          *(undefined4 *)(local_48 + 8) = 0;
          if (local_3c[-3] == -1 || local_3c[-3] + 1 < 0) {
            uVar1 = local_3c[-1];
            piVar2 = FUN_004cf7b0(local_48,uVar1,uVar1);
            *(int **)(local_48 + 8) = piVar2 + 3;
            FUN_004dc7d4(*(undefined4 **)(local_48 + 8),local_3c,uVar1);
          }
          else {
            *(undefined4 **)(local_48 + 8) = local_3c;
            piVar2 = (int *)(*(int *)(local_48 + 8) + -0xc);
            if (piVar2 != &DAT_00513d58) {
              *piVar2 = *piVar2 + 1;
            }
          }
        }
        param_1[0x2a] = param_1[0x2a] + 0x10;
      }
      if (local_3c != (undefined4 *)0x0) {
        if (local_3c[-3] != -1) {
          piVar2 = local_3c + -3;
          if (piVar2 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (piVar2 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *piVar2 = *piVar2 + -1;
            iVar4 = *piVar2 + 1;
          }
          if (iVar4 != 0) goto LAB_0043e550;
        }
        FUN_004cc0bc();
        local_3c = (undefined4 *)0x0;
      }
LAB_0043e550:
      FUN_00408d5c(local_58,param_1[0x1a],iVar5);
      if (param_1[0x32] == param_1[0x36]) {
        FUN_0040e240((int)(param_1 + 0x30),param_1[0x32],(int)local_58);
      }
      else {
        iVar4 = param_1[0x32];
        if (iVar4 != 0) {
          *(undefined4 *)(iVar4 + 8) = 0;
          if (local_50[-3] == -1 || local_50[-3] + 1 < 0) {
            uVar1 = local_50[-1];
            piVar2 = FUN_004cf7b0(iVar4,uVar1,uVar1);
            *(int **)(iVar4 + 8) = piVar2 + 3;
            FUN_004dc7d4(*(undefined4 **)(iVar4 + 8),local_50,uVar1);
          }
          else {
            *(undefined4 **)(iVar4 + 8) = local_50;
            piVar2 = (int *)(*(int *)(iVar4 + 8) + -0xc);
            if (piVar2 != &DAT_00513d58) {
              *piVar2 = *piVar2 + 1;
            }
          }
        }
        param_1[0x32] = param_1[0x32] + 0x10;
      }
      if (local_50 != (undefined4 *)0x0) {
        if (local_50[-3] != -1) {
          piVar2 = local_50 + -3;
          if (piVar2 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (piVar2 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *piVar2 = *piVar2 + -1;
            iVar4 = *piVar2 + 1;
          }
          if (iVar4 != 0) goto LAB_0043e78c;
        }
        FUN_004cc0bc();
        local_50 = (undefined4 *)0x0;
      }
LAB_0043e78c:
      if (local_2c != 0) {
        if (*(int *)(local_2c + -0xc) != -1) {
          piVar2 = (int *)(local_2c + -0xc);
          if (piVar2 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (piVar2 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *piVar2 = *piVar2 + -1;
            iVar4 = *piVar2 + 1;
          }
          if (iVar4 != 0) goto LAB_0043e825;
        }
        FUN_004cc0bc();
        local_2c = 0;
      }
LAB_0043e825:
    }
    FUN_004a76a8(*(int *)((int)param_1 + 0x473),0x185,1,0);
    FUN_0043e91c((int)param_1);
    goto LAB_0043e87e;
  }
  (**(code **)(*(int *)(param_1[0xf2] + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)((int)param_1 + 0x473) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)((int)param_1 + 0x51d) + 8) + 0x60))();
  (**(code **)(*(int *)(param_1[0x173] + 8) + 0x60))();
  (**(code **)(*(int *)(param_1[0x1a2] + 8) + 0x60))();
  FUN_00408cbc(local_14,param_1[0x1a],param_1[0x1b]);
  FUN_00464a94((int)local_24,param_1[0xe],0x170c);
  FUN_004d573c((int)local_14,(int)local_24);
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar2 = (int *)(local_1c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2 + 1;
      }
      if (iVar5 != 0) goto LAB_0043e1fe;
    }
    FUN_004cc0bc();
    local_1c = 0;
  }
LAB_0043e1fe:
  FUN_004d573c((int)local_14,(int)(param_1 + 0x22));
  FUN_0041b474(param_1 + 100,(int)local_14);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2 + 1;
      }
      if (iVar5 != 0) goto LAB_0043e87e;
    }
    FUN_004cc0bc();
    local_c = 0;
  }
LAB_0043e87e:
  FUN_0043dfb0((int)param_1);
  *in_FS_OFFSET = local_80;
  return;
}

