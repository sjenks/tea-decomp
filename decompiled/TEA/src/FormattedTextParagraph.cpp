// TEA.exe — application module "FormattedTextParagraph"
// 33 functions, 0x0048209c..0x00485a4c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0048209c  FormattedTextParagraph::~FormattedTextParagraph   (178 bytes)   [rtti:dtor destructor]
//   written in code as FormattedTextParagraph::_dtor
void __cdecl FormattedTextParagraph::_dtor(int self,byte dtorFlags)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x502fc4);
  if (self != 0) {
    for (piVar1 = *(int **)(self + 0xa4); piVar1 < *(int **)(self + 0xa8); piVar1 = piVar1 + 1
        ) {
      if (*piVar1 != 0) {
        FormattedTextSegment::_dtor(*piVar1,3);
      }
    }
    std::_Destroy_range_ptr_4803d8(self + 0xa0,*(int *)(self + 0xa4),*(int *)(self + 0xa8));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00482150  RtfParseColorTable   (1164 bytes)   [analysis]
//   reads a {\colortbl ...} group (\red \green \blue entries)
//   file placement: inferred (address adjacency)
int __cdecl RtfParseColorTable(int self)

{
  uint len2;
  int prevRefs;
  char *len;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 result [8];
  int str2;
  undefined1 result2 [8];
  int str3;
  undefined1 result3 [8];
  int str4;
  undefined1 str [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x50306c);
  std::string::string_from_cstr((int)str,(uint *)&DAT_00501d63 /* "\red" */);
  FormatInt((int)result3);
  std::string::append((int)str,(int)result3);
  if (str4 != 0) {
    if (*(int *)(str4 + -0xc) != -1) {
      rep = (int *)(str4 + -0xc);
      if (rep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (rep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *rep = *rep + -1;
        prevRefs = *rep + 1;
      }
      if (prevRefs != 0) goto LAB_00482231;
    }
    operator_delete();
    str4 = 0;
  }
LAB_00482231:
  len2 = local_c[-1];
  len = strlen((uint *)"\\green");
  std::string::replace((int)str,len2,0,0x501d95,(uint)len,0,(uint)len);
  FormatInt((int)result2);
  std::string::append((int)str,(int)result2);
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      rep = (int *)(str3 + -0xc);
      if (rep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (rep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *rep = *rep + -1;
        prevRefs = *rep + 1;
      }
      if (prevRefs != 0) goto LAB_00482320;
    }
    operator_delete();
    str3 = 0;
  }
LAB_00482320:
  len2 = local_c[-1];
  len = strlen((uint *)"\\blue");
  std::string::replace((int)str,len2,0,0x501d9c,(uint)len,0,(uint)len);
  FormatInt((int)result);
  std::string::append((int)str,(int)result);
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      rep = (int *)(str2 + -0xc);
      if (rep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (rep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *rep = *rep + -1;
        prevRefs = *rep + 1;
      }
      if (prevRefs != 0) goto LAB_0048240f;
    }
    operator_delete();
    str2 = 0;
  }
LAB_0048240f:
  std::string::replace_fill((int)str,local_c[-1],0,1,0x3b);
  *(undefined4 *)(self + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    len2 = local_c[-1];
    rep = std::string::__getRep(self,len2,len2);
    *(int **)(self + 8) = rep + 3;
    memcpy(*(undefined4 **)(self + 8),local_c,len2);
  }
  else {
    *(undefined4 **)(self + 8) = local_c;
    rep = (int *)(*(int *)(self + 8) + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      rep = local_c + -3;
      if (rep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (rep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *rep = *rep + -1;
        prevRefs = *rep + 1;
      }
      if (prevRefs != 0) goto LAB_004825c1;
    }
    operator_delete();
  }
LAB_004825c1:
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004825dc  RtfParseFontTable   (733 bytes)   [analysis]
//   reads a {\fonttbl ...} group (\fcharset, names; "System;")
//   file placement: inferred (address adjacency)
int __cdecl RtfParseFontTable(int self,int text)

{
  uint len2;
  int prevRefs;
  char *len;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 result [8];
  int str2;
  undefined1 str [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x503154);
  std::string::string_from_cstr((int)str,(uint *)"\\fcharset");
  FormatInt((int)result);
  std::string::append((int)str,(int)result);
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      rep = (int *)(str2 + -0xc);
      if (rep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (rep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *rep = *rep + -1;
        prevRefs = *rep + 1;
      }
      if (prevRefs != 0) goto LAB_004826b8;
    }
    operator_delete();
    str2 = 0;
  }
LAB_004826b8:
  std::string::replace_fill((int)str,local_c[-1],0,1,0x20);
  if (((*(byte *)(text + 7) & 0x20) == 0) || (*(char *)(text + 0x1a) == '\0')) {
    len2 = local_c[-1];
    len = strlen((uint *)"System;");
    std::string::replace((int)str,len2,0,0x501dc0,(uint)len,0,(uint)len);
  }
  else {
    len2 = local_c[-1];
    len = strlen((uint *)(text + 0x1a));
    std::string::replace((int)str,len2,0,(uint)(text + 0x1a),(uint)len,0,(uint)len);
    std::string::replace_fill((int)str,local_c[-1],0,1,0x3b);
  }
  *(undefined4 *)(self + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    len2 = local_c[-1];
    rep = std::string::__getRep(self,len2,len2);
    *(int **)(self + 8) = rep + 3;
    memcpy(*(undefined4 **)(self + 8),local_c,len2);
  }
  else {
    *(undefined4 **)(self + 8) = local_c;
    rep = (int *)(*(int *)(self + 8) + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      rep = local_c + -3;
      if (rep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (rep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *rep = *rep + -1;
        prevRefs = *rep + 1;
      }
      if (prevRefs != 0) goto LAB_0048289e;
    }
    operator_delete();
  }
LAB_0048289e:
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004828bc  FindStringIndex   (74 bytes)   [analysis]
//   index of a string in a vector of strings, or -1
//   file placement: inferred (address adjacency)
int __cdecl FindStringIndex(int vec,int first,int value)

{
  uint uVar1;
  
  while ((vec != first &&
         (uVar1 = std::string::compare(vec,0,*(uint *)(*(int *)(vec + 8) + -4),
                               *(byte **)(value + 8),*(uint *)(*(int *)(value + 8) + -4)),
         uVar1 != 0))) {
    vec = vec + 0x10;
  }
  return vec;
}

// ----------------------------------------------------------------------------------------------------
// 0x00482908  RtfFilter::FontIndexOf   (342 bytes)   [analysis]
//   index of a font in the output font table, adding it when new
//   file placement: inferred (address adjacency)
int __cdecl RtfFilter::FontIndexOf(int self,int font)

{
  int refs;
  uint len;
  int iVar3;
  int *rep;
  int iVar5;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5031cc);
  iVar3 = FindStringIndex(*(int *)(self + 0x14),*(int *)(self + 0x18),font);
  iVar5 = iVar3 - *(int *)(self + 0x14);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xf;
  }
  if (iVar3 == *(int *)(self + 0x18)) {
    if (*(int *)(self + 0x18) == *(int *)(self + 0x28)) {
      std::vector_string::insert_aux(self + 0x10,*(int *)(self + 0x18),font);
    }
    else {
      iVar3 = *(int *)(self + 0x18);
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 8) = 0;
        refs = *(int *)(*(int *)(font + 8) + -0xc);
        if (refs == -1 || refs + 1 < 0) {
          len = *(uint *)(*(int *)(font + 8) + -4);
          rep = std::string::__getRep(iVar3,len,len);
          *(int **)(iVar3 + 8) = rep + 3;
          memcpy(*(undefined4 **)(iVar3 + 8),*(undefined4 **)(font + 8),len);
        }
        else {
          *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(font + 8);
          rep = (int *)(*(int *)(iVar3 + 8) + -0xc);
          if (rep != &g_nullStringRep) {
            *rep = *rep + 1;
          }
        }
      }
      *(int *)(self + 0x18) = *(int *)(self + 0x18) + 0x10;
    }
  }
  *sehChainHead = sehPrevFrame;
  return iVar5 >> 4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00482a60  RtfFilter::ColourIndexOf   (342 bytes)   [analysis]
//   index of a colour in the output colour table, adding it when new
//   file placement: inferred (address adjacency)
int __cdecl RtfFilter::ColourIndexOf(int self,int colour)

