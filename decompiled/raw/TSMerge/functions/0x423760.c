// name: FUN_00423760
// address: 0x423760
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined1 * __cdecl FUN_00423760(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined4 local_10 [3];
  
  FUN_00455f04(0x468bec);
  puVar1 = FUN_00423828();
  puVar2 = HeapAlloc((HANDLE)*puVar1,0,10);
  if (puVar2 == (undefined1 *)0x0) {
    puVar1 = local_10;
    piVar3 = FUN_0041864c(puVar1);
    (**(code **)(*piVar3 + 0xc))(piVar3,*piVar3,puVar1,piVar3);
    FUN_00418068(local_10,0);
  }
  else {
    *puVar2 = 0xb8;
    puVar2[5] = 0xe9;
    *(undefined4 *)(puVar2 + 1) = param_1;
    *(int *)(puVar2 + 6) = 0x423906 - (int)puVar2;
  }
  *in_FS_OFFSET = local_38;
  return puVar2;
}

