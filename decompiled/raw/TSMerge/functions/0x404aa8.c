// name: FUN_00404aa8
// address: 0x404aa8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00404aa8(int *param_1,byte param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x462238);
  if (param_1 != (int *)0x0) {
    FUN_0040bf28((int)(param_1 + 0x37c),2);
    FUN_00431810((int *)((int)param_1 + 0xd2a),2);
    FUN_00431810((int *)((int)param_1 + 0xc7e),2);
    FUN_00431810((int *)((int)param_1 + 0xbd2),2);
    FUN_00431810((int *)((int)param_1 + 0xb26),2);
    FUN_00431810((int *)((int)param_1 + 0xa7a),2);
    piVar1 = param_1 + 0x273;
    *(int *)(param_1[0x274] + -4) = *(int *)(param_1[0x274] + -4) + -4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + -4;
    FUN_00432570(piVar1,0);
    *(int *)(param_1[0x274] + -4) = *(int *)(param_1[0x274] + -4) + 4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + 4;
    *(int *)(param_1[0x274] + -4) = *(int *)(param_1[0x274] + -4) + 0x96;
    FUN_0042ade0(param_1 + 0x27d,0);
    *(int *)(param_1[0x274] + -4) = *(int *)(param_1[0x274] + -4) + -0x96;
    FUN_00413978(param_1 + 0x27b,0);
    FUN_00401394(param_1 + 0x246,2);
    FUN_0043a624(param_1 + 0x219,2);
    FUN_0043a624((int *)((int)param_1 + 0x7b2),2);
    FUN_0043a624(param_1 + 0x1c0,2);
    FUN_00432064(param_1 + 0x194,0);
    *(int *)(param_1[0x195] + -4) = *(int *)(param_1[0x195] + -4) + 0x96;
    FUN_0042ade0((undefined4 *)((int)param_1 + 0x67a),0);
    *(int *)(param_1[0x195] + -4) = *(int *)(param_1[0x195] + -4) + -0x96;
    FUN_00413978((undefined4 *)((int)param_1 + 0x672),0);
    FUN_00432064(param_1 + 0x168,0);
    *(int *)(param_1[0x169] + -4) = *(int *)(param_1[0x169] + -4) + 0x96;
    FUN_0042ade0((undefined4 *)((int)param_1 + 0x5ca),0);
    *(int *)(param_1[0x169] + -4) = *(int *)(param_1[0x169] + -4) + -0x96;
    FUN_00413978((undefined4 *)((int)param_1 + 0x5c2),0);
    FUN_00432064(param_1 + 0x13c,0);
    *(int *)(param_1[0x13d] + -4) = *(int *)(param_1[0x13d] + -4) + 0x96;
    FUN_0042ade0((undefined4 *)((int)param_1 + 0x51a),0);
    *(int *)(param_1[0x13d] + -4) = *(int *)(param_1[0x13d] + -4) + -0x96;
    FUN_00413978((undefined4 *)((int)param_1 + 0x512),0);
    FUN_00432064(param_1 + 0x110,0);
    *(int *)(param_1[0x111] + -4) = *(int *)(param_1[0x111] + -4) + 0x96;
    FUN_0042ade0((undefined4 *)((int)param_1 + 0x46a),0);
    *(int *)(param_1[0x111] + -4) = *(int *)(param_1[0x111] + -4) + -0x96;
    FUN_00413978((undefined4 *)((int)param_1 + 0x462),0);
    FUN_00432064(param_1 + 0xe4,0);
    *(int *)(param_1[0xe5] + -4) = *(int *)(param_1[0xe5] + -4) + 0x96;
    FUN_0042ade0((undefined4 *)((int)param_1 + 0x3ba),0);
    *(int *)(param_1[0xe5] + -4) = *(int *)(param_1[0xe5] + -4) + -0x96;
    FUN_00413978((undefined4 *)((int)param_1 + 0x3b2),0);
    FUN_00432064(param_1 + 0xb8,0);
    *(int *)(param_1[0xb9] + -4) = *(int *)(param_1[0xb9] + -4) + 0x96;
    FUN_0042ade0((undefined4 *)((int)param_1 + 0x30a),0);
    *(int *)(param_1[0xb9] + -4) = *(int *)(param_1[0xb9] + -4) + -0x96;
    FUN_00413978((undefined4 *)((int)param_1 + 0x302),0);
    FUN_00432064(param_1 + 0x8c,0);
    *(int *)(param_1[0x8d] + -4) = *(int *)(param_1[0x8d] + -4) + 0x96;
    FUN_0042ade0((undefined4 *)((int)param_1 + 0x25a),0);
    *(int *)(param_1[0x8d] + -4) = *(int *)(param_1[0x8d] + -4) + -0x96;
    FUN_00413978((undefined4 *)((int)param_1 + 0x252),0);
    FUN_00432064(param_1 + 0x60,0);
    *(int *)(param_1[0x61] + -4) = *(int *)(param_1[0x61] + -4) + 0x96;
    FUN_0042ade0((undefined4 *)((int)param_1 + 0x1aa),0);
    *(int *)(param_1[0x61] + -4) = *(int *)(param_1[0x61] + -4) + -0x96;
    FUN_00413978((undefined4 *)((int)param_1 + 0x1a2),0);
    FUN_00432064(param_1 + 0x34,0);
    *(int *)(param_1[0x35] + -4) = *(int *)(param_1[0x35] + -4) + 0x96;
    FUN_0042ade0((undefined4 *)((int)param_1 + 0xfa),0);
    *(int *)(param_1[0x35] + -4) = *(int *)(param_1[0x35] + -4) + -0x96;
    FUN_00413978((undefined4 *)((int)param_1 + 0xf2),0);
    FUN_00432064(param_1 + 8,0);
    *(int *)(param_1[9] + -4) = *(int *)(param_1[9] + -4) + 0x96;
    FUN_0042ade0((undefined4 *)((int)param_1 + 0x4a),0);
    *(int *)(param_1[9] + -4) = *(int *)(param_1[9] + -4) + -0x96;
    FUN_00413978((undefined4 *)((int)param_1 + 0x42),0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe20;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xe20;
    FUN_00434760(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe20;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xe20;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_0042ade0(param_1 + 0x392,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00413978(param_1 + 0x390,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

