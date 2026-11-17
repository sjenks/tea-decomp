// rea decompile_all
// name: FUN_00405df0
// address: 0x405df0
// body: available
// range: 0x405df0-0x406090 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00405df0(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_8;
  
  if (param_3 == 0x12b6) {
    iVar1 = *(int *)(param_1 + 0x1f90);
    puVar3 = (undefined4 *)(iVar1 + 0x30);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_00419418((int *)(param_1 + 0xa40),(int *)(iVar1 + 0x30),(int *)(param_1 + 0x1f88),0,
                 0x3ff00000,0,0x3ff00000);
    FUN_0045d86c(*(int *)(param_1 + 0x1f8c));
  }
  else if (param_3 == 0x12ac) {
    FUN_004047bc(*(int *)(param_1 + 0x1f90) + 0xb0,*(int *)(param_1 + 0x1f90) + 0x70,(int)param_2);
    iVar1 = *(int *)(param_1 + 0x1f90);
    puVar3 = (undefined4 *)(iVar1 + 0x70);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_00419418((int *)(param_1 + 0xc10),(int *)(iVar1 + 0x70),(int *)(param_1 + 0x1f88),0,
                 0x3ff00000,0,0x3ff00000);
    FUN_00419418((int *)(param_1 + 0xde0),(int *)(*(int *)(param_1 + 0x1f90) + 0xb0),
                 (int *)(param_1 + 0x1f88),0,0x3ff00000,0,0x3ff00000);
    FUN_0045d938(*(int *)(param_1 + 0x1f8c));
  }
  else if (param_3 == 0x3232) {
    iVar1 = *(int *)(param_1 + 0x1f90);
    puVar3 = (undefined4 *)(iVar1 + 0xb0);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_00419418((int *)(param_1 + 0xde0),(int *)(iVar1 + 0xb0),(int *)(param_1 + 0x1f88),0,
                 0x3ff00000,0,0x3ff00000);
    FUN_0045d938(*(int *)(param_1 + 0x1f8c));
  }
  else if (param_3 == 0x1644) {
    iVar1 = *(int *)(param_1 + 0x1f90);
    puVar3 = (undefined4 *)(iVar1 + 0xf0);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    iVar6 = 0x3ff00000;
    iVar5 = 0;
    iVar4 = 0x3ff00000;
    iVar2 = 0;
    local_8 = FUN_0048c12c(&DAT_0051b198);
    FUN_00419418((int *)(param_1 + 0xfb0),(int *)(iVar1 + 0xf0),(int *)&local_8,iVar2,iVar4,iVar5,
                 iVar6);
  }
  else if (param_3 == 0x3124) {
    FUN_004047bc(*(int *)(param_1 + 0x1f90) + 0x170,*(int *)(param_1 + 0x1f90) + 0x130,(int)param_2)
    ;
    iVar1 = *(int *)(param_1 + 0x1f90);
    puVar3 = (undefined4 *)(iVar1 + 0x130);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_00419418((int *)(param_1 + 0x1180),(int *)(iVar1 + 0x130),(int *)(iVar1 + 0x2c),0,0x3ff00000
                 ,0,0x3ff00000);
    FUN_00419418((int *)(param_1 + 0x1350),(int *)(*(int *)(param_1 + 0x1f90) + 0x170),
                 (int *)(*(int *)(param_1 + 0x1f90) + 0x2c),0,0x3ff00000,0,0x3ff00000);
    FUN_0045d9e8(*(int *)(param_1 + 0x1f8c));
  }
  else if (param_3 == 0x3138) {
    iVar1 = *(int *)(param_1 + 0x1f90);
    puVar3 = (undefined4 *)(iVar1 + 0x170);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_00419418((int *)(param_1 + 0x1350),(int *)(iVar1 + 0x170),(int *)(iVar1 + 0x2c),0,0x3ff00000
                 ,0,0x3ff00000);
  }
  return;
}

