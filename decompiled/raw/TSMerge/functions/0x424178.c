// name: FUN_00424178
// address: 0x424178
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00424178(int *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  CHAR local_12c [260];
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  FUN_00455f04(0x468dc0);
  local_18 = 8;
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x9b;
    param_1[1] = (int)param_1 + 0x9f;
    *(undefined4 *)((int)param_1 + 0x97) = 0;
    *(undefined ***)((int)param_1 + 0x9b) = &PTR_FUN_00462234;
    *(undefined ***)((int)param_1 + 0x9f) = &PTR_FUN_00462224;
    local_c = local_c + 1;
  }
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x11;
  FUN_0042aa94(param_1,1,param_3,(uint *)0x0,0);
  local_c = local_c + 1;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x11;
  param_1[2] = (int)&PTR_FUN_00468de0;
  *(undefined ***)*param_1 = &PTR_LAB_00468e70;
  *(undefined ***)param_1[1] = &PTR_LAB_00468e7c;
  FUN_00420de8((undefined4 *)((int)param_1 + 0x86),1);
  local_c = local_c + 2;
  *(undefined4 *)((int)param_1 + 0x8f) = 0;
  if (param_4 != 0) {
    iVar1 = FUN_00443f20(param_1[0x1b] + 4,param_4,local_12c,0x104);
    if (iVar1 != 0) {
      AppendMenuA(*(HMENU *)((int)param_1 + 0x8a),1,0,local_12c);
      AppendMenuA(*(HMENU *)((int)param_1 + 0x8a),0x800,0xffffffff,(LPCSTR)0x0);
      goto LAB_004242b8;
    }
  }
  *in_FS_OFFSET = local_28;
LAB_004242b8:
  *in_FS_OFFSET = local_28;
  return param_1;
}

