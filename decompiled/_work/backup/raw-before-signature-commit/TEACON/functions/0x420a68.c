// name: FUN_00420a68
// address: 0x420a68
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00420a68(int *param_1,LPCSTR param_2,char *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint local_c;
  uint local_8;
  
  uVar1 = FUN_0042098c(param_3,&local_8,&local_c);
  *(short *)((int)param_1 + 0x12) = (short)uVar1;
  if ((short)uVar1 == 0) {
LAB_00420ab3:
    *(undefined1 *)((int)param_1 + 0x16) = 0xff;
    *(undefined2 *)((int)param_1 + 0x12) = 0;
    param_1 = (int *)0x0;
  }
  else {
    if (*(char *)((int)param_1 + 0x16) < '\0') {
      iVar2 = FUN_00420184(param_2,local_8 | param_4,local_c);
      *(char *)((int)param_1 + 0x16) = (char)iVar2;
      if ((char)iVar2 < '\0') goto LAB_00420ab3;
    }
    if ((*(byte *)((int)&DAT_0043252c + *(char *)((int)param_1 + 0x16) * 4 + 1) & 0x20) != 0) {
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 0x200;
    }
    iVar2 = FUN_004215e8(param_1,0,(uint)((*(byte *)((int)param_1 + 0x13) & 2) != 0),0x200);
    if (iVar2 == 0) {
      *(undefined2 *)(param_1 + 4) = 0;
    }
    else {
      FUN_004207fc(param_1);
      param_1 = (int *)0x0;
    }
  }
  return param_1;
}

