// name: FUN_0046caa4
// address: 0x46caa4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0046caa4(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 local_428 [15];
  uint local_3ec [250];
  
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(*param_1 + 0x14) + 8);
  }
  puVar2 = FUN_004dd744(*(int *)(*param_1 + 0x14),iVar4,(int *)&DAT_0040299c,(int *)&DAT_0045da64,0)
  ;
  FUN_004e0344((undefined1 *)local_3ec,(byte *)s_Definition__d_of__d_004fd3e5);
  FUN_00473470((int)puVar2,local_3ec);
  iVar4 = param_1[0x26] - param_1[0x25];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x7f;
  }
  uVar1 = param_1[0x2c];
  if (uVar1 < (uint)(iVar4 >> 7)) {
    iVar4 = param_1[0x25];
    FUN_004a76a8(*(int *)param_1[0x85],0xb,0,0);
    FUN_0046c760((int)param_1);
    FUN_0041ac90((int *)param_1[0x85],uVar1 * 0x80 + iVar4 + 0x68);
    iVar4 = param_1[0x2c];
    iVar3 = iVar4 * 0x80 + param_1[0x25];
    iVar3 = *(int *)(iVar3 + 0x20) - *(int *)(iVar3 + 0x1c);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    if (iVar3 >> 4 == 0) {
      iVar3 = param_1[0x25];
      (**(code **)(*(int *)(param_1[0x85] + 0xc) + 0x3c))();
      FUN_004a76a8(*(int *)param_1[0x85],0xc2,0,*(LPARAM *)(iVar4 * 0x80 + iVar3 + 0x60));
      (**(code **)(*(int *)(param_1[0x85] + 0xc) + 0x3c))();
      FUN_00485614(local_428,(int *)param_1[0x85],'\x01',0xf800003f);
      FUN_0048569c((int)local_428,'\x01');
      FUN_00485664((int)local_428,'\x01');
      FUN_00469120((int *)param_1[0x85],(LPARAM)local_428,1);
      (**(code **)(*(int *)(param_1[0x85] + 0xc) + 0x3c))();
    }
    FUN_004a76a8(*(int *)param_1[0x85],0xb,1,0);
    (**(code **)(*(int *)(*(int *)param_1[0x85] + 8) + 0x68))();
  }
  return;
}

