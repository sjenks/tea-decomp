// rea decompile_all
// name: FUN_00419a88
// address: 0x419a88
// body: available
// range: 0x419a88-0x419cd4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_00419a88(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  LONG LVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piStack_a4;
  int local_8c [3];
  int local_80 [3];
  int local_74 [3];
  int local_68 [3];
  int local_5c [3];
  int local_50 [3];
  int local_44 [3];
  int local_38 [3];
  int local_2c [3];
  int local_20 [3];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  uVar2 = FUN_0041897c((int)param_1);
  if ((uVar2 & 8) != 0) {
    if ((param_1[9] == 1) || (param_1[9] == 2)) {
      local_c = FUN_004181e8();
      piVar5 = &local_c;
      FUN_004181e8();
      local_8 = (**(code **)(*param_1 + 0x24))();
      bVar1 = FUN_00418bc0(&local_8,piVar5);
      if (bVar1) {
        return 0xffffffff;
      }
    }
    else {
      piStack_a4 = local_20;
      (**(code **)(*param_1 + 0xc))();
      piStack_a4 = (int *)0x419b0c;
      iVar3 = FUN_00418748(param_1,param_1[9],0,1);
      FUN_00419cd8(local_2c,iVar3);
      piStack_a4 = (int *)0x419b2a;
      iVar3 = FUN_00418748(param_1,param_1[9],0,2);
      FUN_00419cd8(local_38,iVar3);
      iVar3 = 0;
      LVar4 = FUN_00419d58(local_2c);
      piStack_a4 = (int *)0x419b51;
      FUN_00418748(param_1,param_1[9],LVar4,iVar3);
      bVar1 = FUN_00419d64(local_38,local_20);
      if (bVar1) {
        piVar5 = FUN_00419cd8(local_50,-1);
        FUN_00419d7c(&piStack_a4,local_20);
        (**(code **)(*param_1 + 0x10))();
        uVar6 = FUN_00419dcc(local_44,piVar5);
        if ((char)uVar6 != '\0') {
          return 0xffffffff;
        }
      }
      else if (*(char *)((int)param_1 + 0x29) != '\0') {
        local_14 = FUN_004181e8();
        piVar5 = &local_14;
        FUN_004181e8();
        local_10 = (**(code **)(*param_1 + 0x24))();
        bVar1 = FUN_00418bc0(&local_10,piVar5);
        if (bVar1) {
          return 0xffffffff;
        }
      }
    }
  }
  uVar2 = FUN_0041897c((int)param_1);
  if (((uVar2 & 4) != 0) && (param_1[9] != 0)) {
    piStack_a4 = local_5c;
    (**(code **)(*param_1 + 0xc))();
    piStack_a4 = (int *)0x419c28;
    iVar3 = FUN_00418748(param_1,param_1[9],0,1);
    FUN_00419cd8(local_68,iVar3);
    piStack_a4 = (int *)0x419c46;
    iVar3 = FUN_00418748(param_1,param_1[9],0,2);
    FUN_00419cd8(local_74,iVar3);
    iVar3 = 0;
    LVar4 = FUN_00419d58(local_68);
    piStack_a4 = (int *)0x419c6d;
    FUN_00418748(param_1,param_1[9],LVar4,iVar3);
    bVar1 = FUN_00419d64(local_74,local_5c);
    if (bVar1) {
      piVar5 = FUN_00419cd8(local_8c,-1);
      FUN_00419d7c(&piStack_a4,local_5c);
      (**(code **)(*param_1 + 0x10))();
      uVar6 = FUN_00419dcc(local_80,piVar5);
      if ((char)uVar6 != '\0') {
        return 0xffffffff;
      }
    }
  }
  return 0;
}

