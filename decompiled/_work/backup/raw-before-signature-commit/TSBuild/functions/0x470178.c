// name: FUN_00470178
// address: 0x470178
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00470178(undefined1 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *local_c;
  undefined1 *local_8;
  
  do {
    if (param_2 < 3) {
      if (param_2 == 2) {
        puVar4 = param_1 + DAT_0048d87c;
        iVar1 = (*DAT_0048d878)();
        if (0 < iVar1) {
          FUN_00470150(param_1,puVar4);
        }
      }
      return;
    }
    puVar4 = param_1 + (param_2 - 1) * DAT_0048d87c;
    puVar3 = param_1 + (param_2 >> 1) * DAT_0048d87c;
    iVar1 = (*DAT_0048d878)();
    if (0 < iVar1) {
      FUN_00470150(puVar3,puVar4);
    }
    iVar1 = (*DAT_0048d878)();
    if (iVar1 < 1) {
      iVar1 = (*DAT_0048d878)();
      if (0 < iVar1) {
        FUN_00470150(param_1,puVar4);
      }
    }
    else {
      FUN_00470150(puVar3,param_1);
    }
    if (param_2 == 3) {
      FUN_00470150(param_1,puVar3);
      return;
    }
    puVar3 = param_1 + DAT_0048d87c;
    local_8 = puVar3;
    do {
      while (iVar1 = (*DAT_0048d878)(), iVar1 < 1) {
        if (iVar1 == 0) {
          FUN_00470150(puVar3,local_8);
          local_8 = local_8 + DAT_0048d87c;
        }
        if (puVar4 <= puVar3) goto LAB_004702bf;
        puVar3 = puVar3 + DAT_0048d87c;
      }
      for (; puVar3 < puVar4; puVar4 = puVar4 + -DAT_0048d87c) {
        iVar1 = (*DAT_0048d878)();
        if (-1 < iVar1) {
          FUN_00470150(puVar3,puVar4);
          if (iVar1 != 0) {
            puVar3 = puVar3 + DAT_0048d87c;
            puVar4 = puVar4 + -DAT_0048d87c;
          }
          break;
        }
      }
    } while (puVar3 < puVar4);
LAB_004702bf:
    iVar1 = (*DAT_0048d878)();
    if (iVar1 < 1) {
      puVar3 = puVar3 + DAT_0048d87c;
    }
    puVar4 = param_1;
    for (local_c = puVar3 + -DAT_0048d87c; (puVar4 < local_8 && (local_8 <= local_c));
        local_c = local_c + -DAT_0048d87c) {
      FUN_00470150(puVar4,local_c);
      puVar4 = puVar4 + DAT_0048d87c;
    }
    uVar2 = (uint)((int)puVar3 - (int)local_8) / DAT_0048d87c;
    param_2 = (uint)(param_1 + (param_2 * DAT_0048d87c - (int)puVar3)) / DAT_0048d87c;
    if (param_2 < uVar2) {
      FUN_00470178(puVar3,param_2);
      param_2 = uVar2;
    }
    else {
      FUN_00470178(param_1,uVar2);
      param_1 = puVar3;
    }
  } while( true );
}

