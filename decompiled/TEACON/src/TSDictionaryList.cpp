// TEACON.exe — application module "TSDictionaryList"
// 32 functions, 0x004051bc..0x00407768. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004051bc  TSDictionaryList::TSDictionaryList   (163 bytes)   [analysis]
//   constructor: copies the ';'-separated path list and starts an empty vector of Dictionary pointers
/* WARNING: Removing unreachable block (ram,0x00405206) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x0040520e */
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
  __InitExceptBlockLDTC(0x42b624);
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
// 0x00405280  TSDictionaryList::~TSDictionaryList   (115 bytes)   [rtti:dtor destructor]
//   written in code as TSDictionaryList::_dtor
void __cdecl TSDictionaryList::_dtor(int self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42b654);
  if (self != 0) {
    operator_delete_array();
    std::_Destroy_range_ptr_4052f4(self + m_dicts,*(int *)(self + m_dictsBegin),*(int *)(self + m_dictsEnd));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004052f4  std::_Destroy_range_ptr_4052f4   (22 bytes)   [analysis]
//   destroys a range of pointers (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_ptr_4052f4(undefined4 vec,int first,int last)

{
  for (; last != first; first = first + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040530c  TSDictionaryList::Open   (3045 bytes)   [analysis]
//   builds a TSDictionaryList from a ';'-separated list of .tsd paths: reuses dictionaries already in g_dictionaryCache (adding a reference) and loads the others
/* WARNING: Removing unreachable block (ram,0x00405497) */
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
  
  __InitExceptBlockLDTC(0x42b738);
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
LAB_004053ad:
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
      semicolon = (*(uint *)&g_stringNpos);
      if (found != (char *)0x0) {
        semicolon = (int)found - (int)pathData;
      }
      semicolonPos = semicolon;
      if (semicolon != (*(uint *)&g_stringNpos)) {
        if ((*(uint *)&g_stringNpos) - 0xe < semicolon) {
          throwLine = 0;
          throwFile = 0;
          throwFlags = 0;
          copyCtorMask = 1;
          copyCtor = &LAB_00405f50;
          objectDtor = 0;
          ehContext = 0x68;
          lengthErrorMsg = (uint *)__rwstd::except_msg_string::format(lengthErrorText,PTR_s_invalid_string_size_parameter_in_00431a78)
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
              if (count != 0) goto LAB_00405772;
            }
            unused34 = str5 + -3;
            unused33 = str5 + -3;
            operator_delete();
            unused32 = 0;
            unused31 = str2;
            str5 = (int *)0x0;
            unused = 0;
          }
LAB_00405772:
          ehContext = 0x5c;
          _ThrowExceptionLDTC((uint *)&DAT_00405ef4,(undefined4*)lengthError,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
        }
        if (semicolon < (uint)pathData[-1]) {
          tailLen = pathData[-1] - semicolon;
          if ((uint)pathData[-1] < semicolon) {
            throwLine = 0;
            throwFile = 0;
            throwFlags = 0;
            copyCtorMask = 1;
            copyCtor = &LAB_004060a8;
            objectDtor = 0;
            ehContext = 0x98;
            rangeErrorMsg = (uint *)__rwstd::except_msg_string::format(rangeErrorText,
                                             PTR_s_string_index_out_of_range_in_fun_00431a84);
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
                if (count != 0) goto LAB_00405a14;
              }
              unused23 = str4 + -3;
              unused22 = str4 + -3;
              operator_delete();
              unused21 = 0;
              unused20 = str;
              str4 = (int *)0x0;
            }
LAB_00405a14:
            ehContext = 0x5c;
            _ThrowExceptionLDTC((uint *)&DAT_0040604c,(undefined4*)rangeError,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
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
        count = (int)(*(undefined4 * *)&g_dictionaryCacheEnd) - g_dictionaryCacheBegin;
        if (count < 0) {
          count = count + 3;
        }
        if ((uint)(count >> 2) <= semicolon) goto LAB_00405b06;
        dict = *(int **)(semicolon * 4 + g_dictionaryCacheBegin);
        found = (char *)(**(code **)(*dict + 0x10))();
        count = strcmp((char *)pathData,found);
        if (count == 0) break;
        semicolon = semicolon + 1;
      }
      dict[0x804] = dict[0x804] + 1;
LAB_00405b06:
      count = (int)(*(undefined4 * *)&g_dictionaryCacheEnd) - g_dictionaryCacheBegin;
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
        if ((*(undefined4 * *)&g_dictionaryCacheEnd) == (*(undefined4 * *)&g_dictionaryCacheCapacityEnd)) {
          std::vector_ptr::insert_aux(0x42b5e4,(*(undefined4 * *)&g_dictionaryCacheEnd),(undefined4*)&dict);
        }
        else {
          unused19 = (*(undefined4 * *)&g_dictionaryCacheEnd);
          unused18 = (*(undefined4 * *)&g_dictionaryCacheEnd);
          *(*(undefined4 * *)&g_dictionaryCacheEnd) = dict;
          (*(undefined4 * *)&g_dictionaryCacheEnd) = (*(undefined4 * *)&g_dictionaryCacheEnd) + 1;
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
      if (semicolonPos == (*(uint *)&g_stringNpos)) goto code_r0x00405c13;
      ehContext = 0xe0;
      std::string::substr((int)rest,(int)remaining,semicolonPos + 1,(*(uint *)&g_stringNpos));
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
          if (count != 0) goto LAB_00405d8c;
        }
        unused16 = str3 + -0xc;
        unused15 = str3 + -0xc;
        operator_delete();
        unused14 = 0;
        unused13 = rest;
        str3 = 0;
      }
LAB_00405d8c:
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
          if (count != 0) goto LAB_004053ad;
        }
        unused8 = pathData + -3;
        unused7 = pathData + -3;
        operator_delete();
        unused6 = 0;
        unused5 = path;
      }
    } while( true );
  }
