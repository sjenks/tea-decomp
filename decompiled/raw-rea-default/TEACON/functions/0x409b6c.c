// rea decompile_all
// name: FUN_00409b6c
// address: 0x409b6c
// body: available
// range: 0x409b6c-0x409c76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __cdecl FUN_00409b6c(int param_1,int param_2)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 extraout_var_00;
  undefined4 uVar4;
  undefined2 extraout_var_01;
  uint uVar5;
  undefined3 extraout_var;
  undefined1 uVar6;
  
  *(int *)(param_1 + 0x47fc) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x4808) = 0;
  *(undefined4 *)(param_1 + 0x4804) = 0;
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x23fc) < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 2;
  }
  *(undefined1 *)(param_1 + 0x4800) = uVar6;
  if (*(HANDLE *)(param_1 + 0x14) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  iVar3 = FUN_004066fc(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc));
  if ((iVar3 != 0) && (0 < param_2)) {
    uVar2 = FUN_00406744(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc));
    if (param_2 < CONCAT22(extraout_var_00,uVar2)) {
      uVar4 = FUN_00406760(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),param_2);
      *(undefined4 *)(param_1 + 0x18) = uVar4;
      uVar2 = FUN_00406744(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc));
      if (param_2 != CONCAT22(extraout_var_01,uVar2) + -1) {
        uVar5 = FUN_00406760(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),param_2 + 1);
        if (uVar5 <= *(uint *)(param_1 + 0x18)) goto LAB_00409c4b;
      }
      bVar1 = FUN_0040a218(param_1);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        CloseHandle(*(HANDLE *)(param_1 + 0x14));
        *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
      }
    }
  }
LAB_00409c4b:
  FUN_0041ee4c((undefined4 *)(param_1 + 0x20),0,2000);
  *(undefined1 *)(param_1 + 0x20 + *(int *)(param_1 + 0x47fc)) = 0xff;
  return *(int *)(param_1 + 0x14) != -1;
}

