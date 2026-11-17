// TSMerge.exe — application module "DMProgressBar"
// 10 functions, 0x00401000..0x004014b4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00401000  entry   (2 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall entry(void)

{
  undefined **ppuVar1;
  
  _DAT_004612cb = _tls_index << 2;
  GetModuleHandleA((LPCSTR)0x0);
  FUN_0044c698();
  FUN_0044ba34();
  FUN_0044c69c();
  FUN_00456b8c((undefined4 *)0x0);
  ppuVar1 = &PTR_DAT_00461270;
  _DAT_004612cf = GetModuleHandleA((LPCSTR)0x0);
  FUN_0045e358((int)ppuVar1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401012  FUN_00401012   (71 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_00401012(void)

{
  undefined **ppuVar1;
  
  _DAT_004612cb = _tls_index << 2;
  GetModuleHandleA((LPCSTR)0x0);
  FUN_0044c698();
  FUN_0044ba34();
  FUN_0044c69c();
  FUN_00456b8c((undefined4 *)0x0);
  ppuVar1 = &PTR_DAT_00461270;
  _DAT_004612cf = GetModuleHandleA((LPCSTR)0x0);
  FUN_0045e358((int)ppuVar1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401059  __GetExceptDLLinfo   (5 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl __GetExceptDLLinfo(undefined4 *param_1)

{
                    /* 0x1059  1  __GetExceptDLLinfo */
  _DAT_00474598 = FUN_00401140();
  _DAT_00474598 = _DAT_00474598 + 0x1c;
  *param_1 = 0x82727349;
  param_1[1] = &DAT_00474584;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401140  FUN_00401140   (15 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
undefined4 __stdcall FUN_00401140(void)

{
  int *piVar1;
  undefined2 in_FS;
  
  piVar1 = (int *)segment(in_FS,0x2c);
  return *(undefined4 *)(*piVar1 + _tls_index * 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x00401150  FUN_00401150   (85 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
/* WARNING: Removing unreachable block (ram,0x0040118f) */
void __stdcall FUN_00401150(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4612f0);
  (*(undefined * *)&DAT_004768a4) = &DAT_00471d68;
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004011a8  FUN_004011a8   (163 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
void __stdcall FUN_004011a8(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x461310);
  if (DAT_004768a4 != 0) {
    if (*(int *)(DAT_004768a4 + -0xc) != -1) {
      piVar2 = (int *)(DAT_004768a4 + -0xc);
      if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0040123b;
    }
    operator_delete();
    DAT_004768a4 = 0;
  }
LAB_0040123b:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040124c  FUN_0040124c   (300 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
int * __cdecl FUN_0040124c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4617c0);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xb);
    param_1[0xb] = (int)(param_1 + 8);
    param_1[0xc] = (int)(param_1 + 9);
    param_1[1] = (int)(param_1 + 8);
    param_1[2] = (int)(param_1 + 9);
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[8] = (int)&OWL::TEventHandler::vftable;
    param_1[9] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84(param_1 + 0xb,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -6;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -6;
  FUN_004316d8(param_1,1,param_3,param_4,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 6;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 6;
  param_1[3] = (int)&DMProgressBar::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_00462178;
  *(undefined ***)param_1[2] = &PTR_LAB_00462184;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00462190;
  param_1[6] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401394  DMProgressBar::~DMProgressBar   (251 bytes)   [rtti:dtor destructor]
//   written in code as DMProgressBar::_dtor
void __cdecl DMProgressBar::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4617e4);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&DMProgressBar::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_00462178;
    *(undefined ***)param_1[2] = &PTR_LAB_00462184;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_00462190;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -6;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -6;
    OWL::TButton::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 6;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 6;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0xb,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 9,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401490  FUN_00401490   (33 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00401490(int *param_1,int param_2)

{
  if (param_2 != param_1[6]) {
    param_1[6] = param_2;
    (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004014b4  DMProgressBar::vf5   (367 bytes)   [rtti:vtable virtual slot 5]
void __cdecl DMProgressBar::vf5(int param_1,int param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_4c;
  HDC local_28 [9];
  
  __InitExceptBlockLDTC(0x461818);
  FUN_00416a98((undefined4*)local_28,*(undefined4 *)(param_2 + 0x18));
  iVar1 = ((*(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x1c)) * *(int *)(param_1 + 0x18)) / 100;
  OWL::TDC::vf6((undefined4*)local_28,7);
  OWL::TDC::vf6((undefined4*)local_28,5);
  Rectangle(local_28[0],*(int *)(param_2 + 0x1c),*(int *)(param_2 + 0x20),*(int *)(param_2 + 0x24),
            *(int *)(param_2 + 0x28));
  OWL::TDC::vf6((undefined4*)local_28,8);
  OWL::TDC::vf6((undefined4*)local_28,2);
  Rectangle(local_28[0],*(int *)(param_2 + 0x1c) + 1,*(int *)(param_2 + 0x20) + 1,
            *(int *)(param_2 + 0x1c) + iVar1,*(int *)(param_2 + 0x28));
  OWL::TDC::vf6((undefined4*)local_28,0);
  Rectangle(local_28[0],iVar1 + *(int *)(param_2 + 0x1c) + 1,*(int *)(param_2 + 0x20) + 1,
            *(int *)(param_2 + 0x24) + -1,*(int *)(param_2 + 0x28));
  OWL::TDC::_dtor((int *)local_28,2);
  *in_FS_OFFSET = local_4c;
  return;
}

} // namespace tea
