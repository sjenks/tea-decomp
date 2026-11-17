// rea decompile_all
// name: FUN_00422230
// address: 0x422230
// body: available
// range: 0x422230-0x4224f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __cdecl FUN_00422230(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  FUN_0041ee4c((undefined4 *)param_2,0,param_3);
  do {
    iVar3 = 0;
    cVar1 = *param_1;
    if (cVar1 == '\0') {
      return param_2;
    }
    if (cVar1 < 'i') {
      if (cVar1 == 'h') {
        if (param_1[1] == 'h') {
          FUN_0041eef0(param_2,&DAT_00432e6b);
          param_1 = param_1 + 1;
        }
        else {
          FUN_0041eef0(param_2,&DAT_00432e70);
        }
      }
      else if (cVar1 < 'N') {
        pcVar2 = param_1;
        if (cVar1 == 'M') {
          while (*pcVar2 == 'M') {
            iVar3 = iVar3 + 1;
            pcVar2 = pcVar2 + 1;
          }
          if (iVar3 == 1) {
            FUN_0041eef0(param_2,&DAT_00432e9c);
          }
          else if (iVar3 == 2) {
            param_1 = param_1 + 1;
            FUN_0041eef0(param_2,&DAT_00432e9f);
          }
          else if (iVar3 == 3) {
            param_1 = param_1 + 2;
            FUN_0041eef0(param_2,&DAT_00432ea4);
          }
          else if (iVar3 == 4) {
            param_1 = param_1 + 3;
            FUN_0041eef0(param_2,&DAT_00432ea7);
          }
        }
        else if (cVar1 != '\'') {
          if (cVar1 != 'H') goto LAB_004224d2;
          if (param_1[1] == 'H') {
            FUN_0041eef0(param_2,&DAT_00432e83);
            param_1 = param_1 + 1;
          }
          else {
            FUN_0041eef0(param_2,&DAT_00432e88);
          }
        }
      }
      else {
        pcVar2 = param_1;
        if (cVar1 == 'd') {
          while (*pcVar2 == 'd') {
            iVar3 = iVar3 + 1;
            pcVar2 = pcVar2 + 1;
          }
          if (iVar3 == 1) {
            FUN_0041eef0(param_2,&DAT_00432e8e);
          }
          else if (iVar3 == 2) {
            param_1 = param_1 + 1;
            FUN_0041eef0(param_2,&DAT_00432e91);
          }
          else if (iVar3 == 3) {
            param_1 = param_1 + 2;
            FUN_0041eef0(param_2,&DAT_00432e96);
          }
          else if (iVar3 == 4) {
            param_1 = param_1 + 3;
            FUN_0041eef0(param_2,&DAT_00432e99);
          }
        }
        else if (cVar1 == 'g') {
          if (param_1[1] == 'g') {
            FUN_0041eef0(param_2,&DAT_00432e68);
            param_1 = param_1 + 1;
          }
        }
        else {
LAB_004224d2:
          FUN_0041efdc(param_2,param_1,1);
        }
      }
    }
    else if (cVar1 == 'm') {
      if (param_1[1] == 'm') {
        FUN_0041eef0(param_2,&DAT_00432e73);
        param_1 = param_1 + 1;
      }
      else {
        FUN_0041eef0(param_2,&DAT_00432e78);
      }
    }
    else if (cVar1 == 's') {
      if (param_1[1] == 's') {
        FUN_0041eef0(param_2,&DAT_00432e7b);
        param_1 = param_1 + 1;
      }
      else {
        FUN_0041eef0(param_2,&DAT_00432e80);
      }
    }
    else if (cVar1 == 't') {
      if (param_1[1] == 't') {
        param_1 = param_1 + 1;
      }
      else {
        FUN_0041eef0(param_2,&DAT_00432e8b);
      }
    }
    else {
      pcVar2 = param_1;
      if (cVar1 != 'y') goto LAB_004224d2;
      while (*pcVar2 == 'y') {
        iVar3 = iVar3 + 1;
        pcVar2 = pcVar2 + 1;
      }
      if (iVar3 == 1) {
        FUN_0041eef0(param_2,&DAT_00432eaa);
      }
      else if (iVar3 == 2) {
        param_1 = param_1 + 1;
        FUN_0041eef0(param_2,&DAT_00432ead);
      }
      else if (iVar3 == 4) {
        param_1 = param_1 + 3;
        FUN_0041eef0(param_2,&DAT_00432eb2);
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}

