// rea decompile_all
// name: FUN_004717cc
// address: 0x4717cc
// body: available
// range: 0x4717cc-0x4722f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00471beb) */
/* WARNING: Removing unreachable block (ram,0x00471cfd) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffee8 : 0x00471bf9 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint __cdecl
FUN_004717cc(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000048;
  int in_stack_0000004c;
  int in_stack_0000006c;
  int in_stack_0000007c;
  code *in_stack_0000008c;
  undefined4 local_b0;
  undefined1 local_8c [8];
  int *local_84;
  undefined4 local_7c;
  undefined4 local_74;
  int local_70;
  int local_6c;
  int local_5c;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_3c;
  undefined1 local_34 [8];
  int *local_2c;
  undefined1 local_24 [8];
  int *local_1c;
  undefined4 local_14;
  undefined **local_c;
  undefined **local_8;
  
  FUN_004dce64(0x4fe9a8);
  while( true ) {
    while (cVar3 = (*in_stack_0000008c)(), cVar3 != '\0') {
      param_1 = param_1 + 0x80;
    }
    do {
      uVar2 = param_2;
      param_2 = uVar2 - 0x80;
      cVar3 = (*in_stack_0000008c)();
    } while (cVar3 != '\0');
    if (param_2 <= param_1) break;
    local_84 = (int *)0x0;
    iVar4 = *(int *)(*(int *)(param_1 + 8) + -0xc);
    if (iVar4 == -1 || iVar4 + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(param_1 + 8) + -4);
      local_84 = FUN_004cf7b0(local_8c,uVar1,uVar1);
      local_84 = local_84 + 3;
      FUN_004dc7d4(local_84,*(undefined4 **)(param_1 + 8),uVar1);
    }
    else {
      local_84 = *(int **)(param_1 + 8);
      piVar5 = local_84 + -3;
      if (piVar5 != &DAT_00513d58) {
        *piVar5 = *piVar5 + 1;
      }
    }
    local_7c = *(undefined4 *)(param_1 + 0x10);
    local_70 = 0;
    local_6c = 0;
    local_5c = 0;
    local_74 = 0x40;
    iVar4 = FUN_004cc0f0();
    if (iVar4 == 0) {
      local_8 = &PTR_FUN_004eac74;
      FUN_004e7cc4((uint *)&DAT_004040dc,&local_8,0,&LAB_00404134,1,0,0,0);
    }
    local_70 = iVar4;
    local_6c = FUN_0040a988(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x20),iVar4);
    local_50 = 0;
    local_4c = 0;
    local_3c = 0;
    local_54 = 0x40;
    local_5c = local_6c;
    iVar4 = FUN_004cc0f0();
    if (iVar4 == 0) {
      local_c = &PTR_FUN_004eac74;
      FUN_004e7cc4((uint *)&DAT_004040dc,&local_c,0,&LAB_00404134,1,0,0,0);
    }
    local_50 = iVar4;
    local_4c = FUN_0040a988(*(int *)(param_1 + 0x3c),*(int *)(param_1 + 0x40),iVar4);
    local_2c = (int *)0x0;
    iVar4 = *(int *)(*(int *)(param_1 + 0x60) + -0xc);
    local_3c = local_4c;
    if (iVar4 == -1 || iVar4 + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x60) + -4);
      local_2c = FUN_004cf7b0(local_34,uVar1,uVar1);
      local_2c = local_2c + 3;
      FUN_004dc7d4(local_2c,*(undefined4 **)(param_1 + 0x60),uVar1);
    }
    else {
      local_2c = *(int **)(param_1 + 0x60);
      piVar5 = local_2c + -3;
      if (piVar5 != &DAT_00513d58) {
        *piVar5 = *piVar5 + 1;
      }
    }
    local_1c = (int *)0x0;
    iVar4 = *(int *)(*(int *)(param_1 + 0x70) + -0xc);
    if (iVar4 == -1 || iVar4 + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x70) + -4);
      local_1c = FUN_004cf7b0(local_24,uVar1,uVar1);
      local_1c = local_1c + 3;
      FUN_004dc7d4(local_1c,*(undefined4 **)(param_1 + 0x70),uVar1);
    }
    else {
      local_1c = *(int **)(param_1 + 0x70);
      piVar5 = local_1c + -3;
      if (piVar5 != &DAT_00513d58) {
        *piVar5 = *piVar5 + 1;
      }
    }
    local_14 = *(undefined4 *)(param_1 + 0x78);
    FUN_004cf384(param_1,param_2);
    FUN_0040ab88(param_1 + 0x18,uVar2 - 0x68);
    FUN_0040ab88(param_1 + 0x38,uVar2 - 0x48);
    FUN_004cf384(param_1 + 0x58,uVar2 - 0x28);
    FUN_004cf384(param_1 + 0x68,uVar2 - 0x18);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(uVar2 - 0x70);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(uVar2 - 8);
    FUN_004cf384(param_2,(int)local_8c);
    FUN_0040ab88(uVar2 - 0x68,(int)&local_74);
    FUN_0040ab88(uVar2 - 0x48,(int)&local_54);
    FUN_004cf384(uVar2 - 0x28,(int)local_34);
    FUN_004cf384(uVar2 - 0x18,(int)local_24);
    *(undefined4 *)(uVar2 - 0x70) = local_7c;
    *(undefined4 *)(uVar2 - 8) = local_14;
    if (local_1c != (int *)0x0) {
      if (local_1c[-3] != -1) {
        piVar5 = local_1c + -3;
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
        if (iVar4 != 0) goto LAB_0047216d;
      }
      FUN_004cc0bc();
      local_1c = (int *)0x0;
    }
LAB_0047216d:
    if (local_2c != (int *)0x0) {
      if (local_2c[-3] != -1) {
        piVar5 = local_2c + -3;
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
        if (iVar4 != 0) goto LAB_00472203;
      }
      FUN_004cc0bc();
      local_2c = (int *)0x0;
    }
LAB_00472203:
    FUN_0040b4f0(&local_54,local_50,local_4c);
    FUN_004cc0bc();
    FUN_0040b4f0(&local_74,local_70,local_6c);
    FUN_004cc0bc();
    if (local_84 != (int *)0x0) {
      if (local_84[-3] != -1) {
        piVar5 = local_84 + -3;
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
        if (iVar4 != 0) goto LAB_004722de;
      }
      FUN_004cc0bc();
      local_84 = (int *)0x0;
    }
LAB_004722de:
    param_1 = param_1 + 0x80;
  }
  if (in_stack_0000007c != 0) {
    if (*(int *)(in_stack_0000007c + -0xc) != -1) {
      piVar5 = (int *)(in_stack_0000007c + -0xc);
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
      if (iVar4 != 0) goto LAB_004718fc;
    }
    FUN_004cc0bc();
    in_stack_0000007c = 0;
  }
LAB_004718fc:
  if (in_stack_0000006c != 0) {
    if (*(int *)(in_stack_0000006c + -0xc) != -1) {
      piVar5 = (int *)(in_stack_0000006c + -0xc);
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
      if (iVar4 != 0) goto LAB_0047199b;
    }
    FUN_004cc0bc();
    in_stack_0000006c = 0;
  }
LAB_0047199b:
  FUN_0040b4f0(&stack0x00000044,in_stack_00000048,in_stack_0000004c);
  FUN_004cc0bc();
  FUN_0040b4f0(&stack0x00000024,in_stack_00000028,in_stack_0000002c);
  FUN_004cc0bc();
  if (param_5 != 0) {
    if (*(int *)(param_5 + -0xc) != -1) {
      piVar5 = (int *)(param_5 + -0xc);
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
      if (iVar4 != 0) goto LAB_00471a91;
    }
    FUN_004cc0bc();
  }
LAB_00471a91:
  *in_FS_OFFSET = local_b0;
  return param_1;
}

