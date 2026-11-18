// TEA.exe — application module "PropertiesViewWindows"
// 75 functions, 0x00413c7c..0x004178ac. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00413c7c  PropertiesViewWindows::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: PropertiesViewWindows::Find [rtti:vtable]; PropertiesViewWindows::vf14 [rtti:vtable]
undefined4 __cdecl PropertiesViewWindows::Find(undefined4 *self,int *eventInfo,undefined *equal)

{
  undefined4 found;
  
  eventInfo[2] = (int)self;
  found = FUN_0048e808(self[1],(int *)&PropertiesViewWindows::__entries,eventInfo,equal);
  if (((char)found == '\0') && (found = OWL::TDialog::Find(self,eventInfo,equal), (char)found == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413cc4  PropertiesViewWindows::EvMsg_19   (13 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   message 0x0019
void __stdcall PropertiesViewWindows::EvMsg_19(int self)

{
                    /* WARNING: Could not recover jumptable at 0x00413ccb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(self + 0xc) + 0x9c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413cd4  PropertiesViewWindows::EvSize_413cd4   (13 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_SIZE
//   also: TEAViewWindows::EvSize [owl:response-table]
void __stdcall PropertiesViewWindows::EvSize_413cd4(int self)

{
                    /* WARNING: Could not recover jumptable at 0x00413cdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(self + 0xc) + 0xa0))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413ce4  PropertiesViewWindows::Cmd1530   (13 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   EV_COMMAND(1530)
void __stdcall PropertiesViewWindows::Cmd1530(int self)

{
                    /* WARNING: Could not recover jumptable at 0x00413ceb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(self + 0xc) + 0xb4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413cf4  PropertiesViewWindows::PropertiesViewWindows   (521 bytes)   [rtti:vtable-store constructor]
//   constructor: stores PropertiesViewWindows's vtable at its vptr offset (+0xc) in this
/* WARNING: Removing unreachable block (ram,0x00413e3c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd0 : 0x00413e44 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int * __cdecl PropertiesViewWindows::PropertiesViewWindows(int *self,int vbasesBuilt,int param_3,undefined4 param_4,int param_5,uint *param_6, int param_7,int param_8)

{
  int *tooltip;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ed5c8);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x1c);
    self[0x1c] = (int)(self + 0x19);
    self[0x1d] = (int)(self + 0x1a);
    self[1] = (int)(self + 0x19);
    self[2] = (int)(self + 0x1a);
    self[0x18] = 0;
    self[0x1b] = 0;
    self[0x19] = (int)&OWL::TEventHandler::vftable;
    self[0x1a] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x1c,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x48;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x48;
  OWL::TDialog::TDialog(self,1,param_4,param_6,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x48;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x48;
  self[3] = (int)&PropertiesViewWindows::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004f0ce8;
  *(undefined ***)self[2] = &PTR_LAB_004f0cf4;
  *(undefined ***)(*self + 8) = &PropertiesViewWindows::vftable_TWindow;
  self[7] = 0;
  self[8] = 0;
  self[0xc] = 0;
  self[6] = 0x100;
  self[0xe] = param_5;
  self[0xf] = 0;
  self[0x10] = 0;
  self[0x11] = 0;
  self[0x12] = (int)param_6;
  self[0x13] = param_7;
  self[0x14] = param_3;
  self[0x15] = param_8;
  self[0x16] = 0;
  if ((self[0x15] != 0) && (self[0x13] == 0)) {
    tooltip = (int *)operator_new();
    if (tooltip != (int *)0x0) {
      OWL::TTooltip::TTooltip(tooltip,0,*self,'\x01',0);
    }
    self[0x16] = (int)tooltip;
    FUN_004a7910(*tooltip,2);
  }
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413f3c  PropertiesViewWindows::~PropertiesViewWindows   (459 bytes)   [rtti:dtor destructor]
//   written in code as PropertiesViewWindows::_dtor
void __cdecl PropertiesViewWindows::_dtor(int *self,uint dtorFlags)

{
  int iVar1;
  uint uVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ed630);
  if (self != (int *)0x0) {
    self[3] = (int)&PropertiesViewWindows::vftable;
    *(undefined ***)self[1] = &PTR_LAB_004f0ce8;
    *(undefined ***)self[2] = &PTR_LAB_004f0cf4;
    *(undefined ***)(*self + 8) = &PropertiesViewWindows::vftable_TWindow;
    if ((uint *)self[0xf] != (uint *)0x0) {
      OWL::TGdiObject::_dtor((uint *)self[0xf],0);
      operator_delete();
    }
    uVar2 = 0;
    while( true ) {
      iVar1 = self[8] - self[7];
      if (iVar1 < 0) {
        iVar1 = iVar1 + 3;
      }
      if ((uint)(iVar1 >> 2) <= uVar2) break;
      operator_delete();
      uVar2 = uVar2 + 1;
    }
    if (self[0x16] != 0) {
      (*(code *)**(undefined4 **)(self[0x16] + 0xc))();
    }
    std::_Destroy_range_ptr(self + 6,self[7],self[8]);
    operator_delete();
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x48;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x48;
    OWL::TDialog::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x48;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x48;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x1c,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x1a,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414108  vshared_414108   (35 bytes)   [rtti:vtable shared-virtual-stub; function defined from vtable-slot]
//   in vtables of 2 classes across unrelated hierarchies (OWL::TMenu, OWL::TXOutOfMemory)
//   file placement: inferred (address adjacency)
/* WARNING: Instruction at (ram,0x0041419c) overlaps instruction at (ram,0x0041419b)
    */
void vshared_414108(char *param_1,undefined4 param_2,char param_3)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar6;
  byte bVar7;
  undefined2 uVar8;
  char *extraout_EDX;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined1 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined1 *unaff_EDI;
  undefined4 *sehChainHead;
  bool bVar12;
  byte bVar13;
  int in_stack_00000000;
  byte *pbVar5;
  
  bVar13 = 0;
  *param_1 = *param_1 + (char)param_1;
  *(char *)((int)param_1 * 2) = *(char *)((int)param_1 * 2) + param_3;
  pbVar4 = (byte *)func_0x54418148();
  puVar9 = (undefined1 *)(unaff_ESI + 5 + (uint)bVar13 * -8);
  uVar8 = SUB42(extraout_EDX,0);
  out(*(undefined4 *)(unaff_ESI + 1),uVar8);
  puVar10 = (undefined4 *)(puVar9 + (uint)bVar13 * -2 + 1);
  out(*puVar9,uVar8);
  bVar7 = (byte)extraout_EDX;
  if ((undefined4 *)(unaff_ESI + 1) == (undefined4 *)0x0) {
code_r0x00414135:
    pbVar4[-0x1374aa70] = pbVar4[-0x1374aa70] + bVar7;
    unaff_EBX = *(int **)(in_stack_00000000 + 8);
    __InitExceptBlockLDTC(0x4ed690);
    bVar12 = unaff_EBX[0x15] == 0;
    unaff_EBP = in_stack_00000000;
code_r0x00414155:
    if ((bVar12) || (unaff_EBX[0x16] != 0)) goto LAB_004141ca;
    iVar6 = operator_new();
    *(int *)(unaff_EBP + -4) = iVar6;
    if (iVar6 == 0) {
      piVar11 = *(int **)(unaff_EBP + -4);
    }
    else {
      *(undefined2 *)(unaff_EBP + -0x18) = 0x14;
      OWL::TTooltip::TTooltip(*(int **)(unaff_EBP + -4),0,*(undefined4 *)(*unaff_EBX + 0x14),'\x01',0);
      *(undefined2 *)(unaff_EBP + -0x18) = 8;
      piVar11 = *(int **)(unaff_EBP + -4);
    }
    unaff_EBX[0x16] = (int)piVar11;
  }
  else {
    bVar3 = (char)pbVar4 - *pbVar4;
    pbVar5 = (byte *)CONCAT31((int3)((uint)pbVar4 >> 8),bVar3);
    *pbVar5 = *pbVar5 | bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    pbVar5[(int)extraout_EDX] = pbVar5[(int)extraout_EDX] + bVar3;
    *(char *)((int)unaff_EDI * 2) = *(char *)((int)unaff_EDI * 2) + (char)((uint)pbVar4 >> 8);
    *extraout_EDX = *extraout_EDX + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    pbVar4 = &GHIDRA_STACK(0x0000006f) + (int)extraout_EDX * 2;
    bVar3 = *pbVar4;
    bVar1 = *pbVar4;
    *pbVar4 = *pbVar4 + bVar7;
    bVar12 = *pbVar4 == 0;
    piVar11 = puVar10 + (uint)bVar13 * -2 + 1;
    out(*puVar10,uVar8);
    uVar2 = in(uVar8);
    *unaff_EDI = uVar2;
    if (!bVar12) {
      pbVar4 = pbVar5;
      if (!SCARRY1(bVar1,bVar7)) goto code_r0x00414135;
      goto code_r0x00414155;
    }
    if (!CARRY1(bVar3,bVar7)) {
      return;
    }
  }
  FUN_004a7910(*piVar11,2);
  (**(code **)(*(int *)(*(int *)unaff_EBX[0x16] + 8) + 0x10))();
  SetTooltipMaxWidth(unaff_EBX,*(HWND *)(*(int *)unaff_EBX[0x16] + 0xc));
LAB_004141ca:
  (**(code **)(*(int *)(*unaff_EBX + 8) + 100))();
  BringWindowToTop(*(HWND *)(*unaff_EBX + 0xc));
  unaff_EBX[0x10] = 1;
  *sehChainHead = *(undefined4 *)(unaff_EBP + -0x28);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041413c  PropertiesViewWindows::SetupTooltips   (190 bytes)   [rtti:vtable virtual slot 15]
//   vtable slot 15; creates the tooltip control for the window's controls (overrides add their own start-up work)
void __cdecl PropertiesViewWindows::SetupTooltips(int *self)

{
  int *tooltip;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ed690);
  if ((self[0x15] != 0) && (self[0x16] == 0)) {
    tooltip = (int *)operator_new();
    if (tooltip != (int *)0x0) {
      OWL::TTooltip::TTooltip(tooltip,0,*(undefined4 *)(*self + 0x14),'\x01',0);
    }
    self[0x16] = (int)tooltip;
    FUN_004a7910(*tooltip,2);
    (**(code **)(*(int *)(*(int *)self[0x16] + 8) + 0x10))();
    SetTooltipMaxWidth(self,*(HWND *)(*(int *)self[0x16] + 0xc));
  }
  (**(code **)(*(int *)(*self + 8) + 100))();
  BringWindowToTop(*(HWND *)(*self + 0xc));
  self[0x10] = 1;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004141fc  PropertiesViewWindows::DestroyTooltips   (104 bytes)   [rtti:vtable virtual slot 16]
//   vtable slot 16; destroys the tooltip control
void __cdecl PropertiesViewWindows::DestroyTooltips(int *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ed6c0);
  if (self[0x16] != 0) {
    (*(code *)**(undefined4 **)(self[0x16] + 0xc))();
  }
  self[0x16] = 0;
  self[0x10] = 2;
  (**(code **)(*(int *)(*self + 8) + 100))();
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414264  PropertiesViewWindows::IsTooltipActive   (18 bytes)   [rtti:vtable virtual slot 17]
//   vtable slot 17; whether the tooltips are on (+0x40 == 1)
bool __cdecl PropertiesViewWindows::IsTooltipActive(int self)

{
  return *(int *)(self + 0x40) == 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414278  ListFilesInDirectory   (1013 bytes)   [analysis]
//   the file names matching a pattern in a folder (FindFirstFile/FindNextFile), sorted in collation order
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x004142b9) */
/* WARNING: Removing unreachable block (ram,0x00414554) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff4c : 0x00414562 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 * __cdecl ListFilesInDirectory(undefined4 *result,int pattern)

{
  int refs;
  uint first2;
  uint uVar3;
  HANDLE hFindFile;
  int value;
  BOOL ok;
  int *strRep;
  undefined4 *sehChainHead;
  _WIN32_FIND_DATAA findData;
  uint unused;
  undefined4 *local_c0;
  int local_bc;
  undefined4 unused2;
  undefined4 unused3;
  undefined1 *unused4;
  undefined4 unused5;
  int unused6;
  undefined4 *dest;
  undefined4 *src;
  uint unused7;
  uint unused8;
  int *newRep;
  int *newData;
  int *strRep2;
  uint unused9;
  undefined4 local_7c;
  undefined4 unused10;
  uint unused11;
  undefined4 unused12;
  undefined4 unused13;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined **badAlloc;
  uint local_38;
  undefined1 str [8];
  int str2;
  undefined4 vec;
  uint first;
  uint local_1c;
  uint local_c;
  
  __InitExceptBlockLDTC(0x4ed74c);
  first = 0;
  local_1c = 0;
  local_c = 0;
  unused13 = 0x40;
  unused12 = 1;
  vec = 0x40;
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x20;
  hFindFile = FindFirstFileA(*(LPCSTR *)(pattern + 8),&findData);
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      ehContext = 0x2c;
      value = std::string::string_from_cstr((int)str,(uint *)findData.cFileName);
      ehDtorCount = ehDtorCount + 1;
      if (local_1c == local_c) {
        std::vector_string::insert_aux((int)&vec,local_1c,value);
      }
      else {
        unused11 = local_1c;
        local_38 = local_1c;
        if (local_1c != 0) {
          ehContext = 0x38;
          unused10 = 0;
          *(undefined4 *)(local_1c + 8) = 0;
          refs = *(int *)(*(int *)(value + 8) + -0xc);
          if (refs == -1 || refs + 1 < 0) {
            first2 = *(uint *)(*(int *)(value + 8) + -4);
            newRep = std::string::__getRep(local_1c,first2,first2);
            newData = newRep + 3;
            *(int **)(local_38 + 8) = newData;
            unused8 = local_38;
            src = *(undefined4 **)(value + 8);
            dest = *(undefined4 **)(local_38 + 8);
            unused7 = first2;
            memcpy(dest,src,first2);
          }
          else {
            local_7c = *(undefined4 *)(value + 8);
            *(undefined4 *)(local_1c + 8) = local_7c;
            unused9 = local_1c;
            strRep2 = (int *)(*(int *)(local_1c + 8) + -0xc);
            if (strRep2 != &g_nullStringRep) {
              *strRep2 = *strRep2 + 1;
            }
          }
          ehContext = 0x2c;
        }
        local_1c = local_1c + 0x10;
      }
      ehDtorCount = ehDtorCount + -1;
      if (str2 != 0) {
        if (*(int *)(str2 + -0xc) != -1) {
          strRep = (int *)(str2 + -0xc);
          if (strRep == &g_nullStringRep) {
            value = 1;
          }
          else if (strRep == &g_nullStringRep) {
            value = 1;
          }
          else {
            *strRep = *strRep + -1;
            value = *strRep + 1;
          }
          if (value != 0) goto LAB_004144b8;
        }
        unused6 = str2 + -0xc;
        operator_delete();
        unused5 = 0;
        unused4 = str;
        str2 = 0;
      }
LAB_004144b8:
      ehContext = 0x20;
      ok = FindNextFileA(hFindFile,&findData);
    } while (ok != 0);
    FindClose(hFindFile);
  }
  uVar3 = local_1c;
  first2 = first;
  if (local_1c != first) {
    std::unique_collation(first,local_1c);
    std::sort_collation(first2,uVar3);
  }
  ehContext = 0x5c;
  result[1] = 0;
  result[2] = 0;
  result[6] = 0;
  unused3 = 0x40;
  unused2 = 1;
  *result = 0x40;
  local_bc = local_1c - first;
  if (local_bc < 0) {
    local_bc = local_bc + 0xf;
  }
  local_bc = local_bc >> 4;
  value = operator_new();
  if (value == 0) {
    badAlloc = &std::bad_alloc::vftable;
    ehDtorCount = ehDtorCount + 2;
    _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
  }
  result[1] = value;
  value = std::uninitialized_copy_string(first,local_1c,result[1]);
  result[2] = value;
  local_c0 = result + 2;
  result[6] = *local_c0;
  ehContext = 0x74;
  std::_Destroy_range_string(&vec,first,local_1c);
  unused = first;
  operator_delete();
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x004146a0  std::sort_collation   (103 bytes)   [analysis]
//   sorts a range of strings in collation order (std::sort; inferred)
//   file placement: inferred (address adjacency)
void __cdecl std::sort_collation(int first,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 - first;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  if (iVar1 >> 4 < 0x11) {
    std::__introsort_loop_collation(first,param_2);
  }
  else {
    std::__introsort_loop_collation(first,first + 0x100);
    std::__final_insertion_sort_collation(first + 0x100,param_2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414708  std::__introsort_loop_collation   (714 bytes)   [analysis]
//   quicksort loop of std::sort in collation order (inferred)
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl std::__introsort_loop_collation(int first,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *newRep;
  int last;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 *sehChainHead;
  undefined4 other;
  undefined4 uVar8;
  undefined4 sehPrevFrame;
  undefined1 local_14 [8];
  byte *local_c;
  
  __InitExceptBlockLDTC(0x4ed7f8);
  iVar2 = first;
  if (first == param_2) {
LAB_004149c2:
    *sehChainHead = sehPrevFrame;
    return;
  }
joined_r0x00414733:
  do {
    last = iVar2 + 0x10;
    if (last == param_2) goto LAB_004149c2;
    local_c = (byte *)0x0;
    iVar3 = *(int *)(*(int *)(iVar2 + 0x18) + -0xc);
    if (iVar3 == -1 || iVar3 + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(iVar2 + 0x18) + -4);
      newRep = std::string::__getRep(local_14,uVar1,uVar1);
      local_c = (byte *)(newRep + 3);
      memcpy((undefined4 *)local_c,*(undefined4 **)(iVar2 + 0x18),uVar1);
    }
    else {
      local_c = *(byte **)(iVar2 + 0x18);
      pbVar6 = local_c + -0xc;
      if (pbVar6 != (byte *)&g_nullStringRep) {
        *(int *)pbVar6 = *(int *)pbVar6 + 1;
      }
    }
    uVar8 = 0x414811;
    iVar3 = CollationCompare(local_c,*(int *)(local_c + -4),*(byte **)(first + 8),
                         *(int *)(*(int *)(first + 8) + -4));
    if (iVar3 < 0) {
      std::copy_backward_string(first,last,iVar2 + 0x20);
      std::string::operator_assign(first,(int)local_14);
    }
    else {
      if (*(int *)(local_c + -0xc) == -1 || *(int *)(local_c + -0xc) + 1 < 0) {
        uVar1 = *(uint *)(local_c + -4);
        newRep = std::string::__getRep(&GHIDRA_STACK(0xfffffeec),uVar1,uVar1);
        pbVar6 = (byte *)(newRep + 3);
        memcpy((undefined4 *)pbVar6,(undefined4 *)local_c,uVar1);
      }
      else {
        pbVar7 = local_c + -0xc;
        pbVar6 = local_c;
        if (pbVar7 != (byte *)&g_nullStringRep) {
          *(int *)pbVar7 = *(int *)pbVar7 + 1;
        }
      }
      std::__unguarded_linear_insert_collation(last,other,uVar8,pbVar6);
    }
    iVar2 = last;
    if (local_c != (byte *)0x0) {
      if (*(int *)(local_c + -0xc) != -1) {
        pbVar6 = local_c + -0xc;
        if (pbVar6 == (byte *)&g_nullStringRep) {
          last = 1;
        }
        else if (pbVar6 == (byte *)&g_nullStringRep) {
          last = 1;
        }
        else {
          *(int *)pbVar6 = *(int *)pbVar6 + -1;
          last = *(int *)pbVar6 + 1;
        }
        if (last != 0) goto joined_r0x00414733;
      }
      operator_delete();
    }
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004149d4  std::__unguarded_linear_insert_collation   (246 bytes)   [analysis]
//   insertion step of std::sort in collation order (inferred)
//   file placement: inferred (address adjacency)
void __cdecl std::__unguarded_linear_insert_collation(int str,undefined4 other,undefined4 param_3,byte *param_4)

{
  int iVar1;
  byte *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ed858);
  while( true ) {
    iVar1 = CollationCompare(param_4,*(int *)(param_4 + -4),*(byte **)(str + -8),
                         *(int *)(*(int *)(str + -8) + -4));
    if (-1 < iVar1) break;
    std::string::operator_assign(str,str + -0x10);
    str = str + -0x10;
  }
  std::string::operator_assign(str,(int)&other);
  if (param_4 != (byte *)0x0) {
    if (*(int *)(param_4 + -0xc) != -1) {
      strRep = param_4 + -0xc;
      if (strRep == (byte *)&g_nullStringRep) {
        iVar1 = 1;
      }
      else if (strRep == (byte *)&g_nullStringRep) {
        iVar1 = 1;
      }
      else {
        *(int *)strRep = *(int *)strRep + -1;
        iVar1 = *(int *)strRep + 1;
      }
      if (iVar1 != 0) goto LAB_00414ab3;
    }
    operator_delete();
  }
LAB_00414ab3:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414acc  std::__final_insertion_sort_collation   (265 bytes)   [analysis]
//   insertion sort finish of std::sort (inferred)
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl std::__final_insertion_sort_collation(int str,int param_2)

{
  int refs;
  uint len;
  int *newRep;
  byte *pbVar4;
  undefined4 *sehChainHead;
  undefined4 other;
  undefined4 in_stack_ffffff70;
  byte *pbVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ed888);
  for (; str != param_2; str = str + 0x10) {
    refs = *(int *)(*(int *)(str + 8) + -0xc);
    if (refs == -1 || refs + 1 < 0) {
      len = *(uint *)(*(int *)(str + 8) + -4);
      newRep = std::string::__getRep(&GHIDRA_STACK(0xffffff6c),len,len);
      pbVar5 = (byte *)(newRep + 3);
      memcpy((undefined4 *)pbVar5,*(undefined4 **)(str + 8),len);
    }
    else {
      pbVar5 = *(byte **)(str + 8);
      pbVar4 = pbVar5 + -0xc;
      if (pbVar4 != (byte *)&g_nullStringRep) {
        *(int *)pbVar4 = *(int *)pbVar4 + 1;
      }
    }
    std::__unguarded_linear_insert_collation(str,other,in_stack_ffffff70,pbVar5);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414bd8  std::unique_collation   (682 bytes)   [analysis]
//   removes adjacent strings equal in collation order (inferred)
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl std::unique_collation(uint str,uint str2)

{
  byte *pbVar1;
  int *newRep;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint str3;
  undefined4 *sehChainHead;
  undefined4 in_stack_ffffff4c;
  uint in_stack_ffffff50;
  byte *pbVar7;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ed8c4);
  while( true ) {
    iVar3 = str2 - str;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    if (iVar3 >> 4 < 0x11) break;
    iVar3 = str2 - str;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    iVar5 = iVar3 >> 5;
    if (iVar5 < 0) {
      iVar5 = iVar5 + (uint)((iVar3 >> 4 & 1U) != 0);
    }
    str3 = iVar5 * 0x10 + str;
    iVar3 = CollationCompare(*(byte **)(str + 8),*(int *)(*(int *)(str + 8) + -4),
                         *(byte **)(str3 + 8),*(int *)(*(int *)(str3 + 8) + -4));
    if (iVar3 < 0) {
      iVar3 = CollationCompare(*(byte **)(str3 + 8),*(int *)(*(int *)(str3 + 8) + -4),
                           *(byte **)(str2 - 8),*(int *)(*(int *)(str2 - 8) + -4));
      uVar4 = str3;
      if ((-1 < iVar3) &&
         (iVar3 = CollationCompare(*(byte **)(str + 8),*(int *)(*(int *)(str + 8) + -4),
                               *(byte **)(str2 - 8),*(int *)(*(int *)(str2 - 8) + -4)),
         uVar4 = str, iVar3 < 0)) {
        uVar4 = str2 - 0x10;
      }
    }
    else {
      iVar3 = CollationCompare(*(byte **)(str + 8),*(int *)(*(int *)(str + 8) + -4),
                           *(byte **)(str2 - 8),*(int *)(*(int *)(str2 - 8) + -4));
      uVar4 = str;
      if ((-1 < iVar3) &&
         (iVar3 = CollationCompare(*(byte **)(str3 + 8),*(int *)(*(int *)(str3 + 8) + -4),
                               *(byte **)(str2 - 8),*(int *)(*(int *)(str2 - 8) + -4)),
         uVar4 = str3, iVar3 < 0)) {
        uVar4 = str2 - 0x10;
      }
    }
    iVar3 = *(int *)(*(int *)(uVar4 + 8) + -0xc);
    if (iVar3 == -1 || iVar3 + 1 < 0) {
      str3 = *(uint *)(*(int *)(uVar4 + 8) + -4);
      newRep = std::string::__getRep(&GHIDRA_STACK(0xffffff4c),str3,str3);
      pbVar7 = (byte *)(newRep + 3);
      memcpy((undefined4 *)pbVar7,*(undefined4 **)(uVar4 + 8),str3);
    }
    else {
      pbVar7 = *(byte **)(uVar4 + 8);
      pbVar1 = pbVar7 + -0xc;
      if (pbVar1 != (byte *)&g_nullStringRep) {
        *(int *)pbVar1 = *(int *)pbVar1 + 1;
      }
    }
    str3 = std::__median_collation(str,str2,in_stack_ffffff4c,in_stack_ffffff50,pbVar7);
    iVar3 = str3 - str;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    iVar5 = str2 - str3;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    if (iVar3 >> 4 < iVar5 >> 4) {
      in_stack_ffffff4c = 0x414e52;
      in_stack_ffffff50 = str;
      std::unique_collation(str,str3);
      str = str3;
    }
    else {
      in_stack_ffffff4c = 0x414e36;
      in_stack_ffffff50 = str3;
      std::unique_collation(str3,str2);
      str2 = str3;
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414e84  std::__median_collation   (658 bytes)   [analysis]
//   median of three strings in collation order (inferred)
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
uint __cdecl std::__median_collation(uint str,uint str2,undefined4 param_3,undefined4 param_4,byte *param_5)

{
  int iVar1;
  int *strRep;
  byte *strRep2;
  uint uVar4;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 local_14 [8];
  int *str3;
  
  __InitExceptBlockLDTC(0x4ed910);
  while( true ) {
    while (iVar1 = CollationCompare(*(byte **)(str + 8),*(int *)(*(int *)(str + 8) + -4),param_5
                                ,*(int *)(param_5 + -4)), uVar4 = str2, iVar1 < 0) {
      str = str + 0x10;
    }
    do {
      str2 = uVar4 - 0x10;
      iVar1 = CollationCompare(param_5,*(int *)(param_5 + -4),*(byte **)(uVar4 - 8),
                           *(int *)(*(int *)(uVar4 - 8) + -4));
      uVar4 = str2;
    } while (iVar1 < 0);
    if (str2 <= str) break;
    str3 = (int *)0x0;
    iVar1 = *(int *)(*(int *)(str + 8) + -0xc);
    if (iVar1 == -1 || iVar1 + 1 < 0) {
      uVar4 = *(uint *)(*(int *)(str + 8) + -4);
      str3 = std::string::__getRep(local_14,uVar4,uVar4);
      str3 = str3 + 3;
      memcpy(str3,*(undefined4 **)(str + 8),uVar4);
    }
    else {
      str3 = *(int **)(str + 8);
      strRep = str3 + -3;
      if (strRep != &g_nullStringRep) {
        *strRep = *strRep + 1;
      }
    }
    std::string::operator_assign(str,str2);
    std::string::operator_assign(str2,(int)local_14);
    if (str3 != (int *)0x0) {
      if (str3[-3] != -1) {
        strRep = str3 + -3;
        if (strRep == &g_nullStringRep) {
          iVar1 = 1;
        }
        else if (strRep == &g_nullStringRep) {
          iVar1 = 1;
        }
        else {
          *strRep = *strRep + -1;
          iVar1 = *strRep + 1;
        }
        if (iVar1 != 0) goto LAB_00415101;
      }
      operator_delete();
      str3 = (int *)0x0;
    }
LAB_00415101:
    str = str + 0x10;
  }
  if (param_5 != (byte *)0x0) {
    if (*(int *)(param_5 + -0xc) != -1) {
      strRep2 = param_5 + -0xc;
      if (strRep2 == (byte *)&g_nullStringRep) {
        iVar1 = 1;
      }
      else if (strRep2 == (byte *)&g_nullStringRep) {
        iVar1 = 1;
      }
      else {
        *(int *)strRep2 = *(int *)strRep2 + -1;
        iVar1 = *(int *)strRep2 + 1;
      }
      if (iVar1 != 0) goto LAB_00414f97;
    }
    operator_delete();
  }
LAB_00414f97:
  *sehChainHead = sehPrevFrame;
  return str;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415118  PropertiesViewWindows::UpdateControlCallback   (59 bytes)   [analysis]
//   ForEach callback over the dialog's children (by control id)
//   file placement: inferred (address adjacency)
void __cdecl PropertiesViewWindows::UpdateControlCallback(int child)

{
  int ctrlId;
  
  ctrlId = GetDlgCtrlID(*(HWND *)(child + 0xc));
  if (((ctrlId != 2) && (ctrlId != 0x286e)) && (ctrlId != 0x5fa)) {
    (**(code **)(*(int *)(child + 8) + 0x60))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415154  PropertiesViewWindows::EnableControls   (30 bytes)   [rtti:vtable virtual slot 18]
//   vtable slot 18; enables or disables the window's controls
void __cdecl PropertiesViewWindows::EnableControls(int *self)

{
  FUN_004a75d0(*self,(undefined*)PropertiesViewWindows::UpdateControlCallback);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415174  PropertiesViewWindows::OnButton   (5 bytes)   [rtti:vtable virtual slot 19]
//   vtable slot 19; a push button, check box or radio button was clicked (PVW*::BNClicked call it with the control id)
void __stdcall PropertiesViewWindows::OnButton(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041517c  PropertiesViewWindows::OnStaticClicked   (5 bytes)   [rtti:vtable virtual slot 20]
//   vtable slot 20; a PVWStatic was clicked (PVWStatic::BNClicked)
void __stdcall PropertiesViewWindows::OnStaticClicked(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415184  PropertiesViewWindows::OnEditKillFocus   (5 bytes)   [rtti:vtable virtual slot 21]
//   vtable slot 21; an edit or rich edit lost the focus (EN_KILLFOCUS from PVWEdit/PVWRichEdit)
void __stdcall PropertiesViewWindows::OnEditKillFocus(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041518c  PropertiesViewWindows::OnEditChange   (5 bytes)   [rtti:vtable virtual slot 22]
//   vtable slot 22; an edit or rich edit's text changed (EN_CHANGE from PVWEdit/PVWRichEdit)
void __stdcall PropertiesViewWindows::OnEditChange(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415194  PropertiesViewWindows::OnDoubleClick   (7 bytes)   [rtti:vtable virtual slot 23]
//   vtable slot 23; a rich edit was double-clicked (PVWRichEdit::EvLButtonDblClk)
undefined4 __stdcall PropertiesViewWindows::OnDoubleClick(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041519c  PropertiesViewWindows::OnUpDown   (5 bytes)   [rtti:vtable virtual slot 24]
//   vtable slot 24; an up-down control changed (control id); the main view treats it like leaving the buddy edit
void __stdcall PropertiesViewWindows::OnUpDown(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004151a4  PropertiesViewWindows::OnNotify25   (7 bytes)   [rtti:vtable virtual slot 25]
//   vtable slot 25; control notification slot 25 (no override examined; meaning not established)
undefined4 __stdcall PropertiesViewWindows::OnNotify25(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004151ac  PropertiesViewWindows::OnNotify26   (5 bytes)   [rtti:vtable virtual slot 26]
//   vtable slot 26; control notification slot 26 (no override; meaning not established)
void __stdcall PropertiesViewWindows::OnNotify26(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004151b4  PropertiesViewWindows::OnColourChanged   (5 bytes)   [rtti:vtable virtual slot 27]
//   vtable slot 27; a colour button chose a new colour
void __stdcall PropertiesViewWindows::OnColourChanged(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004151bc  PropertiesViewWindows::OnFontChanged   (5 bytes)   [rtti:vtable virtual slot 28]
//   vtable slot 28; a font button chose a new font
void __stdcall PropertiesViewWindows::OnFontChanged(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004151c4  PropertiesViewWindows::OnComboChange   (5 bytes)   [rtti:vtable virtual slot 29]
//   vtable slot 29; a combo box selection changed
void __stdcall PropertiesViewWindows::OnComboChange(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004151cc  PropertiesViewWindows::OnNotify30   (7 bytes)   [rtti:vtable virtual slot 30]
//   vtable slot 30; control notification slot 30 (no override examined; meaning not established)
undefined4 __stdcall PropertiesViewWindows::OnNotify30(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004151d4  PropertiesViewWindows::OnMouseOverControl   (7 bytes)   [rtti:vtable virtual slot 31]
//   vtable slot 31; the mouse moved over a control (PVWPathListBox::EvMouseMove); used to show its tip
undefined4 __stdcall PropertiesViewWindows::OnMouseOverControl(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004151dc  PropertiesViewWindows::OnTextClicked   (36 bytes)   [rtti:vtable virtual slot 32]
//   vtable slot 32; text of a control was clicked (Quick Reference: puts the clicked example into the query)
void __cdecl PropertiesViewWindows::OnTextClicked(undefined4 self,undefined4 param_2,LPCSTR file)

{
  if ((file != (LPCSTR)0x0) && (*file != '\0')) {
    ShellExecuteA((HWND)0x0,&DAT_004ed2ba /* "open" */,file,(LPCSTR)0x0,(LPCSTR)0x0,9);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415200  PropertiesViewWindows::OnPathListChanged   (5 bytes)   [rtti:vtable virtual slot 37]
//   vtable slot 37; the dictionary path list changed (PVWPathList::Refresh)
void __stdcall PropertiesViewWindows::OnPathListChanged(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415208  PropertiesViewWindows::IsResizable   (7 bytes)   [rtti:vtable virtual slot 33]
//   vtable slot 33; whether the window may be resized (false by default)
undefined4 __stdcall PropertiesViewWindows::IsResizable(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415210  PropertiesViewWindows::GetSectionName   (66 bytes)   [rtti:vtable virtual slot 34]
//   vtable slot 34; name of the window's settings section ("wrong" by default)
int __cdecl PropertiesViewWindows::GetSectionName(int self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ed970);
  std::string::string_from_cstr(self,(uint *)"wrong");
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415254  PropertiesViewWindows::OnNotify35   (5 bytes)   [rtti:vtable virtual slot 35]
//   vtable slot 35; notification slot 35 (empty, no override; meaning not established)
void __stdcall PropertiesViewWindows::OnNotify35(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041525c  PropertiesViewWindows::OnSelectionCommitted   (5 bytes)   [rtti:vtable virtual slot 36]
//   vtable slot 36; a selection was confirmed (saves the choice)
void __stdcall PropertiesViewWindows::OnSelectionCommitted(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415264  PropertiesViewWindows::Destroy   (195 bytes)   [rtti:vtable virtual slot 6]
//   override of OWL::TWindow vtable slot 6, from PropertiesViewWindows's OWL::TWindow subobject vtable at 0x004f0d00 (through the this-adjusting thunk at 0x00422ade); slot name identified from OWL::TWindow's own implementation of that slot
//   also: PropertiesViewWindows::vf9 [rtti:vtable]
void __cdecl PropertiesViewWindows::Destroy(int *self,INT_PTR result)

{
  BOOL ok;
  uint local_130 [64];
  WINDOWPLACEMENT placement;
  
  ok = IsWindow(*(HWND *)(*self + 0xc));
  if (ok != 0) {
    placement.length = 0x2c;
    ok = GetWindowPlacement(*(HWND *)(*self + 0xc),&placement);
    if (ok != 0) {
      IsZoomed(*(HWND *)(*self + 0xc));
      FormatWindowPlacement((undefined1 *)local_130);
      PropertiesViewWindows::SaveString((int)self,(uint *)"Position",local_130);
    }
  }
  if (self[0x13] == 0) {
    OWL::TDialog::Destroy(self,result);
  }
  else {
    (**(code **)(self[3] + 0x40))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415328  PropertiesViewWindows::OnPropertyChanged   (25 bytes)   [rtti:vtable virtual slot 41]
//   vtable slot 41; a colour or font chooser closed with a new value (PVWColourButton/PVWFontButton::BNClicked)
void __stdcall PropertiesViewWindows::OnPropertyChanged(void)

{
  TEAAppWindows::Nothing_464bac();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415344  PropertiesViewWindows::LoadResourceString   (67 bytes)   [rtti:vtable virtual slot 42]
//   vtable slot 42; a string resource of the window's module
int __cdecl PropertiesViewWindows::LoadResourceString(int self,int param_2,uint id)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ed994);
  TEAAppWindows::LoadResourceString(self,*(int *)(param_2 + 0x38),id);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415388  ShowContextHelp   (32 bytes)   [analysis]
//   opens the help topic of the current window
//   file placement: inferred (address adjacency)
void __stdcall ShowContextHelp(void)

{
  ShowHelpContents();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004153a8  PropertiesViewWindows::ShowControlTip   (67 bytes)   [rtti:vtable virtual slot 43]
//   vtable slot 43; relays a mouse message to the tooltip, or shows the tip text for a control
void __cdecl PropertiesViewWindows::ShowControlTip(int self,undefined4 param_2,LPARAM lParam)

{
  BOOL ok;
  
  if (*(int **)(self + 0x58) != (int *)0x0) {
    ok = IsWindow(*(HWND *)(**(int **)(self + 0x58) + 0xc));
    if (ok != 0) {
      FUN_004a76a8(**(int **)(self + 0x58),0x407,0,lParam);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004153ec  FitRectToMonitor   (178 bytes)   [analysis]
//   moves a rectangle onto the monitor it is mostly on (MonitorFromRect, GetMonitorInfoA)
//   file placement: inferred (address adjacency)
undefined4 __cdecl FitRectToMonitor(int left2,int top2,int right2,int bottom2)

{
  HMONITOR hMonitor;
  BOOL ok;
  int iVar2;
  tagMONITORINFO lpmi;
  RECT rect;
  
  if ((0 < right2) && (0 < bottom2)) {
    rect.left = left2;
    rect.right = right2 + left2;
    rect.top = top2;
    rect.bottom = bottom2 + top2;
    hMonitor = MonitorFromRect(&rect,2);
    if (hMonitor != (HMONITOR)0x0) {
      lpmi.cbSize = 0x28;
      ok = GetMonitorInfoA(hMonitor,&lpmi);
      if (ok != 0) {
        if (right2 < 0) {
          right2 = right2 + 7;
        }
        if (rect.left < lpmi.rcWork.right - (right2 >> 3)) {
          iVar2 = bottom2;
          if (bottom2 < 0) {
            iVar2 = bottom2 + 7;
          }
          if ((rect.top < lpmi.rcWork.bottom - (iVar2 >> 3)) &&
             ((right2 >> 3) + lpmi.rcWork.left < rect.right)) {
            if (bottom2 < 0) {
              bottom2 = bottom2 + 7;
            }
            if ((bottom2 >> 3) + lpmi.rcWork.top < rect.bottom) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004154a0  PropertiesViewWindows::EvRegisteredMsg_4154a0   (74 bytes)   [owl:response-table message-handler]
//   message id 0 in the static table (filled at run time or WM_NULL)
undefined4 __cdecl PropertiesViewWindows::EvRegisteredMsg_4154a0(int self,int param_2)

{
  if (param_2 == 0x70) {
    (**(code **)(*(int *)(self + 0xc) + 0xb4))();
  }
  else if (param_2 == 9) {
    GetKeyState(0x10);
    (**(code **)(*(int *)(self + 0xc) + 0x7c))();
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004154ec  PropertiesViewWindows::EvInitMenuPopup   (368 bytes)   [owl:response-table message-handler]
//   WM_INITMENUPOPUP
void __cdecl PropertiesViewWindows::EvInitMenuPopup(int *self,HMENU hPopupMenu,undefined4 index,char sysMenu)

{
  int iVar1;
  UINT UVar2;
  uint position;
  int *lookupConfiguration;
  undefined4 *sehChainHead;
  undefined4 *hMenu2;
  undefined4 sehPrevFrame;
  int str;
  undefined4 menu;
  HMENU hMenu;
  
  __InitExceptBlockLDTC(0x4ed9e8);
  OWL::TWindow::EvInitMenuPopup(*self,hPopupMenu,index,sysMenu);
  OWL::TMenu::TMenu_497aec(&menu,hPopupMenu,0);
  iVar1 = GetMenuItemCount(hMenu);
  if ((iVar1 != 0) && (UVar2 = FUN_00497c2c((int)&menu,iVar1 + -1), UVar2 == 0x1414)) {
    (**(code **)(self[3] + 0xb0))();
    hMenu2 = &menu;
    position = (uint)(*(int *)(str + -4) != 0);
    lookupConfiguration = (int *)GetLookupConfiguration(self[0xe]);
    LookupConfiguration::FillMenu(lookupConfiguration,(int)hMenu2,position);
    if (str != 0) {
      if (*(int *)(str + -0xc) != -1) {
        lookupConfiguration = (int *)(str + -0xc);
        if (lookupConfiguration == &g_nullStringRep) {
          iVar1 = 1;
        }
        else if (lookupConfiguration == &g_nullStringRep) {
          iVar1 = 1;
        }
        else {
          *lookupConfiguration = *lookupConfiguration + -1;
          iVar1 = *lookupConfiguration + 1;
        }
        if (iVar1 != 0) goto LAB_00415623;
      }
      operator_delete();
    }
  }
LAB_00415623:
  if ((hPopupMenu != (HMENU)0x0) && (sysMenu != '\0')) {
    DAT_0051ac88 = 0xe4c;
    (*(undefined4 *)&g_contextMenuId) = 0xe4c;
  }
  OWL::TMenu::_dtor(&menu,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004156a4  PropertiesViewWindows::EvMenuSelect   (77 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_MENUSELECT
void __cdecl PropertiesViewWindows::EvMenuSelect(undefined4 self,undefined4 menuItemId,uint flags,int hMenu)

{
  if ((flags == 0xffff) && (hMenu == 0)) {
    (*(int *)&DAT_0051ac88) = 0;
    g_contextMenuId = 0;
    return;
  }
  if ((flags & 0x870) != 0) {
    g_contextMenuId = (*(int *)&DAT_0051ac88);
    return;
  }
  if ((*(int *)&DAT_0051ac88) != 0xe4c) {
    g_contextMenuId = menuItemId;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004156f4  PropertiesViewWindows::SetupWindow   (555 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from PropertiesViewWindows's OWL::TWindow subobject vtable at 0x004f0d00 (through the this-adjusting thunk at 0x00422a33); slot name identified from OWL::TWindow's own implementation of that slot
//   also: PropertiesViewWindows::vf11 [rtti:vtable]
void __cdecl PropertiesViewWindows::SetupWindow(int *self)

{
  int iVar1;
  BOOL ok;
  uint *strRep;
  undefined4 *sehChainHead;
  WINDOWPLACEMENT placement;
  char text [511];
  undefined1 unused;
  uint *unused2;
  int bottom2;
  int right2;
  int top2;
  int left2;
  int showCmd2;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 result [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x4eda4c);
  OWL::TDialog::SetupWindow(self);
  if ((int *)self[0x16] != (int *)0x0) {
    SetTooltipMaxWidth(self,*(HWND *)(*(int *)self[0x16] + 0xc));
  }
  if (*(int *)(self[0xe] + 0x168) != 0) {
    FUN_004a76a8(*self,0x80,1,*(int *)(self[0xe] + 0x168));
  }
  if (*(int *)(self[0xe] + 0x16c) != 0) {
    FUN_004a76a8(*self,0x80,0,*(int *)(self[0xe] + 0x16c));
  }
  (**(code **)(self[3] + 0xbc))();
  ehContext = 0x14;
  PropertiesViewWindows::LoadString((int)result,(int)self,(uint *)"Position",
               (uint *)("Beta Test Expiry" + 0x10));
  ehDtorCount = ehDtorCount + 1;
  ehContext = 8;
  if (local_c[-1] != 0) {
    strncpy((undefined4 *)text,local_c,(char *)0x1ff);
    unused = 0;
    ParseWindowPlacement(text,&showCmd2,&left2,&top2,&right2,&bottom2);
    iVar1 = FitRectToMonitor(left2,top2,right2,bottom2);
    if (iVar1 != 0) {
      placement.length = 0x2c;
      ok = GetWindowPlacement(*(HWND *)(*self + 0xc),&placement);
      if (ok != 0) {
        if (top2 < 0) {
          top2 = 0;
        }
        if ((*(byte *)(*self + 0x1a) & 4) == 0) {
          right2 = placement.rcNormalPosition.right - placement.rcNormalPosition.left;
          bottom2 = placement.rcNormalPosition.bottom - placement.rcNormalPosition.top;
        }
        if ((placement.showCmd != 0) && (showCmd2 != 0)) {
          placement.showCmd = 3;
        }
        placement.rcNormalPosition.left = left2;
        placement.rcNormalPosition.top = top2;
        placement.rcNormalPosition.right = left2 + right2;
        placement.rcNormalPosition.bottom = top2 + bottom2;
        placement.length = 0x2c;
        SetWindowPlacement(*(HWND *)(*self + 0xc),&placement);
      }
    }
  }
  ehDtorCount = ehDtorCount + -1;
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      strRep = local_c + -3;
      if (strRep == &g_nullStringRep) {
        iVar1 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar1 = 1;
      }
      else {
        *strRep = *strRep - 1;
        iVar1 = *strRep + 1;
      }
      if (iVar1 != 0) goto LAB_0041590e;
    }
    unused2 = local_c + -3;
    operator_delete();
  }
LAB_0041590e:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415920  PropertiesViewWindows::SetHelpTopic   (35 bytes)   [analysis]
//   records the help context of the window
void __cdecl PropertiesViewWindows::SetHelpTopic(int *self,int topic)

{
  self[0x11] = topic;
  FUN_004a6d7c(*self,topic);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415944  PropertiesViewWindows::ShowControlMenu   (469 bytes)   [analysis]
//   the context menu of a control (Shift+F10 / menu key), placed at the control
void __cdecl PropertiesViewWindows::ShowControlMenu(int *self,int *control,int *point)

{
  int *piVar1;
  int metric;
  HWND hWnd;
  undefined4 *sehChainHead;
  int iVar3;
  undefined4 range;
  LPARAM lParam;
  tagPOINT pt;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 menu [3];
  undefined4 local_10;
  HMENU hMenu;
  
  __InitExceptBlockLDTC(0x4edaa4);
  pt.x = 0;
  pt.y = 0;
  if (point == (int *)0x0) {
    range = 0;
    lParam = -1;
    OWL::TRichEdit::GetSelection_4691fc(control,(LPARAM)&range);
    FUN_004a76a8(*control,0xd6,(WPARAM)&pt,lParam);
    ClientToScreen(*(HWND *)(*control + 0xc),&pt);
  }
  else {
    pt.x = *point;
    pt.y = point[1];
  }
  ehContext = 0x14;
  iVar3 = 1;
  piVar1 = OWL::TMenu::TMenu_497b98(menu,*(HINSTANCE *)(*(int *)(*self + 0x6c) + 0xc),
                        (LPCSTR)self[0x11]);
  ehDtorCount = ehDtorCount + 1;
  OWL::TPopupMenu::TPopupMenu_497fac(&local_10,piVar1,iVar3);
  ehDtorCount = ehDtorCount + 1;
  OWL::TMenu::_dtor(menu,2);
  ehContext = 8;
  (**(code **)(control[3] + 0x7c))();
  g_contextMenuId = self[0x11];
  (*(int *)&DAT_0051ac88) = g_contextMenuId;
  metric = GetSystemMetrics(0);
  iVar3 = pt.x;
  if (pt.x < 1) {
    iVar3 = 0;
  }
  if (iVar3 < metric) {
    if (pt.x < 1) {
      pt.x = 0;
    }
  }
  else {
    pt.x = GetSystemMetrics(0);
  }
  metric = GetSystemMetrics(1);
  iVar3 = pt.y;
  if (pt.y < 1) {
    iVar3 = 0;
  }
  if (iVar3 < metric) {
    if (pt.y < 1) {
      pt.y = 0;
    }
  }
  else {
    pt.y = GetSystemMetrics(1);
  }
  hWnd = *(HWND *)(*self + 0xc);
  if (*(int *)(*self + 0x14) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(*self + 0x14) + 8);
  }
  piVar1 = FUN_004dd744(*(int *)(*self + 0x14),iVar3,(int *)&DAT_0040299c,(int *)&DAT_00415b1c,0)
  ;
  if ((piVar1 != (int *)0x0) && (iVar3 = (**(code **)(piVar1[3] + 0x18))(), iVar3 == *self)) {
    hWnd = *(HWND *)(*piVar1 + 0xc);
  }
  TrackPopupMenu(hMenu,2,pt.x,pt.y,0,hWnd,(RECT *)0x0);
  ehDtorCount = ehDtorCount + -2;
  OWL::TMenu::_dtor(&local_10,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415be8  PropertiesViewWindows::ShowHelp   (21 bytes)   [rtti:vtable virtual slot 45; function defined from vtable-slot]
//   vtable slot 45; opens the window's help topic
void __stdcall PropertiesViewWindows::ShowHelp(void)

{
  ShowContextHelp();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415c00  PropertiesViewWindows::CmEditExternalLookupSetup   (160 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(5140) — &Edit > &External Lookup > &Setup... | &External Lookup > &Setup... | &External Lookup > &Setup...
void __cdecl PropertiesViewWindows::CmEditExternalLookupSetup(undefined4 *self)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  int *piVar2;
  undefined4 sehPrevFrame;
  int lookupPropertiesViewWindows [3];
  int local_388;
  
  __InitExceptBlockLDTC(0x4edae4);
  (**(code **)(self[3] + 0xa4))();
  LookupPropertiesViewWindows::LookupPropertiesViewWindows(lookupPropertiesViewWindows,0,*self,self[0xe]);
  piVar2 = lookupPropertiesViewWindows;
  uVar1 = (**(code **)(local_388 + 0x14))();
  (**(code **)(self[3] + 0xa4))(uVar1,self[3],piVar2,self,1);
  LookupPropertiesViewWindows::_dtor(lookupPropertiesViewWindows,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415d40  PropertiesViewWindows::CmShared_415d40   (216 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   one handler for 13 table entries: id 13120; id 13121; id 13122; id 13123; id 13124; id 13125; id 13126; id 13127; id 13128; id 13129; id 13130; id 13131; …
//   also: PropertiesViewWindows::CmShared_415d40 [owl:response-table]; PropertiesViewWindows::CmShared_415d40 [owl:response-table]; PropertiesViewWindows::CmShared_415d40 [owl:response-table]; PropertiesViewWindows::CmShared_415d40 [owl:response-table]
void __cdecl PropertiesViewWindows::CmShared_415d40(int *self,int index)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 word_ [8];
  int str;
  
  __InitExceptBlockLDTC(0x4edb24);
  (**(code **)(self[3] + 0xb0))();
  if (*(int *)(str + -4) != 0) {
    TEAAppWindows::Lookup(self[0xe],*self,index,(int)word_,0,0);
  }
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      strRep = (int *)(str + -0xc);
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep + -1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_00415e07;
    }
    operator_delete();
  }
LAB_00415e07:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415e18  PropertiesViewWindows::GetLookupWord   (100 bytes)   [rtti:vtable virtual slot 44]
//   vtable slot 44; the word to look up from the window (selected entry, word under the caret)
/* WARNING: Removing unreachable block (ram,0x00415e5c) */
int __cdecl PropertiesViewWindows::GetLookupWord(int self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4edb60);
  *(undefined4 *)(self + 8) = 0;
  *(undefined **)(self + 8) = &g_emptyStringData;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415e7c  PropertiesViewWindows::GetControlTipText   (1089 bytes)   [rtti:vtable virtual slot 46]
//   vtable slot 46; tooltip text for a control (first line of its string resource)
/* WARNING: Removing unreachable block (ram,0x00415ed3) */
/* WARNING: Removing unreachable block (ram,0x00415f42) */
/* WARNING: Removing unreachable block (ram,0x0041602e) */
/* WARNING: Removing unreachable block (ram,0x00415fda) */
/* WARNING: Removing unreachable block (ram,0x00416021) */
/* WARNING: Removing unreachable block (ram,0x004160c5) */
/* WARNING: Removing unreachable block (ram,0x004160e9) */
/* WARNING: Removing unreachable block (ram,0x004160f4) */
/* WARNING: Removing unreachable block (ram,0x00416134) */
/* WARNING: Removing unreachable block (ram,0x0041610d) */
/* WARNING: Removing unreachable block (ram,0x0041612d) */
/* WARNING: Removing unreachable block (ram,0x0041611a) */
/* WARNING: Removing unreachable block (ram,0x00416139) */
/* WARNING: Removing unreachable block (ram,0x0041613d) */
/* WARNING: Removing unreachable block (ram,0x0041618b) */
void __cdecl PropertiesViewWindows::GetControlTipText(int *self,int *param_2)

{
  uint id;
  char *pcVar2;
  int prevRefs;
  undefined4 *sehChainHead;
  undefined1 local_f0 [80];
  uint *unused;
  uint local_9c;
  undefined1 unused2;
  int local_94;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 lParam [12];
  undefined1 result [8];
  uint *strRep;
  
  __InitExceptBlockLDTC(0x4edbe8);
  ehContext = 0x14;
  id = GetDlgCtrlID(*(HWND *)(*param_2 + 0xc));
  TEAAppWindows::LoadResourceString((int)result,self[0xe],id);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 8;
  unused2 = 10;
  local_9c = strRep[-1];
  unused = strRep;
  pcVar2 = thunk_memchr((char *)strRep,'\n',local_9c);
  local_94 = (*(int *)&g_stringNpos);
  if (pcVar2 != (char *)0x0) {
    local_94 = (int)pcVar2 - (int)strRep;
  }
  if (local_94 != -1) {
    local_f0[0] = 0;
    id = local_94 + 1U;
    if (strRep[-1] <= local_94 + 1U) {
      id = strRep[-1];
    }
    std::string::replace((int)result,0,id,(uint)local_f0,0,0,0);
  }
  ehContext = 0x5c;
  FUN_0049f498(lParam,*(undefined4 *)(*self + 0xc),*(undefined4 *)(*param_2 + 0xc),strRep);
  ehDtorCount = ehDtorCount + 2;
  ehContext = 8;
  FUN_004a76a8(*(int *)self[0x16],0x404,0,(LPARAM)lParam);
  ehDtorCount = ehDtorCount + -2;
  operator_delete_array();
  ehDtorCount = ehDtorCount + -1;
  if (strRep != (uint *)0x0) {
    if (strRep[-3] != 0xffffffff) {
      strRep = strRep + -3;
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep - 1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_004162a9;
    }
    operator_delete();
  }
LAB_004162a9:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416320  PropertiesViewWindows::EvCtlColor   (386 bytes)   [rtti:vtable virtual slot 39]
//   vtable slot 39; colours for a child control (WM_CTLCOLOR*: static, edit, button)
undefined4 __cdecl PropertiesViewWindows::EvCtlColor(int *self,HDC hdc,HWND hWnd,int param_4)

{
  bool bVar1;
  LRESULT lResult;
  undefined4 *puVar3;
  int *pvwStatic;
  DWORD color;
  undefined3 regHigh;
  HANDLE h;
  int iVar5;
  undefined4 *sehChainHead;
  LOGFONTA logFont;
  HWND unused;
  undefined4 local_30;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  uint *local_8;
  
  __InitExceptBlockLDTC(0x4edc78);
  local_30 = EvMsg_19_4b0584(self,hdc,hWnd,param_4);
  if (param_4 == 6) {
    lResult = FUN_004a614c(hWnd,*(LPARAM *)(*self + 0x6c));
    if (lResult == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(lResult + 8);
    }
    puVar3 = FUN_004dd744(lResult,iVar5,(int *)&DAT_0040299c,(int *)&DAT_0041385c,0);
    unused = hWnd;
    lResult = FUN_004a614c(hWnd,*(LPARAM *)(*self + 0x6c));
    if (lResult == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(lResult + 8);
    }
    pvwStatic = FUN_004dd744(lResult,iVar5,(int *)&DAT_0040299c,(int *)&DAT_004164a4,0);
    if ((puVar3 != (undefined4 *)0x0) && (puVar3[0xc] != 0)) {
      color = GetSysColor(2);
      SetTextColor(hdc,color);
    }
    if (((puVar3 != (undefined4 *)0x0) && (puVar3[0xc] != 0)) ||
       ((pvwStatic != (int *)0x0 && (bVar1 = PVWStatic::IsTransparent(pvwStatic), CONCAT31(regHigh,bVar1) != 0)))
       ) {
      if (self[0xf] == 0) {
        h = (HANDLE)FUN_004a76a8(*self,0x31,0,0);
        if (h == (HANDLE)0x0) {
          h = GetStockObject(0xc);
        }
        if ((h != (HANDLE)0x0) && (iVar5 = GetObjectA(h,0x3c,&logFont), iVar5 != 0)) {
          logFont.lfUnderline = '\x01';
          local_8 = (uint *)operator_new();
          if (local_8 != (uint *)0x0) {
            ehContext = 0x14;
            FUN_0048f7fc(local_8,&logFont);
            ehContext = 8;
          }
          self[0xf] = (int)local_8;
        }
      }
      if ((undefined4 *)self[0xf] != (undefined4 *)0x0) {
        SelectObject(hdc,*(HGDIOBJ *)self[0xf]);
      }
    }
  }
  *sehChainHead = sehPrevFrame;
  return local_30;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041651c  PropertiesViewWindows::EvSize   (173 bytes)   [rtti:vtable virtual slot 40]
//   vtable slot 40; the window was resized (repositions the moveable controls)
void __cdecl PropertiesViewWindows::EvSize(int *self,int param_2)

{
  int iVar1;
  tagRECT *pRect;
  uint uVar3;
  LONG *pLVar4;
  tagRECT rect;
  LONG delta [4];
  uint local_8;
  
  if ((param_2 == 0) || (param_2 == 2)) {
    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;
    FUN_004a7a6c(*self,&rect);
    pRect = &rect;
    pLVar4 = delta;
    for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pLVar4 = pRect->left;
      pRect = (tagRECT *)&pRect->top;
      pLVar4 = pLVar4 + 1;
    }
    iVar1 = self[8] - self[7];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    local_8 = iVar1 >> 2;
    if (local_8 != 0) {
      uVar3 = 0;
      if (local_8 != 0) {
        do {
          PropertiesViewWindows::RepositionControls(*(int **)(uVar3 * 4 + self[7]),(int)delta);
          uVar3 = uVar3 + 1;
        } while (uVar3 < local_8);
      }
      (**(code **)(*(int *)(*self + 8) + 0x68))();
    }
  }
  OWL::TWindow::EvSize(*self,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004165cc  PropertiesViewWindows::EvPaint   (279 bytes)   [owl:response-table message-handler]
//   WM_PAINT
void __cdecl PropertiesViewWindows::EvPaint(int *self)

{
  BOOL ok;
  HDC hdc;
  int i;
  tagRECT *pRect;
  tagRECT *pRect2;
  undefined4 *sehChainHead;
  byte bVar6;
  UINT UVar7;
  UINT UVar8;
  tagRECT rect;
  tagRECT rect2;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int paintDC;
  int local_67;
  
  bVar6 = 0;
  __InitExceptBlockLDTC(0x4edcb8);
  if ((*(byte *)(*self + 0x1a) & 4) != 0) {
    ok = IsZoomed(*(HWND *)(*self + 0xc));
    if (ok == 0) {
      ehContext = 8;
      FUN_0049af8c(&paintDC,*(HWND *)(*self + 0xc));
      ehDtorCount = ehDtorCount + 2;
      ehContext = 0x14;
      rect.left = 0;
      rect.top = 0;
      rect.right = 0;
      rect.bottom = 0;
      FUN_004a7a6c(*self,&rect);
      pRect = &rect;
      pRect2 = &rect2;
      for (i = 4; i != 0; i = i + -1) {
        pRect2->left = pRect->left;
        pRect = (tagRECT *)((int)pRect + ((uint)bVar6 * -2 + 1) * 4);
        pRect2 = (tagRECT *)((int)pRect2 + ((uint)bVar6 * -2 + 1) * 4);
      }
      rect2.left = GetSystemMetrics(2);
      rect2.left = rect2.right - rect2.left;
      rect2.top = GetSystemMetrics(3);
      rect2.top = rect2.bottom - rect2.top;
      UVar8 = 8;
      UVar7 = 3;
      pRect = &rect2;
      hdc = (HDC)(**(code **)(local_67 + 0x5c))();
      DrawFrameControl(hdc,pRect,UVar7,UVar8);
      ehDtorCount = ehDtorCount + -2;
      OWL::TPaintDC::_dtor(&paintDC,2);
      goto LAB_004166d0;
    }
  }
  EvPaint_4b0574(self);
LAB_004166d0:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041673c  PropertiesViewWindows::EvActivate   (33 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_ACTIVATE
void __cdecl PropertiesViewWindows::EvActivate(int *self)

{
  FUN_004a5774(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004167d8  PropertiesViewWindows::PreProcessMsg   (393 bytes)   [rtti:vtable virtual slot 10]
//   override of OWL::TWindow vtable slot 10, from PropertiesViewWindows's OWL::TWindow subobject vtable at 0x004f0d00 (through the this-adjusting thunk at 0x00422a92); slot name identified from OWL::TWindow's own implementation of that slot
//   also: PropertiesViewWindows::vf7 [rtti:vtable]
bool __cdecl PropertiesViewWindows::PreProcessMsg(int *self,LPMSG lParam)

{
  WPARAM wParam2;
  bool bVar2;
  LRESULT lResult;
  int iVar4;
  HWND hWnd;
  int *control;
  tagPOINT *pPt;
  tagPOINT pt;
  HWND hWnd2;
  undefined4 *local_14;
  int local_10;
  tagPOINT pt2;
  
  if (lParam->message == 0x204) {
    pt2.x = 0;
    pt2.y = 0;
    GetCursorPos(&pt2);
    local_10 = FUN_004a7590(*self,&LAB_004138d8);
    if (local_10 != 0) {
      hWnd2 = *(HWND *)(local_10 + 0xc);
      lResult = FUN_004a614c(hWnd2,*(LPARAM *)(*self + 0x6c));
      if (lResult == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(lResult + 8);
      }
      local_14 = FUN_004dd744(lResult,iVar4,(int *)&DAT_0040299c,(int *)&DAT_00416760,0);
      if (local_14 != (undefined4 *)0x0) {
        (**(code **)(local_14[3] + 0x78))();
      }
    }
  }
  else if ((lParam->message == 0x205) || ((lParam->message == 0x101 && (lParam->wParam == 0x5d)))
          ) {
    pt.x = 0;
    pt.y = 0;
    GetCursorPos(&pt);
    hWnd = GetFocus();
    lResult = FUN_004a614c(hWnd,*(LPARAM *)(*self + 0x6c));
    if (lResult == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(lResult + 8);
    }
    control = FUN_004dd744(lResult,iVar4,(int *)&DAT_0040299c,(int *)&DAT_00416760,0);
    if ((control != (int *)0x0) && (self[0x11] != 0)) {
      if (lParam->message == 0x205) {
        pPt = &pt;
      }
      else {
        pPt = (tagPOINT *)0x0;
      }
      PropertiesViewWindows::ShowControlMenu(self,control,&pPt->x);
    }
  }
  if ((lParam->message == 0x100) &&
     (((wParam2 = lParam->wParam, wParam2 == 0x73 || (wParam2 == 0x74)) || (wParam2 == 0x75)))) {
    TEAAppWindows::ActivateWindow(self[0xe],wParam2,*(int *)(*self + 0x14));
    bVar2 = true;
  }
  else {
    bVar2 = OWL::TDialog::PreProcessMsg(self,lParam);
  }
  return bVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416964  PropertiesViewWindows::EvNotify   (271 bytes, 2 ranges)   [rtti:vtable virtual slot 19]
//   override of OWL::TWindow vtable slot 19, from PropertiesViewWindows's OWL::TWindow subobject vtable at 0x004f0d00 (through the this-adjusting thunk at 0x00422a6c); slot name identified from OWL::TWindow's own implementation of that slot
//   also: PropertiesViewWindows::vf38 [rtti:vtable]
undefined4 __cdecl PropertiesViewWindows::EvNotify(int *self,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  LPCSTR lpFile;
  undefined4 uVar5;
  
  if (param_3[2] == -0x2d2) {
    cVar1 = (**(code **)(self[3] + 100))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  else if ((param_3[2] == 0x70b) && (param_3[3] == 0x201)) {
    iVar2 = FUN_004a768c(*self);
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 8);
    }
    puVar4 = FUN_004dd744(iVar2,iVar3,(int *)&DAT_0040299c,(int *)&DAT_00402cfc,0);
    if ((puVar4 != (undefined4 *)0x0) && ((int)param_3[6] < (int)param_3[7])) {
      iVar2 = param_3[7];
      iVar3 = param_3[6];
      lpFile = (LPCSTR)operator_new_array();
      memset((undefined4 *)lpFile,0,(iVar2 - iVar3) + 1);
      (**(code **)(puVar4[3] + 0x30))();
      ShellExecuteA((HWND)0x0,&DAT_004ed2ba /* "open" */,lpFile,(LPCSTR)0x0,(LPCSTR)0x0,9);
      operator_delete_array();
    }
  }
  uVar5 = OWL::TWindow::EvNotify((undefined4 *)*self,param_2,param_3);
  return uVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416a78  PropertiesViewWindows::LoadDword   (435 bytes)   [analysis]
//   reads a DWORD setting of this window from the profile (value name under the window's section)
undefined4 __cdecl PropertiesViewWindows::LoadDword(int self,uint *valueName,undefined4 defaultValue)

{
  uint pos;
  char *len;
  int *strRep;
  undefined4 *sehChainHead;
  int create;
  int tryLocalMachine;
  undefined4 uVar6;
  undefined4 out [3];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 local_2c [8];
  int str;
  int persist [2];
  undefined1 valueName2 [8];
  int str2;
  
  __InitExceptBlockLDTC(0x4edd20);
  ehContext = 8;
  std::string::string_from_cstr((int)valueName2,*(uint **)(self + 0x50));
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x14;
  pos = *(uint *)(str2 + -4);
  len = strlen(valueName);
  std::string::replace((int)valueName2,pos,0,(uint)valueName,(uint)len,0,(uint)len);
  out[0] = defaultValue;
  ehContext = 0x20;
  tryLocalMachine = 0;
  create = 0;
  GetProfileKeyPath((int)local_2c);
  ehDtorCount = ehDtorCount + 1;
  Persist::Persist(persist,(int)local_2c,create,tryLocalMachine);
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      strRep = (int *)(str + -0xc);
      if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep = *strRep + -1;
        create = *strRep + 1;
      }
      if (create != 0) goto LAB_00416b7b;
    }
    operator_delete();
    str = 0;
  }
LAB_00416b7b:
  ehContext = 0x14;
  Persist::QueryDword((int)persist,(int)valueName2,out);
  ehDtorCount = ehDtorCount + -1;
  uVar6 = out[0];
  Persist::_dtor((int)persist,2);
  ehDtorCount = ehDtorCount + -1;
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep = (int *)(str2 + -0xc);
      if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep = *strRep + -1;
        create = *strRep + 1;
      }
      if (create != 0) goto LAB_00416c19;
    }
    operator_delete();
  }
LAB_00416c19:
  *sehChainHead = sehPrevFrame;
  return uVar6;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416c2c  PropertiesViewWindows::SaveDword   (422 bytes)   [analysis]
//   writes a DWORD setting of this window to the profile
void __cdecl PropertiesViewWindows::SaveDword(int self,uint *valueName)

{
  uint pos;
  char *len;
  int *strRep;
  undefined4 *sehChainHead;
  int create;
  int tryLocalMachine;
  undefined4 sehPrevFrame;
  undefined1 local_2c [8];
  int str;
  int persist [2];
  undefined1 valueName2 [8];
  int str2;
  
  __InitExceptBlockLDTC(0x4eddac);
  std::string::string_from_cstr((int)valueName2,*(uint **)(self + 0x50));
  pos = *(uint *)(str2 + -4);
  len = strlen(valueName);
  std::string::replace((int)valueName2,pos,0,(uint)valueName,(uint)len,0,(uint)len);
  tryLocalMachine = 0;
  create = 1;
  GetProfileKeyPath((int)local_2c);
  Persist::Persist(persist,(int)local_2c,create,tryLocalMachine);
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      strRep = (int *)(str + -0xc);
      if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep = *strRep + -1;
        create = *strRep + 1;
      }
      if (create != 0) goto LAB_00416d29;
    }
    operator_delete();
    str = 0;
  }
LAB_00416d29:
  Persist::SetDword((int)persist,(int)valueName2);
  Persist::_dtor((int)persist,2);
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep = (int *)(str2 + -0xc);
      if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep = *strRep + -1;
        create = *strRep + 1;
      }
      if (create != 0) goto LAB_00416dc1;
    }
    operator_delete();
  }
LAB_00416dc1:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416dd4  PropertiesViewWindows::LoadString   (934 bytes)   [analysis]
//   reads a string setting of this window from the profile
int __cdecl PropertiesViewWindows::LoadString(int result,int self,uint *valueName,uint *defaultValue)

{
  uint uVar1;
  char *len;
  int *rep;
  undefined4 *sehChainHead;
  int create;
  int tryLocalMachine;
  undefined4 sehPrevFrame;
  undefined1 local_3c [8];
  int str;
  int persist [2];
  undefined1 out [8];
  undefined4 *local_1c;
  undefined1 valueName2 [8];
  int str2;
  
  __InitExceptBlockLDTC(0x4ede74);
  std::string::string_from_cstr((int)valueName2,*(uint **)(self + 0x50));
  uVar1 = *(uint *)(str2 + -4);
  len = strlen(valueName);
  std::string::replace((int)valueName2,uVar1,0,(uint)valueName,(uint)len,0,(uint)len);
  std::string::string_from_cstr((int)out,defaultValue);
  tryLocalMachine = 0;
  create = 0;
  GetProfileKeyPath((int)local_3c);
  Persist::Persist(persist,(int)local_3c,create,tryLocalMachine);
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      rep = (int *)(str + -0xc);
      if (rep == &g_nullStringRep) {
        create = 1;
      }
      else if (rep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *rep = *rep + -1;
        create = *rep + 1;
      }
      if (create != 0) goto LAB_00416f01;
    }
    operator_delete();
    str = 0;
  }
LAB_00416f01:
  Persist::QueryString((int)persist,(int)valueName2,(int)out);
  *(undefined4 *)(result + 8) = 0;
  if (local_1c[-3] == -1 || local_1c[-3] + 1 < 0) {
    uVar1 = local_1c[-1];
    rep = std::string::__getRep(result,uVar1,uVar1);
    *(int **)(result + 8) = rep + 3;
    memcpy(*(undefined4 **)(result + 8),local_1c,uVar1);
  }
  else {
    *(undefined4 **)(result + 8) = local_1c;
    rep = (int *)(*(int *)(result + 8) + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  Persist::_dtor((int)persist,2);
  if (local_1c != (undefined4 *)0x0) {
    if (local_1c[-3] != -1) {
      rep = local_1c + -3;
      if (rep == &g_nullStringRep) {
        create = 1;
      }
      else if (rep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *rep = *rep + -1;
        create = *rep + 1;
      }
      if (create != 0) goto LAB_004170cc;
    }
    operator_delete();
    local_1c = (undefined4 *)0x0;
  }
LAB_004170cc:
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      rep = (int *)(str2 + -0xc);
      if (rep == &g_nullStringRep) {
        create = 1;
      }
      else if (rep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *rep = *rep + -1;
        create = *rep + 1;
      }
      if (create != 0) goto LAB_0041715f;
    }
    operator_delete();
  }
LAB_0041715f:
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041717c  PropertiesViewWindows::SaveString   (578 bytes)   [analysis]
//   writes a string setting of this window to the profile
void __cdecl PropertiesViewWindows::SaveString(int self,uint *valueName,uint *value)

{
  uint pos;
  char *len;
  int *strRep;
  undefined4 *sehChainHead;
  int iVar4;
  int tryLocalMachine;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  int str2;
  undefined1 local_2c [8];
  int str3;
  int persist [2];
  undefined1 valueName2 [8];
  int str4;
  
  __InitExceptBlockLDTC(0x4edf4c);
  std::string::string_from_cstr((int)valueName2,*(uint **)(self + 0x50));
  pos = *(uint *)(str4 + -4);
  len = strlen(valueName);
  std::string::replace((int)valueName2,pos,0,(uint)valueName,(uint)len,0,(uint)len);
  tryLocalMachine = 0;
  iVar4 = 1;
  GetProfileKeyPath((int)local_2c);
  Persist::Persist(persist,(int)local_2c,iVar4,tryLocalMachine);
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      strRep = (int *)(str3 + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar4 = *strRep + 1;
      }
      if (iVar4 != 0) goto LAB_0041727c;
    }
    operator_delete();
    str3 = 0;
  }
LAB_0041727c:
  iVar4 = std::string::string_from_cstr((int)str,value);
  Persist::SetString((int)persist,(int)valueName2,iVar4);
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep = (int *)(str2 + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar4 = *strRep + 1;
      }
      if (iVar4 != 0) goto LAB_00417320;
    }
    operator_delete();
    str2 = 0;
  }
LAB_00417320:
  Persist::_dtor((int)persist,2);
  if (str4 != 0) {
    if (*(int *)(str4 + -0xc) != -1) {
      strRep = (int *)(str4 + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar4 = *strRep + 1;
      }
      if (iVar4 != 0) goto LAB_004173ad;
    }
    operator_delete();
  }
LAB_004173ad:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004173c0  PropertiesViewWindows::MoveableControl::MoveableControl   (205 bytes)   [analysis]
//   a control that moves/stretches with the dialog when it is resized (anchors as fractions)
int * __cdecl PropertiesViewWindows::MoveableControl::MoveableControl(int *self,int control,int xFactor,int yFactor,int sizeFactor)

{
  uint uVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4edfa8);
  *self = yFactor;
  self[1] = sizeFactor;
  self[2] = 0;
  self[3] = 0;
  self[4] = xFactor;
  if (*self == 3) {
    self[2] = *(int *)(control + 8) - (*(int *)(xFactor + 0x20) + *(int *)(xFactor + 0x28));
  }
  else if (*self == 2) {
    self[2] = *(int *)(control + 8) - *(int *)(self[4] + 0x20);
  }
  else if (*self == 1) {
    uVar1 = *(int *)(control + 8) + 1;
    iVar2 = (int)uVar1 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((uVar1 & 1) != 0);
    }
    self[2] = iVar2 - *(int *)(self[4] + 0x20);
  }
  if (self[1] == 3) {
    self[3] = *(int *)(control + 0xc) -
                 (*(int *)(self[4] + 0x24) + *(int *)(self[4] + 0x2c));
  }
  else if (self[1] == 2) {
    self[3] = *(int *)(control + 0xc) - *(int *)(self[4] + 0x24);
  }
  else if (self[1] == 1) {
    uVar1 = *(int *)(control + 0xc) + 1;
    iVar2 = (int)uVar1 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((uVar1 & 1) != 0);
    }
    self[3] = iVar2 - *(int *)(self[4] + 0x24);
  }
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417490  PropertiesViewWindows::SetupMoveableControls   (5 bytes)   [rtti:vtable virtual slot 47]
//   vtable slot 47; registers the controls that move or stretch when the window is resized
void __stdcall PropertiesViewWindows::SetupMoveableControls(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417498  PropertiesViewWindows::AddMoveableControl   (51 bytes)   [analysis]
//   registers a control to be repositioned on resize
void __cdecl PropertiesViewWindows::AddMoveableControl(int self,undefined4 control)

{
  undefined4 *pos;
  
  pos = *(undefined4 **)(self + 0x20);
  if (pos != *(undefined4 **)(self + 0x30)) {
    *pos = control;
    *(int *)(self + 0x20) = *(int *)(self + 0x20) + 4;
    return;
  }
  std::vector_ptr::insert_aux_4174cc(self + 0x18,pos,&control);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004174cc  std::vector_ptr::insert_aux_4174cc   (437 bytes, 2 ranges)   [analysis]
//   std::vector<T *> insert at a position, growing the storage when full
//   file placement: inferred (address adjacency)
void __cdecl std::vector_ptr::insert_aux_4174cc(int vec,undefined4 *pos,undefined4 *value)

{
  int newCapacity;
  undefined4 *storage;
  int index;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x4edfe0);
  storage = *(undefined4 **)(vec + 8);
  if (storage == *(undefined4 **)(vec + 0x18)) {
    newCapacity = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (newCapacity < 0) {
      newCapacity = newCapacity + 3;
    }
    if (newCapacity >> 2 == 0) {
      newCapacity = 0x100;
    }
    else {
      newCapacity = (newCapacity >> 2) * 2;
    }
    storage = (undefined4 *)operator_new();
    if (storage == (undefined4 *)0x0) {
      badAlloc = &std::bad_alloc::vftable;
      _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
    }
    std::copy_ptr_4176c8(*(undefined4 **)(vec + 4),pos,storage);
    index = (int)pos - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    storage[index >> 2] = *value;
    index = (int)pos - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    std::copy_ptr_4176c8(pos,*(undefined4 **)(vec + 8),storage + (index >> 2) + 1);
    index = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    std::_Destroy_range_ptr(vec,*(int *)(vec + 4),*(int *)(vec + 8));
    operator_delete();
    *(undefined4 **)(vec + 0x18) = storage + newCapacity;
    *(undefined4 **)(vec + 8) = storage + (index >> 2) + 1;
    *(undefined4 **)(vec + 4) = storage;
  }
  else {
    *storage = storage[-1];
    std::copy_backward_ptr_4176a4(pos,*(undefined4 **)(vec + 8) + -1,*(undefined4 **)(vec + 8));
    *pos = *value;
    *(int *)(vec + 8) = *(int *)(vec + 8) + 4;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004176a4  std::copy_backward_ptr_4176a4   (36 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004063a8 (36 bytes; the code occurs several times, e.g. one template instance per type). copy_backward over a range of pointers
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_backward_ptr_4176a4(undefined4 *first,undefined4 *last,undefined4 *destEnd)

{
  while (last != first) {
    last = last + -1;
    destEnd = destEnd + -1;
    *destEnd = *last;
  }
  return destEnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x004176c8  std::copy_ptr_4176c8   (89 bytes, 2 ranges)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004063cc (89 bytes; the code occurs several times, e.g. one template instance per type). copy over a range of pointers
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_ptr_4176c8(undefined4 *first,undefined4 *last,undefined4 *dest)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ee020);
  for (; last != first; first = first + 1) {
    *dest = *first;
    dest = dest + 1;
  }
  *sehChainHead = sehPrevFrame;
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417748  std::_Destroy_range_ptr_417748   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x0040644c (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of pointers (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_ptr_417748(int first,int last)

{
  for (; last != first; first = first + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417760  SetTooltipMaxWidth   (32 bytes)   [analysis]
//   TTM_SETMAXTIPWIDTH from the screen width
//   file placement: inferred (address adjacency)
void __cdecl SetTooltipMaxWidth(undefined4 self,HWND hWndTooltip)

{
  int metric;
  
  metric = GetSystemMetrics(0);
  SendMessageA(hWndTooltip,0x418,0,metric + -0x10);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417780  PropertiesViewWindows::RepositionControls   (298 bytes)   [analysis]
//   moves every moveable control for the new client size
void __cdecl PropertiesViewWindows::RepositionControls(int *self,int delta)

{
  int iVar1;
  uint uVar2;
  int x;
  int y;
  int local_c;
  int local_8;
  
  x = 0;
  y = 0;
  local_c = 0;
  local_8 = 0;
  iVar1 = *self;
  if (iVar1 == 0) {
    x = *(int *)(self[4] + 0x20);
    local_c = *(int *)(self[4] + 0x20) + *(int *)(self[4] + 0x28);
  }
  else if (iVar1 == 1) {
    uVar2 = *(int *)(delta + 8) + 1;
    x = (int)uVar2 >> 1;
    if (x < 0) {
      x = x + (uint)((uVar2 & 1) != 0);
    }
    x = x - self[2];
    local_c = *(int *)(self[4] + 0x28) + x;
  }
  else if (iVar1 == 2) {
    x = *(int *)(delta + 8) - self[2];
    local_c = *(int *)(self[4] + 0x28) + x;
  }
  else if (iVar1 == 3) {
    x = *(int *)(self[4] + 0x20);
    local_c = *(int *)(delta + 8) - self[2];
  }
  iVar1 = self[1];
  if (iVar1 == 0) {
    y = *(int *)(self[4] + 0x24);
    local_8 = y + *(int *)(self[4] + 0x2c);
  }
  else if (iVar1 == 1) {
    uVar2 = *(int *)(delta + 0xc) + 1;
    y = (int)uVar2 >> 1;
    if (y < 0) {
      y = y + (uint)((uVar2 & 1) != 0);
    }
    y = y - self[3];
    local_8 = *(int *)(self[4] + 0x2c) + y;
  }
  else if (iVar1 == 2) {
    y = *(int *)(delta + 0xc) - self[3];
    local_8 = *(int *)(self[4] + 0x2c) + y;
  }
  else if (iVar1 == 3) {
    y = *(int *)(self[4] + 0x24);
    local_8 = *(int *)(delta + 0xc) - self[3];
  }
  FUN_004a7aa0(self[4],(HWND)0x0,x,y,local_c - x,local_8 - y,0x21c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004178ac  MakeLogBrush   (112 bytes)   [analysis]
//   a solid LOGBRUSH of a colour
//   file placement: inferred (address adjacency)
LOGBRUSH * __cdecl MakeLogBrush(LOGBRUSH *logBrush,COLORREF colour)

{
  uint *puVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ee054);
  logBrush->lbStyle = 0;
  logBrush->lbColor = colour;
  puVar1 = (uint *)operator_new();
  if (puVar1 != (uint *)0x0) {
    FUN_004ab954(puVar1,logBrush);
  }
  logBrush[1].lbStyle = (UINT)puVar1;
  *sehChainHead = sehPrevFrame;
  return logBrush;
}

} // namespace tea
