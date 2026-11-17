// rea decompile_all
// name: FUN_004e0ff8
// address: 0x4e0ff8
// body: available
// range: 0x4e0ff8-0x4e12ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __cdecl FUN_004e0ff8(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  FUN_004dc844((undefined4 *)param_2,0,param_3);
  do {
    iVar3 = 0;
    cVar1 = *param_1;
    if (cVar1 == '\0') {
      return param_2;
    }
    if (cVar1 < 'i') {
      if (cVar1 == 'h') {
        if (param_1[1] == 'h') {
          FUN_004dc8e8(param_2,&DAT_005181b7);
          param_1 = param_1 + 1;
        }
        else {
          FUN_004dc8e8(param_2,&DAT_005181bc);
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
            FUN_004dc8e8(param_2,&DAT_005181e8);
          }
          else if (iVar3 == 2) {
            param_1 = param_1 + 1;
            FUN_004dc8e8(param_2,&DAT_005181eb);
          }
          else if (iVar3 == 3) {
            param_1 = param_1 + 2;
            FUN_004dc8e8(param_2,&DAT_005181f0);
          }
          else if (iVar3 == 4) {
            param_1 = param_1 + 3;
            FUN_004dc8e8(param_2,&DAT_005181f3);
          }
        }
        else if (cVar1 != '\'') {
          if (cVar1 != 'H') goto LAB_004e129a;
          if (param_1[1] == 'H') {
            FUN_004dc8e8(param_2,&DAT_005181cf);
            param_1 = param_1 + 1;
          }
          else {
            FUN_004dc8e8(param_2,&DAT_005181d4);
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
            FUN_004dc8e8(param_2,&DAT_005181da);
          }
          else if (iVar3 == 2) {
            param_1 = param_1 + 1;
            FUN_004dc8e8(param_2,&DAT_005181dd);
          }
          else if (iVar3 == 3) {
            param_1 = param_1 + 2;
            FUN_004dc8e8(param_2,&DAT_005181e2);
          }
          else if (iVar3 == 4) {
            param_1 = param_1 + 3;
            FUN_004dc8e8(param_2,&DAT_005181e5);
          }
        }
        else if (cVar1 == 'g') {
          if (param_1[1] == 'g') {
            FUN_004dc8e8(param_2,&DAT_005181b4);
            param_1 = param_1 + 1;
          }
        }
        else {
LAB_004e129a:
          FUN_004dca50(param_2,param_1,1);
        }
      }
    }
    else if (cVar1 == 'm') {
      if (param_1[1] == 'm') {
        FUN_004dc8e8(param_2,&DAT_005181bf);
        param_1 = param_1 + 1;
      }
      else {
        FUN_004dc8e8(param_2,&DAT_005181c4);
      }
    }
    else if (cVar1 == 's') {
      if (param_1[1] == 's') {
        FUN_004dc8e8(param_2,&DAT_005181c7);
        param_1 = param_1 + 1;
      }
      else {
        FUN_004dc8e8(param_2,&DAT_005181cc);
      }
    }
    else if (cVar1 == 't') {
      if (param_1[1] == 't') {
        param_1 = param_1 + 1;
      }
      else {
        FUN_004dc8e8(param_2,&DAT_005181d7);
      }
    }
    else {
      pcVar2 = param_1;
      if (cVar1 != 'y') goto LAB_004e129a;
      while (*pcVar2 == 'y') {
        iVar3 = iVar3 + 1;
        pcVar2 = pcVar2 + 1;
      }
      if (iVar3 == 1) {
        FUN_004dc8e8(param_2,&DAT_005181f6);
      }
      else if (iVar3 == 2) {
        param_1 = param_1 + 1;
        FUN_004dc8e8(param_2,&DAT_005181f9);
      }
      else if (iVar3 == 4) {
        param_1 = param_1 + 3;
        FUN_004dc8e8(param_2,&DAT_005181fe);
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}

