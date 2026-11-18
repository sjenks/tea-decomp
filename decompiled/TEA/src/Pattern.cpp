// TEA.exe — application module "Pattern"
// 5 functions, 0x00434b30..0x00434cb8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00434b30  Pattern::Pattern   (89 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040dae0. constructor: count=0 and 256 empty 16-byte strings
undefined4 * __cdecl Pattern::Pattern(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f311c);
  *self = 0;
  _vector_new_ldtc_(self + m_pool / 4,0x10,0x100,1,(undefined*)std::string::string);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434ba4  Pattern::~Pattern   (100 bytes)   [rtti:dtor destructor]
//   written in code as Pattern::_dtor
void __cdecl Pattern::_dtor(int self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f3140);
  if (self != 0) {
    _vector_delete_ldtc_(self + m_pool,0x10,0x100,1,(undefined*)std::string::_dtor);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434c08  Pattern::Add   (161 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040dbb8. returns the index of an equal entry or appends (capacity 256)
int __cdecl Pattern::Add(int *self,int str)

{
  uint len;
  uint pos;
  int index;
  int i;
  
  i = 0;
  do {
    if (*self <= i) {
      if (*self < 0x100) {
        std::string::assign((int)(self + *self * 4 + 2),str);
        index = *self;
        *self = *self + 1;
      }
      else {
        index = -1;
      }
      return index;
    }
    len = *(uint *)(*(int *)(str + 8) + -4);
    if (len == *(uint *)(self[i * 4 + 4] + -4)) {
      pos = 0;
      if (len != 0) {
        do {
          if (*(char *)(*(int *)(str + 8) + pos) !=
              *(char *)(self[i * 4 + 4] + pos)) break;
          pos = pos + 1;
        } while (pos < len);
      }
      if (len <= pos) {
        return i;
      }
    }
    i = i + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00434cac  Pattern::Clear   (12 bytes)   [analysis]
//   empties the pool
void __cdecl Pattern::Clear(undefined4 *self)

{
  *self = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434cb8  Pattern::At   (21 bytes)   [analysis]
//   the pooled string at `index`
int __cdecl Pattern::At(int self,byte index)

{
  return self + (uint)index * 0x10 + 8;
}

} // namespace tea
