// TSMerge.exe — runtime / library code "code_0x00444000"
// 33 functions, 0x00444058..0x00447fb8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00444058  FUN_00444058   (3214 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x0044409e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_00444058(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  HRSRC hResInfo;
  ushort *puVar2;
  uint uVar3;
  uint cchWideChar;
  int *strRep;
  LPCWSTR lpWideCharStr;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint uVar7;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  int iVar11;
  undefined1 exceptMsg [248];
  undefined4 unused;
  int *newData;
  undefined1 exceptMsg2 [248];
  undefined *unused2;
  undefined4 *unused3;
  undefined4 *unused4;
  undefined4 *dest;
  undefined4 *unused5;
  uint unused6;
  int unused7;
  int *newRep;
  int *newData2;
  int *strRep2;
  int unused8;
  undefined4 *unused9;
  undefined4 unused10;
  undefined4 *unused11;
  undefined4 *unused12;
  undefined4 *unused13;
  undefined4 *unused14;
  int *strRep3;
  undefined4 *dest2;
  undefined4 *unused15;
  uint unused16;
  int unused17;
  int *newRep2;
  int *newData3;
  uint len;
  int *strRep4;
  int unused18;
  undefined4 *unused19;
  undefined4 unused20;
  undefined4 *strRep5;
  int local_16c;
  undefined4 *strRep6;
  uint local_164;
  undefined1 s;
  uint local_15c;
  undefined1 *unused21;
  undefined4 unused22;
  int *unused23;
  int *unused24;
  int *strRep7;
  int *newData4;
  int *unused25;
  uint unused26;
  undefined1 *unused27;
  int *newRep3;
  int *unused28;
  uint len2;
  int *strRep8;
  undefined1 *unused29;
  int *unused30;
  undefined4 unused31;
  uint *msgText;
  uint local_10c;
  undefined1 *unused32;
  undefined4 unused33;
  int *unused34;
  int *unused35;
  int *strRep9;
  int *unused36;
  int *unused37;
  uint unused38;
  undefined1 *unused39;
  int *newRep4;
  int *unused40;
  uint len3;
  int *strRep10;
  undefined1 *unused41;
  int *unused42;
  undefined4 unused43;
  uint *msgText2;
  uint local_bc;
  LPSTR multiByteStr;
  LPSTR unused44;
  int local_b0;
  uint local_ac;
  HRSRC unused45;
  LPCSTR name;
  LPCSTR unused46;
  LPCSTR name2;
  LPCSTR unused47;
  WORD language;
  HGLOBAL hGlobal;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  int *str4;
  undefined1 str2 [8];
  int *str5;
  undefined **outOfRange [2];
  undefined1 newStr [8];
  int *unused48;
  undefined **lengthError [2];
  undefined1 newStr2 [8];
  int *unused49;
  LPSTR unused50;
  undefined1 str3 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x46f2c4);
  uVar3 = 0;
  local_c = (undefined4 *)&g_emptyStringData;
  unused2 = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x20;
  iVar11 = 0;
  puVar1 = (undefined4 *)FUN_0041147c();
  iVar11 = FUN_004116c4(puVar1,iVar11);
  if (iVar11 == 0) {
    language = 0;
  }
  else {
    language = *(WORD *)(iVar11 + 0x2f);
  }
  name2 = (LPCSTR)((param_3 >> 4) + 1);
  unused47 = name2;
  hResInfo = FindResourceExA(*(HMODULE *)(param_2 + 8),(LPCSTR)0x6,name2,language);
  if (hResInfo == (HRSRC)0x0) {
    name = (LPCSTR)((param_3 >> 4) + 1);
    unused46 = name;
    hResInfo = FindResourceA(*(HMODULE *)(param_2 + 8),name,(LPCSTR)0x6);
  }
  if (hResInfo == (HRSRC)0x0) {
    iVar11 = FUN_00443d84((LPCSTR)((param_3 >> 4) + 1),(LPCSTR)0x6);
    if (iVar11 != 0) {
      ehContext = 0xec;
      FUN_00444058(param_1,iVar11,param_3);
      ehContext = 0xf8;
      ehDtorCount = ehDtorCount + -1;
      if (local_c != (undefined4 *)0x0) {
        if (local_c[-3] != -1) {
          strRep = local_c + -3;
          if (strRep == &g_nullStringRep) {
            iVar11 = 1;
          }
          else if (strRep == &g_nullStringRep) {
            iVar11 = 1;
          }
          else {
            *strRep = *strRep + -1;
            iVar11 = *strRep + 1;
          }
          if (iVar11 != 0) goto LAB_00444b10;
        }
        unused12 = local_c + -3;
        unused11 = local_c + -3;
        operator_delete();
      }
LAB_00444b10:
      *sehChainHead = sehPrevFrame;
      return param_1;
    }
  }
  else {
    unused45 = hResInfo;
    hGlobal = LoadResource(*(HMODULE *)(param_2 + 8),hResInfo);
    if (hGlobal != (HGLOBAL)0x0) {
      puVar2 = LockResource(hGlobal);
      if (puVar2 != (ushort *)0x0) {
        local_ac = param_3 & 0xf;
        while( true ) {
          lpWideCharStr = (LPCWSTR)(puVar2 + 1);
          cchWideChar = (uint)*puVar2;
          uVar7 = local_ac - 1;
          if (local_ac == 0) break;
          puVar2 = (ushort *)((int)lpWideCharStr + cchWideChar * 2);
          local_ac = uVar7;
        }
        uVar3 = 0;
        local_ac = uVar7;
        if (cchWideChar != 0) {
          local_b0 = WideCharToMultiByte(0,0,lpWideCharStr,cchWideChar,(LPSTR)0x0,0,(LPCSTR)0x0,
                                         (LPBOOL)0x0);
          ehContext = 0x38;
          multiByteStr = (LPSTR)operator_new_array();
          ehDtorCount = ehDtorCount + 1;
          ehContext = 0x2c;
          unused44 = multiByteStr;
          unused50 = multiByteStr;
          uVar3 = WideCharToMultiByte(0,0,lpWideCharStr,cchWideChar,multiByteStr,local_b0 + 1,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
          local_bc = uVar3;
          if (g_stringNpos - 0xeU < uVar3) {
            throwLine = 0;
            throwFile = 0;
            throwFlags = 0;
            uVar7 = 1;
            copyCtor = &LAB_00402ee0;
            objectDtor = 0;
            ehContext = 0x50;
            msgText2 = (uint *)__rwstd::except_msg_string::format(exceptMsg2,
                                            PTR_s_invalid_string_size_parameter_in_00474068);
            std::string::string_from_cstr((int)str2,msgText2);
            ehDtorCount = ehDtorCount + 2;
            lengthError[0] = &std::logic_error::vftable;
            unused43 = 0;
            unused49 = (int *)0x0;
            ehContext = 0x5c;
            if (str5[-3] == -1 || str5[-3] + 1 < 0) {
              len3 = str5[-1];
              newRep4 = std::string::__getRep(newStr2,len3,len3);
              newData = newRep4 + 3;
              unused39 = newStr2;
              unused38 = len3;
              unused37 = str5;
              unused36 = newData;
              unused40 = newData;
              unused49 = newData;
              memcpy(newData,str5,len3);
            }
            else {
              unused42 = str5;
              unused49 = str5;
              unused41 = newStr2;
              strRep10 = str5 + -3;
              if (strRep10 != &g_nullStringRep) {
                *strRep10 = *strRep10 + 1;
              }
            }
            ehContext = 0x50;
            lengthError[0] = &std::length_error::vftable;
            ehDtorCount = ehDtorCount + 2;
            if (str5 != (int *)0x0) {
              if (str5[-3] != -1) {
                strRep9 = str5 + -3;
                if (strRep9 == &g_nullStringRep) {
                  iVar11 = 1;
                }
                else if (strRep9 == &g_nullStringRep) {
                  iVar11 = 1;
                }
                else {
                  *strRep9 = *strRep9 + -1;
                  iVar11 = *strRep9 + 1;
                }
                if (iVar11 != 0) goto LAB_00444486;
              }
              unused35 = str5 + -3;
              unused34 = str5 + -3;
              operator_delete();
              unused33 = 0;
              str5 = (int *)0x0;
              unused32 = str2;
              unused = 0;
            }
LAB_00444486:
            ehContext = 0x44;
            _ThrowExceptionLDTC((uint *)&DAT_00402e84,(undefined4*)lengthError,objectDtor,copyCtor,uVar7,throwFlags,throwFile,throwLine);
          }
          if (local_bc < (uint)local_c[-1]) {
            local_10c = local_c[-1] - local_bc;
            if ((uint)local_c[-1] < local_bc) {
              throwLine = 0;
              throwFile = 0;
              throwFlags = 0;
              uVar7 = 1;
              copyCtor = &LAB_00403038;
              objectDtor = 0;
              ehContext = 0x80;
              msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,
                                               PTR_s_string_index_out_of_range_in_fun_00474074);
              std::string::string_from_cstr((int)str,msgText);
              ehDtorCount = ehDtorCount + 2;
              outOfRange[0] = &std::logic_error::vftable;
              unused31 = 0;
              unused48 = (int *)0x0;
              ehContext = 0x8c;
              if (str4[-3] == -1 || str4[-3] + 1 < 0) {
                len2 = str4[-1];
                newRep3 = std::string::__getRep(newStr,len2,len2);
                newData4 = newRep3 + 3;
                unused27 = newStr;
                unused26 = len2;
                unused25 = str4;
                unused28 = newData4;
                unused48 = newData4;
                memcpy(newData4,str4,len2);
              }
              else {
                unused30 = str4;
                unused48 = str4;
                unused29 = newStr;
                strRep8 = str4 + -3;
                if (strRep8 != &g_nullStringRep) {
                  *strRep8 = *strRep8 + 1;
                }
              }
              ehContext = 0x80;
              outOfRange[0] = &std::out_of_range::vftable;
              ehDtorCount = ehDtorCount + 2;
              if (str4 != (int *)0x0) {
                if (str4[-3] != -1) {
                  strRep7 = str4 + -3;
                  if (strRep7 == &g_nullStringRep) {
                    iVar11 = 1;
                  }
                  else if (strRep7 == &g_nullStringRep) {
                    iVar11 = 1;
                  }
                  else {
                    *strRep7 = *strRep7 + -1;
                    iVar11 = *strRep7 + 1;
                  }
                  if (iVar11 != 0) goto LAB_00444718;
                }
                unused24 = str4 + -3;
                unused23 = str4 + -3;
                operator_delete();
                unused22 = 0;
                str4 = (int *)0x0;
                unused21 = str;
              }
LAB_00444718:
              ehContext = 0x44;
              _ThrowExceptionLDTC((uint *)&DAT_00402fdc,(undefined4*)outOfRange,objectDtor,copyCtor,uVar7,throwFlags,throwFile,throwLine);
            }
            local_15c = local_c[-1] - local_bc;
            s = 0;
            local_164 = local_15c;
            if (local_10c < local_15c) {
              local_164 = local_10c;
            }
            std::string::replace((int)str3,local_bc,local_164,(uint)&s,0,0,0);
          }
          else {
            std::string::replace_fill((int)str3,local_c[-1],0,local_bc - local_c[-1],0);
          }
          strRep6 = local_c + -3;
          if (strRep6 != &g_nullStringRep) {
            *strRep6 = 0;
          }
          iVar11 = 0;
          if (0 < (int)uVar3) {
            do {
              local_16c = iVar11;
              if (1 < local_c[-3] + 1) {
                std::string::__unshare((int)str3);
              }
              strRep5 = local_c + -3;
              if (strRep5 != &g_nullStringRep) {
                *strRep5 = 0xffffffff;
              }
              *(CHAR *)((int)local_c + local_16c) = multiByteStr[iVar11];
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)uVar3);
          }
          ehDtorCount = ehDtorCount + -1;
          operator_delete_array();
          ehContext = 0x20;
        }
      }
      FreeResource(hGlobal);
      if (uVar3 != 0) {
        ehContext = 0xbc;
        unused20 = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
          len = local_c[-1];
          newRep2 = std::string::__getRep(param_1,len,len);
          newData3 = newRep2 + 3;
          *(int **)(param_1 + 8) = newData3;
          unused17 = param_1;
          unused16 = len;
          unused15 = local_c;
          dest2 = *(undefined4 **)(param_1 + 8);
          memcpy(dest2,local_c,len);
        }
        else {
          unused19 = local_c;
          *(undefined4 **)(param_1 + 8) = local_c;
          unused18 = param_1;
          strRep4 = (int *)(*(int *)(param_1 + 8) + -0xc);
          if (strRep4 != &g_nullStringRep) {
            *strRep4 = *strRep4 + 1;
          }
        }
        ehContext = 0xd4;
        if (local_c != (undefined4 *)0x0) {
          if (local_c[-3] != -1) {
            strRep3 = local_c + -3;
            if (strRep3 == &g_nullStringRep) {
              iVar11 = 1;
            }
            else if (strRep3 == &g_nullStringRep) {
              iVar11 = 1;
            }
            else {
              *strRep3 = *strRep3 + -1;
              iVar11 = *strRep3 + 1;
            }
            if (iVar11 != 0) goto LAB_00444a25;
          }
          unused14 = local_c + -3;
          unused13 = local_c + -3;
          operator_delete();
        }
LAB_00444a25:
        *sehChainHead = sehPrevFrame;
        return param_1;
      }
    }
  }
  ehContext = 0x110;
  unused10 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar3 = local_c[-1];
    newRep = std::string::__getRep(param_1,uVar3,uVar3);
    newData2 = newRep + 3;
    *(int **)(param_1 + 8) = newData2;
    unused7 = param_1;
    unused5 = local_c;
    dest = *(undefined4 **)(param_1 + 8);
    unused6 = uVar3;
    memcpy(dest,local_c,uVar3);
  }
  else {
    unused9 = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    unused8 = param_1;
    strRep2 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (strRep2 != &g_nullStringRep) {
      *strRep2 = *strRep2 + 1;
    }
  }
  ehContext = 0x128;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      strRep = local_c + -3;
      if (strRep == &g_nullStringRep) {
        iVar11 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar11 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar11 = *strRep + 1;
      }
      if (iVar11 != 0) goto LAB_00444cc8;
    }
    unused4 = local_c + -3;
    unused3 = local_c + -3;
    operator_delete();
  }
