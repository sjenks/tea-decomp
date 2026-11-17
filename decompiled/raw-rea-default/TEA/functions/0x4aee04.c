// rea decompile_all
// name: FUN_004aee04
// address: 0x4aee04
// body: available
// range: 0x4aee04-0x4aeee8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004aee04(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  UINT UVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  FUN_004dce64(0x50cc0c);
  if (*(char *)(param_1 + 0x39) != '\0') {
    if ((param_3 == 0xffff) && (param_4 == 0)) {
      iVar1 = FUN_004a768c(*(int *)(param_1 + 4));
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar1 + 8);
      }
      puVar2 = FUN_004dd744(iVar1,iVar4,(int *)&DAT_0040299c,(int *)&DAT_00473d70,0);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)(puVar2[6] + 0x6c))();
      }
      *(undefined4 *)(param_1 + 0x3a) = 0;
    }
    else if ((param_3 & 0x10) == 0) {
      if ((param_3 & 0x860) == 0) {
        *(int *)(param_1 + 0x3a) = param_2;
      }
      else {
        *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
      }
    }
    else {
      puVar2 = FUN_00497aec(local_10,param_4,0);
      UVar3 = FUN_00497c2c((int)puVar2,param_2);
      *(UINT *)(param_1 + 0x3a) = UVar3;
      FUN_00497bf4(local_10,2);
    }
  }
  *in_FS_OFFSET = local_34;
  return;
}