{
  int refs;
  uint len;
  int iVar3;
  int *rep;
  int iVar5;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x503208);
  iVar3 = FindStringIndex(*(int *)(self + 0x34),*(int *)(self + 0x38),colour);
  iVar5 = iVar3 - *(int *)(self + 0x34);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xf;
  }
  if (iVar3 == *(int *)(self + 0x38)) {
    if (*(int *)(self + 0x38) == *(int *)(self + 0x48)) {
      std::vector_string::insert_aux(self + 0x30,*(int *)(self + 0x38),colour);
    }
    else {
      iVar3 = *(int *)(self + 0x38);
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 8) = 0;
        refs = *(int *)(*(int *)(colour + 8) + -0xc);
        if (refs == -1 || refs + 1 < 0) {
          len = *(uint *)(*(int *)(colour + 8) + -4);
          rep = std::string::__getRep(iVar3,len,len);
          *(int **)(iVar3 + 8) = rep + 3;
          memcpy(*(undefined4 **)(iVar3 + 8),*(undefined4 **)(colour + 8),len);
        }
        else {
          *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(colour + 8);
          rep = (int *)(*(int *)(iVar3 + 8) + -0xc);
          if (rep != &g_nullStringRep) {
            *rep = *rep + 1;
          }
        }
      }
      *(int *)(self + 0x38) = *(int *)(self + 0x38) + 0x10;
    }
  }
  *sehChainHead = sehPrevFrame;
  return iVar5 >> 4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00482bb8  IsRtfText   (35 bytes)   [analysis]
//   whether a string starts with "{\rtf1"
//   file placement: inferred (address adjacency)
bool __cdecl IsRtfText(int text)

{
  uint uVar1;
  
  uVar1 = FUN_004dcac0(*(byte **)(text + 8),(byte *)"{\\rtf1",6);
  return uVar1 == 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00482bdc  ConvertMarkupToRtf   (3058 bytes)   [analysis]
//   converts definition markup to RTF: escapes \ { }, turns <br> into \line and &...; entities into characters
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00482dfd) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl ConvertMarkupToRtf(int result,int text,int flags)

{
  uint *puVar1;
  int *strRep;
  char *len2;
  int iVar4;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  code *copyCtor2;
  uint uVar8;
  uint uVar9;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [248];
  undefined4 unused;
  int *newData;
  undefined1 exceptMsg2 [248];
  undefined *unused2;
  undefined4 unused3;
  undefined4 *unused4;
  undefined4 *unused5;
  int *strRep2;
  undefined4 *dest;
  undefined4 *unused6;
  uint unused7;
  int unused8;
  int *newRep;
  int *newData2;
  uint len4;
  int *strRep3;
  int unused9;
  undefined4 *unused10;
  undefined4 unused11;
  undefined1 *unused12;
  undefined4 unused13;
  int unused14;
  int unused15;
  int *strRep4;
  uint pos;
  char *len3;
  uint local_1a0;
  uint pos2;
  uint unused16;
  char *local_194;
  char *s;
  uint local_18c;
  undefined1 *unused17;
  undefined4 unused18;
  int *unused19;
  int *unused20;
  int *newData3;
  int *unused21;
  uint unused22;
  undefined1 *unused23;
  int *newRep2;
  int *unused24;
  uint len5;
  int *strRep5;
  undefined1 *unused25;
  int *unused26;
  undefined4 unused27;
  uint *msgText;
  char *reject;
  uint local_13c;
  uint local_138;
  undefined1 *unused28;
  undefined4 unused29;
  int *unused30;
  int *unused31;
  int *strRep6;
  int *unused32;
  int *unused33;
  uint unused34;
  undefined1 *unused35;
  int *newRep3;
  int *unused36;
  uint len6;
  int *strRep7;
  undefined1 *unused37;
  int *unused38;
  undefined4 unused39;
  uint *msgText2;
  uint local_e8;
  undefined1 *unused40;
  undefined *unused41;
  undefined4 unused42;
  uint len7;
  undefined4 *dest2;
  undefined4 *src;
  uint unused43;
  int unused44;
  int *newRep4;
  int *newData4;
  uint len8;
  undefined4 unused45;
  int text3;
  uint *local_a4;
  undefined **local_a0;
  char *local_9c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 text2 [8];
  int str3;
  undefined1 str [8];
  int *str4;
  undefined **logicError [2];
  undefined1 newStr [8];
  int *unused46;
  undefined1 str2 [8];
  int *str5;
  undefined **lengthError [2];
  undefined1 newStr2 [8];
  int *unused47;
  undefined1 len [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x5032ec);
  if (flags == 2) {
    local_9c = &DAT_00501e72 /* "&<>"" */;
    local_a0 = &PTR_s_refamp_00501810;
    local_a4 = (uint *)&DAT_00501c9b /* "<br>" */;
  }
  else {
    if (flags != 3) {
      ehContext = 8;
      text3 = text;
      unused45 = 0;
      *(undefined4 *)(result + 8) = 0;
      iVar4 = *(int *)(*(int *)(text + 8) + -0xc);
      if (iVar4 == -1 || iVar4 + 1 < 0) {
        len8 = *(uint *)(*(int *)(text + 8) + -4);
        newRep4 = std::string::__getRep(result,len8,len8);
        newData4 = newRep4 + 3;
        *(int **)(result + 8) = newData4;
        unused44 = result;
        unused3 = *(undefined4 *)(result + 8);
        unused43 = len8;
        src = *(undefined4 **)(text3 + 8);
        dest2 = *(undefined4 **)(result + 8);
        memcpy(dest2,src,len8);
      }
      else {
        *(undefined4 *)(result + 8) = *(undefined4 *)(text + 8);
        strRep = (int *)(*(int *)(result + 8) + -0xc);
        if (strRep != &g_nullStringRep) {
          *strRep = *strRep + 1;
        }
      }
      *sehChainHead = sehPrevFrame;
      return result;
    }
    local_9c = &DAT_00501e8e;
    local_a0 = &PTR_DAT_00501820;
    local_a4 = (uint *)&DAT_00501c94;
  }
  len7 = *(uint *)(*(int *)(text + 8) + -4);
  unused42 = 0;
  unused40 = len;
  unused41 = &g_emptyStringData;
  local_c = (undefined4 *)&g_emptyStringData;
  unused2 = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x38;
  local_e8 = len7 * 2;
  if (local_e8 <= g_stringNpos - 0xe) goto LAB_004830aa;
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  uVar8 = 1;
  copyCtor = &LAB_00408370;
  objectDtor = 0;
  ehContext = 0x50;
  msgText2 = (uint *)__rwstd::except_msg_string::format(exceptMsg2,PTR_s_invalid_string_size_parameter_in_00516d20);
  std::string::string_from_cstr((int)str2,msgText2);
  ehDtorCount = ehDtorCount + 2;
  lengthError[0] = &std::logic_error::vftable;
  unused39 = 0;
  unused47 = (int *)0x0;
  ehContext = 0x5c;
  if (str5[-3] == -1 || str5[-3] + 1 < 0) {
    len6 = str5[-1];
    newRep3 = std::string::__getRep(newStr2,len6,len6);
    unused35 = newStr2;
    newData = newRep3 + 3;
    unused34 = len6;
    unused33 = str5;
    unused32 = newData;
    unused36 = newData;
    unused47 = newData;
    memcpy(newData,str5,len6);
  }
  else {
    unused37 = newStr2;
    unused38 = str5;
    unused47 = str5;
    strRep7 = str5 + -3;
    if (strRep7 != &g_nullStringRep) {
      *strRep7 = *strRep7 + 1;
    }
  }
  ehContext = 0x50;
  lengthError[0] = &std::length_error::vftable;
  ehDtorCount = ehDtorCount + 2;
  if (str5 != (int *)0x0) {
    if (str5[-3] != -1) {
      strRep6 = str5 + -3;
      if (strRep6 == &g_nullStringRep) {
        iVar4 = 1;
      }
      else if (strRep6 == &g_nullStringRep) {
        iVar4 = 1;
      }
      else {
        *strRep6 = *strRep6 + -1;
        iVar4 = *strRep6 + 1;
      }
      if (iVar4 != 0) goto LAB_00483090;
    }
    unused31 = str5 + -3;
    unused30 = str5 + -3;
    operator_delete();
    unused29 = 0;
    unused28 = str2;
    str5 = (int *)0x0;
    unused = 0;
  }
LAB_00483090:
  ehContext = 0x44;
  _ThrowExceptionLDTC((uint *)&DAT_00408314,(undefined4*)lengthError,objectDtor,copyCtor,uVar8,throwFlags,throwFile,throwLine);
LAB_004830aa:
  if ((uint)local_c[-2] < local_e8) {
    FUN_004d6d58((int)len,local_e8);
  }
  ehContext = 0x38;
  uVar8 = 0;
  do {
    reject = local_9c;
    local_13c = uVar8;
    if (local_9c == (char *)0x0) {
      throwLine = 0;
      throwFile = 0;
      throwFlags = 0;
      uVar9 = 1;
      copyCtor2 = std::logic_error::logic_error_copy;
      objectDtor = 0;
      ehContext = 0x8c;
      msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_unexpected_NULL_pointer_in_funct_00516d30);
      std::string::string_from_cstr((int)str,msgText);
      ehDtorCount = ehDtorCount + 2;
      logicError[0] = &std::logic_error::vftable;
      unused27 = 0;
      unused46 = (int *)0x0;
      ehContext = 0x98;
      if (str4[-3] == -1 || str4[-3] + 1 < 0) {
        len5 = str4[-1];
        newRep2 = std::string::__getRep(newStr,len5,len5);
        unused23 = newStr;
        newData3 = newRep2 + 3;
        unused22 = len5;
        unused21 = str4;
        unused24 = newData3;
        unused46 = newData3;
        memcpy(newData3,str4,len5);
      }
      else {
        unused25 = newStr;
        unused26 = str4;
        unused46 = str4;
        strRep5 = str4 + -3;
        if (strRep5 != &g_nullStringRep) {
          *strRep5 = *strRep5 + 1;
        }
      }
      ehContext = 0x8c;
      ehDtorCount = ehDtorCount + 1;
      if (str4 != (int *)0x0) {
        if (str4[-3] != -1) {
          strRep = str4 + -3;
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
          if (iVar4 != 0) goto LAB_00483316;
        }
        unused20 = str4 + -3;
        unused19 = str4 + -3;
        operator_delete();
        unused18 = 0;
        unused17 = str;
        str4 = (int *)0x0;
      }
LAB_00483316:
      ehContext = 0x80;
      _ThrowExceptionLDTC((uint *)&DAT_004113dc,(undefined4*)logicError,objectDtor,(undefined*)copyCtor2,uVar9,throwFlags,throwFile,throwLine);
    }
    uVar9 = g_stringNpos;
    if (local_13c <= *(uint *)(*(int *)(text + 8) + -4)) {
      s = (char *)(*(int *)(text + 8) + local_13c);
      iVar4 = strcspn(s,reject);
      local_18c = iVar4 + local_13c;
      uVar9 = local_18c;
      if (*(uint *)(*(int *)(text + 8) + -4) <= local_18c) {
        uVar9 = g_stringNpos;
      }
    }
    local_138 = uVar9;
    if (uVar9 == 0xffffffff) break;
    if (uVar8 < uVar9) {
      FUN_004d5850((int)len,text,uVar8,uVar9 - uVar8);
    }
    unused16 = local_138;
    local_194 = thunk_strchr(local_9c,*(char *)(*(int *)(text + 8) + local_138));
    ehContext = 0x38;
    puVar1 = (uint *)local_a0[(int)local_194 - (int)local_9c];
    pos2 = local_c[-1];
    len2 = strlen(puVar1);
    std::string::replace((int)len,pos2,0,(uint)puVar1,(uint)len2,0,(uint)len2);
    uVar8 = local_138 + 1;
  } while( true );
  if (uVar8 < len7) {
    FUN_004d5850((int)len,text,uVar8,len7 - uVar8);
  }
  uVar8 = local_c[-1];
  while (uVar8 != 0) {
    local_1a0 = uVar8 - 1;
    len3 = strlen((uint *)&DAT_00501c98);
    uVar8 = FUN_004d7cf0((int)len,&DAT_00501c98,local_1a0,(uint)len3);
    puVar1 = local_a4;
    if (uVar8 == 0xffffffff) break;
    pos = uVar8;
    len2 = strlen(local_a4);
    std::string::replace((int)len,pos,2,(uint)puVar1,(uint)len2,0,(uint)len2);
  }
  if (flags == 2) {
    ehContext = 0xbc;
    DecodeEntity((int)text2,(int)len);
    ehDtorCount = ehDtorCount + 1;
    std::string::operator_assign((int)len,(int)text2);
    ehDtorCount = ehDtorCount + -1;
    if (str3 != 0) {
      if (*(int *)(str3 + -0xc) != -1) {
        strRep4 = (int *)(str3 + -0xc);
        if (strRep4 == &g_nullStringRep) {
          iVar4 = 1;
        }
        else if (strRep4 == &g_nullStringRep) {
          iVar4 = 1;
        }
        else {
          *strRep4 = *strRep4 + -1;
          iVar4 = *strRep4 + 1;
        }
        if (iVar4 != 0) goto LAB_004835cf;
      }
      unused15 = str3 + -0xc;
      unused14 = str3 + -0xc;
      operator_delete();
      unused13 = 0;
      unused12 = text2;
      str3 = 0;
    }
  }
