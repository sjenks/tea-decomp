// rea decompile_all
// name: FUN_00453724
// address: 0x453724
// body: available
// range: 0x453724-0x454199 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00453792) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00453724(int *param_1)

{
  uint *puVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  HCURSOR hCursor;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  int local_a94;
  int local_a90;
  int local_a8c;
  uint *local_a88;
  int local_a84;
  HCURSOR local_a80;
  int local_a7c;
  int local_a78;
  undefined1 *local_a74;
  undefined4 local_a70;
  int local_a6c;
  int local_a68;
  undefined1 *local_a64;
  undefined4 local_a60;
  int local_a5c;
  int local_a58;
  undefined1 *local_a54;
  undefined4 local_a50;
  int local_a4c;
  int local_a48;
  undefined1 *local_a44;
  undefined4 local_a40;
  int local_a3c;
  int local_a38;
  undefined1 *local_a34;
  undefined4 local_a30;
  int local_a2c;
  int local_a28;
  undefined1 *local_a24;
  undefined4 local_a20;
  int local_a1c;
  int local_a18;
  int local_a14;
  undefined1 *local_a10;
  undefined4 local_a0c;
  int local_a08;
  int local_a04;
  uint local_a00;
  undefined1 *local_9fc;
  undefined *local_9f8;
  undefined4 local_9f4;
  int local_9f0;
  undefined4 local_9ec;
  undefined2 local_9dc;
  int local_9d0;
  int local_9c8 [3];
  int local_9bc;
  int local_1d8 [33];
  undefined1 local_154 [8];
  int local_14c;
  undefined1 local_144 [8];
  int local_13c;
  int local_134;
  int local_130;
  undefined4 local_b4 [2];
  undefined4 local_ac [34];
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  LPCSTR local_c;
  
  FUN_004dce64(0x4f86c8);
  local_9f4 = 0;
  local_9fc = local_14;
  local_9f8 = &DAT_00513d64;
  local_c = &DAT_00513d64;
  local_9d0 = local_9d0 + 1;
LAB_004537a1:
  do {
    local_9dc = 0x20;
    puVar1 = thunk_FUN_004dccbc((uint *)param_1[0x20],'\\');
    if (puVar1 == (uint *)0x0) {
      puVar1 = (uint *)param_1[0x20];
    }
    pcVar2 = thunk_FUN_004dc924((char *)puVar1,'.');
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = '\0';
    }
    local_9dc = 0x38;
    FUN_00437158((int)local_24);
    local_9d0 = local_9d0 + 1;
    if (*(char *)param_1[0x20] == '\0') {
      param_1[0x24] = local_1c;
    }
    local_9dc = 0x44;
    piVar3 = FUN_004c2e14(&local_134,0,*param_1,(int)(param_1 + 0x1e),0,0x4f76ff,0);
    local_9d0 = local_9d0 + 6;
    local_9f0 = (**(code **)(piVar3[3] + 0x14))();
    *(int *)(local_130 + -4) = *(int *)(local_130 + -4) + -0x5c;
    *(int *)(local_134 + -4) = *(int *)(local_134 + -4) + -0x5c;
    local_9d0 = local_9d0 + -6;
    FUN_0048c668(&local_134,0);
    *(int *)(local_130 + -4) = *(int *)(local_130 + -4) + 0x5c;
    *(int *)(local_134 + -4) = *(int *)(local_134 + -4) + 0x5c;
    *(int *)(local_130 + -4) = *(int *)(local_130 + -4) + 0x96;
    local_9d0 = local_9d0 + -2;
    FUN_004a52c0(local_ac,0);
    *(int *)(local_130 + -4) = *(int *)(local_130 + -4) + -0x96;
    local_9d0 = local_9d0 + -1;
    FUN_00489c54(local_b4,0);
    param_1[0x24] = 0;
    if (local_9f0 != 1) {
      local_9d0 = local_9d0 + -1;
      if (local_1c == 0) goto LAB_00453e67;
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar3 = (int *)(local_1c + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar4 = *piVar3 + 1;
        }
        if (iVar4 != 0) goto LAB_00453e67;
      }
      local_a58 = local_1c + -0xc;
      local_a5c = local_1c + -0xc;
      FUN_004cc0bc();
      local_a60 = 0;
      local_a64 = local_24;
      local_1c = 0;
      goto LAB_00453e67;
    }
    FUN_004cf41c((int)local_14,(uint *)param_1[0x20]);
    puVar1 = thunk_FUN_004dccbc((uint *)param_1[0x20],'\\');
    if (puVar1 == (uint *)0x0) {
      puVar1 = (uint *)param_1[0x20];
    }
    pcVar2 = thunk_FUN_004dc924((char *)puVar1,'.');
    if (pcVar2 == (char *)0x0) {
      puVar1 = (uint *)PTR_DAT_004f33b8;
      if (param_1[0x23] == 1) {
        puVar1 = (uint *)&DAT_004f770c;
      }
      local_a00 = *(uint *)(local_c + -4);
      pcVar2 = FUN_004dc9f4(puVar1);
      FUN_004cfad4((int)local_14,local_a00,0,(uint)puVar1,(uint)pcVar2,0,(uint)pcVar2);
    }
    iVar4 = thunk_FUN_004ddd54(local_c,0);
    if (iVar4 != 0) {
      local_9d0 = local_9d0 + -1;
      if (local_1c != 0) {
        if (*(int *)(local_1c + -0xc) != -1) {
          piVar3 = (int *)(local_1c + -0xc);
          if (piVar3 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (piVar3 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *piVar3 = *piVar3 + -1;
            iVar4 = *piVar3 + 1;
          }
          if (iVar4 != 0) goto LAB_00453dbe;
        }
        local_a38 = local_1c + -0xc;
        local_a3c = local_1c + -0xc;
        FUN_004cc0bc();
        local_a40 = 0;
        local_a44 = local_24;
        local_1c = 0;
      }
LAB_00453dbe:
      local_9dc = 0x2c;
      goto LAB_00453e67;
    }
    local_9dc = 0x5c;
    FUN_00464a94((int)local_154,param_1[0xe],0x29f4);
    local_9d0 = local_9d0 + 1;
    FUN_00436b94((int)local_144,(int)local_14,(int)local_154);
    if (local_14c != 0) {
      if (*(int *)(local_14c + -0xc) != -1) {
        piVar3 = (int *)(local_14c + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar4 = *piVar3 + 1;
        }
        if (iVar4 != 0) goto LAB_00453af5;
      }
      local_a04 = local_14c + -0xc;
      local_a08 = local_14c + -0xc;
      FUN_004cc0bc();
      local_a0c = 0;
      local_a10 = local_154;
      local_14c = 0;
    }
LAB_00453af5:
    local_9dc = 0x50;
    local_a14 = local_13c;
    iVar4 = (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
    if (iVar4 == 6) break;
    local_9d0 = local_9d0 + -1;
    if (local_13c != 0) {
      if (*(int *)(local_13c + -0xc) != -1) {
        piVar3 = (int *)(local_13c + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar4 = *piVar3 + 1;
        }
        if (iVar4 != 0) goto LAB_00453d20;
      }
      local_a28 = local_13c + -0xc;
      local_a2c = local_13c + -0xc;
      FUN_004cc0bc();
      local_a30 = 0;
      local_a34 = local_144;
      local_13c = 0;
    }
LAB_00453d20:
    local_9dc = 0x2c;
    local_9d0 = local_9d0 + -1;
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar3 = (int *)(local_1c + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar4 = *piVar3 + 1;
        }
        if (iVar4 != 0) goto LAB_004537a1;
      }
      local_a68 = local_1c + -0xc;
      local_a6c = local_1c + -0xc;
      FUN_004cc0bc();
      local_a70 = 0;
      local_a74 = local_24;
      local_1c = 0;
    }
  } while( true );
  local_9d0 = local_9d0 + -1;
  if (local_13c != 0) {
    if (*(int *)(local_13c + -0xc) != -1) {
      piVar3 = (int *)(local_13c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_00453bdc;
    }
    local_a18 = local_13c + -0xc;
    local_a1c = local_13c + -0xc;
    FUN_004cc0bc();
    local_a20 = 0;
    local_a24 = local_144;
    local_13c = 0;
  }
LAB_00453bdc:
  local_9d0 = local_9d0 + -1;
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar3 = (int *)(local_1c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_00453e67;
    }
    local_a48 = local_1c + -0xc;
    local_a4c = local_1c + -0xc;
    FUN_004cc0bc();
    local_a50 = 0;
    local_a54 = local_24;
    local_1c = 0;
  }
