// rea decompile_all
// name: FUN_0042e60c
// address: 0x42e60c
// body: available
// range: 0x42e60c-0x42e906 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_0042e60c(int param_1,int *param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar5 = FUN_0042e908(param_2,param_5);
  param_2[10] = param_2[10] + 1;
  if ((param_4 != param_2[9]) && (param_3 == 0)) {
    cVar4 = FUN_00430548(param_2 + 0xc,*param_5,*(int *)(param_4 + 0x10));
    if (cVar4 == '\0') {
      *(undefined4 **)(param_4 + 0xc) = puVar5;
      if (param_4 == *(int *)(param_2[9] + 0xc)) {
        *(undefined4 **)(param_2[9] + 0xc) = puVar5;
      }
      goto LAB_0042e6c0;
    }
  }
  *(undefined4 **)(param_4 + 8) = puVar5;
  if (param_4 == param_2[9]) {
    *(undefined4 **)(param_2[9] + 4) = puVar5;
    *(undefined4 **)(param_2[9] + 0xc) = puVar5;
  }
  else if (param_4 == *(int *)(param_2[9] + 8)) {
    *(undefined4 **)(param_2[9] + 8) = puVar5;
  }
LAB_0042e6c0:
  puVar5[1] = param_4;
  puVar6 = puVar5;
  while ((puVar6 != *(undefined4 **)(param_2[9] + 4) && (*(int *)puVar6[1] == 0))) {
    iVar1 = *(int *)(puVar6[1] + 4);
    if (*(int *)(iVar1 + 8) == puVar6[1]) {
      piVar2 = *(int **)(iVar1 + 0xc);
      if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
        puVar3 = (undefined4 *)puVar6[1];
        if (puVar6 == (undefined4 *)puVar3[3]) {
          iVar1 = puVar3[3];
          puVar3[3] = *(undefined4 *)(iVar1 + 8);
          if (*(int *)(iVar1 + 8) != 0) {
            *(undefined4 **)(*(int *)(iVar1 + 8) + 4) = puVar3;
          }
          *(undefined4 *)(iVar1 + 4) = puVar3[1];
          if (puVar3 == *(undefined4 **)(param_2[9] + 4)) {
            *(int *)(param_2[9] + 4) = iVar1;
          }
          else if (puVar3 == *(undefined4 **)(puVar3[1] + 8)) {
            *(int *)(puVar3[1] + 8) = iVar1;
          }
          else {
            *(int *)(puVar3[1] + 0xc) = iVar1;
          }
          *(undefined4 **)(iVar1 + 8) = puVar3;
          puVar3[1] = iVar1;
          puVar6 = puVar3;
        }
        puVar3 = (undefined4 *)puVar6[1];
        *puVar3 = 1;
        puVar3 = (undefined4 *)puVar3[1];
        *puVar3 = 0;
        iVar1 = puVar3[2];
        puVar3[2] = *(undefined4 *)(iVar1 + 0xc);
        if (*(int *)(iVar1 + 0xc) != 0) {
          *(undefined4 **)(*(int *)(iVar1 + 0xc) + 4) = puVar3;
        }
        *(undefined4 *)(iVar1 + 4) = puVar3[1];
        if (puVar3 == *(undefined4 **)(param_2[9] + 4)) {
          *(int *)(param_2[9] + 4) = iVar1;
        }
        else if (puVar3 == *(undefined4 **)(puVar3[1] + 0xc)) {
          *(int *)(puVar3[1] + 0xc) = iVar1;
        }
        else {
          *(int *)(puVar3[1] + 8) = iVar1;
        }
        *(undefined4 **)(iVar1 + 0xc) = puVar3;
        puVar3[1] = iVar1;
      }
      else {
        *(undefined4 *)puVar6[1] = 1;
        *piVar2 = 1;
        puVar6 = *(undefined4 **)(puVar6[1] + 4);
        *puVar6 = 0;
      }
    }
    else {
      piVar2 = *(int **)(*(int *)(puVar6[1] + 4) + 8);
      if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
        puVar3 = (undefined4 *)puVar6[1];
        if (puVar6 == (undefined4 *)puVar3[2]) {
          iVar1 = puVar3[2];
          puVar3[2] = *(undefined4 *)(iVar1 + 0xc);
          if (*(int *)(iVar1 + 0xc) != 0) {
            *(undefined4 **)(*(int *)(iVar1 + 0xc) + 4) = puVar3;
          }
          *(undefined4 *)(iVar1 + 4) = puVar3[1];
          if (puVar3 == *(undefined4 **)(param_2[9] + 4)) {
            *(int *)(param_2[9] + 4) = iVar1;
          }
          else if (puVar3 == *(undefined4 **)(puVar3[1] + 0xc)) {
            *(int *)(puVar3[1] + 0xc) = iVar1;
          }
          else {
            *(int *)(puVar3[1] + 8) = iVar1;
          }
          *(undefined4 **)(iVar1 + 0xc) = puVar3;
          puVar3[1] = iVar1;
          puVar6 = puVar3;
        }
        puVar3 = (undefined4 *)puVar6[1];
        *puVar3 = 1;
        puVar3 = (undefined4 *)puVar3[1];
        *puVar3 = 0;
        iVar1 = puVar3[3];
        puVar3[3] = *(undefined4 *)(iVar1 + 8);
        if (*(int *)(iVar1 + 8) != 0) {
          *(undefined4 **)(*(int *)(iVar1 + 8) + 4) = puVar3;
        }
        *(undefined4 *)(iVar1 + 4) = puVar3[1];
        if (puVar3 == *(undefined4 **)(param_2[9] + 4)) {
          *(int *)(param_2[9] + 4) = iVar1;
        }
        else if (puVar3 == *(undefined4 **)(puVar3[1] + 8)) {
          *(int *)(puVar3[1] + 8) = iVar1;
        }
        else {
          *(int *)(puVar3[1] + 0xc) = iVar1;
        }
        *(undefined4 **)(iVar1 + 8) = puVar3;
        puVar3[1] = iVar1;
      }
      else {
        *(undefined4 *)puVar6[1] = 1;
        *piVar2 = 1;
        puVar6 = *(undefined4 **)(puVar6[1] + 4);
        *puVar6 = 0;
      }
    }
  }
  **(undefined4 **)(param_2[9] + 4) = 1;
  *(undefined4 **)(param_1 + 8) = puVar5;
  return param_1;
}