LAB_004835cf:
  ehContext = 0xd4;
  unused11 = 0;
  *(undefined4 *)(result + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    len4 = local_c[-1];
    newRep = std::string::__getRep(result,len4,len4);
    newData2 = newRep + 3;
    *(int **)(result + 8) = newData2;
    unused8 = result;
    unused7 = len4;
    unused6 = local_c;
    dest = *(undefined4 **)(result + 8);
    memcpy(dest,local_c,len4);
  }
  else {
    unused10 = local_c;
    *(undefined4 **)(result + 8) = local_c;
    unused9 = result;
    strRep3 = (int *)(*(int *)(result + 8) + -0xc);
    if (strRep3 != &g_nullStringRep) {
      *strRep3 = *strRep3 + 1;
    }
  }
  ehContext = 0xec;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      strRep2 = local_c + -3;
      if (strRep2 == &g_nullStringRep) {
        iVar4 = 1;
      }
      else if (strRep2 == &g_nullStringRep) {
        iVar4 = 1;
      }
      else {
        *strRep2 = *strRep2 + -1;
        iVar4 = *strRep2 + 1;
      }
      if (iVar4 != 0) goto LAB_004837ad;
    }
    unused5 = local_c + -3;
    unused4 = local_c + -3;
    operator_delete();
  }
LAB_004837ad:
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x004837d0  DecodeEntity   (694 bytes)   [analysis]
//   the character of an &...; entity
//   file placement: inferred (address adjacency)
int __cdecl DecodeEntity(int text,int len)

