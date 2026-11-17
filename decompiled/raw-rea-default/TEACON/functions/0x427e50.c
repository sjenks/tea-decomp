// rea decompile_all
// name: FUN_00427e50
// address: 0x427e50
// body: available
// range: 0x427e50-0x42804b inclusive
// range: 0x42805c-0x42809f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_00427e50(uint *param_1,undefined4 *param_2,undefined4 param_3,undefined *param_4,uint param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined2 in_FS;
  ULONG_PTR local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  uint local_30;
  uint *local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_0041f3fc(0x4339f8);
  iVar4 = FUN_00401140();
  *(uint *)(iVar4 + 4) = *(uint *)(iVar4 + 4) | 2;
  iVar4 = FUN_00401140();
  if (param_1 == (uint *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (uint)*(ushort *)((int)param_1 + 6) + (int)param_1;
  }
  *(int *)(iVar4 + 0x10) = iVar6;
  iVar4 = FUN_00401140();
  *(undefined4 *)(iVar4 + 0xc) = param_7;
  iVar4 = FUN_00401140();
  *(undefined4 *)(iVar4 + 8) = param_8;
  local_2c = param_1;
  uVar2 = (ushort)param_1[1];
  uVar3 = *param_1;
  if ((uVar2 & 2) == 0) {
    local_30 = 0;
  }
  else {
    local_30 = param_1[3];
  }
  if ((uVar2 & 0x30) != 0) {
    local_2c = (uint *)param_1[2];
  }
  local_34 = (undefined4 *)FUN_00427a82(uVar3 + 0x52);
  *local_34 = 0;
  local_34[1] = param_1;
  local_34[3] = param_6;
  local_34[4] = uVar3;
  *(ushort *)(local_34 + 6) = uVar2;
  *(undefined2 *)((int)local_34 + 0x1a) = (undefined2)local_30;
  local_34[5] = local_2c;
  local_34[2] = param_3;
  local_34[10] = 0;
  local_34[0xb] = 0;
  local_34[7] = FUN_00427acc;
  local_34[0xd] = param_7;
  local_34[0xe] = param_8;
  local_34[8] = param_4;
  local_34[9] = param_5;
  *(undefined1 *)((int)local_34 + 0x45) = 0;
  *(undefined1 *)(local_34 + 0x11) = 1;
  FUN_0041eddc((undefined4 *)((int)local_34 + 0x52),param_2,uVar3);
  if ((*DAT_00435108 == 1) || (*DAT_00435108 == 2)) {
    pcVar5 = FUN_0041f920((int)param_1);
    FUN_00427ccd(pcVar5);
    FUN_00427ce5(1,0xb);
  }
  if ((local_30 & 1) != 0) {
    if (param_4 == (undefined *)0x0) {
      FUN_00426830(s_cctrAddr_00433ba3,s_xx_cpp_00433bac,0x445);
    }
    local_38 = DAT_00435104;
    local_18 = 8;
    FUN_00427bbf((int)local_34 + 0x52,param_2,param_4,param_5);
    local_18 = 0;
    DAT_00435104 = local_38;
  }
  iVar4 = FUN_00401140();
  local_44 = *(ULONG_PTR *)(iVar4 + 0x10);
  local_40 = param_9;
  local_3c = local_34;
  RaiseException(0xeefface,1,3,&local_44);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = local_28;
  return;
}

