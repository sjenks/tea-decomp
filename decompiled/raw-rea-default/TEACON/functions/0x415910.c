// rea decompile_all
// name: FUN_00415910
// address: 0x415910
// body: available
// range: 0x415910-0x415bd1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_00415910(int param_1)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint local_c;
  uint *local_8;
  uint uVar4;
  
  uVar7 = param_1 + 0xfffU & 0xfffff000;
  if (DAT_0042eaa8 == 0) {
    DAT_0042eaa8 = FUN_00416038();
  }
  puVar1 = DAT_0042ea8c;
  if (DAT_0042ea94 == 0) {
    uVar7 = uVar7 + (DAT_0042ea80 * 2 + 0x109fU & 0xfffff000);
  }
  for (; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[0x23]) {
    if (uVar7 < puVar1[1] - *puVar1) {
      iVar3 = DAT_0042ea78;
      if ((uint)(DAT_0042eaac + DAT_0042ea74) < DAT_0042eaa8) {
        iVar3 = DAT_0042ea74;
      }
      iVar6 = DAT_0042ea78;
      if ((uint)(DAT_0042eaac + DAT_0042ea74) < DAT_0042eaa8) {
        iVar6 = DAT_0042ea74;
      }
      if (puVar1[1] < (iVar3 + -1 + uVar7 & ~(iVar6 - 1U)) + *puVar1) {
        uVar7 = puVar1[1];
      }
      else {
        iVar3 = DAT_0042ea78;
        if ((uint)(DAT_0042eaac + DAT_0042ea74) < DAT_0042eaa8) {
          iVar3 = DAT_0042ea74;
        }
        iVar6 = DAT_0042ea78;
        if ((uint)(DAT_0042eaac + DAT_0042ea74) < DAT_0042eaa8) {
          iVar6 = DAT_0042ea74;
        }
        uVar7 = (iVar3 + -1 + uVar7 & ~(iVar6 - 1U)) + *puVar1;
      }
      iVar3 = FUN_004154d0((LPVOID)(*puVar1 + (int)puVar1),uVar7 - *puVar1);
      if (iVar3 != 0) {
        DAT_0042eaac = DAT_0042eaac + (uVar7 - *puVar1);
        FUN_00415824(puVar1,uVar7);
        return 0;
      }
      iVar3 = FUN_004154d0((LPVOID)(*puVar1 + (int)puVar1),0x1000);
      if (iVar3 != 0) {
        DAT_0042eaac = DAT_0042eaac + 0x1000;
        FUN_00415824(puVar1,*puVar1 + 0x1000);
        return 0;
      }
      return 0xffffffff;
    }
  }
  uVar4 = DAT_0042ea70;
  if (DAT_0042ea70 <= uVar7 + 0x1000) {
    uVar4 = uVar7 + 0x1000;
  }
  bVar2 = FUN_0041543c(uVar4,&local_8,&local_c);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    iVar3 = DAT_0042ea78;
    if ((uint)(DAT_0042eaac + DAT_0042ea74) < DAT_0042eaa8) {
      iVar3 = DAT_0042ea74;
    }
    iVar6 = DAT_0042ea78;
    if ((uint)(DAT_0042eaac + DAT_0042ea74) < DAT_0042eaa8) {
      iVar6 = DAT_0042ea74;
    }
    uVar7 = uVar7 + iVar3 + 0xfff & ~(iVar6 - 1U);
    for (puVar1 = DAT_0042ea8c; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[0x23]) {
      if (((uint *)(puVar1[1] + (int)puVar1) == local_8) && ((int)puVar1[2] < 0x20)) {
        iVar3 = puVar1[1] - *puVar1;
        if (iVar3 != 0) {
          iVar6 = FUN_004154d0((LPVOID)(*puVar1 + (int)puVar1),iVar3);
          if (iVar6 == 0) {
            return 0xffffffff;
          }
          DAT_0042eaac = DAT_0042eaac + iVar3;
          FUN_00415824(puVar1,puVar1[1]);
        }
        iVar6 = FUN_004154d0(local_8,uVar7 - iVar3);
        if (iVar6 != 0) {
          DAT_0042eaac = DAT_0042eaac + (uVar7 - iVar3);
          uVar4 = puVar1[2];
          puVar1[2] = puVar1[2] + 1;
          puVar1[uVar4 + 3] = (uint)local_8;
          puVar1[1] = puVar1[1] + local_c;
          FUN_00415824(puVar1,(uVar7 + *puVar1) - iVar3);
          return 0;
        }
        return 0xffffffff;
      }
    }
    iVar3 = FUN_004154d0(local_8,uVar7);
    if (iVar3 == 0) {
      FUN_00415534(local_8);
      uVar5 = 0xffffffff;
    }
    else {
      DAT_0042eaac = DAT_0042eaac + uVar7;
      FUN_00415724(local_8,uVar7,local_c);
      uVar5 = 0;
    }
  }
  return uVar5;
}

