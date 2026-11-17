// name: FUN_0045f948
// address: 0x45f948
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045f948(int param_1,uint param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  uint in_stack_00000014;
  int in_stack_00000018;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  
  while (piVar2 = param_3 + -3, param_4 <= piVar2) {
    puVar1 = (undefined4 *)(param_3[-2] + param_1);
    if (in_stack_00000018 != 0) {
      puVar1 = (undefined4 *)*puVar1;
    }
    param_3 = piVar2;
    if ((*(byte *)(*piVar2 + 0xc) & 2) != 0) {
      FUN_0045f993((int)puVar1,*piVar2,param_2,in_stack_00000014,0,in_stack_0000001c,
                   in_stack_00000020);
      in_stack_00000014 = 0;
    }
  }
  return;
}

