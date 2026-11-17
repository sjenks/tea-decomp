// rea decompile_all
// name: FUN_004cdbc1
// address: 0x4cdbc1
// body: available
// range: 0x4cdbc1-0x4ce1f0 inclusive
// range: 0x4ce1f6-0x4ce4bc inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __stdcall FUN_004cdbc1(void)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  int unaff_EBP;
  undefined4 uVar9;
  
  piVar1 = (int *)(unaff_EBP + -8);
  iVar2 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + 0x18);
  FUN_004cd89c(in_ECX,iVar2);
  bVar3 = FUN_004cdac8(unaff_EBP + -0x24,unaff_EBP + -0x34);
  if (bVar3) {
    FUN_004cdae4((undefined4 *)(unaff_EBP + -0x44),(undefined4 *)(unaff_EBP + -0x24));
  }
  FUN_004ce4c0((undefined4 *)(unaff_EBP + -4),*(undefined4 *)(unaff_EBP + 0x18));
  iVar8 = *(int *)(unaff_EBP + -4);
  *(undefined1 *)(unaff_EBP + -9) = 0;
  piVar4 = (int *)FUN_004cd864(iVar8);
  bVar3 = FUN_004cda78(piVar4);
  if (bVar3) {
    piVar4 = (int *)FUN_004cda90(iVar8);
    bVar3 = FUN_004cda78(piVar4);
    if (bVar3) {
      piVar4 = (int *)FUN_004cda1c(iVar8);
      *piVar1 = *piVar4;
      FUN_004ce4d0(iVar2,iVar8);
      *(undefined1 *)(unaff_EBP + -9) = 1;
    }
    else {
      piVar4 = (int *)FUN_004cda90(iVar8);
      *piVar1 = *piVar4;
    }
  }
  else {
    piVar4 = (int *)FUN_004cda90(iVar8);
    bVar3 = FUN_004cda78(piVar4);
    if (bVar3) {
      piVar4 = (int *)FUN_004cd864(iVar8);
      *piVar1 = *piVar4;
    }
    else {
      piVar4 = (int *)FUN_004cda90(iVar8);
      iVar8 = *piVar4;
      while( true ) {
        piVar4 = (int *)FUN_004cd864(iVar8);
        bVar3 = FUN_004cda78(piVar4);
        if (bVar3) break;
        piVar4 = (int *)FUN_004cd864(iVar8);
        iVar8 = *piVar4;
      }
      piVar4 = (int *)FUN_004cda90(iVar8);
      *piVar1 = *piVar4;
    }
  }
  if ((*(char *)(unaff_EBP + -9) == '\0') && (iVar8 != *(int *)(unaff_EBP + -4))) {
    piVar4 = (int *)FUN_004cd864(*(int *)(unaff_EBP + -4));
    piVar4 = (int *)FUN_004cda1c(*piVar4);
    *piVar4 = iVar8;
    puVar5 = (undefined4 *)FUN_004cd864(*(int *)(unaff_EBP + -4));
    uVar9 = *puVar5;
    puVar5 = (undefined4 *)FUN_004cd864(iVar8);
    *puVar5 = uVar9;
    piVar4 = (int *)FUN_004cda90(*(int *)(unaff_EBP + -4));
    if (iVar8 == *piVar4) {
      bVar3 = FUN_004cda78(piVar1);
      if (!bVar3) {
        piVar4 = (int *)FUN_004cda1c(*piVar1);
        *piVar4 = iVar8;
      }
    }
    else {
      bVar3 = FUN_004cda78(piVar1);
      if (!bVar3) {
        puVar5 = (undefined4 *)FUN_004cda1c(iVar8);
        uVar9 = *puVar5;
        puVar5 = (undefined4 *)FUN_004cda1c(*piVar1);
        *puVar5 = uVar9;
      }
      piVar4 = (int *)FUN_004cda1c(iVar8);
      piVar4 = (int *)FUN_004cd864(*piVar4);
      *piVar4 = *piVar1;
      puVar5 = (undefined4 *)FUN_004cda90(*(int *)(unaff_EBP + -4));
      uVar9 = *puVar5;
      puVar5 = (undefined4 *)FUN_004cda90(iVar8);
      *puVar5 = uVar9;
      piVar4 = (int *)FUN_004cda90(*(int *)(unaff_EBP + -4));
      piVar4 = (int *)FUN_004cda1c(*piVar4);
      *piVar4 = iVar8;
    }
    piVar4 = (int *)FUN_004cda08(iVar2);
    if (*piVar4 == *(int *)(unaff_EBP + -4)) {
      piVar4 = (int *)FUN_004cda08(iVar2);
      *piVar4 = iVar8;
    }
    else {
      piVar4 = (int *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
      piVar4 = (int *)FUN_004cd864(*piVar4);
      if (*piVar4 == *(int *)(unaff_EBP + -4)) {
        piVar4 = (int *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
        piVar4 = (int *)FUN_004cd864(*piVar4);
        *piVar4 = iVar8;
      }
      else {
        piVar4 = (int *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
        piVar4 = (int *)FUN_004cda90(*piVar4);
        *piVar4 = iVar8;
      }
    }
    puVar5 = (undefined4 *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
    uVar9 = *puVar5;
    puVar5 = (undefined4 *)FUN_004cda1c(iVar8);
    *puVar5 = uVar9;
    bVar3 = FUN_004cda78(piVar1);
    if (bVar3) {
      *piVar1 = iVar8;
    }
    puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -4));
    puVar6 = (undefined4 *)FUN_004ce568(iVar8);
    FUN_004ce570(puVar6,puVar5);
    iVar8 = *(int *)(unaff_EBP + -4);
  }
  else if (*(char *)(unaff_EBP + -9) == '\0') {
    puVar5 = (undefined4 *)FUN_004cda1c(iVar8);
    uVar9 = *puVar5;
    puVar5 = (undefined4 *)FUN_004cda1c(*piVar1);
    *puVar5 = uVar9;
    piVar4 = (int *)FUN_004cda08(iVar2);
    if (*piVar4 == *(int *)(unaff_EBP + -4)) {
      piVar4 = (int *)FUN_004cda08(iVar2);
      *piVar4 = *piVar1;
    }
    else {
      piVar4 = (int *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
      piVar4 = (int *)FUN_004cd864(*piVar4);
      if (*piVar4 == *(int *)(unaff_EBP + -4)) {
        piVar4 = (int *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
        piVar4 = (int *)FUN_004cd864(*piVar4);
        *piVar4 = *piVar1;
      }
      else {
        piVar4 = (int *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
        piVar4 = (int *)FUN_004cda90(*piVar4);
        *piVar4 = *piVar1;
      }
    }
    piVar4 = (int *)FUN_004cda9c(iVar2);
    if (*piVar4 == *(int *)(unaff_EBP + -4)) {
      piVar4 = (int *)FUN_004cda90(*(int *)(unaff_EBP + -4));
      bVar3 = FUN_004cda78(piVar4);
      if (bVar3) {
        puVar5 = (undefined4 *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
        uVar9 = *puVar5;
        puVar5 = (undefined4 *)FUN_004cda9c(iVar2);
        *puVar5 = uVar9;
      }
      else {
        iVar7 = FUN_004ce588(*piVar1);
        piVar4 = (int *)FUN_004cda9c(iVar2);
        *piVar4 = iVar7;
      }
    }
    piVar4 = (int *)FUN_004cdab4(iVar2);
    if (*piVar4 == *(int *)(unaff_EBP + -4)) {
      piVar4 = (int *)FUN_004cd864(*(int *)(unaff_EBP + -4));
      bVar3 = FUN_004cda78(piVar4);
      if (bVar3) {
        puVar5 = (undefined4 *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
        uVar9 = *puVar5;
        puVar5 = (undefined4 *)FUN_004cdab4(iVar2);
        *puVar5 = uVar9;
      }
      else {
        iVar7 = FUN_004ce5b4(*piVar1);
        piVar4 = (int *)FUN_004cdab4(iVar2);
        *piVar4 = iVar7;
      }
    }
  }
  if ((*piVar1 != *(int *)(iVar2 + 0x24)) && (piVar4 = (int *)FUN_004ce568(iVar8), *piVar4 != 0)) {
LAB_004ce45f:
    while( true ) {
      piVar4 = (int *)FUN_004cda08(iVar2);
      if ((*piVar4 == *piVar1) || (piVar4 = (int *)FUN_004ce568(*piVar1), *piVar4 != 1))
      goto LAB_004ce47e;
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      piVar4 = (int *)FUN_004cd864(*piVar4);
      if (*piVar4 == *piVar1) break;
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      puVar5 = (undefined4 *)FUN_004cd864(*piVar4);
      *(undefined4 *)(unaff_EBP + -0x14) = *puVar5;
      bVar3 = FUN_004cda78((int *)(unaff_EBP + -0x14));
      if (bVar3) {
        puVar5 = (undefined4 *)FUN_004ce568(*piVar1);
        *puVar5 = 0;
        piVar4 = (int *)FUN_004cda1c(*piVar1);
        *piVar1 = *piVar4;
      }
      else {
        piVar4 = (int *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x14));
        if (*piVar4 == 0) {
          puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x14));
          *puVar5 = 1;
          puVar5 = (undefined4 *)FUN_004cda1c(*piVar1);
          puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
          *puVar5 = 0;
          piVar4 = (int *)FUN_004cda1c(*piVar1);
          FUN_004ce6a8(iVar2,*piVar4);
          piVar4 = (int *)FUN_004cda1c(*piVar1);
          puVar5 = (undefined4 *)FUN_004cd864(*piVar4);
          *(undefined4 *)(unaff_EBP + -0x14) = *puVar5;
        }
        bVar3 = FUN_004cda78((int *)(unaff_EBP + -0x14));
        if (bVar3) {
          puVar5 = (undefined4 *)FUN_004ce568(*piVar1);
          *puVar5 = 0;
          piVar4 = (int *)FUN_004cda1c(*piVar1);
          *piVar1 = *piVar4;
        }
        else {
          piVar4 = (int *)FUN_004cda90(*(int *)(unaff_EBP + -0x14));
          bVar3 = FUN_004cda78(piVar4);
          if (!bVar3) {
            puVar5 = (undefined4 *)FUN_004cda90(*(int *)(unaff_EBP + -0x14));
            piVar4 = (int *)FUN_004ce568(*puVar5);
            if (*piVar4 == 1) goto LAB_004ce2f5;
LAB_004ce342:
            piVar4 = (int *)FUN_004cd864(*(int *)(unaff_EBP + -0x14));
            bVar3 = FUN_004cda78(piVar4);
            if (bVar3) {
LAB_004ce36f:
              piVar4 = (int *)FUN_004cda90(*(int *)(unaff_EBP + -0x14));
              bVar3 = FUN_004cda78(piVar4);
              if (!bVar3) {
                puVar5 = (undefined4 *)FUN_004cda90(*(int *)(unaff_EBP + -0x14));
                puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
                *puVar5 = 1;
              }
              puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x14));
              *puVar5 = 0;
              FUN_004ce5e0(iVar2,*(int *)(unaff_EBP + -0x14));
              piVar4 = (int *)FUN_004cda1c(*piVar1);
              puVar5 = (undefined4 *)FUN_004cd864(*piVar4);
              *(undefined4 *)(unaff_EBP + -0x14) = *puVar5;
            }
            else {
              puVar5 = (undefined4 *)FUN_004cd864(*(int *)(unaff_EBP + -0x14));
              piVar4 = (int *)FUN_004ce568(*puVar5);
              if (*piVar4 == 1) goto LAB_004ce36f;
            }
            bVar3 = FUN_004cda78((int *)(unaff_EBP + -0x14));
            if (!bVar3) {
              puVar5 = (undefined4 *)FUN_004cda1c(*piVar1);
              puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
              uVar9 = *puVar5;
              puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x14));
              *puVar5 = uVar9;
              puVar5 = (undefined4 *)FUN_004cda1c(*piVar1);
              puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
              *puVar5 = 1;
              piVar4 = (int *)FUN_004cd864(*(int *)(unaff_EBP + -0x14));
              bVar3 = FUN_004cda78(piVar4);
              if (!bVar3) {
                puVar5 = (undefined4 *)FUN_004cd864(*(int *)(unaff_EBP + -0x14));
                puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
                *puVar5 = 1;
              }
              piVar4 = (int *)FUN_004cda1c(*piVar1);
              FUN_004ce6a8(iVar2,*piVar4);
            }
            goto LAB_004ce47e;
          }
LAB_004ce2f5:
          piVar4 = (int *)FUN_004cd864(*(int *)(unaff_EBP + -0x14));
          bVar3 = FUN_004cda78(piVar4);
          if (!bVar3) {
            puVar5 = (undefined4 *)FUN_004cd864(*(int *)(unaff_EBP + -0x14));
            piVar4 = (int *)FUN_004ce568(*puVar5);
            if (*piVar4 != 1) goto LAB_004ce342;
          }
          puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x14));
          *puVar5 = 0;
          piVar4 = (int *)FUN_004cda1c(*piVar1);
          *piVar1 = *piVar4;
        }
      }
    }
    piVar4 = (int *)FUN_004cda1c(*piVar1);
    puVar5 = (undefined4 *)FUN_004cda90(*piVar4);
    *(undefined4 *)(unaff_EBP + -0x10) = *puVar5;
    bVar3 = FUN_004cda78((int *)(unaff_EBP + -0x10));
    if (bVar3) {
      puVar5 = (undefined4 *)FUN_004ce568(*piVar1);
      *puVar5 = 0;
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      *piVar1 = *piVar4;
      goto LAB_004ce45f;
    }
    piVar4 = (int *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x10));
    if (*piVar4 == 0) {
      puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x10));
      *puVar5 = 1;
      puVar5 = (undefined4 *)FUN_004cda1c(*piVar1);
      puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
      *puVar5 = 0;
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      FUN_004ce5e0(iVar2,*piVar4);
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      puVar5 = (undefined4 *)FUN_004cda90(*piVar4);
      *(undefined4 *)(unaff_EBP + -0x10) = *puVar5;
    }
    bVar3 = FUN_004cda78((int *)(unaff_EBP + -0x10));
    if (bVar3) {
      puVar5 = (undefined4 *)FUN_004ce568(*piVar1);
      *puVar5 = 0;
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      *piVar1 = *piVar4;
      goto LAB_004ce45f;
    }
    piVar4 = (int *)FUN_004cd864(*(int *)(unaff_EBP + -0x10));
    bVar3 = FUN_004cda78(piVar4);
    if (bVar3) {
LAB_004ce084:
      piVar4 = (int *)FUN_004cda90(*(int *)(unaff_EBP + -0x10));
      bVar3 = FUN_004cda78(piVar4);
      if (!bVar3) {
        puVar5 = (undefined4 *)FUN_004cda90(*(int *)(unaff_EBP + -0x10));
        piVar4 = (int *)FUN_004ce568(*puVar5);
        if (*piVar4 != 1) goto LAB_004ce0d1;
      }
      puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x10));
      *puVar5 = 0;
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      *piVar1 = *piVar4;
      goto LAB_004ce45f;
    }
    puVar5 = (undefined4 *)FUN_004cd864(*(int *)(unaff_EBP + -0x10));
    piVar4 = (int *)FUN_004ce568(*puVar5);
    if (*piVar4 == 1) goto LAB_004ce084;