LAB_00405e36:
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
      if (count != 0) goto LAB_00405ed3;
    }
    unused4 = remainingData + -3;
    unused3 = remainingData + -3;
    operator_delete();
  }
LAB_00405ed3:
  *sehChainHead = sehPrevFrame;
  return list;
code_r0x00405c13:
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
      if (count != 0) goto LAB_00405e36;
    }
    unused12 = pathData + -3;
    unused11 = pathData + -3;
    operator_delete();
    unused10 = 0;
    pathData = (int *)0x0;
    unused9 = path;
  }
  goto LAB_00405e36;
}

// ----------------------------------------------------------------------------------------------------
// 0x004061d0  std::vector_ptr::insert_aux   (437 bytes, 2 ranges)   [analysis]
//   std::vector<T *> insert at a position, growing the storage (doubling, at least 256) when full
//   file placement: inferred (address adjacency)
void __cdecl std::vector_ptr::insert_aux(int vec,undefined4 *pos,undefined4 *value)

{
  int newCapacity;
  undefined4 *storage;
  int index;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x42b884);
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
      _ThrowExceptionLDTC((uint *)&DAT_00404c94,(undefined4*)&badAlloc,0,&LAB_00404cec,1,0,0,0);
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
    std::_Destroy_range_ptr_4052f4(vec,*(int *)(vec + 4),*(int *)(vec + 8));
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
// 0x004063a8  std::copy_backward_ptr   (36 bytes)   [analysis]
//   copy_backward over a range of pointers
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
// 0x004063cc  std::copy_ptr   (89 bytes, 2 ranges)   [analysis]
//   copy over a range of pointers
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_ptr(undefined4 *first,undefined4 *last,undefined4 *dest)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42b8c4);
  for (; last != first; first = first + 1) {
    *dest = *first;
    dest = dest + 1;
  }
  *sehChainHead = sehPrevFrame;
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040644c  std::_Destroy_range_ptr_40644c   (22 bytes)   [analysis]
//   destroys a range of pointers (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_ptr_40644c(int first,int last)

