// rea decompile_all
// name: FUN_0049c768
// address: 0x49c768
// body: available
// range: 0x49c768-0x49c8dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0049c768(int param_1,undefined4 *param_2,undefined4 param_3,RECT *param_4)

{
  int *piVar1;
  char cVar2;
  BOOL BVar3;
  int iVar4;
  tagRECT *ptVar5;
  LONG *pLVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  RECT *pRVar8;
  LONG local_8c [4];
  tagRECT local_7c;
  undefined4 local_6c;
  undefined2 local_5c;
  int local_50;
  HDC local_48 [17];
  
  bVar7 = 0;
  FUN_004dce64(0x508c40);
  local_5c = 8;
  local_7c.left = 0;
  local_7c.top = 0;
  local_7c.right = 0;
  local_7c.bottom = 0;
  pRVar8 = param_4;
  FUN_004a7a6c(param_1,&local_7c);
  ptVar5 = &local_7c;
  pLVar6 = local_8c;
  for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pLVar6 = ptVar5->left;
    ptVar5 = (tagRECT *)((int)ptVar5 + ((uint)bVar7 * -2 + 1) * 4);
    pLVar6 = pLVar6 + (uint)bVar7 * -2 + 1;
  }
  FUN_0049bd60(local_48,param_2,*(undefined4 *)(param_1 + 0x96),local_8c,pRVar8);
  local_50 = local_50 + 5;
  local_5c = 0x14;
  (**(code **)(**(int **)(param_1 + 0x92) + 4))();
  cVar2 = (**(code **)(**(int **)(param_1 + 0x92) + 0x14))();
  if (cVar2 == '\0') {
    PatBlt((HDC)*param_2,0,0,*(int *)(param_1 + 0x28),*(int *)(param_1 + 0x2c),0xff0062);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x92) + 0xc))();
    (**(code **)(**(int **)(param_1 + 0x92) + 0x10))();
    BVar3 = DPtoLP(local_48[0],(LPPOINT)param_4,2);
    piVar1 = *(int **)(param_1 + 0x92);
    (**(code **)(*piVar1 + 0x18))
              (BVar3 != 0,piVar1,*piVar1,piVar1,*(undefined4 *)(param_1 + 0x86),param_4,3);
    (**(code **)(**(int **)(param_1 + 0x92) + 0x1c))();
    (**(code **)(**(int **)(param_1 + 0x92) + 0x20))();
  }
  local_50 = local_50 + -5;
  FUN_0049bea0((int *)local_48,2);
  *in_FS_OFFSET = local_6c;
  return;
}

