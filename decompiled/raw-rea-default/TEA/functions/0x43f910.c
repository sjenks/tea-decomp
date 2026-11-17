// rea decompile_all
// name: FUN_0043f910
// address: 0x43f910
// body: available
// range: 0x43f910-0x43fb98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0043f954) */

int __cdecl FUN_0043f910(int param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  FUN_004dce64(0x4f5c8c);
  local_c = (undefined4 *)&DAT_00513d64;
  iVar2 = FUN_004dcce8(param_2,&DAT_004f5d58);
  if (param_2[iVar2] != '\0') {
    pcVar4 = param_2 + iVar2;
    pcVar3 = thunk_FUN_004dcc90(pcVar4,&DAT_004f5d58);
    if (pcVar3 != (char *)0x0) {
      iVar2 = FUN_004d1c6c((int)local_24,(undefined4 *)pcVar4,(int)pcVar3 - (int)pcVar4);
      FUN_004cf384((int)local_14,iVar2);
      if (local_1c != 0) {
        if (*(int *)(local_1c + -0xc) != -1) {
          piVar5 = (int *)(local_1c + -0xc);
          if (piVar5 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else if (piVar5 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else {
            *piVar5 = *piVar5 + -1;
            iVar2 = *piVar5 + 1;
          }
          if (iVar2 != 0) goto LAB_0043fa35;
        }
        FUN_004cc0bc();
        local_1c = 0;
      }
    }
  }
LAB_0043fa35:
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    piVar5 = FUN_004cf7b0(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar5 + 3;
    FUN_004dc7d4(*(undefined4 **)(param_1 + 8),local_c,uVar1);
  }
  else {
    *(undefined4 **)(param_1 + 8) = local_c;
    piVar5 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar5 != &DAT_00513d58) {
      *piVar5 = *piVar5 + 1;
    }
  }
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar5 = local_c + -3;
      if (piVar5 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar2 = *piVar5 + 1;
      }
      if (iVar2 != 0) goto LAB_0043fb7e;
    }
    FUN_004cc0bc();
  }
LAB_0043fb7e:
  *in_FS_OFFSET = local_48;
  return param_1;
}