{
  uint *puVar1;
  char *len2;
  int iVar3;
  uint uVar4;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  int *str2;
  
  __InitExceptBlockLDTC(0x503430);
  str2 = (int *)0x0;
  iVar3 = *(int *)(*(int *)(len + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    uVar4 = *(uint *)(*(int *)(len + 8) + -4);
    str2 = std::string::__getRep(str,uVar4,uVar4);
    str2 = str2 + 3;
    memcpy(str2,*(undefined4 **)(len + 8),uVar4);
  }
  else {
    str2 = *(int **)(len + 8);
    rep = str2 + -3;
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  uVar4 = str2[-1];
  while (uVar4 != 0) {
    uVar4 = uVar4 - 1;
    if (str2[-3] != 0 && 0 < str2[-3] + 1) {
      std::string::__unshare((int)str);
    }
    if (str2 + -3 != &g_nullStringRep) {
      str2[-3] = -1;
    }
    if ((0x7f < *(byte *)((int)str2 + uVar4)) &&
       (puVar1 = (uint *)(&PTR_s_refeuro_00501830)[*(byte *)((int)str2 + uVar4) - 0x80],
       puVar1 != (uint *)0x0)) {
      len2 = strlen(puVar1);
      std::string::replace((int)str,uVar4,1,(uint)puVar1,(uint)len2,0,(uint)len2);
    }
  }
  *(undefined4 *)(text + 8) = 0;
  if (str2[-3] == -1 || str2[-3] + 1 < 0) {
    uVar4 = str2[-1];
    rep = std::string::__getRep(text,uVar4,uVar4);
    *(int **)(text + 8) = rep + 3;
    memcpy(*(undefined4 **)(text + 8),str2,uVar4);
  }
  else {
    *(int **)(text + 8) = str2;
    rep = (int *)(*(int *)(text + 8) + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  if (str2 != (int *)0x0) {
    if (str2[-3] != -1) {
      rep = str2 + -3;
      if (rep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else if (rep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *rep = *rep + -1;
        iVar3 = *rep + 1;
      }
      if (iVar3 != 0) goto LAB_00483a6b;
    }
    operator_delete();
  }
LAB_00483a6b:
  *sehChainHead = sehPrevFrame;
  return text;
}

// ----------------------------------------------------------------------------------------------------
// 0x00483a88  SetRichText   (4326 bytes, 2 ranges)   [analysis]
//   loads text into a rich edit as RTF, building the font table, sizes and styles from the window's font ({\fonttbl, \f%d, \fs%d, \ul, \strike)
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00484167) */
/* WARNING: Removing unreachable block (ram,0x00483c1f) */
/* WARNING: Removing unreachable block (ram,0x00483d0d) */
/* WARNING: Removing unreachable block (ram,0x00483cb9) */
/* WARNING: Removing unreachable block (ram,0x00483d00) */
/* WARNING: Removing unreachable block (ram,0x00483da4) */
/* WARNING: Removing unreachable block (ram,0x00483dc9) */
/* WARNING: Removing unreachable block (ram,0x00483dd4) */
/* WARNING: Removing unreachable block (ram,0x00483e14) */
/* WARNING: Removing unreachable block (ram,0x00483ded) */
/* WARNING: Removing unreachable block (ram,0x00483e0d) */
/* WARNING: Removing unreachable block (ram,0x00483dfa) */
/* WARNING: Removing unreachable block (ram,0x00483e19) */
/* WARNING: Removing unreachable block (ram,0x00483e1d) */
/* WARNING: Removing unreachable block (ram,0x00483e6b) */
/* WARNING: Removing unreachable block (ram,0x00483e8e) */
/* WARNING: Removing unreachable block (ram,0x0048447f) */
/* WARNING: Removing unreachable block (ram,0x00484588) */
/* WARNING: Removing unreachable block (ram,0x00484528) */
/* WARNING: Removing unreachable block (ram,0x0048457b) */
/* WARNING: Removing unreachable block (ram,0x00484619) */
/* WARNING: Removing unreachable block (ram,0x00484641) */
/* WARNING: Removing unreachable block (ram,0x0048464f) */
/* WARNING: Removing unreachable block (ram,0x00484676) */
/* WARNING: Removing unreachable block (ram,0x00484660) */
/* WARNING: Removing unreachable block (ram,0x0048466f) */
/* WARNING: Removing unreachable block (ram,0x00484668) */
/* WARNING: Removing unreachable block (ram,0x0048467b) */
/* WARNING: Removing unreachable block (ram,0x0048467f) */
/* WARNING: Removing unreachable block (ram,0x004846d9) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl SetRichText(HWND hWnd,int text,int lParam)

{
  char cVar1;
  bool isRtfText;
  undefined3 regHigh;
  int iVar3;
  char *len;
  int *strRep;
  uint uVar6;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  code *copyCtor;
  uint uVar9;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 *lParam2;
  undefined4 unused;
  code *unused2;
  undefined4 unused3;
  undefined4 unused4;
  undefined4 unused5;
  undefined4 unused6;
  undefined4 unused7;
  undefined4 unused8;
  uint local_7a4 [324];
  int *newData;
  int *local_284;
  int *unused9;
  int *unused10;
  int *strRep2;
  LRESULT msgResult;
  undefined1 *unused11;
  undefined4 unused12;
  int unused13;
  int unused14;
  undefined1 *unused15;
  undefined4 unused16;
  int unused17;
  int unused18;
  char *len2;
  uint pos;
  uint local_23c;
  int local_238;
  int local_234;
  char *local_230;
  char *local_22c;
  uint local_1e4;
  DWORD unused19;
  char *len3;
  uint pos2;
  undefined1 *unused20;
  undefined4 unused21;
  int unused22;
  int unused23;
  undefined1 *other;
  int *unused24;
  char *local_1b4;
  undefined4 unused25;
  undefined4 unused26;
  int *unused27;
  int *unused28;
  int *newData2;
  int *unused29;
  uint unused30;
  undefined4 unused31;
  int *newRep;
  int *unused32;
  uint len4;
  int *strRep3;
  undefined4 unused33;
  int *unused34;
  undefined4 unused35;
  uint *msgText;
  int *unused36;
  char *local_164;
  uint local_114;
  int *unused37;
  undefined4 *src;
  uint unused38;
  undefined1 *unused39;
  int *newRep2;
  int *unused40;
  uint len5;
  int *strRep4;
  undefined1 *unused41;
  int *unused42;
  undefined4 unused43;
  int text2;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 local_94 [8];
  int str3;
  undefined1 str [8];
  int str4;
  undefined1 out [8];
  int str5;
  int *str6;
  undefined **unused44;
  int *unused45;
  undefined1 str2 [8];
  int *str7;
  
  __InitExceptBlockLDTC(0x50357c);
  if (lParam != 0) {
    SendMessageA(hWnd,0x444,4,lParam);
  }
  isRtfText = IsRtfText(text);
  if (CONCAT31(regHigh,isRtfText) == 0) {
    SetWindowTextA(hWnd,*(LPCSTR *)(text + 8));
    goto LAB_00484b64;
  }
  ehContext = 0x14;
  text2 = text;
  unused43 = 0;
  str7 = (int *)0x0;
  iVar3 = *(int *)(*(int *)(text + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    len5 = *(uint *)(*(int *)(text + 8) + -4);
    newRep2 = std::string::__getRep(str2,len5,len5);
    unused39 = str2;
    newData = newRep2 + 3;
    unused38 = len5;
    src = *(undefined4 **)(text2 + 8);
    unused37 = newData;
    unused40 = newData;
    str7 = newData;
    memcpy(newData,src,len5);
  }
  else {
    local_284 = *(int **)(text + 8);
    unused41 = str2;
    strRep4 = local_284 + -3;
    unused42 = local_284;
    str7 = local_284;
    if (strRep4 != &g_nullStringRep) {
      *strRep4 = *strRep4 + 1;
    }
  }
  ehDtorCount = ehDtorCount + 1;
  ehContext = 8;
  if (lParam != 0) {
    unused36 = str7;
    local_164 = thunk_FUN_004dcd18((char *)str7,"{\\fonttbl");
    local_114 = g_stringNpos;
    if (local_164 != (char *)0x0) {
      local_114 = (int)local_164 - (int)str7;
    }
    if (local_114 != 0xffffffff) {
      ehContext = 8;
      uVar6 = 1;
      do {
        sprintf((undefined1 *)local_7a4,(byte *)"{\\f%d");
        if (&GHIDRA_STACK(0x00000000) == (undefined1 *)0x7a4) {
          throwLine = 0;
          throwFile = 0;
          throwFlags = 0;
          uVar9 = 1;
          copyCtor = std::logic_error::logic_error_copy;
          objectDtor = 0;
          ehContext = 0x74;
          msgText = (uint *)__rwstd::except_msg_string::format((undefined1 *)0xffffff10,
                                           PTR_s_unexpected_NULL_pointer_in_funct_00516d30);
          std::string::string_from_cstr(0x740,msgText);
          ehDtorCount = ehDtorCount + 2;
          unused44 = &std::logic_error::vftable;
          unused35 = 0;
          unused45 = (int *)0x0;
          ehContext = 0x80;
          if (str6[-3] == -1 || str6[-3] + 1 < 0) {
            len4 = str6[-1];
            newRep = std::string::__getRep(0x758,len4,len4);
            newData2 = newRep + 3;
            unused31 = 0x758;
            unused7 = uRam00000760;
            unused30 = len4;
            unused29 = str6;
            unused32 = newData2;
            unused45 = newData2;
            memcpy(newData2,str6,len4);
          }
          else {
            unused34 = str6;
            unused45 = str6;
            unused33 = 0x758;
            unused8 = uRam00000760;
            strRep3 = str6 + -3;
            if (strRep3 != &g_nullStringRep) {
              *strRep3 = *strRep3 + 1;
            }
          }
          ehContext = 0x74;
          ehDtorCount = ehDtorCount + 1;
          if (str6 != (int *)0x0) {
            if (str6[-3] != -1) {
              strRep = str6 + -3;
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
              if (iVar3 != 0) goto LAB_00484144;
            }
            unused28 = str6 + -3;
            unused27 = str6 + -3;
            operator_delete();
            unused26 = 0;
            str6 = (int *)0x0;
            unused25 = 0x740;
            unused6 = uRam00000748;
          }
LAB_00484144:
          ehContext = 0x68;
          _ThrowExceptionLDTC((uint *)&DAT_004113dc,(undefined4 *)0x750,objectDtor,(undefined*)copyCtor,uVar9,throwFlags,throwFile,
                       throwLine);
        }
        unused24 = str7;
        local_1b4 = thunk_FUN_004dcd18((char *)str7,(char *)local_7a4);
        uVar9 = g_stringNpos;
        if (local_1b4 != (char *)0x0) {
          uVar9 = (int)local_1b4 - (int)str7;
        }
        if (uVar9 == 0xffffffff) {
          ehContext = 0xb0;
          std::string::string_from_cstr((int)out,local_7a4);
          ehDtorCount = ehDtorCount + 1;
          ehContext = 0xbc;
          RtfParseFontTable((int)local_94,lParam);
          other = local_94;
          ehDtorCount = ehDtorCount + 1;
          std::string::append((int)out,(int)other);
          ehDtorCount = ehDtorCount + -1;
          if (str3 != 0) {
            if (*(int *)(str3 + -0xc) != -1) {
              strRep = (int *)(str3 + -0xc);
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
              if (iVar3 != 0) goto LAB_004842d2;
            }
            unused23 = str3 + -0xc;
            unused22 = str3 + -0xc;
            operator_delete();
            unused21 = 0;
            unused20 = local_94;
            str3 = 0;
            unused5 = 0;
          }
LAB_004842d2:
          ehContext = 0xa4;
          std::string::replace_fill((int)out,*(uint *)(str5 + -4),0,1,0x7d);
          std::string::insert((int)str2,local_114 + 9,(int)out);
          sprintf((undefined1 *)local_7a4,&DAT_005022c6 /* "\f%d" */);
          std::string::assign_cstr((int)out,local_7a4);
          if ((*(byte *)(lParam + 7) & 0x80) != 0) {
            sprintf((undefined1 *)local_7a4,(byte *)"\\fs%d");
            pos2 = *(uint *)(str5 + -4);
            len3 = strlen(local_7a4);
            std::string::replace((int)out,pos2,0,(uint)local_7a4,(uint)len3,0,(uint)len3
                        );
          }
          RtfFilter::AppendToggle((int)out,*(uint *)(lParam + 4) & 1,*(uint *)(lParam + 8) & 1,
                       (uint *)&DAT_00501ddc);
          RtfFilter::AppendToggle((int)out,*(uint *)(lParam + 4) & 2,*(uint *)(lParam + 8) & 2,
                       (uint *)&DAT_00501de7);
          RtfFilter::AppendToggle((int)out,*(uint *)(lParam + 4) & 8,*(uint *)(lParam + 8) & 8,
                       (uint *)"\\strike");
          RtfFilter::AppendToggle((int)out,*(uint *)(lParam + 4) & 4,*(uint *)(lParam + 8) & 4,
                       (uint *)&DAT_00501dea /* "\ul" */);
          if (((*(byte *)(lParam + 7) & 0x40) == 0) || ((*(byte *)(lParam + 0xb) & 0x40) != 0)) {
            unused19 = GetSysColor(8);
          }
          else {
            unused19 = *(DWORD *)(lParam + 0x14);
          }
          ehContext = 0xd4;
          RtfParseColorTable((int)str);
          ehDtorCount = ehDtorCount + 1;
          ehContext = 0xa4;
          local_1e4 = g_stringNpos;
          if (local_114 <= (uint)str7[-1]) {
            local_230 = (char *)((int)str7 + local_114);
            local_22c = thunk_FUN_004dcd18(local_230,"{\\colortbl");
            local_1e4 = g_stringNpos;
            if (local_22c != (char *)0x0) {
              local_1e4 = (int)local_22c - (int)str7;
            }
          }
          if (local_1e4 == 0xffffffff) {
            local_1e4 = local_114;
          }
          local_234 = 0;
          ehContext = 0xa4;
          local_238 = 0;
          uVar6 = local_1e4;
          goto LAB_004848fd;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 100);
    }
  }
