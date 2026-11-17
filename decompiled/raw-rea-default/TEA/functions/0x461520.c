// rea decompile_all
// name: FUN_00461520
// address: 0x461520
// body: available
// range: 0x461520-0x461bfe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00461915) */
/* WARNING: Removing unreachable block (ram,0x00461a27) */
/* WARNING: Removing unreachable block (ram,0x004619c7) */
/* WARNING: Removing unreachable block (ram,0x00461a1a) */
/* WARNING: Removing unreachable block (ram,0x00461ad0) */
/* WARNING: Removing unreachable block (ram,0x00461b09) */
/* WARNING: Removing unreachable block (ram,0x00461b17) */
/* WARNING: Removing unreachable block (ram,0x00461b3e) */
/* WARNING: Removing unreachable block (ram,0x00461b28) */
/* WARNING: Removing unreachable block (ram,0x00461b37) */
/* WARNING: Removing unreachable block (ram,0x00461b30) */
/* WARNING: Removing unreachable block (ram,0x00461b43) */
/* WARNING: Removing unreachable block (ram,0x00461b47) */
/* WARNING: Removing unreachable block (ram,0x00461ba1) */

void __cdecl FUN_00461520(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  char cVar5;
  undefined1 local_1e5 [73];
  int local_19c;
  int *local_198;
  int *local_194;
  int *local_190;
  int local_18c;
  undefined4 local_188;
  undefined2 local_178;
  int local_16c;
  int local_13c;
  int local_138;
  undefined4 local_bc [2];
  undefined4 local_b4 [34];
  uint local_2c [2];
  uint *local_24;
  
  FUN_004dce64(0x4faef4);
  local_18c = 0;
  iVar3 = 4;
  if (0x1504 < param_3) {
    if (param_3 < 0x3391) {
      if (param_3 != 0x3390) {
        if (param_3 != 0x155e) {
          if (param_3 != 0x1568) {
            if (param_3 == 0x15e0) {
              FUN_00423c6c((int *)param_1[0x18]);
              FUN_0046136c((int)param_1);
              FUN_0046524c(param_1[0xe],*param_1,0x31a6,param_1[0x18] + 0x10,0,0);
            }
            goto LAB_00461813;
          }
          local_18c = 1;
        }
        iVar3 = 2;
        goto LAB_00461813;
      }
    }
    else {
      if (param_3 != 0x33ae) {
        if (param_3 != 0x33cc) {
          if (param_3 != 0x33ea) goto LAB_00461813;
          local_18c = 1;
        }
        local_18c = local_18c + 1;
      }
      local_18c = local_18c + 1;
    }
    iVar3 = 0;
    goto LAB_00461813;
  }
  if (param_3 == 0x1504) {
    local_18c = 1;
LAB_004615f6:
    local_18c = local_18c + 1;
LAB_004615fc:
    local_18c = local_18c + 1;
  }
  else {
    if (param_3 < 0x14dd) {
      if (param_3 == 0x14dc) {
        FUN_00424168(param_1[0x18]);
      }
      else {
        if (param_3 != 0x1428) {
          if (param_3 != 0x1432) {
            if (param_3 != 0x1478) {
              if (param_3 != 0x1482) goto LAB_00461813;
              local_18c = 1;
            }
            local_190 = (int *)param_1[local_18c + 0x25];
            local_178 = 8;
            FUN_004c279c(local_2c,0x180c,(uint *)s_Application_File____exe____exe_A_004fa90b,0,
                         0x4fa90a,0x4fa938,0,0,0);
            local_16c = local_16c + 1;
            local_178 = 0x20;
            local_194 = FUN_004c2c5c(&local_13c,0,*param_1,(int)local_2c,0,0x4fa93a,0);
            local_16c = local_16c + 6;
            iVar1 = (**(code **)(local_194[3] + 0x14))();
            cVar5 = iVar1 == 1;
            *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x5c;
            *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + -0x5c;
            local_16c = local_16c + -6;
            FUN_0048c668(&local_13c,0);
            *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x5c;
            *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + 0x5c;
            *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x96;
            local_16c = local_16c + -2;
            FUN_004a52c0(local_b4,0);
            *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x96;
            local_16c = local_16c + -1;
            FUN_00489c54(local_bc,0);
            if (cVar5 != '\0') {
              FUN_0041b1ec(local_190 + 99,(LPCSTR)local_24);
              FUN_004cf41c(*local_190 + 0x18,local_24);
            }
            local_16c = local_16c + -1;
            FUN_004c2888((int)local_2c,2);
            local_178 = 0;
            goto LAB_00461813;
          }
          local_18c = 1;
        }
        iVar3 = 3;
      }
      goto LAB_00461813;
    }
    if (param_3 != 0x14e6) {
      if (param_3 != 0x14f0) {
        if (param_3 != 0x14fa) goto LAB_00461813;
        goto LAB_004615f6;
      }
      goto LAB_004615fc;
    }
  }
  iVar3 = 1;
LAB_00461813:
  if (iVar3 != 4) {
    if (param_2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_2 + 0xc);
    }
    local_198 = FUN_004dd744(param_2,iVar1,(int *)&DAT_00402b6c,(int *)&DAT_00406e80,0);
    if (local_198 != (int *)0x0) {
      iVar1 = FUN_004a76a8(*local_198,0xf0,0,0);
      iVar3 = *(int *)(param_1[0x18] + iVar3 * 4) + local_18c * 0x38;
      *(uint *)(iVar3 + 0x40) = (uint)(iVar1 != 0);
      if (iVar1 == 1) {
        FUN_004cf384(param_1[0x18] + 0x20,iVar3 + 0x48);
        FUN_0046136c((int)param_1);
      }
      else {
        local_19c = param_1[0x18] + 0x20;
        uVar2 = FUN_004d40d0(local_19c,0,*(uint *)(*(int *)(param_1[0x18] + 0x28) + -4),
                             *(byte **)(iVar3 + 0x50),*(uint *)(*(int *)(iVar3 + 0x50) + -4));
        if (uVar2 == 0) {
          uVar2 = *(uint *)(*(int *)(param_1[0x18] + 0x28) + -4);
          local_1e5[0] = 0;
          uVar4 = DAT_005140ac;
          if (uVar2 <= DAT_005140ac) {
            uVar4 = uVar2;
          }
          FUN_004cfad4(param_1[0x18] + 0x20,0,uVar4,(uint)local_1e5,0,0,0);
        }
      }
    }
  }
  *in_FS_OFFSET = local_188;
  return;
}

