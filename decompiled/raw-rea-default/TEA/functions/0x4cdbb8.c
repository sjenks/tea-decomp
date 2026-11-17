// rea decompile_all
// name: FUN_004cdbb8
// address: 0x4cdbb8
// body: available
// range: 0x4cdbb8-0x4cdbc0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __stdcall
FUN_004cdbb8(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 auStack_48 [4];
  undefined1 local_38 [16];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_18;
  int iStack_14;
  char cStack_d;
  int iStack_c;
  int iStack_8;
  
  uStack_28 = param_3;
  uStack_24 = param_4;
  uStack_20 = param_5;
  FUN_004cd89c((int)local_38,param_2);
  bVar1 = FUN_004cdac8((int)&uStack_28,(int)local_38);
  if (bVar1) {
    FUN_004cdae4(auStack_48,&uStack_28);
  }
  FUN_004ce4c0(&iStack_8,param_5);
  iVar6 = iStack_8;
  cStack_d = '\0';
  piVar2 = (int *)FUN_004cd864(iStack_8);
  bVar1 = FUN_004cda78(piVar2);
  if (bVar1) {
    piVar2 = (int *)FUN_004cda90(iVar6);
    bVar1 = FUN_004cda78(piVar2);
    if (bVar1) {
      piVar2 = (int *)FUN_004cda1c(iVar6);
      iStack_c = *piVar2;
      FUN_004ce4d0(param_2,iVar6);
      cStack_d = '\x01';
    }
    else {
      piVar2 = (int *)FUN_004cda90(iVar6);
      iStack_c = *piVar2;
    }
  }
  else {
    piVar2 = (int *)FUN_004cda90(iVar6);
    bVar1 = FUN_004cda78(piVar2);
    if (bVar1) {
      piVar2 = (int *)FUN_004cd864(iVar6);
      iStack_c = *piVar2;
    }
    else {
      piVar2 = (int *)FUN_004cda90(iVar6);
      iVar6 = *piVar2;
      while( true ) {
        piVar2 = (int *)FUN_004cd864(iVar6);
        bVar1 = FUN_004cda78(piVar2);
        if (bVar1) break;
        piVar2 = (int *)FUN_004cd864(iVar6);
        iVar6 = *piVar2;
      }
      piVar2 = (int *)FUN_004cda90(iVar6);
      iStack_c = *piVar2;
    }
  }
  if ((cStack_d == '\0') && (iVar6 != iStack_8)) {
    piVar2 = (int *)FUN_004cd864(iStack_8);
    piVar2 = (int *)FUN_004cda1c(*piVar2);
    *piVar2 = iVar6;
    puVar3 = (undefined4 *)FUN_004cd864(iStack_8);
    uVar7 = *puVar3;
    puVar3 = (undefined4 *)FUN_004cd864(iVar6);
    *puVar3 = uVar7;
    piVar2 = (int *)FUN_004cda90(iStack_8);
    if (iVar6 == *piVar2) {
      bVar1 = FUN_004cda78(&iStack_c);
      if (!bVar1) {
        piVar2 = (int *)FUN_004cda1c(iStack_c);
        *piVar2 = iVar6;
      }
    }
    else {
      bVar1 = FUN_004cda78(&iStack_c);
      if (!bVar1) {
        puVar3 = (undefined4 *)FUN_004cda1c(iVar6);
        uVar7 = *puVar3;
        puVar3 = (undefined4 *)FUN_004cda1c(iStack_c);
        *puVar3 = uVar7;
      }
      piVar2 = (int *)FUN_004cda1c(iVar6);
      piVar2 = (int *)FUN_004cd864(*piVar2);
      *piVar2 = iStack_c;
      puVar3 = (undefined4 *)FUN_004cda90(iStack_8);
      uVar7 = *puVar3;
      puVar3 = (undefined4 *)FUN_004cda90(iVar6);
      *puVar3 = uVar7;
      piVar2 = (int *)FUN_004cda90(iStack_8);
      piVar2 = (int *)FUN_004cda1c(*piVar2);
      *piVar2 = iVar6;
    }
    piVar2 = (int *)FUN_004cda08(param_2);
    if (*piVar2 == iStack_8) {
      piVar2 = (int *)FUN_004cda08(param_2);
      *piVar2 = iVar6;
    }
    else {
      piVar2 = (int *)FUN_004cda1c(iStack_8);
      piVar2 = (int *)FUN_004cd864(*piVar2);
      if (*piVar2 == iStack_8) {
        piVar2 = (int *)FUN_004cda1c(iStack_8);
        piVar2 = (int *)FUN_004cd864(*piVar2);
        *piVar2 = iVar6;
      }
      else {
        piVar2 = (int *)FUN_004cda1c(iStack_8);
        piVar2 = (int *)FUN_004cda90(*piVar2);
        *piVar2 = iVar6;
      }
    }
    puVar3 = (undefined4 *)FUN_004cda1c(iStack_8);
    uVar7 = *puVar3;
    puVar3 = (undefined4 *)FUN_004cda1c(iVar6);
    *puVar3 = uVar7;
    bVar1 = FUN_004cda78(&iStack_c);
    if (bVar1) {
      iStack_c = iVar6;
    }
    puVar3 = (undefined4 *)FUN_004ce568(iStack_8);
    puVar4 = (undefined4 *)FUN_004ce568(iVar6);
    FUN_004ce570(puVar4,puVar3);
    iVar6 = iStack_8;
  }
  else if (cStack_d == '\0') {
    puVar3 = (undefined4 *)FUN_004cda1c(iVar6);
    uVar7 = *puVar3;
    puVar3 = (undefined4 *)FUN_004cda1c(iStack_c);
    *puVar3 = uVar7;
    piVar2 = (int *)FUN_004cda08(param_2);
    if (*piVar2 == iStack_8) {
      piVar2 = (int *)FUN_004cda08(param_2);
      *piVar2 = iStack_c;
    }
    else {
      piVar2 = (int *)FUN_004cda1c(iStack_8);
      piVar2 = (int *)FUN_004cd864(*piVar2);
      if (*piVar2 == iStack_8) {
        piVar2 = (int *)FUN_004cda1c(iStack_8);
        piVar2 = (int *)FUN_004cd864(*piVar2);
        *piVar2 = iStack_c;
      }
      else {
        piVar2 = (int *)FUN_004cda1c(iStack_8);
        piVar2 = (int *)FUN_004cda90(*piVar2);
        *piVar2 = iStack_c;
      }
    }
    piVar2 = (int *)FUN_004cda9c(param_2);
    if (*piVar2 == iStack_8) {
      piVar2 = (int *)FUN_004cda90(iStack_8);
      bVar1 = FUN_004cda78(piVar2);
      if (bVar1) {
        puVar3 = (undefined4 *)FUN_004cda1c(iStack_8);
        uVar7 = *puVar3;
        puVar3 = (undefined4 *)FUN_004cda9c(param_2);
        *puVar3 = uVar7;
      }
      else {
        iVar5 = FUN_004ce588(iStack_c);
        piVar2 = (int *)FUN_004cda9c(param_2);
        *piVar2 = iVar5;
      }
    }
    piVar2 = (int *)FUN_004cdab4(param_2);
    if (*piVar2 == iStack_8) {
      piVar2 = (int *)FUN_004cd864(iStack_8);
      bVar1 = FUN_004cda78(piVar2);
      if (bVar1) {
        puVar3 = (undefined4 *)FUN_004cda1c(iStack_8);
        uVar7 = *puVar3;
        puVar3 = (undefined4 *)FUN_004cdab4(param_2);
        *puVar3 = uVar7;
      }
      else {
        iVar5 = FUN_004ce5b4(iStack_c);
        piVar2 = (int *)FUN_004cdab4(param_2);
        *piVar2 = iVar5;
      }
    }
  }
  if ((iStack_c != *(int *)(param_2 + 0x24)) && (piVar2 = (int *)FUN_004ce568(iVar6), *piVar2 != 0))
  {
LAB_004ce45f:
    while( true ) {
      piVar2 = (int *)FUN_004cda08(param_2);
      if ((*piVar2 == iStack_c) || (piVar2 = (int *)FUN_004ce568(iStack_c), *piVar2 != 1))
      goto LAB_004ce47e;
      piVar2 = (int *)FUN_004cda1c(iStack_c);
      piVar2 = (int *)FUN_004cd864(*piVar2);
      if (*piVar2 == iStack_c) break;
      piVar2 = (int *)FUN_004cda1c(iStack_c);
      piVar2 = (int *)FUN_004cd864(*piVar2);
      iStack_18 = *piVar2;
      bVar1 = FUN_004cda78(&iStack_18);
      if (bVar1) {
        puVar3 = (undefined4 *)FUN_004ce568(iStack_c);
        *puVar3 = 0;
        piVar2 = (int *)FUN_004cda1c(iStack_c);
        iStack_c = *piVar2;
      }
      else {
        piVar2 = (int *)FUN_004ce568(iStack_18);
        if (*piVar2 == 0) {
          puVar3 = (undefined4 *)FUN_004ce568(iStack_18);
          *puVar3 = 1;
          puVar3 = (undefined4 *)FUN_004cda1c(iStack_c);
          puVar3 = (undefined4 *)FUN_004ce568(*puVar3);
          *puVar3 = 0;
          piVar2 = (int *)FUN_004cda1c(iStack_c);
          FUN_004ce6a8(param_2,*piVar2);
          piVar2 = (int *)FUN_004cda1c(iStack_c);
          piVar2 = (int *)FUN_004cd864(*piVar2);
          iStack_18 = *piVar2;
        }
        bVar1 = FUN_004cda78(&iStack_18);
        if (bVar1) {
          puVar3 = (undefined4 *)FUN_004ce568(iStack_c);
          *puVar3 = 0;
          piVar2 = (int *)FUN_004cda1c(iStack_c);
          iStack_c = *piVar2;
        }
        else {
          piVar2 = (int *)FUN_004cda90(iStack_18);
          bVar1 = FUN_004cda78(piVar2);
          if (!bVar1) {
            puVar3 = (undefined4 *)FUN_004cda90(iStack_18);
            piVar2 = (int *)FUN_004ce568(*puVar3);
            if (*piVar2 == 1) goto LAB_004ce2f5;
LAB_004ce342:
            piVar2 = (int *)FUN_004cd864(iStack_18);
            bVar1 = FUN_004cda78(piVar2);
            if (bVar1) {
LAB_004ce36f:
              piVar2 = (int *)FUN_004cda90(iStack_18);
              bVar1 = FUN_004cda78(piVar2);
              if (!bVar1) {
                puVar3 = (undefined4 *)FUN_004cda90(iStack_18);
                puVar3 = (undefined4 *)FUN_004ce568(*puVar3);
                *puVar3 = 1;
              }
              puVar3 = (undefined4 *)FUN_004ce568(iStack_18);
              *puVar3 = 0;
              FUN_004ce5e0(param_2,iStack_18);
              piVar2 = (int *)FUN_004cda1c(iStack_c);
              piVar2 = (int *)FUN_004cd864(*piVar2);
              iStack_18 = *piVar2;
            }
            else {
              puVar3 = (undefined4 *)FUN_004cd864(iStack_18);
              piVar2 = (int *)FUN_004ce568(*puVar3);
              if (*piVar2 == 1) goto LAB_004ce36f;
            }
            bVar1 = FUN_004cda78(&iStack_18);
            if (!bVar1) {
              puVar3 = (undefined4 *)FUN_004cda1c(iStack_c);
              puVar3 = (undefined4 *)FUN_004ce568(*puVar3);
              uVar7 = *puVar3;
              puVar3 = (undefined4 *)FUN_004ce568(iStack_18);
              *puVar3 = uVar7;
              puVar3 = (undefined4 *)FUN_004cda1c(iStack_c);
              puVar3 = (undefined4 *)FUN_004ce568(*puVar3);
              *puVar3 = 1;
              piVar2 = (int *)FUN_004cd864(iStack_18);
              bVar1 = FUN_004cda78(piVar2);
              if (!bVar1) {
                puVar3 = (undefined4 *)FUN_004cd864(iStack_18);
                puVar3 = (undefined4 *)FUN_004ce568(*puVar3);
                *puVar3 = 1;
              }
              piVar2 = (int *)FUN_004cda1c(iStack_c);
              FUN_004ce6a8(param_2,*piVar2);
            }
            goto LAB_004ce47e;
          }
LAB_004ce2f5:
          piVar2 = (int *)FUN_004cd864(iStack_18);
          bVar1 = FUN_004cda78(piVar2);
          if (!bVar1) {
            puVar3 = (undefined4 *)FUN_004cd864(iStack_18);
            piVar2 = (int *)FUN_004ce568(*puVar3);
            if (*piVar2 != 1) goto LAB_004ce342;
          }
          puVar3 = (undefined4 *)FUN_004ce568(iStack_18);
          *puVar3 = 0;
          piVar2 = (int *)FUN_004cda1c(iStack_c);
          iStack_c = *piVar2;
        }
      }
    }
    piVar2 = (int *)FUN_004cda1c(iStack_c);
    piVar2 = (int *)FUN_004cda90(*piVar2);
    iStack_14 = *piVar2;
    bVar1 = FUN_004cda78(&iStack_14);
    if (bVar1) {
      puVar3 = (undefined4 *)FUN_004ce568(iStack_c);
      *puVar3 = 0;
      piVar2 = (int *)FUN_004cda1c(iStack_c);
      iStack_c = *piVar2;
      goto LAB_004ce45f;
    }
    piVar2 = (int *)FUN_004ce568(iStack_14);
    if (*piVar2 == 0) {
      puVar3 = (undefined4 *)FUN_004ce568(iStack_14);
      *puVar3 = 1;
      puVar3 = (undefined4 *)FUN_004cda1c(iStack_c);
      puVar3 = (undefined4 *)FUN_004ce568(*puVar3);
      *puVar3 = 0;
      piVar2 = (int *)FUN_004cda1c(iStack_c);
      FUN_004ce5e0(param_2,*piVar2);
      piVar2 = (int *)FUN_004cda1c(iStack_c);
      piVar2 = (int *)FUN_004cda90(*piVar2);
      iStack_14 = *piVar2;
    }
    bVar1 = FUN_004cda78(&iStack_14);
    if (bVar1) {
      puVar3 = (undefined4 *)FUN_004ce568(iStack_c);
      *puVar3 = 0;
      piVar2 = (int *)FUN_004cda1c(iStack_c);
      iStack_c = *piVar2;
      goto LAB_004ce45f;
    }
    piVar2 = (int *)FUN_004cd864(iStack_14);
    bVar1 = FUN_004cda78(piVar2);
    if (bVar1) {
LAB_004ce084:
      piVar2 = (int *)FUN_004cda90(iStack_14);
      bVar1 = FUN_004cda78(piVar2);
      if (!bVar1) {
        puVar3 = (undefined4 *)FUN_004cda90(iStack_14);
        piVar2 = (int *)FUN_004ce568(*puVar3);
        if (*piVar2 != 1) goto LAB_004ce0d1;
      }
      puVar3 = (undefined4 *)FUN_004ce568(iStack_14);
      *puVar3 = 0;
      piVar2 = (int *)FUN_004cda1c(iStack_c);
      iStack_c = *piVar2;
      goto LAB_004ce45f;
    }
    puVar3 = (undefined4 *)FUN_004cd864(iStack_14);
    piVar2 = (int *)FUN_004ce568(*puVar3);
    if (*piVar2 == 1) goto LAB_004ce084;
LAB_004ce0d1:
    piVar2 = (int *)FUN_004cda90(iStack_14);
    bVar1 = FUN_004cda78(piVar2);
    if (bVar1) {
LAB_004ce0fe:
      piVar2 = (int *)FUN_004cd864(iStack_14);
      bVar1 = FUN_004cda78(piVar2);
      if (!bVar1) {
        puVar3 = (undefined4 *)FUN_004cd864(iStack_14);
        puVar3 = (undefined4 *)FUN_004ce568(*puVar3);
        *puVar3 = 1;
      }
      puVar3 = (undefined4 *)FUN_004ce568(iStack_14);
      *puVar3 = 0;
      FUN_004ce6a8(param_2,iStack_14);
      piVar2 = (int *)FUN_004cda1c(iStack_c);
      piVar2 = (int *)FUN_004cda90(*piVar2);
      iStack_14 = *piVar2;
    }
    else {
      puVar3 = (undefined4 *)FUN_004cda90(iStack_14);
      piVar2 = (int *)FUN_004ce568(*puVar3);
      if (*piVar2 == 1) goto LAB_004ce0fe;
    }
    bVar1 = FUN_004cda78(&iStack_14);
    if (!bVar1) {
      puVar3 = (undefined4 *)FUN_004cda1c(iStack_c);
      puVar3 = (undefined4 *)FUN_004ce568(*puVar3);
      uVar7 = *puVar3;
      puVar3 = (undefined4 *)FUN_004ce568(iStack_14);
      *puVar3 = uVar7;
      puVar3 = (undefined4 *)FUN_004cda1c(iStack_c);
      puVar3 = (undefined4 *)FUN_004ce568(*puVar3);
      *puVar3 = 1;
      piVar2 = (int *)FUN_004cda90(iStack_14);
      bVar1 = FUN_004cda78(piVar2);
      if (!bVar1) {
        puVar3 = (undefined4 *)FUN_004cda90(iStack_14);
        puVar3 = (undefined4 *)FUN_004ce568(*puVar3);
        *puVar3 = 1;
      }
      piVar2 = (int *)FUN_004cda1c(iStack_c);
      FUN_004ce5e0(param_2,*piVar2);
    }
LAB_004ce47e:
    puVar3 = (undefined4 *)FUN_004ce568(iStack_c);
    *puVar3 = 1;
  }
  FUN_004ce770(param_2,iVar6,'\x01');
  *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + -1;
  *param_1 = uStack_28;
  param_1[1] = uStack_24;
  param_1[2] = uStack_20;
  return param_1;
}

