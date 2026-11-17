// rea decompile_all
// name: FUN_00416964
// address: 0x416964
// body: available
// range: 0x416964-0x4169a1 inclusive
// range: 0x4169a7-0x416a77 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_00416964(int *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  LPCSTR lpFile;
  undefined4 uVar5;
  
  if (param_3[2] == -0x2d2) {
    cVar1 = (**(code **)(param_1[3] + 100))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  else if ((param_3[2] == 0x70b) && (param_3[3] == 0x201)) {
    iVar2 = FUN_004a768c(*param_1);
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 8);
    }
    puVar4 = FUN_004dd744(iVar2,iVar3,(int *)&DAT_0040299c,(int *)&DAT_00402cfc,0);
    if ((puVar4 != (undefined4 *)0x0) && ((int)param_3[6] < (int)param_3[7])) {
      iVar2 = param_3[7];
      iVar3 = param_3[6];
      lpFile = (LPCSTR)FUN_004cc180();
      FUN_004dc844((undefined4 *)lpFile,0,(iVar2 - iVar3) + 1);
      (**(code **)(puVar4[3] + 0x30))();
      ShellExecuteA((HWND)0x0,&DAT_004ed2ba,lpFile,(LPCSTR)0x0,(LPCSTR)0x0,9);
      FUN_004cc0cc();
    }
  }
  uVar5 = FUN_004a5a18((undefined4 *)*param_1,param_2,param_3);
  return uVar5;
}

