// rea decompile_all
// name: FUN_0042b0a4
// address: 0x42b0a4
// body: available
// range: 0x42b0a4-0x42b634 inclusive
// range: 0x42b63a-0x42b8f4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl
FUN_0042b0a4(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  int *local_38;
  int *local_34;
  int *local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  char local_d;
  int *local_c;
  int local_8;
  
  local_78 = param_3;
  local_74 = param_4;
  local_70 = param_5;
  local_8 = *(int *)(param_2 + 0x24);
  if (local_8 != param_5) {
    FUN_0042b948((int)&local_78);
  }
  FUN_0042b8f8(&local_c,param_5);
  local_d = '\0';
  local_14 = local_c + 2;
  piVar6 = local_c;
  if (*local_14 == 0) {
    local_18 = local_c + 3;
    if (*local_18 == 0) {
      piVar5 = (int *)local_c[1];
      local_1c = local_c;
      local_20 = local_c[1];
      if (*(int *)(param_2 + 0x24) == local_20) {
        *(int *)(*(int *)(param_2 + 0x24) + 0xc) = local_20;
        *(int *)(*(int *)(param_2 + 0x24) + 8) = local_20;
        *(undefined4 *)(*(int *)(param_2 + 0x24) + 4) = 0;
      }
      else if (*(int **)(local_20 + 8) == local_c) {
        *(undefined4 *)(local_20 + 8) = 0;
        if (*(int **)(*(int *)(param_2 + 0x24) + 8) == local_c) {
          *(int *)(*(int *)(param_2 + 0x24) + 8) = local_20;
        }
      }
      else {
        *(undefined4 *)(local_20 + 0xc) = 0;
        if (*(int **)(*(int *)(param_2 + 0x24) + 0xc) == local_c) {
          *(int *)(*(int *)(param_2 + 0x24) + 0xc) = local_20;
        }
      }
      local_d = '\x01';
    }
    else {
      piVar5 = (int *)local_c[3];
    }
  }
  else {
    local_24 = local_c + 3;
    if (*local_24 == 0) {
      piVar5 = (int *)local_c[2];
    }
    else {
      for (piVar6 = (int *)local_c[3]; piVar6[2] != 0; piVar6 = (int *)piVar6[2]) {
      }
      piVar5 = (int *)piVar6[3];
    }
  }
  if ((local_d == '\0') && (piVar6 != local_c)) {
    *(int **)(local_c[2] + 4) = piVar6;
    piVar6[2] = local_c[2];
    if (piVar6 == (int *)local_c[3]) {
      if (piVar5 != (int *)0x0) {
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      if (piVar5 != (int *)0x0) {
        piVar5[1] = piVar6[1];
      }
      *(int **)(piVar6[1] + 8) = piVar5;
      piVar6[3] = local_c[3];
      *(int **)(local_c[3] + 4) = piVar6;
    }
    if (*(int **)(*(int *)(param_2 + 0x24) + 4) == local_c) {
      *(int **)(*(int *)(param_2 + 0x24) + 4) = piVar6;
    }
    else if (*(int **)(local_c[1] + 8) == local_c) {
      *(int **)(local_c[1] + 8) = piVar6;
    }
    else {
      *(int **)(local_c[1] + 0xc) = piVar6;
    }
    piVar6[1] = local_c[1];
    if (piVar5 == (int *)0x0) {
      piVar5 = piVar6;
    }
    iVar1 = *piVar6;
    *piVar6 = *local_c;
    *local_c = iVar1;
    piVar6 = local_c;
  }
  else if (local_d == '\0') {
    piVar5[1] = piVar6[1];
    if (*(int **)(*(int *)(param_2 + 0x24) + 4) == local_c) {
      *(int **)(*(int *)(param_2 + 0x24) + 4) = piVar5;
    }
    else if (*(int **)(local_c[1] + 8) == local_c) {
      *(int **)(local_c[1] + 8) = piVar5;
    }
    else {
      *(int **)(local_c[1] + 0xc) = piVar5;
    }
    if (*(int **)(*(int *)(param_2 + 0x24) + 8) == local_c) {
      local_34 = local_c + 3;
      if (*local_34 == 0) {
        *(int *)(*(int *)(param_2 + 0x24) + 8) = local_c[1];
      }
      else {
        uVar3 = FUN_0042b908((int)piVar5);
        *(undefined4 *)(*(int *)(param_2 + 0x24) + 8) = uVar3;
      }
    }
    if (*(int **)(*(int *)(param_2 + 0x24) + 0xc) == local_c) {
      local_38 = local_c + 2;
      if (*local_38 == 0) {
        *(int *)(*(int *)(param_2 + 0x24) + 0xc) = local_c[1];
      }
      else {
        uVar3 = FUN_0042b928((int)piVar5);
        *(undefined4 *)(*(int *)(param_2 + 0x24) + 0xc) = uVar3;
      }
    }
  }
  if ((piVar5 != *(int **)(param_2 + 0x24)) && (*piVar6 != 0)) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            if ((piVar5 == *(int **)(*(int *)(param_2 + 0x24) + 4)) || (*piVar5 != 1))
            goto LAB_0042b8b0;
            if (piVar5 != *(int **)(piVar5[1] + 8)) break;
            piVar4 = *(int **)(piVar5[1] + 0xc);
            if (piVar4 == (int *)0x0) {
              *piVar5 = 0;
              piVar5 = (int *)piVar5[1];
            }
            else {
              if (*piVar4 == 0) {
                *piVar4 = 1;
                *(undefined4 *)piVar5[1] = 0;
                iVar1 = piVar5[1];
                iVar2 = *(int *)(iVar1 + 0xc);
                *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar2 + 8);
                if (*(int *)(iVar2 + 8) != 0) {
                  *(int *)(*(int *)(iVar2 + 8) + 4) = iVar1;
                }
                *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
                if (iVar1 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
                  *(int *)(*(int *)(param_2 + 0x24) + 4) = iVar2;
                }
                else if (iVar1 == *(int *)(*(int *)(iVar1 + 4) + 8)) {
                  *(int *)(*(int *)(iVar1 + 4) + 8) = iVar2;
                }
                else {
                  *(int *)(*(int *)(iVar1 + 4) + 0xc) = iVar2;
                }
                *(int *)(iVar2 + 8) = iVar1;
                *(int *)(iVar1 + 4) = iVar2;
                piVar4 = *(int **)(piVar5[1] + 0xc);
              }
              if (piVar4 == (int *)0x0) {
                *piVar5 = 0;
                piVar5 = (int *)piVar5[1];
              }
              else {
                if (((piVar4[2] != 0) && (*(int *)piVar4[2] != 1)) ||
                   ((piVar4[3] != 0 && (*(int *)piVar4[3] != 1)))) {
                  if ((piVar4[3] == 0) || (*(int *)piVar4[3] == 1)) {
                    if (piVar4[2] != 0) {
                      *(undefined4 *)piVar4[2] = 1;
                    }
                    *piVar4 = 0;
                    iVar1 = piVar4[2];
                    piVar4[2] = *(int *)(iVar1 + 0xc);
                    if (*(int *)(iVar1 + 0xc) != 0) {
                      *(int **)(*(int *)(iVar1 + 0xc) + 4) = piVar4;
                    }
                    *(int *)(iVar1 + 4) = piVar4[1];
                    if (piVar4 == *(int **)(*(int *)(param_2 + 0x24) + 4)) {
                      *(int *)(*(int *)(param_2 + 0x24) + 4) = iVar1;
                    }
                    else if (piVar4 == *(int **)(piVar4[1] + 0xc)) {
                      *(int *)(piVar4[1] + 0xc) = iVar1;
                    }
                    else {
                      *(int *)(piVar4[1] + 8) = iVar1;
                    }
                    *(int **)(iVar1 + 0xc) = piVar4;
                    piVar4[1] = iVar1;
                    piVar4 = *(int **)(piVar5[1] + 0xc);
                  }
                  if (piVar4 != (int *)0x0) {
                    *piVar4 = *(int *)piVar5[1];
                    *(undefined4 *)piVar5[1] = 1;
                    if (piVar4[3] != 0) {
                      *(undefined4 *)piVar4[3] = 1;
                    }
                    iVar1 = piVar5[1];
                    iVar2 = *(int *)(iVar1 + 0xc);
                    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar2 + 8);
                    if (*(int *)(iVar2 + 8) != 0) {
                      *(int *)(*(int *)(iVar2 + 8) + 4) = iVar1;
                    }
                    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
                    if (iVar1 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
                      *(int *)(*(int *)(param_2 + 0x24) + 4) = iVar2;
                    }
                    else if (iVar1 == *(int *)(*(int *)(iVar1 + 4) + 8)) {
                      *(int *)(*(int *)(iVar1 + 4) + 8) = iVar2;
                    }
                    else {
                      *(int *)(*(int *)(iVar1 + 4) + 0xc) = iVar2;
                    }
                    *(int *)(iVar2 + 8) = iVar1;
                    *(int *)(iVar1 + 4) = iVar2;
                  }
                  goto LAB_0042b8b0;
                }
                *piVar4 = 0;
                piVar5 = (int *)piVar5[1];
              }
            }
          }
          piVar4 = *(int **)(piVar5[1] + 8);
          if (piVar4 != (int *)0x0) break;
          *piVar5 = 0;
          piVar5 = (int *)piVar5[1];
        }
        if (*piVar4 == 0) {
          *piVar4 = 1;
          *(undefined4 *)piVar5[1] = 0;
          iVar1 = piVar5[1];
          iVar2 = *(int *)(iVar1 + 8);
          *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar2 + 0xc);
          if (*(int *)(iVar2 + 0xc) != 0) {
            *(int *)(*(int *)(iVar2 + 0xc) + 4) = iVar1;
          }
          *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
          if (iVar1 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
            *(int *)(*(int *)(param_2 + 0x24) + 4) = iVar2;
          }
          else if (iVar1 == *(int *)(*(int *)(iVar1 + 4) + 0xc)) {
            *(int *)(*(int *)(iVar1 + 4) + 0xc) = iVar2;
          }
          else {
            *(int *)(*(int *)(iVar1 + 4) + 8) = iVar2;
          }
          *(int *)(iVar2 + 0xc) = iVar1;
          *(int *)(iVar1 + 4) = iVar2;
          piVar4 = *(int **)(piVar5[1] + 8);
        }
        if (piVar4 != (int *)0x0) break;
        *piVar5 = 0;
        piVar5 = (int *)piVar5[1];
      }
      if (((piVar4[3] != 0) && (*(int *)piVar4[3] != 1)) ||
         ((piVar4[2] != 0 && (*(int *)piVar4[2] != 1)))) break;
      *piVar4 = 0;
      piVar5 = (int *)piVar5[1];
    }
    if ((piVar4[2] == 0) || (*(int *)piVar4[2] == 1)) {
      if (piVar4[3] != 0) {
        *(undefined4 *)piVar4[3] = 1;
      }
      *piVar4 = 0;
      iVar1 = piVar4[3];
      piVar4[3] = *(int *)(iVar1 + 8);
      if (*(int *)(iVar1 + 8) != 0) {
        *(int **)(*(int *)(iVar1 + 8) + 4) = piVar4;
      }
      *(int *)(iVar1 + 4) = piVar4[1];
      if (piVar4 == *(int **)(*(int *)(param_2 + 0x24) + 4)) {
        *(int *)(*(int *)(param_2 + 0x24) + 4) = iVar1;
      }
      else if (piVar4 == *(int **)(piVar4[1] + 8)) {
        *(int *)(piVar4[1] + 8) = iVar1;
      }
      else {
        *(int *)(piVar4[1] + 0xc) = iVar1;
      }
      *(int **)(iVar1 + 8) = piVar4;
      piVar4[1] = iVar1;
      piVar4 = *(int **)(piVar5[1] + 8);
    }
    if (piVar4 != (int *)0x0) {
      *piVar4 = *(int *)piVar5[1];
      *(undefined4 *)piVar5[1] = 1;
      if (piVar4[2] != 0) {
        *(undefined4 *)piVar4[2] = 1;
      }
      iVar1 = piVar5[1];
      iVar2 = *(int *)(iVar1 + 8);
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar2 + 0xc);
      if (*(int *)(iVar2 + 0xc) != 0) {
        *(int *)(*(int *)(iVar2 + 0xc) + 4) = iVar1;
      }
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
      if (iVar1 == *(int *)(*(int *)(param_2 + 0x24) + 4)) {
        *(int *)(*(int *)(param_2 + 0x24) + 4) = iVar2;
      }
      else if (iVar1 == *(int *)(*(int *)(iVar1 + 4) + 0xc)) {
        *(int *)(*(int *)(iVar1 + 4) + 0xc) = iVar2;
      }
      else {
        *(int *)(*(int *)(iVar1 + 4) + 8) = iVar2;
      }
      *(int *)(iVar2 + 0xc) = iVar1;
      *(int *)(iVar1 + 4) = iVar2;
    }
LAB_0042b8b0:
    *piVar5 = 1;
  }
  piVar6[3] = *(int *)(param_2 + 0x18);
  *(int **)(param_2 + 0x18) = piVar6;
  *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + -1;
  *param_1 = local_78;
  param_1[1] = local_74;
  param_1[2] = local_70;
  return param_1;
}

