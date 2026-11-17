// rea decompile_all
// name: FUN_004c1b80
// address: 0x4c1b80
// body: available
// range: 0x4c1b80-0x4c1e2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004c1be3) */

int * __cdecl FUN_004c1b80(int *param_1,int param_2,LPCSTR param_3)

{
  uint *puVar1;
  uint uVar2;
  FARPROC pFVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_58;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined *local_c;
  
  FUN_004dce64(0x5105d4);
  pFVar3 = GetProcAddress(*(HMODULE *)(param_2 + 8),param_3);
  *param_1 = (int)pFVar3;
  if (*param_1 != 0) goto LAB_004c1e1a;
  local_c = &DAT_00513d64;
  if ((short)((uint)param_3 >> 0x10) == 0) {
    FUN_0048f35c((int)local_34,0x7ff4,(uint)param_3 & 0xffff,DAT_00512a1c);
    FUN_004cf384((int)local_14,(int)local_34);
    if (local_2c != 0) {
      if (*(int *)(local_2c + -0xc) != -1) {
        piVar6 = (int *)(local_2c + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_004c1d68;
      }
      FUN_004cc0bc();
      local_2c = 0;
    }
  }
  else {
    FUN_0048f258((int)local_24,0x7ff5,param_3,DAT_00512a1c);
    FUN_004cf384((int)local_14,(int)local_24);
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar6 = (int *)(local_1c + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_004c1d68;
      }
      FUN_004cc0bc();
      local_1c = 0;
    }
  }
LAB_004c1d68:
  puVar1 = *(uint **)(param_2 + 4);
  uVar2 = *(uint *)(local_c + -4);
  pcVar5 = FUN_004dc9f4(puVar1);
  FUN_004cfad4((int)local_14,uVar2,0,(uint)puVar1,(uint)pcVar5,0,(uint)pcVar5);
  FUN_0048f024((int)local_14,0);
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar6 = (int *)(local_c + -0xc);
      if (piVar6 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar6 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar4 = *piVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_004c1e1a;
    }
    FUN_004cc0bc();
  }
LAB_004c1e1a:
  *in_FS_OFFSET = local_58;
  return param_1;
}

