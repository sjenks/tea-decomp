// TEACON.exe — application module "Persist"
// 8 functions, 0x0041193c..0x00411dd8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041193c  Persist::Persist   (201 bytes)   [analysis]
//   opens or creates the registry key (RegOpenKeyExA / RegCreateKeyExA)
char * __cdecl Persist::Persist(char *self,int keyPath,char create,char tryLocalMachine)

{
  HKEY hRoot;
  int iVar1;
  undefined4 *sehChainHead;
  DWORD disposition;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x42df7c);
  *self = create;
  self[m_hKey] = '\0';
  self[5] = '\0';
  self[6] = '\0';
  self[7] = '\0';
  while( true ) {
    if (tryLocalMachine == '\0') {
      hRoot = (HKEY)0x80000001;
    }
    else {
      hRoot = (HKEY)0x80000002;
    }
    ehContext = 8;
    if (*self == '\x01') {
      iVar1 = RegCreateKeyExA(hRoot,*(LPCSTR *)(keyPath + 8),0,&DAT_0042defe,0,0x2001f,
                              (LPSECURITY_ATTRIBUTES)0x0,(PHKEY)(self + m_hKey),&disposition);
    }
    else {
      iVar1 = RegOpenKeyExA(hRoot,*(LPCSTR *)(keyPath + 8),0,0x20019,(PHKEY)(self + m_hKey));
    }
    if (iVar1 == 0) break;
    if (tryLocalMachine == '\0') {
      self[m_hKey] = '\0';
      self[5] = '\0';
      self[6] = '\0';
      self[7] = '\0';
      *sehChainHead = sehPrevFrame;
LAB_004119f3:
      *sehChainHead = sehPrevFrame;
      return self;
    }
    tryLocalMachine = '\0';
  }
  *sehChainHead = sehPrevFrame;
  goto LAB_004119f3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411a20  Persist::~Persist   (42 bytes)   [rtti:dtor destructor]
