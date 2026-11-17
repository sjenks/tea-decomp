// name: FUN_00448adc
// address: 0x448adc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00448adc(undefined4 param_1,undefined4 *param_2,RECT *param_3,char param_4)

{
  int iVar1;
  LONG LVar2;
  LONG LVar3;
  undefined4 *in_FS_OFFSET;
  RECT local_ec;
  RECT local_dc;
  RECT local_cc;
  RECT local_bc;
  RECT local_ac;
  RECT local_9c;
  int local_88;
  int local_84;
  int local_7c;
  int local_78;
  LONG local_74;
  LONG local_6c;
  int local_68;
  int local_64;
  LONG local_5c;
  LONG local_58;
  int local_54;
  int local_4c;
  int local_48;
  LONG local_40;
  LONG local_3c;
  LONG local_38;
  undefined4 local_30;
  undefined2 local_20;
  int local_14;
  HBRUSH local_c [2];
  
  FUN_00455f04(0x4700bc);
  local_20 = 8;
  FUN_00431320((uint *)local_c,(uint *)&DAT_00476bcc,'\x01');
  local_14 = local_14 + 2;
  local_20 = 0x14;
  FrameRect((HDC)*param_2,param_3,local_c[0]);
  FUN_0041d740(&param_3->left,-1,-1);
  (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
  ExtTextOutA((HDC)*param_2,0,0,2,param_3,(LPCSTR)0x0,0,(INT *)0x0);
  if ((4 < param_3->right - param_3->left) && (4 < param_3->bottom - param_3->top)) {
    if (param_4 == '\0') {
      iVar1 = param_3->top;
      local_54 = param_3->right + -1;
      local_58 = param_3->top;
      local_5c = param_3->left;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      local_bc.left = local_5c;
      local_bc.top = local_58;
      local_bc.right = local_54;
      local_bc.bottom = iVar1 + 1;
      ExtTextOutA((HDC)*param_2,0,0,2,&local_bc,(LPCSTR)0x0,0,(INT *)0x0);
      iVar1 = param_3->bottom;
      local_64 = param_3->left + 1;
      local_68 = param_3->top + 1;
      local_6c = param_3->left;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      local_cc.left = local_6c;
      local_cc.top = local_68;
      local_cc.right = local_64;
      local_cc.bottom = iVar1 + -1;
      ExtTextOutA((HDC)*param_2,0,0,2,&local_cc,(LPCSTR)0x0,0,(INT *)0x0);
      LVar2 = param_3->bottom;
      local_74 = param_3->right;
      local_78 = param_3->top + 1;
      local_7c = param_3->right + -1;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      local_dc.left = local_7c;
      local_dc.top = local_78;
      local_dc.right = local_74;
      local_dc.bottom = LVar2;
      ExtTextOutA((HDC)*param_2,0,0,2,&local_dc,(LPCSTR)0x0,0,(INT *)0x0);
      LVar2 = param_3->bottom;
      local_84 = param_3->right + -1;
      local_88 = param_3->bottom + -1;
      iVar1 = param_3->left;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      local_ec.top = local_88;
      local_ec.right = local_84;
      local_ec.left = iVar1 + 1;
      local_ec.bottom = LVar2;
      ExtTextOutA((HDC)*param_2,0,0,2,&local_ec,(LPCSTR)0x0,0,(INT *)0x0);
    }
    else {
      iVar1 = param_3->top;
      local_38 = param_3->right;
      local_3c = param_3->top;
      local_40 = param_3->left;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      local_9c.left = local_40;
      local_9c.top = local_3c;
      local_9c.right = local_38;
      local_9c.bottom = iVar1 + 1;
      ExtTextOutA((HDC)*param_2,0,0,2,&local_9c,(LPCSTR)0x0,0,(INT *)0x0);
      LVar2 = param_3->bottom;
      local_48 = param_3->left + 1;
      local_4c = param_3->top + 1;
      LVar3 = param_3->left;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      local_ac.top = local_4c;
      local_ac.right = local_48;
      local_ac.left = LVar3;
      local_ac.bottom = LVar2;
      ExtTextOutA((HDC)*param_2,0,0,2,&local_ac,(LPCSTR)0x0,0,(INT *)0x0);
    }
  }
  local_14 = local_14 + -2;
  FUN_00431428((uint *)local_c,2);
  *in_FS_OFFSET = local_30;
  return;
}

