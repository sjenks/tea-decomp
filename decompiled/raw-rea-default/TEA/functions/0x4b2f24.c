// rea decompile_all
// name: FUN_004b2f24
// address: 0x4b2f24
// body: available
// range: 0x4b2f24-0x4b3019 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_004b2f24(int param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  undefined4 local_2c;
  
  FUN_004dce64(0x50d5dc);
  iVar4 = *(int *)(param_1 + 0x1c);
  do {
    if (iVar4 == 0) {
      *in_FS_OFFSET = local_2c;
      return 0;
    }
    puVar1 = (uint *)FUN_004b5254(iVar4);
    if ((puVar1 != (uint *)0x0) && ((*(byte *)(iVar4 + 0x17) & 2) == 0)) {
      puVar1 = (uint *)FUN_00496d48(puVar1);
      while (puVar1 != (uint *)0x0) {
        puVar2 = (uint *)thunk_FUN_004dc924((char *)puVar1,';');
        if (puVar2 != (uint *)0x0) {
          *(undefined1 *)puVar2 = 0;
          puVar2 = (uint *)((int)puVar2 + 1);
        }
        uVar3 = FUN_004b301c(param_2,puVar1);
        if ((char)uVar3 != '\0') {
          FUN_004cc0cc();
          *in_FS_OFFSET = local_2c;
          return iVar4;
        }
        if ((puVar2 == (uint *)0x0) || (puVar1 = puVar2, (char)*puVar2 == '\0')) {
          puVar1 = (uint *)0x0;
        }
      }
      FUN_004cc0cc();
    }
    iVar4 = *(int *)(iVar4 + 4);
  } while( true );
}