LAB_00484a53:
  lParam2 = str2;
  unused = 0;
  unused2 = RtfFilter::AppendNumberWord;
  msgResult = SendMessageA(hWnd,0x449,0x4002,(LPARAM)&lParam2);
  ehContext = 8;
  ehDtorCount = ehDtorCount + -1;
  if (str7 != (int *)0x0) {
    if (str7[-3] != -1) {
      strRep2 = str7 + -3;
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
      if (iVar3 != 0) goto LAB_00484b64;
    }
    unused10 = str7 + -3;
    unused9 = str7 + -3;
    operator_delete();
  }
LAB_00484b64:
  *sehChainHead = sehPrevFrame;
  return;
LAB_004848fd:
  if ((uint)str7[-1] <= uVar6) goto LAB_00484909;
  local_23c = uVar6;
  if (1 < str7[-3] + 1) {
    std::string::__unshare((int)str2);
  }
  if (str7 + -3 != &g_nullStringRep) {
    str7[-3] = -1;
  }
  cVar1 = *(char *)((int)str7 + local_23c);
  if (cVar1 == ';') {
    local_234 = local_234 + 1;
  }
  else if (cVar1 == '{') {
    local_238 = local_238 + 1;
  }
  else if ((cVar1 == '}') && (local_238 = local_238 + -1, local_238 == 0)) {
    sprintf((undefined1 *)local_7a4,(byte *)"\\cf%d ");
    pos = *(uint *)(str5 + -4);
    len = strlen(local_7a4);
    std::string::replace((int)out,pos,0,(uint)local_7a4,(uint)len,0,(uint)len);
    std::string::insert((int)str2,uVar6 + 1,(int)out);
    if (local_1e4 == local_114) {
      len2 = strlen((uint *)"{\\colortbl");
      std::string::replace((int)str,0,0,0x501dab,(uint)len2,0,(uint)len2);
      std::string::replace_fill((int)str,*(uint *)(str4 + -4),0,1,0x7d);
      std::string::insert((int)str2,uVar6 + 1,(int)str);
    }
    else {
      std::string::insert((int)str2,uVar6,(int)str);
    }
    goto LAB_00484909;
  }
  uVar6 = uVar6 + 1;
  goto LAB_004848fd;
LAB_00484909:
  ehDtorCount = ehDtorCount + -1;
  if (str4 != 0) {
    if (*(int *)(str4 + -0xc) != -1) {
      strRep = (int *)(str4 + -0xc);
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
      if (iVar3 != 0) goto LAB_0048499f;
    }
    unused18 = str4 + -0xc;
    unused17 = str4 + -0xc;
    operator_delete();
    unused16 = 0;
    unused15 = str;
    str4 = 0;
    unused4 = 0;
  }
LAB_0048499f:
  ehContext = 0xa4;
  ehDtorCount = ehDtorCount + -1;
  if (str5 != 0) {
    if (*(int *)(str5 + -0xc) != -1) {
      strRep = (int *)(str5 + -0xc);
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
      if (iVar3 != 0) goto LAB_00484a53;
    }
    unused14 = str5 + -0xc;
    unused13 = str5 + -0xc;
    operator_delete();
    unused12 = 0;
    unused11 = out;
    str5 = 0;
    unused3 = 0;
  }
  goto LAB_00484a53;
}

