// name: FUN_0045ef50
// address: 0x45ef50
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Unable to track spacebase fully for stack */

void __stdcall FUN_0045ef50(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined2 in_FS;
  undefined4 in_stack_00000000;
  
  piVar4 = (int *)FUN_00401140();
  if (*piVar4 == 0) {
    FUN_0045d2c4(s___CPPexceptionList_0047620e,s_xx_cpp_00476221,0x629);
  }
  piVar4 = (int *)FUN_00401140();
  puVar1 = (undefined4 *)*piVar4;
  puVar5 = (undefined4 *)FUN_00401140();
  *puVar5 = *puVar1;
  iVar2 = puVar1[10];
  piVar4 = (int *)segment(in_FS,0);
  iVar3 = *piVar4;
  if (iVar3 == 0) {
    FUN_0045d2c4(&DAT_00476228,s_xx_cpp_0047622b,0x637);
  }
  if (iVar3 != puVar1[10]) {
    FUN_0045d2c4(s_xdrPtr_>xdERRaddr____xl_00476232,s_xx_cpp_0047624a,0x638);
  }
  *(undefined2 *)(iVar2 + 0x10) =
       *(undefined2 *)(*(int *)(iVar2 + 8) + (uint)*(ushort *)(iVar2 + 0x10));
  FUN_0045eec8((int)puVar1);
  (*(code *)puVar1[7])();
  if (*DAT_00477e24 == 2) {
    FUN_0045e9b9(6,1);
  }
  *(undefined4 *)(*(int *)(iVar2 + 0xc) + -4) = in_stack_00000000;
  return;
}

