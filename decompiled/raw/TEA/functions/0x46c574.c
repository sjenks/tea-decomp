// name: FUN_0046c574
// address: 0x46c574
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0046c574(int *param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  char cVar2;
  uint local_90;
  uint local_8c;
  undefined4 local_88;
  undefined2 local_78;
  int local_6c;
  undefined4 local_64;
  int local_60;
  uint local_34;
  int local_30;
  
  FUN_004dce64(0x4fdda8);
  if ((char)param_1[0x86] == '\0') {
    local_78 = 0x14;
    FUN_004cb6ec(&local_34,(int)param_1 + 0x166);
    local_6c = local_6c + 2;
    local_78 = 8;
    FUN_004a76a8(*(int *)((int)param_1 + 0x166),0x1105,0,0);
    local_78 = 0x20;
    FUN_004cb3b4(&local_64,(int)param_1 + 0x166,0xffff0000);
    local_6c = local_6c + 4;
    if (((local_60 == local_30) ||
        (uVar1 = FUN_004cb664(&local_34,&local_8c,'\x01'), (char)uVar1 == '\0')) ||
       (uVar1 = FUN_004cb6a8(&local_34,&local_90,'\x01'), (char)uVar1 == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    local_6c = local_6c + -2;
    FUN_004cc0cc();
    if (cVar2 != '\0') {
      param_1[0x2c] = local_8c;
      if (local_90 == 0) {
        FUN_0046caa4(param_1);
      }
      else {
        FUN_0046c7e4(param_1);
      }
    }
    local_6c = local_6c + -2;
    uVar1 = FUN_004cc0cc();
    *in_FS_OFFSET = local_88;
    return uVar1;
  }
  *in_FS_OFFSET = local_88;
  return local_88;
}

