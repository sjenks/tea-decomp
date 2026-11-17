// rea decompile_all
// name: FUN_004062dc
// address: 0x4062dc
// body: available
// range: 0x4062dc-0x4068c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_004062dc(int *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_88 [13];
  undefined1 *local_54;
  undefined4 local_50;
  uint *local_4c;
  uint *local_48;
  uint *local_40;
  uint local_3c;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  uint *local_c;
  
  FUN_004dce64(0x4eb1b8);
  FUN_0046823c(param_1);
  (**(code **)(param_1[3] + 0xb8))();
  (**(code **)(param_1[3] + 0xb8))();
  (**(code **)(param_1[3] + 0xb8))();
  (**(code **)(param_1[3] + 0xb8))();
  (**(code **)(param_1[3] + 0xb8))();
  (**(code **)(param_1[3] + 0xb8))();
  (**(code **)(param_1[3] + 0xb8))();
  FUN_0040625c((int)param_1);
  FUN_004ac750(param_1 + 0x10a,(uint)(*(int *)(param_1[0x7e4] + 0x24) == 1));
  FUN_004ac750(param_1 + 0x13e,(uint)(*(int *)(param_1[0x7e4] + 0x24) == 0));
  FUN_004ac750(param_1 + 0x172,(uint)(*(int *)(param_1[0x7e4] + 0x24) == 2));
  piVar1 = param_1 + 0x7e2;
  FUN_00419418(param_1 + 0x290,(int *)(param_1[0x7e4] + 0x30),piVar1,0,0x3ff00000,0,0x3ff00000);
  FUN_00419418(param_1 + 0x304,(int *)(param_1[0x7e4] + 0x70),piVar1,0,0x3ff00000,0,0x3ff00000);
  FUN_00419418(param_1 + 0x378,(int *)(param_1[0x7e4] + 0xb0),piVar1,0,0x3ff00000,0,0x3ff00000);
  iVar6 = 0x3ff00000;
  iVar5 = 0;
  iVar4 = 0x3ff00000;
  iVar3 = 0;
  local_3c = FUN_0048c12c(&DAT_0051b198);
  FUN_00419418(param_1 + 0x3ec,(int *)(param_1[0x7e4] + 0xf0),(int *)&local_3c,iVar3,iVar4,iVar5,
               iVar6);
  FUN_00419418(param_1 + 0x460,(int *)(param_1[0x7e4] + 0x130),(int *)(param_1[0x7e4] + 0x2c),0,
               0x3ff00000,0,0x3ff00000);
  FUN_00419418(param_1 + 0x4d4,(int *)(param_1[0x7e4] + 0x170),(int *)(param_1[0x7e4] + 0x2c),0,
               0x3ff00000,0,0x3ff00000);
  FUN_00418a48(param_1 + 0x232,(int *)(param_1[0x7e4] + 0x2c));
  FUN_004ac750(param_1 + 0x51c,(uint)(*(int *)(param_1[0x7e4] + 0x1c0) != 0));
  FUN_004ac750(param_1 + 0x54e,(uint)(*(int *)(param_1[0x7e4] + 0x1c4) != 0));
  FUN_004ac750(param_1 + 0x6b6,(uint)(*(int *)(param_1[0x7e4] + 0x1b0) != 0));
  FUN_004ac750(param_1 + 0x6e8,(uint)(*(int *)(param_1[0x7e4] + 0x1b4) != 0));
  FUN_004ac750(param_1 + 0x5e8,(uint)(*(int *)(param_1[0x7e4] + 0x1b8) != 0));
  FUN_004ac750(param_1 + 0x682,(uint)(*(int *)(param_1[0x7e4] + 0x1bc) == 1));
  FUN_004ac750(param_1 + 0x64e,(uint)(*(int *)(param_1[0x7e4] + 0x1bc) == 0));
  FUN_004ac750(param_1 + 0x61a,(uint)(*(int *)(param_1[0x7e4] + 0x1bc) == -1));
  FUN_004ac750(param_1 + 0x580,(uint)(*(int *)(param_1[0x7e4] + 0x1c8) == 0));
  FUN_004ac750(param_1 + 0x5b4,(uint)(*(int *)(param_1[0x7e4] + 0x1c8) != 0));
  FUN_004ac750(param_1 + 0x71a,(uint)(*(int *)(param_1[0x7e4] + 0x1cc) != 0));
  FUN_004ac750(param_1 + 0x74c,(uint)(*(int *)(param_1[0x7e4] + 0x1d0) != 0));
  FUN_004ac750(param_1 + 0x77e,(uint)(*(int *)(param_1[0x7e4] + 0x1d4) != 0));
  FUN_004ac750(param_1 + 0x7b0,(uint)(*(int *)(param_1[0x7e4] + 0x1d8) != 0));
  iVar3 = 1;
  puVar2 = (uint *)FUN_00408c8c(*(undefined4 **)(param_1[0x7e4] + 0x28));
  FUN_0041c4f8((int)(param_1 + 0x1d8),puVar2,iVar3);
  while( true ) {
    FUN_004e0344((undefined1 *)local_88,(byte *)s_Dictionary_d_004eae85);
    local_28 = 0x14;
    FUN_00416dd4((int)local_14,(int)param_1,local_88,
                 (uint *)(s_Pattern_Property_Change_004eae3c + 0x17));
    local_28 = 8;
    if (local_c[-1] == 0) break;
    local_1c = local_1c + 1;
    FUN_0041c4f8((int)(param_1 + 0x1d8),local_c,0);
    local_1c = local_1c + -1;
    if (local_c != (uint *)0x0) {
      if (local_c[-3] != 0xffffffff) {
        puVar2 = local_c + -3;
        if (puVar2 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (puVar2 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *puVar2 = *puVar2 - 1;
          iVar3 = *puVar2 + 1;
        }
        if (iVar3 != 0) goto LAB_004068a9;
      }
      local_48 = local_c + -3;
      local_4c = local_c + -3;
      FUN_004cc0bc();
      local_50 = 0;
      local_54 = local_14;
      local_c = (uint *)0x0;
    }
LAB_004068a9:
    local_28 = 0;
  }
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      puVar2 = local_c + -3;
      if (puVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (puVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *puVar2 = *puVar2 - 1;
        iVar3 = *puVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_004068b5;
    }
    local_40 = local_c + -3;
    FUN_004cc0bc();
  }
LAB_004068b5:
  *in_FS_OFFSET = local_38;
  return;
}

