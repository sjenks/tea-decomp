// TEA.exe — application module "LicenseViewWindows"
// 10 functions, 0x004862b0..0x0048698c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004862b0  LicenseViewWindows::LicenseViewWindows   (435 bytes)   [rtti:vtable-store constructor]
//   constructor: stores LicenseViewWindows's vtable at its vptr offset (+0xc) in this
int * __cdecl LicenseViewWindows::LicenseViewWindows(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x503b5c);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x78);
    self[0x78] = (int)(self + 0x75);
    self[0x79] = (int)(self + 0x76);
    self[1] = (int)(self + 0x75);
    self[2] = (int)(self + 0x76);
    self[0x74] = 0;
    self[0x77] = 0;
    self[0x75] = (int)&OWL::TEventHandler::vftable;
    self[0x76] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x78,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x170;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x170;
  PropertiesViewWindows::PropertiesViewWindows(self,1,0x503a9c,param_3,param_4,(uint *)0x19a,0,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x170;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x170;
  self[3] = (int)&LicenseViewWindows::vftable;
  *(undefined ***)self[1] = &PTR_LAB_00503c80;
  *(undefined ***)self[2] = &PTR_LAB_00503c8c;
  *(undefined ***)(*self + 8) = &LicenseViewWindows::vftable_TWindow;
  self[0x18] = param_5;
  self[0x19] = param_6;
  OWL::TEdit::TEdit_4b6184(self + 0x1a,0,*self,0x604,0x33,0);
  OWL::TEdit::TEdit_4b6184((int *)((int)self + 0x11a),0,*self,0x60e,0xb,0);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00486488  LicenseViewWindows::~LicenseViewWindows   (312 bytes)   [rtti:dtor destructor]
//   written in code as LicenseViewWindows::_dtor
void __cdecl LicenseViewWindows::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x503b98);
  if (self != (int *)0x0) {
    self[3] = (int)&LicenseViewWindows::vftable;
    *(undefined ***)self[1] = &PTR_LAB_00503c80;
    *(undefined ***)self[2] = &PTR_LAB_00503c8c;
    *(undefined ***)(*self + 8) = &LicenseViewWindows::vftable_TWindow;
    OWL::TEdit::_dtor((int *)((int)self + 0x11a),2);
    OWL::TEdit::_dtor(self + 0x1a,2);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x170;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x170;
    PropertiesViewWindows::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x170;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x170;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x78,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x76,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004865c0  LicenseViewWindows::CloseWindow   (194 bytes)   [rtti:vtable virtual slot 9]
//   override of OWL::TWindow vtable slot 9, from LicenseViewWindows's OWL::TWindow subobject vtable at 0x00503c98 (through the this-adjusting thunk at 0x00486717); slot name identified from OWL::TWindow's own implementation of that slot
//   also: LicenseViewWindows::vf8 [rtti:vtable]
void __cdecl LicenseViewWindows::CloseWindow(int *self,int param_2)

{
  int iVar1;
  uint key [3];
  uint owner [13];
  
  if (param_2 == 1) {
    GetWindowTextA(*(HWND *)(self[0x1a] + 0xc),(LPSTR)owner,0x34);
    GetWindowTextA(*(HWND *)(*(int *)((int)self + 0x11a) + 0xc),(LPSTR)key,0xc);
    iVar1 = CheckLicenseKey3((byte *)owner,(char *)key);
    if (iVar1 == 0) {
      (**(code **)(*(int *)(*(int *)(*self + 0x6c) + 0x1b) + 0x30))();
      return;
    }
    std::string::assign_cstr(self[0x18],owner);
    std::string::assign_cstr(self[0x19],key);
    (**(code **)(*(int *)(*(int *)(*self + 0x6c) + 0x1b) + 0x30))();
  }
  OWL::TDialog::CloseWindow(self,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004867cc  CheckLicenseKey   (21 bytes)   [analysis]
//   CheckLicenseKeyImpl
//   file placement: inferred (address adjacency)
undefined4 __cdecl CheckLicenseKey(byte *owner,char *key)

{
  bool bVar1;
  undefined3 regHigh;
  
  bVar1 = CheckLicenseKeyImpl(owner,key);
  return CONCAT31(regHigh,bVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004867e4  CheckLicenseKey2   (21 bytes)   [analysis]
//   CheckLicenseKeyImpl (second entry point)
//   file placement: inferred (address adjacency)
undefined4 __cdecl CheckLicenseKey2(byte *owner,char *key)

{
  bool bVar1;
  undefined3 regHigh;
  
  bVar1 = CheckLicenseKeyImpl(owner,key);
  return CONCAT31(regHigh,bVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004867fc  GetRichEditVersion2   (127 bytes)   [analysis]
//   2 when RICHED20.DLL can be loaded, else 1
//   file placement: inferred (address adjacency)
undefined4 __stdcall GetRichEditVersion2(void)

{
  UINT uMode;
  HMODULE hLibModule;
  undefined4 *sehChainHead;
  undefined4 uVar1;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x503d45);
  uMode = SetErrorMode(0x8001);
  hLibModule = LoadLibraryA("RICHED20.DLL");
  if (hLibModule < (HMODULE)0x21) {
    uVar1 = 1;
    SetErrorMode(uMode);
    *sehChainHead = sehPrevFrame;
  }
  else {
    FreeLibrary(hLibModule);
    uVar1 = 2;
    SetErrorMode(uMode);
    *sehChainHead = sehPrevFrame;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048687b  InitRichEditStreamer   (86 bytes)   [analysis]
//   static initialiser of the TRichEdit streamable class registration
//   file placement: inferred (address adjacency)
void __stdcall InitRichEditStreamer(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x503d95);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_00486b88;
  puVar1 = FUN_004dd5cc(1,0,0x421acc);
  puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  FUN_00499268((undefined4 *)&DAT_0051aeb9,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004868d1  DestroyRichEditStreamer   (82 bytes)   [analysis]
//   static destructor of the TRichEdit streamable class and DLL loader
//   file placement: inferred (address adjacency)
void __stdcall DestroyRichEditStreamer(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x503da9);
  OWL::TStreamableClass::_dtor(0x51aeb9,2);
  if (DAT_00503d24 != '\0') {
    OWL::TDllLoader_OWL_TRichEditModule::_dtor(0x51aeb8,2);
    DAT_00503d24 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00486924  OWL::TRichEdit::Streamer::Streamer   (102 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TRichEdit::Streamer's vtable at its vptr offset (+0x0) in this
//   file placement: inferred (address adjacency)
undefined4 * __cdecl OWL::TRichEdit::Streamer::Streamer(undefined4 *self,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x503de0);
  *self = &OWL::TStreamer::vftable;
  self[1] = param_2;
  *self = &OWL::TNewStreamer::vftable;
  *self = &OWL::TRichEdit::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004dd744((int)param_2,iVar2,(int *)&DAT_004027f0,(int *)&DAT_00421acc,0);
  self[2] = puVar1;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048698c  OWL::TRichEdit::TRichEdit_48698c   (284 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TRichEdit's vtable at its vptr offset (+0xc) in this
//   file placement: inferred (address adjacency)
int * __cdecl OWL::TRichEdit::TRichEdit_48698c(int *self,int vbasesBuilt)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x503df8);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x1e);
    self[0x1e] = (int)(self + 0x1b);
    self[0x1f] = (int)(self + 0x1c);
    self[1] = (int)(self + 0x1b);
    self[2] = (int)(self + 0x1c);
    self[0x1a] = 0;
    self[0x1d] = 0;
    self[0x1b] = (int)&OWL::TEventHandler::vftable;
    self[0x1c] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x1e,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
  OWL::TEditFile::TEditFile_4b917c(self,1);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
  self[3] = (int)&OWL::TRichEdit::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004fd2b4;
  *(undefined ***)self[2] = &PTR_LAB_004fd2c0;
  *(undefined ***)(*self + 8) = &PTR_LAB_004fd2cc;
  *sehChainHead = sehPrevFrame;
  return self;
}

} // namespace tea
