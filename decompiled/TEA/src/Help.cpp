// TEA.exe — application module "Help"
// 2 functions, 0x00485b70..0x00485bb8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00485b70  Help::~Help   (72 bytes)   [rtti:dtor destructor]
//   written in code as Help::_dtor
void __cdecl Help::_dtor(int *self,byte dtorFlags)

{
  if (self != (int *)0x0) {
    if (self[1] != 0) {
      (*(code *)self[1])();
      if (*self != 0) {
        (*(code *)self[1])();
        FreeLibrary((HMODULE)*self);
      }
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00485bb8  GetCommonIniPath   (784 bytes)   [analysis]
//   SHGetFolderPathA folder + subdirectory + "\common.ini" when that folder exists; empty otherwise
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00485bff) */
/* WARNING: Removing unreachable block (ram,0x00485ca3) */
/* WARNING: Removing unreachable block (ram,0x00485d64) */
/* WARNING: Removing unreachable block (ram,0x00485d2c) */
/* WARNING: Removing unreachable block (ram,0x00485d5d) */
/* WARNING: Removing unreachable block (ram,0x00485dbf) */
/* WARNING: Removing unreachable block (ram,0x00485de3) */
/* WARNING: Removing unreachable block (ram,0x00485dee) */
/* WARNING: Removing unreachable block (ram,0x00485e12) */
/* WARNING: Removing unreachable block (ram,0x00485dfc) */
/* WARNING: Removing unreachable block (ram,0x00485e0b) */
/* WARNING: Removing unreachable block (ram,0x00485e04) */
/* WARNING: Removing unreachable block (ram,0x00485e17) */
/* WARNING: Removing unreachable block (ram,0x00485e1b) */
/* WARNING: Removing unreachable block (ram,0x00485e69) */
int __cdecl GetCommonIniPath(int result,int subdir)

{
  uint len2;
  int iVar2;
  char *len;
  uint uVar4;
  undefined4 *sehChainHead;
  uint s [67];
  undefined4 unused;
  undefined1 local_df [143];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  
  __InitExceptBlockLDTC(0x5039fc);
  ehContext = 8;
  *(undefined4 *)(result + 8) = 0;
  *(undefined **)(result + 8) = &g_emptyStringData;
  unused = *(undefined4 *)(result + 8);
  ehDtorCount = ehDtorCount + 1;
  iVar2 = import_SHGetFolderPathA();
  if (iVar2 == 0) {
    std::string::assign_cstr(result,s);
    std::string::append(result,subdir);
    iVar2 = thunk_access(*(LPCSTR *)(result + 8),0);
    if (iVar2 == 0) {
      len2 = *(uint *)(*(int *)(result + 8) + -4);
      len = strlen((uint *)"\\common.ini");
      std::string::replace(result,len2,0,0x503990,(uint)len,0,(uint)len);
    }
    else {
      len2 = *(uint *)(*(int *)(result + 8) + -4);
      local_df[0] = 0;
      uVar4 = g_stringNpos;
      if (len2 <= g_stringNpos) {
        uVar4 = len2;
      }
      std::string::replace(result,0,uVar4,(uint)local_df,0,0,0);
    }
  }
  *sehChainHead = sehPrevFrame;
  return result;
}

} // namespace tea
