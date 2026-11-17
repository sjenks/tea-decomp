// rea decompile_all
// name: FUN_004c8480
// address: 0x4c8480
// body: available
// range: 0x4c8480-0x4c87a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_004c8480(int *param_1,int param_2,ushort *param_3)

{
  int iVar1;
  int *piVar2;
  RECT *pRVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  int local_dc [4];
  int local_cc [4];
  int local_bc [4];
  RECT local_ac;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c [4];
  RECT local_6c;
  tagPOINT local_5c;
  int local_54;
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  HDC local_2c [10];
  
  bVar5 = 0;
  FUN_004dce64(0x511cc0);
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    local_dc[0] = 0;
    *in_FS_OFFSET = local_50;
  }
  else {
    local_40 = 8;
    FUN_004a8674((int *)local_2c,*(undefined4 *)(*param_1 + 0xc));
    local_34 = local_34 + 2;
    local_40 = 0x14;
    if (param_2 == 3) {
      *(undefined4 *)((int)param_1 + 0x2a) = 3;
      if ((char)param_1[8] == '\0') {
        FUN_004c9ad8(&local_9c,param_1);
        local_80 = local_90 + -1;
        local_84 = local_94;
        local_88 = local_98 + 1;
        local_8c = local_9c + 1;
        PatBlt(local_2c[0],local_8c,local_88,local_94 - local_8c,local_80 - local_88,0x5a0049);
        *(undefined1 *)((int)param_1 + 0x2f) = 1;
        FUN_004a76a8(*param_1,0x112,0xf093,*(int *)(param_3 + 2) << 0x10 | (uint)*param_3);
        if (*(char *)((int)param_1 + 0x2f) != '\0') {
          local_5c.x = 0;
          local_5c.y = 0;
          GetCursorPos(&local_5c);
          FUN_004c8154(param_1,&local_5c.x,&local_54);
          if (local_54 == 3) {
            FUN_004a76a8(*param_1,0x112,0xf103,0);
          }
        }
        if (*(int *)(*param_1 + 0xc) != 0) {
          PatBlt(local_2c[0],local_8c,local_88,local_84 - local_8c,local_80 - local_88,0x5a0049);
        }
      }
      else {
        *(undefined1 *)((int)param_1 + 0x2e) = 1;
        SetCapture(*(HWND *)(*param_1 + 0xc));
        FUN_004c9ad8(local_7c,param_1);
        piVar2 = local_7c;
        pRVar3 = &local_6c;
        for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
          pRVar3->left = *piVar2;
          piVar2 = piVar2 + (uint)bVar5 * -2 + 1;
          pRVar3 = (RECT *)((int)pRVar3 + ((uint)bVar5 * -2 + 1) * 4);
        }
        FUN_004c8fe0(param_1,local_2c,&local_6c,*(char *)((int)param_1 + 0x2e));
      }
      local_dc[0] = 1;
      local_34 = local_34 + -2;
      FUN_004a86dc((int *)local_2c,2);
      *in_FS_OFFSET = local_50;
    }
    else if (param_2 == 8) {
      *(undefined4 *)((int)param_1 + 0x2a) = 8;
      *(undefined1 *)((int)param_1 + 0x2e) = 1;
      SetCapture(*(HWND *)(*param_1 + 0xc));
      FUN_004c9b28(local_bc,param_1);
      piVar2 = local_bc;
      pRVar3 = &local_ac;
      for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
        pRVar3->left = *piVar2;
        piVar2 = piVar2 + (uint)bVar5 * -2 + 1;
        pRVar3 = (RECT *)((int)pRVar3 + ((uint)bVar5 * -2 + 1) * 4);
      }
      FUN_004c93c0(param_1,local_2c,&local_ac,*(char *)((int)param_1 + 0x2e));
      local_dc[0] = 1;
      local_34 = local_34 + -2;
      FUN_004a86dc((int *)local_2c,2);
      *in_FS_OFFSET = local_50;
    }
    else if (param_2 == 9) {
      *(undefined4 *)((int)param_1 + 0x2a) = 9;
      *(undefined1 *)((int)param_1 + 0x2e) = 1;
      SetCapture(*(HWND *)(*param_1 + 0xc));
      FUN_004c9b94(local_dc,param_1);
      piVar2 = local_dc;
      piVar4 = local_cc;
      for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar4 = *piVar2;
        piVar2 = piVar2 + (uint)bVar5 * -2 + 1;
        piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
      }
      FUN_004c9490(param_1,local_2c,local_cc,*(char *)((int)param_1 + 0x2e));
      local_dc[0] = 1;
      local_34 = local_34 + -2;
      FUN_004a86dc((int *)local_2c,2);
      *in_FS_OFFSET = local_50;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x2a) = 0;
      local_dc[0] = 0;
      FUN_004a86dc((int *)local_2c,2);
      *in_FS_OFFSET = local_50;
    }
  }
  return local_dc[0];
}

