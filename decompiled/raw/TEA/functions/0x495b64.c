// name: FUN_00495b64
// address: 0x495b64
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00495b64(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 * *(int *)(param_1 + 0x2d);
  iVar2 = iVar1 + 4;
  if (iVar2 < 0) {
    iVar2 = iVar1 + 0xb;
  }
  return iVar2 >> 3;
}