LAB_004ce0d1:
    piVar4 = (int *)FUN_004cda90(*(int *)(unaff_EBP + -0x10));
    bVar3 = FUN_004cda78(piVar4);
    if (bVar3) {
LAB_004ce0fe:
      piVar4 = (int *)FUN_004cd864(*(int *)(unaff_EBP + -0x10));
      bVar3 = FUN_004cda78(piVar4);
      if (!bVar3) {
        puVar5 = (undefined4 *)FUN_004cd864(*(int *)(unaff_EBP + -0x10));
        puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
        *puVar5 = 1;
      }
      puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x10));
      *puVar5 = 0;
      FUN_004ce6a8(iVar2,*(int *)(unaff_EBP + -0x10));
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      puVar5 = (undefined4 *)FUN_004cda90(*piVar4);
      *(undefined4 *)(unaff_EBP + -0x10) = *puVar5;
    }
    else {
      puVar5 = (undefined4 *)FUN_004cda90(*(int *)(unaff_EBP + -0x10));
      piVar4 = (int *)FUN_004ce568(*puVar5);
      if (*piVar4 == 1) goto LAB_004ce0fe;
    }
    bVar3 = FUN_004cda78((int *)(unaff_EBP + -0x10));
    if (!bVar3) {
      puVar5 = (undefined4 *)FUN_004cda1c(*piVar1);
      puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
      uVar9 = *puVar5;
      puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x10));
      *puVar5 = uVar9;
      puVar5 = (undefined4 *)FUN_004cda1c(*piVar1);
      puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
      *puVar5 = 1;
      piVar4 = (int *)FUN_004cda90(*(int *)(unaff_EBP + -0x10));
      bVar3 = FUN_004cda78(piVar4);
      if (!bVar3) {
        puVar5 = (undefined4 *)FUN_004cda90(*(int *)(unaff_EBP + -0x10));
        puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
        *puVar5 = 1;
      }
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      FUN_004ce5e0(iVar2,*piVar4);
    }
LAB_004ce47e:
    puVar5 = (undefined4 *)FUN_004ce568(*piVar1);
    *puVar5 = 1;
  }
  FUN_004ce770(iVar2,iVar8,'\x01');
  *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + -1;
  puVar5 = *(undefined4 **)(unaff_EBP + 8);
  *puVar5 = *(undefined4 *)(unaff_EBP + -0x24);
  puVar5[1] = *(undefined4 *)(unaff_EBP + -0x20);
  *(undefined4 *)(*(int *)(unaff_EBP + 8) + 8) = *(undefined4 *)(unaff_EBP + -0x1c);
  return *(undefined4 *)(unaff_EBP + 8);
}