LAB_00453e67:
  if (local_9f0 == 1) {
    local_a7c = param_1[0x1b4];
    local_a78 = *(int *)(local_a7c * 4 + param_1[0x1ad]);
    local_9dc = 0x20;
    if (param_1[0x23] == 1) {
      hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
      local_a80 = SetCursor(hCursor);
      local_9dc = 0xbc;
      FUN_004d18dc(local_1d8,0,local_c,8,0x1b6);
      local_9d0 = local_9d0 + 8;
      local_9dc = 200;
      local_a84 = FUN_0042ba08(*(int *)(local_a78 + 8));
      iVar4 = 0;
      while ((iVar4 < local_a84 && (*(int *)(local_1d8[0] + 0x30) == 0))) {
        local_a88 = (uint *)FUN_0042baf8(*(int *)(local_a78 + 8),iVar4);
        local_9dc = 200;
        puVar9 = &LAB_0045422c;
        piVar3 = FUN_004d5374(local_1d8,local_a88);
        FUN_004d4e64(piVar3,puVar9);
        iVar4 = iVar4 + 1;
      }
      if (*(int *)(local_1d8[0] + 0x30) == 0) {
        FUN_004d7e64(local_1d8);
      }
      SetCursor(local_a80);
      if (*(int *)(local_1d8[0] + 0x30) != 0) {
        local_a8c = *param_1;
        (**(code **)(*(int *)(*(int *)(local_a8c + 0x6c) + 0x1b) + 0x30))();
      }
      local_9d0 = local_9d0 + -8;
      FUN_004d19d4(local_1d8,2);
      local_9dc = 0x20;
    }
    else if (param_1[0x23] == 2) {
      if (param_1[0x19] == 3) {
        FUN_0045c6d4((int)param_1,1);
      }
      local_a90 = 0;
      local_a94 = 0;
      FUN_0045e830(local_a78,&local_a90,&local_a94);
      local_9dc = 0xd4;
      puVar7 = local_14;
      iVar6 = local_a78 + 0x10;
      iVar4 = param_1[0x1b4];
      iVar8 = local_a90;
      iVar10 = local_a94;
      iVar5 = FUN_00466b18(param_1[0xe]);
      FUN_0043c6fc(local_9c8,0,*param_1,param_1[0xe],*(int *)(local_a78 + 8),iVar5,iVar4,(int)puVar7
                   ,iVar6,iVar8,iVar10);
      local_9d0 = local_9d0 + 0x39;
      local_9dc = 0xe0;
      (**(code **)(local_9bc + 0x14))();
      FUN_0045c6d4((int)param_1,param_1[0x19]);
      local_9d0 = local_9d0 + -0x39;
      FUN_0043c8a4(local_9c8,2);
      local_9dc = 0x20;
    }
  }
  local_9d0 = local_9d0 + -1;
  if (local_c != (LPCSTR)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_00454185;
    }
    FUN_004cc0bc();
  }
LAB_00454185:
  *in_FS_OFFSET = local_9ec;
  return;
}

