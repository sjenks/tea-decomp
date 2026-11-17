// name: FUN_00401ca8
// address: 0x401ca8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00401ca8(int param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    FUN_00403258(param_1,(byte *)s_Loading_primary_word_list_0046133d);
    break;
  case 1:
    FUN_00403258(param_1,(byte *)s_Sorting_primary_word_list_00461357);
    break;
  case 2:
    FUN_00403258(param_1,(byte *)s_Loading_secondary_word_list_00461371);
    break;
  case 3:
    FUN_00403258(param_1,(byte *)s_Sorting_secondary_word_list_0046138d);
    break;
  case 4:
    FUN_00403258(param_1,(byte *)s_Saving_merged_word_list_004613a9);
  }
  *(undefined4 *)(param_1 + 0xde4) = 8;
  (**(code **)(*(int *)(param_1 + 0xc) + 0x40))();
  return;
}

