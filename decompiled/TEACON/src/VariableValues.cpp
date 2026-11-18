// TEACON.exe — application module "VariableValues"
// 8 functions, 0x0040d97c..0x0040edbc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0040d97c  VariableValues::Bind   (74 bytes)   [analysis]
//   binds variable 0..9 to a letter if unbound (0xfe) and, when exclusive, not already used
bool __cdecl VariableValues::Bind(int var,char letter)

{
  int taken;
  
  if ((*(char *)&g_varsActive) == '\0') {
    VariableValues::Clear();
  }
  if (((&g_varValues)[var] == -2) && (taken = VariableValues::IsLetterBound(letter), taken == 0)) {
    (&g_varValues)[var] = letter;
    return true;
  }
  return letter == (&g_varValues)[var];
}

// ----------------------------------------------------------------------------------------------------
// 0x0040d9c8  VariableValues::Get   (27 bytes)   [analysis]
//   pointer to the binding slot for one variable
undefined1 * __cdecl VariableValues::Get(int var)

{
  if ((*(char *)&g_varsActive) == '\0') {
    VariableValues::Clear();
  }
  return &g_varValues + var;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040d9e4  VariableValues::IsLetterBound   (45 bytes)   [analysis]
//   true when the exclusive option is on and another variable already holds this letter
undefined4 __cdecl VariableValues::IsLetterBound(char letter)

{
  char *i;
  
  if (g_exclusiveVariables != 0) {
    for (i = &g_varValues; i < &DAT_00434692; i = i + 1) {
      if (letter == *i) {
        return 1;
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040da14  VariableValues::Clear   (25 bytes)   [analysis]
//   marks all ten variables unbound (0xfe)
void __stdcall VariableValues::Clear(void)

{
  undefined1 *value;
  int i;
  
  i = 0;
  value = &g_varValues;
  do {
    *value = 0xfe;
    i = i + 1;
    value = value + 1;
  } while (i < 10);
  g_varsActive = 1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040da30  VariableValues::Save   (32 bytes)   [analysis]
//   copies the ten bindings into a snapshot
void __cdecl VariableValues::Save(undefined1 *snapshot)

{
  undefined1 *value;
  int i;
  
  i = 0;
  value = &g_varValues;
  do {
    snapshot = snapshot + 1;
    *snapshot = *value;
    i = i + 1;
    value = value + 1;
  } while (i < 10);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040da50  VariableValues::Restore   (37 bytes)   [analysis]
//   restores the ten bindings from a snapshot
void __cdecl VariableValues::Restore(undefined1 *snapshot)

{
  int i;
  undefined1 *value;
  
  g_varsActive = 1;
  i = 0;
  value = &g_varValues;
  do {
    snapshot = snapshot + 1;
    *value = *snapshot;
    i = i + 1;
    value = value + 1;
  } while (i < 10);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ed84  VariableValues::~VariableValues   (53 bytes)   [rtti:dtor destructor]
//   written in code as VariableValues::_dtor
void __cdecl VariableValues::_dtor(char *self,byte dtorFlags)

{
  if (self != (char *)0x0) {
    if (*self == '\0') {
      g_varsActive = 0;
    }
    else if (*self == '\x01') {
      VariableValues::Restore(self);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040edbc  FilterWordByCaseMode   (1200 bytes)   [analysis]
//   copies a word under a mode: 0 unchanged, 1 every character, 2 letters only, 3 letters lower-cased, 4 letters upper-cased; characters >= 0x80 are replaced by their expansion from g_charExpansions
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0040eee1) */
int __cdecl FilterWordByCaseMode(int result,int word_,char mode)

{
  uint ch;
  char *len;
  int isLetter;
  int *rep;
  uint *expansion;
  undefined4 *sehChainHead;
  byte *p;
  undefined4 sehPrevFrame;
  undefined1 out [8];
  undefined4 *outData;
  
  __InitExceptBlockLDTC(0x42d364);
  if (mode == '\0') {
    *(undefined4 *)(result + 8) = 0;
    isLetter = *(int *)(*(int *)(word_ + 8) + -0xc);
    if (isLetter == -1 || isLetter + 1 < 0) {
      ch = *(uint *)(*(int *)(word_ + 8) + -4);
      rep = std::string::__getRep(result,ch,ch);
      *(int **)(result + 8) = rep + 3;
      memcpy(*(undefined4 **)(result + 8),*(undefined4 **)(word_ + 8),ch);
    }
    else {
      *(undefined4 *)(result + 8) = *(undefined4 *)(word_ + 8);
      rep = (int *)(*(int *)(result + 8) + -0xc);
      if (rep != &g_nullStringRep) {
        *rep = *rep + 1;
      }
    }
    *sehChainHead = sehPrevFrame;
    return result;
  }
  outData = (undefined4 *)&g_emptyStringData;
  for (p = *(byte **)(word_ + 8);
      (byte *)(*(int *)(word_ + 8) + *(int *)(*(int *)(word_ + 8) + -4)) != p;
      p = p + 1) {
    if (*p < 0x80) {
      if (mode == '\x01') {
        std::string::replace_fill((int)out,outData[-1],0,1,*p);
      }
      else if (mode == '\x02') {
        isLetter = isalpha((int)(char)*p);
        if (isLetter != 0) {
          std::string::replace_fill((int)out,outData[-1],0,1,*p);
        }
      }
      else if (mode == '\x03') {
        isLetter = isalpha((int)(char)*p);
        if (isLetter != 0) {
          ch = tolower((int)(char)*p);
          std::string::replace_fill((int)out,outData[-1],0,1,(char)ch);
        }
      }
      else if ((mode == '\x04') && (isLetter = isalpha((int)(char)*p), isLetter != 0)) {
        ch = toupper((int)(char)*p);
        std::string::replace_fill((int)out,outData[-1],0,1,(char)ch);
      }
    }
    else {
      expansion = *(uint **)(&g_charExpansions + (uint)*p * 4);
      if (expansion != (uint *)0x0) {
        if ((mode == '\x01') || (mode == '\x02')) {
          ch = outData[-1];
          len = strlen(expansion);
          std::string::replace((int)out,ch,0,(uint)expansion,(uint)len,0,(uint)len);
        }
        else {
          for (; (char)*expansion != '\0'; expansion = (uint *)((int)expansion + 1)) {
            if (mode == '\x03') {
              ch = tolower((int)(char)*expansion);
              std::string::replace_fill((int)out,outData[-1],0,1,(char)ch);
            }
            else {
              ch = toupper((int)(char)*expansion);
              std::string::replace_fill((int)out,outData[-1],0,1,(char)ch);
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(result + 8) = 0;
  if (outData[-3] == -1 || outData[-3] + 1 < 0) {
    ch = outData[-1];
    rep = std::string::__getRep(result,ch,ch);
    *(int **)(result + 8) = rep + 3;
    memcpy(*(undefined4 **)(result + 8),outData,ch);
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
        isLetter = 1;
      }
      else if (rep == &g_nullStringRep) {
        isLetter = 1;
      }
      else {
        *rep = *rep + -1;
        isLetter = *rep + 1;
      }
      if (isLetter != 0) goto LAB_0040f251;
    }
    operator_delete();
  }
LAB_0040f251:
  *sehChainHead = sehPrevFrame;
  return result;
}

} // namespace tea
