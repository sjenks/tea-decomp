// name: FUN_004223e0
// address: 0x4223e0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl
FUN_004223e0(undefined4 *param_1,int *param_2,uint *param_3,char *param_4,int param_5,INT *param_6,
            int param_7,uint *param_8)

{
  uint uVar1;
  undefined1 local_c [8];
  
  if ((int)param_4 < 0) {
    param_4 = FUN_004677a0(param_3);
  }
  uVar1 = TabbedTextOutA((HDC)*param_1,*param_2,param_2[1],(LPCSTR)param_3,(int)param_4,param_5,
                         param_6,param_7);
  *param_8 = uVar1 & 0xffff;
  param_8[1] = uVar1 >> 0x10;
  return CONCAT31((int3)((uint)local_c >> 8),1);
}

