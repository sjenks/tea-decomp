// rea decompile_all
// name: FUN_004e8444
// address: 0x4e8444
// body: available
// range: 0x4e8444-0x4e8535 inclusive
// range: 0x4e854e-0x4e87a0 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_004e8444(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined *UNRECOVERED_JUMPTABLE;
  undefined2 in_FS;
  
  puVar8 = &stack0xfffffffc;
  iVar9 = param_1[7];
  piVar6 = (int *)param_2[2];
  if (*param_1 == 0xeedfae6) {
    uVar1 = 0;
  }
  else {
    FUN_004e3bec();
    if ((*(byte *)(param_1 + 1) & 6) == 0) {
      uVar7 = (uint)*(ushort *)(param_2 + 4);
      while (uVar7 != 0) {
        *(uint *)(puVar8 + -8) = (uint)*(ushort *)((int)piVar6 + uVar7);
        *(uint *)(puVar8 + -0x14) = (uint)*(ushort *)((int)piVar6 + uVar7 + 2);
        iVar9 = uVar7 + 4;
        switch(*(undefined4 *)(puVar8 + -0x14)) {
        case 0:
        case 4:
        case 5:
          break;
        case 1:
          if (**(int **)(puVar8 + 8) != 0xeefface) {
            *(undefined4 *)(puVar8 + -0x28) = *(undefined4 *)(puVar8 + 8);
            *(undefined4 *)(puVar8 + -0x24) = *(undefined4 *)(puVar8 + 0x10);
            *(undefined4 *)(*(int *)(puVar8 + 0xc) + 0x14) = **(undefined4 **)(puVar8 + 8);
            *(undefined1 **)(*(int *)(puVar8 + 0xc) + 0x18) = puVar8 + -0x28;
            _DAT_0051c480 = *(undefined4 *)((int)piVar6 + iVar9);
            iVar2 = FUN_004ddd4b();
LAB_004e872f:
            if (iVar2 < 0) {
              if ((*(byte *)(*(int *)(puVar8 + 8) + 4) & 1) != 0) {
                *(undefined2 *)(*(int *)(puVar8 + 0xc) + 0x10) = *(undefined2 *)(puVar8 + -8);
              }
              return 0;
            }
            if (iVar2 != 0) {
              *(undefined4 *)(*(int *)(puVar8 + 0xc) + 0x18) = 0;
              *(undefined4 *)(puVar8 + -0x20) = *(undefined4 *)(puVar8 + -8);
              UNRECOVERED_JUMPTABLE = *(undefined **)((int)piVar6 + iVar9 + 4);
LAB_004e8602:
              FUN_004e7d64(*(PVOID *)(puVar8 + 0xc),*(PEXCEPTION_RECORD *)(puVar8 + 8));
              FUN_004e8265(*(int *)(puVar8 + 0xc));
              *(undefined2 *)(*(int *)(puVar8 + 0xc) + 0x10) = *(undefined2 *)(puVar8 + -0x20);
              if (*(int *)(puVar8 + -0x14) == 3) {
                FUN_004e7f91(*(int *)(puVar8 + -0x18),*(int *)(puVar8 + 0xc),*(int *)(puVar8 + -4),
                             *(int **)(puVar8 + -0x1c),*(int *)(puVar8 + -0xc));
              }
              iVar9 = FUN_00401140();
              *(uint *)(iVar9 + 4) = *(uint *)(iVar9 + 4) & 0xfffffffd;
              if ((*DAT_0051c478 == 2) && (*(int *)(puVar8 + -0x14) == 3)) {
                pcVar5 = FUN_004dd388(*(int *)(*(int *)(puVar8 + -4) + 4));
                FUN_004e78f1(pcVar5);
                FUN_004e7909(3,5);
              }
              FUN_004e769f(UNRECOVERED_JUMPTABLE);
            }
          }
          break;
        case 2:
          if (**(int **)(puVar8 + 8) != 0xeefface) {
            *(undefined4 *)(*(int *)(puVar8 + 0xc) + 0x14) = **(undefined4 **)(puVar8 + 8);
            iVar2 = *(int *)((int)piVar6 + iVar9);
            goto LAB_004e872f;
          }
          break;
        case 3:
          if (**(int **)(puVar8 + 8) == 0xeefface) {
            *(undefined4 *)(puVar8 + -0x1c) = *(undefined4 *)((int)piVar6 + iVar9);
            piVar3 = FUN_004e83ff(*(int *)(puVar8 + -0x1c),*(int *)(puVar8 + -4));
            *(int **)(puVar8 + -0x18) = piVar3;
            if (*(int *)(puVar8 + -0x18) != 0) {
              if (((*DAT_0051c478 == 1) || (*DAT_0051c478 == 2)) &&
                 ((**(uint **)(puVar8 + 8) < 0xeedface || (0xeefface < **(uint **)(puVar8 + 8))))) {
                FUN_004e7909(2,3);
              }
              puVar4 = (undefined4 *)FUN_00401140();
              **(undefined4 **)(puVar8 + -4) = *puVar4;
              puVar4 = (undefined4 *)FUN_00401140();
              *puVar4 = *(undefined4 *)(puVar8 + -4);
              *(undefined4 *)(*(int *)(puVar8 + -4) + 0x28) = *(undefined4 *)(puVar8 + 0xc);
              *(undefined4 *)(*(int *)(puVar8 + -4) + 0x2c) = *(undefined4 *)(puVar8 + -0x18);
              *(uint *)(*(int *)(puVar8 + -4) + 0x30) = uVar7 + 8;
              *(uint *)(puVar8 + -0x20) = uVar7 + 8;
              UNRECOVERED_JUMPTABLE = (undefined *)**(undefined4 **)(puVar8 + -0x18);
              goto LAB_004e8602;
            }
          }
          break;
        default:
          FUN_004e5ce8(s___bogus_context_in__ExceptionHan_005193c8,s_xx_cpp_005193f0,0xc00);
        }
        uVar7 = *(uint *)(puVar8 + -8);
      }
      uVar1 = 1;
    }
    else {
      FUN_004e8265((int)param_2);
      if ((*param_1 == 0xeefface) && (piVar6 = (int *)*piVar6, piVar6 != (int *)0x0)) {
        for (; *piVar6 != 0; piVar6 = piVar6 + 1) {
          iVar2 = FUN_004e771d(*(int **)(iVar9 + 4),*(undefined4 *)(iVar9 + 8),(int *)*piVar6,
                               (byte)*(undefined4 *)(iVar9 + 0xc));
          if (iVar2 != 0) goto LAB_004e84f4;
        }
        puVar4 = (undefined4 *)segment(in_FS,0);
        uVar1 = *puVar4;
        puVar4 = (undefined4 *)segment(in_FS,0);
        *puVar4 = *param_2;
        FUN_004ddab4();
        puVar4 = (undefined4 *)segment(in_FS,0);
        *puVar4 = uVar1;
      }
LAB_004e84f4:
      uVar1 = 1;
    }
  }
  return uVar1;
}