LAB_00444cc8:
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00444ce8  FUN_00444ce8   (73 bytes)   [unnamed]
HACCEL __cdecl FUN_00444ce8(int param_1,LPCSTR name)

{
  HACCEL hAccel;
  int iVar2;
  
  hAccel = LoadAcceleratorsA(*(HINSTANCE *)(param_1 + 8),name);
  if (hAccel == (HACCEL)0x0) {
    iVar2 = FUN_00443d84(name,(LPCSTR)0x9);
    if (iVar2 != 0) {
      hAccel = FUN_00444ce8(iVar2,name);
      return hAccel;
    }
  }
  return hAccel;
}

// ----------------------------------------------------------------------------------------------------
// 0x00444d34  FUN_00444d34   (73 bytes)   [unnamed]
HMENU __cdecl FUN_00444d34(int param_1,LPCSTR name)

{
  HMENU hMenu;
  int iVar2;
  
  hMenu = LoadMenuA(*(HINSTANCE *)(param_1 + 8),name);
  if (hMenu == (HMENU)0x0) {
    iVar2 = FUN_00443d84(name,(LPCSTR)0x4);
    if (iVar2 != 0) {
      hMenu = FUN_00444d34(iVar2,name);
      return hMenu;
    }
  }
  return hMenu;
}

