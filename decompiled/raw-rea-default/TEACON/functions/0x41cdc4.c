// rea decompile_all
// name: FUN_0041cdc4
// address: 0x41cdc4
// body: available
// range: 0x41cdc4-0x41cff9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl
FUN_0041cdc4(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0041f3fc(0x4311c8);
  *param_1 = &PTR_FUN_00430a68;
  param_1[1] = param_4;
  *param_1 = &PTR_LAB_00430a78;
  param_1[2] = 0;
  param_1[3] = 0x20;
  *param_1 = &PTR_FUN_00430ad0;
  *param_1 = &PTR_FUN_00431264;
  param_1[8] = param_2;
  *(undefined1 *)(param_1 + 9) = param_3;
  if (param_1[8] == 0) {
    param_1[8] = &DAT_00430db8;
    *(undefined1 *)(param_1 + 9) = 0;
  }
  uVar4 = 0;
  uVar5 = 0xff;
  do {
    if ((*(byte *)(param_1[8] + (uVar4 & 0xff) * 4) & 0x10) != 0) {
      if (uVar4 < 0xff) goto LAB_0041ce7c;
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xff);
  goto LAB_0041cea2;
  while (uVar5 = uVar5 - 1, uVar4 < uVar5) {
LAB_0041cf45:
    if ((*(byte *)(param_1[8] + (uVar5 & 0xff) * 4) & 8) != 0) break;
  }
  goto LAB_0041cf6b;
  while (uVar5 = uVar5 - 1, uVar4 < uVar5) {
LAB_0041ce7c:
    if ((*(byte *)(param_1[8] + (uVar5 & 0xff) * 4) & 0x10) != 0) break;
  }
LAB_0041cea2:
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  uVar1 = FUN_0041503c();
  param_1[0xe] = uVar1;
  puVar2 = (undefined1 *)param_1[0xe];
  for (; uVar4 <= uVar5; uVar4 = uVar4 + 1) {
    uVar3 = uVar4;
    if ((((0x60 < uVar4) && (uVar4 < 0x7b)) &&
        ((*(byte *)(param_1[8] + (uVar4 & 0xff) * 4) & 0x10) != 0)) &&
       ((*(byte *)(param_1[8] + (uVar4 - 0x20 & 0xff) * 4) & 8) != 0)) {
      uVar3 = uVar4 - 0x20;
    }
    *puVar2 = (char)uVar3;
    puVar2 = puVar2 + 1;
  }
  uVar4 = 0;
  uVar5 = 0xff;
  do {
    if ((*(byte *)(param_1[8] + (uVar4 & 0xff) * 4) & 8) != 0) {
      if (uVar4 < 0xff) goto LAB_0041cf45;
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xff);
LAB_0041cf6b:
  param_1[0xc] = uVar4;
  param_1[0xd] = uVar5;
  uVar1 = FUN_0041503c();
  param_1[0xf] = uVar1;
  puVar2 = (undefined1 *)param_1[0xf];
  for (; uVar4 <= uVar5; uVar4 = uVar4 + 1) {
    uVar3 = uVar4;
    if (((0x40 < uVar4) && (uVar4 < 0x5b)) &&
       (((*(byte *)(param_1[8] + (uVar4 & 0xff) * 4) & 8) != 0 &&
        ((*(byte *)(param_1[8] + (uVar4 + 0x20 & 0xff) * 4) & 0x10) != 0)))) {
      uVar3 = uVar4 + 0x20;
    }
    *puVar2 = (char)uVar3;
    puVar2 = puVar2 + 1;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

