// rea decompile_all
// name: FUN_004d26e0
// address: 0x4d26e0
// body: available
// range: 0x4d26e0-0x4d2a8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl
FUN_004d26e0(int param_1,int *param_2,undefined4 *param_3,int param_4,undefined4 *param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 local_c [8];
  
  puVar2 = FUN_004d2278(param_2,param_5);
  param_2[10] = param_2[10] + 1;
  if (param_4 != param_2[9]) {
    bVar1 = FUN_004cda78((int *)&param_3);
    if (bVar1) {
      piVar3 = (int *)FUN_004d2a94(param_4);
      piVar4 = (int *)FUN_004d2a8c(local_c,param_5);
      bVar1 = FUN_004d2ab8(param_2 + 0xc,piVar4,piVar3);
      if (!bVar1) {
        puVar5 = (undefined4 *)FUN_004cda90(param_4);
        *puVar5 = puVar2;
        piVar3 = (int *)FUN_004cdab4((int)param_2);
        if (*piVar3 == param_4) {
          puVar5 = (undefined4 *)FUN_004cdab4((int)param_2);
          *puVar5 = puVar2;
        }
        goto LAB_004d27a4;
      }
    }
  }
  puVar5 = (undefined4 *)FUN_004cd864(param_4);
  *puVar5 = puVar2;
  if (param_4 == param_2[9]) {
    puVar5 = (undefined4 *)FUN_004cda08((int)param_2);
    *puVar5 = puVar2;
    puVar5 = (undefined4 *)FUN_004cdab4((int)param_2);
    *puVar5 = puVar2;
  }
  else {
    piVar3 = (int *)FUN_004cda9c((int)param_2);
    if (*piVar3 == param_4) {
      puVar5 = (undefined4 *)FUN_004cda9c((int)param_2);
      *puVar5 = puVar2;
    }
  }
LAB_004d27a4:
  piVar3 = (int *)FUN_004cda1c((int)puVar2);
  *piVar3 = param_4;
  param_3 = puVar2;
LAB_004d2a36:
  do {
    piVar3 = (int *)FUN_004cda08((int)param_2);
    if ((undefined4 *)*piVar3 == param_3) {
LAB_004d2a5e:
      puVar5 = (undefined4 *)FUN_004cda08((int)param_2);
      puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
      *puVar5 = 1;
      FUN_004cd870(param_1,puVar2);
      return param_1;
    }
    puVar5 = (undefined4 *)FUN_004cda1c((int)param_3);
    piVar3 = (int *)FUN_004ce568(*puVar5);
    if (*piVar3 != 0) goto LAB_004d2a5e;
    piVar3 = (int *)FUN_004cda1c((int)param_3);
    iVar6 = *piVar3;
    piVar3 = (int *)FUN_004cda1c((int)param_3);
    piVar3 = (int *)FUN_004cda1c(*piVar3);
    piVar3 = (int *)FUN_004cd864(*piVar3);
    if (iVar6 == *piVar3) {
      piVar3 = (int *)FUN_004cda1c((int)param_3);
      piVar3 = (int *)FUN_004cda1c(*piVar3);
      piVar3 = (int *)FUN_004cda90(*piVar3);
      param_4 = *piVar3;
      bVar1 = FUN_004cda78(&param_4);
      if (!bVar1) {
        piVar3 = (int *)FUN_004ce568(param_4);
        if (*piVar3 == 0) {
          puVar5 = (undefined4 *)FUN_004cda1c((int)param_3);
          puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
          *puVar5 = 1;
          puVar5 = (undefined4 *)FUN_004ce568(param_4);
          *puVar5 = 1;
          piVar3 = (int *)FUN_004cda1c((int)param_3);
          puVar5 = (undefined4 *)FUN_004cda1c(*piVar3);
          puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
          *puVar5 = 0;
          piVar3 = (int *)FUN_004cda1c((int)param_3);
          puVar5 = (undefined4 *)FUN_004cda1c(*piVar3);
          param_3 = (undefined4 *)*puVar5;
          goto LAB_004d2a36;
        }
      }
      piVar3 = (int *)FUN_004cda1c((int)param_3);
      piVar3 = (int *)FUN_004cda90(*piVar3);
      if ((undefined4 *)*piVar3 == param_3) {
        piVar3 = (int *)FUN_004cda1c((int)param_3);
        param_3 = (undefined4 *)*piVar3;
        FUN_004ce5e0((int)param_2,(int)param_3);
      }
      puVar5 = (undefined4 *)FUN_004cda1c((int)param_3);
      puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
      *puVar5 = 1;
      piVar3 = (int *)FUN_004cda1c((int)param_3);
      puVar5 = (undefined4 *)FUN_004cda1c(*piVar3);
      puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
      *puVar5 = 0;
      piVar3 = (int *)FUN_004cda1c((int)param_3);
      piVar3 = (int *)FUN_004cda1c(*piVar3);
      FUN_004ce6a8((int)param_2,*piVar3);
      goto LAB_004d2a36;
    }
    piVar3 = (int *)FUN_004cda1c((int)param_3);
    piVar3 = (int *)FUN_004cda1c(*piVar3);
    piVar3 = (int *)FUN_004cd864(*piVar3);
    param_4 = *piVar3;
    bVar1 = FUN_004cda78(&param_4);
    if (!bVar1) {
      piVar3 = (int *)FUN_004ce568(param_4);
      if (*piVar3 == 0) {
        puVar5 = (undefined4 *)FUN_004cda1c((int)param_3);
        puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
        *puVar5 = 1;
        puVar5 = (undefined4 *)FUN_004ce568(param_4);
        *puVar5 = 1;
        piVar3 = (int *)FUN_004cda1c((int)param_3);
        puVar5 = (undefined4 *)FUN_004cda1c(*piVar3);
        puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
        *puVar5 = 0;
        piVar3 = (int *)FUN_004cda1c((int)param_3);
        puVar5 = (undefined4 *)FUN_004cda1c(*piVar3);
        param_3 = (undefined4 *)*puVar5;
        goto LAB_004d2a36;
      }
    }
    piVar3 = (int *)FUN_004cda1c((int)param_3);
    piVar3 = (int *)FUN_004cd864(*piVar3);
    if ((undefined4 *)*piVar3 == param_3) {
      piVar3 = (int *)FUN_004cda1c((int)param_3);
      param_3 = (undefined4 *)*piVar3;
      FUN_004ce6a8((int)param_2,(int)param_3);
    }
    puVar5 = (undefined4 *)FUN_004cda1c((int)param_3);
    puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
    *puVar5 = 1;
    piVar3 = (int *)FUN_004cda1c((int)param_3);
    puVar5 = (undefined4 *)FUN_004cda1c(*piVar3);
    puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
    *puVar5 = 0;
    piVar3 = (int *)FUN_004cda1c((int)param_3);
    piVar3 = (int *)FUN_004cda1c(*piVar3);
    FUN_004ce5e0((int)param_2,*piVar3);
  } while( true );
}

