// rea decompile_all
// name: FUN_004aec4c
// address: 0x4aec4c
// body: available
// range: 0x4aec4c-0x4aee00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __cdecl FUN_004aec4c(int *param_1,uint param_2,uint *param_3,char *param_4,int param_5)

{
  HMENU hMenu;
  BOOL BVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  CHAR local_108 [256];
  char *local_8;
  
  if (param_2 == 0xffffffff) {
    return (char *)0x0;
  }
  pcVar4 = (char *)0x0;
  if (param_5 == 2) {
    hMenu = GetMenu(*(HWND *)(param_1[1] + 0xc));
    BVar1 = IsMenu(hMenu);
    if (BVar1 != 0) {
      GetMenu(*(HWND *)(param_1[1] + 0xc));
      iVar2 = FUN_004c1f4c();
      if (iVar2 != 0) {
        pcVar4 = thunk_FUN_004dc924((char *)param_3,'\t');
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        pcVar4 = thunk_FUN_004dc924((char *)param_3,'\b');
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        pcVar4 = FUN_004dc9f4(param_3);
        while ((pcVar4 = pcVar4 + -1, -1 < (int)pcVar4 &&
               (*(char *)((int)param_3 + (int)pcVar4) == '.'))) {
          *(char *)((int)param_3 + (int)pcVar4) = '\0';
        }
        iVar2 = -1;
        do {
          iVar2 = iVar2 + 1;
          if (*(char *)((int)param_3 + iVar2) == '\0') goto LAB_004aed18;
        } while (*(char *)((int)param_3 + iVar2) != '&');
        do {
          *(undefined1 *)((int)param_3 + iVar2) = *(undefined1 *)((int)param_3 + iVar2 + 1);
          iVar2 = iVar2 + 1;
        } while (*(char *)((int)param_3 + iVar2) != '\0');
LAB_004aed18:
        pcVar4 = FUN_004dc9f4(param_3);
        goto LAB_004aed9e;
      }
    }
    iVar2 = FUN_004c0cd4(*(int *)(param_1[1] + 0x70),param_2,local_108,0x100);
    if ((iVar2 == 0) && (*(int *)(*param_1 + 0x1d) != 0)) {
      iVar2 = FUN_004c0cd4(*(int *)(*param_1 + 0x1d),param_2,local_108,0x100);
    }
    if ((iVar2 != 0) && (local_8 = thunk_FUN_004dc924(local_108,'\n'), local_8 != (char *)0x0)) {
      FUN_004dcc40(param_3,(uint *)(local_8 + 1),param_4);
      pcVar4 = FUN_004dc9f4(param_3);
    }
  }
LAB_004aed9e:
  if (param_5 == 1) {
    pcVar4 = (char *)FUN_004c0cd4(*(int *)(param_1[1] + 0x70),param_2,(LPSTR)param_3,(int)param_4);
    if ((pcVar4 == (char *)0x0) && (*(int *)(*param_1 + 0x1d) != 0)) {
      pcVar4 = (char *)FUN_004c0cd4(*(int *)(*param_1 + 0x1d),param_2,(LPSTR)param_3,(int)param_4);
    }
    if ((pcVar4 != (char *)0x0) &&
       (pcVar3 = thunk_FUN_004dc924((char *)param_3,'\n'), pcVar3 != (char *)0x0)) {
      *pcVar3 = '\0';
      pcVar4 = pcVar3 + (-1 - (int)param_3);
    }
  }
  return pcVar4;
}

