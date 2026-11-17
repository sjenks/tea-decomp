// rea decompile_all
// name: FUN_004548d0
// address: 0x4548d0
// body: available
// range: 0x4548d0-0x454b1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004548d0(int *param_1,int param_2)

{
  bool bVar1;
  HWND pHVar2;
  BOOL BVar3;
  
  bVar1 = FUN_00454524((int)param_1,param_2);
  if (!bVar1) {
    return;
  }
  if (param_2 < 0x1dbb) {
    if (param_2 == 0x1dba) {
      FUN_004a76a8(param_1[0x56],0x302,0,0);
      return;
    }
    if (param_2 < 0x1d61) {
      if (param_2 == 0x1d60) {
        FUN_004534b8((int)param_1);
        return;
      }
      if (param_2 == 0x1d38) {
        FUN_00453724(param_1);
        return;
      }
      if (param_2 == 0x1d4c) {
        pHVar2 = GetFocus();
        BVar3 = IsChild(*(HWND *)(param_1[0x56] + 0xc),pHVar2);
        if (BVar3 == 0) {
          FUN_0045424c(param_1);
          return;
        }
        FUN_004a76a8(param_1[0x56],0x301,0,0);
        return;
      }
      if (param_2 == 0x1d56) {
        pHVar2 = GetFocus();
        BVar3 = IsChild(*(HWND *)(param_1[0x56] + 0xc),pHVar2);
        if (BVar3 == 0) {
          FUN_00454434((int)param_1);
          return;
        }
        FUN_004a76a8(param_1[0x56],0x142,0,-0x10000);
        return;
      }
    }
    else {
      if (param_2 == 0x1d6a) {
        FUN_0045318c(param_1);
        return;
      }
      if (param_2 == 0x1d74) {
        FUN_004525f4((int)param_1);
        return;
      }
      if (param_2 == 0x1d7e) {
        FUN_004526b4(param_1);
        return;
      }
    }
  }
  else if (param_2 < 0x2e5f) {
    if (param_2 == 0x2e5e) {
      param_1[0x29] = 1;
      FUN_00451784(param_1,5);
      return;
    }
    if (param_2 == 0x1dc4) {
      FUN_004a76a8(param_1[0x56],0x300,0,0);
      return;
    }
    if (param_2 == 0x1dce) {
LAB_00454a3d:
      FUN_0045734c();
      return;
    }
    if (param_2 == 0x2e54) {
      param_1[0x29] = 0;
      FUN_00451784(param_1,5);
      return;
    }
  }
  else {
    if (param_2 == 0x30b6) goto LAB_00454a3d;
    if ((param_2 == 0x31d8) || (param_2 == 0x31e2)) {
      param_1[0x1a4] = (uint)(param_2 == 0x31e2);
      FUN_0045269c(param_1);
      return;
    }
  }
  FUN_00457354(param_1,*param_1,0,param_2);
  return;
}

