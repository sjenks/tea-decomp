// rea decompile_all
// name: FUN_004650a8
// address: 0x4650a8
// body: available
// range: 0x4650a8-0x465241 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004650fc) */

void __cdecl FUN_004650a8(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  int local_3c;
  undefined4 local_38;
  undefined1 local_14 [8];
  uint *local_c;
  
  FUN_004dce64(0x4fbeb0);
  local_3c = FUN_00452bcc(*(int *)(param_1 + 0x10));
  if (param_2 == 2) {
    local_3c = local_3c + -1;
  }
  local_c = (uint *)&DAT_00513d64;
  for (iVar6 = 0; iVar4 = FUN_00408b14(*(int *)(param_1 + 0x140)), iVar6 < iVar4; iVar6 = iVar6 + 1)
  {
    if (local_c[-1] != 0) {
      FUN_004d5c40((int)local_14,local_c[-1],0,1,0x3b);
    }
    iVar4 = iVar6;
    if (iVar6 == local_3c) {
      iVar4 = iVar6 + 1;
    }
    if (iVar6 == local_3c + 1) {
      iVar4 = iVar4 + -1;
    }
    puVar2 = (uint *)FUN_00408c98(*(int *)(param_1 + 0x140),iVar4);
    uVar1 = local_c[-1];
    pcVar3 = FUN_004dc9f4(puVar2);
    FUN_004cfad4((int)local_14,uVar1,0,(uint)puVar2,(uint)pcVar3,0,(uint)pcVar3);
  }
  puVar5 = FUN_00407734(local_c);
  FUN_00408884(*(int *)(param_1 + 0x140));
  *(undefined4 **)(param_1 + 0x140) = puVar5;
  FUN_00451784(*(int **)(param_1 + 0x10),param_2);
  FUN_00466b38(param_1);
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      puVar2 = local_c + -3;
      if (puVar2 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else if (puVar2 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else {
        *puVar2 = *puVar2 - 1;
        iVar6 = *puVar2 + 1;
      }
      if (iVar6 != 0) goto LAB_00465231;
    }
    FUN_004cc0bc();
  }
LAB_00465231:
  *in_FS_OFFSET = local_38;
  return;
}

