// name: FUN_00456fb8
// address: 0x456fb8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00456fb8(uint *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0;
  if (param_2 < 0x1000) {
    uVar1 = 0xffffffff;
  }
  else {
    param_1[2] = 1;
    param_1[3] = (uint)param_1;
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[0x23] = (uint)DAT_00484b64;
    param_1[0x24] = 0;
    if (DAT_00484b64 == (uint *)0x0) {
      _DAT_00484b68 = param_1;
    }
    else {
      DAT_00484b64[0x24] = (uint)param_1;
    }
    DAT_00484b64 = param_1;
    param_1[0x25] = 0;
    puVar3 = param_1 + 0x26;
    if (DAT_00484b6c == (uint *)0x0) {
      uVar5 = DAT_00484b58 * 2 + 3 & 0xfffffffc;
      DAT_00484b6c = param_1 + 0x27;
      *puVar3 = uVar5;
      puVar3 = (uint *)((int)puVar3 + uVar5 + 4);
      FUN_00456f78();
      iVar4 = uVar5 + 4;
    }
    uVar5 = (param_2 - 0xa0) - iVar4;
    *puVar3 = uVar5 + 1;
    *(undefined4 *)((int)puVar3 + (uVar5 + 1 & 0xfffffffc) + 4) = 2;
    puVar2 = PTR_DAT_00484b7c;
    if (uVar5 < DAT_00484b58) {
      puVar2 = (undefined *)((int)DAT_00484b6c + uVar5 * 2 + -0xc);
    }
    puVar3[1] = *(uint *)(puVar2 + 4);
    puVar3[2] = (uint)puVar2;
    *(uint **)(puVar3[1] + 8) = puVar3;
    *(uint **)(puVar2 + 4) = puVar3;
    *(uint *)((int)puVar3 + uVar5) = uVar5 + 4;
    uVar1 = 0;
  }
  return uVar1;
}