// ----------------------------------------------------------------------------------------------------
// 0x00484c30  std::basic_ostream<char>::sentry::~sentry   (2338 bytes)   [rtti:dtor destructor]
//   written in code as std::basic_ostream_char::sentry::_dtor
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl std::basic_ostream_char::sentry::_dtor(undefined4 *self,byte dtorFlags)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [248];
  undefined4 unused;
  undefined1 exceptMsg2 [248];
  undefined4 unused2;
  undefined1 exceptMsg3 [248];
  undefined4 unused3;
  undefined1 exceptMsg4 [248];
  undefined4 unused4;
  undefined1 exceptMsg5 [248];
  undefined4 unused5;
  undefined1 exceptMsg6 [240];
  undefined1 *unused6;
  undefined4 unused7;
  int unused8;
  int unused9;
  int *strRep;
  uint *msgText;
  undefined1 *unused10;
  undefined4 unused11;
  int unused12;
  int unused13;
  int *strRep2;
  uint *msgText2;
  undefined1 *unused14;
  undefined4 unused15;
  int unused16;
  int unused17;
  int *strRep3;
  uint *local_17c;
  undefined1 *unused18;
  undefined4 unused19;
  int unused20;
  int unused21;
  int *strRep4;
  uint *msgText3;
  undefined1 *unused22;
  undefined4 unused23;
  int unused24;
  int unused25;
  int *strRep5;
  uint *msgText4;
  undefined1 *unused26;
  undefined4 unused27;
  int unused28;
  int unused29;
  int *strRep6;
  uint *local_11c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  int str7;
  undefined1 str2 [8];
  int str8;
  undefined1 str3 [8];
  int str9;
  undefined4 failure2 [6];
  undefined4 failure3 [6];
  undefined4 failure4 [6];
  undefined1 str4 [8];
  int str10;
  undefined1 str5 [8];
  int str11;
  undefined1 str6 [8];
  int str12;
  undefined4 failure5 [6];
  undefined4 failure6 [6];
  undefined4 failure7 [6];
  
  __InitExceptBlockLDTC(0x5037dc);
  if (self == (undefined4 *)0x0) goto LAB_0048553e;
  if ((*(byte *)(*(int *)*self + 5) & 0x20) != 0) {
    iVar2 = (**(code **)(**(int **)(*(int *)*self + 0x24) + 0x30))();
    if (iVar2 == -1) {
      iVar2 = *(int *)*self;
      uVar4 = *(uint *)(iVar2 + 0x30);
      if (*(int *)(iVar2 + 0x24) == 0) {
        *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) | 1;
      }
      uVar4 = uVar4 | 1;
      *(uint *)(iVar2 + 0x30) = uVar4;
      if ((uVar4 & *(uint *)(iVar2 + 0x34)) != 0) {
        if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34) & 4) != 0) {
          *(uint *)(iVar2 + 0x30) = uVar4;
          throwLine = 0;
          throwFile = 0;
          throwFlags = 0;
          copyCtorMask = 1;
          copyCtor = &LAB_0047ec80;
          objectDtor = 0;
          ehContext = 0x14;
          local_11c = (uint *)__rwstd::except_msg_string::format(exceptMsg6,PTR_s_iostream_object_has_failbit_set_00515af8)
          ;
          iVar3 = std::string::string_from_cstr((int)str6,local_11c);
          ehDtorCount = ehDtorCount + 1;
          std::ios_base::failure::failure(failure7,iVar3);
          ehDtorCount = ehDtorCount + 2;
          if (str12 != 0) {
            if (*(int *)(str12 + -0xc) != -1) {
              strRep6 = (int *)(str12 + -0xc);
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
              if (iVar3 != 0) goto LAB_00484dcc;
            }
            unused29 = str12 + -0xc;
            unused28 = str12 + -0xc;
            operator_delete();
            unused27 = 0;
            unused26 = str6;
            str12 = 0;
            unused5 = 0;
          }
LAB_00484dcc:
          ehContext = 8;
          _ThrowExceptionLDTC((uint *)&DAT_0047ec18,failure7,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
        }
        if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34) & 1) != 0) {
          *(uint *)(iVar2 + 0x30) = uVar4;
          throwLine = 0;
          throwFile = 0;
          throwFlags = 0;
          copyCtorMask = 1;
          copyCtor = &LAB_0047ec80;
          objectDtor = 0;
          ehContext = 0x2c;
          msgText4 = (uint *)__rwstd::except_msg_string::format(exceptMsg5,PTR_s_iostream_object_has_badbit_set_00515afc);
          iVar3 = std::string::string_from_cstr((int)str5,msgText4);
          ehDtorCount = ehDtorCount + 1;
          std::ios_base::failure::failure(failure6,iVar3);
          ehDtorCount = ehDtorCount + 2;
          if (str11 != 0) {
            if (*(int *)(str11 + -0xc) != -1) {
              strRep5 = (int *)(str11 + -0xc);
              if (strRep5 == &g_nullStringRep) {
                iVar3 = 1;
              }
              else if (strRep5 == &g_nullStringRep) {
                iVar3 = 1;
              }
              else {
                *strRep5 = *strRep5 + -1;
                iVar3 = *strRep5 + 1;
              }
              if (iVar3 != 0) goto LAB_00484f19;
            }
            unused25 = str11 + -0xc;
            unused24 = str11 + -0xc;
            operator_delete();
            unused23 = 0;
            unused22 = str5;
            str11 = 0;
            unused4 = 0;
          }
LAB_00484f19:
          ehContext = 8;
          _ThrowExceptionLDTC((uint *)&DAT_0047ec18,failure6,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
        }
        if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34) & 2) != 0) {
          *(uint *)(iVar2 + 0x30) = uVar4;
          throwLine = 0;
          throwFile = 0;
          throwFlags = 0;
          uVar4 = 1;
          copyCtor = &LAB_0047ec80;
          objectDtor = 0;
          ehContext = 0x44;
          msgText3 = (uint *)__rwstd::except_msg_string::format(exceptMsg4,PTR_s_iostream_object_has_eofbit_set_00515b00);
          iVar2 = std::string::string_from_cstr((int)str4,msgText3);
          ehDtorCount = ehDtorCount + 1;
          std::ios_base::failure::failure(failure5,iVar2);
          ehDtorCount = ehDtorCount + 2;
          if (str10 != 0) {
            if (*(int *)(str10 + -0xc) != -1) {
              strRep4 = (int *)(str10 + -0xc);
              if (strRep4 == &g_nullStringRep) {
                iVar2 = 1;
              }
              else if (strRep4 == &g_nullStringRep) {
                iVar2 = 1;
              }
              else {
                *strRep4 = *strRep4 + -1;
                iVar2 = *strRep4 + 1;
              }
              if (iVar2 != 0) goto LAB_00485066;
            }
            unused21 = str10 + -0xc;
            unused20 = str10 + -0xc;
            operator_delete();
            unused19 = 0;
            unused18 = str4;
            str10 = 0;
            unused3 = 0;
          }
LAB_00485066:
          ehContext = 8;
          _ThrowExceptionLDTC((uint *)&DAT_0047ec18,failure5,objectDtor,copyCtor,uVar4,throwFlags,throwFile,throwLine);
        }
      }
    }
  }
  if ((DAT_00515b64 != '\0') &&
     ((piVar1 = (int *)*self, piVar1 == (int *)&DAT_0051bb24 || (piVar1 == &DAT_0051bb64)))) {
    iVar2 = (**(code **)(**(int **)(*piVar1 + 0x24) + 0x30))();
    if (iVar2 == -1) {
      iVar2 = *(int *)*self;
      uVar4 = *(uint *)(iVar2 + 0x30);
      if (*(int *)(iVar2 + 0x24) == 0) {
        *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) | 1;
      }
      uVar4 = uVar4 | 1;
      *(uint *)(iVar2 + 0x30) = uVar4;
      if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34)) != 0) {
        if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34) & 4) != 0) {
          *(uint *)(iVar2 + 0x30) = uVar4;
          throwLine = 0;
          throwFile = 0;
          throwFlags = 0;
          copyCtorMask = 1;
          copyCtor = &LAB_0047ec80;
          objectDtor = 0;
          ehContext = 0x68;
          local_17c = (uint *)__rwstd::except_msg_string::format(exceptMsg3,PTR_s_iostream_object_has_failbit_set_00515af8)
          ;
          iVar3 = std::string::string_from_cstr((int)str3,local_17c);
          ehDtorCount = ehDtorCount + 1;
          std::ios_base::failure::failure(failure4,iVar3);
          ehDtorCount = ehDtorCount + 2;
          if (str9 != 0) {
            if (*(int *)(str9 + -0xc) != -1) {
              strRep3 = (int *)(str9 + -0xc);
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
              if (iVar3 != 0) goto LAB_0048523e;
            }
            unused17 = str9 + -0xc;
            unused16 = str9 + -0xc;
            operator_delete();
            unused15 = 0;
            unused14 = str3;
            str9 = 0;
            unused2 = 0;
          }
LAB_0048523e:
          ehContext = 0x5c;
          _ThrowExceptionLDTC((uint *)&DAT_0047ec18,failure4,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
        }
        if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34) & 1) != 0) {
          *(uint *)(iVar2 + 0x30) = uVar4;
          throwLine = 0;
          throwFile = 0;
          throwFlags = 0;
          copyCtorMask = 1;
          copyCtor = &LAB_0047ec80;
          objectDtor = 0;
          ehContext = 0x80;
          msgText2 = (uint *)__rwstd::except_msg_string::format(exceptMsg2,PTR_s_iostream_object_has_badbit_set_00515afc);
          iVar3 = std::string::string_from_cstr((int)str2,msgText2);
          ehDtorCount = ehDtorCount + 1;
          std::ios_base::failure::failure(failure3,iVar3);
          ehDtorCount = ehDtorCount + 2;
          if (str8 != 0) {
            if (*(int *)(str8 + -0xc) != -1) {
              strRep2 = (int *)(str8 + -0xc);
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
              if (iVar3 != 0) goto LAB_004853a9;
            }
            unused13 = str8 + -0xc;
            unused12 = str8 + -0xc;
            operator_delete();
            unused11 = 0;
            unused10 = str2;
            str8 = 0;
            unused = 0;
          }
LAB_004853a9:
          ehContext = 0x5c;
          _ThrowExceptionLDTC((uint *)&DAT_0047ec18,failure3,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
        }
        if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34) & 2) != 0) {
          *(uint *)(iVar2 + 0x30) = uVar4;
          throwLine = 0;
          throwFile = 0;
          throwFlags = 0;
          uVar4 = 1;
          copyCtor = &LAB_0047ec80;
          objectDtor = 0;
          ehContext = 0x98;
          msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_iostream_object_has_eofbit_set_00515b00);
          iVar2 = std::string::string_from_cstr((int)str,msgText);
          ehDtorCount = ehDtorCount + 1;
          std::ios_base::failure::failure(failure2,iVar2);
          ehDtorCount = ehDtorCount + 2;
          if (str7 != 0) {
            if (*(int *)(str7 + -0xc) != -1) {
              strRep = (int *)(str7 + -0xc);
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
              if (iVar2 != 0) goto LAB_00485514;
            }
            unused9 = str7 + -0xc;
            unused8 = str7 + -0xc;
            operator_delete();
            unused7 = 0;
            unused6 = str;
            str7 = 0;
          }