// ----------------------------------------------------------------------------------------------------
// 0x00444d80  FUN_00444d80   (73 bytes)   [unnamed]
HCURSOR __cdecl FUN_00444d80(int param_1,LPCSTR name)

{
  HCURSOR hCursor;
  int iVar2;
  
  hCursor = LoadCursorA(*(HINSTANCE *)(param_1 + 8),name);
  if (hCursor == (HCURSOR)0x0) {
    iVar2 = FUN_00443d84(name,(LPCSTR)0x1);
    if (iVar2 != 0) {
      hCursor = FUN_00444d80(iVar2,name);
      return hCursor;
    }
  }
  return hCursor;
}

// ----------------------------------------------------------------------------------------------------
// 0x00444dcc  FUN_00444dcc   (685 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x00444e2f) */
int * __cdecl FUN_00444dcc(int *param_1,int param_2,LPCSTR procName)

{
  uint *puVar1;
  uint pos;
  FARPROC procAddress;
  int prevRefs;
  char *len;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  int str4;
  undefined1 str2 [8];
  int str5;
  undefined1 str3 [8];
  undefined *local_c;
  
  __InitExceptBlockLDTC(0x46f444);
  procAddress = GetProcAddress(*(HMODULE *)(param_2 + 8),procName);
  *param_1 = (int)procAddress;
  if (*param_1 != 0) goto LAB_00445066;
  local_c = &g_emptyStringData;
  if ((short)((uint)procName >> 0x10) == 0) {
    FUN_00418548((int)str,0x7ff4,(uint)procName & 0xffff,DAT_00470a60);
    std::string::operator_assign((int)str3,(int)str);
    if (str4 != 0) {
      if (*(int *)(str4 + -0xc) != -1) {
        strRep = (int *)(str4 + -0xc);
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
        if (prevRefs != 0) goto LAB_00444fb4;
      }
      operator_delete();
      str4 = 0;
    }
  }
  else {
    FUN_00418444((int)str2,0x7ff5,procName,DAT_00470a60);
    std::string::operator_assign((int)str3,(int)str2);
    if (str5 != 0) {
      if (*(int *)(str5 + -0xc) != -1) {
        strRep = (int *)(str5 + -0xc);
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
        if (prevRefs != 0) goto LAB_00444fb4;
      }
      operator_delete();
      str5 = 0;
    }
  }
LAB_00444fb4:
  puVar1 = *(uint **)(param_2 + 4);
  pos = *(uint *)(local_c + -4);
  len = strlen(puVar1);
  std::string::replace((int)str3,pos,0,(uint)puVar1,(uint)len,0,(uint)len);
  FUN_00418210((int)str3,0);
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      strRep = (int *)(local_c + -0xc);
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
      if (prevRefs != 0) goto LAB_00445066;
    }
    operator_delete();
  }
