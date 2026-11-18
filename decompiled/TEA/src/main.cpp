// TEA.exe — application module "main"
// 2 functions, 0x0043b544..0x0043b7a8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043b544  ExpandQueryMacros   (612 bytes)   [notes+analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041130c. replaces unescaped @ and # with the configured expansions; \x pairs are copied verbatim
/* WARNING: Removing unreachable block (ram,0x0043b585) */
int __cdecl ExpandQueryMacros(int result,int expansions,int query)

{
  uint len;
  char ch;
  int queryLen;
  int i;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 out [8];
  undefined4 *outData;
  
  __InitExceptBlockLDTC(0x4f4abc);
  outData = (undefined4 *)&g_emptyStringData;
  queryLen = *(int *)(*(int *)(query + 8) + -4);
  i = 0;
  if (0 < queryLen) {
    do {
      ch = *(char *)(*(int *)(query + 8) + i);
      if ((ch == '@') && (*(int *)(*(int *)(expansions + 8) + -4) != 0)) {
        std::string::append((int)out,expansions);
      }
      else if ((ch == '#') && (*(int *)(*(int *)(expansions + 0x18) + -4) != 0)) {
        std::string::append((int)out,expansions + 0x10);
      }
      else {
        if ((ch == '\\') && (i + 1 < queryLen)) {
          std::string::replace_fill((int)out,outData[-1],0,1,0x5c);
          i = i + 1;
          ch = *(char *)(*(int *)(query + 8) + i);
        }
        std::string::replace_fill((int)out,outData[-1],0,1,ch);
      }
      i = i + 1;
    } while (i < queryLen);
  }
  *(undefined4 *)(result + 8) = 0;
  if (outData[-3] == -1 || outData[-3] + 1 < 0) {
    len = outData[-1];
    rep = std::string::__getRep(result,len,len);
    *(int **)(result + 8) = rep + 3;
    memcpy(*(undefined4 **)(result + 8),outData,len);
  }
  else {
    *(undefined4 **)(result + 8) = outData;
    rep = (int *)(*(int *)(result + 8) + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  if (outData != (undefined4 *)0x0) {
    if (outData[-3] != -1) {
      rep = outData + -3;
      if (rep == &g_nullStringRep) {
        queryLen = 1;
      }
      else if (rep == &g_nullStringRep) {
        queryLen = 1;
      }
      else {
        *rep = *rep + -1;
        queryLen = *rep + 1;
      }
      if (queryLen != 0) goto LAB_0043b78d;
    }
    operator_delete();
  }
LAB_0043b78d:
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043b7a8  LoadPatternOptions   (926 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00411570. reads ExpansionAt, ExpansionHash, VariablesExclusive, IgnoreUnusedPunctuation from the registry profile
//   file placement: inferred (address adjacency)
void __cdecl LoadPatternOptions(int options,int param_2)

{
  uint found;
  int out;
  int *strRep;
  undefined4 *sehChainHead;
  char missing;
  undefined4 *out2;
  undefined4 sehPrevFrame;
  undefined1 valueName [8];
  int str;
  undefined1 valueName2 [8];
  int str2;
  undefined1 valueName3 [8];
  int str3;
  undefined1 valueName4 [8];
  int str4;
  int persist [2];
  
  __InitExceptBlockLDTC(0x4f4b78);
  Persist::Persist(persist,param_2,0,0);
  out = options;
  std::string::string_from_cstr((int)valueName4,(uint *)"ExpansionAt");
  found = Persist::QueryString((int)persist,(int)valueName4,out);
  missing = (found & 0xff) == 0;
  if (str4 != 0) {
    if (*(int *)(str4 + -0xc) != -1) {
      strRep = (int *)(str4 + -0xc);
      if (strRep == &g_nullStringRep) {
        out = 1;
      }
      else if (strRep == &g_nullStringRep) {
        out = 1;
      }
      else {
        *strRep = *strRep + -1;
        out = *strRep + 1;
      }
      if (out != 0) goto LAB_0043b893;
    }
    operator_delete();
    str4 = 0;
  }
LAB_0043b893:
  if (missing != '\0') {
    std::string::assign_cstr(options,(uint *)"[aeiou]");
  }
  out = options + 0x10;
  std::string::string_from_cstr((int)valueName3,(uint *)"ExpansionHash");
  found = Persist::QueryString((int)persist,(int)valueName3,out);
  missing = (found & 0xff) == 0;
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      strRep = (int *)(str3 + -0xc);
      if (strRep == &g_nullStringRep) {
        out = 1;
      }
      else if (strRep == &g_nullStringRep) {
        out = 1;
      }
      else {
        *strRep = *strRep + -1;
        out = *strRep + 1;
      }
      if (out != 0) goto LAB_0043b96a;
    }
    operator_delete();
    str3 = 0;
  }
LAB_0043b96a:
  if (missing != '\0') {
    std::string::assign_cstr(options + 0x10,(uint *)"[^aeiou]");
  }
  out2 = &g_exclusiveVariables;
  std::string::string_from_cstr((int)valueName2,(uint *)"VariablesExclusive");
  found = Persist::QueryDword((int)persist,(int)valueName2,out2);
  missing = (found & 0xff) == 0;
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep = (int *)(str2 + -0xc);
      if (strRep == &g_nullStringRep) {
        out = 1;
      }
      else if (strRep == &g_nullStringRep) {
        out = 1;
      }
      else {
        *strRep = *strRep + -1;
        out = *strRep + 1;
      }
      if (out != 0) goto LAB_0043ba45;
    }
    operator_delete();
    str2 = 0;
  }
LAB_0043ba45:
  if (missing != '\0') {
    g_exclusiveVariables = 1;
  }
  out2 = (undefined4 *)(options + 0x20);
  std::string::string_from_cstr((int)valueName,(uint *)"IgnoreUnusedPunctuation");
  found = Persist::QueryDword((int)persist,(int)valueName,out2);
  missing = (found & 0xff) == 0;
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      strRep = (int *)(str + -0xc);
      if (strRep == &g_nullStringRep) {
        out = 1;
      }
      else if (strRep == &g_nullStringRep) {
        out = 1;
      }
      else {
        *strRep = *strRep + -1;
        out = *strRep + 1;
      }
      if (out != 0) goto LAB_0043bb18;
    }
    operator_delete();
    str = 0;
  }
LAB_0043bb18:
  if (missing != '\0') {
    *(undefined4 *)(options + 0x20) = 1;
  }
  Persist::_dtor((int)persist,2);
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
