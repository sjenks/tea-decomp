// TEA.exe — application module "FileHistory"
// 5 functions, 0x00412434..0x004131f8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00412434  FileHistory::Get   (230 bytes)   [analysis]
//   copy of entry `index` of the history
int __cdecl FileHistory::Get(int result,int self,int index)

{
  int refs;
  uint len;
  int entry;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ecb80);
  entry = index * 0x10 + self;
  *(undefined4 *)(result + 8) = 0;
  refs = *(int *)(*(int *)(entry + 8) + -0xc);
  if (refs == -1 || refs + 1 < 0) {
    len = *(uint *)(*(int *)(entry + 8) + -4);
    rep = std::string::__getRep(result,len,len);
    *(int **)(result + 8) = rep + 3;
    memcpy(*(undefined4 **)(result + 8),*(undefined4 **)(entry + 8),len);
  }
  else {
    *(undefined4 *)(result + 8) = *(undefined4 *)(entry + 8);
    rep = (int *)(*(int *)(result + 8) + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041251c  FileHistory::Add   (788 bytes)   [analysis]
//   moves `path` to the front of the history, shifting the others down (dropping its old position or the oldest)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FileHistory::Add(int self,uint *path)

{
  uint len;
  int cmp;
  int *strRep;
  int i;
  int entry;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 previous [8];
  int *previousData;
  undefined1 carry [8];
  int carryData;
  
  __InitExceptBlockLDTC(0x4ecbe0);
  std::string::string_from_cstr((int)carry,path);
  i = 0;
  do {
    entry = i * 0x10 + self;
    previousData = (int *)0x0;
    cmp = *(int *)(*(int *)(entry + 8) + -0xc);
    if (cmp == -1 || cmp + 1 < 0) {
      len = *(uint *)(*(int *)(entry + 8) + -4);
      previousData = std::string::__getRep(previous,len,len);
      previousData = previousData + 3;
      memcpy(previousData,*(undefined4 **)(entry + 8),len);
    }
    else {
      previousData = *(int **)(entry + 8);
      strRep = previousData + -3;
      if (strRep != &g_nullStringRep) {
        *strRep = *strRep + 1;
      }
    }
    std::string::operator_assign(i * 0x10 + self,(int)carry);
    cmp = strcmp((char *)path,(char *)previousData);
    if (cmp == 0) {
      if (previousData == (int *)0x0) break;
      if (previousData[-3] != -1) {
        strRep = previousData + -3;
        if (strRep == &g_nullStringRep) {
          i = 1;
        }
        else if (strRep == &g_nullStringRep) {
          i = 1;
        }
        else {
          *strRep = *strRep + -1;
          i = *strRep + 1;
        }
        if (i != 0) break;
      }
      operator_delete();
      previousData = (int *)0x0;
      break;
    }
    std::string::operator_assign((int)carry,(int)previous);
    if (previousData != (int *)0x0) {
      if (previousData[-3] != -1) {
        strRep = previousData + -3;
        if (strRep == &g_nullStringRep) {
          cmp = 1;
        }
        else if (strRep == &g_nullStringRep) {
          cmp = 1;
        }
        else {
          *strRep = *strRep + -1;
          cmp = *strRep + 1;
        }
        if (cmp != 0) goto LAB_0041275b;
      }
      operator_delete();
      previousData = (int *)0x0;
    }
LAB_0041275b:
    i = i + 1;
  } while (i < 10);
  if (carryData != 0) {
    if (*(int *)(carryData + -0xc) != -1) {
      strRep = (int *)(carryData + -0xc);
      if (strRep == &g_nullStringRep) {
        i = 1;
      }
      else if (strRep == &g_nullStringRep) {
        i = 1;
      }
      else {
        *strRep = *strRep + -1;
        i = *strRep + 1;
      }
      if (i != 0) goto LAB_0041281a;
    }
    operator_delete();
  }
LAB_0041281a:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00412830  FileHistory::Save   (1146 bytes)   [analysis]
//   writes the history to the registry: FileDictionary (or FileCrossword) and FileDictionary1..9
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FileHistory::Save(int self)

{
  int *entryData;
  char *valueBase;
  undefined4 *sehChainHead;
  int i;
  int machineWide;
  undefined1 *valueArg;
  uint valueNameBuf [15];
  undefined4 unused;
  undefined4 unused2;
  undefined4 unused3;
  undefined1 *unused4;
  undefined4 unused5;
  int unused6;
  int unused7;
  int *strRep;
  undefined1 *unused8;
  undefined4 unused9;
  int unused10;
  int unused11;
  int *strRep2;
  undefined1 *unused12;
  undefined4 unused13;
  int unused14;
  int unused15;
  undefined1 *unused16;
  undefined4 unused17;
  int unused18;
  int unused19;
  undefined1 *unused20;
  undefined4 unused21;
  int unused22;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 valueName [8];
  int str3;
  undefined1 str [8];
  int str4;
  undefined1 valueName2 [8];
  int str5;
  undefined1 str2 [8];
  int str6;
  undefined1 keyPath [8];
  int keyPathData;
  int persist [2];
  
  __InitExceptBlockLDTC(0x4eccac);
  ehContext = 0x14;
  machineWide = 0;
  i = 1;
  GetProfileKeyPath((int)keyPath);
  ehDtorCount = ehDtorCount + 1;
  Persist::Persist(persist,(int)keyPath,i,machineWide);
  if (keyPathData != 0) {
    if (*(int *)(keyPathData + -0xc) != -1) {
      entryData = (int *)(keyPathData + -0xc);
      if (entryData == &g_nullStringRep) {
        i = 1;
      }
      else if (entryData == &g_nullStringRep) {
        i = 1;
      }
      else {
        *entryData = *entryData + -1;
        i = *entryData + 1;
      }
      if (i != 0) goto LAB_004128fc;
    }
    unused22 = keyPathData + -0xc;
    operator_delete();
    unused21 = 0;
    unused20 = keyPath;
    keyPathData = 0;
    unused3 = 0;
  }
LAB_004128fc:
  ehContext = 8;
  if (*(int *)(self + 0xa4) == 0) {
    valueBase = "FileDictionary";
  }
  else {
    valueBase = "FileCrossword";
  }
  if (*(int *)(*(int *)(self + 8) + -4) == 0) goto LAB_00412a9b;
  ehContext = 0x2c;
  std::string::string_from_cstr((int)str2,*(uint **)(self + 8));
  valueArg = str2;
  ehDtorCount = ehDtorCount + 1;
  std::string::string_from_cstr((int)valueName2,(uint *)valueBase);
  ehDtorCount = ehDtorCount + 1;
  Persist::SetString((int)persist,(int)valueName2,(int)valueArg);
  ehDtorCount = ehDtorCount + -1;
  if (str5 != 0) {
    if (*(int *)(str5 + -0xc) != -1) {
      entryData = (int *)(str5 + -0xc);
      if (entryData == &g_nullStringRep) {
        i = 1;
      }
      else if (entryData == &g_nullStringRep) {
        i = 1;
      }
      else {
        *entryData = *entryData + -1;
        i = *entryData + 1;
      }
      if (i != 0) goto LAB_00412a02;
    }
    unused19 = str5 + -0xc;
    unused18 = str5 + -0xc;
    operator_delete();
    unused17 = 0;
    unused16 = valueName2;
    str5 = 0;
    unused2 = 0;
  }
LAB_00412a02:
  ehContext = 8;
  ehDtorCount = ehDtorCount + -1;
  if (str6 != 0) {
    if (*(int *)(str6 + -0xc) != -1) {
      entryData = (int *)(str6 + -0xc);
      if (entryData == &g_nullStringRep) {
        i = 1;
      }
      else if (entryData == &g_nullStringRep) {
        i = 1;
      }
      else {
        *entryData = *entryData + -1;
        i = *entryData + 1;
      }
      if (i != 0) goto LAB_00412a9b;
    }
    unused15 = str6 + -0xc;
    unused14 = str6 + -0xc;
    operator_delete();
    unused13 = 0;
    unused12 = str2;
    str6 = 0;
    unused = 0;
  }
LAB_00412a9b:
  i = 1;
  entryData = (int *)(self + 0x18);
  do {
    sprintf((undefined1 *)valueNameBuf,&DAT_004ecb45 /* "%s%d" */);
    if (*(int *)(*entryData + -4) != 0) {
      ehContext = 0x50;
      std::string::string_from_cstr((int)str,(uint *)*entryData);
      ehDtorCount = ehDtorCount + 1;
      valueArg = str;
      std::string::string_from_cstr((int)valueName,valueNameBuf);
      ehDtorCount = ehDtorCount + 1;
      Persist::SetString((int)persist,(int)valueName,(int)valueArg);
      ehDtorCount = ehDtorCount + -1;
      if (str3 != 0) {
        if (*(int *)(str3 + -0xc) != -1) {
          strRep2 = (int *)(str3 + -0xc);
          if (strRep2 == &g_nullStringRep) {
            machineWide = 1;
          }
          else if (strRep2 == &g_nullStringRep) {
            machineWide = 1;
          }
          else {
            *strRep2 = *strRep2 + -1;
            machineWide = *strRep2 + 1;
          }
          if (machineWide != 0) goto LAB_00412bc6;
        }
        unused11 = str3 + -0xc;
        unused10 = str3 + -0xc;
        operator_delete();
        unused9 = 0;
        unused8 = valueName;
        str3 = 0;
      }
LAB_00412bc6:
      ehContext = 8;
      ehDtorCount = ehDtorCount + -1;
      if (str4 != 0) {
        if (*(int *)(str4 + -0xc) != -1) {
          strRep = (int *)(str4 + -0xc);
          if (strRep == &g_nullStringRep) {
            machineWide = 1;
          }
          else if (strRep == &g_nullStringRep) {
            machineWide = 1;
          }
          else {
            *strRep = *strRep + -1;
            machineWide = *strRep + 1;
          }
          if (machineWide != 0) goto LAB_00412c7b;
        }
        unused7 = str4 + -0xc;
        unused6 = str4 + -0xc;
        operator_delete();
        unused5 = 0;
        unused4 = str;
        str4 = 0;
      }
    }
LAB_00412c7b:
    i = i + 1;
    entryData = entryData + 4;
    if (9 < i) {
      ehDtorCount = ehDtorCount + -1;
      Persist::_dtor((int)persist,2);
      *sehChainHead = sehPrevFrame;
      return;
    }
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00412cf0  FileHistory::FileHistory   (1260 bytes)   [analysis]
//   constructor: reads the 10 entries from the registry (FileDictionary or FileCrossword, then %s%d for 1..9)
/* WARNING: Removing unreachable block (ram,0x00412e4d) */
/* WARNING: Removing unreachable block (ram,0x00412f6e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int * __cdecl FileHistory::FileHistory(int *self,int owner,int isCrossword)

{
  int *strRep;
  undefined4 *sehChainHead;
  int i;
  int machineWide;
  undefined1 *valueArg;
  uint valueNameBuf [15];
  undefined4 unused;
  undefined *unused2;
  undefined4 unused3;
  undefined1 *unused4;
  undefined4 unused5;
  undefined *unused6;
  undefined *unused7;
  undefined1 *unused8;
  undefined4 unused9;
  undefined *unused10;
  undefined *unused11;
  int *strRep2;
  undefined1 *unused12;
  undefined4 unused13;
  int unused14;
  int unused15;
  int *strRep3;
  undefined1 *unused16;
  undefined4 unused17;
  int unused18;
  int unused19;
  uint *valueBase;
  undefined1 *unused20;
  undefined4 unused21;
  int unused22;
  int unused23;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 valueName [8];
  int str;
  undefined1 value [8];
  undefined *valueData;
  undefined1 valueName2 [8];
  int str2;
  undefined1 keyPath [8];
  int keyPathData;
  undefined1 first [8];
  undefined *firstData;
  int persist [2];
  
  __InitExceptBlockLDTC(0x4ecdb8);
  ehContext = 8;
  _vector_new_ldtc_(self,0x10,10,1,(undefined*)std::string::string_412334);
  ehDtorCount = ehDtorCount + 10;
  self[0x28] = owner;
  self[0x29] = isCrossword;
  ehContext = 0x20;
  machineWide = 0;
  i = 0;
  GetProfileKeyPath((int)keyPath);
  ehDtorCount = ehDtorCount + 1;
  Persist::Persist(persist,(int)keyPath,i,machineWide);
  if (keyPathData != 0) {
    if (*(int *)(keyPathData + -0xc) != -1) {
      strRep = (int *)(keyPathData + -0xc);
      if (strRep == &g_nullStringRep) {
        i = 1;
      }
      else if (strRep == &g_nullStringRep) {
        i = 1;
      }
      else {
        *strRep = *strRep + -1;
        i = *strRep + 1;
      }
      if (i != 0) goto LAB_00412e08;
    }
    unused23 = keyPathData + -0xc;
    unused22 = keyPathData + -0xc;
    operator_delete();
    unused21 = 0;
    unused20 = keyPath;
    keyPathData = 0;
    unused3 = 0;
  }
LAB_00412e08:
  if (self[0x29] == 0) {
    valueBase = (uint *)"FileDictionary";
  }
  else {
    valueBase = (uint *)"FileCrossword";
  }
  firstData = &g_emptyStringData;
  unused2 = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 1;
  valueArg = first;
  ehContext = 0x50;
  std::string::string_from_cstr((int)valueName2,valueBase);
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryString((int)persist,(int)valueName2,(int)valueArg);
  ehDtorCount = ehDtorCount + -1;
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep = (int *)(str2 + -0xc);
      if (strRep == &g_nullStringRep) {
        i = 1;
      }
      else if (strRep == &g_nullStringRep) {
        i = 1;
      }
      else {
        *strRep = *strRep + -1;
        i = *strRep + 1;
      }
      if (i != 0) goto LAB_00412f16;
    }
    unused19 = str2 + -0xc;
    unused18 = str2 + -0xc;
    operator_delete();
    unused17 = 0;
    unused16 = valueName2;
    str2 = 0;
    unused = 0;
  }
LAB_00412f16:
  ehContext = 0x14;
  std::string::operator_assign((int)self,(int)first);
  i = 1;
  do {
    sprintf((undefined1 *)valueNameBuf,&DAT_004ecb45 /* "%s%d" */);
    valueData = &g_emptyStringData;
    ehDtorCount = ehDtorCount + 1;
    valueArg = value;
    ehContext = 0x8c;
    std::string::string_from_cstr((int)valueName,valueNameBuf);
    ehDtorCount = ehDtorCount + 1;
    Persist::QueryString((int)persist,(int)valueName,(int)valueArg);
    ehDtorCount = ehDtorCount + -1;
    if (str != 0) {
      if (*(int *)(str + -0xc) != -1) {
        strRep3 = (int *)(str + -0xc);
        if (strRep3 == &g_nullStringRep) {
          machineWide = 1;
        }
        else if (strRep3 == &g_nullStringRep) {
          machineWide = 1;
        }
        else {
          *strRep3 = *strRep3 + -1;
          machineWide = *strRep3 + 1;
        }
        if (machineWide != 0) goto LAB_00413055;
      }
      unused15 = str + -0xc;
      unused14 = str + -0xc;
      operator_delete();
      unused13 = 0;
      unused12 = valueName;
      str = 0;
    }
LAB_00413055:
    ehContext = 0x80;
    std::string::operator_assign((int)(self + i * 4),(int)value);
    ehDtorCount = ehDtorCount + -1;
    if (valueData != (undefined *)0x0) {
      if (*(int *)(valueData + -0xc) != -1) {
        strRep2 = (int *)(valueData + -0xc);
        if (strRep2 == &g_nullStringRep) {
          machineWide = 1;
        }
        else if (strRep2 == &g_nullStringRep) {
          machineWide = 1;
        }
        else {
          *strRep2 = *strRep2 + -1;
          machineWide = *strRep2 + 1;
        }
        if (machineWide != 0) goto LAB_00413115;
      }
      unused11 = valueData + -0xc;
      unused10 = valueData + -0xc;
      operator_delete();
      unused9 = 0;
      unused8 = value;
      valueData = (undefined *)0x0;
    }
LAB_00413115:
    ehContext = 0x14;
    i = i + 1;
  } while (i < 10);
  ehDtorCount = ehDtorCount + -1;
  if (firstData != (undefined *)0x0) {
    if (*(int *)(firstData + -0xc) != -1) {
      strRep = (int *)(firstData + -0xc);
      if (strRep == &g_nullStringRep) {
        i = 1;
      }
      else if (strRep == &g_nullStringRep) {
        i = 1;
      }
      else {
        *strRep = *strRep + -1;
        i = *strRep + 1;
      }
      if (i != 0) goto LAB_004131ac;
    }
    unused7 = firstData + -0xc;
    unused6 = firstData + -0xc;
    operator_delete();
    unused5 = 0;
    unused4 = first;
    firstData = (undefined *)0x0;
  }
LAB_004131ac:
  ehContext = 0x14;
  ehDtorCount = ehDtorCount + -1;
  Persist::_dtor((int)persist,2);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004131f8  FileHistory::~FileHistory   (76 bytes)   [rtti:dtor destructor]
//   written in code as FileHistory::_dtor
void __cdecl FileHistory::_dtor(int self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ece74);
  if (self != 0) {
    _vector_delete_ldtc_(self,0x10,10,1,(undefined*)std::string::_dtor);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
