// rea decompile_all
// name: FUN_0045e060
// address: 0x45e060
// body: available
// range: 0x45e060-0x45e258 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_0045e060(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined2 *param_5,
            int param_6)

{
  BOOL BVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  char *local_8c;
  undefined4 local_88;
  undefined2 local_78;
  int local_6c;
  undefined4 local_64 [12];
  undefined4 local_34 [12];
  
  FUN_004dce64(0x4f9e74);
  BVar1 = IsWindow(*(HWND *)(**(int **)(param_1 + 0x58) + 0xc));
  if (BVar1 != 0) {
    local_8c = FUN_004dc9f4((uint *)(param_1 + 0x888));
    uVar2 = FUN_004d40d0(param_2,0,*(uint *)(*(int *)(param_2 + 8) + -4),(byte *)(param_1 + 0x888),
                         (uint)local_8c);
    if (uVar2 != 0) {
      FUN_004dcc40((undefined4 *)(param_1 + 0x888),*(uint **)(param_2 + 8),(char *)0x3e7);
      *(undefined1 *)(param_1 + 0xc6f) = 0;
      iVar3 = FUN_004a76a8(**(int **)(param_1 + 0x58),0x40d,0,0);
      if (iVar3 != 0) {
        local_78 = 8;
        FUN_0049f374(local_34,'\0');
        local_6c = local_6c + 2;
        local_78 = 0x14;
        FUN_004a76a8(**(int **)(param_1 + 0x58),0x40e,0,(LPARAM)local_34);
        FUN_004a76a8(**(int **)(param_1 + 0x58),0x405,0,(LPARAM)local_34);
        local_6c = local_6c + -2;
        FUN_004cc0cc();
      }
      local_78 = 0x2c;
      puVar4 = FUN_0049f498(local_64,param_3,param_3,(uint *)(param_1 + 0x888));
      local_6c = local_6c + 2;
      FUN_004a76a8(**(int **)(param_1 + 0x58),0x404,0,(LPARAM)puVar4);
      local_6c = local_6c + -2;
      FUN_004cc0cc();
    }
    if (param_6 == 0) {
      local_a8 = param_3;
      local_a4 = 0x200;
      local_a0 = param_4;
      local_9c = CONCAT22(param_5[2],*param_5);
      FUN_004a76a8(**(int **)(param_1 + 0x58),0x407,0,(LPARAM)&local_a8);
    }
    else {
      FUN_004a76a8(**(int **)(param_1 + 0x58),0x407,0,param_6);
    }
  }
  *in_FS_OFFSET = local_88;
  return;
}

