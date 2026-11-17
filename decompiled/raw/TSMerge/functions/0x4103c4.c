// name: FUN_004103c4
// address: 0x4103c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004103c4(int *param_1,WPARAM param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  undefined2 local_c [2];
  undefined2 local_8;
  
  cVar3 = '\0';
  FUN_0040eef0();
  iVar1 = FUN_0040fc8c(cVar3);
  if (iVar1 == 2) {
    uVar2 = FUN_0042d1a4(*param_1,0xd6,param_2,0);
  }
  else {
    FUN_0042d1a4(*param_1,0xd6,(WPARAM)local_c,param_2);
    uVar2 = CONCAT22(local_c[0],local_8);
  }
  return uVar2;
}

