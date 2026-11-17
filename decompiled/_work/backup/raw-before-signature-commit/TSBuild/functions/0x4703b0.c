// name: FUN_004703b0
// address: 0x4703b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004703b0(int param_1,int param_2,UINT param_3)

{
  if (param_1 == 0) {
    if (DAT_0048a8f4 != (code *)0x0) {
      (*DAT_0048a8f4)();
    }
    FUN_00471060();
    (*(code *)PTR_FUN_0048a8f8)();
  }
  else {
    DAT_0048a8f4 = (code *)0x0;
  }
  if (param_2 == 0) {
    if (param_1 == 0) {
      (*(code *)PTR_FUN_0048a8fc)();
      (*(code *)PTR_FUN_0048a900)();
    }
    FUN_00470f74(param_3);
  }
  return;
}

