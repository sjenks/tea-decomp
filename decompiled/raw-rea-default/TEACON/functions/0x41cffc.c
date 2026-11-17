// rea decompile_all
// name: FUN_0041cffc
// address: 0x41cffc
// body: available
// range: 0x41cffc-0x41d1d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0041cffc(int param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *in_FS_OFFSET;
  int iVar5;
  undefined4 local_40;
  undefined1 local_1c [8];
  uint *local_14;
  int local_c [2];
  
  FUN_0041f3fc(0x431208);
  iVar5 = 2;
  FUN_0041e1dc((int)local_1c,param_2);
  FUN_0041db8c(local_c,local_14,iVar5);
  if (local_14 != (uint *)0x0) {
    if (local_14[-3] != 0xffffffff) {
      puVar2 = local_14 + -3;
      if (puVar2 == &DAT_0042fab4) {
        iVar5 = 1;
      }
      else if (puVar2 == &DAT_0042fab4) {
        iVar5 = 1;
      }
      else {
        *puVar2 = *puVar2 - 1;
        iVar5 = *puVar2 + 1;
      }
      if (iVar5 != 0) goto LAB_0041d0b4;
    }
    FUN_00414f78();
    local_14 = (uint *)0x0;
  }
LAB_0041d0b4:
  uVar3 = 0;
  uVar1 = 0xff;
  do {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar3 & 0xff) * 4) & 0x10) != 0) {
      if (uVar3 < 0xff) goto LAB_0041d0de;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
  goto LAB_0041d0ff;
  while (uVar1 = uVar1 - 1, uVar3 < uVar1) {
LAB_0041d129:
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 8) != 0) break;
  }
  goto LAB_0041d14a;
  while (uVar1 = uVar1 - 1, uVar3 < uVar1) {
LAB_0041d0de:
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 0x10) != 0) break;
  }
LAB_0041d0ff:
  *(uint *)(param_1 + 0x28) = uVar3;
  *(uint *)(param_1 + 0x2c) = uVar1;
  uVar3 = 0;
  uVar1 = 0xff;
  do {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar3 & 0xff) * 4) & 8) != 0) {
      if (uVar3 < 0xff) goto LAB_0041d129;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
LAB_0041d14a:
  *(uint *)(param_1 + 0x30) = uVar3;
  *(uint *)(param_1 + 0x34) = uVar1;
  puVar4 = *(undefined1 **)(param_1 + 0x38);
  for (uVar1 = *(uint *)(param_1 + 0x28); uVar1 <= *(uint *)(param_1 + 0x2c); uVar1 = uVar1 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 0x10) != 0) {
      uVar3 = FUN_0042428c(uVar1);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  puVar4 = *(undefined1 **)(param_1 + 0x3c);
  for (uVar1 = *(uint *)(param_1 + 0x30); uVar1 <= *(uint *)(param_1 + 0x34); uVar1 = uVar1 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 8) != 0) {
      uVar3 = FUN_00424238(uVar1);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  FUN_0041dd14(local_c,2);
  *in_FS_OFFSET = local_40;
  return;
}

