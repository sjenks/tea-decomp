// rea decompile_all
// name: FUN_004cd8bc
// address: 0x4cd8bc
// body: available
// range: 0x4cd8bc-0x4cd9e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl FUN_004cd8bc(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 **ppuVar6;
  undefined4 *puVar7;
  undefined4 in_stack_ffffff90;
  undefined1 *puVar8;
  undefined4 *local_54 [4];
  undefined4 local_44 [4];
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  undefined4 local_14 [4];
  
  FUN_004cd89c((int)local_14,param_2);
  FUN_004cd82c((int)local_24,param_2);
  bVar1 = FUN_004cd9ec((int)&stack0x0000000c,(int)local_24);
  if (bVar1) {
    FUN_004cd89c((int)local_34,param_2);
    bVar1 = FUN_004cd9ec((int)&stack0x0000001c,(int)local_34);
    if ((bVar1) && (*(int *)(param_2 + 0x28) != 0)) {
      piVar2 = (int *)FUN_004cda08(param_2);
      FUN_004cda28(param_2,*piVar2);
      puVar3 = (undefined4 *)FUN_004cda9c(param_2);
      *puVar3 = *(undefined4 *)(param_2 + 0x24);
      puVar3 = (undefined4 *)FUN_004cda08(param_2);
      uVar4 = FUN_004cdab0();
      *puVar3 = uVar4;
      puVar3 = (undefined4 *)FUN_004cdab4(param_2);
      *puVar3 = *(undefined4 *)(param_2 + 0x24);
      *(undefined4 *)(param_2 + 0x28) = 0;
      FUN_004cd89c((int)local_44,param_2);
      puVar3 = local_44;
      puVar7 = local_14;
      for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar7 = puVar7 + 1;
      }
      goto LAB_004cd9d0;
    }
  }
  while( true ) {
    puVar8 = &stack0x0000000c;
    uVar4 = 0x4cd9c9;
    bVar1 = FUN_004cdac8((int)puVar8,(int)&stack0x0000001c);
    if (!bVar1) break;
    FUN_004cdae4((undefined4 *)&stack0xffffff90,(undefined4 *)&stack0x0000000c);
    FUN_004cdbb8(local_54,param_2,in_stack_ffffff90,uVar4,puVar8);
    local_54[1] = param_1;
    ppuVar6 = local_54;
    puVar3 = local_14;
    for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar3 = *ppuVar6;
      ppuVar6 = ppuVar6 + 1;
      puVar3 = puVar3 + 1;
    }
  }
LAB_004cd9d0:
  *param_1 = local_14[0];
  param_1[1] = local_14[1];
  param_1[2] = local_14[2];
  return param_1;
}

