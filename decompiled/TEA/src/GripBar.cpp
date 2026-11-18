// TEA.exe — application module "GripBar"
// 55 functions, 0x00473ba8..0x00481c1c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00473ba8  GripBar::~GripBar   (165 bytes)   [rtti:dtor destructor]
//   written in code as GripBar::_dtor
void __cdecl GripBar::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ff2fc);
  if (self != (int *)0x0) {
    *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + -0x19;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x19;
    OWL::TMessageBar::_dtor(self,0);
    *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + 0x19;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x19;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)self + 0x7b),0);
      *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x73),0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473ccc  OWL::TStatusBar::~TStatusBar   (162 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TStatusBar::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TStatusBar::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ff304);
  if (self != (int *)0x0) {
    *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + -0x19;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x19;
    OWL::TMessageBar::_dtor(self,0);
    *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + 0x19;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x19;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)self + 0x7b),0);
      *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x73),0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473df0  DefinitionRecord::DefinitionRecord   (288 bytes)   [analysis]
//   constructor: empty headword/qualifier/text strings and offsets
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00473ece) */
/* WARNING: Removing unreachable block (ram,0x00473e2a) */
/* WARNING: Removing unreachable block (ram,0x00473ef0) */
/* WARNING: Removing unreachable block (ram,0x00473e65) */
/* WARNING: Removing unreachable block (ram,0x00473ea2) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffcc : 0x00473eaa */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl DefinitionRecord::DefinitionRecord(int self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ff31c);
  *(undefined4 *)(self + 8) = 0;
  *(undefined **)(self + 8) = &g_emptyStringData;
  *(undefined4 *)(self + 0x10) = 0;
  *(undefined4 *)(self + 0x1c) = 0;
  *(undefined4 *)(self + 0x20) = 0;
  *(undefined4 *)(self + 0x30) = 0;
  *(undefined4 *)(self + 0x18) = 0x40;
  *(undefined4 *)(self + 0x3c) = 0;
  *(undefined4 *)(self + 0x40) = 0;
  *(undefined4 *)(self + 0x50) = 0;
  *(undefined4 *)(self + 0x38) = 0x40;
  *(undefined4 *)(self + 0x60) = 0;
  *(undefined **)(self + 0x60) = &g_emptyStringData;
  *(undefined4 *)(self + 0x70) = 0;
  *(undefined **)(self + 0x70) = &g_emptyStringData;
  *(undefined4 *)(self + 0x78) = 0xffffffff;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047be04  GripBar::GripBar   (405 bytes)   [rtti:vtable-store constructor]
//   constructor: stores GripBar's vtable at its vptr offset (+0x18) in this
int * __cdecl GripBar::GripBar(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *sehChainHead;
  int iVar3;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x501458);
  if (vbasesBuilt == 0) {
    *self = (int)self + 0x7b;
    *(int *)((int)self + 0x7b) = (int)self + 0x6f;
    *(int *)((int)self + 0x7f) = (int)self + 0x73;
    self[4] = (int)self + 0x6f;
    self[5] = (int)self + 0x73;
    *(undefined4 *)((int)self + 0x6b) = 0;
    *(undefined4 *)((int)self + 0x77) = 0;
    *(undefined ***)((int)self + 0x6f) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)self + 0x73) = &OWL::TStreamableBase::vftable;
    *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc((int *)((int)self + 0x7b),1);
    *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + -0x96;
  }
  iVar3 = 0;
  puVar1 = (uint *)operator_new();
  if (puVar1 != (uint *)0x0) {
    FUN_0048faec(puVar1);
  }
  OWL::TStatusBar::TStatusBar(self,1,param_3,param_4,param_5,puVar1,iVar3);
  self[6] = (int)&GripBar::vftable;
  self[1] = (int)&PTR_LAB_00501520;
  *(undefined ***)self[4] = &PTR_LAB_00501540;
  *(undefined ***)self[5] = &PTR_LAB_0050154c;
  *(undefined ***)(*self + 8) = &PTR_LAB_00501558;
  puVar2 = (undefined4 *)FUN_00490dd0((int)(self + 1),0x7537);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)(self[6] + 0x1c))();
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)();
    }
    *(int *)((int)self + 0x5e) = *(int *)((int)self + 0x5e) + -1;
  }
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047bff4  OWL::TGadgetWindow::GetTooltip   (11 bytes)   [rtti:vtable virtual slot 1]
//   override of OWL::TWindow vtable slot 1, from OWL::TGadgetWindow's OWL::TWindow subobject vtable at 0x00507034 (through the this-adjusting thunk at 0x004933ce); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TGadgetWindow::vf3 [rtti:vtable]
//   file placement: inferred (address adjacency)
undefined4 __cdecl OWL::TGadgetWindow::GetTooltip(int self)

