// rea decompile_all
// name: FUN_0046c6b4
// address: 0x46c6b4
// body: available
// range: 0x46c6b4-0x46c75d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0046c6b4(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  byte local_5c [4];
  undefined4 local_58;
  undefined4 uStack_4c;
  uint local_34 [12];
  
  bVar5 = 200;
  FUN_004dce64(0x4fde0c);
  iVar3 = 9;
  do {
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  FUN_004cb348(local_34,param_1 + 0x166,bVar5);
  uStack_4c = 0x46c70b;
  uVar2 = FUN_004cb50c(local_34,(uint *)local_5c,'\x01');
  if ((char)uVar2 != '\0') {
    uVar4 = (uint)((local_5c[0] & 0x20) != 0);
    uStack_4c = 0x46c728;
    bVar1 = FUN_004cb5ec(local_34,uVar4,'\x01');
    if (bVar1) {
      uStack_4c = 0x46c73b;
      FUN_004cb628(local_34,uVar4,'\x01');
    }
  }
  FUN_004cc0cc();
  *in_FS_OFFSET = local_58;
  return;
}

