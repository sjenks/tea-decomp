// name: FUN_0042f30c
// address: 0x42f30c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0042f30c(int *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  CHAR local_12c [260];
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  FUN_00467ba8(0x47cb9c);
  local_18 = 8;
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x9b;
    param_1[1] = (int)param_1 + 0x9f;
    *(undefined4 *)((int)param_1 + 0x97) = 0;
    *(undefined ***)((int)param_1 + 0x9b) = &PTR_FUN_00474f84;
    *(undefined ***)((int)param_1 + 0x9f) = &PTR_FUN_00474f74;
    local_c = local_c + 1;
  }
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x11;
  FUN_00435c28(param_1,1,param_3,(uint *)0x0,0);
  local_c = local_c + 1;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x11;
  param_1[2] = (int)&PTR_FUN_0047cbbc;
  *(undefined ***)*param_1 = &PTR_LAB_0047cc4c;
  *(undefined ***)param_1[1] = &PTR_LAB_0047cc58;
  FUN_0042bf5c((undefined4 *)((int)param_1 + 0x86),1);
  local_c = local_c + 2;
  *(undefined4 *)((int)param_1 + 0x8f) = 0;
  if (param_4 != 0) {
    iVar1 = FUN_0044f0b4(param_1[0x1b] + 4,param_4,local_12c,0x104);
    if (iVar1 != 0) {
      AppendMenuA(*(HMENU *)((int)param_1 + 0x8a),1,0,local_12c);
      AppendMenuA(*(HMENU *)((int)param_1 + 0x8a),0x800,0xffffffff,(LPCSTR)0x0);
      goto LAB_0042f44c;
    }
  }
  *in_FS_OFFSET = local_28;
LAB_0042f44c:
  *in_FS_OFFSET = local_28;
  return param_1;
}

