// rea decompile_all
// name: FUN_00454524
// address: 0x454524
// body: available
// range: 0x454524-0x4547a5 inclusive
// range: 0x4547ab-0x4548cc inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __cdecl FUN_00454524(int param_1,int param_2)

{
  HWND pHVar1;
  BOOL BVar2;
  int iVar3;
  uint local_c;
  uint local_8;
  
  if (0x1db0 < param_2) {
    if (param_2 < 0x2e5f) {
      if (param_2 != 0x2e5e) {
        if (param_2 == 0x1dba) {
          pHVar1 = GetFocus();
          BVar2 = IsChild(*(HWND *)(*(int *)(param_1 + 0x158) + 0xc),pHVar1);
          return BVar2 != 0;
        }
        if (param_2 == 0x1dc4) {
LAB_00454750:
          pHVar1 = GetFocus();
          BVar2 = IsChild(*(HWND *)(*(int *)(param_1 + 0x158) + 0xc),pHVar1);
          if (BVar2 == 0) {
            return false;
          }
          iVar3 = FUN_004acea4((int *)(param_1 + 0x158),&local_8,&local_c);
          if (iVar3 == -1) {
            return false;
          }
          return (int)local_8 < (int)local_c;
        }
        if (param_2 == 0x1dce) {
          return false;
        }
        if (param_2 != 0x2e54) goto LAB_00454881;
      }
      if (*(int *)(param_1 + 100) != 2) {
        iVar3 = *(int *)(param_1 + 0x6b8) - *(int *)(param_1 + 0x6b4);
        if (iVar3 < 0) {
          iVar3 = iVar3 + 3;
        }
        if (1 < (uint)(iVar3 >> 2)) {
          return true;
        }
      }
      return false;
    }
    if (param_2 == 0x30b6) {
      return false;
    }
    if ((param_2 == 0x31d8) || (param_2 == 0x31e2)) {
      return *(int *)(param_1 + 100) != 2;
    }
    if (param_2 == 0x3a16) {
      return true;
    }
LAB_00454881:
    pHVar1 = GetFocus();
    BVar2 = IsChild(*(HWND *)(*(int *)(param_1 + 0x158) + 0xc),pHVar1);
    if (BVar2 == 0) {
      iVar3 = FUN_00452d1c(param_1);
      return iVar3 == 1;
    }
    return *(int *)(*(int *)(param_1 + 0x6a0) + -4) != 0;
  }
  if (param_2 == 0x1db0) {
    if (*(int *)(param_1 + 100) != 2) {
      iVar3 = *(int *)(param_1 + 0x6b8) - *(int *)(param_1 + 0x6b4);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 3;
      }
      if (*(int *)(param_1 + 0x6d0) < (iVar3 >> 2) + -1) {
        return true;
      }
    }
    return false;
  }
  if (param_2 < 0x1d75) {
    if (param_2 != 0x1d74) {
      if (param_2 < 0x1d57) {
        if (param_2 == 0x1d56) {
LAB_004547fb:
          iVar3 = FUN_00452d7c(param_1);
          if ((0 < iVar3) &&
             ((iVar3 = FUN_00464af0(*(int *)(param_1 + 0x38)), iVar3 != 0 || (param_2 == 0x1d56))))
          {
            return true;
          }
          return false;
        }
        if (param_2 == 0x1d38) {
          if ((*(int *)(param_1 + 100) != 2) && (iVar3 = FUN_00452d7c(param_1), 0 < iVar3)) {
            return true;
          }
          return false;
        }
        if (param_2 == 0x1d4c) {
          pHVar1 = GetFocus();
          BVar2 = IsChild(*(HWND *)(*(int *)(param_1 + 0x158) + 0xc),pHVar1);
          if (BVar2 == 0) {
            iVar3 = FUN_00452d1c(param_1);
            return 0 < iVar3;
          }
          goto LAB_00454750;
        }
      }
      else if ((param_2 == 0x1d60) || (param_2 == 0x1d6a)) goto LAB_004547fb;
      goto LAB_00454881;
    }
  }
  else {
    if (param_2 == 0x1d7e) {
      if (*(int *)(param_1 + 100) != 2) {
        iVar3 = *(int *)(param_1 + 0x6b8) - *(int *)(param_1 + 0x6b4);
        if (iVar3 < 0) {
          iVar3 = iVar3 + 3;
        }
        if ((uint)(iVar3 >> 2) < 10) {
          return true;
        }
      }
      return false;
    }
    if (param_2 == 0x1d88) {
      return *(int *)(param_1 + 100) != 2;
    }
    if (param_2 != 0x1d9c) {
      if (param_2 == 0x1da6) {
        if ((*(int *)(param_1 + 100) != 2) && (0 < *(int *)(param_1 + 0x6d0))) {
          return true;
        }
        return false;
      }
      goto LAB_00454881;
    }
  }
  if (*(int *)(param_1 + 100) != 2) {
    iVar3 = *(int *)(param_1 + 0x6b8) - *(int *)(param_1 + 0x6b4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if (iVar3 >> 2 != 0) {
      return true;
    }
  }
  return false;
}