{
  return *(undefined4 *)(self + 0x3b);
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c140  RtfFilter::HashControlWord   (40 bytes)   [analysis]
//   hash of a control word name (shift-xor, modulo 521) for the keyword table
//   file placement: inferred (address adjacency)
uint __cdecl RtfFilter::HashControlWord(char *word_)

{
  char ch;
  uint hash;
  
  hash = 0;
  while( true ) {
    ch = *word_;
    word_ = word_ + 1;
    if (ch == '\0') break;
    hash = hash << 3 ^ (int)ch;
  }
  return hash % 0x209;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c168  RtfFilter::LookupSymbol   (35 bytes)   [analysis]
//   the character a symbol control word stands for (table at g_rtfSymbols)
//   file placement: inferred (address adjacency)
undefined4 __cdecl RtfFilter::LookupSymbol(int id)

{
  int *entry;
  
  entry = &g_rtfSymbols;
  while( true ) {
    if (*entry == 0) {
      return 0;
    }
    if (id == entry[1]) break;
    entry = entry + 3;
  }
  return CONCAT31((int3)((uint)entry >> 8),(char)entry[2]);
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c18c  RtfFilter::ReadControlWord   (682 bytes)   [analysis]
//   parses a control word at the cursor (letters, optional negative number, delimiter), handling \fcharset in the font table and {\colortbl; dispatches it
//   file placement: inferred (address adjacency)
uint * __cdecl RtfFilter::ReadControlWord(char *start,uint *p,undefined4 *state)

{
  char *pcVar1;
  char cVar2;
  int index;
  uint *flags;
  uint uVar5;
  int *value2;
  char *charset;
  char *name;
  int iVar9;
  bool bVar10;
  char word_ [1003];
  byte index2;
  uint *p2;
  int negative;
  int value;
  int hasValue;
  uint token;
  
  if ((char)*p == '\0') {
    p = (uint *)0x0;
  }
  else {
    token = (int)p + (-1 - (int)start);
    hasValue = 0;
    value = 0;
    negative = 0;
    p2 = p;
    name = (char *)0x1;
    index = isalpha((int)(char)*p);
    if (index != 0) {
      do {
        flags = p;
        p = (uint *)((int)flags + 1);
        if (*(char *)p == '\0') {
          return (uint *)0x0;
        }
        index = isalpha((int)*(char *)p);
      } while (index != 0);
      name = (char *)((int)p - (int)p2);
      if (*(char *)p == '-') {
        p = (uint *)((int)flags + 2);
        negative = 1;
        if (*(char *)p == '\0') {
          return (uint *)0x0;
        }
      }
      if (('/' < (char)*p) && ((char)*p < ':')) {
        hasValue = 1;
        do {
          uVar5 = *p;
          p = (uint *)((int)p + 1);
          value = value * 10 + (int)(char)uVar5 + -0x30;
          if (*(char *)p == '\0') {
            return (uint *)0x0;
          }
        } while (('/' < *(char *)p) && (*(char *)p < ':'));
        if (negative != 0) {
          value = -value;
        }
      }
      if ((char)*p != ' ') {
        p = (uint *)((int)p + -1);
      }
    }
    if ((char *)0x3e7 < name) {
      name = (char *)0x3e8;
    }
    strncpy((undefined4 *)word_,p2,name);
    word_[(int)name] = '\0';
    if (state[1] == 2) {
      if ((word_[0] == 'f') && (word_[1] == '\0')) {
        index = 0;
        flags = p;
        while ((flags = (uint *)((int)flags + 1), *(char *)flags != '\0' &&
               ((cVar2 = *(char *)flags, cVar2 != ';' || (index != 0))))) {
          if (cVar2 == '{') {
            index = index + 1;
          }
          else if (cVar2 == '}') {
            index = index + -1;
          }
        }
        RtfFilter::AddText((int)state,value,(uint)((int)p + 1),(int)flags);
      }
      else if ((word_[0] == '*') && (word_[1] == '\0')) {
        state[1] = 3;
      }
      else {
        name = word_;
        charset = "fcharset";
        do {
          bVar10 = *name == *charset;
          if (!bVar10) break;
          if (*name == '\0') goto LAB_0047c340;
          pcVar1 = name + 1;
          bVar10 = *pcVar1 == charset[1];
          if (!bVar10) break;
          name = name + 2;
          charset = charset + 2;
          bVar10 = *pcVar1 == '\0';
        } while (!bVar10);
        if (bVar10) {
LAB_0047c340:
          if (hasValue != 0) {
            RtfFilter::SetCharAt((int)state,(char)value);
          }
        }
      }
    }
    else {
      uVar5 = RtfFilter::HashControlWord(word_);
      index2 = (&DAT_0051ac90)[uVar5];
      if (index2 < 0x4c) {
        name = word_;
        charset = (&PTR_DAT_005015e0)[index2];
        do {
          if (*name != *charset) goto LAB_0047c3c9;
          bVar10 = true;
          if (*name == '\0') break;
          pcVar1 = name + 1;
          if (*pcVar1 != charset[1]) goto LAB_0047c3c9;
          name = name + 2;
          charset = charset + 2;
          bVar10 = *pcVar1 == '\0';
        } while (!bVar10);
        if (bVar10) {
          if (hasValue == 0) {
            value2 = (int *)0x0;
          }
          else {
            value2 = &value;
          }
          RtfFilter::HandleControlWord(state,token,(uint)index2,value2);
        }
      }
LAB_0047c3c9:
      if (state[1] == 1) {
        name = thunk_FUN_004dcd18(start,"{\\colortbl");
        state[0x60] = (int)name - (int)start;
        name = (char *)((int)p + 1);
        index = 0;
        while (charset = name, *name != '}') {
          for (; (*charset != '}' && (*charset != ';')); charset = charset + 1) {
          }
          iVar9 = index + 1;
          RtfFilter::AddFontName((int)state,index,(undefined4 *)name,(int)charset);
          name = charset;
          index = iVar9;
          if (*charset == ';') {
            name = charset + 1;
          }
        }
        p = (uint *)(name + -1);
        state[0x61] = name + (1 - (int)start);
      }
    }
  }
  return p;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c438  RtfFilter::AppendFlag   (89 bytes)   [analysis]
//   appends a control word to the output when its value changes ("0" form to switch it off)
//   file placement: inferred (address adjacency)
void __cdecl RtfFilter::AppendFlag(int out,uint *word_,int oldValue,int newValue)

{
  uint pos;
  char *len;
  
  if (newValue != oldValue) {
    pos = *(uint *)(*(int *)(out + 8) + -4);
    len = strlen(word_);
    std::string::replace(out,pos,0,(uint)word_,(uint)len,0,(uint)len);
    if (newValue == 0) {
      std::string::replace_fill(out,*(uint *)(*(int *)(out + 8) + -4),0,1,0x30);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c494  RtfFilter::AppendEscaped   (194 bytes)   [analysis]
//   appends text with RTF escaping
//   file placement: inferred (address adjacency)
void __cdecl RtfFilter::AppendEscaped(int out,int text)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 escaped [8];
  int str;
  
  __InitExceptBlockLDTC(0x5017e0);
  ConvertMarkupToRtf((int)escaped,text,3);
  std::string::append(out,(int)escaped);
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
      if (prevRefs != 0) goto LAB_0047c545;
    }
    operator_delete();
  }
LAB_0047c545:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c558  RtfFilter::AppendNumberWord   (623 bytes)   [analysis]
//   appends a control word with a numeric argument
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0047c598) */
/* WARNING: Removing unreachable block (ram,0x0047c656) */
/* WARNING: Removing unreachable block (ram,0x0047c61e) */
/* WARNING: Removing unreachable block (ram,0x0047c64f) */
/* WARNING: Removing unreachable block (ram,0x0047c6c3) */
/* WARNING: Removing unreachable block (ram,0x0047c6e7) */
/* WARNING: Removing unreachable block (ram,0x0047c6f2) */
/* WARNING: Removing unreachable block (ram,0x0047c716) */
/* WARNING: Removing unreachable block (ram,0x0047c700) */
/* WARNING: Removing unreachable block (ram,0x0047c70f) */
/* WARNING: Removing unreachable block (ram,0x0047c708) */
/* WARNING: Removing unreachable block (ram,0x0047c71b) */
/* WARNING: Removing unreachable block (ram,0x0047c71f) */
/* WARNING: Removing unreachable block (ram,0x0047c76d) */
undefined4 __stdcall RtfFilter::AppendNumberWord(int str,undefined4 *param_2,uint param_3,uint *param_4)

{
  uint len;
  uint uVar2;
  undefined4 *sehChainHead;
  undefined1 local_99 [73];
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x501a8c);
  uVar2 = FUN_004d7ae0(str,param_2,param_3,0);
  *param_4 = uVar2;
  len = *(uint *)(*(int *)(str + 8) + -4);
  local_99[0] = 0;
  if (len <= uVar2) {
    uVar2 = len;
  }
  std::string::replace(str,0,uVar2,(uint)local_99,0,0,0);
  *sehChainHead = sehPrevFrame;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c7c8  RtfFilter::AppendWordAndStore   (59 bytes)   [analysis]
//   appends a control word and stores its value
//   file placement: inferred (address adjacency)
undefined4 __stdcall RtfFilter::AppendWordAndStore(int out,uint *word_,undefined4 value,undefined4 *store)

{
  uint pos;
  char *len;
  
  pos = *(uint *)(*(int *)(out + 8) + -4);
  len = strlen(word_);
  std::string::replace(out,pos,0,(uint)word_,(uint)len,0,(uint)len);
  *store = value;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c804  RtfFilter::AppendToggle   (81 bytes)   [analysis]
//   appends a toggle control word ("0" form when off)
//   file placement: inferred (address adjacency)
void __cdecl RtfFilter::AppendToggle(int out,int changed,int on,uint *word_)

{
  uint pos;
  char *len;
  
  if (changed != 0) {
    pos = *(uint *)(*(int *)(out + 8) + -4);
    len = strlen(word_);
    std::string::replace(out,pos,0,(uint)word_,(uint)len,0,(uint)len);
    if (on == 0) {
      std::string::replace_fill(out,*(uint *)(*(int *)(out + 8) + -4),0,1,0x30);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c864  RtfFilter::InitKeywordTable   (92 bytes)   [analysis]
//   fills the keyword hash table
//   file placement: inferred (address adjacency)
undefined4 __cdecl RtfFilter::InitKeywordTable(undefined4 param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  byte bVar3;
  undefined **ppuVar4;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x502310);
  uVar2 = 0;
  puVar1 = &DAT_0051ac90;
  do {
    *puVar1 = 0x4c;
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (uVar2 < 0x209);
  bVar3 = 0;
  ppuVar4 = &PTR_DAT_005015e0;
  do {
    uVar2 = RtfFilter::HashControlWord(*ppuVar4);
    (&DAT_0051ac90)[uVar2] = bVar3;
    bVar3 = bVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
  } while (bVar3 < 0x4c);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c8e8  std::copy_ptr_47c8e8   (89 bytes, 2 ranges)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004063cc (89 bytes; the code occurs several times, e.g. one template instance per type). copy over a range of pointers
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_ptr_47c8e8(undefined4 *first,undefined4 *last,undefined4 *dest)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x502338);
  for (; last != first; first = first + 1) {
    *dest = *first;
    dest = dest + 1;
  }
  *sehChainHead = sehPrevFrame;
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c968  std::_Destroy_range_ptr_47c968   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x0040644c (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of pointers (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_ptr_47c968(int first,int last)

{
  for (; last != first; first = first + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c980  std::copy_backward_ptr_47c980   (36 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004063a8 (36 bytes; the code occurs several times, e.g. one template instance per type). copy_backward over a range of pointers
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_backward_ptr_47c980(undefined4 *first,undefined4 *last,undefined4 *destEnd)

{
  while (last != first) {
    last = last + -1;
    destEnd = destEnd + -1;
    *destEnd = *last;
  }
  return destEnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c9a4  std::_Destroy_range_ptr_47c9a4   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004050b4 (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of pointers (nothing to do; the loop is left in)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_ptr_47c9a4(undefined4 vec,int first,int last)

{
  for (; last != first; first = first + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c9bc  std::_Destroy_range_1   (20 bytes)   [analysis]
//   destroys a range of bytes (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_1(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != param_2; param_2 = param_2 + 1) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c9d0  RtfFilter::HandleControlWord   (999 bytes, 2 ranges)   [analysis]
//   applies one control word by its table index: character attributes (bold, italic, underline...), font size, colours, paragraph and section words, "<br>"
//   file placement: inferred (address adjacency)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl RtfFilter::HandleControlWord(undefined4 *self,uint token,int index,int *value)

{
  undefined4 symbol;
  int value2;
  undefined4 uStack_8;
  
  if (index < 0x2c) {
    if (index < 0x24) {
      switch(index) {
      case 0:
        if ((value == (int *)0x0) || (*value != 0)) {
          value2 = 1;
        }
        else {
          value2 = 0;
        }
        RtfFilter::SetCharFormat((int)self,0,value2);
        break;
      case 1:
        if ((value == (int *)0x0) || (*value != 0)) {
          value2 = 1;
        }
        else {
          value2 = 0;
        }
        RtfFilter::SetCharFormat((int)self,3,value2);
        break;
      case 2:
        if ((value == (int *)0x0) || (*value != 0)) {
          value2 = 1;
        }
        else {
          value2 = 0;
        }
        RtfFilter::SetCharFormat((int)self,1,value2);
        break;
      case 3:
        RtfFilter::SetCharFormat((int)self,1,0);
        break;
      case 4:
        if ((value == (int *)0x0) || (*value != 0)) {
          value2 = 1;
        }
        else {
          value2 = 0;
        }
        RtfFilter::SetCharFormat((int)self,2,value2);
        break;
      case 5:
        RtfFilter::SetCharFormat((int)self,0,0);
        RtfFilter::SetCharFormat((int)self,3,0);
        RtfFilter::SetCharFormat((int)self,1,0);
        RtfFilter::SetCharFormat((int)self,2,0);
        RtfFilter::SetCharFormat((int)self,6,0x18);
        break;
      case 6:
        if (value == (int *)0x0) {
          value2 = -0x80000000;
        }
        else {
          value2 = *value;
        }
        self[0x84] = value2;
        break;
      case 7:
        if (value == (int *)0x0) {
          value2 = 0;
        }
        else {
          value2 = *value;
        }
        RtfFilter::SetCharFormat((int)self,4,value2);
        break;
      case 8:
        if (value == (int *)0x0) {
          value2 = 0x18;
        }
        else {
          value2 = *value;
        }
        RtfFilter::SetCharFormat((int)self,6,value2);
        break;
      case 9:
        if (value == (int *)0x0) {
          value2 = 0;
        }
        else {
          value2 = *value;
        }
        RtfFilter::SetCharFormat((int)self,5,value2);
        break;
      case 10:
        self[1] = 2;
        break;
      case 0xb:
        self[1] = 1;
        break;
      case 0xc:
        *self = 1;
        if (value == (int *)0x0) {
          _DAT_00501710 = 0;
        }
        else {
          _DAT_00501710 = *value;
        }
        break;
      case 0xd:
      case 0xf:
        if (self[0x92] == 4) {
          RtfFilter::BeginRun((int)self,token,&DAT_00501ad1);
        }
        else if (self[0x92] == 3) {
          RtfFilter::BeginRun((int)self,token,&DAT_00501c94);
        }
        else if (self[0x92] == 2) {
          RtfFilter::BeginRun((int)self,token,&DAT_00501c9b /* "<br>" */);
        }
        else {
          RtfFilter::BeginRun((int)self,token,&DAT_00501c98);
        }
        break;
      case 0xe:
        RtfFilter::Break((int)self,token,1);
        break;
      case 0x10:
        RtfFilter::SetAlignmentOrIndent((int)self,0,1);
        break;
      case 0x11:
        RtfFilter::SetAlignmentOrIndent((int)self,0,3);
        break;
      case 0x12:
        RtfFilter::SetAlignmentOrIndent((int)self,0,2);
        break;
      case 0x13:
        if (value == (int *)0x0) {
          value2 = 0;
        }
        else {
          value2 = *value;
        }
        RtfFilter::SetAlignmentOrIndent((int)self,1,value2);
        break;
      case 0x14:
        if (value == (int *)0x0) {
          value2 = 0;
        }
        else {
          value2 = *value;
        }
        RtfFilter::SetAlignmentOrIndent((int)self,2,value2);
        break;
      case 0x15:
        if (value == (int *)0x0) {
          value2 = 0;
        }
        else {
          value2 = *value;
        }
        RtfFilter::SetAlignmentOrIndent((int)self,3,value2);
        break;
      case 0x16:
        if ((value != (int *)0x0) && (*value != 0)) {
          RtfFilter::AddTabStop((int)self,*value);
        }
        break;
      case 0x17:
      case 0x18:
        if ((int)self[0xd] < 0x20) {
          self[self[0xd] + 0x2e] = index + -0x16;
        }
        break;
      case 0x19:
        RtfFilter::ResetParagraph((int)self);
        RtfFilter::SetAlignmentOrIndent((int)self,0,1);
        RtfFilter::SetAlignmentOrIndent((int)self,1,0);
        RtfFilter::SetAlignmentOrIndent((int)self,2,0);
        RtfFilter::SetAlignmentOrIndent((int)self,3,0);
        break;
      case 0x1a:
        RtfFilter::SectionBreak((int)self);
        break;
      case 0x1b:
        if (value == (int *)0x0) {
          value2 = 1;
        }
        else {
          value2 = *value;
        }
        RtfFilter::SetColumns((int)self,value2);
        break;
      case 0x1c:
        if (value == (int *)0x0) {
          value2 = 0x2d0;
        }
        else {
          value2 = *value;
        }
        RtfFilter::SetColumnSpacing((int)self,value2);
        break;
      case 0x1d:
        RtfFilter::Break((int)self,token,2);
        break;
      case 0x1e:
      case 0x1f:
      case 0x20:
        RtfFilter::SetSectionBreakType((int)self,index + -0x1e);
        break;
      case 0x21:
      case 0x22:
      case 0x23:
        RtfFilter::HandleDestination((int)self,token,(undefined4 *)(&PTR_DAT_005015e0)[index],1);
      }
    }
    else {
      symbol = RtfFilter::LookupSymbol(index);
      uStack_8 = CONCAT13((char)symbol,(undefined3)uStack_8);
      RtfFilter::HandleDestination((int)self,token,(undefined4 *)((int)&uStack_8 + 3),1);
    }
  }
  else {
    self[1] = 3;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047ce48  RtfFilter::HandleDestination   (669 bytes)   [analysis]
//   starts a destination group (font table, colour table, fields) or plain text
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl RtfFilter::HandleDestination(int self,uint kind,undefined4 *state,uint value)

{
  undefined4 uVar1;
  int text;
  int extraout_ECX;
  int flags;
  uint uVar4;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  int local_1c;
  undefined1 result [8];
  int str2;
  
  __InitExceptBlockLDTC(0x502378);
  if (*(int *)(self + 4) == 2) {
    flags = *(int *)(self + 0x214);
    if (-1 < flags) {
      text = *(int *)(self + 0x1d8) - *(int *)(self + 0x1d4);
      if (text < 0) {
        text = text + 0xf;
      }
      if (flags < text >> 4) {
        if (*(char *)((int)state + (value - 1)) == ';') {
          value = value - 1;
        }
        flags = flags * 0x10 + *(int *)(self + 0x1d4);
        std::string::replace(flags,*(uint *)(*(int *)(flags + 8) + -4),0,(uint)state,value,0,value);
      }
    }
    goto LAB_0047d0d4;
  }
  if (*(int *)(self + 4) != 0) goto LAB_0047d0d4;
  RtfFilter::FlushPendingWord(self);
  if ((*(int *)(self + 0x18) == -0x80000000) && (*(int *)(self + 0x210) != -0x80000000)) {
    RtfFilter::SetCharFormat(self,4,*(int *)(self + 0x210));
  }
  if ((*(int *)(self + 0x1c) == -0x80000000) && (*(int *)(self + 0x298) == 0)) {
    RtfFilter::SetCharFormat(self,5,0);
  }
  if (*(int *)(self + 0x248) != 4) {
    flags = *(int *)(self + 0x248);
    text = std::string::string_from_buf((int)str,state,value);
    ConvertMarkupToRtf((int)result,text,flags);
    flags = extraout_ECX;
    if (local_1c != 0) {
      flags = *(int *)(local_1c + -0xc) + 1;
      if (flags != 0) {
        strRep = (int *)(local_1c + -0xc);
        if (strRep == &g_nullStringRep) {
          text = 1;
        }
        else if (strRep == &g_nullStringRep) {
          text = 1;
        }
        else {
          *strRep = *strRep + -1;
          text = *strRep + 1;
        }
        if (text != 0) goto LAB_0047cfe7;
      }
      operator_delete();
      local_1c = 0;
      flags = 0;
    }
LAB_0047cfe7:
    std::operator_shl_string_47d0e8(result,*(undefined4 *)(self + 0x244),flags,
                 (int *)*(undefined4 *)(self + 0x244),(int)result);
    if (str2 != 0) {
      if (*(int *)(str2 + -0xc) != -1) {
        strRep = (int *)(str2 + -0xc);
        if (strRep == &g_nullStringRep) {
          flags = 1;
        }
        else if (strRep == &g_nullStringRep) {
          flags = 1;
        }
        else {
          *strRep = *strRep + -1;
          flags = *strRep + 1;
        }
        if (flags != 0) goto LAB_0047d080;
      }
      operator_delete();
      str2 = 0;
    }
  }
LAB_0047d080:
  uVar4 = value + kind;
  for (; kind < uVar4; kind = kind + 1) {
    uVar1 = *(undefined4 *)(self + 0x218);
    *(int *)(self + 0x218) = *(int *)(self + 0x218) + 1;
    *(undefined4 *)(kind * 4 + *(int *)(self + 0x224)) = uVar1;
  }
  flags = RtfFilter::CurrentRunCount(self);
  if (flags != 0) {
    std::string::replace(flags + 0x40,*(uint *)(*(int *)(flags + 0x48) + -4),0,(uint)state,value,0,
                 value);
  }
LAB_0047d0d4:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047d0e8  std::operator_shl_string_47d0e8   (5595 bytes, 2 ranges)   [analysis]
//   writes a std::string to an output stream (inlined stream sentry and padding)
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int * std::operator_shl_string_47d0e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5 )

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  uint uVar8;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [248];
  undefined4 unused;
  undefined1 exceptMsg2 [248];
  undefined4 unused2;
  undefined1 exceptMsg3 [452];
  undefined4 unused3;
  undefined4 unused4;
  undefined1 exceptMsg4 [248];
  undefined4 unused5;
  undefined1 exceptMsg5 [248];
  undefined4 unused6;
  undefined1 exceptMsg6 [248];
  undefined4 unused7;
  undefined1 exceptMsg7 [248];
  undefined4 unused8;
  undefined1 exceptMsg8 [248];
  undefined4 unused9;
  undefined1 exceptMsg9 [248];
  undefined4 unused10;
  undefined1 exceptMsg10 [248];
  undefined4 unused11;
  undefined1 exceptMsg11 [248];
  undefined4 unused12;
  undefined1 exceptMsg12 [252];
  undefined1 *unused13;
  undefined4 unused14;
  int unused15;
  int unused16;
  int *strRep;
  uint *msgText;
  undefined1 *unused17;
  undefined4 unused18;
  int unused19;
  int unused20;
  int *strRep2;
  uint *msgText2;
  undefined1 *unused21;
  undefined4 unused22;
  int unused23;
  int unused24;
  int *strRep3;
  uint *msgText3;
  uint local_46c;
  uint local_468;
  int local_464;
  uint unused25;
  undefined1 *unused26;
  undefined4 unused27;
  int unused28;
  int unused29;
  int *strRep4;
  uint *msgText4;
  undefined1 *unused30;
  undefined4 unused31;
  int unused32;
  int unused33;
  int *strRep5;
  uint *msgText5;
  undefined1 *unused34;
  undefined4 unused35;
  int unused36;
  int unused37;
  uint *msgText6;
  uint unused38;
  undefined1 *unused39;
  undefined4 unused40;
  int unused41;
  int unused42;
  int *strRep6;
  uint *msgText7;
  undefined1 *unused43;
  undefined4 unused44;
  int unused45;
  int unused46;
  int *strRep7;
  uint *msgText8;
  undefined1 *unused47;
  undefined4 unused48;
  int unused49;
  int unused50;
  uint *msgText9;
  uint unused51;
  byte local_329;
  uint local_328;
  undefined4 unused52;
  int unused53;
  byte local_319;
  uint local_318;
  byte local_311;
  uint local_310;
  int local_30c;
  undefined1 *unused54;
  undefined4 unused55;
  int unused56;
  int unused57;
  int *strRep8;
  uint *msgText10;
  undefined1 *unused58;
  undefined4 unused59;
  int unused60;
  int unused61;
  int *strRep9;
  uint *msgText11;
  undefined1 *unused62;
  undefined4 unused63;
  int unused64;
  int unused65;
  int *strRep10;
  uint *msgText12;
  uint unused66;
  uint local_2a4;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  int str13;
  undefined1 str2 [8];
  int str14;
  undefined1 str3 [8];
  int str15;
  undefined4 failure2 [6];
  undefined4 failure3 [6];
  undefined4 failure4 [36];
  undefined1 str4 [8];
  int str16;
  undefined1 str5 [8];
  int str17;
  undefined1 str6 [8];
  int str18;
  undefined1 str7 [8];
  int str19;
  undefined1 str8 [8];
  int str20;
  undefined1 str9 [8];
  int str21;
  undefined4 failure5 [6];
  undefined4 failure6 [6];
  undefined4 failure7 [6];
  undefined4 failure8 [6];
  undefined4 failure9 [6];
  undefined4 failure10 [6];
  undefined1 str10 [8];
  int str22;
  undefined1 str11 [8];
  int str23;
  undefined1 str12 [8];
  int str24;
  undefined4 failure11 [6];
  undefined4 failure12 [6];
  undefined4 failure13 [6];
  int *local_24;
  char local_20;
  
  unused3 = param_1;
  __InitExceptBlockLDTC(0x502674);
  local_2a4 = 0;
  ehContext = 0x14;
  local_24 = param_4;
  if (*(int *)(*param_4 + 0x28) != 0) {
    FUN_004d170c(*(int **)(*param_4 + 0x28));
  }
  if (DAT_00515b64 != '\0') {
    if (param_4 == (int *)&DAT_0051bb24) {
      FUN_004de85c((int *)&DAT_00517358);
    }
    if (param_4 == &DAT_0051bb64) {
      FUN_004de85c((int *)&DAT_00517370);
    }
  }
  if ((*(int *)(*param_4 + 0x24) != 0) && ((*(byte *)(*(int *)(*param_4 + 0x24) + 4) & 1) != 0)) {
    (**(code **)(**(int **)(*param_4 + 0x24) + 0xc))();
  }
  local_20 = *(int *)(*param_4 + 0x30) == 0;
  if (!(bool)local_20) {
    iVar3 = *param_4;
    uVar8 = *(uint *)(iVar3 + 0x30);
    unused66 = uVar8 | 1;
    if (*(int *)(iVar3 + 0x24) == 0) {
      *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 1;
    }
    uVar8 = uVar8 | 1;
    *(uint *)(iVar3 + 0x30) = uVar8;
    if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34)) != 0) {
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 4) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        copyCtorMask = 1;
        copyCtor = &LAB_0047ec80;
        objectDtor = 0;
        ehContext = 0x20;
        msgText12 = (uint *)__rwstd::except_msg_string::format(exceptMsg12,PTR_s_iostream_object_has_failbit_set_00515af8);
        iVar2 = std::string::string_from_cstr((int)str12,msgText12);
        ehDtorCount = ehDtorCount + 1;
        std::ios_base::failure::failure(failure13,iVar2);
        ehDtorCount = ehDtorCount + 2;
        if (str24 != 0) {
          if (*(int *)(str24 + -0xc) != -1) {
            strRep10 = (int *)(str24 + -0xc);
            if (strRep10 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else if (strRep10 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else {
              *strRep10 = *strRep10 + -1;
              iVar2 = *strRep10 + 1;
            }
            if (iVar2 != 0) goto LAB_0047d325;
          }
          unused65 = str24 + -0xc;
          unused64 = str24 + -0xc;
          operator_delete();
          unused63 = 0;
          unused62 = str12;
          str24 = 0;
          unused12 = 0;
        }
LAB_0047d325:
        ehContext = 0x14;
        _ThrowExceptionLDTC((uint *)&DAT_0047ec18,failure13,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 1) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        copyCtorMask = 1;
        copyCtor = &LAB_0047ec80;
        objectDtor = 0;
        ehContext = 0x38;
        msgText11 = (uint *)__rwstd::except_msg_string::format(exceptMsg11,PTR_s_iostream_object_has_badbit_set_00515afc);
        iVar2 = std::string::string_from_cstr((int)str11,msgText11);
        ehDtorCount = ehDtorCount + 1;
        std::ios_base::failure::failure(failure12,iVar2);
        ehDtorCount = ehDtorCount + 2;
        if (str23 != 0) {
          if (*(int *)(str23 + -0xc) != -1) {
            strRep9 = (int *)(str23 + -0xc);
            if (strRep9 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else if (strRep9 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else {
              *strRep9 = *strRep9 + -1;
              iVar2 = *strRep9 + 1;
            }
            if (iVar2 != 0) goto LAB_0047d478;
          }
          unused61 = str23 + -0xc;
          unused60 = str23 + -0xc;
          operator_delete();
          unused59 = 0;
          unused58 = str11;
          str23 = 0;
          unused11 = 0;
        }
LAB_0047d478:
        ehContext = 0x14;
        _ThrowExceptionLDTC((uint *)&DAT_0047ec18,failure12,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 2) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        uVar8 = 1;
        copyCtor = &LAB_0047ec80;
        objectDtor = 0;
        ehContext = 0x50;
        msgText10 = (uint *)__rwstd::except_msg_string::format(exceptMsg10,PTR_s_iostream_object_has_eofbit_set_00515b00);
        iVar3 = std::string::string_from_cstr((int)str10,msgText10);
        ehDtorCount = ehDtorCount + 1;
        std::ios_base::failure::failure(failure11,iVar3);
        ehDtorCount = ehDtorCount + 2;
        if (str22 != 0) {
          if (*(int *)(str22 + -0xc) != -1) {
            strRep8 = (int *)(str22 + -0xc);
            if (strRep8 == &g_nullStringRep) {
              iVar3 = 1;
            }
            else if (strRep8 == &g_nullStringRep) {
              iVar3 = 1;
            }
            else {
              *strRep8 = *strRep8 + -1;
              iVar3 = *strRep8 + 1;
            }
            if (iVar3 != 0) goto LAB_0047d5dd;
          }
          unused57 = str22 + -0xc;
          unused56 = str22 + -0xc;
          operator_delete();
          unused55 = 0;
          unused54 = str10;
          str22 = 0;
          unused10 = 0;
        }
LAB_0047d5dd:
        ehContext = 0x14;
        _ThrowExceptionLDTC((uint *)&DAT_0047ec18,failure11,objectDtor,copyCtor,uVar8,throwFlags,throwFile,throwLine);
      }
    }
  }
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x68;
  if (local_20 != '\0') {
    local_30c = *(int *)(*(int *)(param_5 + 8) + -4);
    iVar3 = *(int *)(*param_4 + 0xc) - local_30c;
    if (((*(byte *)(*param_4 + 4) & 0xb0) == 0) || ((*(byte *)(*param_4 + 4) & 0x80) != 0)) {
      do {
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) goto LAB_0047d6b7;
        local_311 = *(byte *)(*param_4 + 0x2c);
        piVar4 = *(int **)(*param_4 + 0x24);
        if ((uint)piVar4[6] < (uint)piVar4[7]) {
          pbVar1 = (byte *)piVar4[6];
          piVar4[6] = piVar4[6] + 1;
          *pbVar1 = local_311;
          local_310 = (uint)local_311;
        }
        else {
          local_310 = (**(code **)(*piVar4 + 0x24))();
        }
      } while (local_310 != 0xffffffff);
      local_2a4 = 1;
    }
LAB_0047d6b7:
    if ((*(int *)(*param_4 + 0x30) == 0) && ((*(byte *)(*param_4 + 4) & 0x10) != 0)) {
      do {
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) goto LAB_0047d749;
        local_319 = *(byte *)(*param_4 + 0x2c);
        piVar4 = *(int **)(*param_4 + 0x24);
        if ((uint)piVar4[6] < (uint)piVar4[7]) {
          pbVar1 = (byte *)piVar4[6];
          piVar4[6] = piVar4[6] + 1;
          *pbVar1 = local_319;
          local_318 = (uint)local_319;
        }
        else {
          local_318 = (**(code **)(*piVar4 + 0x24))();
        }
      } while (local_318 != 0xffffffff);
      local_2a4 = 1;
    }
LAB_0047d749:
    if (((*(int *)(*param_4 + 0x30) == 0) && (local_30c != 0)) && (*(int *)(*param_4 + 0x24) != 0))
    {
      unused53 = local_30c;
      unused52 = *(undefined4 *)(param_5 + 8);
      iVar2 = (**(code **)(**(int **)(*param_4 + 0x24) + 0x2c))();
      if (iVar2 != local_30c) {
        local_2a4 = 1;
      }
    }
    if ((*(int *)(*param_4 + 0x30) == 0) && ((*(byte *)(*param_4 + 4) & 0x20) != 0)) {
      do {
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) goto LAB_0047d84b;
        local_329 = *(byte *)(*param_4 + 0x2c);
        piVar4 = *(int **)(*param_4 + 0x24);
        if ((uint)piVar4[6] < (uint)piVar4[7]) {
          pbVar1 = (byte *)piVar4[6];
          piVar4[6] = piVar4[6] + 1;
          *pbVar1 = local_329;
          local_328 = (uint)local_329;
        }
        else {
          local_328 = (**(code **)(*piVar4 + 0x24))();
        }
      } while (local_328 != 0xffffffff);
      local_2a4 = 1;
    }
LAB_0047d84b:
    *(undefined4 *)(*param_4 + 0xc) = 0;
  }
  ehDtorCount = ehDtorCount + -1;
  if (((*(byte *)(*local_24 + 5) & 0x20) != 0) &&
     (iVar3 = (**(code **)(**(int **)(*local_24 + 0x24) + 0x30))(), iVar3 == -1)) {
    iVar3 = *local_24;
    uVar8 = *(uint *)(iVar3 + 0x30);
    unused51 = uVar8 | 1;
    if (*(int *)(iVar3 + 0x24) == 0) {
      *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 1;
    }
    uVar8 = uVar8 | 1;
    *(uint *)(iVar3 + 0x30) = uVar8;
    if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34)) != 0) {
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 4) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        copyCtorMask = 1;
        copyCtor = &LAB_0047ec80;
        objectDtor = 0;
        ehContext = 0x80;
        msgText9 = (uint *)__rwstd::except_msg_string::format(exceptMsg9,PTR_s_iostream_object_has_failbit_set_00515af8);
        iVar2 = std::string::string_from_cstr((int)str9,msgText9);
        ehDtorCount = ehDtorCount + 1;
        std::ios_base::failure::failure(failure10,iVar2);
        ehDtorCount = ehDtorCount + 2;
        if (str21 != 0) {
          if (*(int *)(str21 + -0xc) != -1) {
            piVar4 = (int *)(str21 + -0xc);
            if (piVar4 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else if (piVar4 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else {
              *piVar4 = *piVar4 + -1;
              iVar2 = *piVar4 + 1;
            }
            if (iVar2 != 0) goto LAB_0047d9e6;
          }
          unused50 = str21 + -0xc;
          unused49 = str21 + -0xc;
          operator_delete();
          unused48 = 0;
          unused47 = str9;
          str21 = 0;
          unused9 = 0;
        }
LAB_0047d9e6:
        ehContext = 0x74;
        _ThrowExceptionLDTC((uint *)&DAT_0047ec18,failure10,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 1) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        copyCtorMask = 1;
        copyCtor = &LAB_0047ec80;
        objectDtor = 0;
        ehContext = 0x98;
        msgText8 = (uint *)__rwstd::except_msg_string::format(exceptMsg8,PTR_s_iostream_object_has_badbit_set_00515afc);
        iVar2 = std::string::string_from_cstr((int)str8,msgText8);
        ehDtorCount = ehDtorCount + 1;
        std::ios_base::failure::failure(failure9,iVar2);
        ehDtorCount = ehDtorCount + 2;
        if (str20 != 0) {
          if (*(int *)(str20 + -0xc) != -1) {
            strRep7 = (int *)(str20 + -0xc);
            if (strRep7 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else if (strRep7 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else {
              *strRep7 = *strRep7 + -1;
              iVar2 = *strRep7 + 1;
            }
            if (iVar2 != 0) goto LAB_0047db51;
          }
          unused46 = str20 + -0xc;
          unused45 = str20 + -0xc;
          operator_delete();
          unused44 = 0;
          unused43 = str8;
          str20 = 0;
          unused8 = 0;
        }
LAB_0047db51:
        ehContext = 0x74;
        _ThrowExceptionLDTC((uint *)&DAT_0047ec18,failure9,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 2) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        uVar8 = 1;
        copyCtor = &LAB_0047ec80;
        objectDtor = 0;
        ehContext = 0xb0;
        msgText7 = (uint *)__rwstd::except_msg_string::format(exceptMsg7,PTR_s_iostream_object_has_eofbit_set_00515b00);
        iVar3 = std::string::string_from_cstr((int)str7,msgText7);
        ehDtorCount = ehDtorCount + 1;
        std::ios_base::failure::failure(failure8,iVar3);
        ehDtorCount = ehDtorCount + 2;
        if (str19 != 0) {
          if (*(int *)(str19 + -0xc) != -1) {
            strRep6 = (int *)(str19 + -0xc);
            if (strRep6 == &g_nullStringRep) {
              iVar3 = 1;
            }
            else if (strRep6 == &g_nullStringRep) {
              iVar3 = 1;
            }
            else {
              *strRep6 = *strRep6 + -1;
              iVar3 = *strRep6 + 1;
            }
            if (iVar3 != 0) goto LAB_0047dcbc;
          }
          unused42 = str19 + -0xc;
          unused41 = str19 + -0xc;
          operator_delete();
          unused40 = 0;
          unused39 = str7;
          str19 = 0;
          unused7 = 0;
        }
LAB_0047dcbc:
        ehContext = 0x74;
        _ThrowExceptionLDTC((uint *)&DAT_0047ec18,failure8,objectDtor,copyCtor,uVar8,throwFlags,throwFile,throwLine);
      }
    }
  }
  if ((DAT_00515b64 != '\0') &&
     (((local_24 == (int *)&DAT_0051bb24 || (local_24 == &DAT_0051bb64)) &&
      (iVar3 = (**(code **)(**(int **)(*local_24 + 0x24) + 0x30))(), iVar3 == -1)))) {
    iVar3 = *local_24;
    uVar8 = *(uint *)(iVar3 + 0x30);
    unused38 = uVar8 | 1;
    if (*(int *)(iVar3 + 0x24) == 0) {
      *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 1;
    }
    uVar8 = uVar8 | 1;
    *(uint *)(iVar3 + 0x30) = uVar8;
    if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34)) != 0) {
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 4) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        copyCtorMask = 1;
        copyCtor = &LAB_0047ec80;
        objectDtor = 0;
        ehContext = 200;
        msgText6 = (uint *)__rwstd::except_msg_string::format(exceptMsg6,PTR_s_iostream_object_has_failbit_set_00515af8);
        iVar2 = std::string::string_from_cstr((int)str6,msgText6);
        ehDtorCount = ehDtorCount + 1;
        std::ios_base::failure::failure(failure7,iVar2);
        ehDtorCount = ehDtorCount + 2;
        if (str18 != 0) {
          if (*(int *)(str18 + -0xc) != -1) {
            piVar4 = (int *)(str18 + -0xc);
            if (piVar4 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else if (piVar4 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else {
              *piVar4 = *piVar4 + -1;
              iVar2 = *piVar4 + 1;
            }
            if (iVar2 != 0) goto LAB_0047de87;
          }
          unused37 = str18 + -0xc;
          unused36 = str18 + -0xc;
          operator_delete();
          unused35 = 0;
          unused34 = str6;
          str18 = 0;
          unused6 = 0;
        }
LAB_0047de87:
        ehContext = 0x74;
        _ThrowExceptionLDTC((uint *)&DAT_0047ec18,failure7,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 1) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        copyCtorMask = 1;
        copyCtor = &LAB_0047ec80;
        objectDtor = 0;
        ehContext = 0xe0;
        msgText5 = (uint *)__rwstd::except_msg_string::format(exceptMsg5,PTR_s_iostream_object_has_badbit_set_00515afc);
        iVar2 = std::string::string_from_cstr((int)str5,msgText5);
        ehDtorCount = ehDtorCount + 1;
        std::ios_base::failure::failure(failure6,iVar2);
        ehDtorCount = ehDtorCount + 2;
        if (str17 != 0) {
          if (*(int *)(str17 + -0xc) != -1) {
            strRep5 = (int *)(str17 + -0xc);
            if (strRep5 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else if (strRep5 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else {
              *strRep5 = *strRep5 + -1;
              iVar2 = *strRep5 + 1;
            }
            if (iVar2 != 0) goto LAB_0047dff2;
          }
          unused33 = str17 + -0xc;
          unused32 = str17 + -0xc;
          operator_delete();
          unused31 = 0;
          unused30 = str5;
          str17 = 0;
          unused5 = 0;
        }
LAB_0047dff2:
        ehContext = 0x74;
        _ThrowExceptionLDTC((uint *)&DAT_0047ec18,failure6,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 2) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        uVar8 = 1;
        copyCtor = &LAB_0047ec80;
        objectDtor = 0;
        ehContext = 0xf8;
        msgText4 = (uint *)__rwstd::except_msg_string::format(exceptMsg4,PTR_s_iostream_object_has_eofbit_set_00515b00);
        iVar3 = std::string::string_from_cstr((int)str4,msgText4);
        ehDtorCount = ehDtorCount + 1;
        std::ios_base::failure::failure(failure5,iVar3);
        ehDtorCount = ehDtorCount + 2;
        if (str16 != 0) {
          if (*(int *)(str16 + -0xc) != -1) {
            strRep4 = (int *)(str16 + -0xc);
            if (strRep4 == &g_nullStringRep) {
              iVar3 = 1;
            }
            else if (strRep4 == &g_nullStringRep) {
              iVar3 = 1;
            }
            else {
              *strRep4 = *strRep4 + -1;
              iVar3 = *strRep4 + 1;
            }
            if (iVar3 != 0) goto LAB_0047e15d;
          }
          unused29 = str16 + -0xc;
          unused28 = str16 + -0xc;
          operator_delete();
          unused27 = 0;
          unused26 = str4;
          str16 = 0;
          unused4 = 0;
        }
LAB_0047e15d:
        ehContext = 0x74;
        _ThrowExceptionLDTC((uint *)&DAT_0047ec18,failure5,objectDtor,copyCtor,uVar8,throwFlags,throwFile,throwLine);
      }
    }
  }
  if (local_2a4 == 0) goto LAB_0047ec00;
  unused25 = local_2a4;
  local_464 = *param_4;
  local_468 = *(uint *)(local_464 + 0x30) | local_2a4;
  local_46c = local_468;
  if (*(int *)(local_464 + 0x24) == 0) {
    local_46c = local_468 | 1;
    *(uint *)(local_464 + 0x30) = *(uint *)(local_464 + 0x30) | 1;
  }
  *(uint *)(local_464 + 0x30) = local_46c;
  if ((*(uint *)(local_464 + 0x30) & *(uint *)(local_464 + 0x34)) == 0) goto LAB_0047ec00;
  if ((*(uint *)(local_464 + 0x30) & *(uint *)(local_464 + 0x34) & 4) != 0) {
    *(uint *)(local_464 + 0x30) = local_46c;
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    uVar8 = 1;
    copyCtor = &LAB_0047ec80;
    objectDtor = 0;
    ehContext = 0x17c;
    msgText3 = (uint *)__rwstd::except_msg_string::format(exceptMsg3,PTR_s_iostream_object_has_failbit_set_00515af8);
    iVar3 = std::string::string_from_cstr((int)str3,msgText3);
    ehDtorCount = ehDtorCount + 1;
    std::ios_base::failure::failure(failure4,iVar3);
    ehDtorCount = ehDtorCount + 2;
    if (str15 != 0) {
      if (*(int *)(str15 + -0xc) != -1) {
        strRep3 = (int *)(str15 + -0xc);
        if (strRep3 == &g_nullStringRep) {
          iVar3 = 1;
        }
        else if (strRep3 == &g_nullStringRep) {
          iVar3 = 1;
        }
        else {
          *strRep3 = *strRep3 + -1;
          iVar3 = *strRep3 + 1;
        }
        if (iVar3 != 0) goto LAB_0047e8dd;
      }
      unused24 = str15 + -0xc;
      unused23 = str15 + -0xc;
      operator_delete();
      unused22 = 0;
      unused21 = str3;
      str15 = 0;
      unused2 = 0;
    }
LAB_0047e8dd:
    ehContext = 0x170;
    _ThrowExceptionLDTC((uint *)&DAT_0047ec18,failure4,objectDtor,copyCtor,uVar8,throwFlags,throwFile,throwLine);
  }
  if ((*(uint *)(local_464 + 0x30) & *(uint *)(local_464 + 0x34) & 1) != 0) {
    *(uint *)(local_464 + 0x30) = local_46c;
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    uVar8 = 1;
    copyCtor = &LAB_0047ec80;
    objectDtor = 0;
    ehContext = 0x194;
    msgText2 = (uint *)__rwstd::except_msg_string::format(exceptMsg2,PTR_s_iostream_object_has_badbit_set_00515afc);
    iVar3 = std::string::string_from_cstr((int)str2,msgText2);
    ehDtorCount = ehDtorCount + 1;
    std::ios_base::failure::failure(failure3,iVar3);
    ehDtorCount = ehDtorCount + 2;
    if (str14 != 0) {
      if (*(int *)(str14 + -0xc) != -1) {
        strRep2 = (int *)(str14 + -0xc);
        if (strRep2 == &g_nullStringRep) {
          iVar3 = 1;
        }
        else if (strRep2 == &g_nullStringRep) {
          iVar3 = 1;
        }
        else {
          *strRep2 = *strRep2 + -1;
          iVar3 = *strRep2 + 1;
        }
        if (iVar3 != 0) goto LAB_0047ea60;
      }
      unused20 = str14 + -0xc;
      unused19 = str14 + -0xc;
      operator_delete();
      unused18 = 0;
      unused17 = str2;
      str14 = 0;
      unused = 0;
    }
LAB_0047ea60:
    ehContext = 0x170;
    _ThrowExceptionLDTC((uint *)&DAT_0047ec18,failure3,objectDtor,copyCtor,uVar8,throwFlags,throwFile,throwLine);
  }
  if ((*(uint *)(local_464 + 0x30) & *(uint *)(local_464 + 0x34) & 2) == 0) goto LAB_0047ec00;
  *(uint *)(local_464 + 0x30) = local_46c;
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  uVar8 = 1;
  copyCtor = &LAB_0047ec80;
  objectDtor = 0;
  ehContext = 0x1ac;
  msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_iostream_object_has_eofbit_set_00515b00);
  iVar3 = std::string::string_from_cstr((int)str,msgText);
  ehDtorCount = ehDtorCount + 1;
  std::ios_base::failure::failure(failure2,iVar3);
  ehDtorCount = ehDtorCount + 2;
  if (str13 != 0) {
    if (*(int *)(str13 + -0xc) != -1) {
      strRep = (int *)(str13 + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar3 = *strRep + 1;
      }
      if (iVar3 != 0) goto LAB_0047ebe3;
    }
    unused16 = str13 + -0xc;
    unused15 = str13 + -0xc;
    operator_delete();
    unused14 = 0;
    unused13 = str;
    str13 = 0;
  }
LAB_0047ebe3:
  ehContext = 0x170;
  _ThrowExceptionLDTC((uint *)&DAT_0047ec18,failure2,objectDtor,copyCtor,uVar8,throwFlags,throwFile,throwLine);
LAB_0047ec00:
  *sehChainHead = sehPrevFrame;
  return param_4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047ede4  RtfFilter::AddFontName   (442 bytes)   [analysis]
//   records a font table entry (vector of names)
//   file placement: inferred (address adjacency)
void __cdecl RtfFilter::AddFontName(int self,undefined4 index,undefined4 *name,int charset)

{
  int iVar1;
  int refs;
  uint len;
  int value;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  int str2;
  
  __InitExceptBlockLDTC(0x502858);
  value = std::string::string_from_buf((int)str,name,charset - (int)name);
  if (*(int *)(self + 0x198) == *(int *)(self + 0x1a8)) {
    std::vector_string::insert_aux(self + 400,*(int *)(self + 0x198),value);
  }
  else {
    iVar1 = *(int *)(self + 0x198);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 8) = 0;
      refs = *(int *)(*(int *)(value + 8) + -0xc);
      if (refs == -1 || refs + 1 < 0) {
        len = *(uint *)(*(int *)(value + 8) + -4);
        rep = std::string::__getRep(iVar1,len,len);
        *(int **)(iVar1 + 8) = rep + 3;
        memcpy(*(undefined4 **)(iVar1 + 8),*(undefined4 **)(value + 8),len);
      }
      else {
        *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(value + 8);
        rep = (int *)(*(int *)(iVar1 + 8) + -0xc);
        if (rep != &g_nullStringRep) {
          *rep = *rep + 1;
        }
      }
    }
    *(int *)(self + 0x198) = *(int *)(self + 0x198) + 0x10;
  }
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      rep = (int *)(str2 + -0xc);
      if (rep == &g_nullStringRep) {
        value = 1;
      }
      else if (rep == &g_nullStringRep) {
        value = 1;
      }
      else {
        *rep = *rep + -1;
        value = *rep + 1;
      }
      if (value != 0) goto LAB_0047ef8d;
    }
    operator_delete();
  }
LAB_0047ef8d:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047efa0  RtfFilter::AddText   (821 bytes)   [analysis]
//   appends plain text to the current run, converting characters for the active code page
//   file placement: inferred (address adjacency)
void __cdecl RtfFilter::AddText(int self,int text,uint len,int flags)

{
  int str2;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [240];
  undefined1 *unused;
  undefined4 unused2;
  int *unused3;
  int *unused4;
  int *strRep;
  int *newData;
  int *unused5;
  uint unused6;
  undefined1 *unused7;
  int *newRep;
  int *unused8;
  uint len2;
  int *strRep2;
  undefined1 *unused9;
  int *unused10;
  undefined4 unused11;
  uint *msgText;
  int str;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str3 [8];
  int *str4;
  undefined **lengthError [2];
  undefined1 newStr [8];
  int *unused12;
  
  __InitExceptBlockLDTC(0x5028bc);
  if ((text < 0) || (0xffff < text)) {
    *(undefined4 *)(self + 0x214) = 0xffffffff;
    goto LAB_0047f2c5;
  }
  *(int *)(self + 0x214) = text;
  str2 = *(int *)(self + 0x1b8) - *(int *)(self + 0x1b4);
  if (str2 < 0) {
    str2 = str2 + 0xf;
  }
  if (str2 >> 4 <= text) {
    std::vector_string::resize(self + 0x1b0,text + 1);
    std::vector_string::resize(self + 0x1d0,text + 1);
    RtfFilter::FlushTextBuffer(self + 0x1f0,text + 1);
    str = text * 0x10 + *(int *)(self + 0x1d4);
    if ((*(int *)&g_stringNpos) - 0xeU < 0x20) {
      throwLine = 0;
      throwFile = 0;
      throwFlags = 0;
      copyCtorMask = 1;
      copyCtor = &LAB_00408370;
      objectDtor = 0;
      ehContext = 0x14;
      msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_invalid_string_size_parameter_in_00516d20);
      std::string::string_from_cstr((int)str3,msgText);
      ehDtorCount = ehDtorCount + 2;
      lengthError[0] = &std::logic_error::vftable;
      unused11 = 0;
      unused12 = (int *)0x0;
      ehContext = 0x20;
      if (str4[-3] == -1 || str4[-3] + 1 < 0) {
        len2 = str4[-1];
        newRep = std::string::__getRep(newStr,len2,len2);
        unused7 = newStr;
        newData = newRep + 3;
        unused6 = len2;
        unused5 = str4;
        unused8 = newData;
        unused12 = newData;
        memcpy(newData,str4,len2);
      }
      else {
        unused9 = newStr;
        unused10 = str4;
        unused12 = str4;
        strRep2 = str4 + -3;
        if (strRep2 != &g_nullStringRep) {
          *strRep2 = *strRep2 + 1;
        }
      }
      ehContext = 0x14;
      lengthError[0] = &std::length_error::vftable;
      ehDtorCount = ehDtorCount + 2;
      if (str4 != (int *)0x0) {
        if (str4[-3] != -1) {
          strRep = str4 + -3;
          if (strRep == &g_nullStringRep) {
            str2 = 1;
          }
          else if (strRep == &g_nullStringRep) {
            str2 = 1;
          }
          else {
            *strRep = *strRep + -1;
            str2 = *strRep + 1;
          }
          if (str2 != 0) goto LAB_0047f250;
        }
        unused4 = str4 + -3;
        unused3 = str4 + -3;
        operator_delete();
        unused2 = 0;
        unused = str3;
        str4 = (int *)0x0;
      }
LAB_0047f250:
      ehContext = 8;
      _ThrowExceptionLDTC((uint *)&DAT_00408314,(undefined4*)lengthError,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
    }
    if (*(uint *)(*(int *)(str + 8) + -8) < 0x20) {
      FUN_004d6d58(str,0x20);
    }
  }
  str2 = text * 0x10 + *(int *)(self + 0x1b4);
  std::string::replace(str2,0,*(uint *)(*(int *)(str2 + 8) + -4),len,flags - len,0,
               flags - len);
  *(undefined1 *)(*(int *)(self + 500) + text) = 0;
LAB_0047f2c5:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047f2d8  RtfFilter::FlushTextBuffer   (110 bytes)   [analysis]
//   passes the buffered characters on
//   file placement: inferred (address adjacency)
void __cdecl RtfFilter::FlushTextBuffer(int self,uint count)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  uint3 in_ECX;
  undefined1 *puVar4;
  undefined4 uStack_8;
  
  if ((uint)(*(int *)(self + 8) - *(int *)(self + 4)) < count) {
    uStack_8 = (uint)in_ECX;
    RtfFilter::ConvertTextBuffer(self,*(undefined1 **)(self + 8),
                 count - ((int)*(undefined1 **)(self + 8) - *(int *)(self + 4)),
                 (undefined1 *)((int)&uStack_8 + 3));
  }
  else {
    puVar1 = *(undefined1 **)(self + 8);
    if (count < (uint)((int)puVar1 - *(int *)(self + 4))) {
      puVar4 = (undefined1 *)(*(int *)(self + 4) + count);
      puVar3 = std::copy_bytes_47f6cc(puVar1,puVar1,puVar4);
      iVar2 = *(int *)(self + 8);
      *(int *)(self + 8) = *(int *)(self + 8) - ((int)puVar1 - (int)puVar4);
      std::_Destroy_range_1(self,(int)puVar3,iVar2);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047f348  RtfFilter::ConvertTextBuffer   (530 bytes, 2 ranges)   [analysis]
//   converts the buffered bytes (copying through a temporary range)
//   file placement: inferred (address adjacency)
int __cdecl RtfFilter::ConvertTextBuffer(int param_1,undefined1 *first,uint param_3,undefined1 *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  int *sehChainHead;
  uint local_3c;
  int local_38;
  int local_2c;
  undefined2 ehContext;
  int ehDtorCount;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x502930);
  if (param_3 == 0) {
    *sehChainHead = local_2c;
  }
  else {
    puVar2 = *(undefined1 **)(param_1 + 8);
    if ((uint)(*(int *)(param_1 + 0x18) - (int)puVar2) < param_3) {
      local_3c = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (param_3 < local_3c) {
        puVar3 = &local_3c;
      }
      else {
        puVar3 = &param_3;
      }
      local_38 = local_3c + *puVar3;
      puVar2 = (undefined1 *)operator_new();
      if (puVar2 == (undefined1 *)0x0) {
        ehContext = 8;
        badAlloc = &std::bad_alloc::vftable;
        ehDtorCount = ehDtorCount + 2;
        _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
      }
      ehContext = 0x14;
      std::copy_bytes(*(undefined1 **)(param_1 + 4),first,puVar2);
      std::fill_n_bytes(puVar2 + ((int)first - *(int *)(param_1 + 4)),param_3,param_4);
      std::copy_bytes(first,*(undefined1 **)(param_1 + 8),
                   puVar2 + (int)(first + (param_3 - *(int *)(param_1 + 4))));
      ehContext = 0;
      iVar4 = *(int *)(param_1 + 4);
      iVar1 = *(int *)(param_1 + 8);
      std::_Destroy_range_1(param_1,iVar4,iVar1);
      operator_delete();
      *(undefined1 **)(param_1 + 0x18) = puVar2 + local_38;
      *(undefined1 **)(param_1 + 8) = puVar2 + param_3 + (iVar1 - iVar4);
      *(undefined1 **)(param_1 + 4) = puVar2;
    }
    else if (param_3 < (uint)((int)puVar2 - (int)first)) {
      std::copy_bytes(puVar2 + -param_3,puVar2,puVar2);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3;
      std::copy_backward_bytes(first,puVar2 + -param_3,puVar2);
      param_1 = std::copy_bytes_47f630(first,first + param_3,param_4);
    }
    else {
      iVar4 = param_3 - ((int)puVar2 - (int)first);
      std::fill_n_bytes(puVar2,iVar4,param_4);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar4;
      std::copy_bytes(first,puVar2,first + param_3);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (param_3 - iVar4);
      param_1 = std::copy_bytes_47f630(first,puVar2,param_4);
    }
    *sehChainHead = local_2c;
    local_2c = param_1;
  }
  return local_2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047f57c  std::copy_bytes   (86 bytes, 2 ranges)   [analysis]
//   copy over a byte range
//   file placement: inferred (address adjacency)
undefined1 * __cdecl std::copy_bytes(undefined1 *first,undefined1 *last,undefined1 *dest)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x502970);
  for (; last != first; first = first + 1) {
    *dest = *first;
    dest = dest + 1;
  }
  *sehChainHead = sehPrevFrame;
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047f5fc  std::_Destroy_range_1_47f5fc   (20 bytes)   [analysis]
//   destroys a range of bytes (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_1_47f5fc(int param_1,int param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 1) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047f610  std::copy_backward_bytes   (32 bytes)   [analysis]
//   copy_backward over a byte range
//   file placement: inferred (address adjacency)
undefined1 * __cdecl std::copy_backward_bytes(undefined1 *first,undefined1 *last,undefined1 *destEnd)

{
  while (last != first) {
    last = last + -1;
    destEnd = destEnd + -1;
    *destEnd = *last;
  }
  return destEnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047f630  std::copy_bytes_47f630   (29 bytes)   [analysis]
//   copy over a byte range
//   file placement: inferred (address adjacency)
undefined1 * __cdecl std::copy_bytes_47f630(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047f650  std::fill_n_bytes   (84 bytes, 2 ranges)   [analysis]
//   fills n bytes with a value
//   file placement: inferred (address adjacency)
void __cdecl std::fill_n_bytes(undefined1 *param_1,int param_2,undefined1 *param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5029a4);
  while (param_2 != 0) {
    *param_1 = *param_3;
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047f6cc  std::copy_bytes_47f6cc   (32 bytes)   [analysis]
//   copy over a byte range
//   file placement: inferred (address adjacency)
undefined1 * __cdecl std::copy_bytes_47f6cc(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047f6ec  RtfFilter::SetCharAt   (51 bytes)   [analysis]
//   stores a character at the current output position (bounds checked)
//   file placement: inferred (address adjacency)
void __cdecl RtfFilter::SetCharAt(int self,undefined1 ch)

{
  int pos;
  
  pos = *(int *)(self + 0x214);
  if ((-1 < pos) && (pos < *(int *)(self + 0x1f8) - *(int *)(self + 500))) {
    *(undefined1 *)(*(int *)(self + 500) + pos) = ch;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047f720  RtfFilter::BeginRun   (254 bytes)   [analysis]
//   starts a new text run with the current character and paragraph formats
//   file placement: inferred (address adjacency)
void __cdecl RtfFilter::BeginRun(int self,int kind,undefined4 value)

{
  int vec;
  int *pos;
  undefined4 uVar3;
  undefined4 *sehChainHead;
  undefined4 *text;
  undefined4 *source;
  undefined4 result [15];
  undefined4 local_d0 [39];
  int *unused;
  int *unused2;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  undefined4 *value2;
  
  __InitExceptBlockLDTC(0x5029c8);
  if (*(int *)(self + 4) == 0) {
    if (*(int *)(self + 0x254) != 0) {
      value2 = (undefined4 *)operator_new();
      if (value2 != (undefined4 *)0x0) {
        ehContext = 0x14;
        RtfFilter::MakeCharFormat(result,self);
        source = result;
        text = (undefined4 *)(self + 0xb8);
        RtfFilter::MakeParaFormat(local_d0,self);
        FormattedTextSegment::FormattedTextSegment(value2,local_d0,text,source);
        ehContext = 8;
      }
      vec = *(int *)(self + 0x254);
      pos = *(int **)(vec + 8);
      if (pos == *(int **)(vec + 0x18)) {
        std::vector_ptr::insert_aux_47f820(vec,pos,(undefined4*)&value2);
      }
      else {
        *pos = (int)value2;
        *(int *)(vec + 8) = *(int *)(vec + 8) + 4;
        unused = pos;
        unused2 = pos;
      }
    }
    uVar3 = *(undefined4 *)(self + 0x218);
    *(int *)(self + 0x218) = *(int *)(self + 0x218) + 1;
    *(undefined4 *)(kind * 4 + *(int *)(self + 0x224)) = uVar3;
    RtfFilter::FlushPendingWord(self);
    *(undefined4 *)(self + 0x29c) = value;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047f820  std::vector_ptr::insert_aux_47f820   (437 bytes, 2 ranges)   [analysis]
//   std::vector<T *> insert at a position, growing the storage when full
//   file placement: inferred (address adjacency)
void __cdecl std::vector_ptr::insert_aux_47f820(int vec,undefined4 *pos,undefined4 *value)

{
  int newCapacity;
  undefined4 *storage;
  int index;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x502a18);
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
    std::copy_ptr_47c8e8(*(undefined4 **)(vec + 4),pos,storage);
    index = (int)pos - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    storage[index >> 2] = *value;
    index = (int)pos - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    std::copy_ptr_47c8e8(pos,*(undefined4 **)(vec + 8),storage + (index >> 2) + 1);
    index = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    std::_Destroy_range_ptr_47c9a4(vec,*(int *)(vec + 4),*(int *)(vec + 8));
    operator_delete();
    *(undefined4 **)(vec + 0x18) = storage + newCapacity;
    *(undefined4 **)(vec + 8) = storage + (index >> 2) + 1;
    *(undefined4 **)(vec + 4) = storage;
  }
  else {
    *storage = storage[-1];
    std::copy_backward_ptr_47c980(pos,*(undefined4 **)(vec + 8) + -1,*(undefined4 **)(vec + 8));
    *pos = *value;
    *(int *)(vec + 8) = *(int *)(vec + 8) + 4;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047f9f8  RtfFilter::FlushPendingWord   (44 bytes)   [analysis]
//   writes a pending control word to the output RTF
//   file placement: inferred (address adjacency)
void __cdecl RtfFilter::FlushPendingWord(int self)

{
  if (*(uint **)(self + 0x29c) != (uint *)0x0) {
    FUN_004d5374(*(int **)(self + 0x244),*(uint **)(self + 0x29c));
    *(undefined4 *)(self + 0x29c) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047fa24  RtfFilter::Break   (131 bytes)   [analysis]
//   \page or \column break
//   file placement: inferred (address adjacency)
void __cdecl RtfFilter::Break(int self,uint token,int isColumn)

{
  int iVar1;
  
  if (*(int *)(self + 0x29c) == 0) {
    RtfFilter::HandleControlWord((undefined4 *)self,token,0xd,(int *)0x0);
  }
  RtfFilter::FlushPendingWord(self);
  if (*(int *)(self + 4) == 0) {
    if (*(int *)(self + 0x248) == 3) {
      if (isColumn == 1) {
        FUN_004d5374(*(int **)(self + 0x244),(uint *)"\\page ");
      }
      else {
        FUN_004d5374(*(int **)(self + 0x244),(uint *)"\\column ");
      }
    }
    iVar1 = RtfFilter::CurrentParagraph(self);
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0xc0) = isColumn;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047faa8  RtfFilter::SectionBreak   (113 bytes)   [analysis]
//   \sect\sectd
//   file placement: inferred (address adjacency)
void __cdecl RtfFilter::SectionBreak(int self)

{
  int iVar1;
  uint token;
  
  if (*(int *)(self + 0x29c) == 0) {
    RtfFilter::HandleControlWord((undefined4 *)self,token,0xd,(int *)0x0);
  }
  RtfFilter::FlushPendingWord(self);
  if (*(int *)(self + 4) == 0) {
    if (*(int *)(self + 0x248) == 3) {
      FUN_004d5374(*(int **)(self + 0x244),(uint *)"\\sect\\sectd ");
    }
    iVar1 = RtfFilter::CurrentParagraph(self);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0xc4) = 1;
      *(undefined4 *)(iVar1 + 0xc0) = 1;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047fb1c  RtfFilter::SetSectionBreakType   (109 bytes)   [analysis]
//   \sbknone/\sbkcol/... for the current section
//   file placement: inferred (address adjacency)
void __cdecl RtfFilter::SetSectionBreakType(int self,int type)

{
  int iVar1;
  
  if (*(int *)(self + 4) == 0) {
    if (*(int *)(self + 0x248) == 3) {
      FUN_004d50d0(*(int **)(self + 0x244),0x5c);
      FUN_004d5374(*(int **)(self + 0x244),(uint *)(&PTR_s_sbknone_00501658)[type]);
      FUN_004d50d0(*(int **)(self + 0x244),0x20);
    }
    iVar1 = RtfFilter::CurrentParagraph(self);
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0xc0) = type;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047fb8c  RtfFilter::SetColumns   (272 bytes)   [analysis]
//   \cols n for the current section
//   file placement: inferred (address adjacency)
void __cdecl RtfFilter::SetColumns(int self,undefined4 count)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *sehChainHead;
  undefined1 *puVar3;
  undefined4 sehPrevFrame;
  undefined1 result [8];
  int str;
  
  __InitExceptBlockLDTC(0x502a48);
  if (*(int *)(self + 4) != 0) goto LAB_0047fc8b;
  if (*(int *)(self + 0x248) == 3) {
    FormatInt((int)result);
    puVar3 = result;
    piVar1 = FUN_004d5374(*(int **)(self + 0x244),(uint *)"\\cols");
    std::operator_shl_string_47d0e8(piVar1,extraout_EDX,extraout_ECX,piVar1,(int)puVar3);
    if (str != 0) {
      if (*(int *)(str + -0xc) != -1) {
        piVar1 = (int *)(str + -0xc);
        if (piVar1 == &g_nullStringRep) {
          iVar2 = 1;
        }
        else if (piVar1 == &g_nullStringRep) {
          iVar2 = 1;
        }
        else {
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1 + 1;
        }
        if (iVar2 != 0) goto LAB_0047fc64;
      }
      operator_delete();
      str = 0;
    }
LAB_0047fc64:
    FUN_004d50d0(*(int **)(self + 0x244),0x20);
  }
  iVar2 = RtfFilter::CurrentParagraph(self);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0xc4) = count;
  }
LAB_0047fc8b:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047fc9c  RtfFilter::SetColumnSpacing   (272 bytes)   [analysis]
//   \colsx n for the current section
//   file placement: inferred (address adjacency)
void __cdecl RtfFilter::SetColumnSpacing(int self,undefined4 twips)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *sehChainHead;
  undefined1 *puVar3;
  undefined4 sehPrevFrame;
  undefined1 result [8];
  int str;
  
  __InitExceptBlockLDTC(0x502a78);
  if (*(int *)(self + 4) != 0) goto LAB_0047fd9b;
  if (*(int *)(self + 0x248) == 3) {
    FormatInt((int)result);
    puVar3 = result;
    piVar1 = FUN_004d5374(*(int **)(self + 0x244),(uint *)"\\colsx");
    std::operator_shl_string_47d0e8(piVar1,extraout_EDX,extraout_ECX,piVar1,(int)puVar3);
    if (str != 0) {
      if (*(int *)(str + -0xc) != -1) {
        piVar1 = (int *)(str + -0xc);
        if (piVar1 == &g_nullStringRep) {
          iVar2 = 1;
        }
        else if (piVar1 == &g_nullStringRep) {
          iVar2 = 1;
        }
        else {
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1 + 1;
        }
        if (iVar2 != 0) goto LAB_0047fd74;
      }
      operator_delete();
      str = 0;
    }
LAB_0047fd74:
    FUN_004d50d0(*(int **)(self + 0x244),0x20);
  }
  iVar2 = RtfFilter::CurrentParagraph(self);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 200) = twips;
  }
LAB_0047fd9b:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047fdac  RtfFilter::SetCharFormat   (883 bytes)   [analysis]
//   changes one character attribute (bold, italic, underline, strike, size, colour...) of the current run
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0047ff3b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl RtfFilter::SetCharFormat(int self,uint attribute,int value)

{
  undefined4 *puVar1;
  int iVar2;
  int *pos;
  undefined4 *puVar4;
  undefined4 *sehChainHead;
  byte bVar5;
  undefined4 local_e8 [15];
  undefined4 result [17];
  undefined4 unused;
  undefined *unused2;
  undefined1 *unused3;
  undefined4 unused4;
  undefined *unused5;
  undefined4 local_40;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 *local_18;
  undefined1 font [8];
  undefined *local_c;
  
  bVar5 = 0;
  __InitExceptBlockLDTC(0x502ac8);
  if ((value == *(int *)(self + 8 + attribute * 4)) ||
     (*(int *)(self + 8 + attribute * 4) = value, *(int *)(self + 4) != 0)) goto LAB_0048010f;
  if (*(int *)(self + 0x248) == 2) {
    local_40 = DAT_005017a0;
    if ((int)attribute < 4) {
      FUN_004d50d0(*(int **)(self + 0x244),0x3c);
      if (value != 1) {
        FUN_004d50d0(*(int **)(self + 0x244),0x2f);
      }
      FUN_004d50d0(*(int **)(self + 0x244),*(undefined1 *)((int)&local_40 + attribute));
      FUN_004d50d0(*(int **)(self + 0x244),0x3e);
    }
  }
  else if ((*(int *)(self + 0x248) == 3) && (value != -0x80000000)) {
    FUN_004d50d0(*(int **)(self + 0x244),0x5c);
    FUN_004d5374(*(int **)(self + 0x244),(uint *)(&PTR_DAT_005017a4)[attribute]);
    if (attribute < 4) {
      if (value == 0) {
        FUN_004d50d0(*(int **)(self + 0x244),0x30);
      }
    }
    else if (attribute == 4) {
      if ((*(int *)(self + 0x250) != 0) && (-1 < value)) {
        iVar2 = *(int *)(self + 0x1b8) - *(int *)(self + 0x1b4);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0xf;
        }
        if (value < iVar2 >> 4) {
          RtfFilter::ColourIndexOf(*(int *)(self + 0x250),value * 0x10 + *(int *)(self + 0x1b4));
          FUN_004d4ca4(*(int **)(self + 0x244));
        }
      }
    }
    else if (attribute == 5) {
      if (*(int *)(self + 0x250) != 0) {
        local_c = &g_emptyStringData;
        unused2 = &g_emptyStringData;
        ehDtorCount = ehDtorCount + 1;
        ehContext = 0x20;
        if (-1 < value) {
          iVar2 = *(int *)(self + 0x198) - *(int *)(self + 0x194);
          if (iVar2 < 0) {
            iVar2 = iVar2 + 0xf;
          }
          if (value < iVar2 >> 4) {
            std::string::operator_assign((int)font,value * 0x10 + *(int *)(self + 0x194));
          }
        }
        RtfFilter::FontIndexOf(*(int *)(self + 0x250),(int)font);
        FUN_004d4ca4(*(int **)(self + 0x244));
        ehDtorCount = ehDtorCount + -1;
        if (local_c != (undefined *)0x0) {
          if (*(int *)(local_c + -0xc) != -1) {
            pos = (int *)(local_c + -0xc);
            if (pos == &g_nullStringRep) {
              iVar2 = 1;
            }
            else if (pos == &g_nullStringRep) {
              iVar2 = 1;
            }
            else {
              *pos = *pos + -1;
              iVar2 = *pos + 1;
            }
            if (iVar2 != 0) goto LAB_00480014;
          }
          unused5 = local_c + -0xc;
          operator_delete();
          unused4 = 0;
          unused3 = font;
          local_c = (undefined *)0x0;
          unused = 0;
        }
LAB_00480014:
        ehContext = 0;
      }
    }
    else if (attribute == 6) {
      FUN_004d4ca4(*(int **)(self + 0x244));
    }
    FUN_004d50d0(*(int **)(self + 0x244),0x20);
  }
  puVar1 = (undefined4 *)RtfFilter::CurrentRunCount(self);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(int *)(puVar1[0x12] + -4) == 0) {
      RtfFilter::MakeCharFormat(result,self);
      puVar4 = result;
      for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar1 = *puVar4;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        puVar1 = puVar1 + (uint)bVar5 * -2 + 1;
      }
    }
    else {
      iVar2 = RtfFilter::CurrentParagraph(self);
      if (iVar2 != 0) {
        local_18 = (undefined4 *)operator_new();
        if (local_18 != (undefined4 *)0x0) {
          ehContext = 0x44;
          RtfFilter::MakeCharFormat(local_e8,self);
          RtfFilter::CopyRunFormat(local_18,local_e8);
          ehContext = 0x38;
        }
        pos = *(int **)(iVar2 + 0xa8);
        if (pos == *(int **)(iVar2 + 0xb8)) {
          std::vector_ptr::insert_aux_480144(iVar2 + 0xa0,pos,(undefined4*)&local_18);
        }
        else {
          *pos = (int)local_18;
          *(int *)(iVar2 + 0xa8) = *(int *)(iVar2 + 0xa8) + 4;
        }
      }
    }
  }
LAB_0048010f:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00480144  std::vector_ptr::insert_aux_480144   (437 bytes, 2 ranges)   [analysis]
//   std::vector<T *> insert at a position, growing the storage when full
//   file placement: inferred (address adjacency)
void __cdecl std::vector_ptr::insert_aux_480144(int vec,undefined4 *pos,undefined4 *value)

{
  int newCapacity;
  undefined4 *storage;
  int index;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x502b48);
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
    std::copy_ptr_480340(*(undefined4 **)(vec + 4),pos,storage);
    index = (int)pos - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    storage[index >> 2] = *value;
    index = (int)pos - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    std::copy_ptr_480340(pos,*(undefined4 **)(vec + 8),storage + (index >> 2) + 1);
    index = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    std::_Destroy_range_ptr_4803d8(vec,*(int *)(vec + 4),*(int *)(vec + 8));
    operator_delete();
    *(undefined4 **)(vec + 0x18) = storage + newCapacity;
    *(undefined4 **)(vec + 8) = storage + (index >> 2) + 1;
    *(undefined4 **)(vec + 4) = storage;
  }
  else {
    *storage = storage[-1];
    std::copy_backward_ptr_48031c(pos,*(undefined4 **)(vec + 8) + -1,*(undefined4 **)(vec + 8));
    *pos = *value;
    *(int *)(vec + 8) = *(int *)(vec + 8) + 4;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048031c  std::copy_backward_ptr_48031c   (36 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004063a8 (36 bytes; the code occurs several times, e.g. one template instance per type). copy_backward over a range of pointers
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_backward_ptr_48031c(undefined4 *first,undefined4 *last,undefined4 *destEnd)

{
  while (last != first) {
    last = last + -1;
    destEnd = destEnd + -1;
    *destEnd = *last;
  }
  return destEnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x00480340  std::copy_ptr_480340   (89 bytes, 2 ranges)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004063cc (89 bytes; the code occurs several times, e.g. one template instance per type). copy over a range of pointers
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_ptr_480340(undefined4 *first,undefined4 *last,undefined4 *dest)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x502b88);
  for (; last != first; first = first + 1) {
    *dest = *first;
    dest = dest + 1;
  }
  *sehChainHead = sehPrevFrame;
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x004803c0  std::_Destroy_range_ptr_4803c0   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x0040644c (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of pointers (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_ptr_4803c0(int first,int last)

{
  for (; last != first; first = first + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004803d8  std::_Destroy_range_ptr_4803d8   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004050b4 (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of pointers (nothing to do; the loop is left in)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_ptr_4803d8(undefined4 vec,int first,int last)

{
  for (; last != first; first = first + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004803f0  RtfFilter::SetAlignmentOrIndent   (190 bytes)   [analysis]
//   \qX alignment or \Xi n indents
//   file placement: inferred (address adjacency)
void __cdecl RtfFilter::SetAlignmentOrIndent(int self,int kind,int value)

{
  undefined4 *puVar1;
  int i;
  undefined4 *puVar3;
  undefined4 result [39];
  uint s [8];
  
  if (value != *(int *)(self + 0x24 + kind * 4)) {
    *(int *)(self + 0x24 + kind * 4) = value;
    RtfFilter::FlushPendingWord(self);
    if (*(int *)(self + 4) == 0) {
      if (*(int *)(self + 0x248) == 3) {
        if (kind == 0) {
          sprintf((undefined1 *)s,&DAT_00501ce8 /* "\q%c " */);
        }
        else {
          sprintf((undefined1 *)s,&DAT_00501cf2 /* "\%ci%d " */);
        }
        FUN_004d5374(*(int **)(self + 0x244),s);
      }
      puVar1 = (undefined4 *)RtfFilter::CurrentParagraph(self);
      if (puVar1 != (undefined4 *)0x0) {
        RtfFilter::MakeParaFormat(result,self);
        puVar3 = result;
        for (i = 0x27; i != 0; i = i + -1) {
          *puVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar1 = puVar1 + 1;
        }
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004804b0  RtfFilter::AddTabStop   (199 bytes)   [analysis]
//   \tx n
//   file placement: inferred (address adjacency)
void __cdecl RtfFilter::AddTabStop(int self,undefined4 position)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 result [39];
  undefined4 *local_8;
  
  if (*(int *)(self + 0x34) < 0x20) {
    iVar2 = *(int *)(self + 0x34);
    *(int *)(self + 0x34) = *(int *)(self + 0x34) + 1;
    *(undefined4 *)(self + 0x38 + iVar2 * 4) = position;
    RtfFilter::FlushPendingWord(self);
    if (*(int *)(self + 4) == 0) {
      if (*(int *)(self + 0x248) == 3) {
        FUN_004d5374(*(int **)(self + 0x244),(uint *)&DAT_00501cfe /* "\tx" */);
        FUN_004d4ca4(*(int **)(self + 0x244));
      }
      local_8 = (undefined4 *)RtfFilter::CurrentParagraph(self);
      if (local_8 != (undefined4 *)0x0) {
        RtfFilter::MakeParaFormat(result,self);
        puVar3 = result;
        puVar1 = local_8;
        for (iVar2 = 0x27; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar3 = local_8 + 0x33;
        puVar1 = (undefined4 *)(self + 0xb8);
        for (iVar2 = 0; iVar2 < *(short *)((int)local_8 + 0x1a); iVar2 = iVar2 + 1) {
          *puVar3 = *puVar1;
          puVar3 = puVar3 + 1;
          puVar1 = puVar1 + 1;
        }
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00480578  RtfFilter::ResetParagraph   (142 bytes)   [analysis]
//   \pard: default paragraph format
//   file placement: inferred (address adjacency)
void __cdecl RtfFilter::ResetParagraph(int self)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 result [39];
  
  if (0 < *(int *)(self + 0x34)) {
    *(undefined4 *)(self + 0x34) = 0;
    iVar2 = 0;
    puVar1 = (undefined4 *)(self + 0xb8);
    do {
      *puVar1 = 0;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < 0x20);
    RtfFilter::FlushPendingWord(self);
    if (*(int *)(self + 4) == 0) {
      if (*(int *)(self + 0x248) == 3) {
        FUN_004d5374(*(int **)(self + 0x244),(uint *)"\\pard ");
      }
      puVar1 = (undefined4 *)RtfFilter::CurrentParagraph(self);
      if (puVar1 != (undefined4 *)0x0) {
        RtfFilter::MakeParaFormat(result,self);
        puVar3 = result;
        for (iVar2 = 0x27; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar1 = puVar1 + 1;
        }
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00480608  RtfFilter::CurrentParagraph   (259 bytes)   [analysis]
//   the paragraph being built (starting one when needed)
//   file placement: inferred (address adjacency)
undefined4 __cdecl RtfFilter::CurrentParagraph(int self)

{
  int vec;
  undefined4 uVar2;
  int iVar3;
  undefined4 *sehChainHead;
  undefined4 *text;
  undefined4 *source;
  undefined4 result [15];
  undefined4 local_d0 [41];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  undefined4 *value;
  
  __InitExceptBlockLDTC(0x502bac);
  uVar2 = 0;
  iVar3 = *(int *)(self + 0x254);
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 8) - *(int *)(iVar3 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if (iVar3 >> 2 == 0) {
      value = (undefined4 *)operator_new();
      if (value != (undefined4 *)0x0) {
        ehContext = 0x14;
        RtfFilter::MakeCharFormat(result,self);
        source = result;
        text = (undefined4 *)(self + 0xb8);
        RtfFilter::MakeParaFormat(local_d0,self);
        FormattedTextSegment::FormattedTextSegment(value,local_d0,text,source);
        ehContext = 8;
      }
      vec = *(int *)(self + 0x254);
      iVar3 = 0;
      if (*(int *)(vec + 8) == *(int *)(vec + 0x18)) {
        std::vector_ptr::insert_aux_47f820(vec,*(undefined4 **)(vec + 8),(undefined4*)&value);
      }
      else {
        **(int **)(vec + 8) = (int)value;
        *(int *)(vec + 8) = *(int *)(vec + 8) + 4;
      }
    }
    else {
      iVar3 = (iVar3 >> 2) + -1;
    }
    uVar2 = *(undefined4 *)(*(int *)(*(int *)(self + 0x254) + 4) + iVar3 * 4);
  }
  *sehChainHead = sehPrevFrame;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048070c  RtfFilter::CurrentRunCount   (69 bytes)   [analysis]
//   number of runs in the current paragraph
//   file placement: inferred (address adjacency)
undefined4 __cdecl RtfFilter::CurrentRunCount(int self)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = RtfFilter::CurrentParagraph(self);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xa8) - *(int *)(iVar1 + 0xa4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    uVar3 = *(undefined4 *)(((iVar2 >> 2) + -1) * 4 + *(int *)(iVar1 + 0xa4));
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00480754  RtfFilter::MakeCharFormat   (5148 bytes)   [analysis]
//   the rich-edit CHARFORMAT for the current character state (font, size, colour from \red\green\blue table, effects)
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00481722) */
/* WARNING: Removing unreachable block (ram,0x0048182c) */
/* WARNING: Removing unreachable block (ram,0x004817cc) */
/* WARNING: Removing unreachable block (ram,0x0048181f) */
/* WARNING: Removing unreachable block (ram,0x004818d5) */
/* WARNING: Removing unreachable block (ram,0x004818fd) */
/* WARNING: Removing unreachable block (ram,0x0048190b) */
/* WARNING: Removing unreachable block (ram,0x0048194e) */
/* WARNING: Removing unreachable block (ram,0x00481927) */
/* WARNING: Removing unreachable block (ram,0x00481947) */
/* WARNING: Removing unreachable block (ram,0x00481934) */
/* WARNING: Removing unreachable block (ram,0x00481953) */
/* WARNING: Removing unreachable block (ram,0x00481957) */
/* WARNING: Removing unreachable block (ram,0x004819b1) */
/* WARNING: Removing unreachable block (ram,0x004813f5) */
/* WARNING: Removing unreachable block (ram,0x004814ff) */
/* WARNING: Removing unreachable block (ram,0x0048149f) */
/* WARNING: Removing unreachable block (ram,0x004814f2) */
/* WARNING: Removing unreachable block (ram,0x004815a8) */
/* WARNING: Removing unreachable block (ram,0x004815d0) */
/* WARNING: Removing unreachable block (ram,0x004815de) */
/* WARNING: Removing unreachable block (ram,0x00481621) */
/* WARNING: Removing unreachable block (ram,0x004815fa) */
/* WARNING: Removing unreachable block (ram,0x0048161a) */
/* WARNING: Removing unreachable block (ram,0x00481607) */
/* WARNING: Removing unreachable block (ram,0x00481626) */
/* WARNING: Removing unreachable block (ram,0x0048162a) */
/* WARNING: Removing unreachable block (ram,0x00481684) */
/* WARNING: Removing unreachable block (ram,0x00481114) */
/* WARNING: Removing unreachable block (ram,0x00481212) */
/* WARNING: Removing unreachable block (ram,0x004811bb) */
/* WARNING: Removing unreachable block (ram,0x00481205) */
/* WARNING: Removing unreachable block (ram,0x00481297) */
/* WARNING: Removing unreachable block (ram,0x004812bf) */
/* WARNING: Removing unreachable block (ram,0x004812cd) */
/* WARNING: Removing unreachable block (ram,0x004812f4) */
/* WARNING: Removing unreachable block (ram,0x004812de) */
/* WARNING: Removing unreachable block (ram,0x004812ed) */
/* WARNING: Removing unreachable block (ram,0x004812e6) */
/* WARNING: Removing unreachable block (ram,0x004812f9) */
/* WARNING: Removing unreachable block (ram,0x004812fd) */
/* WARNING: Removing unreachable block (ram,0x00481357) */
/* WARNING: Removing unreachable block (ram,0x0048137d) */
/* WARNING: Removing unreachable block (ram,0x004816aa) */
/* WARNING: Removing unreachable block (ram,0x004819d7) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 * __cdecl RtfFilter::MakeCharFormat(undefined4 *result,int self)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *strRep;
  undefined4 *puVar6;
  undefined4 *sehChainHead;
  byte bVar7;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint uVar10;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [248];
  undefined4 unused;
  int *newData;
  undefined1 exceptMsg2 [248];
  int *newData2;
  int *local_36c;
  undefined4 charFormat [15];
  undefined1 *unused2;
  undefined4 unused3;
  int *unused4;
  int *unused5;
  int *strRep2;
  uint colour;
  char *s;
  int *unused6;
  char *local_308;
  char *s2;
  int *unused7;
  char *local_2b0;
  char *s3;
  int *unused8;
  char *local_258;
  uint local_210;
  uint local_20c;
  uint local_208;
  undefined4 *src;
  uint unused9;
  undefined1 *unused10;
  int *newRep;
  int *newData3;
  undefined1 *unused11;
  int *local_1ec;
  undefined1 *unused12;
  undefined4 unused13;
  int *unused14;
  int *unused15;
  uint local_1d8;
  undefined1 s4;
  uint local_1d0;
  undefined1 *unused16;
  undefined4 unused17;
  int *unused18;
  int *unused19;
  int *newData4;
  int *unused20;
  uint unused21;
  undefined1 *unused22;
  int *newRep2;
  int *unused23;
  uint len;
  int *strRep3;
  undefined1 *unused24;
  int *unused25;
  undefined4 unused26;
  uint *msgText;
  uint local_184;
  undefined1 *unused27;
  undefined4 unused28;
  int *unused29;
  int *unused30;
  int *unused31;
  int *unused32;
  uint unused33;
  undefined1 *unused34;
  int *newRep3;
  int *unused35;
  uint len2;
  int *strRep4;
  undefined1 *unused36;
  int *unused37;
  undefined4 unused38;
  uint *msgText2;
  int *unused39;
  undefined4 *src2;
  uint unused40;
  undefined1 *unused41;
  int *newRep4;
  int *unused42;
  uint len3;
  int *strRep5;
  undefined1 *unused43;
  int *unused44;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 newStr [8];
  int *str4;
  undefined1 str [8];
  int *str5;
  undefined1 str2 [8];
  int *str6;
  undefined **outOfRange [2];
  undefined1 newStr2 [8];
  int *unused45;
  undefined **lengthError [2];
  undefined1 newStr3 [8];
  int *unused46;
  undefined1 str3 [8];
  int *faceName;
  
  bVar7 = 0;
  __InitExceptBlockLDTC(0x502ce4);
  puVar3 = (undefined4 *)(self + 0x25c);
  puVar6 = charFormat;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  if (*(int *)(self + 0x20) != -0x80000000) {
    OWL::TCharFormat::SetHeight((int)charFormat,*(int *)(self + 0x20) * 10);
  }
  OWL::TCharFormat::SetBold((int)charFormat,*(int *)(self + 8) == 1);
  OWL::TCharFormat::SetStrikeOut((int)charFormat,*(int *)(self + 0x14) == 1);
  OWL::TCharFormat::SetUnderline((int)charFormat,*(int *)(self + 0xc) == 1);
  OWL::TCharFormat::SetItalic((int)charFormat,*(int *)(self + 0x10) == 1);
  iVar1 = *(int *)(self + 0x18);
  if (iVar1 == -0x80000000) {
    iVar1 = *(int *)(self + 0x210);
  }
  if (-1 < iVar1) {
    iVar2 = *(int *)(self + 0x1d8) - *(int *)(self + 0x1d4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    if (iVar1 < iVar2 >> 4) {
      ehContext = 0x14;
      iVar4 = iVar1 * 0x10 + *(int *)(self + 0x1d4);
      faceName = (int *)0x0;
      iVar2 = *(int *)(*(int *)(iVar4 + 8) + -0xc);
      if (iVar2 == -1 || iVar2 + 1 < 0) {
        len3 = *(uint *)(*(int *)(iVar4 + 8) + -4);
        newRep4 = std::string::__getRep(str3,len3,len3);
        unused41 = str3;
        newData2 = newRep4 + 3;
        unused40 = len3;
        src2 = *(undefined4 **)(iVar4 + 8);
        unused39 = newData2;
        unused42 = newData2;
        faceName = newData2;
        memcpy(newData2,src2,len3);
      }
      else {
        local_36c = *(int **)(iVar4 + 8);
        unused43 = str3;
        strRep5 = local_36c + -3;
        unused44 = local_36c;
        faceName = local_36c;
        if (strRep5 != &g_nullStringRep) {
          *strRep5 = *strRep5 + 1;
        }
      }
      ehDtorCount = ehDtorCount + 1;
      ehContext = 8;
      if (0x1f < (uint)faceName[-1]) {
        if ((*(int *)&g_stringNpos) - 0xeU < 0x1f) {
          throwLine = 0;
          throwFile = 0;
          throwFlags = 0;
          uVar10 = 1;
          copyCtor = &LAB_00408370;
          objectDtor = 0;
          ehContext = 0x38;
          msgText2 = (uint *)__rwstd::except_msg_string::format(exceptMsg2,PTR_s_invalid_string_size_parameter_in_00516d20
                                          );
          std::string::string_from_cstr((int)str2,msgText2);
          ehDtorCount = ehDtorCount + 2;
          lengthError[0] = &std::logic_error::vftable;
          unused38 = 0;
          unused46 = (int *)0x0;
          ehContext = 0x44;
          if (str6[-3] == -1 || str6[-3] + 1 < 0) {
            len2 = str6[-1];
            newRep3 = std::string::__getRep(newStr3,len2,len2);
            unused34 = newStr3;
            newData = newRep3 + 3;
            unused33 = len2;
            unused32 = str6;
            unused31 = newData;
            unused35 = newData;
            unused46 = newData;
            memcpy(newData,str6,len2);
          }
          else {
            unused36 = newStr3;
            unused37 = str6;
            unused46 = str6;
            strRep4 = str6 + -3;
            if (strRep4 != &g_nullStringRep) {
              *strRep4 = *strRep4 + 1;
            }
          }
          ehContext = 0x38;
          lengthError[0] = &std::length_error::vftable;
          ehDtorCount = ehDtorCount + 2;
          if (str6 != (int *)0x0) {
            if (str6[-3] != -1) {
              strRep = str6 + -3;
              if (strRep == &g_nullStringRep) {
                iVar2 = 1;
              }
              else if (strRep == &g_nullStringRep) {
                iVar2 = 1;
              }
              else {
                *strRep = *strRep + -1;
                iVar2 = *strRep + 1;
              }
              if (iVar2 != 0) goto LAB_00480bcc;
            }
            unused30 = str6 + -3;
            unused29 = str6 + -3;
            operator_delete();
            unused28 = 0;
            unused27 = str2;
            str6 = (int *)0x0;
            unused = 0;
          }
LAB_00480bcc:
          ehContext = 0x2c;
          _ThrowExceptionLDTC((uint *)&DAT_00408314,(undefined4*)lengthError,objectDtor,copyCtor,uVar10,throwFlags,throwFile,throwLine);
        }
        if ((uint)faceName[-1] < 0x20) {
          std::string::replace_fill((int)str3,faceName[-1],0,0x1f - faceName[-1],0);
        }
        else {
          local_184 = faceName[-1] - 0x1f;
          if ((uint)faceName[-1] < 0x1f) {
            throwLine = 0;
            throwFile = 0;
            throwFlags = 0;
            uVar10 = 1;
            copyCtor = &LAB_004084c8;
            objectDtor = 0;
            ehContext = 0x68;
            msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,
                                             PTR_s_string_index_out_of_range_in_fun_00516d2c);
            std::string::string_from_cstr((int)str,msgText);
            ehDtorCount = ehDtorCount + 2;
            outOfRange[0] = &std::logic_error::vftable;
            unused26 = 0;
            unused45 = (int *)0x0;
            ehContext = 0x74;
            if (str5[-3] == -1 || str5[-3] + 1 < 0) {
              len = str5[-1];
              newRep2 = std::string::__getRep(newStr2,len,len);
              unused22 = newStr2;
              newData4 = newRep2 + 3;
              unused21 = len;
              unused20 = str5;
              unused23 = newData4;
              unused45 = newData4;
              memcpy(newData4,str5,len);
            }
            else {
              unused24 = newStr2;
              unused25 = str5;
              unused45 = str5;
              strRep3 = str5 + -3;
              if (strRep3 != &g_nullStringRep) {
                *strRep3 = *strRep3 + 1;
              }
            }
            ehContext = 0x68;
            outOfRange[0] = &std::out_of_range::vftable;
            ehDtorCount = ehDtorCount + 2;
            if (str5 != (int *)0x0) {
              if (str5[-3] != -1) {
                strRep = str5 + -3;
                if (strRep == &g_nullStringRep) {
                  iVar2 = 1;
                }
                else if (strRep == &g_nullStringRep) {
                  iVar2 = 1;
                }
                else {
                  *strRep = *strRep + -1;
                  iVar2 = *strRep + 1;
                }
                if (iVar2 != 0) goto LAB_00480e56;
              }
              unused19 = str5 + -3;
              unused18 = str5 + -3;
              operator_delete();
              unused17 = 0;
              unused16 = str;
              str5 = (int *)0x0;
            }
LAB_00480e56:
            ehContext = 0x2c;
            _ThrowExceptionLDTC((uint *)&DAT_0040846c,(undefined4*)outOfRange,objectDtor,copyCtor,uVar10,throwFlags,throwFile,throwLine);
          }
          local_1d0 = faceName[-1] - 0x1f;
          s4 = 0;
          local_1d8 = local_1d0;
          if (local_184 < local_1d0) {
            local_1d8 = local_184;
          }
          std::string::replace((int)str3,0x1f,local_1d8,(uint)&s4,0,0,0);
        }
        if (faceName + -3 != &g_nullStringRep) {
          faceName[-3] = 0;
        }
      }
      OWL::TCharFormat::SetFaceName((int)charFormat,(char *)faceName);
      OWL::TCharFormat::SetCharSet((int)charFormat,*(undefined1 *)(*(int *)(self + 500) + iVar1));
      ehDtorCount = ehDtorCount + -1;
      if (faceName != (int *)0x0) {
        if (faceName[-3] != -1) {
          strRep = faceName + -3;
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
          if (iVar1 != 0) goto LAB_00480fc5;
        }
        unused15 = faceName + -3;
        unused14 = faceName + -3;
        operator_delete();
        unused13 = 0;
        faceName = (int *)0x0;
        unused12 = str3;
      }
LAB_00480fc5:
      ehContext = 0;
    }
  }
  iVar1 = *(int *)(self + 0x1c);
  if (iVar1 < 0) goto LAB_00481b47;
  iVar2 = *(int *)(self + 0x198) - *(int *)(self + 0x194);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xf;
  }
  if (iVar2 >> 4 <= iVar1) goto LAB_00481b47;
  ehContext = 0xb0;
  iVar2 = iVar1 * 0x10 + *(int *)(self + 0x194);
  str4 = (int *)0x0;
  iVar1 = *(int *)(*(int *)(iVar2 + 8) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar10 = *(uint *)(*(int *)(iVar2 + 8) + -4);
    newRep = std::string::__getRep(newStr,uVar10,uVar10);
    unused10 = newStr;
    newData3 = newRep + 3;
    src = *(undefined4 **)(iVar2 + 8);
    unused9 = uVar10;
    str4 = newData3;
    memcpy(newData3,src,uVar10);
  }
  else {
    local_1ec = *(int **)(iVar2 + 8);
    str4 = local_1ec;
    unused11 = newStr;
    strRep = local_1ec + -3;
    if (strRep != &g_nullStringRep) {
      *strRep = *strRep + 1;
    }
  }
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0xa4;
  if (str4[-1] != 0) {
    local_208 = 0;
    local_20c = 0;
    local_210 = 0;
    unused8 = str4;
    local_258 = thunk_FUN_004dcd18((char *)str4,&DAT_00501d63 /* "\red" */);
    iVar1 = (*(int *)&g_stringNpos);
    if (local_258 != (char *)0x0) {
      iVar1 = (int)local_258 - (int)str4;
    }
    if (iVar1 != -1) {
      s3 = (char *)((int)str4 + iVar1 + 4);
      local_208 = atoi(s3);
    }
    unused7 = str4;
    local_2b0 = thunk_FUN_004dcd18((char *)str4,"\\green");
    iVar1 = (*(int *)&g_stringNpos);
    if (local_2b0 != (char *)0x0) {
      iVar1 = (int)local_2b0 - (int)str4;
    }
    if (iVar1 != -1) {
      s2 = (char *)((int)str4 + iVar1 + 6);
      local_20c = atoi(s2);
    }
    unused6 = str4;
    local_308 = thunk_FUN_004dcd18((char *)str4,"\\blue");
    iVar1 = (*(int *)&g_stringNpos);
    if (local_308 != (char *)0x0) {
      iVar1 = (int)local_308 - (int)str4;
    }
    if (iVar1 != -1) {
      s = (char *)((int)str4 + iVar1 + 5);
      local_210 = atoi(s);
    }
    colour = local_208 & 0xff | (local_20c & 0xff) << 8 | (local_210 & 0xff) << 0x10;
    ehContext = 0xa4;
    OWL::TCharFormat::SetTextColor((int)charFormat,&colour);
  }
  ehDtorCount = ehDtorCount + -1;
  if (str4 != (int *)0x0) {
    if (str4[-3] != -1) {
      strRep2 = str4 + -3;
      if (strRep2 == &g_nullStringRep) {
        iVar1 = 1;
      }
      else if (strRep2 == &g_nullStringRep) {
        iVar1 = 1;
      }
      else {
        *strRep2 = *strRep2 + -1;
        iVar1 = *strRep2 + 1;
      }
      if (iVar1 != 0) goto LAB_00481b3e;
    }
    unused5 = str4 + -3;
    unused4 = str4 + -3;
    operator_delete();
    unused3 = 0;
    str4 = (int *)0x0;
    unused2 = newStr;
  }
LAB_00481b3e:
  ehContext = 0;
LAB_00481b47:
  puVar3 = charFormat;
  puVar6 = result;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00481b70  RtfFilter::MakeParaFormat   (169 bytes)   [analysis]
//   the rich-edit PARAFORMAT for the current paragraph state (alignment, indents, tabs)
//   file placement: inferred (address adjacency)
undefined4 * __cdecl RtfFilter::MakeParaFormat(undefined4 *result,int state)

{
  int i;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 paraFormat [39];
  
  OWL::TParaFormat::TParaFormat(paraFormat,0);
  OWL::TParaFormat::SetAlignment((int)paraFormat,*(undefined2 *)(state + 0x24));
  OWL::TParaFormat::SetStartIndent((int)paraFormat,*(int *)(state + 0x2c) + *(int *)(state + 0x28),'\0');
  OWL::TParaFormat::SetRightIndent((int)paraFormat,*(undefined4 *)(state + 0x30));
  OWL::TParaFormat::SetOffset((int)paraFormat,-*(int *)(state + 0x28));
  OWL::TParaFormat::SetTabs((int)paraFormat,*(short *)(state + 0x34),(undefined4 *)(state + 0x38));
  puVar2 = paraFormat;
  puVar3 = result;
  for (i = 0x27; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00481c1c  RtfFilter::CopyRunFormat   (671 bytes)   [analysis]
//   copies a run's character format
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00481c74) */
undefined4 * __cdecl RtfFilter::CopyRunFormat(undefined4 *result,undefined4 *source)

{
  uint len;
  int iVar2;
  int *strRep;
  undefined4 *puVar4;
  undefined4 *sehChainHead;
  byte bVar5;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [248];
  undefined4 unused;
  undefined1 *unused2;
  undefined4 unused3;
  int *unused4;
  int *unused5;
  int *newData;
  int *unused6;
  uint unused7;
  undefined1 *unused8;
  int *newRep;
  int *unused9;
  int *strRep2;
  undefined1 *unused10;
  int *unused11;
  undefined4 unused12;
  uint *msgText;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  int *str2;
  undefined **lengthError [2];
  undefined1 newStr [8];
  int *unused13;
  
  bVar5 = 0;
  __InitExceptBlockLDTC(0x502ea8);
  ehContext = 8;
  puVar4 = result;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *source;
    source = source + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  result[0x12] = 0;
  result[0x12] = &g_emptyStringData;
  unused = result[0x12];
  ehDtorCount = ehDtorCount + 1;
  result[0x14] = 3;
  result[0x15] = 0;
  if (0xff < (*(int *)&g_stringNpos) - 0xeU) goto LAB_00481e8d;
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  copyCtorMask = 1;
  copyCtor = &LAB_00408370;
  objectDtor = 0;
  ehContext = 0x38;
  msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_invalid_string_size_parameter_in_00516d20);
  std::string::string_from_cstr((int)str,msgText);
  ehDtorCount = ehDtorCount + 2;
  lengthError[0] = &std::logic_error::vftable;
  unused12 = 0;
  unused13 = (int *)0x0;
  ehContext = 0x44;
  if (str2[-3] == -1 || str2[-3] + 1 < 0) {
    len = str2[-1];
    newRep = std::string::__getRep(newStr,len,len);
    unused8 = newStr;
    newData = newRep + 3;
    unused6 = str2;
    unused7 = len;
    unused9 = newData;
    unused13 = newData;
    memcpy(newData,str2,len);
  }
  else {
    unused10 = newStr;
    unused11 = str2;
    unused13 = str2;
    strRep2 = str2 + -3;
    if (strRep2 != &g_nullStringRep) {
      *strRep2 = *strRep2 + 1;
    }
  }
  ehContext = 0x38;
  lengthError[0] = &std::length_error::vftable;
  ehDtorCount = ehDtorCount + 2;
  if (str2 != (int *)0x0) {
    if (str2[-3] != -1) {
      strRep = str2 + -3;
      if (strRep == &g_nullStringRep) {
        iVar2 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar2 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar2 = *strRep + 1;
      }
      if (iVar2 != 0) goto LAB_00481e76;
    }
    unused5 = str2 + -3;
    unused4 = str2 + -3;
    operator_delete();
    unused3 = 0;
    unused2 = str;
    str2 = (int *)0x0;
  }
LAB_00481e76:
  ehContext = 0x2c;
  _ThrowExceptionLDTC((uint *)&DAT_00408314,(undefined4*)lengthError,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
LAB_00481e8d:
  if (*(uint *)(result[0x12] + -8) < 0x100) {
    FUN_004d6d58((int)(result + 0x10),0x100);
  }
  *sehChainHead = sehPrevFrame;
  return result;
}

} // namespace tea
