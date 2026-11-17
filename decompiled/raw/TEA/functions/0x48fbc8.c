// name: FUN_0048fbc8
// address: 0x48fbc8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_0048fbc8(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *param_2 = (int)(char)param_1[1];
    *param_4 = (int)*(char *)((int)param_1 + 6);
    *param_3 = (int)*(char *)((int)param_1 + 5);
    *param_5 = (int)*(char *)((int)param_1 + 7);
  }
  else if (iVar1 == 1) {
    iVar1 = FUN_0048fb88((int)(char)param_1[1],param_6);
    *param_2 = iVar1;
    iVar1 = FUN_0048fb88((int)*(char *)((int)param_1 + 6),param_6);
    *param_4 = iVar1;
    iVar1 = FUN_0048fb88((int)*(char *)((int)param_1 + 5),param_6);
    *param_3 = iVar1;
    iVar1 = FUN_0048fb88((int)*(char *)((int)param_1 + 7),param_6);
    *param_5 = iVar1;
  }
  else if (iVar1 == 2) {
    iVar1 = GetSystemMetrics(DAT_00509de8);
    iVar2 = GetSystemMetrics(DAT_00509df0);
    *param_2 = (char)param_1[1] * iVar1;
    *param_4 = *(char *)((int)param_1 + 6) * iVar2;
    *param_3 = *(char *)((int)param_1 + 5) * iVar1;
    *param_5 = *(char *)((int)param_1 + 7) * iVar2;
  }
  return;
}

