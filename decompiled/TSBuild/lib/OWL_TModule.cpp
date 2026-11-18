// TSBuild.exe — runtime / library code "OWL_TModule"
// 10 functions, 0x0044ecbc..0x00450b70. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0044ecbc  OWL::TModule::TModule   (205 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TModule's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TModule::TModule(undefined4 *self,uint *libFileName,char param_3,char param_4,char param_5)

{
  UINT uMode;
  HMODULE hModule;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x482ebc);
  *self = &OWL::TStreamableBase::vftable;
  *self = &OWL::TModule::vftable;
  self[1] = 0;
  if (param_3 == '\0') {
    self[2] = 0;
  }
  else {
    uMode = SetErrorMode(0x8001);
    hModule = LoadLibraryA((LPCSTR)libFileName);
    self[2] = hModule;
    if (((uint)self[2] < 0x21) && (param_4 != '\0')) {
      FUN_0045063c(libFileName);
    }
    SetErrorMode(uMode);
  }
  *(char *)(self + 3) = param_3;
  FUN_0044ef34((int)self,libFileName);
  if (param_5 != '\0') {
    FUN_0044e870((int)self);
  }
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ed8c  OWL::TModule::TModule_44ed8c   (115 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TModule's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TModule::TModule_44ed8c(undefined4 *self,uint *param_2,undefined4 param_3,char param_4)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x482f04);
  *self = &OWL::TStreamableBase::vftable;
  *self = &OWL::TModule::vftable;
  self[1] = 0;
  self[2] = param_3;
  *(undefined1 *)(self + 3) = 0;
  FUN_0044ef34((int)self,param_2);
  if (param_4 != '\0') {
    FUN_0044e870((int)self);
  }
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ee00  OWL::TModule::TModule_44ee00   (138 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TModule's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TModule::TModule_44ee00(undefined4 *self,uint *param_2,int param_3,undefined4 param_4,char param_5)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x482f28);
  *self = &OWL::TStreamableBase::vftable;
  *self = &OWL::TModule::vftable;
  self[1] = 0;
  self[2] = 0;
  *(undefined1 *)(self + 3) = 0;
  FUN_0044ef34((int)self,param_2);
  if (param_3 != 0) {
    FUN_0044efd0((int)self,param_3);
  }
  if (param_5 != '\0') {
    FUN_0044e870((int)self);
  }
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ee8c  OWL::TModule::~TModule   (140 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TModule::_dtor
void __cdecl OWL::TModule::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x482f4c);
  if (self != (undefined4 *)0x0) {
    *self = &OWL::TModule::vftable;
    if ((*(char *)(self + 3) != '\0') && (0x20 < (uint)self[2])) {
      FreeLibrary((HMODULE)self[2]);
    }
    operator_delete_array();
    FUN_0044ea78((int)self);
    OWL::TStreamableBase::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f028  OWL::TModule::vf1   (121 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TModule::vf1(int self,int *param_2,uint param_3,uint param_4)

{
  int iVar1;
  LPCSTR caption;
  char *pcVar3;
  CHAR multiByteStr [80];
  CHAR multiByteStr2 [80];
  
  if (param_3 == 0) {
    param_3 = 0x7ffc;
  }
  if (param_4 == 0) {
    pcVar3 = (char *)0x0;
  }
  else {
    iVar1 = FUN_0044f0b4(self,param_4,multiByteStr,0x50);
    if (iVar1 == 0) {
      pcVar3 = "OK to Resume\?";
    }
    else {
      pcVar3 = multiByteStr;
    }
  }
  iVar1 = FUN_0044f0b4(self,param_3,multiByteStr2,0x50);
  if (iVar1 == 0) {
    caption = (LPCSTR)0x0;
  }
  else {
    caption = multiByteStr2;
  }
  FUN_00422fa8(param_2,caption,pcVar3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004508dc  OWL::TModule::Streamer::Streamer   (102 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TModule::Streamer's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TModule::Streamer::Streamer(undefined4 *self,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x483404);
  *self = &OWL::TStreamer::vftable;
  self[1] = param_2;
  *self = &OWL::TNewStreamer::vftable;
  *self = &OWL::TModule::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_00468488((int)param_2,iVar2,(int *)&DAT_00403c1c,(int *)&DAT_00404d74,0);
  self[2] = puVar1;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450944  OWL::TModule::TModule_450944   (62 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TModule's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TModule::TModule_450944(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x48341c);
  *self = &OWL::TStreamableBase::vftable;
  *self = &OWL::TModule::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004509f0  OWL::TModule::Streamer::vf1   (72 bytes)   [rtti:vtable virtual slot 1]
int __cdecl OWL::TModule::Streamer::vf1(int self,int *param_2)

{
  int iVar1;
  int iVar2;
  HMODULE hModule;
  
  iVar1 = *(int *)(self + 8);
  FUN_00439490(param_2,(undefined4 *)(iVar1 + 4));
  iVar2 = FUN_0042db04(param_2);
  *(bool *)(iVar1 + 0xc) = iVar2 != 0;
  if (*(char *)(iVar1 + 0xc) != '\0') {
    hModule = LoadLibraryA(*(LPCSTR *)(iVar1 + 4));
    *(HMODULE *)(iVar1 + 8) = hModule;
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450a38  OWL::TModule::Streamer::vf2   (59 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TModule::Streamer::vf2(int self,int *param_2)

{
  undefined4 local_8;
  
  local_8 = *(undefined4 *)(*(int *)(self + 8) + 4);
  FUN_004394f4(param_2,&local_8);
  FUN_0042df1c(param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450b70  OWL::TModule::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TModule::Streamer::vf3(void)

{
  return 1;
}

} // namespace tea