//   written in code as Persist::_dtor
void __cdecl Persist::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    if (*(HKEY *)(self + m_hKey) != (HKEY)0x0) {
      RegCloseKey(*(HKEY *)(self + m_hKey));
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411a4c  Persist::QueryString   (116 bytes)   [analysis]
//   reads a REG_SZ value (up to 64 KB) into a std::string; true if present
undefined4 __cdecl Persist::QueryString(int self,int valueName,int out)

{
  int probe;
  LSTATUS regStatus;
  uint buf [15352];
  undefined4 retAddr;
  DWORD typeAndSize [2];
  
  probe = 0x10;
  do {
    probe = probe + -1;
  } while (probe != 0);
  if (*(int *)(self + m_hKey) != 0) {
    typeAndSize[1] = 0x10000;
    typeAndSize[0] = 1;
    retAddr = 0x411a9e;
    regStatus = RegQueryValueExA(*(HKEY *)(self + m_hKey),*(LPCSTR *)(valueName + 8),(LPDWORD)0x0,typeAndSize,
                             (LPBYTE)buf,typeAndSize + 1);
    if (regStatus == 0) {
      probe = std::string::assign_cstr(out,buf);
      return CONCAT31((int3)((uint)probe >> 8),1);
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411ac0  Persist::QueryDword   (83 bytes)   [analysis]
//   reads a REG_DWORD value; true if present
undefined4 __cdecl Persist::QueryDword(int self,int valueName,undefined4 *out)

{
  LSTATUS regStatus;
  DWORD typeAndSize [2];
  undefined4 value;
  
  if (*(int *)(self + m_hKey) != 0) {
    typeAndSize[1] = 4;
    typeAndSize[0] = 4;
    regStatus = RegQueryValueExA(*(HKEY *)(self + m_hKey),*(LPCSTR *)(valueName + 8),(LPDWORD)0x0,typeAndSize,
                             (LPBYTE)&value,typeAndSize + 1);
    if (regStatus == 0) {
      *out = value;
      return CONCAT31((int3)((uint)out >> 8),1);
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411b14  Persist::QueryFont   (364 bytes)   [analysis]
//   reads a font value ("height width escapement ... facename") into a LOGFONT; the default text is used when the value is absent
undefined4 __cdecl Persist::QueryFont(int self,int valueName,int defaultText,uint *logFont)

{
  uint len;
  undefined4 found;
  int refs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 text [8];
  int *textData;
  
  __InitExceptBlockLDTC(0x42dfb0);
  textData = (int *)0x0;
  refs = *(int *)(*(int *)(defaultText + 8) + -0xc);
  if (refs == -1 || refs + 1 < 0) {
    len = *(uint *)(*(int *)(defaultText + 8) + -4);
    textData = std::string::__getRep(text,len,len);
    textData = textData + 3;
    memcpy(textData,*(undefined4 **)(defaultText + 8),len);
  }
  else {
    textData = *(int **)(defaultText + 8);
    strRep = textData + -3;
    if (strRep != &g_nullStringRep) {
      *strRep = *strRep + 1;
    }
  }
  found = Persist::QueryString(self,valueName,(int)text);
  ParseLogFont((char *)textData,logFont);
  if (textData != (int *)0x0) {
    if (textData[-3] != -1) {
      strRep = textData + -3;
      if (strRep == &g_nullStringRep) {
        refs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        refs = 1;
      }
      else {
        *strRep = *strRep + -1;
        refs = *strRep + 1;
      }
      if (refs != 0) goto LAB_00411c6e;
    }
    operator_delete();
  }
LAB_00411c6e:
  *sehChainHead = sehPrevFrame;
  return found;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411c80  Persist::QueryColour   (248 bytes)   [analysis]
//   reads a colour value ("r g b") into a COLORREF; true if present
/* WARNING: Removing unreachable block (ram,0x00411cbe) */
uint __cdecl Persist::QueryColour(int self,int valueName,uint *colour)

{
  char found;
  undefined4 result;
  uint ret;
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 text [8];
  char *textData;
  
  __InitExceptBlockLDTC(0x42e008);
  textData = &g_emptyStringData;
  result = Persist::QueryString(self,valueName,(int)text);
  found = (char)result;
  if (found == '\x01') {
    result = ParseColour(textData,colour);
  }
  ret = CONCAT31((int3)((uint)result >> 8),found);
  if (textData != (char *)0x0) {
    if (*(int *)(textData + -0xc) != -1) {
      strRep = (int *)(textData + -0xc);
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
      if (prevRefs != 0) goto LAB_00411d66;
    }
    operator_delete();
  }
LAB_00411d66:
  *sehChainHead = sehPrevFrame;
  return ret;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411d78  ParseColour   (95 bytes)   [analysis]
//   "r g b" -> COLORREF (r | g << 8 | b << 16)
//   file placement: inferred (address adjacency)
uint * __cdecl ParseColour(char *text,uint *colour)

{
  byte red;
  char *token;
  uint green;
  uint blue;
  int value;
  
  token = strtok(text,g_fieldSeparators);
  if (token == (char *)0x0) {
    red = 0;
  }
  else {
    value = atoi(token);
    red = (byte)value;
  }
  green = NextTokenInt();
  blue = NextTokenInt();
  *colour = (uint)red | (green & 0xff) << 8 | (blue & 0xff) << 0x10;
  return colour;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411dd8  ParseLogFont   (186 bytes)   [analysis]
//   space-separated LOGFONT fields (height, width, escapement, orientation, weight, italic, underline, strikeout, charset, out/clip precision, quality, pitch) then the face name
//   file placement: inferred (address adjacency)
void __cdecl ParseLogFont(char *text,uint *logFont)

{
  uint value;
  int byteValue;
  uint *faceName;
  
  memset(logFont,0,0x40);
  ParseColour(text,logFont);
  value = NextTokenInt();
  logFont[1] = value;
  value = NextTokenInt();
  logFont[2] = value;
  value = NextTokenInt();
  logFont[3] = value;
  value = NextTokenInt();
  logFont[4] = value;
  value = NextTokenInt();
  logFont[5] = value;
  byteValue = NextTokenInt();
  *(char *)(logFont + 6) = (char)byteValue;
  byteValue = NextTokenInt();
  *(char *)((int)logFont + 0x19) = (char)byteValue;
  byteValue = NextTokenInt();
  *(char *)((int)logFont + 0x1a) = (char)byteValue;
  byteValue = NextTokenInt();
  *(char *)((int)logFont + 0x1b) = (char)byteValue;
  byteValue = NextTokenInt();
  *(char *)(logFont + 7) = (char)byteValue;
  byteValue = NextTokenInt();
  *(char *)((int)logFont + 0x1d) = (char)byteValue;
  byteValue = NextTokenInt();
  *(char *)((int)logFont + 0x1e) = (char)byteValue;
  byteValue = NextTokenInt();
  *(char *)((int)logFont + 0x1f) = (char)byteValue;
  faceName = (uint *)strtok((char *)0x0,g_fieldSeparators);
  if (faceName == (uint *)0x0) {
    *(undefined1 *)(logFont + 8) = 0;
  }
  else {
    strncpy(logFont + 8,faceName,(char *)0x20);
  }
  return;
}

} // namespace tea