LAB_00485514:
          ehContext = 0x5c;
          _ThrowExceptionLDTC((uint *)&DAT_0047ec18,failure2,objectDtor,copyCtor,uVar4,throwFlags,throwFile,throwLine);
        }
      }
    }
  }
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_0048553e:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004855dc  std::vector<FormattedTextSegment *>::~vector   (54 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as std::vector_FormattedTextSegment_ptr::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_FormattedTextSegment_ptr::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    std::_Destroy_range_ptr_4803d8(self,*(int *)(self + 4),*(int *)(self + 8));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00485614  OWL::TCharFormat::TCharFormat   (79 bytes)   [analysis]
//   CHARFORMAT read from a rich edit (selection or default)
//   file placement: inferred (address adjacency)
undefined4 * __cdecl OWL::TCharFormat::TCharFormat(undefined4 *self,int *richEdit,char selection,undefined4 mask)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50389c);
  memset(self,0,0x3c);
  *self = 0x3c;
  self[1] = mask;
  OWL::TRichEdit::GetCharFormat(richEdit,(LPARAM)self,selection);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00485664  OWL::TCharFormat::SetBold   (28 bytes)   [analysis]
//   CFM_BOLD / CFE_BOLD
//   file placement: inferred (address adjacency)
void __cdecl OWL::TCharFormat::SetBold(int self,char on)

