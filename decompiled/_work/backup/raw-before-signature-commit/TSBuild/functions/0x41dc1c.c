// name: FUN_0041dc1c
// address: 0x41dc1c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041dc1c(int param_1)

{
  undefined **local_18 [4];
  int local_8;
  
  if (*(int *)(**(int **)(param_1 + 6) + 0xc) != 0) {
    FUN_00435bb0(local_18,*(undefined4 *)(param_1 + 0x3a),
                 *(undefined4 *)(**(int **)(param_1 + 6) + 0xc));
    local_18[0] = &PTR_FUN_00479408;
    local_8 = param_1;
    FUN_00436d48(**(int **)(param_1 + 6),0x7fff,0,local_18);
  }
  return;
}

