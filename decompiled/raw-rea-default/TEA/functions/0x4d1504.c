// rea decompile_all
// name: FUN_004d1504
// address: 0x4d1504
// body: available
// range: 0x4d1504-0x4d1684 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl FUN_004d1504(undefined4 *param_1,int *param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  int local_8;
  
  FUN_004dce64(0x5145ec);
  local_1c = 8;
  *param_1 = param_2;
  bVar1 = FUN_004d16ec(*param_2);
  if (!bVar1) {
    FUN_004d1084(*param_2,4);
    *(undefined1 *)(param_1 + 1) = 0;
    goto LAB_004d1672;
  }
  iVar2 = FUN_004d1700(*param_2);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_004d1700(*param_2);
    FUN_004d170c(piVar3);
  }
  if (param_3 == '\0') {
    uVar4 = FUN_004d1688(*param_2);
    if ((uVar4 & 0x1000) != 0) {
      local_1c = 0x14;
      FUN_004cf0b8(&local_8,*param_2);
      local_10 = local_10 + 1;
      iVar2 = FUN_004cecf8(&local_8);
      local_1c = 8;
      do {
        piVar3 = (int *)FUN_004d1758(*param_2);
        local_30 = FUN_004d1764(piVar3);
        local_34 = FUN_004d0a2c();
        bVar1 = FUN_004d1694(&local_30,&local_34);
        if (bVar1) {
LAB_004d1601:
          bVar1 = false;
        }
        else {
          bVar1 = FUN_004d16ac(iVar2,1,(byte)local_30);
          if (!bVar1) goto LAB_004d1601;
          bVar1 = true;
        }
        if (!bVar1) goto code_r0x004d160e;
        piVar3 = (int *)FUN_004d1758(*param_2);
        FUN_004d17c0(piVar3);
      } while( true );
    }
  }
  goto LAB_004d1648;
code_r0x004d160e:
  local_38 = FUN_004d0a2c();
  bVar1 = FUN_004d1694(&local_30,&local_38);
  if (bVar1) {
    FUN_004d1084(*param_2,2);
  }
  local_10 = local_10 + -1;
  FUN_00437eb0(&local_8,2);
LAB_004d1648:
  bVar1 = FUN_004d16ec(*param_2);
  if (bVar1) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    FUN_004d1084(*param_2,4);
    *(undefined1 *)(param_1 + 1) = 0;
  }
LAB_004d1672:
  *in_FS_OFFSET = local_2c;
  return param_1;
}

