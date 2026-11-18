// TEA.exe — application module "TSDictionaryList"
// 64 functions, 0x004075e4..0x0040c800. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004075e4  TSDictionaryList::TSDictionaryList   (163 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x004051bc. constructor: copies the ';'-separated path list and starts an empty vector of Dictionary pointers
/* WARNING: Removing unreachable block (ram,0x0040762e) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x00407636 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 * __cdecl TSDictionaryList::TSDictionaryList(undefined4 *self,uint *paths)

{
  undefined4 *dst;
  uint remaining;
  uint chunk;
  undefined4 *src;
  uint *p;
  undefined4 *sehChainHead;
  byte backwards;
  undefined4 sehPrevFrame;
  
  backwards = 0;
  __InitExceptBlockLDTC(0x4eb4e0);
  self[m_dictsBegin / 4] = 0;
  self[m_dictsEnd / 4] = 0;
  self[m_dictsCapacityEnd / 4] = 0;
  self[m_dicts / 4] = 0x100;
  strlen(paths);
  dst = (undefined4 *)operator_new_array();
  *self = dst;
  remaining = 0xffffffff;
  do {
    p = paths;
    if (remaining == 0) break;
    remaining = remaining - 1;
    p = (uint *)((int)paths + (uint)backwards * -2 + 1);
    chunk = *paths;
    paths = p;
  } while ((char)chunk != '\0');
  remaining = ~remaining;
  src = (undefined4 *)((int)p - remaining);
  for (chunk = remaining >> 2; chunk != 0; chunk = chunk - 1) {
    *dst = *src;
    src = src + (uint)backwards * -2 + 1;
    dst = dst + (uint)backwards * -2 + 1;
  }
  for (remaining = remaining & 3; remaining != 0; remaining = remaining - 1) {
    *(undefined1 *)dst = *(undefined1 *)src;
    src = (undefined4 *)((int)src + (uint)backwards * -2 + 1);
    dst = (undefined4 *)((int)dst + (uint)backwards * -2 + 1);
  }
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004076a8  TSDictionaryList::~TSDictionaryList   (115 bytes)   [rtti:dtor destructor]
//   written in code as TSDictionaryList::_dtor
void __cdecl TSDictionaryList::_dtor(int self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eb510);
  if (self != 0) {
    operator_delete_array();
    std::_Destroy_range_ptr_40771c(self + m_dicts,*(int *)(self + m_dictsBegin),*(int *)(self + m_dictsEnd));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040771c  std::_Destroy_range_ptr_40771c   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004050b4 (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of pointers (nothing to do; the loop is left in)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_ptr_40771c(undefined4 vec,int first,int last)

{
  for (; last != first; first = first + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00407734  TSDictionaryList::Open   (3037 bytes)   [analysis (position-matched TEACON.exe)]
//   paired with TEACON.exe 0x0040530c by position between identical neighbours; the bodies differ (3045 vs 3037 bytes), so treat the name as probable. builds a TSDictionaryList from a ';'-separated list of .tsd paths: reuses dictionaries already in g_dictionaryCache (adding a reference) and loads the others
/* WARNING: Removing unreachable block (ram,0x004078bf) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 * __cdecl TSDictionaryList::Open(uint *paths)

{
  char *found;
  int count;
  uint semicolon;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 rangeErrorText [248];
  undefined4 unused;
  int *newData;
  int *unused2;
  undefined1 lengthErrorText [248];
  int *newData2;
  int *unused3;
  int *unused4;
  undefined1 *unused5;
  undefined4 unused6;
  int *unused7;
  int *unused8;
  undefined1 *unused9;
  undefined4 unused10;
  int *unused11;
  int *unused12;
  undefined1 *unused13;
  undefined4 unused14;
  int unused15;
  int unused16;
  undefined4 *slot;
  undefined4 *unused17;
  undefined4 *unused18;
  undefined4 *unused19;
  int *dict;
  uint copyLen;
  undefined1 nul;
  uint available;
  undefined1 *unused20;
  undefined4 unused21;
  int *unused22;
  int *unused23;
  int *strRep2;
  int *newData3;
  int *unused24;
  uint unused25;
  undefined1 *unused26;
  int *newRep;
  int *unused27;
  uint len2;
  int *strRep3;
  undefined1 *unused28;
  int *unused29;
  undefined4 unused30;
  uint *rangeErrorMsg;
  uint tailLen;
  undefined1 *unused31;
  undefined4 unused32;
  int *unused33;
  int *unused34;
  int *strRep4;
  int *unused35;
  int *unused36;
  uint unused37;
  undefined1 *unused38;
  int *newRep2;
  int *unused39;
  uint len3;
  int *strRep5;
  undefined1 *unused40;
  int *unused41;
  undefined4 unused42;
  uint *lengthErrorMsg;
  int *unused43;
  int len;
  undefined1 unused44;
  uint semicolonPos;
  int *unused45;
  int *unused46;
  uint unused47;
  undefined1 *unused48;
  int *newRep3;
  int *unused49;
  undefined1 *unused50;
  int *unused51;
  undefined4 *list;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 rest [8];
  int str3;
  int *newDict;
  undefined1 str [8];
  int *str4;
  undefined1 str2 [8];
  int *str5;
  undefined **rangeError [2];
  undefined1 newStr [8];
  int *unused52;
  undefined **lengthError [2];
  undefined1 newStr2 [8];
  int *unused53;
  undefined1 path [8];
  int *pathData;
  undefined4 *newList;
  undefined1 remaining [8];
  int *remainingData;
  
  __InitExceptBlockLDTC(0x4eb5f4);
  ehContext = 8;
  std::string::string_from_cstr((int)remaining,paths);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x14;
  newList = (undefined4 *)operator_new();
  if (newList != (undefined4 *)0x0) {
    ehContext = 0x2c;
    TSDictionaryList::TSDictionaryList(newList,paths);
  }
  ehContext = 0x14;
  list = newList;
  if ((char)*paths != '\0') {
LAB_004077d5:
    do {
      ehContext = 0x44;
      pathData = (int *)0x0;
      if (remainingData[-3] == -1 || remainingData[-3] + 1 < 0) {
        semicolon = remainingData[-1];
        newRep3 = std::string::__getRep(path,semicolon,semicolon);
        newData2 = newRep3 + 3;
        unused46 = remainingData;
        unused45 = newData2;
        unused47 = semicolon;
        unused48 = path;
        unused49 = newData2;
        pathData = newData2;
        memcpy(newData2,remainingData,semicolon);
      }
      else {
        unused51 = remainingData;
        pathData = remainingData;
        strRep = remainingData + -3;
        unused50 = path;
        if (strRep != &g_nullStringRep) {
          *strRep = *strRep + 1;
        }
      }
      ehDtorCount = ehDtorCount + 1;
      ehContext = 0x38;
      unused44 = 0x3b;
      len = pathData[-1];
      unused43 = pathData;
      found = thunk_memchr((char *)pathData,';',len);
      semicolon = g_stringNpos;
      if (found != (char *)0x0) {
        semicolon = (int)found - (int)pathData;
      }
      semicolonPos = semicolon;
      if (semicolon != 0xffffffff) {
        if (g_stringNpos - 0xe < semicolon) {
          throwLine = 0;
          throwFile = 0;
          throwFlags = 0;
          copyCtorMask = 1;
          copyCtor = &LAB_00408370;
          objectDtor = 0;
          ehContext = 0x68;
          lengthErrorMsg = (uint *)__rwstd::except_msg_string::format(lengthErrorText,PTR_s_invalid_string_size_parameter_in_00516d20)
          ;
          std::string::string_from_cstr((int)str2,lengthErrorMsg);
          ehDtorCount = ehDtorCount + 2;
          lengthError[0] = &std::logic_error::vftable;
          unused42 = 0;
          unused53 = (int *)0x0;
          ehContext = 0x74;
          if (str5[-3] == -1 || str5[-3] + 1 < 0) {
            len3 = str5[-1];
            newRep2 = std::string::__getRep(newStr2,len3,len3);
            unused38 = newStr2;
            newData = newRep2 + 3;
            unused37 = len3;
            unused36 = str5;
            unused35 = newData;
            unused39 = newData;
            unused53 = newData;
            memcpy(newData,str5,len3);
          }
          else {
            unused40 = newStr2;
            unused41 = str5;
            unused53 = str5;
            unused2 = str5;
            strRep5 = str5 + -3;
            if (strRep5 != &g_nullStringRep) {
              *strRep5 = *strRep5 + 1;
            }
          }
          ehContext = 0x68;
          lengthError[0] = &std::length_error::vftable;
          ehDtorCount = ehDtorCount + 2;
          if (str5 != (int *)0x0) {
            if (str5[-3] != -1) {
              strRep4 = str5 + -3;
              if (strRep4 == &g_nullStringRep) {
                count = 1;
              }
              else if (strRep4 == &g_nullStringRep) {
                count = 1;
              }
              else {
                *strRep4 = *strRep4 + -1;
                count = *strRep4 + 1;
              }
              if (count != 0) goto LAB_00407b97;
            }
            unused34 = str5 + -3;
            unused33 = str5 + -3;
            operator_delete();
            unused32 = 0;
            unused31 = str2;
            str5 = (int *)0x0;
            unused = 0;
          }
LAB_00407b97:
          ehContext = 0x5c;
          _ThrowExceptionLDTC((uint *)&DAT_00408314,(undefined4*)lengthError,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
        }
        if (semicolon < (uint)pathData[-1]) {
          tailLen = pathData[-1] - semicolon;
          if ((uint)pathData[-1] < semicolon) {
            throwLine = 0;
            throwFile = 0;
            throwFlags = 0;
            copyCtorMask = 1;
            copyCtor = &LAB_004084c8;
            objectDtor = 0;
            ehContext = 0x98;
            rangeErrorMsg = (uint *)__rwstd::except_msg_string::format(rangeErrorText,
                                             PTR_s_string_index_out_of_range_in_fun_00516d2c);
            std::string::string_from_cstr((int)str,rangeErrorMsg);
            ehDtorCount = ehDtorCount + 2;
            rangeError[0] = &std::logic_error::vftable;
            unused30 = 0;
            unused52 = (int *)0x0;
            ehContext = 0xa4;
            if (str4[-3] == -1 || str4[-3] + 1 < 0) {
              len2 = str4[-1];
              newRep = std::string::__getRep(newStr,len2,len2);
              unused26 = newStr;
              newData3 = newRep + 3;
              unused25 = len2;
              unused24 = str4;
              unused27 = newData3;
              unused52 = newData3;
              memcpy(newData3,str4,len2);
            }
            else {
              unused28 = newStr;
              unused29 = str4;
              unused52 = str4;
              strRep3 = str4 + -3;
              if (strRep3 != &g_nullStringRep) {
                *strRep3 = *strRep3 + 1;
              }
            }
            ehContext = 0x98;
            rangeError[0] = &std::out_of_range::vftable;
            ehDtorCount = ehDtorCount + 2;
            if (str4 != (int *)0x0) {
              if (str4[-3] != -1) {
                strRep2 = str4 + -3;
                if (strRep2 == &g_nullStringRep) {
                  count = 1;
                }
                else if (strRep2 == &g_nullStringRep) {
                  count = 1;
                }
                else {
                  *strRep2 = *strRep2 + -1;
                  count = *strRep2 + 1;
                }
                if (count != 0) goto LAB_00407e39;
              }
              unused23 = str4 + -3;
              unused22 = str4 + -3;
              operator_delete();
              unused21 = 0;
              unused20 = str;
              str4 = (int *)0x0;
            }
LAB_00407e39:
            ehContext = 0x5c;
            _ThrowExceptionLDTC((uint *)&DAT_0040846c,(undefined4*)rangeError,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
          }
          available = pathData[-1] - semicolon;
          nul = 0;
          copyLen = available;
          if (tailLen < available) {
            copyLen = tailLen;
          }
          std::string::replace((int)path,semicolon,copyLen,(uint)&nul,0,0,0);
        }
        else {
          std::string::replace_fill((int)path,pathData[-1],0,semicolon - pathData[-1],0);
        }
        if (pathData + -3 != &g_nullStringRep) {
          pathData[-3] = 0;
        }
      }
      semicolon = 0;
      while( true ) {
        count = (int)(*(undefined4 * *)&DAT_004eb4a8) - DAT_004eb4a4;
        if (count < 0) {
          count = count + 3;
        }
        if ((uint)(count >> 2) <= semicolon) goto LAB_00407f2b;
        dict = *(int **)(semicolon * 4 + DAT_004eb4a4);
        found = (char *)(**(code **)(*dict + 0x10))();
        count = strcmp((char *)pathData,found);
        if (count == 0) break;
        semicolon = semicolon + 1;
      }
      dict[0x804] = dict[0x804] + 1;
LAB_00407f2b:
      count = (int)(*(undefined4 * *)&DAT_004eb4a8) - DAT_004eb4a4;
      if (count < 0) {
        count = count + 3;
      }
      if ((uint)(count >> 2) <= semicolon) {
        newDict = (int *)operator_new();
        if (newDict != (int *)0x0) {
          ehContext = 0xd4;
          TSDictionaryList::Dictionary::Dictionary(newDict,(int)path);
          ehContext = 200;
        }
        dict = newDict;
        (**(code **)(*newDict + 4))();
        if ((*(undefined4 * *)&DAT_004eb4a8) == (*(undefined4 * *)&DAT_004eb4b8)) {
          std::vector_ptr::insert_aux(0x4eb4a0,(*(undefined4 * *)&DAT_004eb4a8),(undefined4*)&dict);
        }
        else {
          unused19 = (*(undefined4 * *)&DAT_004eb4a8);
          unused18 = (*(undefined4 * *)&DAT_004eb4a8);
          *(*(undefined4 * *)&DAT_004eb4a8) = dict;
          (*(undefined4 * *)&DAT_004eb4a8) = (*(undefined4 * *)&DAT_004eb4a8) + 1;
        }
      }
      if (list[4] == list[8]) {
        std::vector_ptr::insert_aux((int)(list + 2),(undefined4 *)list[4],(undefined4*)&dict);
      }
      else {
        slot = (undefined4 *)list[4];
        *slot = dict;
        list[4] = list[4] + 4;
        unused17 = slot;
      }
      if (semicolonPos == 0xffffffff) goto code_r0x00408033;
      ehContext = 0xe0;
      std::string::substr((int)rest,(int)remaining,semicolonPos + 1,g_stringNpos);
      ehDtorCount = ehDtorCount + 1;
      std::string::operator_assign((int)remaining,(int)rest);
      ehDtorCount = ehDtorCount + -1;
      if (str3 != 0) {
        if (*(int *)(str3 + -0xc) != -1) {
          strRep = (int *)(str3 + -0xc);
          if (strRep == &g_nullStringRep) {
            count = 1;
          }
          else if (strRep == &g_nullStringRep) {
            count = 1;
          }
          else {
            *strRep = *strRep + -1;
            count = *strRep + 1;
          }
          if (count != 0) goto LAB_004081ac;
        }
        unused16 = str3 + -0xc;
        unused15 = str3 + -0xc;
        operator_delete();
        unused14 = 0;
        unused13 = rest;
        str3 = 0;
      }
LAB_004081ac:
      ehContext = 0x38;
      ehDtorCount = ehDtorCount + -1;
      if (pathData != (int *)0x0) {
        if (pathData[-3] != -1) {
          strRep = pathData + -3;
          if (strRep == &g_nullStringRep) {
            count = 1;
          }
          else if (strRep == &g_nullStringRep) {
            count = 1;
          }
          else {
            *strRep = *strRep + -1;
            count = *strRep + 1;
          }
          if (count != 0) goto LAB_004077d5;
        }
        unused8 = pathData + -3;
        unused7 = pathData + -3;
        operator_delete();
        unused6 = 0;
        unused5 = path;
      }
    } while( true );
  }
LAB_00408256:
  ehDtorCount = ehDtorCount + -1;
  if (remainingData != (int *)0x0) {
    if (remainingData[-3] != -1) {
      strRep = remainingData + -3;
      if (strRep == &g_nullStringRep) {
        count = 1;
      }
      else if (strRep == &g_nullStringRep) {
        count = 1;
      }
      else {
        *strRep = *strRep + -1;
        count = *strRep + 1;
      }
      if (count != 0) goto LAB_004082f3;
    }
    unused4 = remainingData + -3;
    unused3 = remainingData + -3;
    operator_delete();
  }
LAB_004082f3:
  *sehChainHead = sehPrevFrame;
  return list;
code_r0x00408033:
  ehDtorCount = ehDtorCount + -1;
  if (pathData != (int *)0x0) {
    if (pathData[-3] != -1) {
      strRep = pathData + -3;
      if (strRep == &g_nullStringRep) {
        count = 1;
      }
      else if (strRep == &g_nullStringRep) {
        count = 1;
      }
      else {
        *strRep = *strRep + -1;
        count = *strRep + 1;
      }
      if (count != 0) goto LAB_00408256;
    }
    unused12 = pathData + -3;
    unused11 = pathData + -3;
    operator_delete();
    unused10 = 0;
    pathData = (int *)0x0;
    unused9 = path;
  }
  goto LAB_00408256;
}

// ----------------------------------------------------------------------------------------------------
// 0x004085f0  std::vector_ptr::insert_aux   (437 bytes, 2 ranges)   [analysis (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x004061d0 (437 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. std::vector<T *> insert at a position, growing the storage (doubling, at least 256) when full
//   file placement: inferred (address adjacency)
void __cdecl std::vector_ptr::insert_aux(int vec,undefined4 *pos,undefined4 *value)

{
  int newCapacity;
  undefined4 *storage;
  int index;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x4eb740);
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
    std::copy_ptr(*(undefined4 **)(vec + 4),pos,storage);
    index = (int)pos - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    storage[index >> 2] = *value;
    index = (int)pos - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    std::copy_ptr(pos,*(undefined4 **)(vec + 8),storage + (index >> 2) + 1);
    index = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    std::_Destroy_range_ptr_40771c(vec,*(int *)(vec + 4),*(int *)(vec + 8));
    operator_delete();
    *(undefined4 **)(vec + 0x18) = storage + newCapacity;
    *(undefined4 **)(vec + 8) = storage + (index >> 2) + 1;
    *(undefined4 **)(vec + 4) = storage;
  }
  else {
    *storage = storage[-1];
    std::copy_backward_ptr(pos,*(undefined4 **)(vec + 8) + -1,*(undefined4 **)(vec + 8));
    *pos = *value;
    *(int *)(vec + 8) = *(int *)(vec + 8) + 4;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004087c8  std::copy_backward_ptr   (36 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004063a8 (36 bytes; the code occurs several times, e.g. one template instance per type). copy_backward over a range of pointers
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_backward_ptr(undefined4 *first,undefined4 *last,undefined4 *destEnd)

{
  while (last != first) {
    last = last + -1;
    destEnd = destEnd + -1;
    *destEnd = *last;
  }
  return destEnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x004087ec  std::copy_ptr   (89 bytes, 2 ranges)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004063cc (89 bytes; the code occurs several times, e.g. one template instance per type). copy over a range of pointers
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_ptr(undefined4 *first,undefined4 *last,undefined4 *dest)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eb780);
  for (; last != first; first = first + 1) {
    *dest = *first;
    dest = dest + 1;
  }
  *sehChainHead = sehPrevFrame;
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040886c  std::_Destroy_range_ptr_40886c   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x0040644c (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of pointers (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_ptr_40886c(int first,int last)

{
  for (; last != first; first = first + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408884  TSDictionaryList::ReleaseDictionaries   (201 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00406464. drops one reference on every listed Dictionary in the shared cache and deletes those reaching zero
void __cdecl TSDictionaryList::ReleaseDictionaries(int self)

{
  int *refs;
  undefined4 *dict;
  int *cacheSlot;
  int *entry;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eb7b4);
  if (self != 0) {
    for (entry = *(int **)(self + m_dictsBegin); entry < *(int **)(self + m_dictsEnd); entry = entry + 1)
    {
      cacheSlot = (int *)std::find_ptr((*(int * *)&DAT_004eb4a4),DAT_004eb4a8,entry);
      dict = (undefined4 *)*cacheSlot;
      refs = dict + 0x804;
      *refs = *refs + -1;
      if (*refs == 0) {
        if (dict != (undefined4 *)0x0) {
          (**(code **)*dict)();
        }
        if (cacheSlot + 1 != DAT_004eb4a8) {
          std::copy_ptr_4089a4(cacheSlot + 1,DAT_004eb4a8,cacheSlot);
        }
        DAT_004eb4a8 = DAT_004eb4a8 + -1;
      }
    }
    if (self != 0) {
      TSDictionaryList::_dtor(self,3);
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408984  std::find_ptr   (31 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00406564 (31 bytes; the code occurs several times, e.g. one template instance per type). find over a range of pointers
//   file placement: inferred (address adjacency)
int * __cdecl std::find_ptr(int *first,int *last,int *value)

{
  for (; (last != first && (*value != *first)); first = first + 1) {
  }
  return first;
}

// ----------------------------------------------------------------------------------------------------
// 0x004089a4  std::copy_ptr_4089a4   (36 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00406584 (36 bytes; the code occurs several times, e.g. one template instance per type). copy over a range of pointers (vector erase)
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_ptr_4089a4(undefined4 *first,undefined4 *last,undefined4 *dest)

{
  for (; last != first; first = first + 1) {
    *dest = *first;
    dest = dest + 1;
  }
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x004089c8  std::vector_ptr::operator_assign   (332 bytes)   [analysis]
//   copy-assigns a vector of pointers
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __stdcall std::vector_ptr::operator_assign(void)

{
  int *piVar1;
  uint *s;
  undefined4 *first;
  int *last;
  int *piVar5;
  int iVar6;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  int str2;
  
  __InitExceptBlockLDTC(0x4eb81c);
  last = (*(int * *)&DAT_004eb4a4);
  do {
    piVar1 = DAT_004eb4a8;
    piVar5 = (*(int * *)&DAT_004eb4a4);
    if (DAT_004eb4a8 <= last) {
      first = std::copy_ptr_4089a4(DAT_004eb4a8,DAT_004eb4a8,(*(int * *)&DAT_004eb4a4));
      last = DAT_004eb4a8;
      iVar6 = (int)piVar1 - (int)piVar5;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 3;
      }
      DAT_004eb4a8 = DAT_004eb4a8 + -(iVar6 >> 2);
      std::_Destroy_range_ptr_40771c(&DAT_004eb4a0,(int)first,(int)last);
      *sehChainHead = sehPrevFrame;
      return;
    }
    piVar5 = (int *)*last;
    s = (uint *)(**(code **)(*piVar5 + 0x10))();
    std::string::string_from_cstr((int)str,s);
    if (piVar5 != (int *)0x0) {
      (**(code **)*piVar5)();
    }
    if (str2 != 0) {
      if (*(int *)(str2 + -0xc) != -1) {
        piVar5 = (int *)(str2 + -0xc);
        if (piVar5 == &g_nullStringRep) {
          iVar6 = 1;
        }
        else if (piVar5 == &g_nullStringRep) {
          iVar6 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar6 = *piVar5 + 1;
        }
        if (iVar6 != 0) goto LAB_00408aa7;
      }
      operator_delete();
      str2 = 0;
    }
LAB_00408aa7:
    last = last + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00408b14  TSDictionaryList::GetCount   (29 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x004065a8. number of dictionaries (vector size)
int __cdecl TSDictionaryList::GetCount(int self)

{
  int byteSize;
  
  byteSize = *(int *)(self + m_dictsEnd) - *(int *)(self + m_dictsBegin);
  if (byteSize < 0) {
    byteSize = byteSize + 3;
  }
  return byteSize >> 2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408b34  TSDictionaryList::GetFirstMissingPath   (56 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x004065c8. path of the first dictionary that is not loaded (IsLoaded false), or 0 when all loaded
undefined4 __cdecl TSDictionaryList::GetFirstMissingPath(int self)

{
  undefined1 loaded;
  undefined3 regHigh;
  undefined4 path;
  int count;
  int i;
  
  i = 0;
  while( true ) {
    count = TSDictionaryList::GetCount(self);
    if (count <= i) {
      return 0;
    }
    loaded = TSDictionaryList::IsLoaded(self,i);
    if (CONCAT31(regHigh,loaded) == 0) break;
    i = i + 1;
  }
  path = TSDictionaryList::GetPath(self,i);
  return path;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408b6c  TSDictionaryList::IsLoaded   (252 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00406600. Dictionary::GetSummaryText (slot 7) of dictionary `index` into a temporary; returns its loaded flag
/* WARNING: Removing unreachable block (ram,0x00408baa) */
/* WARNING: Removing unreachable block (ram,0x00408c01) */
/* WARNING: Removing unreachable block (ram,0x00408c10) */
/* WARNING: Removing unreachable block (ram,0x00408c09) */
undefined1 __cdecl TSDictionaryList::IsLoaded(int self,int index)

