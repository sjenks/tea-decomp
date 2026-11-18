// TEACON.exe — application module "Common"
// 2 functions, 0x00414ddc..0x00414ea8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00414ddc  Common::~Common   (201 bytes)   [rtti:dtor destructor]
//   written in code as Common::_dtor
void __cdecl Common::_dtor(int self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42e810);
  if (self == 0) goto LAB_00414e95;
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
      if (prevRefs != 0) goto LAB_00414e85;
    }
    operator_delete();
    *(undefined4 *)(self + m_pathData) = 0;
  }
LAB_00414e85:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_00414e95:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414ea8  Common::ReadLicense   (163 bytes)   [analysis]
//   reads LicenseOwner and LicenseKey from the [License] section of the file at self's path: 0 no file named, 1 not found, 2 both read
undefined4 __cdecl Common::ReadLicense(int self,int owner,int key)

{
  undefined4 result;
  DWORD len;
  int assigned;
  uint keyBuf [256];
  uint ownerBuf [256];
  
  if (*(int *)(*(int *)(self + m_pathData) + -4) == 0) {
    result = 0;
  }
  else {
    len = GetPrivateProfileStringA
                      ("License","LicenseOwner",&DAT_0042e763,(LPSTR)ownerBuf,
                       0x3ff,*(LPCSTR *)(self + m_pathData));
    if ((len != 0) &&
       (len = GetPrivateProfileStringA
                          ("License","LicenseKey",&DAT_0042e764,(LPSTR)keyBuf,
                           0x3ff,*(LPCSTR *)(self + m_pathData)), len != 0)) {
      std::string::assign_cstr(owner,ownerBuf);
      assigned = std::string::assign_cstr(key,keyBuf);
      return CONCAT31((int3)((uint)assigned >> 8),2);
    }
    result = 1;
  }
  return result;
}

} // namespace tea