LAB_00445066:
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044507c  FUN_0044507c   (95 bytes)   [unnamed]
undefined * __stdcall FUN_0044507c(void)

{
  HMODULE hModule;
  undefined4 *sehChainHead;
  char cVar2;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46f4bc);
  if (DAT_0046ee75 == '\0') {
    cVar2 = '\0';
    hModule = GetModuleHandleA("USER32");
    OWL::TModule::TModule_443bf8((undefined4 *)&DAT_004772c0,(uint *)"USER32",hModule,cVar2);
    DAT_0046ee75 = DAT_0046ee75 + '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_004772c0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004450dc  FUN_004450dc   (62 bytes)   [unnamed]
undefined4 __stdcall FUN_004450dc(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_0046ee76 == '\0') {
    puVar1 = FUN_0044507c();
    FUN_00444dcc((int *)&DAT_004772cd,(int)puVar1,"LoadIconA");
    DAT_0046ee76 = DAT_0046ee76 + '\x01';
  }
  uVar2 = ((code *)DAT_004772cd)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044511c  FUN_0044511c   (56 bytes)   [unnamed]
void __stdcall FUN_0044511c(void)

{
  undefined *puVar1;
  
  if (DAT_0046ee77 == '\0') {
    puVar1 = FUN_0044507c();
    FUN_00444dcc((int *)&DAT_004772d1,(int)puVar1,"DestroyIcon");
    DAT_0046ee77 = DAT_0046ee77 + '\x01';
  }
  ((code *)DAT_004772d1)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00445154  FUN_00445154   (68 bytes)   [unnamed]
undefined4 __stdcall FUN_00445154(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_0046ee78 == '\0') {
    puVar1 = FUN_0044507c();
    FUN_00444dcc((int *)&DAT_004772d5,(int)puVar1,"GetClassInfoA");
    DAT_0046ee78 = DAT_0046ee78 + '\x01';
  }
  uVar2 = ((code *)DAT_004772d5)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00445198  FUN_00445198   (91 bytes)   [unnamed]
undefined4 __stdcall FUN_00445198(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_0046ee79 == '\0') {
    puVar1 = FUN_0044507c();
    FUN_00444dcc((int *)&DAT_004772d9,(int)puVar1,"GetMenuStringA");
    DAT_0046ee79 = DAT_0046ee79 + '\x01';
  }
  uVar2 = ((code *)DAT_004772d9)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004454a8  FUN_004454a8   (83 bytes)   [unnamed]
void __cdecl FUN_004454a8(undefined4 param_1)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x46f58c);
  piVar1 = OWL::TXInvalidModule::TXInvalidModule(local_10,param_1);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00445640  FUN_00445640   (77 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_00445640(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46f5e8);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00445690  FUN_00445690   (45 bytes)   [unnamed]
void __cdecl FUN_00445690(int param_1,byte param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004456c0  InitRichEditStreamer_4456c0   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_4456c0(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46f60c);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004458e0;
  puVar1 = FUN_0045666c(1,0,0x4056d8);
  puVar2 = (uint *)FUN_0045677c((int)puVar1);
  FUN_00421cd4((undefined4 *)&DAT_00477328,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00445716  FUN_00445716   (48 bytes)   [unnamed]
void __stdcall FUN_00445716(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46f620);
  OWL::TStreamableClass::_dtor(0x477328,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004457f0  FUN_004457f0   (78 bytes)   [unnamed]
int * __cdecl FUN_004457f0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_00422c1c(param_1,(int *)&local_8,1);
  if (local_8 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *local_8;
  }
  puVar2 = FUN_004567e4((int)local_8,iVar1,(int *)&DAT_00404628,(int *)&DAT_004056d8,0);
  *param_2 = puVar2;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00445840  FUN_00445840   (26 bytes)   [unnamed]
int * __cdecl FUN_00445840(int *param_1,int *param_2)

{
  FUN_00422efc(param_1,param_2,1);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004458e0  FUN_004458e0   (134 bytes)   [unnamed]
undefined4 * __cdecl FUN_004458e0(int *module)

{
  undefined4 *streamer;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46f674);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if ((module == (int *)0x0) && (module = (int *)operator_new(), module != (int *)0x0)) {
      OWL::TModule::TModule_4457b0(module);
    }
    OWL::TModule::Streamer::Streamer(streamer,module);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
}

// ----------------------------------------------------------------------------------------------------
// 0x004459e8  FUN_004459e8   (191 bytes)   [unnamed]
uint * __cdecl FUN_004459e8(uint *param_1,uint param_2,uint *param_3,uint param_4,uint param_5,uint param_6, uint param_7,uint param_8,uint param_9)

{
  char *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46f6e4);
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_4;
  param_1[5] = param_8;
  param_1[6] = param_5;
  param_1[7] = param_6;
  if (param_7 == 0) {
    param_7 = 0x104;
  }
  param_1[8] = param_7;
  param_1[9] = param_9;
  uVar3 = operator_new_array();
  param_1[2] = uVar3;
  pcVar1 = (char *)param_1[2];
  *pcVar1 = '\0';
  FUN_00445b04(pcVar1,param_1,param_1,(int)param_1,param_3);
  *param_1 = *param_1 | 0x200000;
  bVar2 = FUN_004109c0();
  if (bVar2) {
    *param_1 = *param_1 | 0x80000;
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00445b04  FUN_00445b04   (179 bytes)   [unnamed]
char * FUN_00445b04(char *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint *param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint *puVar4;
  char *i;
  
  if (param_5 != (uint *)0x0) {
    operator_delete_array();
    pcVar1 = thunk_strchr((char *)param_5,'|');
    puVar4 = param_5;
    if (pcVar1 == (char *)0x0) {
      for (; (char)*puVar4 != '\0'; puVar4 = (uint *)((int)puVar4 + (int)(pcVar1 + 1))) {
        pcVar1 = strlen(puVar4);
      }
      uVar3 = operator_new_array();
      *(undefined4 *)(param_4 + 0xc) = uVar3;
      param_1 = (char *)memcpy(*(undefined4 **)(param_4 + 0xc),param_5,
                                     (int)puVar4 + (1 - (int)param_5));
    }
    else {
      pcVar1 = strlen(param_5);
      pcVar2 = (char *)operator_new_array();
      pcVar2 = FUN_00455bc0(pcVar2,(char *)param_5);
      *(char **)(param_4 + 0xc) = pcVar2;
      param_1 = *(char **)(param_4 + 0xc);
      param_1[(int)(pcVar1 + 1)] = '\0';
    }
  }
  if (*(int *)(param_4 + 0xc) != 0) {
    param_1 = *(char **)(param_4 + 0xc);
    for (i = *(char **)(param_4 + 0xc); *i != '\0'; i = i + 1) {
      if (*i == '|') {
        *i = '\0';
      }
      param_1 = i;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00445c00  FUN_00445c00   (217 bytes)   [unnamed]
void __cdecl FUN_00445c00(int *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  if ((*(UINT *)&DAT_0046f710) == 0) {
    (*(UINT *)&DAT_0046f710) = RegisterWindowMessageA("commdlg_ShareViolation");
  }
  memset(param_1 + 7,0,0x58);
  puVar1 = FUN_00410934();
  if (*(uint *)(puVar1 + 4) < 5) {
    iVar2 = 0x4c;
  }
  else {
    iVar2 = 0x58;
  }
  param_1[7] = iVar2;
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x14) + 0xc);
  }
  param_1[8] = iVar2;
  param_1[9] = *(int *)(*(int *)(*param_1 + 0x70) + 8);
  param_1[0x14] = *(uint *)param_1[0x1d] | 0x20;
  if (param_2 == 0) {
    param_1[0x14] = param_1[0x14] & 0xffffffbf;
  }
  else {
    param_1[0x19] = param_2;
    param_1[0x14] = param_1[0x14] | 0x40;
  }
  param_1[0x1c] = *(int *)(param_1[0x1d] + 0x24);
  param_1[0x18] = 0;
  param_1[10] = *(int *)(param_1[0x1d] + 0xc);
  param_1[0xd] = *(int *)(param_1[0x1d] + 0x14);
  param_1[0xe] = *(int *)(param_1[0x1d] + 8);
  param_1[0xf] = *(int *)(param_1[0x1d] + 0x20);
  param_1[0x12] = *(int *)(param_1[0x1d] + 0x18);
  param_1[0x16] = *(int *)(param_1[0x1d] + 0x1c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044730c  InitRichEditStreamer_44730c   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_44730c(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46fc3c);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_00447738;
  puVar1 = FUN_0045666c(1,0,0x42e134);
  puVar2 = (uint *)FUN_0045677c((int)puVar1);
  FUN_00421cd4((undefined4 *)&DAT_00477338,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00447362  FUN_00447362   (48 bytes)   [unnamed]
void __stdcall FUN_00447362(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46fc50);
  OWL::TStreamableClass::_dtor(0x477338,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044743c  FUN_0044743c   (78 bytes)   [unnamed]
int * __cdecl FUN_0044743c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_00422c1c(param_1,(int *)&local_8,1);
  if (local_8 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *local_8;
  }
  puVar2 = FUN_004567e4((int)local_8,iVar1,(int *)&DAT_00404628,(int *)&DAT_0042e134,0);
  *param_2 = puVar2;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044748c  FUN_0044748c   (26 bytes)   [unnamed]
int * __cdecl FUN_0044748c(int *param_1,int *param_2)

{
  FUN_00422efc(param_1,param_2,1);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004474ae  FUN_004474ae   (333 bytes)   [unnamed]
int __stdcall FUN_004474ae(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + 8) + 8);
  *(int *)(unaff_EBP + -4) = iVar1 + 0x3b;
  *(int *)(unaff_EBP + -8) = iVar1 + 0x3a;
  *(int *)(unaff_EBP + -0xc) = iVar1 + 0x39;
  *(int *)(unaff_EBP + -0x10) = iVar1 + 0x38;
  *(int *)(unaff_EBP + -0x14) = iVar1 + 0x34;
  *(int *)(unaff_EBP + -0x18) = iVar1 + 0x30;
  *(int *)(unaff_EBP + -0x1c) = iVar1 + 0x2c;
  *(int *)(unaff_EBP + -0x20) = iVar1 + 0x28;
  *(int *)(unaff_EBP + -0x24) = iVar1 + 0x14;
  *(int *)(unaff_EBP + -0x28) = iVar1 + 0x10;
  *(int *)(unaff_EBP + -0x2c) = iVar1 + 0x24;
  *(int *)(unaff_EBP + -0x30) = iVar1 + 0x20;
  *(int *)(unaff_EBP + -0x34) = iVar1 + 0xc;
  piVar2 = *(int **)(unaff_EBP + 0xc);
  FUN_0042280c(piVar2,iVar1 + 8,4);
  FUN_0042280c(piVar2,*(undefined4 *)(unaff_EBP + -0x34),4);
  uVar3 = FUN_00422908(piVar2);
  **(uint **)(unaff_EBP + -0x30) = uVar3;
  uVar3 = FUN_00422908(piVar2);
  **(uint **)(unaff_EBP + -0x2c) = uVar3;
  FUN_0042280c(piVar2,*(undefined4 *)(unaff_EBP + -0x28),4);
  FUN_0042280c(piVar2,*(undefined4 *)(unaff_EBP + -0x24),4);
  uVar3 = FUN_00422908(piVar2);
  **(uint **)(unaff_EBP + -0x20) = uVar3;
  uVar3 = FUN_00422908(piVar2);
  **(uint **)(unaff_EBP + -0x1c) = uVar3;
  uVar3 = FUN_00422908(piVar2);
  **(uint **)(unaff_EBP + -0x18) = uVar3;
  uVar3 = FUN_00422908(piVar2);
  **(uint **)(unaff_EBP + -0x14) = uVar3;
  iVar4 = FUN_00422970(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -0x10) = iVar4 != 0;
  iVar4 = FUN_00422970(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -0xc) = iVar4 != 0;
  iVar4 = FUN_00422970(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -8) = iVar4 != 0;
  iVar4 = FUN_00422970(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -4) = iVar4 != 0;
  iVar4 = FUN_00422970(piVar2);
  *(bool *)(iVar1 + 0x3c) = iVar4 != 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00447738  FUN_00447738   (134 bytes)   [unnamed]
undefined4 * __cdecl FUN_00447738(int *scroller)

{
  undefined4 *streamer;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46fca4);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if ((scroller == (int *)0x0) && (scroller = (int *)operator_new(), scroller != (int *)0x0)) {
      OWL::TScroller::TScroller(scroller);
    }
    OWL::TScroller::Streamer::Streamer(streamer,scroller);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
}

// ----------------------------------------------------------------------------------------------------
// 0x00447ac4  InitRichEditStreamer_447ac4   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_447ac4(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46fe48);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_00447d30;
  puVar1 = FUN_0045666c(1,0,0x4054c8);
  puVar2 = (uint *)FUN_0045677c((int)puVar1);
  FUN_00421cd4((undefined4 *)&DAT_00477348,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00447b1a  FUN_00447b1a   (48 bytes)   [unnamed]
void __stdcall FUN_00447b1a(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46fe5c);
  OWL::TStreamableClass::_dtor(0x477348,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00447cd0  EvRegisteredMsg_447cd0_447cd0   (47 bytes)   [owl:response-table message-handler]
//   message id 0 in the static table (filled at run time or WM_NULL)
//   also: OWL::TStatic::Streamer::vf1 [rtti:vtable]
undefined4 __cdecl EvRegisteredMsg_447cd0_447cd0(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  FUN_00431c3c(*(int *)(param_1 + 8),param_2);
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = FUN_00422908(param_2);
  *(uint *)(iVar1 + 0x14) = uVar2;
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x00447d30  FUN_00447d30   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_00447d30(int *param_1)

{
  undefined4 *streamer;
  int *static_;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46feb0);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      static_ = (int *)operator_new();
      if (static_ == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        OWL::TStatic::TStatic_447bb4(static_,0);
        param_1 = (int *)static_[2];
      }
    }
    OWL::TStatic::Streamer::Streamer(streamer,param_1);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
}

// ----------------------------------------------------------------------------------------------------
// 0x00447f84  EvNCHitTest_447f84   (49 bytes)   [owl:response-table message-handler]
//   WM_NCHITTEST
undefined4 __cdecl EvNCHitTest_447f84(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = FUN_00447fb8(param_1,param_2,&local_8);
  if (iVar1 != 1) {
    local_8 = FUN_0042b294(*param_1);
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x00447fb8  FUN_00447fb8   (495 bytes)   [unnamed]
undefined4 __cdecl FUN_00447fb8(int *param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int i;
  tagRECT *pRect;
  LONG *pLVar6;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38 [4];
  tagRECT rect;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  char local_6;
  char local_5;
  
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_0042d3ec(*param_1);
    local_5 = (uVar3 & 0x10000) != 0;
    local_6 = (uVar3 & 0x20000) != 0;
    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;
    FUN_0042d52c(*param_1,&rect);
    pRect = &rect;
    pLVar6 = local_38;
    for (i = 4; i != 0; i = i + -1) {
      *pLVar6 = pRect->left;
      pRect = (tagRECT *)&pRect->top;
      pLVar6 = pLVar6 + 1;
    }
    local_14 = param_2[1] - local_38[1];
    local_18 = *param_2 - local_38[0];
    local_10 = local_18;
    local_c = local_14;
    if (((uVar3 & 0x80000) != 0) || ((char)param_1[8] != '\0')) {
      FUN_0044993c(&local_48,param_1);
      if ((local_10 < local_48) ||
         (((local_40 <= local_10 || (local_c < local_44)) || (local_3c <= local_c)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *param_3 = 3;
        return 1;
      }
    }
    if (local_6 != '\0') {
      FUN_0044998c(&local_58,param_1);
      if (((local_10 < local_58) || (local_50 <= local_10)) ||
         ((local_c < local_54 || (local_4c <= local_c)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *param_3 = 8;
        return 1;
      }
    }
    if (local_5 != '\0') {
      FUN_004499f8(&local_68,param_1);
      if (((local_10 < local_68) || (local_60 <= local_10)) ||
         ((local_c < local_64 || (local_5c <= local_c)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *param_3 = 9;
        return 1;
      }
    }
    FUN_00449888(&local_78,param_1);
    if ((((local_10 < local_78) || (local_70 <= local_10)) || (local_c < local_74)) ||
       (local_6c <= local_c)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *param_3 = 2;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

} // namespace tea