{
  undefined1 loaded;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eb880);
  loaded = (**(code **)(**(int **)(index * 4 + *(int *)(self + m_dictsBegin)) + 0x1c))();
  if (g_nullStringRep == -1) {
    operator_delete();
  }
  *sehChainHead = sehPrevFrame;
  return loaded;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408c68  TSDictionaryList::EnsureCurrent   (34 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x004066fc. Dictionary::EnsureCurrent (slot 3) of dictionary `index`: reloads it if the file changed; returns its loaded flag
undefined4 __cdecl TSDictionaryList::EnsureCurrent(int self,int index)

{
  undefined4 loaded;
  
  loaded = (**(code **)(**(int **)(index * 4 + *(int *)(self + m_dictsBegin)) + 0xc))();
  return loaded;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408c8c  TSDictionaryList::GetPathList   (10 bytes)   [analysis]
//   the ';'-separated path list the list was opened from
undefined4 __cdecl TSDictionaryList::GetPathList(undefined4 *self)

{
  return *self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408c98  TSDictionaryList::GetPath   (34 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00406720. slot 4 of dictionary `index`: the path's character data
undefined4 __cdecl TSDictionaryList::GetPath(int self,int index)

{
  undefined4 path;
  
  path = (**(code **)(**(int **)(index * 4 + *(int *)(self + m_dictsBegin)) + 0x10))();
  return path;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408cbc  TSDictionaryList::GetFileTitle   (79 bytes)   [analysis]
//   file title of dictionary `index` (Dictionary vtable slot 5)
undefined4 __cdecl TSDictionaryList::GetFileTitle(undefined4 result,int self,int index)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eb8c8);
  (**(code **)(**(int **)(index * 4 + *(int *)(self + m_dictsBegin)) + 0x14))();
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408d0c  TSDictionaryList::GetFileDateText   (79 bytes)   [analysis]
//   file date text of dictionary `index` (slot 8)
undefined4 __cdecl TSDictionaryList::GetFileDateText(undefined4 result,int self,int index)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eb8ec);
  (**(code **)(**(int **)(index * 4 + *(int *)(self + m_dictsBegin)) + 0x20))();
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408d5c  TSDictionaryList::GetDescription   (79 bytes)   [analysis]
//   header description of dictionary `index` (slot 9)
undefined4 __cdecl TSDictionaryList::GetDescription(undefined4 result,int self,int index)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eb910);
  (**(code **)(**(int **)(index * 4 + *(int *)(self + m_dictsBegin)) + 0x24))();
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408dac  TSDictionaryList::GetSummaryText   (44 bytes)   [analysis]
//   summary text (title, headwords, definitions, description) of dictionary `index` (slot 7)
void __cdecl TSDictionaryList::GetSummaryText(int self,int index)

{
  (**(code **)(**(int **)(index * 4 + *(int *)(self + m_dictsBegin)) + 0x1c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408dd8  ReturnZero   (7 bytes)   [analysis]
//   returns 0 (used as "no maximum" by PVWPathListBox::IsFull)
//   file placement: inferred (address adjacency)
undefined4 __stdcall ReturnZero(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408de0  TSDictionaryList::GetNumLengths   (26 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00406744. dictionary header num_lengths (u16 at Dictionary+0x240c)
undefined2 __cdecl TSDictionaryList::GetNumLengths(int self,int index)

{
  return *(undefined2 *)(*(int *)(index * 4 + *(int *)(self + m_dictsBegin)) + 0x240c);
}

// ----------------------------------------------------------------------------------------------------
// 0x00408dfc  TSDictionaryList::HasDefinitions   (37 bytes)   [analysis]
//   whether dictionary `index` has a definition section (TSD1)
bool __cdecl TSDictionaryList::HasDefinitions(int self,int index)

{
  int dict;
  
  dict = *(int *)(index * 4 + *(int *)(self + m_dictsBegin));
  return *(int *)(dict + 0x2404) < *(int *)(dict + 0x2408);
}

// ----------------------------------------------------------------------------------------------------
// 0x00408e24  TSDictionaryList::GetCounts   (46 bytes)   [analysis]
//   word and definition totals of dictionary `index` (slot 10)
void __cdecl TSDictionaryList::GetCounts(int self,int index)

{
  (**(code **)(**(int **)(index * 4 + *(int *)(self + m_dictsBegin)) + 0x28))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408e54  TSDictionaryList::GetWordCount   (44 bytes)   [analysis]
//   number of words of a length in dictionary `index`
undefined4 __cdecl TSDictionaryList::GetWordCount(int self,int index,int length)

{
  int dict;
  
  dict = *(int *)(index * 4 + *(int *)(self + m_dictsBegin));
  if ((int)(uint)*(ushort *)(dict + 0x240c) <= length) {
    return 0;
  }
  return *(undefined4 *)(dict + 0x25a4 + length * 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x00408e80  TSDictionaryList::GetWordStreamOffset   (29 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00406760. word_stream_offsets[length] (u32 table at Dictionary+0x2410)
undefined4 __cdecl TSDictionaryList::GetWordStreamOffset(int self,int index,int length)

{
  return *(undefined4 *)(*(int *)(index * 4 + *(int *)(self + m_dictsBegin)) + 0x2410 + length * 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x00408ea0  TSDictionaryList::GetLetterChar   (29 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00406780. canonical[letterClass] of dictionary `index`: the byte that displays a letter class
undefined4 __cdecl TSDictionaryList::GetLetterChar(int self,int index,int letterClass)

{
  int dict;
  
  dict = *(int *)(index * 4 + *(int *)(self + m_dictsBegin));
  return CONCAT31((int3)((uint)dict >> 8),*(undefined1 *)(dict + 0x2bf8 + letterClass));
}

// ----------------------------------------------------------------------------------------------------
// 0x00408ec0  TSDictionaryList::GetNumUsedLetters   (26 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x004067a0. number of letter classes used by dictionary `index`
int __cdecl TSDictionaryList::GetNumUsedLetters(int self,int index)

{
  return (int)*(short *)(*(int *)(index * 4 + *(int *)(self + m_dictsBegin)) + 0x2bf4);
}

// ----------------------------------------------------------------------------------------------------
// 0x00408edc  TSDictionaryList::GetSymbolBytes   (24 bytes)   [analysis]
//   the byte value of each Huffman symbol of dictionary `index`
int __cdecl TSDictionaryList::GetSymbolBytes(int self,int index)

{
  return *(int *)(index * 4 + *(int *)(self + m_dictsBegin)) + 0x2cf8;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408ef4  TSDictionaryList::CollectDefinitionOffsets   (1012 bytes)   [notes]
//   gathers direct-definition and full-text occurrence offsets for a matched word. Entry checked; body not read
//   file placement: inferred (address adjacency)
uint __cdecl TSDictionaryList::CollectDefinitionOffsets(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int vec)

{
  uint *pos;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int i;
  uint *puVar6;
  uint local_460 [128];
  uint local_260 [128];
  int *local_60;
  uint *unused;
  uint *unused2;
  uint value;
  uint local_50;
  int lDistanceToMove;
  uint *local_48;
  uint *unused3;
  uint *unused4;
  uint *unused5;
  uint local_38;
  undefined4 unused6;
  undefined4 *local_30;
  undefined4 *unused7;
  char *value2;
  int local_24;
  uint local_20;
  int *local_1c;
  uint value3;
  int *local_14;
  LPCSTR fileName;
  int *local_c;
  uint local_8;
  
  local_8 = 1;
  local_c = *(int **)(*(int *)(param_1 + 0xc) + param_2 * 4);
  fileName = (LPCSTR)(**(code **)(*local_c + 0x18))();
  iVar2 = (**(code **)(*local_c + 0xc))();
  if ((iVar2 != 0) && (local_14 = fopen(fileName,&DAT_004eb416), local_14 != (int *)0x0)) {
    value3 = 0;
    if (param_6 == 2) {
      local_1c = (int *)local_c[param_4 + 0xb80];
      if (local_1c == (int *)0x0) {
        local_20 = local_c[param_4 + 0xa98];
        pcVar3 = (char *)operator_new_array();
        iVar2 = fseek(local_14,local_c[param_4 + 0xa33],0);
        if ((iVar2 == 0) && (uVar4 = FUN_004ded48(pcVar3,4,local_20,local_14), uVar4 == local_20)) {
          local_24 = 0;
          iVar2 = 0;
          if (0 < (int)local_20) {
            do {
              if ((pcVar3[iVar2 * 4 + 3] & 0x80U) == 0) {
                if (param_5 == local_24) {
                  value2 = pcVar3 + iVar2 * 4;
                  if (*(int *)(vec + 8) == *(int *)(vec + 0x18)) {
                    std::vector_ptr::insert_aux_4092e8(vec,*(undefined4 **)(vec + 8),(undefined4 *)value2);
                  }
                  else {
                    local_30 = *(undefined4 **)(vec + 8);
                    *local_30 = *(undefined4 *)value2;
                    *(int *)(vec + 8) = *(int *)(vec + 8) + 4;
                    unused7 = local_30;
                  }
                }
              }
              else {
                if (param_5 == local_24) {
                  value3 = *(uint *)(pcVar3 + iVar2 * 4) & 0x7fffffff;
                }
                local_24 = local_24 + 1;
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < (int)local_20);
          }
          local_1c = (int *)operator_new_array();
          iVar2 = local_c[param_4 + 0xa33];
          *local_1c = iVar2;
          unused6 = 1;
          local_60 = local_1c + 1;
          for (i = 0; iVar2 = iVar2 + 4, i < (int)(local_20 - 1); i = i + 1) {
            if ((pcVar3[i * 4 + 3] & 0x80U) != 0) {
              *local_60 = iVar2;
              local_60 = local_60 + 1;
            }
          }
          local_c[param_4 + 0xb80] = (int)local_1c;
        }
        operator_delete_array();
      }
      else {
        iVar2 = fseek(local_14,local_1c[param_5],0);
        if (iVar2 == 0) {
          do {
            local_38 = FUN_004ded48((char *)local_260,4,0x80,local_14);
            if (local_38 == 0) goto LAB_00409162;
            puVar6 = local_260;
            for (uVar4 = 0; uVar4 < local_38; uVar4 = uVar4 + 1) {
              value3 = *puVar6;
              if ((value3 & 0x80000000) != 0) break;
              pos = *(uint **)(vec + 8);
              if (pos == *(uint **)(vec + 0x18)) {
                std::vector_ptr::insert_aux_4092e8(vec,pos,&value3);
              }
              else {
                unused5 = pos;
                unused4 = pos;
                *pos = value3;
                *(int *)(vec + 8) = *(int *)(vec + 8) + 4;
              }
              puVar6 = puVar6 + 1;
            }
          } while ((value3 & 0x80000000) == 0);
          value3 = value3 & 0x7fffffff;
        }
      }
LAB_00409162:
      if ((local_c[0x900] <= (int)value3) && ((int)value3 < local_c[0x902])) {
        if (*(int *)(vec + 8) == *(int *)(vec + 0x18)) {
          std::vector_ptr::insert_aux_4092e8(vec,*(undefined4 **)(vec + 8),&value3);
        }
        else {
          local_48 = *(uint **)(vec + 8);
          *local_48 = value3;
          *(int *)(vec + 8) = *(int *)(vec + 8) + 4;
          unused3 = local_48;
        }
        value3 = 0;
      }
    }
    else {
      lDistanceToMove = local_c[param_4 + 0x9ce] + param_5 * 4;
      iVar2 = fseek(local_14,lDistanceToMove,0);
      if ((iVar2 != 0) || (uVar4 = FUN_004ded48((char *)&value3,4,1,local_14), uVar4 != 1)) {
        value3 = 0;
      }
    }
    local_8 = (uint)(value3 != 0x7fffffff);
    if (((param_3 != 0) && (local_8 != 0)) && (value3 != 0)) {
      uVar4 = fseek(local_14,value3,0);
      while (uVar4 == 0) {
        local_50 = FUN_004ded48((char *)local_460,4,0x80,local_14);
        if (local_50 == 0) break;
        uVar4 = 0;
        puVar6 = local_460;
        while ((uVar4 < local_50 && ((value3 & 0x80000000) == 0))) {
          value3 = *puVar6;
          value = *puVar6 & 0x7fffffff;
          pos = *(uint **)(vec + 8);
          if (pos == *(uint **)(vec + 0x18)) {
            std::vector_ptr::insert_aux_4092e8(vec,pos,&value);
          }
          else {
            unused2 = pos;
            unused = pos;
            *pos = value;
            *(int *)(vec + 8) = *(int *)(vec + 8) + 4;
          }
          uVar4 = uVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        uVar4 = value3 & 0x80000000;
      }
    }
    FUN_004de7cc(local_14);
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x004092e8  std::vector_ptr::insert_aux_4092e8   (437 bytes, 2 ranges)   [analysis]
//   std::vector<T *> insert at a position, growing the storage when full
//   file placement: inferred (address adjacency)
void __cdecl std::vector_ptr::insert_aux_4092e8(int vec,undefined4 *pos,undefined4 *value)

{
  int newCapacity;
  undefined4 *storage;
  int index;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x4eb954);
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
    std::copy_ptr_4094e4(*(undefined4 **)(vec + 4),pos,storage);
    index = (int)pos - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    storage[index >> 2] = *value;
    index = (int)pos - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    std::copy_ptr_4094e4(pos,*(undefined4 **)(vec + 8),storage + (index >> 2) + 1);
    index = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    std::_Destroy_range_ptr_40957c(vec,*(int *)(vec + 4),*(int *)(vec + 8));
    operator_delete();
    *(undefined4 **)(vec + 0x18) = storage + newCapacity;
    *(undefined4 **)(vec + 8) = storage + (index >> 2) + 1;
    *(undefined4 **)(vec + 4) = storage;
  }
  else {
    *storage = storage[-1];
    std::copy_backward_ptr_4094c0(pos,*(undefined4 **)(vec + 8) + -1,*(undefined4 **)(vec + 8));
    *pos = *value;
    *(int *)(vec + 8) = *(int *)(vec + 8) + 4;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004094c0  std::copy_backward_ptr_4094c0   (36 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004063a8 (36 bytes; the code occurs several times, e.g. one template instance per type). copy_backward over a range of pointers
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_backward_ptr_4094c0(undefined4 *first,undefined4 *last,undefined4 *destEnd)

{
  while (last != first) {
    last = last + -1;
    destEnd = destEnd + -1;
    *destEnd = *last;
  }
  return destEnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x004094e4  std::copy_ptr_4094e4   (89 bytes, 2 ranges)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004063cc (89 bytes; the code occurs several times, e.g. one template instance per type). copy over a range of pointers
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_ptr_4094e4(undefined4 *first,undefined4 *last,undefined4 *dest)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eb994);
  for (; last != first; first = first + 1) {
    *dest = *first;
    dest = dest + 1;
  }
  *sehChainHead = sehPrevFrame;
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409564  std::_Destroy_range_ptr_409564   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x0040644c (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of pointers (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_ptr_409564(int first,int last)

{
  for (; last != first; first = first + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040957c  std::_Destroy_range_ptr_40957c   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004050b4 (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of pointers (nothing to do; the loop is left in)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_ptr_40957c(undefined4 vec,int first,int last)

{
  for (; last != first; first = first + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409594  TSDictionaryList::FindDefinitions   (1608 bytes)   [analysis]
//   looks a word up in every open dictionary: compiles it as a pattern, scans its length and collects the definition offsets of every match (and of linked words)
/* WARNING: Removing unreachable block (ram,0x00409623) */
/* WARNING: Removing unreachable block (ram,0x004097dc) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffa610 : 0x004097ea */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TSDictionaryList::FindDefinitions(int self,int word_,int results)

{
  bool bVar1;
  undefined4 letterChar;
  undefined3 regHigh;
  uint uVar3;
  char *pcVar4;
  int letterClass;
  int iVar6;
  byte *i;
  uint uVar8;
  int *strRep;
  uint *strRep2;
  undefined4 *sehChainHead;
  uint local_59f8;
  int local_59d8;
  undefined4 sehPrevFrame;
  undefined4 vec;
  int first;
  int last;
  undefined4 unused2;
  int tsDictionaryDefinitionRetriever [8];
  undefined4 inputEngine [258];
  uint s [3770];
  undefined4 uStackY_1a80;
  int local_1170;
  int unused [1028];
  int str2;
  undefined1 str [8];
  uint *patternText;
  int local_8;
  
  letterClass = 5;
  do {
    local_8 = letterClass;
    letterClass = local_8 + -1;
  } while (local_8 + -1 != 0);
  __InitExceptBlockLDTC(0x4eba44);
  local_59d8 = 0;
  do {
    letterClass = TSDictionaryList::GetCount(self);
    if (letterClass <= local_59d8) {
      *sehChainHead = sehPrevFrame;
      return;
    }
    letterClass = TSDictionaryList::EnsureCurrent(self,local_59d8);
    if (letterClass != 0) {
      patternText = (uint *)&g_emptyStringData;
      for (i = *(byte **)(word_ + 8);
          i < (byte *)(*(int *)(word_ + 8) + *(int *)(*(int *)(word_ + 8) + -4));
          i = i + 1) {
        letterClass = *(int *)(**(int **)(self + m_dictsBegin) + 8 + (uint)*i * 8);
        if (letterClass != 0xff) {
          letterChar = TSDictionaryList::GetLetterChar(self,0,letterClass);
          std::string::replace_fill((int)str,patternText[-1],0,1,(char)letterChar);
        }
      }
      MatchEngine::MatchEngine(unused);
      MatchEngine::Compile(unused,self,local_59d8,patternText,0);
      letterClass = MatchEngine::IsValid((int)unused);
      if (letterClass != 0) {
        InputEngine::InputEngine(inputEngine,self,local_59d8);
        bVar1 = InputEngine::StartLength((int)inputEngine,patternText[-1]);
        if (CONCAT31(regHigh,bVar1) != 0) {
          letterClass = *(int *)(results + 8) - *(int *)(results + 4);
          if (letterClass < 0) {
            letterClass = letterClass + 0x7f;
          }
          uVar3 = letterClass >> 7;
          MatchEngine::SetWordLength((int)unused,patternText[-1]);
          while (pcVar4 = (char *)InputEngine::NextWord((int)inputEngine,(int)unused), *pcVar4 != -1) {
            letterClass = InputEngine::GetLinkGroupIndex((int)inputEngine);
            if (letterClass != -1) {
              first = 0;
              last = 0;
              unused2 = 0;
              vec = 0x100;
              uStackY_1a80 = 0x40982c;
              TSDictionaryList::CollectDefinitionOffsets(self,local_59d8,0,patternText[-1],letterClass,local_1170,(int)&vec);
              local_59f8 = 0;
              while( true ) {
                letterClass = last - first;
                if (letterClass < 0) {
                  letterClass = letterClass + 3;
                }
                if ((uint)(letterClass >> 2) <= local_59f8) break;
                letterClass = *(int *)(local_59f8 * 4 + first);
                uVar8 = uVar3;
                while( true ) {
                  iVar6 = *(int *)(results + 8) - *(int *)(results + 4);
                  if (iVar6 < 0) {
                    iVar6 = iVar6 + 0x7f;
                  }
                  if (((uint)(iVar6 >> 7) <= uVar8) ||
                     (*(int *)(uVar8 * 0x80 + *(int *)(results + 4) + 0x78) == letterClass)) break;
                  uVar8 = uVar8 + 1;
                }
                iVar6 = *(int *)(results + 8) - *(int *)(results + 4);
                if (iVar6 < 0) {
                  iVar6 = iVar6 + 0x7f;
                }
                if ((uint)(iVar6 >> 7) <= uVar8) {
                  DefinitionSearch::AddRecord(results,uVar8 + 1);
                  *(int *)(uVar8 * 0x80 + *(int *)(results + 4) + 0x10) = local_59d8;
                  *(int *)(uVar8 * 0x80 + *(int *)(results + 4) + 0x78) = letterClass;
                  std::string::assign_cstr(uVar8 * 0x80 + *(int *)(results + 4) + 0x58,s);
                }
                local_59f8 = local_59f8 + 1;
              }
              std::_Destroy_range_ptr_40957c(&vec,first,last);
              operator_delete();
            }
          }
          TSDictionaryDefinitionRetriever::TSDictionaryDefinitionRetriever(tsDictionaryDefinitionRetriever,self,local_59d8,(undefined4 *)0x0);
          while( true ) {
            letterClass = *(int *)(results + 4);
            iVar6 = *(int *)(results + 8) - letterClass;
            if (iVar6 < 0) {
              iVar6 = iVar6 + 0x7f;
            }
            if ((uint)(iVar6 >> 7) <= uVar3) break;
            TSDictionaryDefinitionRetriever::ReadDefinition((int)tsDictionaryDefinitionRetriever,*(LONG *)(uVar3 * 0x80 + letterClass + 0x78),uVar3 * 0x80 + letterClass
                        );
            uVar3 = uVar3 + 1;
          }
          TSDictionaryDefinitionRetriever::_dtor((int)tsDictionaryDefinitionRetriever,2);
        }
        InputEngine::_dtor((int)inputEngine,2);
      }
      if (str2 != 0) {
        if (*(int *)(str2 + -0xc) != -1) {
          strRep = (int *)(str2 + -0xc);
          if (strRep == &g_nullStringRep) {
            letterClass = 1;
          }
          else if (strRep == &g_nullStringRep) {
            letterClass = 1;
          }
          else {
            *strRep = *strRep + -1;
            letterClass = *strRep + 1;
          }
          if (letterClass != 0) goto LAB_00409aed;
        }
        operator_delete();
        str2 = 0;
      }
LAB_00409aed:
      Pattern::_dtor((int)unused,2);
      if (patternText != (uint *)0x0) {
        if (patternText[-3] != 0xffffffff) {
          strRep2 = patternText + -3;
          if (strRep2 == &g_nullStringRep) {
            letterClass = 1;
          }
          else if (strRep2 == &g_nullStringRep) {
            letterClass = 1;
          }
          else {
            *strRep2 = *strRep2 - 1;
            letterClass = *strRep2 + 1;
          }
          if (letterClass != 0) goto LAB_00409bb0;
        }
        operator_delete();
        patternText = (uint *)0x0;
      }
    }
LAB_00409bb0:
    local_59d8 = local_59d8 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00409d44  DefinitionSearch::AddRecord   (663 bytes)   [analysis]
//   reads one definition record and adds it to the results unless already present
//   file placement: inferred (address adjacency)
void __cdecl DefinitionSearch::AddRecord(int self,uint offset)

{
  int first;
  int last;
  int iVar3;
  int *strRep;
  int word_;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 definitionRecord [8];
  int str;
  undefined1 vec [4];
  int first2;
  int last2;
  undefined1 vec2 [4];
  int first3;
  int last3;
  int str2;
  int str3;
  
  __InitExceptBlockLDTC(0x4ebb04);
  iVar3 = *(int *)(self + 8) - *(int *)(self + 4);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0x7f;
  }
  if (offset <= (uint)(iVar3 >> 7)) {
    iVar3 = *(int *)(self + 8);
    last = iVar3 - *(int *)(self + 4);
    if (last < 0) {
      last = last + 0x7f;
    }
    if (offset < (uint)(last >> 7)) {
      word_ = offset * 0x80 + *(int *)(self + 4);
      first = DefinitionViewWindows::CompareDefinitions_40b5a8(iVar3,iVar3,word_);
      last = *(int *)(self + 8);
      iVar3 = iVar3 - word_;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0x7f;
      }
      *(int *)(self + 8) = *(int *)(self + 8) + (iVar3 >> 7) * -0x80;
      std::_Destroy_range_DefinitionRecord(self,first,last);
    }
    goto LAB_00409fc8;
  }
  iVar3 = DefinitionRecord::DefinitionRecord((int)definitionRecord);
  last = *(int *)(self + 8) - *(int *)(self + 4);
  if (last < 0) {
    last = last + 0x7f;
  }
  DefinitionSearch::Merge(self,*(int *)(self + 8),offset - (last >> 7),iVar3);
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
      if (iVar3 != 0) goto LAB_00409e34;
    }
    operator_delete();
    str3 = 0;
  }
LAB_00409e34:
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep = (int *)(str2 + -0xc);
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
      if (iVar3 != 0) goto LAB_00409eb0;
    }
    operator_delete();
    str2 = 0;
  }
LAB_00409eb0:
  std::_Destroy_range_string(vec2,first3,last3);
  operator_delete();
  std::_Destroy_range_string(vec,first2,last2);
  operator_delete();
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      strRep = (int *)(str + -0xc);
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
      if (iVar3 != 0) goto LAB_00409fc8;
    }
    operator_delete();
  }
LAB_00409fc8:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040a04c  DefinitionSearch::Merge   (646 bytes, 2 ranges)   [analysis]
//   merges a set of definition records into the results, keeping them ordered
//   file placement: inferred (address adjacency)
undefined4 __cdecl DefinitionSearch::Merge(int self,int records,uint count,int flags)

{
  int iVar1;
  int last;
  uint *puVar3;
  undefined4 *sehChainHead;
  uint local_3c;
  int local_38;
  undefined4 local_2c;
  undefined2 ehContext;
  int ehDtorCount;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x4ebb84);
  if (count == 0) {
    *sehChainHead = local_2c;
  }
  else {
    iVar1 = *(int *)(self + 8);
    last = *(int *)(self + 0x18) - iVar1;
    if (last < 0) {
      last = last + 0x7f;
    }
    if ((uint)(last >> 7) < count) {
      iVar1 = *(int *)(self + 8) - *(int *)(self + 4);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7f;
      }
      local_3c = iVar1 >> 7;
      if (count < local_3c) {
        puVar3 = &local_3c;
      }
      else {
        puVar3 = &count;
      }
      local_38 = local_3c + *puVar3;
      iVar1 = operator_new();
      if (iVar1 == 0) {
        ehContext = 8;
        badAlloc = &std::bad_alloc::vftable;
        ehDtorCount = ehDtorCount + 2;
        _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
      }
      ehContext = 0x14;
      std::__introsort_loop_string_40a2f4(*(int *)(self + 4),records,iVar1);
      last = records - *(int *)(self + 4);
      if (last < 0) {
        last = last + 0x7f;
      }
      std::uninitialized_copy_DefinitionRecord((last >> 7) * 0x80 + iVar1,count,flags);
      last = records - *(int *)(self + 4);
      if (last < 0) {
        last = last + 0x7f;
      }
      std::__introsort_loop_string_40a2f4(records,*(int *)(self + 8),((last >> 7) + count) * 0x80 + iVar1);
      ehContext = 0;
      last = *(int *)(self + 8) - *(int *)(self + 4);
      if (last < 0) {
        last = last + 0x7f;
      }
      std::_Destroy_range_DefinitionRecord(self,*(int *)(self + 4),*(int *)(self + 8));
      operator_delete();
      *(int *)(self + 0x18) = local_38 * 0x80 + iVar1;
      *(uint *)(self + 8) = (last >> 7) * 0x80 + iVar1 + count * 0x80;
      *(int *)(self + 4) = iVar1;
    }
    else {
      last = iVar1 - records;
      if (last < 0) {
        last = last + 0x7f;
      }
      if (count < (uint)(last >> 7)) {
        std::__introsort_loop_string_40a2f4(iVar1 + count * -0x80,iVar1,iVar1);
        *(int *)(self + 8) = *(int *)(self + 8) + count * 0x80;
        DefinitionRecord::operator_assign(records,iVar1 + count * -0x80,iVar1);
        DefinitionRecord::Swap(records,count * 0x80 + records,flags);
      }
      else {
        last = iVar1 - records;
        if (last < 0) {
          last = last + 0x7f;
        }
        last = count - (last >> 7);
        std::uninitialized_copy_DefinitionRecord(iVar1,last,flags);
        *(int *)(self + 8) = *(int *)(self + 8) + last * 0x80;
        std::__introsort_loop_string_40a2f4(records,iVar1,count * 0x80 + records);
        *(int *)(self + 8) = *(int *)(self + 8) + (count - last) * 0x80;
        DefinitionRecord::Swap(records,iVar1,flags);
      }
    }
    *sehChainHead = local_2c;
  }
  return local_2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040a2f4  std::__introsort_loop_string_40a2f4   (1615 bytes, 2 ranges)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0046e020 (1615 bytes; the code occurs several times, e.g. one template instance per type). quicksort part of std::sort over std::string objects (exact role inferred from structure)
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0040a451) */
/* WARNING: Removing unreachable block (ram,0x0040a55e) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff90 : 0x0040a459 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl std::__introsort_loop_string_40a2f4(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  undefined **badAlloc2;
  
  __InitExceptBlockLDTC(0x4ebc08);
  while (iVar3 = param_3, iVar2 = param_1, iVar2 != param_2) {
    param_1 = iVar2 + 0x80;
    param_3 = iVar3 + 0x80;
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 8) = 0;
      iVar4 = *(int *)(*(int *)(iVar2 + 8) + -0xc);
      if (iVar4 == -1 || iVar4 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(iVar2 + 8) + -4);
        rep = std::string::__getRep(iVar3,uVar1,uVar1);
        *(int **)(iVar3 + 8) = rep + 3;
        memcpy(*(undefined4 **)(iVar3 + 8),*(undefined4 **)(iVar2 + 8),uVar1);
      }
      else {
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 8);
        rep = (int *)(*(int *)(iVar3 + 8) + -0xc);
        if (rep != &g_nullStringRep) {
          *rep = *rep + 1;
        }
      }
      *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(undefined4 *)(iVar3 + 0x30) = 0;
      *(undefined4 *)(iVar3 + 0x18) = 0x40;
      iVar4 = operator_new();
      if (iVar4 == 0) {
        badAlloc2 = &std::bad_alloc::vftable;
        _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc2,0,&LAB_00404134,1,0,0,0);
      }
      *(int *)(iVar3 + 0x1c) = iVar4;
      iVar4 = std::uninitialized_copy_string(*(int *)(iVar2 + 0x1c),*(int *)(iVar2 + 0x20),*(int *)(iVar3 + 0x1c));
      *(int *)(iVar3 + 0x20) = iVar4;
      *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)(iVar3 + 0x3c) = 0;
      *(undefined4 *)(iVar3 + 0x40) = 0;
      *(undefined4 *)(iVar3 + 0x50) = 0;
      *(undefined4 *)(iVar3 + 0x38) = 0x40;
      iVar4 = operator_new();
      if (iVar4 == 0) {
        badAlloc = &std::bad_alloc::vftable;
        _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
      }
      *(int *)(iVar3 + 0x3c) = iVar4;
      iVar4 = std::uninitialized_copy_string(*(int *)(iVar2 + 0x3c),*(int *)(iVar2 + 0x40),*(int *)(iVar3 + 0x3c));
      *(int *)(iVar3 + 0x40) = iVar4;
      *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(iVar3 + 0x40);
      *(undefined4 *)(iVar3 + 0x60) = 0;
      iVar4 = *(int *)(*(int *)(iVar2 + 0x60) + -0xc);
      if (iVar4 == -1 || iVar4 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(iVar2 + 0x60) + -4);
        rep = std::string::__getRep(iVar3 + 0x58,uVar1,uVar1);
        *(int **)(iVar3 + 0x60) = rep + 3;
        memcpy(*(undefined4 **)(iVar3 + 0x60),*(undefined4 **)(iVar2 + 0x60),uVar1);
      }
      else {
        *(undefined4 *)(iVar3 + 0x60) = *(undefined4 *)(iVar2 + 0x60);
        rep = (int *)(*(int *)(iVar3 + 0x60) + -0xc);
        if (rep != &g_nullStringRep) {
          *rep = *rep + 1;
        }
      }
      *(undefined4 *)(iVar3 + 0x70) = 0;
      iVar4 = *(int *)(*(int *)(iVar2 + 0x70) + -0xc);
      if (iVar4 == -1 || iVar4 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(iVar2 + 0x70) + -4);
        rep = std::string::__getRep(iVar3 + 0x68,uVar1,uVar1);
        *(int **)(iVar3 + 0x70) = rep + 3;
        memcpy(*(undefined4 **)(iVar3 + 0x70),*(undefined4 **)(iVar2 + 0x70),uVar1);
      }
      else {
        *(undefined4 *)(iVar3 + 0x70) = *(undefined4 *)(iVar2 + 0x70);
        rep = (int *)(*(int *)(iVar3 + 0x70) + -0xc);
        if (rep != &g_nullStringRep) {
          *rep = *rep + 1;
        }
      }
      *(undefined4 *)(iVar3 + 0x78) = *(undefined4 *)(iVar2 + 0x78);
    }
  }
  *sehChainHead = sehPrevFrame;
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040a988  std::uninitialized_copy_string   (293 bytes, 2 ranges)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00404d5c (293 bytes; the code occurs several times, e.g. one template instance per type). copy-constructs std::string objects from [first, last) into raw storage
//   file placement: inferred (address adjacency)
int __cdecl std::uninitialized_copy_string(int first,int last,int dest)

{
  int refs;
  uint len;
  int src;
  int dst;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ebca0);
  while (dst = dest, src = first, src != last) {
    dest = dst + 0x10;
    first = src + 0x10;
    if (dst != 0) {
      *(undefined4 *)(dst + 8) = 0;
      refs = *(int *)(*(int *)(src + 8) + -0xc);
      if (refs == -1 || refs + 1 < 0) {
        len = *(uint *)(*(int *)(src + 8) + -4);
        rep = std::string::__getRep(dst,len,len);
        *(int **)(dst + 8) = rep + 3;
        memcpy(*(undefined4 **)(dst + 8),*(undefined4 **)(src + 8),len);
      }
      else {
        *(undefined4 *)(dst + 8) = *(undefined4 *)(src + 8);
        rep = (int *)(*(int *)(dst + 8) + -0xc);
        if (rep != &g_nullStringRep) {
          *rep = *rep + 1;
        }
      }
    }
  }
  *sehChainHead = sehPrevFrame;
  return dst;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040aad4  std::_Destroy_range_16   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00404ea8 (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of 16-byte objects with trivial destructors (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_16(int first,int last)

{
  for (; last != first; first = first + 0x10) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040aaec  std::_Destroy_range_128   (24 bytes)   [analysis]
//   destroys a range of 128-byte records with trivial destructors (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_128(int first,int last)

{
  for (; last != first; first = first + 0x80) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ab04  DefinitionRecord::operator_assign   (131 bytes)   [analysis]
//   copies a definition record (strings and offsets)
//   file placement: inferred (address adjacency)
int __cdecl DefinitionRecord::operator_assign(int self,int other,int unused)

{
  while (other != self) {
    std::string::operator_assign(unused + -0x80,other + -0x80);
    std::vector_string::operator_assign(unused + -0x68,other + -0x68);
    std::vector_string::operator_assign(unused + -0x48,other + -0x48);
    std::string::operator_assign(unused + -0x28,other + -0x28);
    std::string::operator_assign(unused + -0x18,other + -0x18);
    *(undefined4 *)(unused + -0x70) = *(undefined4 *)(other + -0x70);
    *(undefined4 *)(unused + -8) = *(undefined4 *)(other + -8);
    other = other + -0x80;
    unused = unused + -0x80;
  }
  return unused;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ab88  std::vector_string::operator_assign   (558 bytes, 2 ranges)   [analysis]
//   copy-assigns a vector of strings
//   file placement: inferred (address adjacency)
int __cdecl std::vector_string::operator_assign(int self,int other)

{
  int iVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x4ebd08);
  if (other == self) {
    *sehChainHead = sehPrevFrame;
  }
  else {
    iVar2 = *(int *)(other + 8) - *(int *)(other + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    iVar1 = *(int *)(self + 0x18) - *(int *)(self + 4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xf;
    }
    if ((uint)(iVar1 >> 4) < (uint)(iVar2 >> 4)) {
      iVar2 = operator_new();
      if (iVar2 == 0) {
        badAlloc = &std::bad_alloc::vftable;
        _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
      }
      iVar1 = std::uninitialized_copy_string(*(int *)(other + 4),*(int *)(other + 8),iVar2);
      *(int *)(self + 0x18) = iVar1;
      std::_Destroy_range_string(self,*(int *)(self + 4),*(int *)(self + 8));
      operator_delete();
      *(int *)(self + 4) = iVar2;
    }
    else {
      iVar2 = *(int *)(self + 8) - *(int *)(self + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      iVar1 = *(int *)(other + 8) - *(int *)(other + 4);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xf;
      }
      if ((uint)(iVar2 >> 4) < (uint)(iVar1 >> 4)) {
        iVar2 = *(int *)(self + 8) - *(int *)(self + 4);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0xf;
        }
        std::copy_string_40add8(*(int *)(other + 4),(iVar2 >> 4) * 0x10 + *(int *)(other + 4),
                     *(int *)(self + 4));
        iVar2 = *(int *)(self + 8) - *(int *)(self + 4);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0xf;
        }
        iVar1 = *(int *)(self + 8) - *(int *)(self + 4);
        if (iVar1 < 0) {
          iVar1 = iVar1 + 0xf;
        }
        std::uninitialized_copy_string((iVar1 >> 4) * 0x10 + *(int *)(other + 4),*(int *)(other + 8),
                     (iVar2 >> 4) * 0x10 + *(int *)(self + 4));
      }
      else {
        iVar2 = std::copy_string_40add8(*(int *)(other + 4),*(int *)(other + 8),*(int *)(self + 4));
        std::_Destroy_range_string(self,iVar2,*(int *)(self + 8));
      }
    }
    iVar2 = *(int *)(other + 8) - *(int *)(other + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    *(int *)(self + 8) = (iVar2 >> 4) * 0x10 + *(int *)(self + 4);
    *sehChainHead = sehPrevFrame;
  }
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040add8  std::copy_string_40add8   (50 bytes)   [analysis]
//   assigns strings over a range
//   file placement: inferred (address adjacency)
int __cdecl std::copy_string_40add8(int first,int last,int dest)

{
  for (; last != first; first = first + 0x10) {
    std::string::operator_assign(dest,first);
    dest = dest + 0x10;
  }
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ae0c  DefinitionRecord::Swap   (121 bytes)   [analysis]
//   exchanges two definition records
//   file placement: inferred (address adjacency)
void __cdecl DefinitionRecord::Swap(int a,int b,int unused)

{
  for (; a != b; a = a + 0x80) {
    std::string::operator_assign(a,unused);
    std::vector_string::operator_assign(a + 0x18,unused + 0x18);
    std::vector_string::operator_assign(a + 0x38,unused + 0x38);
    std::string::operator_assign(a + 0x58,unused + 0x58);
    std::string::operator_assign(a + 0x68,unused + 0x68);
    *(undefined4 *)(a + 0x10) = *(undefined4 *)(unused + 0x10);
    *(undefined4 *)(a + 0x78) = *(undefined4 *)(unused + 0x78);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ae88  std::uninitialized_copy_DefinitionRecord   (1601 bytes, 2 ranges)   [analysis]
//   copy-constructs 128-byte definition records into raw storage
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0040afd7) */
/* WARNING: Removing unreachable block (ram,0x0040b0e4) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff90 : 0x0040afdf */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl std::uninitialized_copy_DefinitionRecord(int first,int last,int dest)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  undefined **badAlloc2;
  
  __InitExceptBlockLDTC(0x4ebd8c);
  iVar2 = first;
  while (first = iVar2, iVar3 = last + -1, last != 0) {
    iVar2 = first + 0x80;
    last = iVar3;
    if (first != 0) {
      *(undefined4 *)(first + 8) = 0;
      iVar3 = *(int *)(*(int *)(dest + 8) + -0xc);
      if (iVar3 == -1 || iVar3 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(dest + 8) + -4);
        rep = std::string::__getRep(first,uVar1,uVar1);
        *(int **)(first + 8) = rep + 3;
        memcpy(*(undefined4 **)(first + 8),*(undefined4 **)(dest + 8),uVar1);
      }
      else {
        *(undefined4 *)(first + 8) = *(undefined4 *)(dest + 8);
        rep = (int *)(*(int *)(first + 8) + -0xc);
        if (rep != &g_nullStringRep) {
          *rep = *rep + 1;
        }
      }
      *(undefined4 *)(first + 0x10) = *(undefined4 *)(dest + 0x10);
      *(undefined4 *)(first + 0x1c) = 0;
      *(undefined4 *)(first + 0x20) = 0;
      *(undefined4 *)(first + 0x30) = 0;
      *(undefined4 *)(first + 0x18) = 0x40;
      iVar3 = operator_new();
      if (iVar3 == 0) {
        badAlloc2 = &std::bad_alloc::vftable;
        _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc2,0,&LAB_00404134,1,0,0,0);
      }
      *(int *)(first + 0x1c) = iVar3;
      iVar3 = std::uninitialized_copy_string(*(int *)(dest + 0x1c),*(int *)(dest + 0x20),
                           *(int *)(first + 0x1c));
      *(int *)(first + 0x20) = iVar3;
      *(undefined4 *)(first + 0x30) = *(undefined4 *)(first + 0x20);
      *(undefined4 *)(first + 0x3c) = 0;
      *(undefined4 *)(first + 0x40) = 0;
      *(undefined4 *)(first + 0x50) = 0;
      *(undefined4 *)(first + 0x38) = 0x40;
      iVar3 = operator_new();
      if (iVar3 == 0) {
        badAlloc = &std::bad_alloc::vftable;
        _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
      }
      *(int *)(first + 0x3c) = iVar3;
      iVar3 = std::uninitialized_copy_string(*(int *)(dest + 0x3c),*(int *)(dest + 0x40),
                           *(int *)(first + 0x3c));
      *(int *)(first + 0x40) = iVar3;
      *(undefined4 *)(first + 0x50) = *(undefined4 *)(first + 0x40);
      *(undefined4 *)(first + 0x60) = 0;
      iVar3 = *(int *)(*(int *)(dest + 0x60) + -0xc);
      if (iVar3 == -1 || iVar3 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(dest + 0x60) + -4);
        rep = std::string::__getRep(first + 0x58,uVar1,uVar1);
        *(int **)(first + 0x60) = rep + 3;
        memcpy(*(undefined4 **)(first + 0x60),*(undefined4 **)(dest + 0x60),uVar1);
      }
      else {
        *(undefined4 *)(first + 0x60) = *(undefined4 *)(dest + 0x60);
        rep = (int *)(*(int *)(first + 0x60) + -0xc);
        if (rep != &g_nullStringRep) {
          *rep = *rep + 1;
        }
      }
      *(undefined4 *)(first + 0x70) = 0;
      iVar3 = *(int *)(*(int *)(dest + 0x70) + -0xc);
      if (iVar3 == -1 || iVar3 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(dest + 0x70) + -4);
        rep = std::string::__getRep(first + 0x68,uVar1,uVar1);
        *(int **)(first + 0x70) = rep + 3;
        memcpy(*(undefined4 **)(first + 0x70),*(undefined4 **)(dest + 0x70),uVar1);
      }
      else {
        *(undefined4 *)(first + 0x70) = *(undefined4 *)(dest + 0x70);
        rep = (int *)(*(int *)(first + 0x70) + -0xc);
        if (rep != &g_nullStringRep) {
          *rep = *rep + 1;
        }
      }
      *(undefined4 *)(first + 0x78) = *(undefined4 *)(dest + 0x78);
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040b4f0  std::_Destroy_range_string   (182 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040483c. destroys the std::string objects in [first, last)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_string(undefined4 vec,int first,int last)

{
  int str;
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ebdf4);
joined_r0x0040b509:
  do {
    str = first;
    if (str == last) {
      *sehChainHead = sehPrevFrame;
      return;
    }
    first = str + 0x10;
  } while ((str == 0) || (*(int *)(str + 8) == 0));
  if (*(int *)(*(int *)(str + 8) + -0xc) != -1) goto code_r0x0040b52c;
  goto LAB_0040b559;
code_r0x0040b52c:
  strRep = (int *)(*(int *)(str + 8) + -0xc);
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
  if (prevRefs == 0) {
LAB_0040b559:
    operator_delete();
    *(undefined4 *)(str + 8) = 0;
  }
  goto joined_r0x0040b509;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040b5a8  DefinitionViewWindows::CompareDefinitions_40b5a8   (131 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0046e698 (131 bytes; the code occurs several times, e.g. one template instance per type). order of two definition records (by headword text, then by offset)
//   file placement: inferred (address adjacency)
int __cdecl DefinitionViewWindows::CompareDefinitions_40b5a8(int a,int b,int word_)

{
  for (; a != b; a = a + 0x80) {
    std::string::operator_assign(word_,a);
    std::vector_string::operator_assign(word_ + 0x18,a + 0x18);
    std::vector_string::operator_assign(word_ + 0x38,a + 0x38);
    std::string::operator_assign(word_ + 0x58,a + 0x58);
    std::string::operator_assign(word_ + 0x68,a + 0x68);
    *(undefined4 *)(word_ + 0x10) = *(undefined4 *)(a + 0x10);
    *(undefined4 *)(word_ + 0x78) = *(undefined4 *)(a + 0x78);
    word_ = word_ + 0x80;
  }
  return word_;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040b62c  std::_Destroy_range_DefinitionRecord   (639 bytes)   [analysis]
//   destroys the definition records in [first, last)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_DefinitionRecord(undefined4 vec,int first,int last)

{
  int first2;
  int *strRep;
  int prevRefs;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ebe18);
joined_r0x0040b648:
  do {
    do {
      first2 = first;
      if (first2 == last) {
        *sehChainHead = sehPrevFrame;
        return;
      }
      first = first2 + 0x80;
    } while (first2 == 0);
    if (*(int *)(first2 + 0x70) != 0) {
      if (*(int *)(*(int *)(first2 + 0x70) + -0xc) != -1) {
        strRep = (int *)(*(int *)(first2 + 0x70) + -0xc);
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
        if (prevRefs != 0) goto LAB_0040b6f3;
      }
      operator_delete();
      *(undefined4 *)(first2 + 0x70) = 0;
    }
LAB_0040b6f3:
    if (*(int *)(first2 + 0x60) != 0) {
      if (*(int *)(*(int *)(first2 + 0x60) + -0xc) != -1) {
        strRep = (int *)(*(int *)(first2 + 0x60) + -0xc);
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
        if (prevRefs != 0) goto LAB_0040b77d;
      }
      operator_delete();
      *(undefined4 *)(first2 + 0x60) = 0;
    }
LAB_0040b77d:
    std::_Destroy_range_string(first2 + 0x38,*(int *)(first2 + 0x3c),*(int *)(first2 + 0x40));
    operator_delete();
    std::_Destroy_range_string(first2 + 0x18,*(int *)(first2 + 0x1c),*(int *)(first2 + 0x20));
    operator_delete();
  } while (*(int *)(first2 + 8) == 0);
  if (*(int *)(*(int *)(first2 + 8) + -0xc) != -1) {
    strRep = (int *)(*(int *)(first2 + 8) + -0xc);
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
    if (prevRefs != 0) goto joined_r0x0040b648;
  }
  operator_delete();
  *(undefined4 *)(first2 + 8) = 0;
  goto joined_r0x0040b648;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040b8ac  TSDictionaryList::Dictionary::Dictionary   (315 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00406814. constructor: installs the vtable, copies the path string
//   also: TSDictionaryList::Dictionary::Dictionary [rtti:vtable-store]
undefined4 * __cdecl TSDictionaryList::Dictionary::Dictionary(undefined4 *self,int path)

{
  int refs;
  uint len;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ebe84);
  *self = &TSDictionaryList::Dictionary::vftable;
  self[m_loaded / 4] = 0;
  self[m_refCount / 4] = 1;
  *(undefined2 *)(self + m_numCalibrationRows / 4) = 0;
  self[m_calibration / 4] = 0;
  self[m_pathData / 4] = 0;
  refs = *(int *)(*(int *)(path + 8) + -0xc);
  if (refs == -1 || refs + 1 < 0) {
    len = *(uint *)(*(int *)(path + 8) + -4);
    rep = std::string::__getRep(self + m_path / 4,len,len);
    self[m_pathData / 4] = rep + 3;
    memcpy((undefined4 *)self[m_pathData / 4],*(undefined4 **)(path + 8),len);
  }
  else {
    self[m_pathData / 4] = *(undefined4 *)(path + 8);
    rep = (int *)(self[m_pathData / 4] + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  memset(self + m_lengthTables / 4,0,0x194);
  self[m_fileTime / 4] = 0;
  self[0x803] = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040b9e8  TSDictionaryList::Dictionary::~Dictionary   (218 bytes)   [rtti:dtor destructor]
//   written in code as TSDictionaryList::Dictionary::_dtor
void __cdecl TSDictionaryList::Dictionary::_dtor(int *self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ebec0);
  if (self == (int *)0x0) goto LAB_0040bab1;
  *self = (int)&TSDictionaryList::Dictionary::vftable;
  (**(code **)(*self + 4))();
  if (self[m_pathData / 4] != 0) {
    if (*(int *)(self[m_pathData / 4] + -0xc) != -1) {
      strRep = (int *)(self[m_pathData / 4] + -0xc);
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
      if (prevRefs != 0) goto LAB_0040baa1;
    }
    operator_delete();
    self[m_pathData / 4] = 0;
  }
LAB_0040baa1:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_0040bab1:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040bac4  TSDictionaryList::Dictionary::Load   (1774 bytes)   [notes+analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00406a2c. vtable slot 1. Reads the .tsd header (magic TSD0/TSD1), Huffman table and calibration matrix; builds the 8-bit lookahead decode tables
//   also: TSDictionaryList::Dictionary::vf1 [rtti:vtable]
int * __cdecl TSDictionaryList::Dictionary::Load(int *self,int reload)

{
  short numUsed;
  char *row;
  bool haveTime;
  ushort i;
  undefined4 unloaded;
  uint *entry;
  undefined3 regHigh;
  uint uVar7;
  uint count;
  int iVar9;
  int *piVar10;
  int *p;
  undefined4 *sehChainHead;
  byte bVar12;
  int wantWriteTime;
  LPFILETIME p_Var14;
  uint bits;
  uint prefix;
  uint bitsLeft;
  uint code_;
  short letterClass;
  byte codeLen;
  char symByte;
  int nextNode;
  byte magic [3];
  char formatDigit;
  undefined1 *unused;
  undefined4 unused2;
  int unused3;
  int unused4;
  int *file;
  int sym;
  int *sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 pathStr [8];
  int str;
  
  bVar12 = 0;
  __InitExceptBlockLDTC(0x4ebef0);
  self[m_loaded / 4] = 0;
  self[m_fileTime / 4] = 0;
  self[0x803] = 0;
  piVar10 = self;
  unloaded = (**(code **)(*self + 8))();
  if (reload == 0) {
    *sehChainHead = sehPrevFrame;
    return sehPrevFrame;
  }
  entry = (uint *)(**(code **)(*self + 0x18))(unloaded,*self,piVar10,self);
  file = fopen((LPCSTR)entry,&DAT_004eb416);
  if (file == (int *)0x0) goto LAB_0040bbe8;
  p_Var14 = (LPFILETIME)(self + m_fileTime / 4);
  wantWriteTime = 1;
  ehContext = 8;
  std::string::string_from_cstr((int)pathStr,entry);
  ehDtorCount = ehDtorCount + 1;
  haveTime = ReadFileTime((int)pathStr,wantWriteTime,p_Var14);
  uVar7 = (uint)(CONCAT31(regHigh,haveTime) == 0);
  ehDtorCount = ehDtorCount + -1;
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      piVar10 = (int *)(str + -0xc);
      if (piVar10 == &g_nullStringRep) {
        wantWriteTime = 1;
      }
      else if (piVar10 == &g_nullStringRep) {
        wantWriteTime = 1;
      }
      else {
        *piVar10 = *piVar10 + -1;
        wantWriteTime = *piVar10 + 1;
      }
      if (wantWriteTime != 0) goto LAB_0040bbe3;
    }
    unused4 = str + -0xc;
    unused3 = str + -0xc;
    operator_delete();
    unused2 = 0;
    unused = pathStr;
    str = 0;
  }
LAB_0040bbe3:
  if (uVar7 == 0) {
    uVar7 = FUN_004ded48((char *)magic,1,4,file);
    if ((uVar7 != 4) ||
       ((uVar7 = FUN_004dcac0(&DAT_004ecb00 /* "TSD0TSD1" */,magic,4), uVar7 != 0 &&
        (uVar7 = FUN_004dcac0(&DAT_004ecb04 /* "TSD1" */,magic,4), uVar7 != 0)))) {
      piVar10 = (int *)FUN_004de7cc(file);
      *sehChainHead = sehPrevFrame;
      return piVar10;
    }
    self[m_format / 4] = formatDigit + -0x30;
    uVar7 = FUN_004ded48((char *)(self + m_numLengths / 4),2,1,file);
    if (uVar7 != 1) {
      FUN_004de7cc(file);
      *sehChainHead = sehPrevFrame;
      return sehPrevFrame;
    }
    uVar7 = 1000;
    if (self[m_format / 4] == 0) {
      uVar7 = 0x50;
      piVar10 = self + m_occIndexOffset / 4;
      for (i = 0; i < *(ushort *)(self + m_numLengths / 4); i = i + 1) {
        *piVar10 = -1;
        piVar10[0x65] = -1;
        piVar10[0xca] = 0;
        piVar10 = piVar10 + 1;
      }
      memset(self + m_defStart / 4,0,0xc);
    }
    else {
      count = FUN_004ded48((char *)(self + m_defStart / 4),4,3,file);
      if ((((count != 3) ||
           (count = FUN_004ded48((char *)(self + m_occIndexOffset / 4),4,(uint)*(ushort *)(self + m_numLengths / 4),
                                 file), count != *(ushort *)(self + m_numLengths / 4))) ||
          (count = FUN_004ded48((char *)(self + m_defLinkOffset / 4),4,(uint)*(ushort *)(self + m_numLengths / 4),
                                file), count != *(ushort *)(self + m_numLengths / 4))) ||
         (count = FUN_004ded48((char *)(self + m_defLinkCount / 4),4,(uint)*(ushort *)(self + m_numLengths / 4),
                               file), count != *(ushort *)(self + m_numLengths / 4))) {
        piVar10 = (int *)FUN_004de7cc(file);
        *sehChainHead = sehPrevFrame;
        return piVar10;
      }
    }
    count = FUN_004ded48((char *)(self + m_wordStreamOffset / 4),4,(uint)*(ushort *)(self + m_numLengths / 4),file);
    if (((count != *(ushort *)(self + m_numLengths / 4)) ||
        (count = FUN_004ded48((char *)(self + m_wordCount / 4),4,(uint)*(ushort *)(self + m_numLengths / 4),
                              file), count != *(ushort *)(self + m_numLengths / 4))) ||
       (count = FUN_004ded48((char *)(self + m_description / 4),1,uVar7,file), uVar7 != count)) {
      FUN_004de7cc(file);
      *sehChainHead = sehPrevFrame;
      return sehPrevFrame;
    }
    uVar7 = FUN_004ded48((char *)(self + m_numUsedLetters / 4),2,1,file);
    if ((uVar7 != 1) ||
       (uVar7 = FUN_004ded48((char *)((int)self + m_numTotalLetters),2,1,file), uVar7 != 1)) {
      FUN_004de7cc(file);
      *sehChainHead = sehPrevFrame;
      return sehPrevFrame;
    }
    numUsed = (short)self[m_numUsedLetters / 4];
    if ((((numUsed < 0) || (0xfd < numUsed)) || (*(short *)((int)self + m_numTotalLetters) < 1)) ||
       ((0xfd < *(short *)((int)self + m_numTotalLetters) || (*(short *)((int)self + m_numTotalLetters) < numUsed))))
    {
      piVar10 = (int *)FUN_004de7cc(file);
      *sehChainHead = sehPrevFrame;
      return piVar10;
    }
    piVar10 = self + m_huffman / 4;
    sym = 0;
    p = self + m_canonical / 4;
    do {
      *(undefined1 *)p = 0x21;
      *piVar10 = 0;
      p = (int *)((int)p + 1);
      piVar10[1] = 0xff;
      sym = sym + 1;
      piVar10 = piVar10 + 2;
    } while (sym < 0x100);
    piVar10 = self + sym * 2 + 1;
    for (; sym < 0x300; sym = sym + 1) {
      *piVar10 = -1;
      piVar10[1] = -1;
      piVar10 = piVar10 + 2;
    }
    nextNode = 0x101;
    piVar10 = self + m_symbolByte / 4;
    sym = 0;
    entry = (uint *)(self + m_huffman / 4);
    do {
      uVar7 = FUN_004ded48(&symByte,1,1,file);
      if (((uVar7 != 1) || (uVar7 = FUN_004ded48((char *)&codeLen,1,1,file), uVar7 != 1)) ||
         ((uVar7 = FUN_004ded48((char *)&letterClass,2,1,file), uVar7 != 1 ||
          (uVar7 = FUN_004ded48((char *)&code_,4,1,file), uVar7 != 1)))) {
        FUN_004de7cc(file);
        *sehChainHead = sehPrevFrame;
        return sehPrevFrame;
      }
      if (codeLen != 0) {
        wantWriteTime = 0x100;
        bitsLeft = (uint)codeLen;
        while (1 < (int)bitsLeft) {
          if (self[wantWriteTime * 2 + 1] < 0) {
            self[wantWriteTime * 2 + 1] = nextNode;
            nextNode = nextNode + 1;
          }
          if (self[wantWriteTime * 2 + 2] < 0) {
            self[wantWriteTime * 2 + 2] = nextNode;
            nextNode = nextNode + 1;
          }
          wantWriteTime = self[wantWriteTime * 2 + (code_ >> ((byte)(bitsLeft - 1) & 0x1f) & 1) + 1];
          bitsLeft = bitsLeft - 1;
        }
        self[wantWriteTime * 2 + (code_ & 1) + 1] = sym;
        *entry = (uint)codeLen;
      }
      if (-1 < letterClass) {
        entry[1] = (int)letterClass;
        *(char *)((int)self + letterClass + 0x2bf8) = symByte;
      }
      *(char *)piVar10 = symByte;
      sym = sym + 1;
      piVar10 = (int *)((int)piVar10 + 1);
      entry = entry + 2;
    } while (sym < 0x100);
    piVar10 = self + m_lookahead8 / 4;
    prefix = 0;
    do {
      iVar9 = 0;
      bits = prefix;
      for (wantWriteTime = 0x100; (iVar9 < 8 && (0xff < wantWriteTime)); wantWriteTime = self[wantWriteTime * 2 + uVar7 + 1])
      {
        uVar7 = bits & 1;
        iVar9 = iVar9 + 1;
        bits = (int)bits >> 1;
      }
      *piVar10 = wantWriteTime;
      piVar10[0x100] = self[wantWriteTime * 2 + 1];
      prefix = prefix + 1;
      piVar10 = piVar10 + 1;
    } while ((int)prefix < 0x100);
    uVar7 = FUN_004ded48((char *)(self + m_numCalibrationRows / 4),2,1,file);
    if (uVar7 != 1) {
      FUN_004de7cc(file);
      *sehChainHead = sehPrevFrame;
      return sehPrevFrame;
    }
    wantWriteTime = operator_new_array();
    self[m_calibration / 4] = wantWriteTime;
    if (wantWriteTime == 0) {
      piVar10 = (int *)FUN_004de7cc(file);
      *sehChainHead = sehPrevFrame;
      return piVar10;
    }
    for (wantWriteTime = 0; wantWriteTime < (int)(uint)*(ushort *)(self + m_numCalibrationRows / 4); wantWriteTime = wantWriteTime + 1) {
      unloaded = operator_new_array();
      *(undefined4 *)(self[m_calibration / 4] + wantWriteTime * 4) = unloaded;
    }
    wantWriteTime = 0;
    while( true ) {
      if ((int)(uint)*(ushort *)(self + m_numCalibrationRows / 4) <= wantWriteTime) {
        piVar10 = (int *)FUN_004de7cc(file);
        self[m_loaded / 4] = 1;
        *sehChainHead = sehPrevFrame;
        return piVar10;
      }
      row = *(char **)(self[m_calibration / 4] + wantWriteTime * 4);
      if ((row == (char *)0x0) ||
         (uVar7 = FUN_004ded48(row,1,(int)(short)self[m_numUsedLetters / 4],file),
         uVar7 != (int)(short)self[m_numUsedLetters / 4])) break;
      wantWriteTime = wantWriteTime + 1;
    }
    piVar10 = (int *)FUN_004de7cc(file);
    *sehChainHead = sehPrevFrame;
    return piVar10;
  }
LAB_0040bbe8:
  piVar10 = (int *)"-- DICTIONARY FILE NOT FOUND --";
  p = self + m_description / 4;
  for (wantWriteTime = 8; wantWriteTime != 0; wantWriteTime = wantWriteTime + -1) {
    *p = *piVar10;
    piVar10 = piVar10 + (uint)bVar12 * -2 + 1;
    p = p + (uint)bVar12 * -2 + 1;
  }
  *sehChainHead = sehPrevFrame;
  return self + m_description / 4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040c1b4  TSDictionaryList::Dictionary::Unload   (132 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040711c. vtable slot 2. Frees the calibration matrix and clears the loaded state
//   also: TSDictionaryList::Dictionary::vf2 [rtti:vtable]
undefined4 * __cdecl TSDictionaryList::Dictionary::Unload(int self)

{
  int i;
  undefined4 *p;
  char *text;
  uint len;
  
  if (*(int *)(self + m_calibration) != 0) {
    for (i = 0; i < (int)(uint)*(ushort *)(self + m_numCalibrationRows); i = i + 1) {
      operator_delete_array();
    }
    operator_delete_array();
    *(undefined4 *)(self + m_calibration) = 0;
  }
  len = 0;
  p = (undefined4 *)(self + m_lengthTables);
  do {
    operator_delete_array();
    *p = 0;
    len = len + 1;
    p = p + 1;
  } while (len < 0x65);
  text = "-- INVALID DICTIONARY FILE --";
  p = (undefined4 *)(self + m_description);
  for (i = 7; i != 0; i = i + -1) {
    *p = *(undefined4 *)text;
    text = text + 4;
    p = p + 1;
  }
  *(undefined2 *)p = *(undefined2 *)text;
  return (undefined4 *)(self + m_description);
}

// ----------------------------------------------------------------------------------------------------
// 0x0040c238  TSDictionaryList::Dictionary::EnsureCurrent   (94 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x004071a0. vtable slot 3. Reloads when the file's timestamp no longer matches; returns the loaded flag
//   also: TSDictionaryList::Dictionary::vf3 [rtti:vtable]
int __cdecl TSDictionaryList::Dictionary::EnsureCurrent(int *self)

{
  bool haveTime;
  undefined3 regHigh;
  _FILETIME fileTime;
  
  haveTime = ReadFileTime((int)(self + m_path / 4),1,&fileTime);
  if (((CONCAT31(regHigh,haveTime) == 0) || (fileTime.dwLowDateTime != self[m_fileTime / 4])) ||
     (fileTime.dwHighDateTime != self[0x803])) {
    (**(code **)(*self + 4))();
    (**(code **)(*self + 4))();
  }
  return self[m_loaded / 4];
}

// ----------------------------------------------------------------------------------------------------
// 0x0040c298  TSDictionaryList::Dictionary::GetPathData   (14 bytes)   [analysis (position-matched TEACON.exe) virtual]
//   same masked bytes as TEACON.exe 0x00407200 (14 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. vtable slot 4: the path's character data
//   also: TSDictionaryList::Dictionary::vf4 [rtti:vtable]
undefined4 __cdecl TSDictionaryList::Dictionary::GetPathData(int self)

{
  return *(undefined4 *)(self + m_pathData);
}

// ----------------------------------------------------------------------------------------------------
// 0x0040c2a8  TSDictionaryList::Dictionary::GetFileTitle   (66 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00407210. vtable slot 5
//   also: TSDictionaryList::Dictionary::vf5 [rtti:vtable]
int __cdecl TSDictionaryList::Dictionary::GetFileTitle(int result,int self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ebf20);
  GetFileTitleString(result,self + m_path);
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040c2ec  TSDictionaryList::Dictionary::GetFileName   (14 bytes)   [analysis (position-matched TEACON.exe) virtual]
//   same masked bytes as TEACON.exe 0x00407254 (14 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. vtable slot 6: the path's character data (used as the file to open)
//   also: TSDictionaryList::Dictionary::vf6 [rtti:vtable]
undefined4 __cdecl TSDictionaryList::Dictionary::GetFileName(int self)

{
  return *(undefined4 *)(self + m_pathData);
}

// ----------------------------------------------------------------------------------------------------
// 0x0040c2fc  TSDictionaryList::Dictionary::GetCounts   (102 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00407264. vtable slot 10. Sums the per-length count tables into four totals
//   also: TSDictionaryList::Dictionary::vf10 [rtti:vtable]
void __cdecl TSDictionaryList::Dictionary::GetCounts(int self,int *totalWords,int *totalLinked,int *shortest,int *longest)

{
  int *count;
  int i;
  
  *longest = 0;
  *shortest = 0;
  *totalLinked = 0;
  *totalWords = 0;
  count = (int *)(self + 0x25a8);
  for (i = 1; i < (int)(uint)*(ushort *)(self + m_numLengths); i = i + 1) {
    if (0 < *count) {
      *totalWords = *totalWords + *count;
      if (*shortest == 0) {
        *shortest = i;
      }
      *longest = i;
    }
    *totalLinked = *totalLinked + count[0x12f];
    count = count + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040c364  TSDictionaryList::Dictionary::GetSummaryText   (603 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x004072cc. vtable slot 7. Formats the Headwords / Definitions / Description text
//   also: TSDictionaryList::Dictionary::vf7 [rtti:vtable]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
uint __cdecl TSDictionaryList::Dictionary::GetSummaryText(int *self,int out)

{
  int loadedOrLen;
  char *len;
  uint uVar3;
  int *strRep;
  undefined4 *sehChainHead;
  uint numberText [27];
  undefined4 unused;
  int unused2;
  int definitionCount;
  undefined1 loaded;
  undefined1 *unused3;
  undefined4 unused4;
  int unused5;
  int unused6;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 title [8];
  int titleData;
  undefined1 description [8];
  int descriptionData;
  
  __InitExceptBlockLDTC(0x4ebf64);
  ehContext = 8;
  (**(code **)(*self + 0x14))();
  ehDtorCount = ehDtorCount + 1;
  std::string::operator_assign(out,(int)title);
  ehDtorCount = ehDtorCount + -1;
  if (titleData != 0) {
    if (*(int *)(titleData + -0xc) != -1) {
      strRep = (int *)(titleData + -0xc);
      if (strRep == &g_nullStringRep) {
        loadedOrLen = 1;
      }
      else if (strRep == &g_nullStringRep) {
        loadedOrLen = 1;
      }
      else {
        *strRep = *strRep + -1;
        loadedOrLen = *strRep + 1;
      }
      if (loadedOrLen != 0) goto LAB_0040c41a;
    }
    unused6 = titleData + -0xc;
    unused5 = titleData + -0xc;
    operator_delete();
    unused4 = 0;
    unused3 = title;
    titleData = 0;
    unused = 0;
  }
LAB_0040c41a:
  loadedOrLen = (**(code **)(*self + 0xc))();
  loaded = loadedOrLen != 0;
  if ((bool)loaded) {
    (**(code **)(*self + 0x28))();
    sprintf((undefined1 *)numberText,(byte *)"\nHeadwords: %d");
    uVar3 = *(uint *)(*(int *)(out + 8) + -4);
    len = strlen(numberText);
    std::string::replace(out,uVar3,0,(uint)numberText,(uint)len,0,(uint)len);
    if (0 < definitionCount) {
      sprintf((undefined1 *)numberText,(byte *)"\nDefinitions: %d");
      uVar3 = *(uint *)(*(int *)(out + 8) + -4);
      len = strlen(numberText);
      std::string::replace(out,uVar3,0,(uint)numberText,(uint)len,0,(uint)len);
    }
  }
  ehContext = 0x2c;
  loadedOrLen = std::string::string_from_cstr((int)description,(uint *)(self + m_description / 4));
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x20;
  if (*(int *)(descriptionData + -4) != 0) {
    uVar3 = *(uint *)(*(int *)(out + 8) + -4);
    len = strlen((uint *)"\nDescription: ");
    std::string::replace(out,uVar3,0,0x4eb477,(uint)len,0,(uint)len);
    loadedOrLen = std::string::append(out,(int)description);
  }
  uVar3 = CONCAT31((int3)((uint)loadedOrLen >> 8),loaded);
  ehDtorCount = ehDtorCount + -1;
  if (descriptionData != 0) {
    if (*(int *)(descriptionData + -0xc) != -1) {
      strRep = (int *)(descriptionData + -0xc);
      if (strRep == &g_nullStringRep) {
        loadedOrLen = 1;
      }
      else if (strRep == &g_nullStringRep) {
        loadedOrLen = 1;
      }
      else {
        *strRep = *strRep + -1;
        loadedOrLen = *strRep + 1;
      }
      if (loadedOrLen != 0) goto LAB_0040c5ad;
    }
    unused2 = descriptionData + -0xc;
    operator_delete();
  }
LAB_0040c5ad:
  *sehChainHead = sehPrevFrame;
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040c5c0  TSDictionaryList::Dictionary::GetFileDateText   (575 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00407528. vtable slot 8. Formats the file time with GetDateFormatA
//   also: TSDictionaryList::Dictionary::vf8 [rtti:vtable]
int __cdecl TSDictionaryList::Dictionary::GetFileDateText(int result,int self)

{
  uint len2;
  char *len;
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  uint buf [250];
  _SYSTEMTIME sysTime;
  undefined4 *unused;
  undefined4 *unused2;
  undefined4 *dst;
  undefined4 *unused3;
  uint unused4;
  int unused5;
  int *newRep;
  int *data;
  int unused6;
  undefined4 *unused7;
  undefined4 unused8;
  _FILETIME fileTime;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 text [8];
  undefined4 *textData;
  
  __InitExceptBlockLDTC(0x4ebfe8);
  FileTimeToLocalFileTime((FILETIME *)(self + m_fileTime),&fileTime);
  FileTimeToSystemTime(&fileTime,&sysTime);
  GetDateFormatA(0x400,2,&sysTime,(LPCSTR)0x0,(LPSTR)buf,1000);
  ehContext = 0x14;
  std::string::string_from_cstr((int)text,buf);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 8;
  std::string::replace_fill((int)text,textData[-1],0,1,0x20);
  GetTimeFormatA(0x400,0,&sysTime,(LPCSTR)0x0,(LPSTR)buf,1000);
  len2 = textData[-1];
  len = strlen(buf);
  std::string::replace((int)text,len2,0,(uint)buf,(uint)len,0,(uint)len);
  ehContext = 0x20;
  unused8 = 0;
  *(undefined4 *)(result + 8) = 0;
  if (textData[-3] == -1 || textData[-3] + 1 < 0) {
    len2 = textData[-1];
    newRep = std::string::__getRep(result,len2,len2);
    data = newRep + 3;
    *(int **)(result + 8) = data;
    unused5 = result;
    unused3 = textData;
    dst = *(undefined4 **)(result + 8);
    unused4 = len2;
    memcpy(dst,textData,len2);
  }
  else {
    unused7 = textData;
    *(undefined4 **)(result + 8) = textData;
    unused6 = result;
    strRep = (int *)(*(int *)(result + 8) + -0xc);
    if (strRep != &g_nullStringRep) {
      *strRep = *strRep + 1;
    }
  }
  ehContext = 0x38;
  if (textData != (undefined4 *)0x0) {
    if (textData[-3] != -1) {
      strRep = textData + -3;
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
      if (prevRefs != 0) goto LAB_0040c7e4;
    }
    unused2 = textData + -3;
    unused = textData + -3;
    operator_delete();
  }
LAB_0040c7e4:
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040c800  TSDictionaryList::Dictionary::GetDescription   (73 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00407768. vtable slot 9. Returns the header description string (Dictionary+0x2014)
//   also: TSDictionaryList::Dictionary::vf9 [rtti:vtable]
int __cdecl TSDictionaryList::Dictionary::GetDescription(int result,int self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ec048);
  std::string::string_from_cstr(result,(uint *)(self + m_description));
  *sehChainHead = sehPrevFrame;
  return result;
}

} // namespace tea
