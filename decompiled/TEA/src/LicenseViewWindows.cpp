// TEA.exe — application module "LicenseViewWindows"
// 9 functions, 0x00486488..0x0048698c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00486488  LicenseViewWindows::~LicenseViewWindows   (312 bytes)   [rtti:dtor destructor]
//   written in code as LicenseViewWindows::_dtor
void __cdecl LicenseViewWindows::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x503b98);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&LicenseViewWindows::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_00503c80;
    *(undefined ***)param_1[2] = &PTR_LAB_00503c8c;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_00503c98;
    OWL::TEdit::_dtor((int *)((int)param_1 + 0x11a),2);
    OWL::TEdit::_dtor(param_1 + 0x1a,2);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x170;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x170;
    PropertiesViewWindows::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x170;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x170;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x78,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x76,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004865c0  LicenseViewWindows::vf8   (194 bytes)   [rtti:vtable virtual slot 8]
void __cdecl LicenseViewWindows::vf8(int *param_1,int param_2)

{
  int iVar1;
  uint local_44 [3];
  uint local_38 [13];
  
  if (param_2 == 1) {
    GetWindowTextA(*(HWND *)(param_1[0x1a] + 0xc),(LPSTR)local_38,0x34);
    GetWindowTextA(*(HWND *)(*(int *)((int)param_1 + 0x11a) + 0xc),(LPSTR)local_44,0xc);
    iVar1 = FUN_0048609c((byte *)local_38,(char *)local_44);
    if (iVar1 == 0) {
      (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
      return;
    }
    FUN_004cf41c(param_1[0x18],local_38);
    FUN_004cf41c(param_1[0x19],local_44);
    (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
  }
  OWL::TDialog::vf8(param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004867cc  FUN_004867cc   (21 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_004867cc(byte *param_1,char *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_004860b4(param_1,param_2);
  return CONCAT31(extraout_var,bVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004867e4  FUN_004867e4   (21 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_004867e4(byte *param_1,char *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_004860b4(param_1,param_2);
  return CONCAT31(extraout_var,bVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004867fc  FUN_004867fc   (127 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __stdcall FUN_004867fc(void)

{
  UINT uMode;
  HMODULE hLibModule;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x503d45);
  uMode = SetErrorMode(0x8001);
  hLibModule = LoadLibraryA("RICHED20.DLL");
  if (hLibModule < (HMODULE)0x21) {
    uVar1 = 1;
    SetErrorMode(uMode);
    *in_FS_OFFSET = local_2c;
  }
  else {
    FreeLibrary(hLibModule);
    uVar1 = 2;
    SetErrorMode(uMode);
    *in_FS_OFFSET = local_2c;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048687b  FUN_0048687b   (86 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_0048687b(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x503d95);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_00486b88;
  puVar1 = FUN_004dd5cc(1,0,0x421acc);
  puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  FUN_00499268((undefined4 *)&DAT_0051aeb9,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004868d1  FUN_004868d1   (82 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_004868d1(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x503da9);
  OWL::TStreamableClass::_dtor(0x51aeb9,2);
  if (DAT_00503d24 != '\0') {
    OWL::TDllLoader_OWL_TRichEditModule::_dtor(0x51aeb8,2);
    DAT_00503d24 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00486924  FUN_00486924   (102 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00486924(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x503de0);
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
  puVar1 = FUN_004dd744((int)param_2,iVar2,(int *)&DAT_004027f0,(int *)&DAT_00421acc,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048698c  FUN_0048698c   (284 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_0048698c(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x503df8);
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
    FUN_004a4fbc(param_1 + 0x1e,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_004b917c(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&OWL::TRichEdit::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004fd2b4;
  *(undefined ***)param_1[2] = &PTR_LAB_004fd2c0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fd2cc;
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea
