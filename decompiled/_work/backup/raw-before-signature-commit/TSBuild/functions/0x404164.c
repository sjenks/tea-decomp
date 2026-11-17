// name: FUN_00404164
// address: 0x404164
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00404164(int *param_1,byte param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x474f88);
  if (param_1 != (int *)0x0) {
    FUN_004160b8((int)(param_1 + 0x34e),2);
    FUN_004457b8(param_1 + 800,2);
    FUN_004457b8((int *)((int)param_1 + 0xbce),2);
    FUN_004457b8(param_1 + 0x2c7,2);
    piVar2 = (int *)((int)param_1 + 0xa6a);
    piVar1 = (int *)(*(int *)((int)param_1 + 0xa6e) + -4);
    *piVar1 = *piVar1 + -8;
    *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + -8;
    FUN_0043d704(piVar2,0);
    piVar1 = (int *)(*(int *)((int)param_1 + 0xa6e) + -4);
    *piVar1 = *piVar1 + 8;
    *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + 8;
    piVar1 = (int *)(*(int *)((int)param_1 + 0xa6e) + -4);
    *piVar1 = *piVar1 + 0x96;
    FUN_00435f74((undefined4 *)((int)param_1 + 0xa96),0);
    piVar1 = (int *)(*(int *)((int)param_1 + 0xa6e) + -4);
    *piVar1 = *piVar1 + -0x96;
    FUN_0041e99c((undefined4 *)((int)param_1 + 0xa8e),0);
    piVar1 = param_1 + 0x26e;
    *(int *)(param_1[0x26f] + -4) = *(int *)(param_1[0x26f] + -4) + -8;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + -8;
    FUN_0043d704(piVar1,0);
    *(int *)(param_1[0x26f] + -4) = *(int *)(param_1[0x26f] + -4) + 8;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + 8;
    *(int *)(param_1[0x26f] + -4) = *(int *)(param_1[0x26f] + -4) + 0x96;
    FUN_00435f74(param_1 + 0x279,0);
    *(int *)(param_1[0x26f] + -4) = *(int *)(param_1[0x26f] + -4) + -0x96;
    FUN_0041e99c(param_1 + 0x277,0);
    piVar2 = (int *)((int)param_1 + 0x906);
    piVar1 = (int *)(*(int *)((int)param_1 + 0x90a) + -4);
    *piVar1 = *piVar1 + -8;
    *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + -8;
    FUN_0043d704(piVar2,0);
    piVar1 = (int *)(*(int *)((int)param_1 + 0x90a) + -4);
    *piVar1 = *piVar1 + 8;
    *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + 8;
    piVar1 = (int *)(*(int *)((int)param_1 + 0x90a) + -4);
    *piVar1 = *piVar1 + 0x96;
    FUN_00435f74((undefined4 *)((int)param_1 + 0x932),0);
    piVar1 = (int *)(*(int *)((int)param_1 + 0x90a) + -4);
    *piVar1 = *piVar1 + -0x96;
    FUN_0041e99c((undefined4 *)((int)param_1 + 0x92a),0);
    FUN_0043c9a4((int *)((int)param_1 + 0x85a),2);
    FUN_0043c9a4((int *)((int)param_1 + 0x7ae),2);
    FUN_0043c9a4((int *)((int)param_1 + 0x702),2);
    FUN_0043c9a4((int *)((int)param_1 + 0x656),2);
    FUN_0043c9a4((int *)((int)param_1 + 0x5aa),2);
    FUN_0043c9a4((int *)((int)param_1 + 0x4fe),2);
    piVar1 = param_1 + 0x114;
    *(int *)(param_1[0x115] + -4) = *(int *)(param_1[0x115] + -4) + -4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + -4;
    FUN_0043d704(piVar1,0);
    *(int *)(param_1[0x115] + -4) = *(int *)(param_1[0x115] + -4) + 4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + 4;
    *(int *)(param_1[0x115] + -4) = *(int *)(param_1[0x115] + -4) + 0x96;
    FUN_00435f74(param_1 + 0x11e,0);
    *(int *)(param_1[0x115] + -4) = *(int *)(param_1[0x115] + -4) + -0x96;
    FUN_0041e99c(param_1 + 0x11c,0);
    FUN_00417310(param_1 + 0xe7,2);
    FUN_0043d1f8(param_1 + 0xbb,2);
    FUN_004457b8((int *)((int)param_1 + 0x23a),2);
    FUN_004457b8(param_1 + 0x62,2);
    FUN_004457b8((int *)((int)param_1 + 0xd6),2);
    FUN_004457b8(param_1 + 9,2);
    FUN_00405fbc(param_1 + 6,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xd70;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xd70;
    FUN_0043f8f4(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xd70;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xd70;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_00435f74(param_1 + 0x366,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_0041e99c(param_1 + 0x364,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

