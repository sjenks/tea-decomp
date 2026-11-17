// rea decompile_all
// name: FUN_004ae9f8
// address: 0x4ae9f8
// body: available
// range: 0x4ae9f8-0x4aeb9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_004ae9f8(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  int *local_68 [2];
  int *local_5d;
  int *local_52;
  int *local_47;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined2 local_24;
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  FUN_004dce64(0x50cbc4);
  FUN_00495f90(local_68);
  FUN_00495098((int)(param_1 + 1),*(int *)(*param_1 + 0x15),local_68);
  if ((param_2 == (int *)0x0) &&
     (param_2 = (int *)FUN_004cc0f0(), local_8 = param_2, param_2 != (int *)0x0)) {
    local_24 = 0x14;
    FUN_004a4de0(param_2,0,param_1[1],(uint *)&DAT_0050ca80,0);
    local_24 = 8;
    param_2 = local_8;
  }
  (**(code **)(param_2[2] + 0x34))();
  FUN_00494fc8((int)(param_1 + 1),(int)param_2,local_68);
  piVar1 = (int *)(**(code **)(*(int *)(*param_1 + 0xc) + 0x18))();
  if (*(int *)(param_1[1] + 0x7a) == 0) {
    local_38 = 0;
  }
  else {
    local_38 = *(int *)(*(int *)(param_1[1] + 0x7a) + 0x7e);
  }
  iVar3 = local_38;
  if (local_38 != 0) {
    do {
      local_3c = iVar3;
      uVar2 = FUN_00495098((int)(param_1 + 1),local_3c,local_68);
      if ((char)uVar2 != '\0') {
        if (piVar1 == local_68[0]) {
          local_68[0] = param_2;
        }
        if (piVar1 == local_5d) {
          local_5d = param_2;
        }
        if (piVar1 == local_52) {
          local_52 = param_2;
        }
        if (piVar1 == local_47) {
          local_47 = param_2;
        }
        FUN_00494fc8((int)(param_1 + 1),local_3c,local_68);
      }
      local_3c = *(int *)(local_3c + 0x7e);
      iVar3 = local_3c;
    } while (local_3c != local_38);
  }
  *(undefined1 *)((int)param_1 + 0x3e) = 1;
  iVar3 = FUN_004be34c((int *)*param_1,param_2);
  *(undefined1 *)((int)param_1 + 0x3e) = 0;
  if (((short)((uint)*(undefined4 *)(iVar3 + 0x10) >> 0x10) != 0) &&
     (**(char **)(iVar3 + 0x10) == '\a')) {
    (**(code **)(*(int *)(iVar3 + 8) + 0x18))();
    local_10 = iVar3;
    if (iVar3 != 0) {
      local_c = *(undefined4 *)(iVar3 + 8);
      local_24 = 0x2c;
      (*(code *)**(undefined4 **)(iVar3 + 8))();
      local_24 = 0x20;
    }
    iVar3 = 0;
  }
  (**(code **)(param_1[4] + 4))();
  *in_FS_OFFSET = local_34;
  return iVar3;
}

