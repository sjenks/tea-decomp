// rea decompile_all
// name: FUN_004aceec
// address: 0x4aceec
// body: available
// range: 0x4aceec-0x4ad10e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004aceec(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  char cVar7;
  int local_3c;
  undefined4 local_34;
  
  FUN_004dce64(0x50c600);
  if (param_3 == 0) {
    FUN_004ac7b4(param_2);
    iVar1 = (**(code **)(param_1[3] + 0x24))();
    local_3c = 0;
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = (**(code **)(param_1[3] + 0x40))();
        if (local_3c < iVar2) {
          local_3c = iVar2;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
    puVar3 = (uint *)FUN_004cc180();
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        (**(code **)(param_1[3] + 0x44))();
        cVar7 = '\0';
        uVar4 = (**(code **)(param_1[3] + 0x48))();
        FUN_004ac9dc(param_2,puVar3,uVar4,cVar7);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
    FUN_004cc0cc();
    iVar1 = (**(code **)(param_1[3] + 0x6c))();
    if (iVar1 < 0) {
      iVar1 = GetWindowTextLengthA(*(HWND *)(*param_1 + 0xc));
      if (iVar1 < 1) {
        FUN_004aca54(param_2,(uint *)&DAT_0050c59c);
      }
      else {
        puVar3 = (uint *)FUN_004cc180();
        GetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPSTR)puVar3,iVar1 + 1);
        FUN_004aca54(param_2,puVar3);
        FUN_004cc0cc();
      }
    }
    else {
      iVar5 = (**(code **)(param_1[3] + 0x40))();
      if (iVar5 < 1) {
        FUN_004aca54(param_2,(uint *)&DAT_0050c59c);
      }
      else {
        iVar5 = iVar5 + 1;
        puVar3 = (uint *)FUN_004cc180();
        (**(code **)(param_1[3] + 0x44))(puVar3,param_1[3],iVar5,param_1,puVar3,iVar1);
        FUN_004aca54(param_2,puVar3);
        FUN_004cc0cc();
      }
    }
  }
  else if (param_3 == 1) {
    (**(code **)(param_1[3] + 0x58))();
    FUN_0049bb48(*param_2,FUN_004aced4);
    for (uVar6 = 0; uVar6 < *(uint *)(param_2[1] + 1); uVar6 = uVar6 + 1) {
      (**(code **)(param_1[3] + 0x4c))();
    }
    SetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPCSTR)param_2[4]);
    if (-1 < param_2[6]) {
      (**(code **)(param_1[3] + 0x2c))();
    }
  }
  *in_FS_OFFSET = local_34;
  return 0x1c;
}

