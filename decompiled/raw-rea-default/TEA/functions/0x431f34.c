// rea decompile_all
// name: FUN_00431f34
// address: 0x431f34
// body: available
// range: 0x431f34-0x43237e inclusive
// range: 0x432384-0x4327e7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl
FUN_00431f34(int param_1,int *param_2,int param_3,int *param_4,int *param_5,undefined4 *param_6)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined1 local_58;
  char local_38;
  int local_14;
  int local_10;
  int local_c;
  byte *local_8;
  
  local_8 = (byte *)*param_2;
  local_c = 0;
  local_10 = 0;
  iVar12 = 0;
  do {
    while( true ) {
      iVar10 = local_c;
      bVar2 = *local_8;
      if ((bVar2 == 0x3b) || (bVar2 == 0x29)) goto LAB_0043276a;
      if (bVar2 == 0x5d) {
        *(undefined4 *)(param_1 + 0x1024) = 9;
        return -1;
      }
      if (*local_8 == 0x5e) {
        *(undefined4 *)(param_1 + 0x1024) = 0xc;
        return -1;
      }
      if (*local_8 == 0) {
        *(undefined4 *)(param_1 + 0x1024) = 7;
        return -1;
      }
      uVar4 = (undefined1)iVar12;
      if (*local_8 == 0x28) break;
      if (*local_8 == 0x2a) {
        *param_6 = 15000;
        if (local_c != 0) {
          iVar10 = local_c + 1;
          if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
            FUN_004d48d8(param_3);
          }
          puVar11 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
          if (puVar11 != &DAT_00513d58) {
            *puVar11 = 0xffffffff;
          }
          *(undefined1 *)(*(int *)(param_3 + 8) + iVar10) = uVar4;
          local_10 = local_10 + iVar12;
        }
        local_8 = local_8 + 1;
        local_c = *(int *)(*(int *)(param_3 + 8) + -4);
        *param_4 = local_c;
        uVar5 = FUN_00431458(param_1,0xf2);
        FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(char)uVar5);
        FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,0x20);
        *param_5 = *(int *)(*(int *)(param_3 + 8) + -4);
        iVar12 = FUN_00431f34(param_1,(int *)&local_8,param_3,param_4,param_5,param_6);
        if (iVar12 == -1) {
          return -1;
        }
        goto LAB_0043276a;
      }
      if (*local_8 == 0x5b) {
        if (local_c == 0) {
          local_c = *(int *)(*(int *)(param_3 + 8) + -4);
          uVar5 = FUN_00431458(param_1,0xf1);
          FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(char)uVar5);
          FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,0x20);
          iVar12 = 0;
        }
        else {
          if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
            FUN_004d48d8(param_3);
          }
          puVar11 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
          if (puVar11 != &DAT_00513d58) {
            *puVar11 = 0xffffffff;
          }
          puVar8 = (undefined1 *)(*(int *)(param_3 + 8) + iVar10);
          uVar5 = FUN_00431458(param_1,0xf1);
          *puVar8 = (char)uVar5;
        }
        if (local_8[1] == 0x5e) {
          local_8 = local_8 + 1;
          FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(byte)iVar12 | 0xc0);
        }
        else {
          FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(byte)iVar12 | 0x40);
        }
        if (local_8[1] == 0x5d) {
          *(undefined4 *)(param_1 + 0x1024) = 0xe;
          return -1;
        }
        iVar10 = *(int *)(*(int *)(param_3 + 8) + -4);
        FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,0x20);
        while( true ) {
          local_8 = local_8 + 1;
          pcVar6 = thunk_FUN_004dc924(PTR_s________004f2d24,*local_8);
          if (pcVar6 != (char *)0x0) break;
          if ((*local_8 == 0x5c) && (local_8[1] != 0)) {
            local_8 = local_8 + 1;
          }
          iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x112c) + 0xc) +
                                   *(int *)(param_1 + 0x1130) * 4) + 8 + (uint)*local_8 * 8);
          if (iVar7 == 0xff) break;
          FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(char)iVar7);
        }
        if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
          FUN_004d48d8(param_3);
        }
        puVar11 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
        if (puVar11 != &DAT_00513d58) {
          *puVar11 = 0xffffffff;
        }
        local_38 = (char)iVar10;
        *(char *)(*(int *)(param_3 + 8) + iVar10) =
             *(char *)(*(int *)(param_3 + 8) + -4) - (local_38 + '\x01');
        if (*local_8 != 0x5d) {
          if ((*local_8 == 0x29) && (local_8[1] == 0)) {
            *(undefined4 *)(param_1 + 0x1024) = 5;
          }
          else {
            *(undefined4 *)(param_1 + 0x1024) = 2;
          }
          return -1;
        }
      }
      else if ((*local_8 < 0x30) || (0x39 < *local_8)) {
        bVar3 = false;
        if (*local_8 == 0x5c) {
          bVar3 = true;
          pbVar1 = local_8 + 2;
          local_8 = local_8 + 1;
          if (*pbVar1 == 0) {
            *(undefined4 *)(param_1 + 0x1024) = 0xd;
            return -1;
          }
        }
        iVar10 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x112c) + 0xc) +
                                  *(int *)(param_1 + 0x1130) * 4) + 8 + (uint)*local_8 * 8);
        if (((iVar10 == 0xff) && ((bVar3 || ((*local_8 != 0x2e && (*local_8 != 0x3f)))))) ||
           ((iVar10 != 0xff && (bVar3)))) {
          if (local_c != 0) {
            iVar9 = local_c + 1;
            iVar7 = *(int *)(*(int *)(param_3 + 8) + -0xc);
            if (iVar7 != 0 && 0 < iVar7 + 1) {
              FUN_004d48d8(param_3);
            }
            puVar11 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
            if (puVar11 != &DAT_00513d58) {
              *puVar11 = 0xffffffff;
            }
            *(undefined1 *)(*(int *)(param_3 + 8) + iVar9) = uVar4;
            local_10 = local_10 + iVar12;
            local_c = 0;
          }
          if (iVar10 == 0xff) {
            uVar5 = FUN_00431458(param_1,0xff);
            FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(char)uVar5);
            FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,*local_8);
            *(undefined1 *)(param_1 + 0x1028 + (uint)*local_8) = 0xff;
          }
          else {
            uVar5 = FUN_00431458(param_1,0xfe);
            FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(char)uVar5);
            FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,*local_8);
            *(undefined1 *)(param_1 + 0x1028 + (uint)*local_8) = 0xfe;
            local_8 = local_8 + -1;
          }
          iVar12 = -1;
        }
        else {
          if (local_c == 0) {
            local_c = *(int *)(*(int *)(param_3 + 8) + -4);
            uVar5 = FUN_00431458(param_1,0xf0);
            FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(char)uVar5);
            FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,0x20);
            iVar12 = 0;
          }
          if ((iVar10 != 0xff) && ((bVar3 || ((*local_8 != 0x2e && (*local_8 != 0x3f)))))) {
            FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(char)iVar12);
            local_58 = (undefined1)iVar10;
            FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,local_58);
          }
        }
      }
      else {
        if (local_c == 0) {
          local_c = *(int *)(*(int *)(param_3 + 8) + -4);
          uVar5 = FUN_00431458(param_1,0xf1);
          FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(char)uVar5);
          FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,0x20);
          iVar12 = 0;
        }
        else {
          if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
            FUN_004d48d8(param_3);
          }
          puVar11 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
          if (puVar11 != &DAT_00513d58) {
            *puVar11 = 0xffffffff;
          }
          puVar8 = (undefined1 *)(*(int *)(param_3 + 8) + iVar10);
          uVar5 = FUN_00431458(param_1,0xf1);
          *puVar8 = (char)uVar5;
        }
        FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(byte)iVar12 | 0x80);
        FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,*local_8 - 0x30);
      }
      iVar10 = *(int *)(*(int *)(param_3 + 8) + -4);
      if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
        FUN_004d48d8(param_3);
      }
      puVar11 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
      if (puVar11 != &DAT_00513d58) {
        *puVar11 = 0xffffffff;
      }
      if (*(char *)(*(int *)(param_3 + 8) + iVar10 + -2) == -1) {
        if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
          FUN_004d48d8(param_3);
        }
        puVar11 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
        if (puVar11 != &DAT_00513d58) {
          *puVar11 = 0xffffffff;
        }
        if (*(char *)(*(int *)(param_3 + 8) + iVar10 + -1) != ' ') goto LAB_0043274d;
      }
      else {
LAB_0043274d:
        *param_5 = iVar10;
      }
      iVar12 = iVar12 + 1;
      local_8 = local_8 + 1;
    }
    if (local_c != 0) {
      iVar7 = local_c + 1;
      iVar10 = *(int *)(*(int *)(param_3 + 8) + -0xc);
      if (iVar10 != 0 && 0 < iVar10 + 1) {
        FUN_004d48d8(param_3);
      }
      puVar11 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
      if (puVar11 != &DAT_00513d58) {
        *puVar11 = 0xffffffff;
      }
      *(undefined1 *)(*(int *)(param_3 + 8) + iVar7) = uVar4;
      local_10 = local_10 + iVar12;
      local_c = 0;
    }
    local_8 = local_8 + 1;
    local_14 = 0;
    iVar12 = FUN_00431474((int *)param_1,(int *)&local_8,param_3,param_4,param_5,&local_14);
    if (iVar12 == -1) {
      return -1;
    }
    local_10 = local_10 + iVar12;
    local_8 = local_8 + 1;
  } while (local_14 < 1);
  *param_6 = *param_6 + local_14;
  iVar12 = FUN_00431f34(param_1,(int *)&local_8,param_3,param_4,param_5,param_6);
  if (iVar12 == -1) {
    local_10 = -1;
  }
  else {
    local_10 = local_10 + iVar12;
LAB_0043276a:
    if (local_c != 0) {
      iVar10 = local_c + 1;
      if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
        FUN_004d48d8(param_3);
      }
      puVar11 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
      if (puVar11 != &DAT_00513d58) {
        *puVar11 = 0xffffffff;
      }
      *(char *)(*(int *)(param_3 + 8) + iVar10) = (char)iVar12;
      local_10 = local_10 + iVar12;
    }
    FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,0xfc);
    *param_2 = (int)local_8;
  }
  return local_10;
}