{
  for (; last != first; first = first + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406464  TSDictionaryList::ReleaseDictionaries   (201 bytes)   [analysis]
//   drops one reference on every listed Dictionary in the shared cache and deletes those reaching zero
void __cdecl TSDictionaryList::ReleaseDictionaries(int self)

{
  int *refs;
  undefined4 *dict;
  int *cacheSlot;
  int *entry;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42b8f8);
  if (self != 0) {
    for (entry = *(int **)(self + m_dictsBegin); entry < *(int **)(self + m_dictsEnd); entry = entry + 1)
    {
      cacheSlot = (int *)std::find_ptr((*(int * *)&g_dictionaryCacheBegin),(*(int * *)&g_dictionaryCacheEnd),entry);
      dict = (undefined4 *)*cacheSlot;
      refs = dict + 0x804;
      *refs = *refs + -1;
      if (*refs == 0) {
        if (dict != (undefined4 *)0x0) {
          (**(code **)*dict)();
        }
        if (cacheSlot + 1 != (*(int * *)&g_dictionaryCacheEnd)) {
          std::copy_ptr_406584(cacheSlot + 1,(*(int * *)&g_dictionaryCacheEnd),cacheSlot);
        }
        (*(int * *)&g_dictionaryCacheEnd) = (*(int * *)&g_dictionaryCacheEnd) + -1;
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
// 0x00406564  std::find_ptr   (31 bytes)   [analysis]
//   find over a range of pointers
//   file placement: inferred (address adjacency)
int * __cdecl std::find_ptr(int *first,int *last,int *value)

{
  for (; (last != first && (*value != *first)); first = first + 1) {
  }
  return first;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406584  std::copy_ptr_406584   (36 bytes)   [analysis]
//   copy over a range of pointers (vector erase)
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_ptr_406584(undefined4 *first,undefined4 *last,undefined4 *dest)

{
  for (; last != first; first = first + 1) {
    *dest = *first;
    dest = dest + 1;
  }
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x004065a8  TSDictionaryList::GetCount   (29 bytes)   [analysis]
//   number of dictionaries (vector size)
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
// 0x004065c8  TSDictionaryList::GetFirstMissingPath   (56 bytes)   [analysis]
//   path of the first dictionary that is not loaded (IsLoaded false), or 0 when all loaded
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
// 0x00406600  TSDictionaryList::IsLoaded   (252 bytes)   [analysis]
//   Dictionary::GetSummaryText (slot 7) of dictionary `index` into a temporary; returns its loaded flag
/* WARNING: Removing unreachable block (ram,0x0040663e) */
/* WARNING: Removing unreachable block (ram,0x00406695) */
/* WARNING: Removing unreachable block (ram,0x004066a4) */
/* WARNING: Removing unreachable block (ram,0x0040669d) */
undefined1 __cdecl TSDictionaryList::IsLoaded(int self,int index)

{
  undefined1 loaded;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42b950);
  loaded = (**(code **)(**(int **)(index * 4 + *(int *)(self + m_dictsBegin)) + 0x1c))();
  if (g_nullStringRep == -1) {
    operator_delete();
  }
  *sehChainHead = sehPrevFrame;
  return loaded;
}

// ----------------------------------------------------------------------------------------------------
// 0x004066fc  TSDictionaryList::EnsureCurrent   (34 bytes)   [analysis]
//   Dictionary::EnsureCurrent (slot 3) of dictionary `index`: reloads it if the file changed; returns its loaded flag
undefined4 __cdecl TSDictionaryList::EnsureCurrent(int self,int index)

{
  undefined4 loaded;
  
  loaded = (**(code **)(**(int **)(index * 4 + *(int *)(self + m_dictsBegin)) + 0xc))();
  return loaded;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406720  TSDictionaryList::GetPath   (34 bytes)   [analysis]
//   slot 4 of dictionary `index`: the path's character data
undefined4 __cdecl TSDictionaryList::GetPath(int self,int index)

{
  undefined4 path;
  
  path = (**(code **)(**(int **)(index * 4 + *(int *)(self + m_dictsBegin)) + 0x10))();
  return path;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406744  TSDictionaryList::GetNumLengths   (26 bytes)   [analysis]
//   dictionary header num_lengths (u16 at Dictionary+0x240c)
undefined2 __cdecl TSDictionaryList::GetNumLengths(int self,int index)

{
  return *(undefined2 *)(*(int *)(index * 4 + *(int *)(self + m_dictsBegin)) + 0x240c);
}

// ----------------------------------------------------------------------------------------------------
// 0x00406760  TSDictionaryList::GetWordStreamOffset   (29 bytes)   [analysis]
//   word_stream_offsets[length] (u32 table at Dictionary+0x2410)
undefined4 __cdecl TSDictionaryList::GetWordStreamOffset(int self,int index,int length)

{
  return *(undefined4 *)(*(int *)(index * 4 + *(int *)(self + m_dictsBegin)) + 0x2410 + length * 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x00406780  TSDictionaryList::GetLetterChar   (29 bytes)   [analysis]
//   canonical[letterClass] of dictionary `index`: the byte that displays a letter class
undefined4 __cdecl TSDictionaryList::GetLetterChar(int self,int index,int letterClass)

{
  int dict;
  
  dict = *(int *)(index * 4 + *(int *)(self + m_dictsBegin));
  return CONCAT31((int3)((uint)dict >> 8),*(undefined1 *)(dict + 0x2bf8 + letterClass));
}

// ----------------------------------------------------------------------------------------------------
// 0x004067a0  TSDictionaryList::GetNumUsedLetters   (26 bytes)   [analysis]
//   number of letter classes used by dictionary `index`
int __cdecl TSDictionaryList::GetNumUsedLetters(int self,int index)

{
  return (int)*(short *)(*(int *)(index * 4 + *(int *)(self + m_dictsBegin)) + 0x2bf4);
}

// ----------------------------------------------------------------------------------------------------
// 0x00406814  TSDictionaryList::Dictionary::Dictionary   (315 bytes)   [analysis]
//   constructor: installs the vtable, copies the path string
//   also: TSDictionaryList::Dictionary::Dictionary [rtti:vtable-store]
undefined4 * __cdecl TSDictionaryList::Dictionary::Dictionary(undefined4 *self,int path)

{
  int refs;
  uint len;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42b998);
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
// 0x00406950  TSDictionaryList::Dictionary::~Dictionary   (218 bytes)   [rtti:dtor destructor]
//   written in code as TSDictionaryList::Dictionary::_dtor
void __cdecl TSDictionaryList::Dictionary::_dtor(int *self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42b9d4);
  if (self == (int *)0x0) goto LAB_00406a19;
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
      if (prevRefs != 0) goto LAB_00406a09;
    }
    operator_delete();
    self[m_pathData / 4] = 0;
  }
LAB_00406a09:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_00406a19:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406a2c  TSDictionaryList::Dictionary::Load   (1774 bytes)   [notes+analysis]
//   vtable slot 1. Reads the .tsd header (magic TSD0/TSD1), Huffman table and calibration matrix; builds the 8-bit lookahead decode tables
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
  int node;
  uint count;
  uint got;
  int depth;
  int *p;
  int *q;
  undefined4 *sehChainHead;
  byte backwards;
  char followLinks;
  LPFILETIME fileTimeOut;
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
  
  backwards = 0;
  __InitExceptBlockLDTC(0x42ba04);
  self[m_loaded / 4] = 0;
  self[m_fileTime / 4] = 0;
  self[0x803] = 0;
  p = self;
  unloaded = (**(code **)(*self + 8))();
  if (reload == 0) {
    *sehChainHead = sehPrevFrame;
    return sehPrevFrame;
  }
  entry = (uint *)(**(code **)(*self + 0x18))(unloaded,*self,p,self);
  file = fopen((LPCSTR)entry,&DAT_0042b445);
  if (file == (int *)0x0) goto LAB_00406b50;
  fileTimeOut = (LPFILETIME)(self + m_fileTime / 4);
  followLinks = '\x01';
  ehContext = 8;
  std::string::string_from_cstr((int)pathStr,entry);
  ehDtorCount = ehDtorCount + 1;
  haveTime = ReadFileTime((int)pathStr,followLinks,fileTimeOut);
  count = (uint)(CONCAT31(regHigh,haveTime) == 0);
  ehDtorCount = ehDtorCount + -1;
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      p = (int *)(str + -0xc);
      if (p == &g_nullStringRep) {
        node = 1;
      }
      else if (p == &g_nullStringRep) {
        node = 1;
      }
      else {
        *p = *p + -1;
        node = *p + 1;
      }
      if (node != 0) goto LAB_00406b4b;
    }
    unused4 = str + -0xc;
    unused3 = str + -0xc;
    operator_delete();
    unused2 = 0;
    unused = pathStr;
    str = 0;
  }
LAB_00406b4b:
  if (count == 0) {
    count = FUN_00420d9c((char *)magic,1,4,file);
    if ((count != 4) ||
       ((count = FUN_0041f04c(&DAT_0042bc20 /* "TSD0TSD1Nobody" */,magic,4), count != 0 &&
        (count = FUN_0041f04c((byte *)"TSD1Nobody",magic,4), count != 0)))) {
      p = (int *)FUN_004207fc(file);
      *sehChainHead = sehPrevFrame;
      return p;
    }
    self[m_format / 4] = formatDigit + -0x30;
    count = FUN_00420d9c((char *)(self + m_numLengths / 4),2,1,file);
    if (count != 1) {
      FUN_004207fc(file);
      *sehChainHead = sehPrevFrame;
      return sehPrevFrame;
    }
    count = 1000;
    if (self[m_format / 4] == 0) {
      count = 0x50;
      p = self + m_occIndexOffset / 4;
      for (i = 0; i < *(ushort *)(self + m_numLengths / 4); i = i + 1) {
        *p = -1;
        p[0x65] = -1;
        p[0xca] = 0;
        p = p + 1;
      }
      memset(self + m_defStart / 4,0,0xc);
    }
    else {
      got = FUN_00420d9c((char *)(self + m_defStart / 4),4,3,file);
      if ((((got != 3) ||
           (got = FUN_00420d9c((char *)(self + m_occIndexOffset / 4),4,(uint)*(ushort *)(self + m_numLengths / 4),
                                 file), got != *(ushort *)(self + m_numLengths / 4))) ||
          (got = FUN_00420d9c((char *)(self + m_defLinkOffset / 4),4,(uint)*(ushort *)(self + m_numLengths / 4),
                                file), got != *(ushort *)(self + m_numLengths / 4))) ||
         (got = FUN_00420d9c((char *)(self + m_defLinkCount / 4),4,(uint)*(ushort *)(self + m_numLengths / 4),
                               file), got != *(ushort *)(self + m_numLengths / 4))) {
        p = (int *)FUN_004207fc(file);
        *sehChainHead = sehPrevFrame;
        return p;
      }
    }
    got = FUN_00420d9c((char *)(self + m_wordStreamOffset / 4),4,(uint)*(ushort *)(self + m_numLengths / 4),file);
    if (((got != *(ushort *)(self + m_numLengths / 4)) ||
        (got = FUN_00420d9c((char *)(self + m_wordCount / 4),4,(uint)*(ushort *)(self + m_numLengths / 4),
                              file), got != *(ushort *)(self + m_numLengths / 4))) ||
       (got = FUN_00420d9c((char *)(self + m_description / 4),1,count,file), count != got)) {
      FUN_004207fc(file);
      *sehChainHead = sehPrevFrame;
      return sehPrevFrame;
    }
    count = FUN_00420d9c((char *)(self + m_numUsedLetters / 4),2,1,file);
    if ((count != 1) ||
       (count = FUN_00420d9c((char *)((int)self + m_numTotalLetters),2,1,file), count != 1)) {
      FUN_004207fc(file);
      *sehChainHead = sehPrevFrame;
      return sehPrevFrame;
    }
    numUsed = (short)self[m_numUsedLetters / 4];
    if ((((numUsed < 0) || (0xfd < numUsed)) || (*(short *)((int)self + m_numTotalLetters) < 1)) ||
       ((0xfd < *(short *)((int)self + m_numTotalLetters) || (*(short *)((int)self + m_numTotalLetters) < numUsed))))
    {
      p = (int *)FUN_004207fc(file);
      *sehChainHead = sehPrevFrame;
      return p;
    }
    p = self + m_huffman / 4;
    sym = 0;
    q = self + m_canonical / 4;
    do {
      *(undefined1 *)q = 0x21;
      *p = 0;
      q = (int *)((int)q + 1);
      p[1] = 0xff;
      sym = sym + 1;
      p = p + 2;
    } while (sym < 0x100);
    p = self + sym * 2 + 1;
    for (; sym < 0x300; sym = sym + 1) {
      *p = -1;
      p[1] = -1;
      p = p + 2;
    }
    nextNode = 0x101;
    p = self + m_symbolByte / 4;
    sym = 0;
    entry = (uint *)(self + m_huffman / 4);
    do {
      count = FUN_00420d9c(&symByte,1,1,file);
      if (((count != 1) || (count = FUN_00420d9c((char *)&codeLen,1,1,file), count != 1)) ||
         ((count = FUN_00420d9c((char *)&letterClass,2,1,file), count != 1 ||
          (count = FUN_00420d9c((char *)&code_,4,1,file), count != 1)))) {
        FUN_004207fc(file);
        *sehChainHead = sehPrevFrame;
        return sehPrevFrame;
      }
      if (codeLen != 0) {
        node = 0x100;
        bitsLeft = (uint)codeLen;
        while (1 < (int)bitsLeft) {
          if (self[node * 2 + 1] < 0) {
            self[node * 2 + 1] = nextNode;
            nextNode = nextNode + 1;
          }
          if (self[node * 2 + 2] < 0) {
            self[node * 2 + 2] = nextNode;
            nextNode = nextNode + 1;
          }
          node = self[node * 2 + (code_ >> ((byte)(bitsLeft - 1) & 0x1f) & 1) + 1];
          bitsLeft = bitsLeft - 1;
        }
        self[node * 2 + (code_ & 1) + 1] = sym;
        *entry = (uint)codeLen;
      }
      if (-1 < letterClass) {
        entry[1] = (int)letterClass;
        *(char *)((int)self + letterClass + 0x2bf8) = symByte;
      }
      *(char *)p = symByte;
      sym = sym + 1;
      p = (int *)((int)p + 1);
      entry = entry + 2;
    } while (sym < 0x100);
    p = self + m_lookahead8 / 4;
    prefix = 0;
    do {
      depth = 0;
      bits = prefix;
      for (node = 0x100; (depth < 8 && (0xff < node)); node = self[node * 2 + count + 1]) {
        count = bits & 1;
        depth = depth + 1;
        bits = (int)bits >> 1;
      }
      *p = node;
      p[0x100] = self[node * 2 + 1];
      prefix = prefix + 1;
      p = p + 1;
    } while ((int)prefix < 0x100);
    count = FUN_00420d9c((char *)(self + m_numCalibrationRows / 4),2,1,file);
    if (count != 1) {
      FUN_004207fc(file);
      *sehChainHead = sehPrevFrame;
      return sehPrevFrame;
    }
    node = operator_new_array();
    self[m_calibration / 4] = node;
    if (node == 0) {
      p = (int *)FUN_004207fc(file);
      *sehChainHead = sehPrevFrame;
      return p;
    }
    for (node = 0; node < (int)(uint)*(ushort *)(self + m_numCalibrationRows / 4); node = node + 1) {
      unloaded = operator_new_array();
      *(undefined4 *)(self[m_calibration / 4] + node * 4) = unloaded;
    }
    node = 0;
    while( true ) {
      if ((int)(uint)*(ushort *)(self + m_numCalibrationRows / 4) <= node) {
        p = (int *)FUN_004207fc(file);
        self[m_loaded / 4] = 1;
        *sehChainHead = sehPrevFrame;
        return p;
      }
      row = *(char **)(self[m_calibration / 4] + node * 4);
      if ((row == (char *)0x0) ||
         (count = FUN_00420d9c(row,1,(int)(short)self[m_numUsedLetters / 4],file),
         count != (int)(short)self[m_numUsedLetters / 4])) break;
      node = node + 1;
    }
    p = (int *)FUN_004207fc(file);
    *sehChainHead = sehPrevFrame;
    return p;
  }
LAB_00406b50:
  p = (int *)"-- DICTIONARY FILE NOT FOUND --";
  q = self + m_description / 4;
  for (node = 8; node != 0; node = node + -1) {
    *q = *p;
    p = p + (uint)backwards * -2 + 1;
    q = q + (uint)backwards * -2 + 1;
  }
  *sehChainHead = sehPrevFrame;
  return self + m_description / 4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040711c  TSDictionaryList::Dictionary::Unload   (132 bytes)   [analysis]
//   vtable slot 2. Frees the calibration matrix and clears the loaded state
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
// 0x004071a0  TSDictionaryList::Dictionary::EnsureCurrent   (94 bytes)   [analysis]
//   vtable slot 3. Reloads when the file's timestamp no longer matches; returns the loaded flag
//   also: TSDictionaryList::Dictionary::vf3 [rtti:vtable]
int __cdecl TSDictionaryList::Dictionary::EnsureCurrent(int *self)

{
  bool haveTime;
  undefined3 regHigh;
  _FILETIME fileTime;
  
  haveTime = ReadFileTime((int)(self + m_path / 4),'\x01',&fileTime);
  if (((CONCAT31(regHigh,haveTime) == 0) || (fileTime.dwLowDateTime != self[m_fileTime / 4])) ||
     (fileTime.dwHighDateTime != self[0x803])) {
    (**(code **)(*self + 4))();
    (**(code **)(*self + 4))();
  }
  return self[m_loaded / 4];
}

// ----------------------------------------------------------------------------------------------------
// 0x00407200  TSDictionaryList::Dictionary::GetPathData   (14 bytes)   [analysis virtual]
//   vtable slot 4: the path's character data
//   also: TSDictionaryList::Dictionary::vf4 [rtti:vtable]
undefined4 __cdecl TSDictionaryList::Dictionary::GetPathData(int self)

{
  return *(undefined4 *)(self + m_pathData);
}

// ----------------------------------------------------------------------------------------------------
// 0x00407210  TSDictionaryList::Dictionary::GetFileTitle   (66 bytes)   [analysis]
//   vtable slot 5
//   also: TSDictionaryList::Dictionary::vf5 [rtti:vtable]
int __cdecl TSDictionaryList::Dictionary::GetFileTitle(int result,int self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42ba34);
  GetFileTitleString(result,self + m_path);
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00407254  TSDictionaryList::Dictionary::GetFileName   (14 bytes)   [analysis virtual]
//   vtable slot 6: the path's character data (used as the file to open)
//   also: TSDictionaryList::Dictionary::vf6 [rtti:vtable]
undefined4 __cdecl TSDictionaryList::Dictionary::GetFileName(int self)

{
  return *(undefined4 *)(self + m_pathData);
}

// ----------------------------------------------------------------------------------------------------
// 0x00407264  TSDictionaryList::Dictionary::GetCounts   (102 bytes)   [analysis]
//   vtable slot 10. Sums the per-length count tables into four totals
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
// 0x004072cc  TSDictionaryList::Dictionary::GetSummaryText   (603 bytes)   [analysis]
//   vtable slot 7. Formats the Headwords / Definitions / Description text
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
  
  __InitExceptBlockLDTC(0x42ba78);
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
      if (loadedOrLen != 0) goto LAB_00407382;
    }
    unused6 = titleData + -0xc;
    unused5 = titleData + -0xc;
    operator_delete();
    unused4 = 0;
    unused3 = title;
    titleData = 0;
    unused = 0;
  }
LAB_00407382:
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
    std::string::replace(out,uVar3,0,0x42b4a6,(uint)len,0,(uint)len);
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
      if (loadedOrLen != 0) goto LAB_00407515;
    }
    unused2 = descriptionData + -0xc;
    operator_delete();
  }
LAB_00407515:
  *sehChainHead = sehPrevFrame;
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00407528  TSDictionaryList::Dictionary::GetFileDateText   (575 bytes)   [analysis]
//   vtable slot 8. Formats the file time with GetDateFormatA
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
  
  __InitExceptBlockLDTC(0x42bafc);
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
      if (prevRefs != 0) goto LAB_0040774c;
    }
    unused2 = textData + -3;
    unused = textData + -3;
    operator_delete();
  }
LAB_0040774c:
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00407768  TSDictionaryList::Dictionary::GetDescription   (73 bytes)   [analysis]
//   vtable slot 9. Returns the header description string (Dictionary+0x2014)
//   also: TSDictionaryList::Dictionary::vf9 [rtti:vtable]
int __cdecl TSDictionaryList::Dictionary::GetDescription(int result,int self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42bb5c);
  std::string::string_from_cstr(result,(uint *)(self + m_description));
  *sehChainHead = sehPrevFrame;
  return result;
}

} // namespace tea
