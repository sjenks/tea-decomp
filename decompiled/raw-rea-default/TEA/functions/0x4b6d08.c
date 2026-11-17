// rea decompile_all
// name: FUN_004b6d08
// address: 0x4b6d08
// body: available
// range: 0x4b6d08-0x4b6e4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl
FUN_004b6d08(int *param_1,int param_2,uint *param_3,char param_4,char param_5,char param_6)

{
  int iVar1;
  char *pcVar2;
  uint *puVar3;
  uint *puVar4;
  char *pcVar5;
  int local_c;
  int local_8;
  
  if ((param_3 == (uint *)0x0) || ((char)*param_3 == '\0')) {
    iVar1 = -1;
  }
  else {
    if ((param_2 == -1) && ((**(code **)(param_1[3] + 0x34))(), param_2 = local_c, param_6 != '\0'))
    {
      param_2 = local_8;
    }
    pcVar2 = FUN_004dc9f4(param_3);
    puVar3 = (uint *)FUN_004b6ba0(param_1,0);
    while( true ) {
      if (param_6 == '\0') {
        puVar4 = FUN_004b5e14((uint *)(param_2 + (int)puVar3),param_3,param_4);
      }
      else {
        puVar4 = (uint *)FUN_004b5ea2((char *)puVar3,param_2,param_3,param_4);
      }
      if (((param_5 == '\0') || (puVar4 == (uint *)0x0)) ||
         (((puVar4 <= puVar3 || (iVar1 = FUN_004e1310((int)*(char *)((int)puVar4 + -1)), iVar1 == 0)
           ) && ((pcVar5 = FUN_004dc9f4(puVar4), (int)pcVar5 <= (int)pcVar2 ||
                 (iVar1 = FUN_004e1310((int)*(char *)((int)puVar4 + (int)pcVar2)), iVar1 == 0))))))
      break;
      param_2 = (int)puVar4 + ((uint)(param_6 == '\0') - (int)puVar3);
    }
    if (puVar4 == (uint *)0x0) {
      FUN_004b6c5c(param_1,(LPCSTR)puVar3,'\0');
      iVar1 = -1;
    }
    else {
      iVar1 = (int)puVar4 - (int)puVar3;
      FUN_004b6c5c(param_1,(LPCSTR)puVar3,'\0');
      (**(code **)(param_1[3] + 0x3c))();
      FUN_004a76a8(*param_1,0x100,0x27,0);
      (**(code **)(param_1[3] + 0x3c))();
    }
  }
  return iVar1;
}

