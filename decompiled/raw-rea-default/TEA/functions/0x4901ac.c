// rea decompile_all
// name: FUN_004901ac
// address: 0x4901ac
// body: available
// range: 0x4901ac-0x490354 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004901ac(int param_1)

{
  int *piVar1;
  BOOL BVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *in_FS_OFFSET;
  byte bVar8;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  char local_8a;
  undefined1 local_89;
  undefined4 local_88;
  undefined2 local_78;
  int local_6c;
  undefined4 local_64 [12];
  undefined4 local_34 [4];
  int local_24 [8];
  
  bVar8 = 0;
  FUN_004dce64(0x5068c8);
  if ((*(int *)(param_1 + 6) != 0) && (*(int *)(**(int **)(param_1 + 6) + 0xc) != 0)) {
    piVar1 = (int *)(**(code **)(*(int *)(*(int *)(param_1 + 6) + 0x18) + 0xc))();
    if (piVar1 != (int *)0x0) {
      BVar2 = IsWindow(*(HWND *)(*piVar1 + 0xc));
      if (BVar2 != 0) {
        uVar3 = FUN_0048fba0(*(int *)(param_1 + 0x3a));
        if ((char)uVar3 == '\0') {
          local_78 = 8;
          FUN_0049f374(local_34,'\x01');
          local_6c = local_6c + 2;
          local_78 = 0x14;
          FUN_0049f504((int)local_34,*(undefined4 *)(**(int **)(param_1 + 6) + 0xc),
                       *(undefined4 *)(param_1 + 0x3a));
          iVar4 = FUN_004a76a8(*piVar1,0x408,0,(LPARAM)local_34);
          if (iVar4 != 0) {
            piVar6 = local_24;
            piVar7 = &local_9c;
            for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar7 = *piVar6;
              piVar6 = piVar6 + (uint)bVar8 * -2 + 1;
              piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
            }
            if ((((*(int *)(param_1 + 10) == local_9c) && (*(int *)(param_1 + 0xe) == local_98)) &&
                (*(int *)(param_1 + 0x12) == local_94)) && (*(int *)(param_1 + 0x16) == local_90)) {
              local_8a = '\x01';
            }
            else {
              local_8a = '\0';
            }
            local_89 = local_8a == '\0';
            if ((bool)local_89) {
              local_78 = 0x20;
              puVar5 = FUN_0049f414(local_64,*(undefined4 *)(**(int **)(param_1 + 6) + 0xc),
                                    (undefined4 *)(param_1 + 10),*(undefined4 *)(param_1 + 0x3a),
                                    (uint *)0xffffffff);
              local_6c = local_6c + 2;
              FUN_004a76a8(*piVar1,0x406,0,(LPARAM)puVar5);
              local_6c = local_6c + -2;
              FUN_004cc0cc();
              local_78 = 0x14;
            }
          }
          local_6c = local_6c + -2;
          FUN_004cc0cc();
        }
      }
    }
  }
  *in_FS_OFFSET = local_88;
  return;
}