{
  *(uint *)(self + 4) = *(uint *)(self + 4) | 1;
  if (on != '\0') {
    *(uint *)(self + 8) = *(uint *)(self + 8) | 1;
    return;
  }
  *(uint *)(self + 8) = *(uint *)(self + 8) & 0xfffffffe;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00485680  OWL::TCharFormat::SetItalic   (28 bytes)   [analysis]
//   CFM_ITALIC / CFE_ITALIC
//   file placement: inferred (address adjacency)
void __cdecl OWL::TCharFormat::SetItalic(int self,char on)

{
  *(uint *)(self + 4) = *(uint *)(self + 4) | 2;
  if (on != '\0') {
    *(uint *)(self + 8) = *(uint *)(self + 8) | 2;
    return;
  }
  *(uint *)(self + 8) = *(uint *)(self + 8) & 0xfffffffd;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048569c  OWL::TCharFormat::SetUnderline   (28 bytes)   [analysis]
//   CFM_UNDERLINE / CFE_UNDERLINE
//   file placement: inferred (address adjacency)
void __cdecl OWL::TCharFormat::SetUnderline(int self,char on)

{
  *(uint *)(self + 4) = *(uint *)(self + 4) | 4;
  if (on != '\0') {
    *(uint *)(self + 8) = *(uint *)(self + 8) | 4;
    return;
  }
  *(uint *)(self + 8) = *(uint *)(self + 8) & 0xfffffffb;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004856b8  OWL::TCharFormat::SetStrikeOut   (28 bytes)   [analysis]
//   CFM_STRIKEOUT / CFE_STRIKEOUT
//   file placement: inferred (address adjacency)
void __cdecl OWL::TCharFormat::SetStrikeOut(int self,char on)

{
  *(uint *)(self + 4) = *(uint *)(self + 4) | 8;
  if (on != '\0') {
    *(uint *)(self + 8) = *(uint *)(self + 8) | 8;
    return;
  }
  *(uint *)(self + 8) = *(uint *)(self + 8) & 0xfffffff7;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004856d4  OWL::TCharFormat::SetTextColor   (43 bytes)   [analysis]
//   CFM_COLOR and crTextColor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TCharFormat::SetTextColor(int self,undefined4 *colour)

{
  *(uint *)(self + 4) = *(uint *)(self + 4) | 0x40000000;
  if (colour == (undefined4 *)0x0) {
    *(uint *)(self + 8) = *(uint *)(self + 8) | 0x40000000;
    return;
  }
  *(uint *)(self + 8) = *(uint *)(self + 8) & 0xbfffffff;
  *(undefined4 *)(self + 0x14) = *colour;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00485700  OWL::TCharFormat::SetFaceName   (53 bytes)   [analysis]
//   CFM_FACE and szFaceName
//   file placement: inferred (address adjacency)
char * __cdecl OWL::TCharFormat::SetFaceName(int self,char *faceName)

{
  char cVar1;
  uint uVar2;
  uint i;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  do {
    pcVar4 = faceName;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = faceName + 1;
    cVar1 = *faceName;
    faceName = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = (char *)(self + 0x1a);
  for (i = uVar2 >> 2; i != 0; i = i - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  return (char *)(self + 0x1a);
}

// ----------------------------------------------------------------------------------------------------
// 0x00485738  OWL::TCharFormat::SetCharSet   (14 bytes)   [analysis]
//   CFM_CHARSET and bCharSet
//   file placement: inferred (address adjacency)
void __cdecl OWL::TCharFormat::SetCharSet(int self,undefined1 charSet)

{
  *(undefined1 *)(self + 0x18) = charSet;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00485748  OWL::TCharFormat::SetPitchAndFamily   (14 bytes)   [analysis]
//   bPitchAndFamily
//   file placement: inferred (address adjacency)
void __cdecl OWL::TCharFormat::SetPitchAndFamily(int self,undefined1 pitchAndFamily)

{
  *(undefined1 *)(self + 0x19) = pitchAndFamily;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00485758  OWL::TCharFormat::SetHeight   (21 bytes)   [analysis]
//   CFM_SIZE and yHeight
//   file placement: inferred (address adjacency)
void __cdecl OWL::TCharFormat::SetHeight(int self,undefined4 height)

{
  *(uint *)(self + 4) = *(uint *)(self + 4) | 0x80000000;
  *(undefined4 *)(self + 0xc) = height;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00485770  OWL::TCharFormat::GetFontInfo   (131 bytes)   [analysis]
//   the format as a LOGFONT
//   file placement: inferred (address adjacency)
undefined4 * __cdecl OWL::TCharFormat::GetFontInfo(int self,int *logFont)

{
  int iVar1;
  uint uVar2;
  uint i;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  *(undefined4 *)(self + 4) = 0xb000000f;
  *(int *)(self + 0xc) = *logFont * -0x14;
  if (logFont[4] == 700) {
    *(uint *)(self + 8) = *(uint *)(self + 8) | 1;
  }
  if ((char)logFont[5] != '\0') {
    *(uint *)(self + 8) = *(uint *)(self + 8) | 2;
  }
  if (*(char *)((int)logFont + 0x16) != '\0') {
    *(uint *)(self + 8) = *(uint *)(self + 8) | 8;
  }
  if (*(char *)((int)logFont + 0x15) != '\0') {
    *(uint *)(self + 8) = *(uint *)(self + 8) | 4;
  }
  *(undefined1 *)(self + 0x19) = *(undefined1 *)((int)logFont + 0x1b);
  uVar2 = 0xffffffff;
  piVar5 = logFont + 7;
  do {
    piVar6 = piVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    piVar6 = (int *)((int)piVar5 + 1);
    iVar1 = *piVar5;
    piVar5 = piVar6;
  } while ((char)iVar1 != '\0');
  uVar2 = ~uVar2;
  puVar4 = (undefined4 *)((int)piVar6 - uVar2);
  puVar7 = (undefined4 *)(self + 0x1a);
  for (i = uVar2 >> 2; i != 0; i = i - 1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  return (undefined4 *)(self + 0x1a);
}

// ----------------------------------------------------------------------------------------------------
// 0x004857f4  OWL::TCharFormat::SetDefaults   (122 bytes)   [analysis]
//   MS Sans Serif, black, no effects
//   file placement: inferred (address adjacency)
void __cdecl OWL::TCharFormat::SetDefaults(int self)

{
  OWL::TCharFormat::SetTextColor(self,(undefined4 *)0x0);
  OWL::TCharFormat::SetBold(self,'\0');
  OWL::TCharFormat::SetItalic(self,'\0');
  OWL::TCharFormat::SetUnderline(self,'\0');
  OWL::TCharFormat::SetStrikeOut(self,'\0');
  OWL::TCharFormat::SetHeight(self,0xa0);
  OWL::TCharFormat::SetFaceName(self,"MS Sans Serif");
  OWL::TCharFormat::SetPitchAndFamily(self,0);
  OWL::TCharFormat::SetCharSet(self,0);
  *(uint *)(self + 4) = *(uint *)(self + 4) | 0x20000000;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00485870  OWL::TParaFormat::TParaFormat   (49 bytes)   [analysis]
//   empty PARAFORMAT with a mask
//   file placement: inferred (address adjacency)
undefined4 * __cdecl OWL::TParaFormat::TParaFormat(undefined4 *self,undefined4 mask)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5038a4);
  *self = 0x9c;
  self[1] = mask;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004858a4  OWL::TParaFormat::SetStartIndent   (40 bytes)   [analysis]
//   PFM_STARTINDENT (absolute or relative)
//   file placement: inferred (address adjacency)
void __cdecl OWL::TParaFormat::SetStartIndent(int self,undefined4 indent,char relative)

{
  *(uint *)(self + 4) = *(uint *)(self + 4) | 1;
  if (relative == '\0') {
    *(uint *)(self + 4) = *(uint *)(self + 4) & 0x7fffffff;
  }
  else {
    *(uint *)(self + 4) = *(uint *)(self + 4) | 0x80000000;
  }
  *(undefined4 *)(self + 0xc) = indent;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004858cc  OWL::TParaFormat::SetRightIndent   (18 bytes)   [analysis]
//   PFM_RIGHTINDENT
//   file placement: inferred (address adjacency)
void __cdecl OWL::TParaFormat::SetRightIndent(int self,undefined4 indent)

{
  *(uint *)(self + 4) = *(uint *)(self + 4) | 2;
  *(undefined4 *)(self + 0x10) = indent;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004858e0  OWL::TParaFormat::SetOffset   (18 bytes)   [analysis]
//   PFM_OFFSET
//   file placement: inferred (address adjacency)
void __cdecl OWL::TParaFormat::SetOffset(int self,undefined4 offset)

{
  *(uint *)(self + 4) = *(uint *)(self + 4) | 4;
  *(undefined4 *)(self + 0x14) = offset;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004858f4  OWL::TParaFormat::SetAlignment   (20 bytes)   [analysis]
//   PFM_ALIGNMENT
//   file placement: inferred (address adjacency)
void __cdecl OWL::TParaFormat::SetAlignment(int self,undefined2 alignment)

{
  *(uint *)(self + 4) = *(uint *)(self + 4) | 8;
  *(undefined2 *)(self + 0x18) = alignment;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00485908  OWL::TParaFormat::SetTabs   (51 bytes)   [analysis]
//   PFM_TABSTOPS
//   file placement: inferred (address adjacency)
void __cdecl OWL::TParaFormat::SetTabs(int self,short count,undefined4 *tabs)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int i;
  
  *(uint *)(self + 4) = *(uint *)(self + 4) | 0x10;
  *(short *)(self + 0x1a) = count;
  puVar2 = (undefined4 *)(self + 0x1c);
  for (i = 0; i < count; i = i + 1) {
    uVar1 = *tabs;
    tabs = tabs + 1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048593c  DestroyRichEditLoader_48593c   (64 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x00468c4c (64 bytes; the code occurs several times, e.g. one template instance per type). static destructor of the TRichEdit DLL loader
//   file placement: inferred (address adjacency)
void __stdcall DestroyRichEditLoader_48593c(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5038ec);
  if (DAT_005038ac != '\0') {
    Help::_dtor((int *)&DAT_0051aea4,2);
    DAT_005038ac = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048597c  ShowHtmlHelp   (137 bytes)   [analysis]
//   opens the help file with HtmlHelpA; reports "Help library not found" / "Can't open help"
//   file placement: inferred (address adjacency)
undefined4 __cdecl ShowHtmlHelp(HWND hWnd)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x503938);
  if (DAT_005038ac == '\0') {
    LoadHtmlHelp((undefined4 *)&DAT_0051aea4);
    DAT_005038ac = DAT_005038ac + '\x01';
  }
  if (DAT_0051aea8 == (code *)0x0) {
    MessageBoxExA(hWnd,"Help library not found","Can't open help",0x30,0);
    uVar1 = 0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    uVar1 = ((code *)DAT_0051aea8)();
    *sehChainHead = sehPrevFrame;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00485a4c  LoadHtmlHelp   (269 bytes)   [analysis]
//   finds hhctrl.ocx through its CLSID in the registry and gets HtmlHelpA
//   file placement: inferred (address adjacency)
undefined4 * __cdecl LoadHtmlHelp(undefined4 *result)

{
  LSTATUS regStatus;
  HMODULE hModule;
  FARPROC procAddress;
  undefined4 *sehChainHead;
  CHAR local_240 [264];
  BYTE local_138 [264];
  DWORD data;
  HKEY hKey;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x50395c);
  ehContext = 8;
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  data = 0x106;
  regStatus = RegOpenKeyExA((HKEY)0x80000000,"CLSID\\{adb880a6-d8ff-11cf-9377-00aa003b7a11}\\InprocServer32",0,1,&hKey);
  if (regStatus == 0) {
    regStatus = RegQueryValueExA(hKey,"Help library not found" + 0x16,(LPDWORD)0x0,
                             (LPDWORD)0x0,local_138,&data);
    if (regStatus == 0) {
      ExpandEnvironmentStringsA((LPCSTR)local_138,local_240,0x106);
      hModule = LoadLibraryA(local_240);
      *result = hModule;
      if (hModule != (HMODULE)0x0) {
        procAddress = GetProcAddress(hModule,"HtmlHelpA");
        result[1] = procAddress;
        if (procAddress == (FARPROC)0x0) {
          FreeLibrary((HMODULE)*result);
          *result = 0;
        }
      }
    }
    RegCloseKey(hKey);
  }
  if (result[1] != 0) {
    (*(code *)result[1])();
  }
  *sehChainHead = sehPrevFrame;
  return result;
}

} // namespace tea
