// rea decompile_all
// name: FUN_004e404c
// address: 0x4e404c
// body: available
// range: 0x4e404c-0x4e4227 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004e410e) */

void __cdecl FUN_004e404c(double param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  char cVar2;
  ushort uVar3;
  byte bVar4;
  undefined4 *puVar5;
  int iVar6;
  short sVar7;
  longdouble lVar8;
  ushort uStack_10;
  undefined2 uStack_e;
  
  lVar8 = (longdouble)param_1;
  uVar1 = (ushort)((ulonglong)param_1 >> 0x30);
  uVar3 = (ushort)(param_3 >> 0x10);
  if (((ulonglong)param_1 & 0x7ff0000000000000) == 0) {
    if (0xffff < (int)param_3) {
      return;
    }
    iVar6 = 1;
    if (uVar3 == 0) {
      puVar5 = &DAT_00518aa0;
    }
    else {
      puVar5 = &DAT_005189b8;
    }
  }
  else {
    if ((uVar1 & 0x7ff0) == 0x7ff0) {
      if ((int)param_3 < 0) {
        iVar6 = 4;
        puVar5 = &DAT_00518a98;
        goto LAB_004e40d3;
      }
    }
    else {
      uVar3 = uVar3 & 0x7ff0;
      if ((param_3 & 0x7ff00000) == 0) {
        return;
      }
      if (uVar3 != 0x7ff0) {
        uVar3 = uVar3 >> 4;
        if ((ushort)(uVar3 - 0x3ff) < 0x3f) {
          if (((byte)(uVar3 - 0x3ff) < 0xc) &&
             (sVar7 = uVar1 * 2 + -0x7fe0, bVar4 = (char)uVar3 + 2, uVar3 = uVar3 - 0x3ff,
             (short)(sVar7 << (bVar4 & 0x1f)) >> (bVar4 & 0x1f) == sVar7)) {
            do {
              cVar2 = (char)uVar3;
              uVar3 = (ushort)(byte)(cVar2 - 1);
            } while ('\0' < cVar2);
            return;
          }
          if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
            lVar8 = -lVar8;
          }
        }
        if (lVar8 < (longdouble)0) {
          iVar6 = 1;
          puVar5 = &DAT_00518a90;
          goto LAB_004e40d3;
        }
        FUN_004e3bac();
        lVar8 = lVar8 * (longdouble)
                        (double)CONCAT17(param_3._3_1_,
                                         CONCAT16(param_3._2_1_,
                                                  CONCAT24((undefined2)param_3,param_2)));
        uStack_e = (ushort)((unkuint10)lVar8 >> 0x40);
        if ((uStack_e & 0x7fff) < 0x4008) {
LAB_004e417f:
          FUN_004e3ae1();
          return;
        }
        uStack_10 = 0xffff;
        if ((uStack_e & 0x7fff) < 0x4009) {
          uStack_10 = (ushort)((unkuint10)lVar8 >> 0x30);
        }
        uStack_e._1_1_ = (byte)((unkuint10)lVar8 >> 0x48);
        if ((uStack_e._1_1_ & 0x80) == 0) {
          if (uStack_10 < 0xb172) goto LAB_004e417f;
          iVar6 = 3;
          puVar5 = &DAT_005189b8;
        }
        else {
          if (uStack_10 < 0xb172) goto LAB_004e417f;
          iVar6 = 4;
          puVar5 = &DAT_00518a98;
        }
        goto LAB_004e40d3;
      }
    }
    iVar6 = 3;
    puVar5 = &DAT_005189b8;
  }
LAB_004e40d3:
  FUN_004e3798(iVar6,&DAT_00518aa8,&param_1,(undefined8 *)&param_2,*puVar5,puVar5[1]);
  return;
}

