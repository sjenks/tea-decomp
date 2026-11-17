// rea decompile_all
// name: FUN_004526b4
// address: 0x4526b4
// body: available
// range: 0x4526b4-0x452aca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_004526b4(int *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 *in_FS_OFFSET;
  char cVar8;
  undefined4 local_180;
  undefined1 local_15c [8];
  uint *local_154;
  int local_14c;
  int local_148;
  undefined4 local_cc [2];
  undefined4 local_c4 [34];
  undefined1 local_3c [8];
  uint *local_34;
  uint local_2c [2];
  uint *local_24;
  
  FUN_004dce64(0x4f8374);
  FUN_004c279c(local_2c,0x81a04,(uint *)s_Dictionary_File____tsd____tsd_Al_004f76b7,0,0x4f75e6,
               0x4f76e3,0x1000,0,0);
  puVar2 = FUN_0041238c(param_1[0xe],0);
  FUN_00412434((int)local_3c,(int)puVar2,0);
  FUN_004dcc40(local_24,local_34,(char *)0x104);
  piVar3 = FUN_004c2c5c(&local_14c,0,*param_1,(int)local_2c,0,0x4f76e5,0);
  iVar4 = (**(code **)(piVar3[3] + 0x14))();
  cVar8 = iVar4 == 1;
  *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + -0x5c;
  *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + -0x5c;
  FUN_0048c668(&local_14c,0);
  *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + 0x5c;
  *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + 0x5c;
  *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + 0x96;
  FUN_004a52c0(local_c4,0);
  *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + -0x96;
  FUN_00489c54(local_cc,0);
  if (cVar8 != '\0') {
    pcVar5 = FUN_004dc9f4(local_24);
    if (pcVar5[(int)local_24 + 1] == '\0') {
      iVar4 = FUN_00464bb4(param_1[0xe],local_24);
      if (iVar4 != 0) {
        FUN_0041251c((int)puVar2,local_24);
      }
    }
    else {
      puVar6 = (uint *)((char *)((int)local_24 + (int)pcVar5) + 1);
      do {
        FUN_004cf628((int)local_15c,local_24);
        FUN_004d5c40((int)local_15c,local_154[-1],0,1,0x5c);
        uVar1 = local_154[-1];
        pcVar5 = FUN_004dc9f4(puVar6);
        FUN_004cfad4((int)local_15c,uVar1,0,(uint)puVar6,(uint)pcVar5,0,(uint)pcVar5);
        iVar4 = FUN_00464bb4(param_1[0xe],local_154);
        if (iVar4 != 0) {
          FUN_0041251c((int)puVar2,local_154);
        }
        pcVar5 = FUN_004dc9f4(puVar6);
        puVar6 = (uint *)((int)puVar6 + (int)(pcVar5 + 1));
        if (local_154 != (uint *)0x0) {
          if (local_154[-3] != 0xffffffff) {
            puVar7 = local_154 + -3;
            if (puVar7 == &DAT_00513d58) {
              iVar4 = 1;
            }
            else if (puVar7 == &DAT_00513d58) {
              iVar4 = 1;
            }
            else {
              *puVar7 = *puVar7 - 1;
              iVar4 = *puVar7 + 1;
            }
            if (iVar4 != 0) goto LAB_00452a05;
          }
          FUN_004cc0bc();
          local_154 = (uint *)0x0;
        }
LAB_00452a05:
      } while ((char)*puVar6 != '\0');
    }
  }
  FUN_0045269c(param_1);
  if (local_34 != (uint *)0x0) {
    if (local_34[-3] != 0xffffffff) {
      puVar6 = local_34 + -3;
      if (puVar6 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (puVar6 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *puVar6 = *puVar6 - 1;
        iVar4 = *puVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_00452a9a;
    }
    FUN_004cc0bc();
    local_34 = (uint *)0x0;
  }
LAB_00452a9a:
  FUN_004c2888((int)local_2c,2);
  *in_FS_OFFSET = local_180;
  return;
}

