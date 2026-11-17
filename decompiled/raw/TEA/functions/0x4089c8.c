// name: FUN_004089c8
// address: 0x4089c8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __stdcall FUN_004089c8(void)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_40;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4eb81c);
  piVar4 = DAT_004eb4a4;
  do {
    piVar1 = DAT_004eb4a8;
    piVar5 = DAT_004eb4a4;
    if (DAT_004eb4a8 <= piVar4) {
      puVar3 = FUN_004089a4(DAT_004eb4a8,DAT_004eb4a8,DAT_004eb4a4);
      piVar4 = DAT_004eb4a8;
      iVar6 = (int)piVar1 - (int)piVar5;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 3;
      }
      DAT_004eb4a8 = DAT_004eb4a8 + -(iVar6 >> 2);
      FUN_0040771c(&DAT_004eb4a0,(int)puVar3,(int)piVar4);
      *in_FS_OFFSET = local_40;
      return;
    }
    piVar5 = (int *)*piVar4;
    puVar2 = (uint *)(**(code **)(*piVar5 + 0x10))();
    FUN_004cf628((int)local_14,puVar2);
    if (piVar5 != (int *)0x0) {
      (**(code **)*piVar5)();
    }
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar5 = (int *)(local_c + -0xc);
        if (piVar5 == &DAT_00513d58) {
          iVar6 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar6 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar6 = *piVar5 + 1;
        }
        if (iVar6 != 0) goto LAB_00408aa7;
      }
      FUN_004cc0bc();
      local_c = 0;
    }
LAB_00408aa7:
    piVar4 = piVar4 + 1;
  } while( true );
}

