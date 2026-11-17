// name: FUN_004c52b0
// address: 0x4c52b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004c52b0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  char local_18;
  char local_17;
  undefined4 local_16;
  undefined4 local_12;
  undefined4 local_e;
  undefined4 local_a;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if ((((*(char *)(param_1 + 0x15) == '\0') || (*(int *)(param_1 + 0x16) != 0)) ||
        (*(int *)(param_1 + 0x1a) != 0)) ||
       ((*(int *)(param_1 + 0x1e) != *(int *)(param_1 + 0x26) ||
        (*(int *)(param_1 + 0x22) != *(int *)(param_1 + 0x2a))))) {
      if ((*(uint *)(param_1 + 0x11) & 3) == 1) {
        *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 0x11) & 0xfffffffc | 1;
      }
      else {
        *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 0x11) | 3;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x11) = 2;
    }
  }
  else {
    local_16 = 0;
    local_12 = 0;
    local_e = 0;
    local_a = 0;
    Escape((HDC)*param_2,0x18,0x12,(LPCSTR)0x0,&local_18);
    uVar1 = (uint)(local_18 != '\0');
    if (local_17 != '\0') {
      uVar1 = 1;
    }
    *(uint *)(param_1 + 0x11) = uVar1 | *(uint *)(param_1 + 0x11) & 0xfffffffc;
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

