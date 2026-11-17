// rea decompile_all
// name: FUN_00427134
// address: 0x427134
// body: available
// range: 0x427134-0x4274e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00427134(int param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  undefined4 local_50;
  
  FUN_004dce64(0x4f1d00);
  piVar1 = (int *)FUN_004cc0f0();
  if (piVar1 != (int *)0x0) {
    iVar4 = 0;
    puVar2 = (uint *)FUN_004cc0f0();
    if (puVar2 != (uint *)0x0) {
      FUN_00490fa8(puVar2,10,'\0',0);
    }
    FUN_0048ce64(piVar1,0,*(undefined4 *)(param_1 + 4),0,puVar2,iVar4);
  }
  *(int **)(param_1 + 100) = piVar1;
  *(undefined1 *)((int)piVar1 + 0x36) = 2;
  if (param_2 != (int *)0x0) {
    for (; param_2[1] != 0; param_2 = param_2 + 2) {
      for (iVar4 = 0; puVar2 = *(uint **)(param_2[1] + iVar4 * 4), puVar2 != (uint *)0x0;
          iVar4 = iVar4 + 1) {
        piVar1 = (int *)FUN_004cc0f0();
        if (piVar1 != (int *)0x0) {
          FUN_00488c78(piVar1,puVar2,puVar2,'\x01',1,puVar2 == (uint *)*param_2,'\0');
        }
        (**(code **)(*(int *)(*(int *)(param_1 + 100) + 0x18) + 0x14))();
      }
      piVar1 = (int *)FUN_004cc0f0();
      if (piVar1 != (int *)0x0) {
        FUN_00490848(piVar1,0x14,0,1);
      }
      (**(code **)(*(int *)(*(int *)(param_1 + 100) + 0x18) + 0x14))();
    }
  }
  puVar3 = (undefined4 *)FUN_004cc0f0();
  if (puVar3 != (undefined4 *)0x0) {
    FUN_0049eb84(puVar3,0x1680,3,0,8,(uint *)0x0,0);
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 100) + 0x18) + 0x14))();
  piVar1 = (int *)FUN_004cc0f0();
  if (piVar1 != (int *)0x0) {
    FUN_00490848(piVar1,6,0,1);
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 100) + 0x18) + 0x14))();
  piVar1 = (int *)FUN_004cc0f0();
  if (piVar1 != (int *)0x0) {
    FUN_00488c78(piVar1,(uint *)0x1658,0x1658,'\0',1,0,'\0');
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 100) + 0x18) + 0x14))();
  piVar1 = (int *)FUN_004cc0f0();
  if (piVar1 != (int *)0x0) {
    FUN_00488c78(piVar1,(uint *)0x1662,0x1662,'\0',1,0,'\0');
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 100) + 0x18) + 0x14))();
  piVar1 = (int *)FUN_004cc0f0();
  if (piVar1 != (int *)0x0) {
    FUN_00490848(piVar1,0x14,0,1);
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 100) + 0x18) + 0x14))();
  piVar1 = (int *)FUN_004cc0f0();
  if (piVar1 != (int *)0x0) {
    FUN_00488c78(piVar1,(uint *)0x163a,0x163a,'\0',1,0,'\0');
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 100) + 0x18) + 0x14))();
  (**(code **)(*(int *)(param_1 + 0x35) + 4))();
  *in_FS_OFFSET = local_50;
  return;
}

