// name: FUN_004760d8
// address: 0x4760d8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00476162) */
/* WARNING: Removing unreachable block (ram,0x0047621a) */
/* WARNING: Removing unreachable block (ram,0x004761de) */
/* WARNING: Removing unreachable block (ram,0x00476213) */
/* WARNING: Removing unreachable block (ram,0x00476293) */
/* WARNING: Removing unreachable block (ram,0x004762ac) */
/* WARNING: Removing unreachable block (ram,0x004762b7) */
/* WARNING: Removing unreachable block (ram,0x004762db) */
/* WARNING: Removing unreachable block (ram,0x004762c5) */
/* WARNING: Removing unreachable block (ram,0x004762d4) */
/* WARNING: Removing unreachable block (ram,0x004762cd) */
/* WARNING: Removing unreachable block (ram,0x004762e0) */
/* WARNING: Removing unreachable block (ram,0x004762e4) */
/* WARNING: Removing unreachable block (ram,0x00476332) */
/* WARNING: Removing unreachable block (ram,0x00476352) */

void __cdecl FUN_004760d8(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_60;
  undefined1 local_14 [8];
  char *local_c;
  
  FUN_004dce64(0x4ffff0);
  piVar1 = (int *)FUN_00422fc4(*(int *)(param_1 + 0x38));
  iVar2 = FUN_00423c2c(piVar1);
  (**(code **)(*(int *)(*(int *)(param_1 + 0x10e) + 8) + 0x60))();
  FUN_00464a94((int)local_14,*(int *)(param_1 + 0x38),
               (uint)(iVar2 < 1) + *(int *)(param_1 + 0x298) * 2 + 0x325a);
  pcVar3 = thunk_FUN_004dcd18(local_c,&DAT_004ffe56);
  iVar2 = DAT_005140ac;
  if (pcVar3 != (char *)0x0) {
    iVar2 = (int)pcVar3 - (int)local_c;
  }
  if (iVar2 != -1) {
    FUN_004d5a8c((int)local_14,iVar2 + 1,param_1 + 0x288);
  }
  SetWindowTextA(*(HWND *)(*(int *)(param_1 + 0x60) + 0xc),local_c);
  if (local_c != (LPCSTR)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar1 = (int *)(local_c + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_00476440;
    }
    FUN_004cc0bc();
  }
LAB_00476440:
  *in_FS_OFFSET = local_60;
  return;
}

