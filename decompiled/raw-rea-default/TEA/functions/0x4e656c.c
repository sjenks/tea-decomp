// rea decompile_all
// name: FUN_004e656c
// address: 0x4e656c
// body: available
// range: 0x4e656c-0x4e66c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004e656c(undefined4 param_1,uint *param_2,undefined *param_3)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  undefined1 *local_c;
  uint *local_8;
  
  local_8 = param_2;
  (*(code *)param_3)();
  for (; ((char)*local_8 == ' ' || ((char)*local_8 == '\t')); local_8 = (uint *)((int)local_8 + 1))
  {
  }
  if ((char)*local_8 == '\"') {
    do {
      puVar3 = local_8;
      local_8 = (uint *)((int)puVar3 + 1);
      if (*(char *)local_8 == '\"') break;
    } while (*(char *)local_8 != '\0');
    if (*(char *)local_8 == '\"') {
      local_8 = (uint *)((int)puVar3 + 2);
    }
  }
  else {
    for (; ((cVar1 = (char)*local_8, cVar1 != ' ' && (cVar1 != '\t')) && (cVar1 != '\0'));
        local_8 = (uint *)((int)local_8 + 1)) {
    }
  }
  FUN_004dc9f4(local_8);
  DAT_0051c414 = (undefined1 *)FUN_004cc734();
  local_c = DAT_0051c414;
  if (DAT_0051c414 == (undefined1 *)0x0) {
    FUN_004e5f84((uint *)s_No_space_for_copy_of_command_lin_00518cc4);
  }
  while( true ) {
    if ((char)*local_8 == '\0') {
      return 1;
    }
    bVar2 = false;
    for (; ((char)*local_8 == ' ' || ((char)*local_8 == '\t')); local_8 = (uint *)((int)local_8 + 1)
        ) {
    }
    if ((char)*local_8 == '\0') break;
    while (((cVar1 = (char)*local_8, cVar1 != ' ' && (cVar1 != '\t')) && (cVar1 != '\0'))) {
      if (cVar1 == '\"') {
        local_8 = (uint *)((int)local_8 + 1);
        while (((char)*local_8 != '\"' && ((char)*local_8 != '\0'))) {
          FUN_004e66e0((int *)&local_c,(int *)&local_8);
        }
        if ((char)*local_8 == '\"') {
          local_8 = (uint *)((int)local_8 + 1);
        }
      }
      else {
        if (((char)*local_8 == '*') || ((char)*local_8 == '?')) {
          bVar2 = true;
        }
        FUN_004e66e0((int *)&local_c,(int *)&local_8);
      }
    }
    *local_c = 0;
    local_c = local_c + 1;
    if (bVar2) {
      (*(code *)PTR_FUN_00518d0c)();
    }
    else {
      (*(code *)param_3)();
    }
    if ((char)*local_8 == '\0') {
      return 1;
    }
    local_8 = (uint *)((int)local_8 + 1);
  }
  return 1;
}

