// rea decompile_all
// name: FUN_0046c574
// address: 0x46c574
// body: available
// range: 0x46c574-0x46c6b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_0046c574(int *param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  char cVar2;
  uint local_90;
  uint local_8c;
  undefined4 local_88;
  undefined2 local_78;
  int local_6c;
  undefined4 local_64;
  int local_60;
  uint local_34;
  int local_30;
  
  FUN_004dce64(0x4fdda8);
  if ((char)param_1[0x86] == '\0') {
    local_78 = 0x14;
    FUN_004cb6ec(&local_34,(int)param_1 + 0x166);
    local_6c = local_6c + 2;
    local_78 = 8;
    FUN_004a76a8(*(int *)((int)param_1 + 0x166),0x1105,0,0);
    local_78 = 0x20;
    FUN_004cb3b4(&local_64,(int)param_1 + 0x166,0xffff0000);
    local_6c = local_6c + 4;
    if (((local_60 == local_30) ||
        (uVar1 = FUN_004cb664(&local_34,&local_8c,'\x01'), (char)uVar1 == '\0')) ||
       (uVar1 = FUN_004cb6a8(&local_34,&local_90,'\x01'), (char)uVar1 == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    local_6c = local_6c + -2;
    FUN_004cc0cc();
    if (cVar2 != '\0') {
      param_1[0x2c] = local_8c;
      if (local_90 == 0) {
        FUN_0046caa4(param_1);
      }
      else {
        FUN_0046c7e4(param_1);
      }
    }
    local_6c = local_6c + -2;
    uVar1 = FUN_004cc0cc();
    *in_FS_OFFSET = local_88;
    return uVar1;
  }
  *in_FS_OFFSET = local_88;
  return local_88;
}

