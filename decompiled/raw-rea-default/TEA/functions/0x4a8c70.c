// rea decompile_all
// name: FUN_004a8c70
// address: 0x4a8c70
// body: available
// range: 0x4a8c70-0x4a8e7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl
FUN_004a8c70(int *param_1,int param_2,uint *param_3,undefined4 *param_4,undefined *param_5)

{
  uint uVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  char cVar4;
  undefined4 local_28;
  
  FUN_004dce64(0x50b61c);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x73;
    *(undefined4 *)((int)param_1 + 0x6f) = 0;
    *(undefined ***)((int)param_1 + 0x73) = &PTR_FUN_004ea94c;
  }
  cVar4 = '\x01';
  puVar2 = FUN_004a8c00();
  FUN_004c0a20(param_1 + 1,param_3,DAT_0051b78c,*(undefined4 *)(puVar2 + 8),cVar4);
  FUN_00498c80((undefined4 *)((int)param_1 + 0x11));
  *(undefined ***)((int)param_1 + 0x1b) = &PTR_FUN_0050b660;
  param_1[1] = (int)&PTR_LAB_0050b6b4;
  *(undefined ***)((int)param_1 + 0x11) = &PTR_LAB_0050b6c4;
  *(undefined ***)*param_1 = &PTR_LAB_0050b6e4;
  *(undefined4 *)((int)param_1 + 0x1f) = DAT_0051b790;
  *(undefined4 *)((int)param_1 + 0x23) = DAT_0051b794;
  *(undefined4 *)((int)param_1 + 0x27) = 0;
  *(undefined4 *)((int)param_1 + 0x2b) = 0;
  *(undefined2 *)((int)param_1 + 0x2f) = 0x400;
  *(undefined4 *)((int)param_1 + 0x31) = 0;
  puVar2 = FUN_004a8c00();
  *(undefined4 *)((int)param_1 + 0x3d) = 0;
  if (*(int *)(*(int *)(puVar2 + 8) + -0xc) == -1 || *(int *)(*(int *)(puVar2 + 8) + -0xc) + 1 < 0)
  {
    uVar1 = *(uint *)(*(int *)(puVar2 + 8) + -4);
    piVar3 = FUN_004cf7b0((int)param_1 + 0x35,uVar1,uVar1);
    *(int **)((int)param_1 + 0x3d) = piVar3 + 3;
    FUN_004dc7d4(*(undefined4 **)((int)param_1 + 0x3d),*(undefined4 **)(puVar2 + 8),uVar1);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x3d) = *(undefined4 *)(puVar2 + 8);
    piVar3 = (int *)(*(int *)((int)param_1 + 0x3d) + -0xc);
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x45) = 0;
  *(undefined4 *)((int)param_1 + 0x49) = 0;
  *(undefined1 *)((int)param_1 + 0x4d) = 0;
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  *(undefined1 *)((int)param_1 + 0x52) = 0;
  *(undefined4 *)((int)param_1 + 0x53) = 0;
  *(undefined4 *)((int)param_1 + 0x57) = 0;
  *(undefined4 *)((int)param_1 + 0x5b) = 0;
  *(undefined4 *)((int)param_1 + 0x5f) = 0;
  *(undefined4 *)((int)param_1 + 99) = 0;
  *(undefined4 *)((int)param_1 + 0x67) = 0;
  if (param_5 == (undefined *)0x0) {
    param_5 = FUN_00487bc0();
  }
  *(undefined **)((int)param_1 + 0x6b) = param_5;
  FUN_00487e38(*(undefined4 **)((int)param_1 + 0x6b),param_1,0);
  *param_4 = param_1 + 1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

