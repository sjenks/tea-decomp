// rea decompile_all
// name: FUN_00414708
// address: 0x414708
// body: available
// range: 0x414708-0x4149d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00414708(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_fffffeec;
  undefined4 uVar8;
  undefined4 local_38;
  undefined1 local_14 [8];
  byte *local_c;
  
  FUN_004dce64(0x4ed7f8);
  iVar2 = param_1;
  if (param_1 == param_2) {
LAB_004149c2:
    *in_FS_OFFSET = local_38;
    return;
  }
joined_r0x00414733:
  do {
    iVar5 = iVar2 + 0x10;
    if (iVar5 == param_2) goto LAB_004149c2;
    local_c = (byte *)0x0;
    iVar3 = *(int *)(*(int *)(iVar2 + 0x18) + -0xc);
    if (iVar3 == -1 || iVar3 + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(iVar2 + 0x18) + -4);
      piVar4 = FUN_004cf7b0(local_14,uVar1,uVar1);
      local_c = (byte *)(piVar4 + 3);
      FUN_004dc7d4((undefined4 *)local_c,*(undefined4 **)(iVar2 + 0x18),uVar1);
    }
    else {
      local_c = *(byte **)(iVar2 + 0x18);
      pbVar6 = local_c + -0xc;
      if (pbVar6 != (byte *)&DAT_00513d58) {
        *(int *)pbVar6 = *(int *)pbVar6 + 1;
      }
    }
    uVar8 = 0x414811;
    iVar3 = FUN_0043c624(local_c,*(int *)(local_c + -4),*(byte **)(param_1 + 8),
                         *(int *)(*(int *)(param_1 + 8) + -4));
    if (iVar3 < 0) {
      FUN_0040e070(param_1,iVar5,iVar2 + 0x20);
      FUN_004cf384(param_1,(int)local_14);
    }
    else {
      if (*(int *)(local_c + -0xc) == -1 || *(int *)(local_c + -0xc) + 1 < 0) {
        uVar1 = *(uint *)(local_c + -4);
        piVar4 = FUN_004cf7b0(&stack0xfffffeec,uVar1,uVar1);
        pbVar6 = (byte *)(piVar4 + 3);
        FUN_004dc7d4((undefined4 *)pbVar6,(undefined4 *)local_c,uVar1);
      }
      else {
        pbVar7 = local_c + -0xc;
        pbVar6 = local_c;
        if (pbVar7 != (byte *)&DAT_00513d58) {
          *(int *)pbVar7 = *(int *)pbVar7 + 1;
        }
      }
      FUN_004149d4(iVar5,in_stack_fffffeec,uVar8,pbVar6);
    }
    iVar2 = iVar5;
    if (local_c != (byte *)0x0) {
      if (*(int *)(local_c + -0xc) != -1) {
        pbVar6 = local_c + -0xc;
        if (pbVar6 == (byte *)&DAT_00513d58) {
          iVar5 = 1;
        }
        else if (pbVar6 == (byte *)&DAT_00513d58) {
          iVar5 = 1;
        }
        else {
          *(int *)pbVar6 = *(int *)pbVar6 + -1;
          iVar5 = *(int *)pbVar6 + 1;
        }
        if (iVar5 != 0) goto joined_r0x00414733;
      }
      FUN_004cc0bc();
    }
  } while( true );
}

