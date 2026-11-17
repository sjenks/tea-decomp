// rea decompile_all
// name: FUN_0049dc20
// address: 0x49dc20
// body: available
// range: 0x49dc20-0x49dd22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0049dc20(int *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_004dce64(0x5091e4);
  piVar2 = (int *)FUN_00490dd0((int)(param_1 + 1),0x7537);
  if (piVar2 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar2;
  }
  puVar3 = FUN_004dd744((int)piVar2,iVar5,(int *)&DAT_00427ee4,(int *)&DAT_00490c00,0);
  bVar1 = false;
  if (param_2 == 2) {
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)(param_1[6] + 0x1c))();
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)();
      }
      *(int *)((int)param_1 + 0x5e) = *(int *)((int)param_1 + 0x5e) + -1;
      (**(code **)(param_1[6] + 0x34))();
      bVar1 = true;
    }
  }
  else if (((param_2 == 0) && (puVar3 == (undefined4 *)0x0)) &&
          ((*(byte *)((int)param_1 + 0x62) & 0x40) != 0)) {
    piVar2 = param_1;
    uVar4 = FUN_0049d994(param_1);
    (**(code **)(param_1[6] + 0x34))(uVar4,param_1[6],piVar2,param_1);
    bVar1 = true;
  }
  if (bVar1) {
    iVar5 = *(int *)(*param_1 + 0x14);
    if (iVar5 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar5 + 8);
    }
    puVar3 = FUN_004dd744(iVar5,iVar6,(int *)&DAT_0040299c,(int *)&DAT_00428c70,0);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)(puVar3[3] + 4))();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

