// TSMerge.exe — runtime / library code "code_0x0040c000"
// 17 functions, 0x0040f010..0x0040fcbc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0040f010  FUN_0040f010   (108 bytes)   [unnamed]
void __cdecl FUN_0040f010(int param_1,byte param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x4642e0);
  if (param_1 != 0) {
    piVar1 = (int *)FUN_0040eef8();
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)();
    }
    *piVar1 = 0;
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f0e0  FUN_0040f0e0   (28 bytes)   [unnamed]
void __cdecl FUN_0040f0e0(int *param_1,LPARAM param_2)

{
  FUN_0042d1a4(*param_1,0x434,0,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f12c  FUN_0040f12c   (28 bytes)   [unnamed]
undefined4 __cdecl FUN_0040f12c(int *param_1,LPARAM param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0042d1a4(*param_1,0x437,0,param_2);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f148  FUN_0040f148   (28 bytes)   [unnamed]
void __cdecl FUN_0040f148(int *param_1,LPARAM param_2)

{
  FUN_0042d1a4(*param_1,1099,0,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f194  FUN_0040f194   (29 bytes)   [unnamed]
undefined4 __cdecl FUN_0040f194(int *param_1,WPARAM param_2,LPARAM param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0042d1a4(*param_1,0x438,param_2,param_3);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f28c  FUN_0040f28c   (31 bytes)   [unnamed]
void __cdecl FUN_0040f28c(int *param_1,WPARAM param_2,LPARAM param_3)

{
  FUN_0042d1a4(*param_1,0x449,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f2ac  FUN_0040f2ac   (31 bytes)   [unnamed]
void __cdecl FUN_0040f2ac(int *param_1,WPARAM param_2,LPARAM param_3)

{
  FUN_0042d1a4(*param_1,0x44a,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f5d4  FUN_0040f5d4   (67 bytes)   [unnamed]
undefined4 __stdcall FUN_0040f5d4(int *param_1,undefined1 *param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  if ((*(byte *)(*param_1 + 0x30) & 2) == 0) {
    FUN_00451098(param_1,param_2,param_3);
    uVar1 = FUN_00451050((int)param_1);
    *param_4 = uVar1;
  }
  else {
    *param_4 = 0;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f618  FUN_0040f618   (142 bytes)   [unnamed]
undefined4 __stdcall FUN_0040f618(int *param_1,int param_2,int param_3,int *param_4)

{
  int local_1c [3];
  int local_10 [3];
  
  FUN_00452bbc(local_10,param_1);
  FUN_004517ec(param_1,param_2,param_3);
  FUN_00452bbc(local_1c,param_1);
  *param_4 = local_1c[0] - local_10[0];
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f6b0  FUN_0040f6b0   (57 bytes)   [unnamed]
bool __cdecl FUN_0040f6b0(int *param_1,undefined4 param_2,WPARAM param_3)

{
  undefined4 local_10;
  int local_c;
  code *local_8;
  
  local_10 = param_2;
  local_c = 0;
  local_8 = FUN_0040f5d4;
  FUN_0040f28c(param_1,param_3,(LPARAM)&local_10);
  return local_c == 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f6ec  FUN_0040f6ec   (57 bytes)   [unnamed]
bool __cdecl FUN_0040f6ec(int *param_1,undefined4 param_2,WPARAM param_3)

{
  undefined4 local_10;
  int local_c;
  code *local_8;
  
  local_10 = param_2;
  local_c = 0;
  local_8 = FUN_0040f618;
  FUN_0040f2ac(param_1,param_3,(LPARAM)&local_10);
  return local_c == 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f9dc  FUN_0040f9dc   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_0040f9dc(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4643f0);
  *param_1 = &OWL::TStreamer::vftable;
  param_1[1] = param_2;
  *param_1 = &OWL::TNewStreamer::vftable;
  *param_1 = &OWL::TRichEdit::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004567e4((int)param_2,iVar2,(int *)&DAT_00404628,(int *)&DAT_0040f960,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040fa44  FUN_0040fa44   (284 bytes)   [unnamed]
int * __cdecl FUN_0040fa44(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x464408);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x1e);
    param_1[0x1e] = (int)(param_1 + 0x1b);
    param_1[0x1f] = (int)(param_1 + 0x1c);
    param_1[1] = (int)(param_1 + 0x1b);
    param_1[2] = (int)(param_1 + 0x1c);
    param_1[0x1a] = 0;
    param_1[0x1d] = 0;
    param_1[0x1b] = (int)&OWL::TEventHandler::vftable;
    param_1[0x1c] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84(param_1 + 0x1e,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_0043d374(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&OWL::TRichEdit::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_00464788;
  *(undefined ***)param_1[2] = &PTR_LAB_00464794;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004647a0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040fb7c  FUN_0040fb7c   (87 bytes)   [unnamed]
void __cdecl FUN_0040fb7c(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 local_14 [3];
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[3] != 0) {
    FUN_0042280c(param_2,&local_8,4);
  }
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  piVar1 = FUN_0043d30c(local_14,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040fbec  FUN_0040fbec   (81 bytes)   [unnamed]
void __cdecl FUN_0040fbec(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 local_14 [3];
  undefined4 local_8;
  
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  FUN_0043d30c(local_14,piVar1);
  local_8 = 1;
  FUN_00422d00(param_2,&local_8,4);
  OWL::TEditFile::Streamer::vf2((int)local_14,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040fc8c  FUN_0040fc8c   (48 bytes)   [unnamed]
undefined4 __cdecl FUN_0040fc8c(char param_1)

{
  if (DAT_004640c4 == '\0') {
    if (param_1 == '\0') {
      DAT_004640c0 = FUN_0040edc8();
    }
    else {
      DAT_004640c0 = 1;
    }
    DAT_004640c4 = DAT_004640c4 + '\x01';
  }
  return DAT_004640c0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040fcbc  FUN_0040fcbc   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_0040fcbc(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x46443c);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)operator_new();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_0040fa44(piVar2,0);
        param_1 = (int *)piVar2[2];
      }
    }
    FUN_0040f9dc(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

} // namespace tea
