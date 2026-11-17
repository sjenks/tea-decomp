// name: FUN_0048ec48
// address: 0x48ec48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0048ec48(int *param_1,LPCSTR param_2,char *param_3)

{
  int iVar1;
  uint *puVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 local_108;
  uint local_8;
  
  local_8 = 0;
  iVar1 = (**(code **)(*param_1 + 4))();
  if (iVar1 == 0) {
    pcVar3 = (char *)0x0;
  }
  else {
    puVar2 = (uint *)(**(code **)(*param_1 + 4))();
    pcVar3 = FUN_004dc9f4(puVar2);
  }
  if (param_2 == (LPCSTR)0x0) {
    param_2 = PTR_s_Unhandled_Exception_00506258;
  }
  if (pcVar3 == (char *)0x0) {
    FUN_004dc9c4((char *)&local_108,s_Unknown_Exception_00506270);
    pcVar3 = FUN_004dc9f4(&local_108);
  }
  else {
    pcVar4 = (char *)(**(code **)(*param_1 + 4))();
    FUN_004dc9c4((char *)&local_108,pcVar4);
  }
  if (param_3 != (char *)0x0) {
    local_8 = 4;
    *(char *)((int)&local_108 + (int)pcVar3) = '\n';
    FUN_004dc9c4(pcVar3 + (int)&local_108 + 1,param_3);
  }
  uVar5 = FUN_0048ebe4();
  iVar1 = MessageBoxExA((HWND)0x0,(LPCSTR)&local_108,param_2,uVar5 | local_8 | 0x10,0);
  if (iVar1 == 6) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}

