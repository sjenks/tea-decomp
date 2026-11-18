// TEA.exe — application module "Common"
// 6 functions, 0x00485ee0..0x0048622c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00485ee0  Common::~Common   (201 bytes)   [rtti:dtor destructor]
//   written in code as Common::_dtor
void __cdecl Common::_dtor(int self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x503a68);
  if (self == 0) goto LAB_00485f99;
  if (*(int *)(self + m_pathData) != 0) {
    if (*(int *)(*(int *)(self + m_pathData) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + m_pathData) + -0xc);
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
      if (prevRefs != 0) goto LAB_00485f89;
    }
    operator_delete();
    *(undefined4 *)(self + m_pathData) = 0;
  }
LAB_00485f89:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_00485f99:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00485fac  Common::ReadLicense   (172 bytes)   [analysis]
//   reads LicenseOwner and LicenseKey from the [License] section of common.ini: 0 no file named, 1 not found, 2 both read
undefined4 __cdecl Common::ReadLicense(int self,int owner,int key)

{
  undefined4 uVar1;
  DWORD DVar2;
  uint returnedString [256];
  uint local_404 [256];
  
  if (*(int *)(*(int *)(self + m_pathData) + -4) == 0) {
    uVar1 = 0;
  }
  else {
    DVar2 = GetPrivateProfileStringA
                      ("License","LicenseOwner","License" + 7,
                       (LPSTR)local_404,0x3ff,*(LPCSTR *)(self + m_pathData));
    if ((DVar2 != 0) &&
       (DVar2 = GetPrivateProfileStringA
                          ("License","LicenseKey","License" + 7,
                           (LPSTR)returnedString,0x3ff,*(LPCSTR *)(self + m_pathData)), DVar2 != 0)) {
      std::string::assign_cstr(owner,local_404);
      std::string::assign_cstr(key,returnedString);
      return 2;
    }
    uVar1 = 1;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00486058  Common::WriteLicense   (68 bytes)   [analysis]
//   writes LicenseOwner and LicenseKey to the [License] section of common.ini
void __cdecl Common::WriteLicense(int self,int owner,int key)

{
  if (*(int *)(*(LPCSTR *)(self + m_pathData) + -4) != 0) {
    WritePrivateProfileStringA
              ("License","LicenseOwner",*(LPCSTR *)(owner + 8),
               *(LPCSTR *)(self + m_pathData));
    WritePrivateProfileStringA
              ("License","LicenseKey",*(LPCSTR *)(key + 8),
               *(LPCSTR *)(self + m_pathData));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048609c  CheckLicenseKey3   (21 bytes)   [analysis]
//   CheckLicenseKeyImpl (third entry point)
//   file placement: inferred (address adjacency)
undefined4 __cdecl CheckLicenseKey3(byte *owner,char *key)

{
  bool bVar1;
  undefined3 regHigh;
  
  bVar1 = CheckLicenseKeyImpl(owner,key);
  return CONCAT31(regHigh,bVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004860b4  CheckLicenseKeyImpl   (374 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00414888. licence check: hashes "TEAWIN" and the letters of the owner name (upper-cased, last to first) with LicenseHashByte, then compares each derived letter with the 10-letter key
//   file placement: inferred (address adjacency)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
bool __cdecl CheckLicenseKeyImpl(byte *owner,char *key)

{
  int isLetter;
  uint ch;
  byte keyChar;
  byte *p;
  byte *q;
  char *keyAt;
  int letterCount;
  
  DAT_0051aeb4 = 0;
  _DAT_0051aeb0 = 0;
  for (p = PTR_s_TEAWIN_00503a90; *p != 0; p = p + 1) {
    LicenseHashByte(*p,&DAT_0051aeb0,&DAT_00503a88);
  }
  letterCount = 0;
  for (p = owner; *p != 0; p = p + 1) {
  }
  while (owner < p) {
    p = p + -1;
    keyChar = *p;
    ch = (uint)keyChar;
    isLetter = FUN_004e1394((uint)keyChar);
    if (isLetter != 0) {
      ch = toupper((uint)keyChar);
    }
    isLetter = isalnum(ch & 0xff);
    if (isLetter != 0) {
      letterCount = letterCount + 1;
      LicenseHashByte((byte)ch,&DAT_0051aeb0,&DAT_00503a88);
    }
  }
  p = owner;
  keyAt = key;
  if (0 < letterCount) {
    do {
      do {
        while (q = p, *q != 0) {
          p = q + 1;
        }
        p = owner;
      } while (q <= owner);
      do {
        q = q + -1;
        keyChar = *q;
        ch = (uint)keyChar;
        isLetter = FUN_004e1394((uint)keyChar);
        if (isLetter != 0) {
          ch = toupper((uint)keyChar);
        }
        isLetter = isalnum(ch & 0xff);
        if (isLetter != 0) {
          keyChar = (byte)((char)ch + -0x41 + (char)((ulonglong)DAT_0051aeb4 % 0x1a)) % 0x1a + 0x41
          ;
          if (((uint)keyChar != (int)*keyAt) &&
             (ch = tolower((uint)keyChar), ch != (int)*keyAt)) {
            return false;
          }
          keyAt = keyAt + 1;
          LicenseHashByte(keyChar,&DAT_0051aeb0,&DAT_00503a88);
          if (keyAt == key + 10) {
            return *keyAt == '\0';
          }
        }
      } while (owner < q);
    } while( true );
  }
  return false;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048622c  LicenseHashByte   (129 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00414a00. feeds one byte into the 64-bit licence hash: shift left, XOR the polynomial when the outgoing bit differs from the input bit
//   file placement: inferred (address adjacency)
void __cdecl LicenseHashByte(byte input,byte *state,byte *polynomial)

{
  byte topByte;
  int k;
  byte *p;
  byte *q;
  uint carry;
  int bit;
  
  bit = 0;
  do {
    topByte = *state;
    carry = 0;
    k = 7;
    p = state + 7;
    do {
      carry = (uint)*p * 2 + (uint)(carry != 0);
      k = k + -1;
      *p = (byte)carry;
      p = p + -1;
      carry = carry & 0x100;
    } while (-1 < k);
    if (((topByte ^ input) & 0x80) != 0) {
      k = 0;
      p = polynomial;
      q = state;
      do {
        *q = *q ^ *p;
        k = k + 1;
        q = q + 1;
        p = p + 1;
      } while (k < 8);
    }
    input = input << 1;
    bit = bit + 1;
  } while (bit < 8);
  return;
}

} // namespace tea
