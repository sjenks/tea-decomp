// rea decompile_all
// name: FUN_00452dc8
// address: 0x452dc8
// body: available
// range: 0x452dc8-0x452ef6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00452dc8(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  int local_38;
  uint local_34;
  int *local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int *local_8;
  
  FUN_004dce64(0x4f83ec);
  local_30 = (int *)0x0;
  uVar3 = 0;
  while( true ) {
    iVar1 = param_1[0x322] - param_1[0x321];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if ((uint)(iVar1 >> 2) <= uVar3) break;
    piVar2 = (int *)(param_1[0x321] + uVar3 * 4);
    if (*piVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*piVar2 + 8);
    }
    local_34 = uVar3;
    local_30 = FUN_004dd744(*piVar2,iVar1,(int *)&DAT_0040299c,(int *)&DAT_00406af0,0);
    if (local_30 != (int *)0x0) break;
    uVar3 = uVar3 + 1;
  }
  if (local_30 == (int *)0x0) {
    iVar1 = FUN_00466b28(param_1[0xe]);
    local_8 = (int *)FUN_004cc0f0();
    if (local_8 != (int *)0x0) {
      local_1c = 0x14;
      FUN_00404870(local_8,0,param_1,param_1[0xe],iVar1);
      local_1c = 8;
    }
    local_30 = local_8;
    (**(code **)(local_8[3] + 0xc))();
    if (local_30 == (int *)0x0) {
      local_38 = 0;
    }
    else {
      local_38 = *local_30;
    }
    piVar2 = (int *)param_1[0x322];
    if (piVar2 == (int *)param_1[0x326]) {
      FUN_00452ef8((int)(param_1 + 800),piVar2,&local_38);
    }
    else {
      *piVar2 = local_38;
      param_1[0x322] = param_1[0x322] + 4;
    }
  }
  (**(code **)(local_30[3] + 0x3c))();
  *in_FS_OFFSET = local_2c;
  return;
}

