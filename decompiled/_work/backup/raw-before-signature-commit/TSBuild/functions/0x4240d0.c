// name: FUN_004240d0
// address: 0x4240d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __stdcall FUN_004240d0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  undefined4 in_stack_0000000c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined2 uStack_18;
  
  bVar4 = 0;
  FUN_00467ba8(0x47ac44);
  uStack_18 = 8;
  *param_1 = &PTR_FUN_0047ae34;
  *(undefined4 *)((int)param_1 + 10) = 0;
  *(undefined4 *)((int)param_1 + 0xe) = 0;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = 0;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = 1;
  *(undefined1 *)((int)param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0x33) = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)((int)param_1 + 0x32) = *(undefined1 *)((int)param_1 + 0x33);
  *(undefined4 *)((int)param_1 + 6) = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  puVar2 = &uStack_38;
  puVar3 = (undefined4 *)((int)param_1 + 10);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  *(undefined2 *)((int)param_1 + 0x42) = 3;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x37) = 1;
  *(undefined1 *)((int)param_1 + 0x36) = 1;
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  *(undefined4 *)((int)param_1 + 0x3a) = param_2;
  FUN_00424340((int)param_1,in_stack_0000000c);
  *in_FS_OFFSET = uStack_28;
  return param_1;
}

