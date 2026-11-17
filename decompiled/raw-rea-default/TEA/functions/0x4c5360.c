// rea decompile_all
// name: FUN_004c5360
// address: 0x4c5360
// body: available
// range: 0x4c5360-0x4c5616 inclusive
// range: 0x4c565d-0x4c5b4a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __cdecl FUN_004c5360(int *param_1,int param_2,int *param_3,char param_4)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  HCURSOR hCursor;
  int *piVar5;
  LPCSTR pCVar6;
  LPCSTR pCVar7;
  LPCSTR pCVar8;
  uint uVar9;
  int iVar10;
  HDC hdc;
  WPARAM wParam;
  LPPOINT lppt;
  undefined4 *in_FS_OFFSET;
  DEVMODEA *pDVar11;
  CHAR local_90 [4];
  COLORREF local_8c;
  int local_88;
  int local_84;
  uint local_80;
  int local_7c;
  int local_78;
  WPARAM local_74;
  WPARAM local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  CHAR local_60 [4];
  int local_5c;
  int local_58;
  WPARAM local_54;
  WPARAM local_50;
  HCURSOR local_4c;
  int *local_48;
  undefined4 local_44;
  undefined2 local_34;
  int *local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int *local_8;
  
  FUN_004dce64(0x511174);
  param_1[1] = 1;
  local_48 = (int *)0x0;
  hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
  local_4c = SetCursor(hCursor);
  local_50 = 0;
  local_54 = 0;
  (**(code **)(*param_3 + 8))();
  if (local_50 == 0) {
    *(uint *)param_1[2] = *(uint *)param_1[2] | 4;
    *(undefined4 *)(param_1[2] + 8) = 0;
    *(undefined4 *)(param_1[2] + 0xc) = 999;
  }
  else {
    *(uint *)param_1[2] = *(uint *)param_1[2] & 0xfffffffb;
    *(WPARAM *)(param_1[2] + 8) = local_50;
    *(WPARAM *)(param_1[2] + 0xc) = local_54;
  }
  if (*(int *)(param_1[2] + 0x10) == 0) {
    *(uint *)param_1[2] = *(uint *)param_1[2] | 8;
  }
  else {
    *(uint *)param_1[2] = *(uint *)param_1[2] & 0xfffffff7;
    if (*(int *)(param_1[2] + 8) < *(int *)(param_1[2] + 0x10)) {
      *(undefined4 *)(param_1[2] + 8) = *(undefined4 *)(param_1[2] + 0x10);
    }
    else if (*(int *)(param_1[2] + 0x14) < *(int *)(param_1[2] + 8)) {
      *(undefined4 *)(param_1[2] + 8) = *(undefined4 *)(param_1[2] + 0x14);
    }
    if (*(int *)(param_1[2] + 0xc) < *(int *)(param_1[2] + 0x10)) {
      *(undefined4 *)(param_1[2] + 0xc) = *(undefined4 *)(param_1[2] + 0x10);
    }
    else if (*(int *)(param_1[2] + 0x14) < *(int *)(param_1[2] + 0xc)) {
      *(undefined4 *)(param_1[2] + 0xc) = *(undefined4 *)(param_1[2] + 0x14);
    }
  }
  if (param_4 == '\0') {
    local_8 = (int *)FUN_004cc0f0();
    piVar5 = local_8;
    if (local_8 != (int *)0x0) {
      local_34 = 0x14;
      pDVar11 = *(DEVMODEA **)(param_1[2] + 0x56);
      pCVar6 = (LPCSTR)FUN_004c3f58(param_1[2]);
      pCVar7 = (LPCSTR)FUN_004c3f38(param_1[2]);
      pCVar8 = (LPCSTR)FUN_004c3f18(param_1[2]);
      FUN_0049caa8(local_8,pCVar8,pCVar7,pCVar6,pDVar11);
      local_34 = 8;
      piVar5 = local_8;
    }
  }
  else {
    puVar1 = (uint *)param_1[2];
    *puVar1 = *puVar1 & 0xfffffbbf;
    *puVar1 = *puVar1 | 0x100;
    cVar4 = (**(code **)(*param_1 + 0x20))();
    if ((cVar4 == '\0') && (*(int *)(param_1[2] + 4) == 0x100c)) {
      (**(code **)(*param_1 + 4))();
      cVar4 = (**(code **)(*param_1 + 0x20))();
    }
    if (cVar4 == '\0') {
      *in_FS_OFFSET = local_44;
      return false;
    }
    piVar5 = FUN_004c4074(param_1[2]);
  }
  local_48 = piVar5;
  if (local_48 == (int *)0x0) {
    FUN_004c5f00(0x7fe6);
  }
  (**(code **)(*param_1 + 0x14))();
  (**(code **)(*param_3 + 4))();
  local_34 = 0x20;
  local_58 = (**(code **)(*param_1 + 0x28))();
  local_34 = 0;
  SetCursor(local_4c);
  (**(code **)(*(int *)(param_2 + 8) + 0x60))();
  SetAbortProc((HDC)*local_48,FUN_004c4f30);
  if (((char)param_3[2] == '\0') ||
     (uVar9 = (**(code **)(*(int *)((int)local_48 + 5) + 0xc))(), (uVar9 & 2) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    local_60[0] = '\x18';
    local_60[1] = '\0';
    local_60[2] = '\0';
    local_60[3] = '\0';
    local_5c = Escape((HDC)*local_48,8,4,local_60,(LPVOID)0x0);
    *(bool *)(param_1 + 4) = local_5c != 0;
  }
  else {
    *(undefined4 *)((int)param_1 + 0x16) = 0;
    *(undefined4 *)((int)param_1 + 0x1a) = 0;
    *(undefined4 *)((int)param_1 + 0x1e) = *(undefined4 *)((int)param_1 + 0x26);
    *(undefined4 *)((int)param_1 + 0x22) = *(undefined4 *)((int)param_1 + 0x2a);
  }
  local_64 = 1;
  local_68 = 1;
  if ((*(byte *)param_1[2] & 0x10) == 0) {
    local_6c = *(undefined4 *)(param_1[2] + 0x18);
    Escape((HDC)*local_48,0x11,4,(LPCSTR)&local_6c,&local_64);
  }
  if (((param_4 == '\0') || ((*(byte *)param_1[2] & 1) == 0)) && (local_50 == 0)) {
    if ((param_4 == '\0') || ((*(byte *)param_1[2] & 2) == 0)) {
      if (*(int *)(param_1[2] + 0x10) == 0) {
        local_70 = 1;
        local_74 = 0x7fffffff;
      }
      else {
        local_70 = *(WPARAM *)(param_1[2] + 0x10);
        local_74 = *(WPARAM *)(param_1[2] + 0x14);
      }
    }
    else {
      local_70 = *(WPARAM *)(param_1[2] + 8);
      local_74 = *(WPARAM *)(param_1[2] + 0xc);
    }
  }
  else {
    local_70 = local_50;
    local_74 = local_54;
  }
  (**(code **)(*param_3 + 0xc))();
  piVar5 = (int *)param_1[2];
  local_78 = piVar5[6];
  do {
    if ((local_78 < 1) || (piVar5 = param_1, param_1[1] < 1)) {
      (**(code **)(*param_3 + 0x20))(param_3,*param_3,piVar5,param_3);
      if (1 < local_64) {
        local_90[0] = '\x01';
        local_90[1] = '\0';
        local_90[2] = '\0';
        local_90[3] = '\0';
        Escape((HDC)*local_48,0x11,4,local_90,&local_64);
      }
      (**(code **)(*(int *)(param_2 + 8) + 0x60))();
      (**(code **)(*(int *)(local_58 + 8) + 0x18))();
      local_18 = local_58;
      if (local_58 != 0) {
        local_14 = *(undefined4 *)(local_58 + 8);
        local_34 = 0x50;
        (*(code *)**(undefined4 **)(local_58 + 8))();
        local_34 = 0x44;
      }
      if (*local_48 == DAT_00510fdc) {
        DAT_00510fdc = 0;
      }
      local_20 = local_48;
      if (local_48 != (int *)0x0) {
        local_1c = *(undefined4 *)((int)local_48 + 5);
        local_34 = 0x68;
        (*(code *)**(undefined4 **)((int)local_48 + 5))();
        local_34 = 0x5c;
      }
      if ((*(byte *)((int)param_1 + 5) & 0x40) != 0) {
        (**(code **)(*param_1 + 0x10))();
      }
      iVar10 = param_1[1];
      *in_FS_OFFSET = local_44;
      return 0 < iVar10;
    }
    if ((1 < local_64) && (local_78 < local_64)) {
      local_7c = local_78;
      Escape((HDC)*local_48,0x11,4,(LPCSTR)&local_7c,&local_64);
    }
    *(undefined4 *)((int)param_1 + 0x11) = 3;
    *(int *)((int)local_48 + 0x25) = param_3[1];
    *(undefined4 *)((int)local_48 + 0x29) = 0;
    *(undefined4 *)((int)local_48 + 0x2d) = 0;
    iVar10 = StartDocA((HDC)*local_48,(DOCINFOA *)((int)local_48 + 0x21));
    param_1[1] = iVar10;
    (**(code **)(*param_3 + 0x10))();
    SendDlgItemMessageA(*(HWND *)(local_58 + 0xc),0x69,0x464,local_74,0);
    wParam = local_70;
    while (((0 < param_1[1] && ((int)wParam <= (int)local_74)) &&
           (cVar4 = (**(code **)(*param_3 + 0x14))(), cVar4 != '\0'))) {
      SendDlgItemMessageA(*(HWND *)(local_58 + 0xc),0x68,0x464,wParam,0);
      if (bVar2) {
        *(undefined1 *)((int)param_1 + 0x15) = 1;
        iVar10 = Escape((HDC)*local_48,3,0,(LPCSTR)0x0,(LPVOID)((int)param_1 + 0x16));
        param_1[1] = iVar10;
      }
      else {
        iVar10 = StartPage((HDC)*local_48);
        param_1[1] = iVar10;
      }
      while (0 < param_1[1]) {
        if ((*(int *)((int)param_1 + 0x16) < *(int *)((int)param_1 + 0x1e)) &&
           (*(int *)((int)param_1 + 0x1a) < *(int *)((int)param_1 + 0x22))) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) break;
        if (bVar2) {
          FUN_004c52b0((int)param_1,local_48);
          if ((*(char *)((int)param_3 + 9) != '\0') && ((*(uint *)((int)param_1 + 0x11) & 3) == 1))
          {
            local_80 = 0x1000000;
            local_88 = 0;
            local_84 = 0;
            uVar9 = FUN_0048c12c(&local_80);
            local_8c = SetPixel((HDC)*local_48,local_88,local_84,uVar9);
          }
          lppt = (LPPOINT)((int)param_1 + 0x16);
          iVar10 = 2;
          hdc = (HDC)(**(code **)(*(int *)((int)local_48 + 5) + 0x5c))();
          DPtoLP(hdc,lppt,iVar10);
        }
        (**(code **)(*param_3 + 0x18))();
        if (!bVar2) break;
        iVar10 = Escape((HDC)*local_48,3,0,(LPCSTR)0x0,(LPVOID)((int)param_1 + 0x16));
        param_1[1] = iVar10;
      }
      if ((0 < param_1[1]) && (!bVar2)) {
        FUN_0048db40(local_48);
        iVar10 = EndPage((HDC)*local_48);
        param_1[1] = iVar10;
        if (param_1[1] == 0) {
          param_1[1] = 1;
        }
      }
      wParam = wParam + 1;
    }
    if (0 < param_1[1]) {
      EndDoc((HDC)*local_48);
    }
    piVar5 = param_3;
    (**(code **)(*param_3 + 0x1c))();
    local_78 = local_78 - local_68;
  } while( true );
}

