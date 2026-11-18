// TEA.exe — application module "MatchListWindows"
// 108 functions, 0x004292c0..0x004313f8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004292c0  MatchListWindows::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: MatchListWindows::Find [rtti:vtable]; MatchListWindows::vf8 [rtti:vtable]
undefined4 __cdecl MatchListWindows::Find(undefined4 *self,int *eventInfo,undefined *equal)

{
  undefined4 found;
  
  eventInfo[2] = (int)self;
  found = FUN_0048e808(self[1],(int *)&MatchListWindows::__entries,eventInfo,equal);
  if (((char)found == '\0') && (found = OWL::TControl::Find(self,eventInfo,equal), (char)found == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429308  MatchListWindows::MatchListWindows   (1402 bytes)   [rtti:vtable-store constructor]
//   constructor: stores MatchListWindows's vtable at its vptr offset (+0xc) in this
/* WARNING: Removing unreachable block (ram,0x00429568) */
/* WARNING: Removing unreachable block (ram,0x00429690) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff98 : 0x00429698 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int * __cdecl MatchListWindows::MatchListWindows(int *self,int vbasesBuilt,undefined4 *parent,int ctlId,int *bounds)

{
  uint exStyle;
  undefined4 parentHandle;
  int *tree;
  undefined4 *header;
  undefined4 *sehChainHead;
  int local_60;
  int local_5c;
  undefined4 sehPrevFrame;
  int emptyGroup [3];
  undefined4 *scroller;
  
  __InitExceptBlockLDTC(0x4f23d0);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x4e);
    self[0x4e] = (int)(self + 0x4b);
    self[0x4f] = (int)(self + 0x4c);
    self[1] = (int)(self + 0x4b);
    self[2] = (int)(self + 0x4c);
    self[0x4a] = 0;
    self[0x4d] = 0;
    self[0x4b] = (int)&OWL::TEventHandler::vftable;
    self[0x4c] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x4e,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x114;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x114;
  if (parent == (undefined4 *)0x0) {
    parentHandle = 0;
  }
  else {
    parentHandle = *parent;
  }
  OWL::TControl::TControl(self,1,parentHandle,ctlId,(uint *)"MatchList",*bounds,bounds[1],
               bounds[2] - *bounds,bounds[3] - bounds[1],0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x114;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x114;
  self[3] = (int)&MatchListWindows::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004f2c68;
  *(undefined ***)self[2] = &PTR_LAB_004f2c74;
  *(undefined ***)(*self + 8) = &MatchListWindows::vftable_TWindow;
  tree = self + 6;
  self[10] = 0;
  self[0xf] = 0;
  self[0x10] = 0;
  *(undefined1 *)(self + 0x11) = 0;
  *tree = 1;
  self[10] = 0;
  self[0xe] = 0;
  self[0xd] = 0;
  self[0xc] = 0;
  header = (undefined4 *)self[0xc];
  if (self[0xc] == 0) {
    if (self[0xd] == self[0xe]) {
      MatchListWindows::SelectionTree::AddNodeBuffer(tree);
      header = (undefined4 *)self[0xd];
      self[0xd] = self[0xd] + 0x14;
    }
    else {
      header = (undefined4 *)self[0xd];
      self[0xd] = self[0xd] + 0x14;
    }
  }
  else {
    self[0xc] = *(int *)(self[0xc] + 0xc);
  }
  header[1] = 0;
  header[2] = 0;
  header[3] = 0;
  *header = 0;
  self[0xf] = (int)header;
  *(undefined4 *)(self[0xf] + 4) = 0;
  *(int *)(self[0xf] + 8) = self[0xf];
  *(int *)(self[0xf] + 0xc) = self[0xf];
  *tree = 0x100;
  self[0x15] = 0;
  self[0x16] = 0;
  self[0x1a] = 0;
  self[0x14] = 0x55;
  tree = self + 0x1e;
  self[0x22] = 0;
  self[0x27] = 0;
  self[0x28] = 0;
  *(undefined1 *)(self + 0x29) = 0;
  self[0x2a] = local_60;
  self[0x2b] = local_5c;
  *tree = 1;
  self[0x22] = 0;
  self[0x26] = 0;
  self[0x25] = 0;
  self[0x24] = 0;
  header = (undefined4 *)self[0x24];
  if (self[0x24] == 0) {
    if (self[0x25] == self[0x26]) {
      MatchListWindows::EntryTree::AddNodeBuffer(tree);
      header = (undefined4 *)self[0x25];
      self[0x25] = self[0x25] + 0x18;
    }
    else {
      header = (undefined4 *)self[0x25];
      self[0x25] = self[0x25] + 0x18;
    }
  }
  else {
    self[0x24] = *(int *)(self[0x24] + 0xc);
  }
  header[1] = 0;
  header[2] = 0;
  header[3] = 0;
  *header = 0;
  self[0x27] = (int)header;
  *(undefined4 *)(self[0x27] + 4) = 0;
  *(int *)(self[0x27] + 8) = self[0x27];
  *(int *)(self[0x27] + 0xc) = self[0x27];
  *tree = 0x80;
  self[0x2c] = -2;
  self[0x2d] = 0;
  self[0x2e] = 0;
  self[0x31] = 0;
  self[0x32] = 0;
  self[0x36] = 0;
  self[0x30] = 0x100;
  self[0x38] = (int)parent;
  self[0x39] = 0;
  self[0x3a] = 0;
  self[0x3b] = ctlId;
  self[0x3c] = 0;
  self[0x3d] = 0;
  self[0x3e] = 0;
  self[0x3f] = 0;
  self[0x40] = 0;
  self[0x41] = -1;
  self[0x42] = 2;
  self[0x43] = -1;
  self[0x44] = -1;
  self[0x45] = 0;
  self[0x46] = 0;
  self[0x47] = 0;
  self[0x48] = 0;
  std::vector_EntryHead::reserve((int)(self + 0x14),0x200);
  *(uint *)(*self + 0x18) = *(uint *)(*self + 0x18) | 0x200000;
  *(uint *)(*self + 0x18) = *(uint *)(*self + 0x18) | 0x100000;
  exStyle = FUN_004a793c(*self);
  FUN_004a795c(*self,exStyle | 0x200);
  scroller = (undefined4 *)operator_new();
  if (scroller != (undefined4 *)0x0) {
    MyScroller::MyScroller(scroller,*self,1,1,0,0);
  }
  *(undefined4 **)(*self + 0x44) = scroller;
  *(undefined1 *)(scroller + 0xe) = 1;
  *(undefined1 *)((int)scroller + 0x3a) = 0;
  emptyGroup[0] = 0;
  emptyGroup[1] = 0;
  emptyGroup[2] = 0;
  if (self[0x16] == self[0x1a]) {
    std::vector_EntryHead::insert_aux((int)(self + 0x14),(int *)self[0x16],emptyGroup);
  }
  else {
    if ((undefined4 *)self[0x16] != (undefined4 *)0x0) {
      MatchListWindows::EntryHead::EntryHead_move((undefined4 *)self[0x16],emptyGroup);
    }
    self[0x16] = self[0x16] + 0xc;
  }
  MatchListWindows::EntryHead::Clear(emptyGroup);
  self[0x1c] = 0;
  self[0x45] = 0;
  self[0x46] = 0;
  self[0x47] = 0;
  self[0x48] = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429928  MatchListWindows::SelectionTree::AddNodeBuffer   (297 bytes, 2 ranges)   [analysis]
//   rb-tree node pool: allocates another buffer of 20-byte nodes and links it into the buffer list
//   file placement: inferred (address adjacency)
void __cdecl MatchListWindows::SelectionTree::AddNodeBuffer(int *tree)

{
  int *buffer;
  int nodes;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  undefined **badAlloc2;
  
  __InitExceptBlockLDTC(0x4f24a8);
  buffer = (int *)operator_new();
  if (buffer == (int *)0x0) {
    badAlloc2 = &std::bad_alloc::vftable;
    _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc2,0,&LAB_00404134,1,0,0,0);
  }
  nodes = operator_new();
  if (nodes == 0) {
    badAlloc = &std::bad_alloc::vftable;
    _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
  }
  buffer[2] = nodes;
  *buffer = tree[4];
  buffer[1] = *tree;
  tree[4] = (int)buffer;
  nodes = *(int *)(tree[4] + 8);
  tree[7] = nodes;
  tree[8] = nodes + *tree * 0x14;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429a74  MatchListWindows::EntryTree::AddNodeBuffer   (297 bytes, 2 ranges)   [analysis]
//   rb-tree node pool: allocates another buffer of 24-byte nodes and links it into the buffer list
//   file placement: inferred (address adjacency)
void __cdecl MatchListWindows::EntryTree::AddNodeBuffer(int *tree)

{
  int *buffer;
  int nodes;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  undefined **badAlloc2;
  
  __InitExceptBlockLDTC(0x4f2514);
  buffer = (int *)operator_new();
  if (buffer == (int *)0x0) {
    badAlloc2 = &std::bad_alloc::vftable;
    _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc2,0,&LAB_00404134,1,0,0,0);
  }
  nodes = operator_new();
  if (nodes == 0) {
    badAlloc = &std::bad_alloc::vftable;
    _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
  }
  buffer[2] = nodes;
  *buffer = tree[4];
  buffer[1] = *tree;
  tree[4] = (int)buffer;
  nodes = *(int *)(tree[4] + 8);
  tree[7] = nodes;
  tree[8] = nodes + *tree * 0x18;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429bc0  std::vector_EntryHead::reserve   (799 bytes, 2 ranges)   [analysis]
//   reserve(n) for the vector of 12-byte length-group heads (throws length_error past max_size)
//   file placement: inferred (address adjacency)
void __cdecl std::vector_EntryHead::reserve(int vec,uint n)

{
  uint len;
  undefined4 *last;
  undefined4 *first;
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [240];
  undefined4 *dest;
  undefined1 *unused;
  undefined4 unused2;
  int *unused3;
  int *unused4;
  int *newData;
  int *unused5;
  uint unused6;
  undefined1 *unused7;
  int *newRep;
  int *unused8;
  undefined1 *unused9;
  int *unused10;
  undefined4 unused11;
  uint *msgText;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined **badAlloc;
  undefined1 str [8];
  int *str2;
  undefined **lengthError [2];
  undefined1 newStr [8];
  int *unused12;
  
  __InitExceptBlockLDTC(0x4f259c);
  if (n < 0x15555556) goto LAB_00429db5;
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  copyCtorMask = 1;
  copyCtor = &LAB_00408370;
  objectDtor = 0;
  ehContext = 0x14;
  msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_invalid_string_size_parameter_in_00516d20);
  std::string::string_from_cstr((int)str,msgText);
  ehDtorCount = ehDtorCount + 2;
  lengthError[0] = &std::logic_error::vftable;
  unused11 = 0;
  unused12 = (int *)0x0;
  ehContext = 0x20;
  if (str2[-3] == -1 || str2[-3] + 1 < 0) {
    len = str2[-1];
    newRep = std::string::__getRep(newStr,len,len);
    unused7 = newStr;
    newData = newRep + 3;
    unused5 = str2;
    unused6 = len;
    unused8 = newData;
    unused12 = newData;
    memcpy(newData,str2,len);
  }
  else {
    unused9 = newStr;
    unused10 = str2;
    unused12 = str2;
    strRep = str2 + -3;
    if (strRep != &g_nullStringRep) {
      *strRep = *strRep + 1;
    }
  }
  ehContext = 0x14;
  lengthError[0] = &std::length_error::vftable;
  ehDtorCount = ehDtorCount + 2;
  if (str2 != (int *)0x0) {
    if (str2[-3] != -1) {
      strRep = str2 + -3;
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
      if (prevRefs != 0) goto LAB_00429d9e;
    }
    unused4 = str2 + -3;
    unused3 = str2 + -3;
    operator_delete();
    unused2 = 0;
    unused = str;
    str2 = (int *)0x0;
  }
LAB_00429d9e:
  ehContext = 8;
  _ThrowExceptionLDTC((uint *)&DAT_00408314,(undefined4*)lengthError,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
LAB_00429db5:
  if ((uint)((*(int *)(vec + 0x18) - *(int *)(vec + 4)) / 0xc) < n) {
    dest = (undefined4 *)operator_new();
    if (dest == (undefined4 *)0x0) {
      ehContext = 0x44;
      badAlloc = &std::bad_alloc::vftable;
      ehDtorCount = ehDtorCount + 2;
      _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
    }
    ehContext = 0x50;
    std::uninitialized_copy_EntryHead(*(undefined4 **)(vec + 4),*(undefined4 **)(vec + 8),dest);
    ehContext = 0;
    last = *(undefined4 **)(vec + 8);
    first = *(undefined4 **)(vec + 4);
    std::_Destroy_range_EntryHead(vec,first,last);
    operator_delete();
    *(undefined4 **)(vec + 8) = dest + (((int)last - (int)first) / 0xc) * 3;
    *(undefined4 **)(vec + 4) = dest;
    *(undefined4 **)(vec + 0x18) = dest + n * 3;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429f04  std::uninitialized_copy_EntryHead   (117 bytes, 2 ranges)   [analysis]
//   copy-constructs 12-byte EntryHead objects into raw storage
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::uninitialized_copy_EntryHead(undefined4 *first,undefined4 *last,undefined4 *dest)

{
  undefined4 *src;
  undefined4 *dst;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f2628);
  while (dst = dest, src = first, last != src) {
    first = src + 3;
    dest = dst + 3;
    if (dst != (undefined4 *)0x0) {
      MatchListWindows::EntryHead::EntryHead_move(dst,src);
    }
  }
  *sehChainHead = sehPrevFrame;
  return dst;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429fa0  std::_Destroy_range_12   (22 bytes)   [analysis]
//   destroys a range of 12-byte objects with trivial destructors (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_12(int first,int last)

{
  for (; last != first; first = first + 0xc) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429fb8  std::_Destroy_range_EntryHead   (67 bytes)   [analysis]
//   destroys the EntryHead objects in [first, last)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_EntryHead(undefined4 vec,undefined4 *first,undefined4 *last)

{
  undefined4 *p;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f2654);
  while (p = first, last != p) {
    first = p + 3;
    if (p != (undefined4 *)0x0) {
      MatchListWindows::EntryHead::Clear(p);
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429ffc  std::vector_EntryHead::insert_aux   (513 bytes, 2 ranges)   [analysis]
//   std::vector<EntryHead> insert at a position, growing the storage (doubling, at least 85) when full
//   file placement: inferred (address adjacency)
void __cdecl std::vector_EntryHead::insert_aux(int vec,int *pos,int *value)

{
  undefined4 *oldEnd;
  undefined4 *oldBegin;
  int newCapacity;
  undefined4 *storage;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  undefined4 *end;
  
  __InitExceptBlockLDTC(0x4f26b8);
  end = *(undefined4 **)(vec + 8);
  if (end == *(undefined4 **)(vec + 0x18)) {
    newCapacity = (*(int *)(vec + 8) - *(int *)(vec + 4)) / 0xc;
    if (newCapacity == 0) {
      newCapacity = 0x55;
    }
    else {
      newCapacity = newCapacity * 2;
    }
    storage = (undefined4 *)operator_new();
    if (storage == (undefined4 *)0x0) {
      badAlloc = &std::bad_alloc::vftable;
      _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
    }
    std::uninitialized_copy_EntryHead(*(undefined4 **)(vec + 4),pos,storage);
    if (storage + (((int)pos - *(int *)(vec + 4)) / 0xc) * 3 != (undefined4 *)0x0) {
      MatchListWindows::EntryHead::EntryHead_move(storage + (((int)pos - *(int *)(vec + 4)) / 0xc) * 3,value);
    }
    std::uninitialized_copy_EntryHead(pos,*(undefined4 **)(vec + 8),
                 storage + (((int)pos - *(int *)(vec + 4)) / 0xc) * 3 + 3);
    oldEnd = *(undefined4 **)(vec + 8);
    oldBegin = *(undefined4 **)(vec + 4);
    std::_Destroy_range_EntryHead(vec,oldBegin,oldEnd);
    operator_delete();
    *(undefined4 **)(vec + 0x18) = storage + newCapacity * 3;
    *(undefined4 **)(vec + 8) = storage + (((int)oldEnd - (int)oldBegin) / 0xc) * 3 + 3;
    *(undefined4 **)(vec + 4) = storage;
  }
  else {
    if (end != (undefined4 *)0x0) {
      MatchListWindows::EntryHead::EntryHead_move(end,end + -3);
    }
    std::copy_backward_EntryHead(pos,*(int **)(vec + 8) + -3,*(int **)(vec + 8));
    MatchListWindows::EntryHead::operator_assign(pos,value);
    *(int *)(vec + 8) = *(int *)(vec + 8) + 0xc;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a220  std::copy_backward_EntryHead   (46 bytes)   [analysis]
//   copy_backward over EntryHead objects
//   file placement: inferred (address adjacency)
int * __cdecl std::copy_backward_EntryHead(int *first,int *last,int *destEnd)

{
  while (last != first) {
    last = last + -3;
    destEnd = destEnd + -3;
    MatchListWindows::EntryHead::operator_assign(destEnd,last);
  }
  return destEnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a250  MatchListWindows::~MatchListWindows   (522 bytes)   [rtti:dtor destructor]
//   written in code as MatchListWindows::_dtor
void __cdecl MatchListWindows::_dtor(int *self,uint dtorFlags)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 firstLo;
  undefined4 firstHi;
  undefined4 result [4];
  undefined4 result2 [4];
  int unused;
  int firstNode;
  int unused2;
  int firstNode2;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int local_c;
  
  __InitExceptBlockLDTC(0x4f2718);
  if (self != (int *)0x0) {
    ehContext = 8;
    self[3] = (int)&MatchListWindows::vftable;
    *(undefined ***)self[1] = &PTR_LAB_004f2c68;
    *(undefined ***)self[2] = &PTR_LAB_004f2c74;
    *(undefined ***)(*self + 8) = &MatchListWindows::vftable_TWindow;
    local_c = 8;
    std::_Destroy_range_ptr_42a45c(self + 0x30,self[0x31],self[0x32]);
    operator_delete();
    local_c = local_c + -2;
    if (self[0x27] != 0) {
      unused2 = self[0x27];
      firstNode2 = *(int *)(self[0x27] + 8);
      MatchListWindows::EntryTree::erase_range(result2,(int)(self + 0x1e),firstLo,firstHi,firstNode2);
      iVar1 = self[0x27];
      *(int *)(iVar1 + 0xc) = self[0x24];
      self[0x24] = iVar1;
      __rwstd::__rb_tree::__deallocate_buffers((int)(self + 0x1e));
    }
    local_c = local_c + -1;
    std::_Destroy_range_EntryHead(self + 0x14,(undefined4 *)self[0x15],(undefined4 *)self[0x16]);
    operator_delete();
    local_c = local_c + -2;
    if (self[0xf] != 0) {
      unused = self[0xf];
      firstNode = *(int *)(self[0xf] + 8);
      MatchListWindows::SelectionTree::erase_range(result,(int)(self + 6),firstLo,firstHi,firstNode);
      iVar1 = self[0xf];
      *(int *)(iVar1 + 0xc) = self[0xc];
      self[0xc] = iVar1;
      __rwstd::__rb_tree::__deallocate_buffers_42b9ac((int)(self + 6));
    }
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x114;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x114;
    local_c = local_c + -3;
    OWL::TControl::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x114;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x114;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      local_c = local_c + -2;
      OWL::TWindow::_dtor(self + 0x4e,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      local_c = local_c + -1;
      OWL::TStreamableBase::_dtor(self + 0x4c,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a45c  std::_Destroy_range_ptr_42a45c   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004050b4 (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of pointers (nothing to do; the loop is left in)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_ptr_42a45c(undefined4 vec,int first,int last)

{
  for (; last != first; first = first + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a474  MatchListWindows::EntryTree::erase_range   (258 bytes)   [analysis]
//   __rb_tree::erase(first, last): clears the whole tree at once when the range is everything
//   file placement: inferred (address adjacency)
undefined4 * __cdecl MatchListWindows::EntryTree::erase_range(undefined4 *result,int tree,undefined4 firstLo,undefined4 firstHi,int firstNode)

{
  undefined4 itLo;
  undefined4 itHi;
  int itNode;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int lastNode;
  undefined4 next [4];
  undefined4 local_44 [6];
  int local_2c;
  int local_1c;
  undefined4 ret [4];
  
  ret[2] = *(undefined4 *)(tree + 0x24);
  itNode = *(int *)(tree + 0x24);
  local_1c = *(int *)(itNode + 8);
  if (((local_1c == firstNode) && (local_2c = itNode, itNode == lastNode)) &&
     (*(int *)(tree + 0x28) != 0)) {
    MatchListWindows::EntryTree::__erase(tree,*(int *)(itNode + 4));
    itNode = *(int *)(tree + 0x24);
    *(int *)(itNode + 8) = itNode;
    *(undefined4 *)(itNode + 4) = 0;
    *(int *)(itNode + 0xc) = itNode;
    *(undefined4 *)(tree + 0x28) = 0;
    local_44[2] = *(undefined4 *)(tree + 0x24);
    puVar4 = local_44;
    puVar5 = ret;
    for (itNode = 4; itNode != 0; itNode = itNode + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    while (itNode = firstNode, itHi = firstHi, itLo = firstLo, firstNode != lastNode) {
      __rwstd::__rb_tree::iterator::increment((int)&firstLo);
      MatchListWindows::EntryTree::erase(next,tree,itLo,itHi,itNode);
      puVar4 = next;
      puVar5 = ret;
      for (itNode = 4; itNode != 0; itNode = itNode + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
  }
  *result = ret[0];
  result[1] = ret[1];
  result[2] = ret[2];
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a578  MatchListWindows::EntryTree::__erase   (86 bytes)   [analysis]
//   returns a subtree's nodes to the free list (recursive on the right child)
//   file placement: inferred (address adjacency)
void __cdecl MatchListWindows::EntryTree::__erase(int tree,int node)

{
  int left;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f275c);
  while (node != 0) {
    MatchListWindows::EntryTree::__erase(tree,*(int *)(node + 0xc));
    left = *(int *)(node + 8);
    *(undefined4 *)(node + 0xc) = *(undefined4 *)(tree + 0x18);
    *(int *)(tree + 0x18) = node;
    node = left;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a5d0  MatchListWindows::EntryTree::erase   (2201 bytes, 2 ranges)   [analysis]
//   __rb_tree::erase(iterator): unlinks the node and rebalances (red-black delete)
//   file placement: inferred (address adjacency)
undefined4 * __cdecl MatchListWindows::EntryTree::erase(undefined4 *result,int tree,undefined4 itLo,undefined4 itHi,int itNode)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *node;
  int *piVar6;
  undefined4 *sehChainHead;
  undefined4 next;
  undefined4 itHi2;
  int itNode2;
  int *local_5c;
  int *local_58;
  int *local_48;
  int local_44;
  int *unused;
  int *local_3c;
  int *local_38;
  char removed;
  int *z;
  int local_2c;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f2764);
  next = itLo;
  itHi2 = itHi;
  itNode2 = itNode;
  local_2c = *(int *)(tree + 0x24);
  if (local_2c != itNode) {
    __rwstd::__rb_tree::iterator::increment((int)&next);
  }
  __rwstd::__rb_tree::__set_node((undefined4*)&z,itNode);
  removed = '\0';
  local_38 = z + 2;
  piVar6 = z;
  if (*local_38 == 0) {
    local_3c = z + 3;
    if (*local_3c == 0) {
      node = (int *)z[1];
      unused = z;
      local_44 = z[1];
      if (*(int *)(tree + 0x24) == local_44) {
        *(int *)(*(int *)(tree + 0x24) + 0xc) = local_44;
        *(int *)(*(int *)(tree + 0x24) + 8) = local_44;
        *(undefined4 *)(*(int *)(tree + 0x24) + 4) = 0;
      }
      else if (*(int **)(local_44 + 8) == z) {
        *(undefined4 *)(local_44 + 8) = 0;
        if (*(int **)(*(int *)(tree + 0x24) + 8) == z) {
          *(int *)(*(int *)(tree + 0x24) + 8) = local_44;
        }
      }
      else {
        *(undefined4 *)(local_44 + 0xc) = 0;
        if (*(int **)(*(int *)(tree + 0x24) + 0xc) == z) {
          *(int *)(*(int *)(tree + 0x24) + 0xc) = local_44;
        }
      }
      removed = '\x01';
    }
    else {
      node = (int *)z[3];
    }
  }
  else {
    local_48 = z + 3;
    if (*local_48 == 0) {
      node = (int *)z[2];
    }
    else {
      for (piVar6 = (int *)z[3]; piVar6[2] != 0; piVar6 = (int *)piVar6[2]) {
      }
      node = (int *)piVar6[3];
    }
  }
  if ((removed == '\0') && (piVar6 != z)) {
    *(int **)(z[2] + 4) = piVar6;
    piVar6[2] = z[2];
    if (piVar6 == (int *)z[3]) {
      if (node != (int *)0x0) {
        node[1] = (int)piVar6;
      }
    }
    else {
      if (node != (int *)0x0) {
        node[1] = piVar6[1];
      }
      *(int **)(piVar6[1] + 8) = node;
      piVar6[3] = z[3];
      *(int **)(z[3] + 4) = piVar6;
    }
    if (*(int **)(*(int *)(tree + 0x24) + 4) == z) {
      *(int **)(*(int *)(tree + 0x24) + 4) = piVar6;
    }
    else if (*(int **)(z[1] + 8) == z) {
      *(int **)(z[1] + 8) = piVar6;
    }
    else {
      *(int **)(z[1] + 0xc) = piVar6;
    }
    piVar6[1] = z[1];
    if (node == (int *)0x0) {
      node = piVar6;
    }
    iVar1 = *piVar6;
    *piVar6 = *z;
    *z = iVar1;
    piVar6 = z;
  }
  else if (removed == '\0') {
    node[1] = piVar6[1];
    if (*(int **)(*(int *)(tree + 0x24) + 4) == z) {
      *(int **)(*(int *)(tree + 0x24) + 4) = node;
    }
    else if (*(int **)(z[1] + 8) == z) {
      *(int **)(z[1] + 8) = node;
    }
    else {
      *(int **)(z[1] + 0xc) = node;
    }
    if (*(int **)(*(int *)(tree + 0x24) + 8) == z) {
      local_58 = z + 3;
      if (*local_58 == 0) {
        *(int *)(*(int *)(tree + 0x24) + 8) = z[1];
      }
      else {
        uVar3 = __rwstd::__rb_tree::__minimum((int)node);
        *(undefined4 *)(*(int *)(tree + 0x24) + 8) = uVar3;
      }
    }
    if (*(int **)(*(int *)(tree + 0x24) + 0xc) == z) {
      local_5c = z + 2;
      if (*local_5c == 0) {
        *(int *)(*(int *)(tree + 0x24) + 0xc) = z[1];
      }
      else {
        uVar3 = __rwstd::__rb_tree::__maximum((int)node);
        *(undefined4 *)(*(int *)(tree + 0x24) + 0xc) = uVar3;
      }
    }
  }
  if ((node != *(int **)(tree + 0x24)) && (*piVar6 != 0)) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            if ((node == *(int **)(*(int *)(tree + 0x24) + 4)) || (*node != 1))
            goto LAB_0042ae04;
            if (node != *(int **)(node[1] + 8)) break;
            piVar4 = *(int **)(node[1] + 0xc);
            if (piVar4 == (int *)0x0) {
              *node = 0;
              node = (int *)node[1];
            }
            else {
              if (*piVar4 == 0) {
                *piVar4 = 1;
                *(undefined4 *)node[1] = 0;
                iVar1 = node[1];
                iVar2 = *(int *)(iVar1 + 0xc);
                *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar2 + 8);
                if (*(int *)(iVar2 + 8) != 0) {
                  *(int *)(*(int *)(iVar2 + 8) + 4) = iVar1;
                }
                *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
                if (iVar1 == *(int *)(*(int *)(tree + 0x24) + 4)) {
                  *(int *)(*(int *)(tree + 0x24) + 4) = iVar2;
                }
                else if (iVar1 == *(int *)(*(int *)(iVar1 + 4) + 8)) {
                  *(int *)(*(int *)(iVar1 + 4) + 8) = iVar2;
                }
                else {
                  *(int *)(*(int *)(iVar1 + 4) + 0xc) = iVar2;
                }
                *(int *)(iVar2 + 8) = iVar1;
                *(int *)(iVar1 + 4) = iVar2;
                piVar4 = *(int **)(node[1] + 0xc);
              }
              if (piVar4 == (int *)0x0) {
                *node = 0;
                node = (int *)node[1];
              }
              else {
                if (((piVar4[2] != 0) && (*(int *)piVar4[2] != 1)) ||
                   ((piVar4[3] != 0 && (*(int *)piVar4[3] != 1)))) {
                  if ((piVar4[3] == 0) || (*(int *)piVar4[3] == 1)) {
                    if (piVar4[2] != 0) {
                      *(undefined4 *)piVar4[2] = 1;
                    }
                    *piVar4 = 0;
                    iVar1 = piVar4[2];
                    piVar4[2] = *(int *)(iVar1 + 0xc);
                    if (*(int *)(iVar1 + 0xc) != 0) {
                      *(int **)(*(int *)(iVar1 + 0xc) + 4) = piVar4;
                    }
                    *(int *)(iVar1 + 4) = piVar4[1];
                    if (piVar4 == *(int **)(*(int *)(tree + 0x24) + 4)) {
                      *(int *)(*(int *)(tree + 0x24) + 4) = iVar1;
                    }
                    else if (piVar4 == *(int **)(piVar4[1] + 0xc)) {
                      *(int *)(piVar4[1] + 0xc) = iVar1;
                    }
                    else {
                      *(int *)(piVar4[1] + 8) = iVar1;
                    }
                    *(int **)(iVar1 + 0xc) = piVar4;
                    piVar4[1] = iVar1;
                    piVar4 = *(int **)(node[1] + 0xc);
                  }
                  if (piVar4 != (int *)0x0) {
                    *piVar4 = *(int *)node[1];
                    *(undefined4 *)node[1] = 1;
                    if (piVar4[3] != 0) {
                      *(undefined4 *)piVar4[3] = 1;
                    }
                    iVar1 = node[1];
                    iVar2 = *(int *)(iVar1 + 0xc);
                    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar2 + 8);
                    if (*(int *)(iVar2 + 8) != 0) {
                      *(int *)(*(int *)(iVar2 + 8) + 4) = iVar1;
                    }
                    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
                    if (iVar1 == *(int *)(*(int *)(tree + 0x24) + 4)) {
                      *(int *)(*(int *)(tree + 0x24) + 4) = iVar2;
                    }
                    else if (iVar1 == *(int *)(*(int *)(iVar1 + 4) + 8)) {
                      *(int *)(*(int *)(iVar1 + 4) + 8) = iVar2;
                    }
                    else {
                      *(int *)(*(int *)(iVar1 + 4) + 0xc) = iVar2;
                    }
                    *(int *)(iVar2 + 8) = iVar1;
                    *(int *)(iVar1 + 4) = iVar2;
                  }
                  goto LAB_0042ae04;
                }
                *piVar4 = 0;
                node = (int *)node[1];
              }
            }
          }
          piVar4 = *(int **)(node[1] + 8);
          if (piVar4 != (int *)0x0) break;
          *node = 0;
          node = (int *)node[1];
        }
        if (*piVar4 == 0) {
          *piVar4 = 1;
          *(undefined4 *)node[1] = 0;
          iVar1 = node[1];
          iVar2 = *(int *)(iVar1 + 8);
          *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar2 + 0xc);
          if (*(int *)(iVar2 + 0xc) != 0) {
            *(int *)(*(int *)(iVar2 + 0xc) + 4) = iVar1;
          }
          *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
          if (iVar1 == *(int *)(*(int *)(tree + 0x24) + 4)) {
            *(int *)(*(int *)(tree + 0x24) + 4) = iVar2;
          }
          else if (iVar1 == *(int *)(*(int *)(iVar1 + 4) + 0xc)) {
            *(int *)(*(int *)(iVar1 + 4) + 0xc) = iVar2;
          }
          else {
            *(int *)(*(int *)(iVar1 + 4) + 8) = iVar2;
          }
          *(int *)(iVar2 + 0xc) = iVar1;
          *(int *)(iVar1 + 4) = iVar2;
          piVar4 = *(int **)(node[1] + 8);
        }
        if (piVar4 != (int *)0x0) break;
        *node = 0;
        node = (int *)node[1];
      }
      if (((piVar4[3] != 0) && (*(int *)piVar4[3] != 1)) ||
         ((piVar4[2] != 0 && (*(int *)piVar4[2] != 1)))) break;
      *piVar4 = 0;
      node = (int *)node[1];
    }
    if ((piVar4[2] == 0) || (*(int *)piVar4[2] == 1)) {
      if (piVar4[3] != 0) {
        *(undefined4 *)piVar4[3] = 1;
      }
      *piVar4 = 0;
      iVar1 = piVar4[3];
      piVar4[3] = *(int *)(iVar1 + 8);
      if (*(int *)(iVar1 + 8) != 0) {
        *(int **)(*(int *)(iVar1 + 8) + 4) = piVar4;
      }
      *(int *)(iVar1 + 4) = piVar4[1];
      if (piVar4 == *(int **)(*(int *)(tree + 0x24) + 4)) {
        *(int *)(*(int *)(tree + 0x24) + 4) = iVar1;
      }
      else if (piVar4 == *(int **)(piVar4[1] + 8)) {
        *(int *)(piVar4[1] + 8) = iVar1;
      }
      else {
        *(int *)(piVar4[1] + 0xc) = iVar1;
      }
      *(int **)(iVar1 + 8) = piVar4;
      piVar4[1] = iVar1;
      piVar4 = *(int **)(node[1] + 8);
    }
    if (piVar4 != (int *)0x0) {
      *piVar4 = *(int *)node[1];
      *(undefined4 *)node[1] = 1;
      if (piVar4[2] != 0) {
        *(undefined4 *)piVar4[2] = 1;
      }
      iVar1 = node[1];
      iVar2 = *(int *)(iVar1 + 8);
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar2 + 0xc);
      if (*(int *)(iVar2 + 0xc) != 0) {
        *(int *)(*(int *)(iVar2 + 0xc) + 4) = iVar1;
      }
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
      if (iVar1 == *(int *)(*(int *)(tree + 0x24) + 4)) {
        *(int *)(*(int *)(tree + 0x24) + 4) = iVar2;
      }
      else if (iVar1 == *(int *)(*(int *)(iVar1 + 4) + 0xc)) {
        *(int *)(*(int *)(iVar1 + 4) + 0xc) = iVar2;
      }
      else {
        *(int *)(*(int *)(iVar1 + 4) + 8) = iVar2;
      }
      *(int *)(iVar2 + 0xc) = iVar1;
      *(int *)(iVar1 + 4) = iVar2;
    }
LAB_0042ae04:
    *node = 1;
  }
  piVar6[3] = *(int *)(tree + 0x18);
  *(int **)(tree + 0x18) = piVar6;
  *(int *)(tree + 0x28) = *(int *)(tree + 0x28) + -1;
  *result = next;
  result[1] = itHi2;
  result[2] = itNode2;
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ae70  __rwstd::__rb_tree::__set_node   (13 bytes)   [analysis]
//   stores a node pointer
//   file placement: inferred (address adjacency)
void __cdecl __rwstd::__rb_tree::__set_node(undefined4 *dest,undefined4 node)

{
  *dest = node;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ae80  __rwstd::__rb_tree::__minimum   (29 bytes)   [analysis]
//   leftmost node of a subtree
//   file placement: inferred (address adjacency)
int __cdecl __rwstd::__rb_tree::__minimum(int node)

{
  for (; *(int *)(node + 8) != 0; node = *(int *)(node + 8)) {
  }
  return node;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042aea0  __rwstd::__rb_tree::__maximum   (29 bytes)   [analysis]
//   rightmost node of a subtree
//   file placement: inferred (address adjacency)
int __cdecl __rwstd::__rb_tree::__maximum(int node)

{
  for (; *(int *)(node + 0xc) != 0; node = *(int *)(node + 0xc)) {
  }
  return node;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042aec0  __rwstd::__rb_tree::iterator::increment   (99 bytes)   [analysis]
//   ++iterator (in-order successor)
//   file placement: inferred (address adjacency)
void __cdecl __rwstd::__rb_tree::iterator::increment(int it)

{
  int parent;
  
  if (*(int *)(*(int *)(it + 8) + 0xc) == 0) {
    for (parent = *(int *)(*(int *)(it + 8) + 4); *(int *)(it + 8) == *(int *)(parent + 0xc)
        ; parent = *(int *)(parent + 4)) {
      *(int *)(it + 8) = parent;
    }
    if (parent != *(int *)(*(int *)(it + 8) + 0xc)) {
      *(int *)(it + 8) = parent;
    }
  }
  else {
    *(undefined4 *)(it + 8) = *(undefined4 *)(*(int *)(it + 8) + 0xc);
    while (*(int *)(*(int *)(it + 8) + 8) != 0) {
      *(undefined4 *)(it + 8) = *(undefined4 *)(*(int *)(it + 8) + 8);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042af24  __rwstd::__rb_tree::__deallocate_buffers   (63 bytes)   [analysis]
//   frees every node buffer of a tree
//   file placement: inferred (address adjacency)
void __cdecl __rwstd::__rb_tree::__deallocate_buffers(int tree)

{
  while (*(undefined4 **)(tree + 0x10) != (undefined4 *)0x0) {
    *(undefined4 *)(tree + 0x10) = **(undefined4 **)(tree + 0x10);
    operator_delete();
    operator_delete();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042af64  MatchListWindows::SelectionTree::erase_range   (258 bytes)   [analysis]
//   __rb_tree::erase(first, last) for the selection set
//   file placement: inferred (address adjacency)
undefined4 * __cdecl MatchListWindows::SelectionTree::erase_range(undefined4 *result,int tree,undefined4 firstLo,undefined4 firstHi,int firstNode)

{
  undefined4 itLo;
  undefined4 itHi;
  int itNode;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_stack_00000024;
  undefined4 result2 [4];
  undefined4 local_44 [6];
  int local_2c;
  int local_1c;
  undefined4 local_14 [4];
  
  local_14[2] = *(undefined4 *)(tree + 0x24);
  itNode = *(int *)(tree + 0x24);
  local_1c = *(int *)(itNode + 8);
  if (((local_1c == firstNode) && (local_2c = itNode, itNode == in_stack_00000024)) &&
     (*(int *)(tree + 0x28) != 0)) {
    MatchListWindows::SelectionTree::__erase(tree,*(int *)(itNode + 4));
    itNode = *(int *)(tree + 0x24);
    *(int *)(itNode + 8) = itNode;
    *(undefined4 *)(itNode + 4) = 0;
    *(int *)(itNode + 0xc) = itNode;
    *(undefined4 *)(tree + 0x28) = 0;
    local_44[2] = *(undefined4 *)(tree + 0x24);
    puVar4 = local_44;
    puVar5 = local_14;
    for (itNode = 4; itNode != 0; itNode = itNode + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    while (itNode = firstNode, itHi = firstHi, itLo = firstLo, firstNode != in_stack_00000024) {
      __rwstd::__rb_tree::iterator::increment_42b948((int)&firstLo);
      MatchListWindows::SelectionTree::erase(result2,tree,itLo,itHi,itNode);
      puVar4 = result2;
      puVar5 = local_14;
      for (itNode = 4; itNode != 0; itNode = itNode + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
  }
  *result = local_14[0];
  result[1] = local_14[1];
  result[2] = local_14[2];
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b068  MatchListWindows::SelectionTree::__erase   (58 bytes)   [analysis]
//   returns a subtree's nodes to the free list
//   file placement: inferred (address adjacency)
void __cdecl MatchListWindows::SelectionTree::__erase(int tree,int node)

{
  int iVar1;
  
  while (node != 0) {
    MatchListWindows::SelectionTree::__erase(tree,*(int *)(node + 0xc));
    iVar1 = *(int *)(node + 8);
    *(undefined4 *)(node + 0xc) = *(undefined4 *)(tree + 0x18);
    *(int *)(tree + 0x18) = node;
    node = iVar1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b0a4  MatchListWindows::SelectionTree::erase   (2124 bytes, 2 ranges)   [analysis]
//   __rb_tree::erase(iterator) for the selection set (red-black delete)
//   file placement: inferred (address adjacency)
undefined4 * __cdecl MatchListWindows::SelectionTree::erase(undefined4 *result,int tree,undefined4 itLo,undefined4 itHi,int itNode)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *node;
  int *piVar6;
  undefined4 it;
  undefined4 itHi2;
  int itNode2;
  int *local_38;
  int *local_34;
  int *local_24;
  int local_20;
  int *unused;
  int *local_18;
  int *local_14;
  char local_d;
  int *dest;
  int local_8;
  
  it = itLo;
  itHi2 = itHi;
  itNode2 = itNode;
  local_8 = *(int *)(tree + 0x24);
  if (local_8 != itNode) {
    __rwstd::__rb_tree::iterator::increment_42b948((int)&it);
  }
  __rwstd::__rb_tree::__set_node_42b8f8((undefined4*)&dest,itNode);
  local_d = '\0';
  local_14 = dest + 2;
  piVar6 = dest;
  if (*local_14 == 0) {
    local_18 = dest + 3;
    if (*local_18 == 0) {
      node = (int *)dest[1];
      unused = dest;
      local_20 = dest[1];
      if (*(int *)(tree + 0x24) == local_20) {
        *(int *)(*(int *)(tree + 0x24) + 0xc) = local_20;
        *(int *)(*(int *)(tree + 0x24) + 8) = local_20;
        *(undefined4 *)(*(int *)(tree + 0x24) + 4) = 0;
      }
      else if (*(int **)(local_20 + 8) == dest) {
        *(undefined4 *)(local_20 + 8) = 0;
        if (*(int **)(*(int *)(tree + 0x24) + 8) == dest) {
          *(int *)(*(int *)(tree + 0x24) + 8) = local_20;
        }
      }
      else {
        *(undefined4 *)(local_20 + 0xc) = 0;
        if (*(int **)(*(int *)(tree + 0x24) + 0xc) == dest) {
          *(int *)(*(int *)(tree + 0x24) + 0xc) = local_20;
        }
      }
      local_d = '\x01';
    }
    else {
      node = (int *)dest[3];
    }
  }
  else {
    local_24 = dest + 3;
    if (*local_24 == 0) {
      node = (int *)dest[2];
    }
    else {
      for (piVar6 = (int *)dest[3]; piVar6[2] != 0; piVar6 = (int *)piVar6[2]) {
      }
      node = (int *)piVar6[3];
    }
  }
  if ((local_d == '\0') && (piVar6 != dest)) {
    *(int **)(dest[2] + 4) = piVar6;
    piVar6[2] = dest[2];
    if (piVar6 == (int *)dest[3]) {
      if (node != (int *)0x0) {
        node[1] = (int)piVar6;
      }
    }
    else {
      if (node != (int *)0x0) {
        node[1] = piVar6[1];
      }
      *(int **)(piVar6[1] + 8) = node;
      piVar6[3] = dest[3];
      *(int **)(dest[3] + 4) = piVar6;
    }
    if (*(int **)(*(int *)(tree + 0x24) + 4) == dest) {
      *(int **)(*(int *)(tree + 0x24) + 4) = piVar6;
    }
    else if (*(int **)(dest[1] + 8) == dest) {
      *(int **)(dest[1] + 8) = piVar6;
    }
    else {
      *(int **)(dest[1] + 0xc) = piVar6;
    }
    piVar6[1] = dest[1];
    if (node == (int *)0x0) {
      node = piVar6;
    }
    iVar1 = *piVar6;
    *piVar6 = *dest;
    *dest = iVar1;
    piVar6 = dest;
  }
  else if (local_d == '\0') {
    node[1] = piVar6[1];
    if (*(int **)(*(int *)(tree + 0x24) + 4) == dest) {
      *(int **)(*(int *)(tree + 0x24) + 4) = node;
    }
    else if (*(int **)(dest[1] + 8) == dest) {
      *(int **)(dest[1] + 8) = node;
    }
    else {
      *(int **)(dest[1] + 0xc) = node;
    }
    if (*(int **)(*(int *)(tree + 0x24) + 8) == dest) {
      local_34 = dest + 3;
      if (*local_34 == 0) {
        *(int *)(*(int *)(tree + 0x24) + 8) = dest[1];
      }
      else {
        uVar3 = __rwstd::__rb_tree::__minimum_42b908((int)node);
        *(undefined4 *)(*(int *)(tree + 0x24) + 8) = uVar3;
      }
    }
    if (*(int **)(*(int *)(tree + 0x24) + 0xc) == dest) {
      local_38 = dest + 2;
      if (*local_38 == 0) {
        *(int *)(*(int *)(tree + 0x24) + 0xc) = dest[1];
      }
      else {
        uVar3 = __rwstd::__rb_tree::__maximum_42b928((int)node);
        *(undefined4 *)(*(int *)(tree + 0x24) + 0xc) = uVar3;
      }
    }
  }
  if ((node != *(int **)(tree + 0x24)) && (*piVar6 != 0)) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            if ((node == *(int **)(*(int *)(tree + 0x24) + 4)) || (*node != 1))
            goto LAB_0042b8b0;
            if (node != *(int **)(node[1] + 8)) break;
            piVar4 = *(int **)(node[1] + 0xc);
            if (piVar4 == (int *)0x0) {
              *node = 0;
              node = (int *)node[1];
            }
            else {
              if (*piVar4 == 0) {
                *piVar4 = 1;
                *(undefined4 *)node[1] = 0;
                iVar1 = node[1];
                iVar2 = *(int *)(iVar1 + 0xc);
                *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar2 + 8);
                if (*(int *)(iVar2 + 8) != 0) {
                  *(int *)(*(int *)(iVar2 + 8) + 4) = iVar1;
                }
                *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
                if (iVar1 == *(int *)(*(int *)(tree + 0x24) + 4)) {
                  *(int *)(*(int *)(tree + 0x24) + 4) = iVar2;
                }
                else if (iVar1 == *(int *)(*(int *)(iVar1 + 4) + 8)) {
                  *(int *)(*(int *)(iVar1 + 4) + 8) = iVar2;
                }
                else {
                  *(int *)(*(int *)(iVar1 + 4) + 0xc) = iVar2;
                }
                *(int *)(iVar2 + 8) = iVar1;
                *(int *)(iVar1 + 4) = iVar2;
                piVar4 = *(int **)(node[1] + 0xc);
              }
              if (piVar4 == (int *)0x0) {
                *node = 0;
                node = (int *)node[1];
              }
              else {
                if (((piVar4[2] != 0) && (*(int *)piVar4[2] != 1)) ||
                   ((piVar4[3] != 0 && (*(int *)piVar4[3] != 1)))) {
                  if ((piVar4[3] == 0) || (*(int *)piVar4[3] == 1)) {
                    if (piVar4[2] != 0) {
                      *(undefined4 *)piVar4[2] = 1;
                    }
                    *piVar4 = 0;
                    iVar1 = piVar4[2];
                    piVar4[2] = *(int *)(iVar1 + 0xc);
                    if (*(int *)(iVar1 + 0xc) != 0) {
                      *(int **)(*(int *)(iVar1 + 0xc) + 4) = piVar4;
                    }
                    *(int *)(iVar1 + 4) = piVar4[1];
                    if (piVar4 == *(int **)(*(int *)(tree + 0x24) + 4)) {
                      *(int *)(*(int *)(tree + 0x24) + 4) = iVar1;
                    }
                    else if (piVar4 == *(int **)(piVar4[1] + 0xc)) {
                      *(int *)(piVar4[1] + 0xc) = iVar1;
                    }
                    else {
                      *(int *)(piVar4[1] + 8) = iVar1;
                    }
                    *(int **)(iVar1 + 0xc) = piVar4;
                    piVar4[1] = iVar1;
                    piVar4 = *(int **)(node[1] + 0xc);
                  }
                  if (piVar4 != (int *)0x0) {
                    *piVar4 = *(int *)node[1];
                    *(undefined4 *)node[1] = 1;
                    if (piVar4[3] != 0) {
                      *(undefined4 *)piVar4[3] = 1;
                    }
                    iVar1 = node[1];
                    iVar2 = *(int *)(iVar1 + 0xc);
                    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar2 + 8);
                    if (*(int *)(iVar2 + 8) != 0) {
                      *(int *)(*(int *)(iVar2 + 8) + 4) = iVar1;
                    }
                    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
                    if (iVar1 == *(int *)(*(int *)(tree + 0x24) + 4)) {
                      *(int *)(*(int *)(tree + 0x24) + 4) = iVar2;
                    }
                    else if (iVar1 == *(int *)(*(int *)(iVar1 + 4) + 8)) {
                      *(int *)(*(int *)(iVar1 + 4) + 8) = iVar2;
                    }
                    else {
                      *(int *)(*(int *)(iVar1 + 4) + 0xc) = iVar2;
                    }
                    *(int *)(iVar2 + 8) = iVar1;
                    *(int *)(iVar1 + 4) = iVar2;
                  }
                  goto LAB_0042b8b0;
                }
                *piVar4 = 0;
                node = (int *)node[1];
              }
            }
          }
          piVar4 = *(int **)(node[1] + 8);
          if (piVar4 != (int *)0x0) break;
          *node = 0;
          node = (int *)node[1];
        }
        if (*piVar4 == 0) {
          *piVar4 = 1;
          *(undefined4 *)node[1] = 0;
          iVar1 = node[1];
          iVar2 = *(int *)(iVar1 + 8);
          *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar2 + 0xc);
          if (*(int *)(iVar2 + 0xc) != 0) {
            *(int *)(*(int *)(iVar2 + 0xc) + 4) = iVar1;
          }
          *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
          if (iVar1 == *(int *)(*(int *)(tree + 0x24) + 4)) {
            *(int *)(*(int *)(tree + 0x24) + 4) = iVar2;
          }
          else if (iVar1 == *(int *)(*(int *)(iVar1 + 4) + 0xc)) {
            *(int *)(*(int *)(iVar1 + 4) + 0xc) = iVar2;
          }
          else {
            *(int *)(*(int *)(iVar1 + 4) + 8) = iVar2;
          }
          *(int *)(iVar2 + 0xc) = iVar1;
          *(int *)(iVar1 + 4) = iVar2;
          piVar4 = *(int **)(node[1] + 8);
        }
        if (piVar4 != (int *)0x0) break;
        *node = 0;
        node = (int *)node[1];
      }
      if (((piVar4[3] != 0) && (*(int *)piVar4[3] != 1)) ||
         ((piVar4[2] != 0 && (*(int *)piVar4[2] != 1)))) break;
      *piVar4 = 0;
      node = (int *)node[1];
    }
    if ((piVar4[2] == 0) || (*(int *)piVar4[2] == 1)) {
      if (piVar4[3] != 0) {
        *(undefined4 *)piVar4[3] = 1;
      }
      *piVar4 = 0;
      iVar1 = piVar4[3];
      piVar4[3] = *(int *)(iVar1 + 8);
      if (*(int *)(iVar1 + 8) != 0) {
        *(int **)(*(int *)(iVar1 + 8) + 4) = piVar4;
      }
      *(int *)(iVar1 + 4) = piVar4[1];
      if (piVar4 == *(int **)(*(int *)(tree + 0x24) + 4)) {
        *(int *)(*(int *)(tree + 0x24) + 4) = iVar1;
      }
      else if (piVar4 == *(int **)(piVar4[1] + 8)) {
        *(int *)(piVar4[1] + 8) = iVar1;
      }
      else {
        *(int *)(piVar4[1] + 0xc) = iVar1;
      }
      *(int **)(iVar1 + 8) = piVar4;
      piVar4[1] = iVar1;
      piVar4 = *(int **)(node[1] + 8);
    }
    if (piVar4 != (int *)0x0) {
      *piVar4 = *(int *)node[1];
      *(undefined4 *)node[1] = 1;
      if (piVar4[2] != 0) {
        *(undefined4 *)piVar4[2] = 1;
      }
      iVar1 = node[1];
      iVar2 = *(int *)(iVar1 + 8);
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar2 + 0xc);
      if (*(int *)(iVar2 + 0xc) != 0) {
        *(int *)(*(int *)(iVar2 + 0xc) + 4) = iVar1;
      }
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
      if (iVar1 == *(int *)(*(int *)(tree + 0x24) + 4)) {
        *(int *)(*(int *)(tree + 0x24) + 4) = iVar2;
      }
      else if (iVar1 == *(int *)(*(int *)(iVar1 + 4) + 0xc)) {
        *(int *)(*(int *)(iVar1 + 4) + 0xc) = iVar2;
      }
      else {
        *(int *)(*(int *)(iVar1 + 4) + 8) = iVar2;
      }
      *(int *)(iVar2 + 0xc) = iVar1;
      *(int *)(iVar1 + 4) = iVar2;
    }
LAB_0042b8b0:
    *node = 1;
  }
  piVar6[3] = *(int *)(tree + 0x18);
  *(int **)(tree + 0x18) = piVar6;
  *(int *)(tree + 0x28) = *(int *)(tree + 0x28) + -1;
  *result = it;
  result[1] = itHi2;
  result[2] = itNode2;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b8f8  __rwstd::__rb_tree::__set_node_42b8f8   (13 bytes)   [analysis]
//   stores a node pointer
//   file placement: inferred (address adjacency)
void __cdecl __rwstd::__rb_tree::__set_node_42b8f8(undefined4 *dest,undefined4 node)

{
  *dest = node;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b908  __rwstd::__rb_tree::__minimum_42b908   (29 bytes)   [analysis]
//   leftmost node of a subtree
//   file placement: inferred (address adjacency)
int __cdecl __rwstd::__rb_tree::__minimum_42b908(int node)

{
  for (; *(int *)(node + 8) != 0; node = *(int *)(node + 8)) {
  }
  return node;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b928  __rwstd::__rb_tree::__maximum_42b928   (29 bytes)   [analysis]
//   rightmost node of a subtree
//   file placement: inferred (address adjacency)
int __cdecl __rwstd::__rb_tree::__maximum_42b928(int node)

{
  for (; *(int *)(node + 0xc) != 0; node = *(int *)(node + 0xc)) {
  }
  return node;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b948  __rwstd::__rb_tree::iterator::increment_42b948   (99 bytes)   [analysis]
//   ++iterator (in-order successor)
//   file placement: inferred (address adjacency)
void __cdecl __rwstd::__rb_tree::iterator::increment_42b948(int it)

{
  int parent;
  
  if (*(int *)(*(int *)(it + 8) + 0xc) == 0) {
    for (parent = *(int *)(*(int *)(it + 8) + 4); *(int *)(it + 8) == *(int *)(parent + 0xc)
        ; parent = *(int *)(parent + 4)) {
      *(int *)(it + 8) = parent;
    }
    if (parent != *(int *)(*(int *)(it + 8) + 0xc)) {
      *(int *)(it + 8) = parent;
    }
  }
  else {
    *(undefined4 *)(it + 8) = *(undefined4 *)(*(int *)(it + 8) + 0xc);
    while (*(int *)(*(int *)(it + 8) + 8) != 0) {
      *(undefined4 *)(it + 8) = *(undefined4 *)(*(int *)(it + 8) + 8);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b9ac  __rwstd::__rb_tree::__deallocate_buffers_42b9ac   (63 bytes)   [analysis]
//   frees every node buffer of a tree
//   file placement: inferred (address adjacency)
void __cdecl __rwstd::__rb_tree::__deallocate_buffers_42b9ac(int tree)

{
  while (*(undefined4 **)(tree + 0x10) != (undefined4 *)0x0) {
    *(undefined4 *)(tree + 0x10) = **(undefined4 **)(tree + 0x10);
    operator_delete();
    operator_delete();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b9ec  MatchListWindows::SetColumnWidths   (26 bytes)   [analysis]
//   stores the two widths at +0xe4/+0xe8 (word column and annotation column)
void __cdecl MatchListWindows::SetColumnWidths(int self,undefined4 wordWidth,undefined4 annotationWidth)

{
  *(undefined4 *)(self + 0xe4) = wordWidth;
  *(undefined4 *)(self + 0xe8) = annotationWidth;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ba08  MatchListWindows::GetLineCount   (11 bytes)   [analysis]
//   number of display lines (+0x70)
undefined4 __cdecl MatchListWindows::GetLineCount(int self)

{
  return *(undefined4 *)(self + 0x70);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ba14  MatchListWindows::GetEntryCount   (127 bytes)   [analysis]
//   total entries: sums the counts of every length group in the tree
int __cdecl MatchListWindows::GetEntryCount(int self)

{
  undefined1 it [8];
  int node;
  int total;
  
  total = 0;
  node = *(int *)(*(int *)(self + 0x9c) + 8);
  while( true ) {
    if (*(int *)(self + 0x9c) == node) break;
    total = total + *(int *)(node + 0x14);
    __rwstd::__rb_tree::iterator::increment_42ba94((int)it);
  }
  return total;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ba94  __rwstd::__rb_tree::iterator::increment_42ba94   (99 bytes)   [analysis]
//   ++iterator (in-order successor)
//   file placement: inferred (address adjacency)
void __cdecl __rwstd::__rb_tree::iterator::increment_42ba94(int it)

{
  int parent;
  
  if (*(int *)(*(int *)(it + 8) + 0xc) == 0) {
    for (parent = *(int *)(*(int *)(it + 8) + 4); *(int *)(it + 8) == *(int *)(parent + 0xc)
        ; parent = *(int *)(parent + 4)) {
      *(int *)(it + 8) = parent;
    }
    if (parent != *(int *)(*(int *)(it + 8) + 0xc)) {
      *(int *)(it + 8) = parent;
    }
  }
  else {
    *(undefined4 *)(it + 8) = *(undefined4 *)(*(int *)(it + 8) + 0xc);
    while (*(int *)(*(int *)(it + 8) + 8) != 0) {
      *(undefined4 *)(it + 8) = *(undefined4 *)(*(int *)(it + 8) + 8);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042baf8  MatchListWindows::GetEntryText   (30 bytes)   [analysis]
//   text of entry `index` (the word, 9 bytes into the entry)
int __cdecl MatchListWindows::GetEntryText(int self,int index)

{
  undefined4 *entry;
  
  entry = MatchListWindows::GetEntryAt(self,index);
  return (int)entry + 9;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bb18  MatchListWindows::Clear   (462 bytes)   [analysis]
//   removes every entry and group, resets the scroller, the selection and the caret, and invalidates
void __cdecl MatchListWindows::Clear(int *self)

{
  int *begin;
  int *newEnd;
  undefined4 *sehChainHead;
  undefined4 erased [4];
  undefined4 firstLo;
  undefined4 firstHi;
  int firstNode;
  int local_7c;
  undefined4 erased2 [4];
  undefined4 firstLo2;
  undefined4 firstHi2;
  int firstNode2;
  int local_4c;
  undefined4 *slot;
  undefined4 *oldEnd;
  int *end;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 *unused;
  int emptyGroup [3];
  
  __InitExceptBlockLDTC(0x4f278c);
  end = (int *)self[0x16];
  begin = (int *)self[0x15];
  newEnd = std::copy_EntryHead(end,end,begin);
  oldEnd = (undefined4 *)self[0x16];
  self[0x16] = self[0x16] + (((int)end - (int)begin) / 0xc) * -0xc;
  std::_Destroy_range_EntryHead(self + 0x14,newEnd,oldEnd);
  ehContext = 8;
  emptyGroup[0] = 0;
  emptyGroup[1] = 0;
  emptyGroup[2] = 0;
  ehDtorCount = ehDtorCount + 1;
  if (self[0x16] == self[0x1a]) {
    std::vector_EntryHead::insert_aux((int)(self + 0x14),(int *)self[0x16],emptyGroup);
  }
  else {
    slot = (undefined4 *)self[0x16];
    unused = slot;
    if (slot != (undefined4 *)0x0) {
      ehContext = 0x14;
      MatchListWindows::EntryHead::EntryHead_move(slot,emptyGroup);
    }
    ehContext = 8;
    self[0x16] = self[0x16] + 0xc;
  }
  ehDtorCount = ehDtorCount + -1;
  MatchListWindows::EntryHead::Clear(emptyGroup);
  self[0x1c] = 0;
  local_4c = self[0xf];
  firstNode2 = *(int *)(local_4c + 8);
  MatchListWindows::SelectionTree::erase_range(erased2,(int)(self + 6),firstLo2,firstHi2,firstNode2);
  (**(code **)(**(int **)(*self + 0x44) + 0x14))();
  local_7c = self[0x27];
  firstNode = *(int *)(local_7c + 8);
  MatchListWindows::EntryTree::erase_range(erased,(int)(self + 0x1e),firstLo,firstHi,firstNode);
  self[0x41] = -1;
  self[0x42] = 2;
  self[0x43] = -1;
  self[0x44] = -1;
  (**(code **)(self[3] + 0x24))();
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bce8  std::copy_EntryHead   (50 bytes)   [analysis]
//   copy over EntryHead objects (vector erase)
//   file placement: inferred (address adjacency)
int * __cdecl std::copy_EntryHead(int *first,int *last,int *dest)

{
  for (; last != first; first = first + 3) {
    MatchListWindows::EntryHead::operator_assign(dest,first);
    dest = dest + 3;
  }
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bd1c  MatchListWindows::Invalidate   (29 bytes)   [rtti:vtable virtual slot 26]
//   override of OWL::TWindow vtable slot 26, from MatchListWindows's OWL::TWindow subobject vtable at 0x004f2c80 (through the this-adjusting thunk at 0x00430f1f); slot name identified from OWL::TWindow's own implementation of that slot
//   also: MatchListWindows::vf9 [rtti:vtable]
void __cdecl MatchListWindows::Invalidate(int *self,byte erase)

{
  InvalidateRect(*(HWND *)(*self + 0xc),(RECT *)0x0,(uint)erase);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bd3c  MatchListWindows::SetBounds   (111 bytes)   [analysis]
//   moves/resizes the control (SetWindowPos), redrawing unless `noRedraw`, and updates the scroll range
void __cdecl MatchListWindows::SetBounds(int *self,int *rect,char redraw)

{
  uint noRedrawFlag;
  
  if (redraw == '\0') {
    noRedrawFlag = 8;
  }
  else {
    noRedrawFlag = 0;
  }
  FUN_004a7aa0(*self,(HWND)0x0,*rect,rect[1],rect[2] - *rect,rect[3] - rect[1],
               noRedrawFlag | 0x214);
  MatchListWindows::GetLineCount((int)self);
  (**(code **)(**(int **)(*self + 0x44) + 0x14))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bdac  MatchListWindows::PreProcessMsg   (67 bytes)   [rtti:vtable virtual slot 10]
//   override of OWL::TWindow vtable slot 10, from MatchListWindows's OWL::TWindow subobject vtable at 0x004f2c80 (through the this-adjusting thunk at 0x00430f49); slot name identified from OWL::TWindow's own implementation of that slot
//   also: MatchListWindows::vf10 [rtti:vtable]
void __cdecl MatchListWindows::PreProcessMsg(int *self,LPMSG lParam2)

{
  if (lParam2->message == 0x20a) {
    lParam2->message = 0x115;
    lParam2->wParam = (uint)((int)lParam2->wParam < 0);
    lParam2->lParam = 0;
  }
  OWL::TWindow::PreProcessMsg(*self,lParam2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bdf0  MatchListWindows::UpdateScrollState   (339 bytes)   [analysis]
//   when `changed`: updates the scroller if the lines no longer fit, and repaints the pending dirty rectangle
void __cdecl MatchListWindows::UpdateScrollState(int *self,char changed)

{
  bool noDirtyRect;
  int lineCount;
  tagRECT *pRect;
  LONG *dst;
  tagRECT rect;
  int client [4];
  int unused;
  int unused2;
  int unused3;
  int unused4;
  int metric;
  int unused5;
  tagPOINT pt;
  
  if (changed != '\0') {
    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;
    FUN_004a7a6c(*self,&rect);
    pRect = &rect;
    dst = client;
    for (lineCount = 4; lineCount != 0; lineCount = lineCount + -1) {
      *dst = pRect->left;
      pRect = (tagRECT *)&pRect->top;
      dst = dst + 1;
    }
    lineCount = MatchListWindows::GetLineCount((int)self);
    if (lineCount * self[0x40] - (client[3] - client[1]) != 0 &&
        client[3] - client[1] <= lineCount * self[0x40]) {
      (**(code **)(**(int **)(*self + 0x44) + 0x14))();
      pt.x = client[2] - client[0];
      pt.y = 0;
      MapWindowPoints(*(HWND *)(*self + 0xc),*(HWND *)(*(int *)self[0x38] + 0xc),&pt,1);
      metric = GetSystemMetrics(2);
      unused4 = pt.y + (client[3] - client[1]);
      unused3 = pt.x + metric;
      unused2 = pt.y;
      unused = pt.x;
      unused5 = client[3] - client[1];
      (**(code **)(*(int *)(*(int *)self[0x38] + 8) + 0x6c))();
    }
    if ((self[0x45] < self[0x47]) && (self[0x46] < self[0x48])) {
      noDirtyRect = false;
    }
    else {
      noDirtyRect = true;
    }
    if (!noDirtyRect) {
      (**(code **)(*(int *)(*self + 8) + 0x6c))();
      self[0x45] = 0;
      self[0x46] = 0;
      self[0x47] = 0;
      self[0x48] = 0;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bf44  MatchListWindows::GetClassName   (10 bytes)   [rtti:vtable virtual slot 29]
//   override of OWL::TWindow vtable slot 29, from MatchListWindows's OWL::TWindow subobject vtable at 0x004f2c80 (through the this-adjusting thunk at 0x00430f0a); slot name identified from OWL::TWindow's own implementation of that slot
//   also: MatchListWindows::vf11 [rtti:vtable]
char * __stdcall MatchListWindows::GetClassName(void)

{
  return "MATCHLIST";
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bf50  MatchListWindows::Paint   (3183 bytes)   [rtti:vtable virtual slot 21]
//   override of OWL::TWindow vtable slot 21, from MatchListWindows's OWL::TWindow subobject vtable at 0x004f2c80 (through the this-adjusting thunk at 0x00430f34); slot name identified from OWL::TWindow's own implementation of that slot
//   also: MatchListWindows::vf12 [rtti:vtable]
void __cdecl MatchListWindows::Paint(int *self,int *param_2)

{
  undefined1 entryFlag;
  HWND hWnd;
  HDC hdc;
  UINT align;
  undefined4 *entryAt;
  undefined3 regHigh;
  BOOL ok;
  uint *puVar7;
  int c;
  tagRECT *pRect;
  LONG *pLVar10;
  LONG *pLVar11;
  undefined4 *sehChainHead;
  byte bVar12;
  LPCSTR string_;
  tagSIZE *pSize;
  RECT rect;
  POINT pt;
  int local_264;
  LONG unused;
  int local_25c;
  int local_258;
  LONG unused2;
  int local_250;
  LONG unused3;
  LONG unused4;
  RECT rect2;
  POINT pt2;
  int local_22c;
  int unused5;
  int local_224;
  int local_220;
  int unused6;
  int local_218;
  int unused7;
  int unused8;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  LONG newStr [4];
  tagRECT rect3;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int unused9;
  int unused10;
  int unused11;
  uint *local_1c0;
  uint *local_1bc;
  uint local_1b8;
  LONG unused12;
  int unused13;
  LONG unused14;
  int unused15;
  LONG unused16;
  int unused17;
  LONG unused18;
  int unused19;
  int unused20;
  int unused21;
  int unused22;
  int unused23;
  int unused24;
  LONG unused25;
  int unused26;
  LONG unused27;
  int unused28;
  LONG unused29;
  int unused30;
  LONG unused31;
  int unused32;
  int unused33;
  int *local_15c;
  int *unused34;
  char local_152;
  undefined1 unused35;
  tagPOINT pt3;
  int unused36;
  tagSIZE size;
  LPCSTR unused37;
  int unused38;
  int local_130;
  LONG unused39;
  undefined2 ehContext;
  int unused40;
  int unused41;
  uint local_10c;
  int unused42;
  int unused43;
  int unused44;
  int unused45;
  int unused46;
  int unused47;
  int unused48;
  int unused49;
  int unused50;
  int unused51;
  int unused52;
  int unused53;
  int unused54;
  int unused55;
  int unused56;
  int unused57;
  int unused58;
  int unused59;
  int unused60;
  int unused61;
  int unused62;
  int isSelected;
  int local_b0;
  int local_ac;
  int lineCount;
  int y2;
  int local_a0;
  int last;
  undefined4 *first;
  undefined4 *dest;
  undefined4 *first2;
  LONG unused63;
  int unused64;
  tagSIZE size2;
  tagSIZE size3;
  LONG unused65;
  int unused66;
  UINT align2;
  uint unused67;
  DWORD local_64;
  DWORD unused68;
  DWORD sysColor;
  DWORD unused69;
  DWORD sysColor2;
  DWORD local_50;
  char local_49;
  undefined4 sehPrevFrame;
  undefined2 ehContext2;
  int ehDtorCount;
  uint brush [2];
  uint brush2 [2];
  uint gdiObject [2];
  uint gdiObject2 [2];
  
  bVar12 = 0;
  __InitExceptBlockLDTC(0x4f27f8);
  rect3.left = 0;
  rect3.top = 0;
  rect3.right = 0;
  rect3.bottom = 0;
  FUN_004a7a6c(*self,&rect3);
  pRect = &rect3;
  pLVar10 = newStr;
  for (c = 4; c != 0; c = c + -1) {
    *pLVar10 = pRect->left;
    pRect = (tagRECT *)((int)pRect + ((uint)bVar12 * -2 + 1) * 4);
    pLVar10 = pLVar10 + (uint)bVar12 * -2 + 1;
  }
  pLVar10 = newStr;
  pLVar11 = &local_1dc;
  for (c = 4; c != 0; c = c + -1) {
    *pLVar11 = *pLVar10;
    pLVar10 = pLVar10 + (uint)bVar12 * -2 + 1;
    pLVar11 = pLVar11 + (uint)bVar12 * -2 + 1;
  }
  hWnd = GetFocus();
  local_49 = hWnd == *(HWND *)(*self + 0xc);
  sysColor2 = GetSysColor(5);
  if (local_49 == '\0') {
    c = 0xf;
  }
  else {
    c = 0xd;
  }
  local_50 = sysColor2;
  sysColor = GetSysColor(c);
  unused69 = sysColor;
  if (local_49 == '\0') {
    local_64 = self[0x3c];
  }
  else {
    local_64 = GetSysColor(0xe);
  }
  unused68 = local_64;
  hdc = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  align = GetTextAlign(hdc);
  align2 = align & 0xffffffe7 | 1;
  unused67 = align2;
  c = (**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  if (c != *param_2) {
    SetTextAlign((HDC)*param_2,align2);
  }
  align = align2;
  hdc = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  SetTextAlign(hdc,align);
  c = (**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  if (c != *param_2) {
    SetBkMode((HDC)*param_2,2);
  }
  c = 2;
  hdc = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  SetBkMode(hdc,c);
  if (self[0x3f] != 0) {
    (**(code **)(*(int *)((int)param_2 + 5) + 0x14))();
  }
  size3.cx = 0;
  size3.cy = 0;
  pSize = &size3;
  c = 1;
  string_ = &DAT_004f223c;
  hdc = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  GetTextExtentPoint32A(hdc,string_,c,pSize);
  unused65 = size3.cx;
  unused66 = size3.cy;
  self[0x40] = size3.cy;
  if (self[0x3e] != 0) {
    (**(code **)(*(int *)((int)param_2 + 5) + 0x14))();
  }
  size2.cx = 0;
  size2.cy = 0;
  pSize = &size2;
  c = 1;
  string_ = &DAT_004f223c;
  hdc = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  GetTextExtentPoint32A(hdc,string_,c,pSize);
  unused63 = size2.cx;
  unused64 = size2.cy;
  unused65 = size2.cx;
  unused66 = size2.cy;
  if (self[0x40] < size2.cy) {
    self[0x40] = size2.cy;
    *(LONG *)(*(int *)(*self + 0x44) + 0x2c) = size2.cy;
  }
  *(int *)(*(int *)(*self + 0x44) + 0x2c) = self[0x40];
  first2 = (undefined4 *)self[0x32];
  dest = (undefined4 *)self[0x31];
  first = std::copy_ptr_42cbf0(first2,(undefined4 *)self[0x32],dest);
  last = self[0x32];
  c = (int)first2 - (int)dest;
  if (c < 0) {
    c = c + 3;
  }
  self[0x32] = self[0x32] + (c >> 2) * -4;
  std::_Destroy_range_ptr_42a45c(self + 0x30,(int)first,last);
  local_a0 = 0;
  y2 = 0;
  if (0 < self[0x40]) {
    local_a0 = *(int *)(*(int *)(*self + 0x44) + 0xc) / self[0x40];
    y2 = -(*(int *)(*(int *)(*self + 0x44) + 0xc) % self[0x40]);
  }
  lineCount = MatchListWindows::GetLineCount((int)self);
  local_ac = local_a0;
  do {
    if ((lineCount <= local_ac) || (local_1d0 - local_1d8 <= y2)) {
      c = MatchListWindows::GetLineCount((int)self);
      if (c == 0) {
        hWnd = GetFocus();
        if (hWnd == *(HWND *)(*self + 0xc)) {
          rect2.bottom = self[0x40];
          rect2.right = local_1d4 - local_1dc;
          rect2.left = 0;
          rect2.top = 0;
          unused32 = rect2.right;
          unused33 = rect2.bottom;
          _vector_new_ldtc_(&pt.x,8,5,1,(undefined*)MatchListWindows::Selection::Selection);
          pt.x = rect2.left;
          pt.y = rect2.top;
          unused31 = rect2.top;
          unused30 = rect2.right;
          unused28 = rect2.right;
          unused29 = rect2.top;
          unused27 = rect2.top;
          local_264 = rect2.right + -1;
          unused25 = rect2.top;
          unused = rect2.top;
          local_258 = rect2.bottom + -1;
          local_25c = rect2.right + -1;
          unused19 = rect2.bottom;
          unused18 = rect2.left;
          unused16 = rect2.left;
          unused17 = rect2.bottom;
          local_250 = rect2.bottom + -1;
          unused14 = rect2.left;
          unused12 = rect2.left;
          unused2 = rect2.left;
          unused3 = rect2.left;
          unused4 = rect2.top;
          ehContext2 = 0x14;
          local_1b8 = 0x1000002;
          unused13 = local_250;
          unused15 = local_250;
          unused20 = local_25c;
          unused21 = local_258;
          unused22 = local_25c;
          unused23 = local_258;
          unused24 = local_264;
          unused26 = local_264;
          puVar7 = FUN_0049b6a8(gdiObject,&local_1b8,1,0);
          ehDtorCount = ehDtorCount + 2;
          FUN_0048d8f4(param_2,puVar7);
          ehDtorCount = ehDtorCount + -2;
          OWL::TGdiObject::_dtor(gdiObject,0);
          Polyline((HDC)*param_2,&pt,5);
          FUN_00494470(&rect2.left,-1,-1);
          ehContext2 = 0x20;
          local_1bc = FUN_004ab84c(brush2,&local_50,'\x01');
          ehDtorCount = ehDtorCount + 2;
          FillRect((HDC)*param_2,&rect2,(HBRUSH)*local_1bc);
          ehDtorCount = ehDtorCount + -2;
          OWL::TBrush::_dtor(brush2,2);
          y2 = y2 + self[0x40];
        }
      }
      if (y2 < local_1d0 - local_1d8) {
        ehContext2 = 0x2c;
        local_1c0 = FUN_004ab84c(brush,&local_50,'\x01');
        ehDtorCount = ehDtorCount + 2;
        rect.bottom = local_1d0 - local_1d8;
        rect.right = local_1d4 - local_1dc;
        unused9 = y2;
        rect.left = 0;
        rect.top = y2;
        unused10 = rect.right;
        unused11 = rect.bottom;
        FillRect((HDC)*param_2,&rect,(HBRUSH)*local_1c0);
        ehDtorCount = ehDtorCount + -2;
        OWL::TBrush::_dtor(brush,2);
      }
      *sehChainHead = sehPrevFrame;
      return;
    }
    entryAt = MatchListWindows::GetEntryAt((int)self,local_ac);
    string_ = (LPCSTR)((int)entryAt + 9);
    entryFlag = MatchListWindows::GetEntryFlag((int)self,local_ac);
    local_b0 = CONCAT31(regHigh,entryFlag);
    isSelected = MatchListWindows::IsSelected((int)self,local_ac);
    local_200 = y2 + self[0x40];
    local_204 = (local_1d4 - local_1dc) + -2;
    unused62 = y2;
    local_20c = 1;
    local_208 = y2;
    if (local_ac == self[0x44]) {
      hWnd = GetFocus();
      if (hWnd == *(HWND *)(*self + 0xc)) {
        _vector_new_ldtc_(&pt2.x,8,5,1,(undefined*)MatchListWindows::Selection::Selection);
        pt2.x = local_20c;
        pt2.y = local_208;
        unused61 = local_208;
        unused60 = local_204;
        unused58 = local_204;
        unused59 = local_208;
        unused57 = local_208;
        local_22c = local_204 + -1;
        unused55 = local_208;
        unused5 = local_208;
        local_220 = local_200 + -1;
        local_224 = local_204 + -1;
        unused49 = local_200;
        unused48 = local_20c;
        unused46 = local_20c;
        unused47 = local_200;
        local_218 = local_200 + -1;
        unused44 = local_20c;
        unused42 = local_20c;
        unused6 = local_20c;
        unused7 = local_20c;
        unused8 = local_208;
        ehContext2 = 8;
        local_10c = 0x1000002;
        unused43 = local_218;
        unused45 = local_218;
        unused50 = local_224;
        unused51 = local_220;
        unused52 = local_224;
        unused53 = local_220;
        unused54 = local_22c;
        unused56 = local_22c;
        puVar7 = FUN_0049b6a8(gdiObject2,&local_10c,1,0);
        ehDtorCount = ehDtorCount + 2;
        FUN_0048d8f4(param_2,puVar7);
        ehDtorCount = ehDtorCount + -2;
        OWL::TGdiObject::_dtor(gdiObject2,0);
        Polyline((HDC)*param_2,&pt2,5);
        FUN_00494470(&local_20c,-1,-1);
      }
    }
    if (isSelected == 0) {
      unused41 = self[0x3c];
      (**(code **)(*(int *)((int)param_2 + 5) + 0x24))();
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    }
    else {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x24))();
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    }
    unused40 = y2;
    MoveToEx((HDC)*param_2,2,y2,(LPPOINT)0x0);
    ehContext = 6;
    if (string_[local_b0] != '\0') {
      unused38 = local_b0;
      size.cx = 0;
      size.cy = 0;
      pSize = &size;
      c = local_b0;
      unused37 = string_;
      hdc = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
      GetTextExtentPoint32A(hdc,string_,c,pSize);
      local_130 = size.cx;
      unused39 = size.cy;
      if (size.cx < local_204 - local_20c) {
        (**(code **)(*(int *)((int)param_2 + 5) + 0x48))();
        if (isSelected == 0) {
          unused36 = self[0x3d];
          (**(code **)(*(int *)((int)param_2 + 5) + 0x24))();
        }
        local_20c = local_20c + local_130;
        ehContext = 4;
        if (self[0x3f] != 0) {
          (**(code **)(*(int *)((int)param_2 + 5) + 0x14))();
        }
      }
    }
    (**(code **)(*(int *)((int)param_2 + 5) + 0x48))();
    if ((local_20c != 1) && (self[0x3e] != 0)) {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x14))();
    }
    pt3.x = 0;
    pt3.y = 0;
    ok = GetCurrentPositionEx((HDC)*param_2,&pt3);
    unused35 = ok != 0;
    if (local_204 < pt3.x) {
LAB_0042c793:
      if (self[0x32] == self[0x36]) {
        std::vector_ptr::insert_aux_42cc14((int)(self + 0x30),(undefined4 *)self[0x32],&local_ac);
      }
      else {
        local_15c = (int *)self[0x32];
        *local_15c = local_ac;
        self[0x32] = self[0x32] + 4;
        unused34 = local_15c;
      }
    }
    else {
      if ((((local_20c < local_1dc) || (local_1d4 < local_204)) || (local_208 < local_1d8)) ||
         (local_1d0 < local_200)) {
        local_152 = '\0';
      }
      else {
        local_152 = '\x01';
      }
      if (local_152 == '\0') goto LAB_0042c793;
    }
    y2 = y2 + self[0x40];
    local_ac = local_ac + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cbc0  MatchListWindows::Selection::Selection   (45 bytes)   [analysis]
//   empty selection range (first = count = 0)
undefined4 * __cdecl MatchListWindows::Selection::Selection(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f2c00);
  *self = 0;
  self[1] = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cbf0  std::copy_ptr_42cbf0   (36 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00406584 (36 bytes; the code occurs several times, e.g. one template instance per type). copy over a range of pointers (vector erase)
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_ptr_42cbf0(undefined4 *first,undefined4 *last,undefined4 *dest)

{
  for (; last != first; first = first + 1) {
    *dest = *first;
    dest = dest + 1;
  }
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cc14  std::vector_ptr::insert_aux_42cc14   (437 bytes, 2 ranges)   [analysis]
//   std::vector<T *> insert at a position, growing the storage when full
//   file placement: inferred (address adjacency)
void __cdecl std::vector_ptr::insert_aux_42cc14(int vec,undefined4 *pos,undefined4 *value)

{
  int newCapacity;
  undefined4 *storage;
  int index;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x4f2860);
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
      _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
    }
    std::copy_ptr_42ce10(*(undefined4 **)(vec + 4),pos,storage);
    index = (int)pos - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    storage[index >> 2] = *value;
    index = (int)pos - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    std::copy_ptr_42ce10(pos,*(undefined4 **)(vec + 8),storage + (index >> 2) + 1);
    index = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    std::_Destroy_range_ptr_42a45c(vec,*(int *)(vec + 4),*(int *)(vec + 8));
    operator_delete();
    *(undefined4 **)(vec + 0x18) = storage + newCapacity;
    *(undefined4 **)(vec + 8) = storage + (index >> 2) + 1;
    *(undefined4 **)(vec + 4) = storage;
  }
  else {
    *storage = storage[-1];
    std::copy_backward_ptr_42cdec(pos,*(undefined4 **)(vec + 8) + -1,*(undefined4 **)(vec + 8));
    *pos = *value;
    *(int *)(vec + 8) = *(int *)(vec + 8) + 4;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cdec  std::copy_backward_ptr_42cdec   (36 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004063a8 (36 bytes; the code occurs several times, e.g. one template instance per type). copy_backward over a range of pointers
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_backward_ptr_42cdec(undefined4 *first,undefined4 *last,undefined4 *destEnd)

{
  while (last != first) {
    last = last + -1;
    destEnd = destEnd + -1;
    *destEnd = *last;
  }
  return destEnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ce10  std::copy_ptr_42ce10   (89 bytes, 2 ranges)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004063cc (89 bytes; the code occurs several times, e.g. one template instance per type). copy over a range of pointers
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_ptr_42ce10(undefined4 *first,undefined4 *last,undefined4 *dest)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f28a0);
  for (; last != first; first = first + 1) {
    *dest = *first;
    dest = dest + 1;
  }
  *sehChainHead = sehPrevFrame;
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ce90  std::_Destroy_range_ptr_42ce90   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x0040644c (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of pointers (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_ptr_42ce90(int first,int last)

{
  for (; last != first; first = first + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cea8  MatchListWindows::SetupWindow   (17 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from MatchListWindows's OWL::TWindow subobject vtable at 0x004f2c80 (through the this-adjusting thunk at 0x00430ef5); slot name identified from OWL::TWindow's own implementation of that slot
//   also: MatchListWindows::vf13 [rtti:vtable]
void __cdecl MatchListWindows::SetupWindow(int *self)

{
  OWL::TWindow::SetupWindow(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cebc  MatchListWindows::EvGetDlgCode   (24 bytes)   [owl:response-table message-handler]
//   WM_GETDLGCODE
uint __cdecl MatchListWindows::EvGetDlgCode(int *self)

{
  uint uVar1;
  
  uVar1 = FUN_004a5774(*self);
  return uVar1 | 0x81;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ced4  MatchListWindows::EvKeyDown   (1024 bytes)   [owl:response-table message-handler]
//   WM_KEYDOWN
void __cdecl MatchListWindows::EvKeyDown(int *self,int param_2)

{
  SHORT SVar1;
  int first;
  undefined4 linesRect;
  int mode;
  tagRECT *pRect;
  int *piVar6;
  LONG *pLVar7;
  int *piVar8;
  bool extend;
  int rect2 [8];
  int result [4];
  int result2 [4];
  int local_48 [4];
  LONG local_38 [4];
  tagRECT rect;
  int local_18 [4];
  int first2;
  
  SVar1 = GetKeyState(1);
  if (-1 < SVar1) {
    if (self[0x44] == -1) {
      self[0x44] = 0;
    }
    SVar1 = GetKeyState(0x10);
    if ((-1 < SVar1) || (self[0x43] != -1)) {
      if ((-1 < SVar1) && (self[0x43] != -1)) {
        self[0x43] = -1;
      }
    }
    else {
      self[0x43] = self[0x44];
    }
    extend = false;
    first2 = self[0x44];
    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;
    FUN_004a7a6c(*self,&rect);
    pRect = &rect;
    pLVar7 = local_48 + 4;
    for (mode = 4; mode != 0; mode = mode + -1) {
      *pLVar7 = pRect->left;
      pRect = (tagRECT *)&pRect->top;
      pLVar7 = pLVar7 + 1;
    }
    piVar6 = local_48 + 4;
    piVar8 = local_18;
    for (mode = 4; mode != 0; mode = mode + -1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    if (param_2 == 0x20) {
      extend = true;
    }
    else if ((param_2 == 0x26) || (param_2 == 0x25)) {
      if ((self[0x44] != -1) && (0 < self[0x44])) {
        self[0x44] = self[0x44] + -1;
      }
      extend = true;
    }
    else if ((param_2 == 0x28) || (param_2 == 0x27)) {
      mode = self[0x44];
      if ((mode != -1) && (first = MatchListWindows::GetLineCount((int)self), mode < first + -1)) {
        self[0x44] = self[0x44] + 1;
      }
      extend = true;
    }
    else if ((param_2 == 0x24) || (param_2 == 0x23)) {
      mode = MatchListWindows::GetLineCount((int)self);
      if (0 < mode) {
        if (param_2 == 0x24) {
          mode = 0;
        }
        else {
          mode = MatchListWindows::GetLineCount((int)self);
          mode = mode + -1;
        }
        self[0x44] = mode;
      }
      extend = true;
    }
    else if ((param_2 == 0x21) || (param_2 == 0x22)) {
      if ((0 < self[0x40]) && (mode = MatchListWindows::GetLineCount((int)self), mode != 0)) {
        mode = (local_18[3] - local_18[1]) / self[0x40];
        if (param_2 == 0x21) {
          self[0x44] = self[0x44] - (mode + -1);
        }
        else {
          self[0x44] = self[0x44] + mode + -1;
        }
        if (self[0x44] < 0) {
          self[0x44] = 0;
        }
        else {
          mode = MatchListWindows::GetLineCount((int)self);
          if (mode <= self[0x44]) {
            mode = MatchListWindows::GetLineCount((int)self);
            self[0x44] = mode + -1;
          }
        }
      }
      extend = true;
    }
    else if (param_2 == 0x5d) {
      MatchListWindows::ShowContextMenu(self,(int *)0x0);
    }
    if (((extend) && (mode = MatchListWindows::GetLineCount((int)self), 0 < mode)) && (0 < self[0x40])) {
      local_48[0] = 0;
      local_48[1] = 0;
      local_48[2] = 0;
      local_48[3] = 0;
      if (self[0x43] == -1) {
        SVar1 = GetKeyState(0x11);
        extend = SVar1 < 0;
        if ((!extend) || (param_2 == 0x20)) {
          mode = 1;
          if ((extend) && (first = MatchListWindows::IsSelected((int)self,self[0x44]), first == 1)) {
            mode = 0;
          }
          MatchListWindows::Select(result2,self,self[0x44],1,mode,extend);
          piVar6 = result2;
          piVar8 = local_48;
          for (mode = 4; mode != 0; mode = mode + -1) {
            *piVar8 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar8 = piVar8 + 1;
          }
        }
      }
      else {
        mode = self[0x44];
        if (mode != first2) {
          first = self[0x43];
          if (mode < first) {
            MatchListWindows::Select(rect2 + 4,self,self[0x44],(self[0x43] - self[0x44]) + 1,1,
                         '\0');
            piVar6 = rect2 + 4;
            piVar8 = local_48;
            for (mode = 4; mode != 0; mode = mode + -1) {
              *piVar8 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar8 = piVar8 + 1;
            }
          }
          else {
            MatchListWindows::Select(result,self,first,(mode - first) + 1,1,'\0');
            piVar6 = result;
            piVar8 = local_48;
            for (mode = 4; mode != 0; mode = mode + -1) {
              *piVar8 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar8 = piVar8 + 1;
            }
          }
        }
      }
      rect2[0] = 0;
      rect2[1] = 0;
      rect2[2] = 0;
      rect2[3] = 0;
      linesRect = MatchListWindows::GetLinesRect(self,first2,1,rect2);
      if ((char)linesRect != '\0') {
        FUN_00494540(local_48,rect2);
      }
      linesRect = MatchListWindows::GetLinesRect(self,self[0x44],1,rect2);
      if ((char)linesRect != '\0') {
        FUN_00494540(local_48,rect2);
      }
      (**(code **)(*(int *)(*self + 8) + 0x6c))();
      mode = self[0x40];
      first = *(int *)(*(int *)(*self + 0x44) + 0xc);
      if (self[0x44] < (first + mode + -1) / mode) {
        (**(code **)(**(int **)(*self + 0x44) + 0x2c))();
      }
      else if ((((first + (local_18[3] - local_18[1])) - mode) + 1) / mode < self[0x44]) {
        (**(code **)(**(int **)(*self + 0x44) + 0x2c))();
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d2d4  MatchListWindows::EvSysKeyDown   (51 bytes)   [owl:response-table message-handler]
//   WM_SYSKEYDOWN
void __cdecl MatchListWindows::EvSysKeyDown(int *self,int param_2)

{
  SHORT SVar1;
  
  if (param_2 == 0x79) {
    SVar1 = GetKeyState(0x10);
    if (SVar1 < 0) {
      MatchListWindows::ShowContextMenu(self,(int *)0x0);
      return;
    }
  }
  FUN_004a5774(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d308  MatchListWindows::EvLButtonDown   (566 bytes)   [owl:response-table message-handler]
//   WM_LBUTTONDOWN
void __cdecl MatchListWindows::EvLButtonDown(int *self,byte modKeys,int point)

{
  HWND hWnd;
  HWND hWnd2;
  int iVar3;
  undefined4 linesRect;
  int iVar5;
  tagRECT *pRect;
  LONG *pLVar7;
  bool bVar8;
  int rect2 [8];
  undefined4 firstLo;
  undefined4 firstHi;
  int firstNode;
  int local_40;
  undefined4 unused;
  undefined4 unused2;
  int unused3;
  int unused4;
  tagRECT rect;
  int local_18 [4];
  int local_8;
  
  SetCapture(*(HWND *)(*self + 0xc));
  SetTimer(*(HWND *)(*self + 0xc),1,0x32,(TIMERPROC)0x0);
  hWnd2 = GetFocus();
  hWnd = *(HWND *)(*self + 0xc);
  SetFocus(*(HWND *)(*self + 0xc));
  rect.left = 0;
  rect.top = 0;
  rect.right = 0;
  rect.bottom = 0;
  FUN_004a7a6c(*self,&rect);
  pRect = &rect;
  pLVar7 = local_18;
  for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pLVar7 = pRect->left;
    pRect = (tagRECT *)&pRect->top;
    pLVar7 = pLVar7 + 1;
  }
  if (hWnd2 != hWnd) {
    unused4 = self[0x40];
    unused3 = local_18[2] - local_18[0];
    unused = 0;
    unused2 = 0;
    (**(code **)(*(int *)(*self + 8) + 0x6c))();
  }
  if (self[0x44] == -1) {
    self[0x44] = 0;
  }
  bVar8 = (modKeys & 4) != 0;
  if ((bVar8) && (self[0x43] == -1)) {
    self[0x43] = self[0x44];
  }
  else if ((!bVar8) && (self[0x43] != -1)) {
    self[0x43] = -1;
  }
  local_8 = self[0x44];
  iVar5 = 0;
  if (0 < self[0x40]) {
    iVar5 = (*(int *)(*(int *)(*self + 0x44) + 0xc) + *(int *)(point + 4)) / self[0x40];
  }
  iVar3 = MatchListWindows::GetLineCount((int)self);
  if (iVar5 < iVar3) {
    if (((modKeys & 8) == 0) || (bVar8)) {
      if (bVar8) {
        iVar3 = 1;
      }
      else {
        iVar3 = 2;
      }
      self[0x42] = iVar3;
      iVar3 = iVar5;
      if (bVar8) {
        iVar3 = self[0x43];
      }
      self[0x41] = iVar3;
      MatchListWindows::InvalidateSelection_stub(self);
      local_40 = self[0x27];
      firstNode = *(int *)(local_40 + 8);
      MatchListWindows::EntryTree::erase_range(rect2 + 4,(int)(self + 0x1e),firstLo,firstHi,firstNode);
    }
    else {
      iVar3 = MatchListWindows::IsSelected((int)self,iVar5);
      self[0x42] = (uint)(iVar3 != 1);
      self[0x41] = iVar5;
    }
    self[0x44] = iVar5;
    if (local_8 < iVar5) {
      iVar3 = iVar5 - local_8;
      iVar5 = local_8;
    }
    else {
      iVar3 = local_8 - iVar5;
    }
    rect2[0] = 0;
    rect2[1] = 0;
    rect2[2] = 0;
    rect2[3] = 0;
    linesRect = MatchListWindows::GetLinesRect(self,iVar5,iVar3 + 1,rect2);
    if ((char)linesRect != '\0') {
      (**(code **)(*(int *)(*self + 8) + 0x6c))();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d540  MatchListWindows::EvLButtonDblClk   (24 bytes)   [owl:response-table message-handler]
//   WM_LBUTTONDBLCLK
void __cdecl MatchListWindows::EvLButtonDblClk(int self)

{
  TEAViewWindows::OnListDoubleClick(*(int **)(self + 0xe0));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d558  MatchListWindows::EvLButtonUp   (158 bytes)   [owl:response-table message-handler]
//   WM_LBUTTONUP
void __cdecl MatchListWindows::EvLButtonUp(int *self)

{
  int first;
  int result [4];
  int result2 [4];
  
  KillTimer(*(HWND *)(*self + 0xc),1);
  ReleaseCapture();
  first = self[0x41];
  if (first != -1) {
    if (self[0x44] < first) {
      MatchListWindows::Select(result,self,self[0x44],(self[0x41] - self[0x44]) + 1,self[0x42],
                   self[0x42] != 2);
    }
    else {
      MatchListWindows::Select(result2,self,first,(self[0x44] - first) + 1,self[0x42],
                   self[0x42] != 2);
    }
    self[0x41] = -1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d5f8  MatchListWindows::EvRButtonDown   (6 bytes)   [owl:response-table message-handler]
//   WM_RBUTTONDOWN
void __stdcall MatchListWindows::EvRButtonDown(int *self,byte modKeys,int point)

{
  HWND hWnd;
  SHORT SVar2;
  HWND hWnd2;
  int iVar4;
  int iVar5;
  tagRECT *pRect;
  LONG *pLVar7;
  int result [4];
  undefined4 result2 [4];
  undefined4 firstLo;
  undefined4 firstHi;
  int firstNode;
  int iStack_3c;
  undefined4 unused;
  undefined4 unused2;
  int unused3;
  int unused4;
  tagRECT rect;
  int aiStack_14 [4];
  
  SVar2 = GetKeyState(1);
  if (-1 < SVar2) {
    hWnd2 = GetFocus();
    hWnd = *(HWND *)(*self + 0xc);
    SetFocus(*(HWND *)(*self + 0xc));
    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;
    FUN_004a7a6c(*self,&rect);
    pRect = &rect;
    pLVar7 = aiStack_14;
    for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pLVar7 = pRect->left;
      pRect = (tagRECT *)&pRect->top;
      pLVar7 = pLVar7 + 1;
    }
    if (hWnd2 != hWnd) {
      unused4 = self[0x40];
      unused3 = aiStack_14[2] - aiStack_14[0];
      unused = 0;
      unused2 = 0;
      (**(code **)(*(int *)(*self + 8) + 0x6c))();
    }
    if ((modKeys & 0xc) == 0) {
      iVar5 = 0;
      if (0 < self[0x40]) {
        iVar5 = (*(int *)(*(int *)(*self + 0x44) + 0xc) + *(int *)(point + 4)) / self[0x40];
      }
      iVar4 = MatchListWindows::GetLineCount((int)self);
      if (iVar5 < iVar4) {
        iVar4 = MatchListWindows::IsSelected((int)self,iVar5);
        if (iVar4 == 0) {
          MatchListWindows::InvalidateSelection_stub(self);
          iStack_3c = self[0x27];
          firstNode = *(int *)(iStack_3c + 8);
          MatchListWindows::EntryTree::erase_range(result2,(int)(self + 0x1e),firstLo,firstHi,firstNode);
          self[0x44] = iVar5;
          MatchListWindows::Select(result,self,iVar5,1,1,'\0');
          (**(code **)(*(int *)(*self + 8) + 0x6c))();
        }
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d5fe  MatchListWindows::EvRButtonDown_body   (359 bytes)   [analysis]
//   body of EvRButtonDown (Ghidra split the handler after its first instruction): takes the focus, moves the caret to the clicked line unless Shift/Ctrl are held, then shows the context menu
void __stdcall MatchListWindows::EvRButtonDown_body(void)

{
  HWND hWnd;
  int *matchListWindows;
  SHORT leftButton;
  HWND hWnd2;
  int iVar5;
  int line;
  int frame;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  matchListWindows = *(int **)(frame + 8);
  leftButton = GetKeyState(1);
  if (-1 < leftButton) {
    hWnd2 = GetFocus();
    hWnd = *(HWND *)(*matchListWindows + 0xc);
    SetFocus(*(HWND *)(*matchListWindows + 0xc));
    *(undefined4 *)(frame + -0x20) = 0;
    *(undefined4 *)(frame + -0x1c) = 0;
    *(undefined4 *)(frame + -0x18) = 0;
    *(undefined4 *)(frame + -0x14) = 0;
    FUN_004a7a6c(*matchListWindows,(LPRECT)(frame + -0x20));
    puVar7 = (undefined4 *)(frame + -0x20);
    puVar8 = (undefined4 *)(frame + -0x10);
    for (line = 4; line != 0; line = line + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    if (hWnd2 != hWnd) {
      line = matchListWindows[0x40];
      *(undefined4 *)(frame + -0x30) = 0;
      *(undefined4 *)(frame + -0x2c) = 0;
      *(int *)(frame + -0x28) = *(int *)(frame + -8) - *(int *)(frame + -0x10);
      *(int *)(frame + -0x24) = line;
      (**(code **)(*(int *)(*matchListWindows + 8) + 0x6c))();
    }
    if ((*(byte *)(frame + 0xc) & 0xc) == 0) {
      line = 0;
      if (0 < matchListWindows[0x40]) {
        line = (*(int *)(*(int *)(*matchListWindows + 0x44) + 0xc) + *(int *)(*(int *)(frame + 0x10) + 4)
                ) / matchListWindows[0x40];
      }
      iVar5 = MatchListWindows::GetLineCount((int)matchListWindows);
      if (line < iVar5) {
        iVar5 = MatchListWindows::IsSelected((int)matchListWindows,line);
        if (iVar5 == 0) {
          MatchListWindows::InvalidateSelection_stub(matchListWindows);
          iVar5 = matchListWindows[0x27];
          *(int *)(frame + -0x38) = iVar5;
          *(undefined4 *)(frame + -0x48) = *(undefined4 *)(iVar5 + 8);
          MatchListWindows::EntryTree::erase_range((undefined4 *)(frame + -0x60),(int)(matchListWindows + 0x1e),
                       *(undefined4 *)(frame + -0x50),*(undefined4 *)(frame + -0x4c),
                       *(int *)(frame + -0x48));
          matchListWindows[0x44] = line;
          MatchListWindows::Select((int *)(frame + -0x70),matchListWindows,line,1,1,'\0');
          (**(code **)(*(int *)(*matchListWindows + 8) + 0x6c))();
        }
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d768  MatchListWindows::EvRButtonUp   (35 bytes)   [owl:response-table message-handler]
//   WM_RBUTTONUP
void __cdecl MatchListWindows::EvRButtonUp(int *self,undefined4 modKeys,int *point)

{
  SHORT SVar1;
  
  SVar1 = GetKeyState(1);
  if (-1 < SVar1) {
    MatchListWindows::ShowContextMenu(self,point);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d78c  MatchListWindows::EvMouseMove   (6 bytes)   [owl:response-table message-handler]
//   WM_MOUSEMOVE
/* WARNING: Removing unreachable block (ram,0x0042d891) */
void __stdcall MatchListWindows::EvMouseMove(int *self,uint modKeys,int point)

{
  int first;
  int iVar2;
  undefined4 linesRect;
  int iVar4;
  undefined4 *entryAt;
  int *strRep;
  undefined4 *sehChainHead;
  int rect [5];
  undefined *unused;
  int iStack_3c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 text [8];
  undefined *puStack_c;
  
  __InitExceptBlockLDTC(0x4f28d4);
  if (self[0x41] != -1) {
    if ((modKeys & 1) == 0) {
      self[0x41] = -1;
    }
    else {
      iVar4 = 0;
      if (0 < self[0x40]) {
        iVar4 = (*(int *)(*(int *)(*self + 0x44) + 0xc) + *(int *)(point + 4)) / self[0x40];
      }
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else {
        first = MatchListWindows::GetLineCount((int)self);
        if (first <= iVar4) {
          iVar4 = MatchListWindows::GetLineCount((int)self);
          iVar4 = iVar4 + -1;
        }
      }
      first = self[0x44];
      if (iVar4 != first) {
        if (iVar4 < first) {
          iVar2 = first - iVar4;
          first = iVar4;
        }
        else {
          iVar2 = iVar4 - first;
        }
        rect[0] = 0;
        rect[1] = 0;
        rect[2] = 0;
        rect[3] = 0;
        linesRect = MatchListWindows::GetLinesRect(self,first,iVar2 + 1,rect);
        if ((char)linesRect != '\0') {
          (**(code **)(*(int *)(*self + 8) + 0x6c))();
        }
        self[0x44] = iVar4;
      }
      (**(code **)(**(int **)(*self + 0x44) + 0x3c))();
    }
  }
  puStack_c = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x20;
  iStack_3c = 0;
  if (0 < self[0x40]) {
    iStack_3c = (*(int *)(*(int *)(*self + 0x44) + 0xc) + *(int *)(point + 4)) / self[0x40];
  }
  iVar4 = std::find_ptr_42d9a0((int *)self[0x31],(int *)self[0x32],&iStack_3c);
  if (iVar4 != self[0x32]) {
    entryAt = MatchListWindows::GetEntryAt((int)self,iStack_3c);
    std::string::assign_cstr((int)text,(uint *)((int)entryAt + 9));
  }
  TEAViewWindows::ShowTooltip(self[0x38],(int)text,*(undefined4 *)(*self + 0xc),modKeys,
               (undefined2 *)point,0);
  ehDtorCount = ehDtorCount + -1;
  if (puStack_c != (undefined *)0x0) {
    if (*(int *)(puStack_c + -0xc) != -1) {
      strRep = (int *)(puStack_c + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar4 = *strRep + 1;
      }
      if (iVar4 != 0) goto LAB_0042d98e;
    }
    unused = puStack_c + -0xc;
    operator_delete();
  }
LAB_0042d98e:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d792  MatchListWindows::EvMouseMove_body   (525 bytes)   [analysis]
//   body of EvMouseMove (split by Ghidra): while dragging with the left button, extends the selection to the line under the mouse and auto-scrolls
/* WARNING: Removing unreachable block (ram,0x0042d891) */
void __stdcall MatchListWindows::EvMouseMove_body(void)

{
  undefined2 *point;
  int first;
  int iVar3;
  undefined4 linesRect;
  int line;
  undefined4 *entryAt;
  int *self;
  int frame;
  undefined4 *sehChainHead;
  
  point = *(undefined2 **)(frame + 0x10);
  self = *(int **)(frame + 8);
  __InitExceptBlockLDTC(0x4f28d4);
  if (self[0x41] != -1) {
    if ((*(byte *)(frame + 0xc) & 1) == 0) {
      self[0x41] = -1;
    }
    else {
      line = 0;
      if (0 < self[0x40]) {
        line = (*(int *)(*(int *)(*self + 0x44) + 0xc) + *(int *)(point + 2)) / self[0x40];
      }
      if (line < 0) {
        line = 0;
      }
      else {
        first = MatchListWindows::GetLineCount((int)self);
        if (first <= line) {
          line = MatchListWindows::GetLineCount((int)self);
          line = line + -1;
        }
      }
      first = self[0x44];
      if (line != first) {
        if (line < first) {
          iVar3 = first - line;
          first = line;
        }
        else {
          iVar3 = line - first;
        }
        *(undefined4 *)(frame + -0x50) = 0;
        *(undefined4 *)(frame + -0x4c) = 0;
        *(undefined4 *)(frame + -0x48) = 0;
        *(undefined4 *)(frame + -0x44) = 0;
        linesRect = MatchListWindows::GetLinesRect(self,first,iVar3 + 1,(int *)(frame + -0x50));
        if ((char)linesRect != '\0') {
          (**(code **)(*(int *)(*self + 8) + 0x6c))();
        }
        self[0x44] = line;
      }
      (**(code **)(**(int **)(*self + 0x44) + 0x3c))();
    }
  }
  *(undefined2 *)(frame + -0x24) = 8;
  *(undefined4 *)(frame + -8) = 0;
  *(undefined **)(frame + -8) = &g_emptyStringData;
  *(undefined4 *)(frame + -0x58) = *(undefined4 *)(frame + -8);
  *(int *)(frame + -0x18) = *(int *)(frame + -0x18) + 1;
  *(undefined2 *)(frame + -0x24) = 0x20;
  *(undefined4 *)(frame + -0x38) = 0;
  if (0 < self[0x40]) {
    *(int *)(frame + -0x38) =
         (*(int *)(*(int *)(*self + 0x44) + 0xc) + *(int *)(point + 2)) / self[0x40];
  }
  line = std::find_ptr_42d9a0((int *)self[0x31],(int *)self[0x32],(int *)(frame + -0x38));
  if (line != self[0x32]) {
    entryAt = MatchListWindows::GetEntryAt((int)self,*(int *)(frame + -0x38));
    std::string::assign_cstr(frame + -0x10,(uint *)((int)entryAt + 9));
  }
  TEAViewWindows::ShowTooltip(self[0x38],frame + -0x10,*(undefined4 *)(*self + 0xc),
               *(undefined4 *)(frame + 0xc),point,0);
  *(int *)(frame + -0x18) = *(int *)(frame + -0x18) + -1;
  if (*(int *)(frame + -8) != 0) {
    if (*(int *)(*(int *)(frame + -8) + -0xc) != -1) {
      self = (int *)(*(int *)(frame + -8) + -0xc);
      if (self == &g_nullStringRep) {
        line = 1;
      }
      else if (self == &g_nullStringRep) {
        line = 1;
      }
      else {
        *self = *self + -1;
        line = *self + 1;
      }
      if (line != 0) goto LAB_0042d98e;
    }
    *(int *)(frame + -0x3c) = *(int *)(frame + -8) + -0xc;
    operator_delete();
    *(undefined4 *)(frame + -8) = 0;
    *(int *)(frame + -0x40) = frame + -0x10;
    *(undefined4 *)(frame + -0x68) = *(undefined4 *)(*(int *)(frame + -0x40) + 8);
  }
LAB_0042d98e:
  *sehChainHead = *(undefined4 *)(frame + -0x34);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d9a0  std::find_ptr_42d9a0   (31 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00406564 (31 bytes; the code occurs several times, e.g. one template instance per type). find over a range of pointers
//   file placement: inferred (address adjacency)
int * __cdecl std::find_ptr_42d9a0(int *first,int *last,int *value)

{
  for (; (last != first && (*value != *first)); first = first + 1) {
  }
  return first;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d9c0  MatchListWindows::EvSetFocus   (150 bytes)   [owl:response-table message-handler]
//   WM_SETFOCUS
void __cdecl MatchListWindows::EvSetFocus(int *self)

{
  int lineCount;
  undefined4 linesRect;
  int rect [4];
  
  FUN_004a5774(*self);
  TEAViewWindows::OnListFocus(self[0x38],(int)self,1);
  if (self[0x44] == -1) {
    self[0x44] = 0;
    lineCount = MatchListWindows::GetLineCount((int)self);
    if (0 < lineCount) {
      MatchListWindows::SelectFirst(self);
    }
  }
  else {
    rect[0] = 0;
    rect[1] = 0;
    rect[2] = 0;
    rect[3] = 0;
    linesRect = MatchListWindows::GetLinesRect(self,self[0x44],1,rect);
    if ((char)linesRect != '\0') {
      (**(code **)(*(int *)(*self + 8) + 0x6c))();
    }
  }
  MatchListWindows::InvalidateSelection_stub(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042da58  MatchListWindows::EvKillFocus   (124 bytes)   [owl:response-table message-handler]
//   WM_KILLFOCUS
void __cdecl MatchListWindows::EvKillFocus(int *self)

{
  undefined4 linesRect;
  int rect [4];
  
  OWL::TWindow::EvKillFocus(*self);
  TEAViewWindows::OnListFocus(self[0x38],(int)self,0);
  if (self[0x44] != -1) {
    rect[0] = 0;
    rect[1] = 0;
    rect[2] = 0;
    rect[3] = 0;
    linesRect = MatchListWindows::GetLinesRect(self,self[0x44],1,rect);
    if ((char)linesRect != '\0') {
      (**(code **)(*(int *)(*self + 8) + 0x6c))();
    }
  }
  MatchListWindows::InvalidateSelection_stub(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dad4  MatchListWindows::EvTimer   (64 bytes)   [owl:response-table message-handler]
//   WM_TIMER
void __cdecl MatchListWindows::EvTimer(int *self)

{
  tagPOINT pt;
  
  pt.x = 0;
  pt.y = 0;
  GetCursorPos(&pt);
  ScreenToClient(*(HWND *)(*self + 0xc),&pt);
  MatchListWindows::EvMouseMove(self,1,(int)&pt);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042db14  MatchListWindows::EvVScroll   (200 bytes)   [owl:response-table message-handler]
//   WM_VSCROLL
void __cdecl MatchListWindows::EvVScroll(int *self,int param_2)

{
  int i;
  tagRECT *pRect;
  LONG *pLVar3;
  LONG *pLVar4;
  LONG newStr [4];
  tagRECT rect;
  undefined4 newStr2 [4];
  
  if (*(int *)(*self + 0x44) != 0) {
    if ((param_2 == 3) || (param_2 == 2)) {
      rect.left = 0;
      rect.top = 0;
      rect.right = 0;
      rect.bottom = 0;
      FUN_004a7a6c(*self,&rect);
      pRect = &rect;
      pLVar3 = newStr;
      for (i = 4; i != 0; i = i + -1) {
        *pLVar3 = pRect->left;
        pRect = (tagRECT *)&pRect->top;
        pLVar3 = pLVar3 + 1;
      }
      pLVar3 = newStr;
      pLVar4 = newStr2;
      for (i = 4; i != 0; i = i + -1) {
        *pLVar4 = *pLVar3;
        pLVar3 = pLVar3 + 1;
        pLVar4 = pLVar4 + 1;
      }
      (**(code **)(**(int **)(*self + 0x44) + 0x2c))();
    }
    else {
      (**(code **)(**(int **)(*self + 0x44) + 0x24))();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dbdc  MatchListWindows::SetFonts   (60 bytes)   [analysis]
//   creates the word and annotation fonts from two LOGFONTs and stores two colours
void __cdecl MatchListWindows::SetFonts(int self,undefined4 *wordFont,undefined4 *annotationFont,undefined4 wordColour, undefined4 annotationColour)

{
  undefined4 hFont;
  
  hFont = CreateFontFromLogFont(wordFont);
  *(undefined4 *)(self + 0xf8) = hFont;
  hFont = CreateFontFromLogFont(annotationFont);
  *(undefined4 *)(self + 0xfc) = hFont;
  *(undefined4 *)(self + 0xf0) = wordColour;
  *(undefined4 *)(self + 0xf4) = annotationColour;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dc18  MatchListWindows::AddEntry   (2032 bytes)   [analysis]
//   appends a result: the word, its annotation and the balance text become one Entry in the length group of the word
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 __cdecl MatchListWindows::AddEntry(int *self,uint *word_,uint *annotation,int suffix,undefined4 group)

{
  bool bVar1;
  char *wordLen;
  undefined4 *puVar3;
  undefined4 linesRect;
  int iVar5;
  int *pos;
  undefined4 *puVar7;
  int *piVar8;
  int *unaff_EDI;
  undefined4 *puVar9;
  undefined4 *sehChainHead;
  int rect [5];
  undefined4 unused;
  undefined4 unused2;
  undefined1 unused3;
  undefined4 result;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 local_13c;
  undefined4 unused4;
  undefined4 unused5;
  int unused6;
  undefined4 local_124;
  undefined4 local_120;
  int local_11c;
  int local_10c;
  undefined4 it;
  undefined4 local_100;
  int local_fc;
  undefined4 unused7;
  int *unused8;
  int local_d0;
  undefined4 *unused9;
  undefined4 *entryHead;
  int *local_c4;
  int local_c0;
  uint unused10;
  undefined4 *entryHead2;
  int unused11;
  int *local_b0;
  int *local_ac;
  uint local_a8;
  int first;
  undefined1 *unused12;
  undefined4 unused13;
  uint *unused14;
  uint *unused15;
  uint *strRep;
  uint *unused16;
  uint *unused17;
  uint *strRep2;
  int unused18;
  char *len;
  uint pos2;
  uint *s;
  int *entry;
  int lineCount;
  undefined4 local_58;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 *unused19;
  int entryHead3 [3];
  undefined4 *unused20;
  int entryHead4 [3];
  undefined1 str [8];
  uint *text;
  
  __InitExceptBlockLDTC(0x4f296c);
  lineCount = MatchListWindows::GetLineCount((int)self);
  if (lineCount == 0x7ffffff8) {
    *sehChainHead = local_58;
    return local_58;
  }
  wordLen = strlen(word_);
  if ((annotation == (uint *)0x0) && (*(int *)(*(int *)(suffix + 8) + -4) == 0)) {
    entry = (int *)operator_new();
    if (entry == (int *)0x0) {
      *sehChainHead = local_58;
      return 0;
    }
    MatchListWindows::Entry::Entry(entry,word_,wordLen,group);
    goto LAB_0042deb5;
  }
  ehContext = 8;
  std::string::string_from_cstr((int)str,word_);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x14;
  if (annotation != (uint *)0x0) {
    s = annotation;
    pos2 = text[-1];
    len = strlen(annotation);
    std::string::replace((int)str,pos2,0,(uint)s,(uint)len,0,(uint)len);
  }
  unused18 = suffix;
  std::string::append((int)str,suffix);
  entry = (int *)operator_new();
  if (entry == (int *)0x0) {
    ehDtorCount = ehDtorCount + -1;
    if (text != (uint *)0x0) {
      if (text[-3] != 0xffffffff) {
        strRep2 = text + -3;
        if (strRep2 == &g_nullStringRep) {
          iVar5 = 1;
        }
        else if (strRep2 == &g_nullStringRep) {
          iVar5 = 1;
        }
        else {
          *strRep2 = *strRep2 - 1;
          iVar5 = *strRep2 + 1;
        }
        if (iVar5 != 0) goto LAB_0042dda4;
      }
      unused17 = text + -3;
      unused16 = text + -3;
      operator_delete();
    }
LAB_0042dda4:
    *sehChainHead = local_58;
    return local_58;
  }
  MatchListWindows::Entry::Entry(entry,text,wordLen,group);
  ehDtorCount = ehDtorCount + -1;
  if (text != (uint *)0x0) {
    if (text[-3] != 0xffffffff) {
      strRep = text + -3;
      if (strRep == &g_nullStringRep) {
        iVar5 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar5 = 1;
      }
      else {
        *strRep = *strRep - 1;
        iVar5 = *strRep + 1;
      }
      if (iVar5 != 0) goto LAB_0042de76;
    }
    unused15 = text + -3;
    unused14 = text + -3;
    operator_delete();
    unused13 = 0;
    unused12 = str;
    text = (uint *)0x0;
    unused7 = 0;
  }
LAB_0042de76:
  ehContext = 0;
LAB_0042deb5:
  first = 0;
  if (self[0x39] == 0) {
    puVar3 = (undefined4 *)(((self[0x16] - self[0x15]) / 0xc + -1) * 0xc + self[0x15]);
    if (0x1ff < (int)puVar3[2]) {
      ehContext = 0x5c;
      entryHead3[0] = 0;
      entryHead3[1] = 0;
      entryHead3[2] = 0;
      local_c4 = entryHead3;
      ehDtorCount = ehDtorCount + 1;
      if (self[0x16] == self[0x1a]) {
        std::vector_EntryHead::insert_aux((int)(self + 0x14),(int *)self[0x16],local_c4);
      }
      else {
        entryHead = (undefined4 *)self[0x16];
        unused19 = entryHead;
        if (entryHead != (undefined4 *)0x0) {
          ehContext = 0x68;
          MatchListWindows::EntryHead::EntryHead_move(entryHead,local_c4);
        }
        ehContext = 0x5c;
        self[0x16] = self[0x16] + 0xc;
      }
      ehDtorCount = ehDtorCount + -1;
      MatchListWindows::EntryHead::Clear(entryHead3);
      unused8 = self + 0x14;
      local_d0 = (self[0x16] - self[0x15]) / 0xc + -1;
      puVar3 = (undefined4 *)(local_d0 * 0xc + self[0x15]);
      unused9 = puVar3;
    }
    if (puVar3[1] == 0) {
      puVar3[1] = entry;
      *puVar3 = entry;
    }
    else {
      *(int **)puVar3[1] = entry;
      puVar3[1] = entry;
    }
    puVar3[2] = puVar3[2] + 1;
    first = self[0x1c];
    if (self[0x3a] != 0) {
      MatchListWindows::SelectionTree::insert_unique(&result,self + 6,(int *)&entry);
      rect[4] = result;
      unused = local_148;
      unused2 = local_144;
      unused3 = local_13c;
    }
  }
  else {
    if (lineCount != 0) {
      local_a8 = 0;
      while( true ) {
        if ((uint)((self[0x16] - self[0x15]) / 0xc) <= local_a8) goto LAB_0042dfbb;
        unaff_EDI = (int *)(local_a8 * 0xc + self[0x15]);
        bVar1 = MatchListWindows::CompareEntries((int)entry,unaff_EDI[1],self[0x39]);
        if (bVar1) break;
        first = first + unaff_EDI[2];
        local_a8 = local_a8 + 1;
      }
      local_ac = (int *)0x0;
      pos = (int *)*unaff_EDI;
      while (piVar8 = pos, bVar1 = MatchListWindows::CompareEntries((int)entry,(int)piVar8,self[0x39]), !bVar1)
      {
        first = first + 1;
        pos = (int *)*piVar8;
        local_ac = piVar8;
      }
      if (local_ac == (int *)0x0) {
        *entry = *unaff_EDI;
        *unaff_EDI = (int)entry;
      }
      else {
        *entry = *local_ac;
        *local_ac = (int)entry;
      }
      unaff_EDI[2] = unaff_EDI[2] + 1;
LAB_0042dfbb:
      if ((uint)((self[0x16] - self[0x15]) / 0xc) <= local_a8) {
        local_a8 = local_a8 - 1;
        *(int **)unaff_EDI[1] = entry;
        unaff_EDI[1] = (int)entry;
        unaff_EDI[2] = unaff_EDI[2] + 1;
      }
      if (0x1ff < unaff_EDI[2]) {
        local_a8 = local_a8 + 1;
        ehContext = 0x38;
        entryHead4[0] = 0;
        entryHead4[1] = 0;
        entryHead4[2] = 0;
        local_b0 = entryHead4;
        ehDtorCount = ehDtorCount + 1;
        pos = (int *)(local_a8 * 0xc + self[0x15]);
        unused11 = ((int)pos - self[0x15]) / 0xc;
        if ((self[0x16] == self[0x1a]) || (pos != (int *)self[0x16])) {
          std::vector_EntryHead::insert_aux((int)(self + 0x14),pos,local_b0);
        }
        else {
          entryHead2 = (undefined4 *)self[0x16];
          unused20 = entryHead2;
          if (entryHead2 != (undefined4 *)0x0) {
            ehContext = 0x44;
            MatchListWindows::EntryHead::EntryHead_move(entryHead2,local_b0);
          }
          ehContext = 0x38;
          self[0x16] = self[0x16] + 0xc;
        }
        ehDtorCount = ehDtorCount + -1;
        MatchListWindows::EntryHead::Clear(entryHead4);
        unused10 = local_a8;
        local_c0 = local_a8 - 1;
        puVar7 = (undefined4 *)(local_a8 * 0xc + self[0x15]);
        puVar9 = (undefined4 *)(local_c0 * 0xc + self[0x15]);
        puVar3 = (undefined4 *)*puVar9;
        iVar5 = 0;
        do {
          puVar3 = (undefined4 *)*puVar3;
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0xff);
        *puVar7 = *puVar3;
        puVar7[2] = 0x100;
        puVar7[1] = puVar9[1];
        puVar9[1] = puVar3;
        *puVar3 = 0;
        puVar9[2] = 0x100;
      }
      local_fc = *(int *)(self[0x27] + 8);
      while (local_10c = self[0x27], local_10c != local_fc) {
        pos = (int *)(local_fc + 0x10);
        if (*pos < first) {
          if ((first < *pos) || (*pos + *(int *)(local_fc + 0x14) <= first)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            *(int *)(local_fc + 0x14) = *(int *)(local_fc + 0x14) + 1;
          }
        }
        else {
          *pos = *pos + 1;
        }
        local_124 = it;
        local_120 = local_100;
        local_11c = local_fc;
        __rwstd::__rb_tree::iterator::increment((int)&it);
        unused4 = local_124;
        unused5 = local_120;
        unused6 = local_11c;
      }
      if ((first <= self[0x44]) && ((self[0x41] != -1 || (self[0x43] != -1)))) {
        self[0x44] = self[0x44] + 1;
      }
      if (first <= self[0x41]) {
        self[0x41] = self[0x41] + 1;
      }
      if (first <= self[0x43]) {
        self[0x43] = self[0x43] + 1;
      }
      goto LAB_0042e396;
    }
    puVar3 = (undefined4 *)self[0x15];
    puVar3[1] = entry;
    *puVar3 = entry;
    puVar3[2] = 1;
  }
LAB_0042e396:
  self[0x1c] = self[0x1c] + 1;
  self[0x2c] = -2;
  rect[0] = 0;
  rect[1] = 0;
  rect[2] = 0;
  rect[3] = 0;
  linesRect = MatchListWindows::GetLinesRect(self,first,self[0x1c],rect);
  if ((char)linesRect != '\0') {
    FUN_00494540(self + 0x45,rect);
  }
  *sehChainHead = local_58;
  return local_58;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e408  MatchListWindows::SelectionTree::insert_unique   (513 bytes, 2 ranges)   [analysis]
//   set<Selection>::insert: finds the position with CompareEntries and inserts unless an equal key exists
//   file placement: inferred (address adjacency)
undefined4 * __cdecl MatchListWindows::SelectionTree::insert_unique(undefined4 *result,int *tree,int *value)

{
  undefined4 goLeft;
  int node;
  undefined4 result2;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 result3;
  undefined4 local_78;
  undefined4 local_74;
  int local_4c;
  undefined4 it;
  undefined4 local_40;
  int parent2;
  undefined4 result4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  int parent;
  
  parent = tree[9];
  node = *(int *)(parent + 4);
  goLeft = 1;
  while (node != 0) {
    parent = node;
    goLeft = MatchListWindows::SelectionLess(tree + 0xc,*value,*(int *)(node + 0x10));
    if ((char)goLeft == '\0') {
      node = *(int *)(node + 0xc);
    }
    else {
      node = *(int *)(node + 8);
    }
  }
  if ((char)tree[0xb] == '\0') {
    parent2 = parent;
    if ((char)goLeft != '\0') {
      local_4c = *(int *)(tree[9] + 8);
      if (local_4c == parent) {
        local_a = 1;
        MatchListWindows::SelectionTree::__insert((int)&result3,tree,0,parent,value);
        *result = result3;
        result[1] = local_78;
        result[2] = local_74;
        *(undefined1 *)(result + 4) = local_a;
        return result;
      }
      __rwstd::__rb_tree::iterator::decrement((int)&it);
    }
    goLeft = MatchListWindows::SelectionLess(tree + 0xc,*(int *)(parent2 + 0x10),*value);
    if ((char)goLeft == '\0') {
      *result = it;
      result[1] = local_40;
      result[2] = parent2;
      *(undefined1 *)(result + 4) = 0;
    }
    else {
      local_b = 1;
      MatchListWindows::SelectionTree::__insert((int)&result2,tree,0,parent,value);
      *result = result2;
      result[1] = local_a0;
      result[2] = local_9c;
      *(undefined1 *)(result + 4) = local_b;
    }
  }
  else {
    local_9 = 1;
    MatchListWindows::SelectionTree::__insert((int)&result4,tree,0,parent,value);
    *result = result4;
    result[1] = local_30;
    result[2] = local_2c;
    *(undefined1 *)(result + 4) = local_9;
  }
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e60c  MatchListWindows::SelectionTree::__insert   (763 bytes)   [analysis]
//   links a new node under the parent and rebalances (red-black insert)
//   file placement: inferred (address adjacency)
int __cdecl MatchListWindows::SelectionTree::__insert(int result,int *tree,int forceLeft,int parent,int *value)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *node;
  undefined4 less;
  undefined4 *puVar6;
  
  node = MatchListWindows::SelectionTree::__get_node(tree,value);
  tree[10] = tree[10] + 1;
  if ((parent != tree[9]) && (forceLeft == 0)) {
    less = MatchListWindows::SelectionLess(tree + 0xc,*value,*(int *)(parent + 0x10));
    if ((char)less == '\0') {
      *(undefined4 **)(parent + 0xc) = node;
      if (parent == *(int *)(tree[9] + 0xc)) {
        *(undefined4 **)(tree[9] + 0xc) = node;
      }
      goto LAB_0042e6c0;
    }
  }
  *(undefined4 **)(parent + 8) = node;
  if (parent == tree[9]) {
    *(undefined4 **)(tree[9] + 4) = node;
    *(undefined4 **)(tree[9] + 0xc) = node;
  }
  else if (parent == *(int *)(tree[9] + 8)) {
    *(undefined4 **)(tree[9] + 8) = node;
  }
LAB_0042e6c0:
  node[1] = parent;
  puVar6 = node;
  while ((puVar6 != *(undefined4 **)(tree[9] + 4) && (*(int *)puVar6[1] == 0))) {
    iVar1 = *(int *)(puVar6[1] + 4);
    if (*(int *)(iVar1 + 8) == puVar6[1]) {
      piVar2 = *(int **)(iVar1 + 0xc);
      if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
        puVar3 = (undefined4 *)puVar6[1];
        if (puVar6 == (undefined4 *)puVar3[3]) {
          iVar1 = puVar3[3];
          puVar3[3] = *(undefined4 *)(iVar1 + 8);
          if (*(int *)(iVar1 + 8) != 0) {
            *(undefined4 **)(*(int *)(iVar1 + 8) + 4) = puVar3;
          }
          *(undefined4 *)(iVar1 + 4) = puVar3[1];
          if (puVar3 == *(undefined4 **)(tree[9] + 4)) {
            *(int *)(tree[9] + 4) = iVar1;
          }
          else if (puVar3 == *(undefined4 **)(puVar3[1] + 8)) {
            *(int *)(puVar3[1] + 8) = iVar1;
          }
          else {
            *(int *)(puVar3[1] + 0xc) = iVar1;
          }
          *(undefined4 **)(iVar1 + 8) = puVar3;
          puVar3[1] = iVar1;
          puVar6 = puVar3;
        }
        puVar3 = (undefined4 *)puVar6[1];
        *puVar3 = 1;
        puVar3 = (undefined4 *)puVar3[1];
        *puVar3 = 0;
        iVar1 = puVar3[2];
        puVar3[2] = *(undefined4 *)(iVar1 + 0xc);
        if (*(int *)(iVar1 + 0xc) != 0) {
          *(undefined4 **)(*(int *)(iVar1 + 0xc) + 4) = puVar3;
        }
        *(undefined4 *)(iVar1 + 4) = puVar3[1];
        if (puVar3 == *(undefined4 **)(tree[9] + 4)) {
          *(int *)(tree[9] + 4) = iVar1;
        }
        else if (puVar3 == *(undefined4 **)(puVar3[1] + 0xc)) {
          *(int *)(puVar3[1] + 0xc) = iVar1;
        }
        else {
          *(int *)(puVar3[1] + 8) = iVar1;
        }
        *(undefined4 **)(iVar1 + 0xc) = puVar3;
        puVar3[1] = iVar1;
      }
      else {
        *(undefined4 *)puVar6[1] = 1;
        *piVar2 = 1;
        puVar6 = *(undefined4 **)(puVar6[1] + 4);
        *puVar6 = 0;
      }
    }
    else {
      piVar2 = *(int **)(*(int *)(puVar6[1] + 4) + 8);
      if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
        puVar3 = (undefined4 *)puVar6[1];
        if (puVar6 == (undefined4 *)puVar3[2]) {
          iVar1 = puVar3[2];
          puVar3[2] = *(undefined4 *)(iVar1 + 0xc);
          if (*(int *)(iVar1 + 0xc) != 0) {
            *(undefined4 **)(*(int *)(iVar1 + 0xc) + 4) = puVar3;
          }
          *(undefined4 *)(iVar1 + 4) = puVar3[1];
          if (puVar3 == *(undefined4 **)(tree[9] + 4)) {
            *(int *)(tree[9] + 4) = iVar1;
          }
          else if (puVar3 == *(undefined4 **)(puVar3[1] + 0xc)) {
            *(int *)(puVar3[1] + 0xc) = iVar1;
          }
          else {
            *(int *)(puVar3[1] + 8) = iVar1;
          }
          *(undefined4 **)(iVar1 + 0xc) = puVar3;
          puVar3[1] = iVar1;
          puVar6 = puVar3;
        }
        puVar3 = (undefined4 *)puVar6[1];
        *puVar3 = 1;
        puVar3 = (undefined4 *)puVar3[1];
        *puVar3 = 0;
        iVar1 = puVar3[3];
        puVar3[3] = *(undefined4 *)(iVar1 + 8);
        if (*(int *)(iVar1 + 8) != 0) {
          *(undefined4 **)(*(int *)(iVar1 + 8) + 4) = puVar3;
        }
        *(undefined4 *)(iVar1 + 4) = puVar3[1];
        if (puVar3 == *(undefined4 **)(tree[9] + 4)) {
          *(int *)(tree[9] + 4) = iVar1;
        }
        else if (puVar3 == *(undefined4 **)(puVar3[1] + 8)) {
          *(int *)(puVar3[1] + 8) = iVar1;
        }
        else {
          *(int *)(puVar3[1] + 0xc) = iVar1;
        }
        *(undefined4 **)(iVar1 + 8) = puVar3;
        puVar3[1] = iVar1;
      }
      else {
        *(undefined4 *)puVar6[1] = 1;
        *piVar2 = 1;
        puVar6 = *(undefined4 **)(puVar6[1] + 4);
        *puVar6 = 0;
      }
    }
  }
  **(undefined4 **)(tree[9] + 4) = 1;
  *(undefined4 **)(result + 8) = node;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e908  MatchListWindows::SelectionTree::__get_node   (165 bytes, 2 ranges)   [analysis]
//   takes a node from the free list (or a new buffer) and stores the value
//   file placement: inferred (address adjacency)
undefined4 * __cdecl MatchListWindows::SelectionTree::__get_node(int *tree,undefined4 *value)

{
  undefined4 *node;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f2a0c);
  node = (undefined4 *)tree[6];
  if (node == (undefined4 *)0x0) {
    if (tree[7] == tree[8]) {
      MatchListWindows::SelectionTree::AddNodeBuffer(tree);
      node = (undefined4 *)tree[7];
      tree[7] = tree[7] + 0x14;
    }
    else {
      node = (undefined4 *)tree[7];
      tree[7] = tree[7] + 0x14;
    }
  }
  else {
    tree[6] = *(int *)(tree[6] + 0xc);
  }
  node[1] = 0;
  node[2] = 0;
  node[3] = 0;
  *node = 0;
  node[4] = *value;
  *sehChainHead = sehPrevFrame;
  return node;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e9d8  __rwstd::__rb_tree::iterator::decrement   (107 bytes)   [analysis]
//   --iterator (in-order predecessor)
//   file placement: inferred (address adjacency)
void __cdecl __rwstd::__rb_tree::iterator::decrement(int it)

{
  int *node;
  int parent;
  
  node = *(int **)(it + 8);
  if ((*node == 0) && (node == *(int **)(node[1] + 4))) {
    *(int *)(it + 8) = node[3];
  }
  else if (*(int *)(*(int *)(it + 8) + 8) == 0) {
    for (parent = *(int *)(*(int *)(it + 8) + 4); *(int *)(it + 8) == *(int *)(parent + 8);
        parent = *(int *)(parent + 4)) {
      *(int *)(it + 8) = parent;
    }
    *(int *)(it + 8) = parent;
  }
  else {
    for (parent = *(int *)(*(int *)(it + 8) + 8); *(int *)(parent + 0xc) != 0;
        parent = *(int *)(parent + 0xc)) {
    }
    *(int *)(it + 8) = parent;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ea44  MatchListWindows::Contains   (263 bytes)   [analysis]
//   whether the list already holds the word (looked up in the entry tree, or by scanning the groups when sorted by a column)
bool __cdecl MatchListWindows::Contains(int self,uint *word_,char *wordLen)

{
  int iVar1;
  uint i;
  undefined4 *entry;
  bool bVar4;
  undefined4 result [2];
  int local_428;
  undefined4 newStr [256];
  undefined4 *probe;
  int local_c;
  undefined4 *head;
  
  if (*(int *)(self + 0xe4) == 0) {
    probe = newStr;
    MatchListWindows::Entry::Entry(probe,word_,wordLen,0);
    MatchListWindows::SelectionTree::find(result,self + 0x18,(int *)&probe);
    bVar4 = *(int *)(self + 0x3c) != local_428;
  }
  else {
    iVar1 = MatchListWindows::GetLineCount(self);
    if (0 < iVar1) {
      for (i = 0; i < (uint)((*(int *)(self + 0x58) - *(int *)(self + 0x54)) / 0xc);
          i = i + 1) {
        head = (undefined4 *)(i * 0xc + *(int *)(self + 0x54));
        iVar1 = MatchListWindows::CompareWithEntry(head[1],(byte *)word_,(int)wordLen,*(uint *)(self + 0xe4));
        if (-1 < iVar1) {
          entry = (undefined4 *)*head;
          while (local_c = MatchListWindows::CompareWithEntry((int)entry,(byte *)word_,(int)wordLen,
                                        *(uint *)(self + 0xe4)), local_c < 0) {
            entry = (undefined4 *)*entry;
          }
          return local_c == 0;
        }
      }
    }
    bVar4 = false;
  }
  return bVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042eb4c  MatchListWindows::SelectionTree::find   (193 bytes)   [analysis]
//   set<Selection>::find
//   file placement: inferred (address adjacency)
undefined4 * __cdecl MatchListWindows::SelectionTree::find(undefined4 *result,int tree,int *key)

{
  undefined4 less;
  int node;
  undefined4 *puVar3;
  undefined4 newStr [2];
  undefined4 unused;
  int unused2;
  undefined4 newStr2 [2];
  int unused3;
  undefined4 unused4;
  int unused5;
  int candidate;
  
  candidate = *(int *)(tree + 0x24);
  node = *(int *)(*(int *)(tree + 0x24) + 4);
  while (node != 0) {
    less = MatchListWindows::SelectionLess(tree + 0x30,*(int *)(node + 0x10),*key);
    if ((char)less == '\0') {
      candidate = node;
      node = *(int *)(node + 8);
    }
    else {
      node = *(int *)(node + 0xc);
    }
  }
  unused3 = candidate;
  unused2 = *(int *)(tree + 0x24);
  if (*(int *)(tree + 0x24) != candidate) {
    unused5 = candidate;
    less = MatchListWindows::SelectionLess(tree + 0x30,*key,*(int *)(candidate + 0x10));
    if ((char)less == '\0') {
      puVar3 = newStr2;
      goto LAB_0042ebed;
    }
  }
  puVar3 = newStr;
  unused4 = *(undefined4 *)(tree + 0x24);
  unused = *(undefined4 *)(tree + 0x24);
LAB_0042ebed:
  *result = *puVar3;
  result[1] = puVar3[1];
  result[2] = puVar3[2];
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ec10  MatchListWindows::MoveCaret   (142 bytes)   [analysis]
//   arrow/Home/End: moves the caret line and selects (extending when asked)
undefined4 __cdecl MatchListWindows::MoveCaret(int *self,int key,int extend)

{
  int lineCount;
  int line;
  
  if (key == 0x26) {
    line = self[0x44] + -1;
  }
  else if (key == 0x28) {
    line = self[0x44] + 1;
  }
  else if (key == 0x24) {
    line = 0;
  }
  else if (key == 0x23) {
    lineCount = MatchListWindows::GetLineCount((int)self);
    line = lineCount + -1;
  }
  if ((-1 < line) && (lineCount = MatchListWindows::GetLineCount((int)self), line < lineCount)) {
    if (extend == 0) {
      if (self[0x44] == -1) {
        if ((key == 0x26) || (key == 0x28)) {
          return 0;
        }
        self[0x44] = line;
      }
      MatchListWindows::EvKeyDown(self,key);
    }
    return 1;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042eca0  MatchListWindows::GetEntry   (92 bytes)   [analysis]
//   text, group and flag of the first selected entry (or of the caret entry)
undefined1 __cdecl MatchListWindows::GetEntry(int self,int useCaret,int text,undefined4 *group)

{
  undefined4 *entry;
  int index;
  
  if (useCaret == 0) {
    index = *(int *)(*(int *)(*(int *)(self + 0x9c) + 8) + 0x10);
  }
  else {
    index = *(int *)(self + 0x110);
  }
  entry = MatchListWindows::GetEntryAt(self,index);
  std::string::assign_cstr(text,(uint *)((int)entry + 9));
  *group = entry[1];
  return *(undefined1 *)(entry + 2);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ecfc  MatchListWindows::SelectFirst   (54 bytes)   [analysis]
//   selects the first line and repaints
void __cdecl MatchListWindows::SelectFirst(int *self)

{
  int ranges [4];
  
  MatchListWindows::Select(ranges,self,0,1,1,'\0');
  (**(code **)(*(int *)(*self + 8) + 0x6c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ed34  MatchListWindows::SelectAll   (54 bytes)   [analysis]
//   selects every line and repaints
void __cdecl MatchListWindows::SelectAll(int *self)

{
  int lineCount;
  int mode;
  char extend;
  int ranges [4];
  
  extend = '\0';
  mode = 1;
  lineCount = MatchListWindows::GetLineCount((int)self);
  MatchListWindows::Select(ranges,self,0,lineCount,mode,extend);
  (**(code **)(self[3] + 0x24))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ed6c  MatchListWindows::GetEntryFlag   (32 bytes)   [analysis]
//   flag byte of entry `index`
undefined1 __cdecl MatchListWindows::GetEntryFlag(int self,int index)

{
  undefined4 *entry;
  
  entry = MatchListWindows::GetEntryAt(self,index);
  return *(undefined1 *)(entry + 2);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ed8c  MatchListWindows::Select   (3151 bytes)   [analysis]
//   changes the selection: a single range, or toggling/extending ranges across groups; returns the set of ranges that changed
/* WARNING: Removing unreachable block (ram,0x0042ee37) */
/* WARNING: Removing unreachable block (ram,0x0042ee0b) */
int * __cdecl MatchListWindows::Select(int *result,int *self,int first,int count,int mode,char extend)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 linesRect;
  int first2;
  tagRECT *pRect;
  int *piVar6;
  LONG *pLVar7;
  int *piVar8;
  undefined4 *sehChainHead;
  byte bVar9;
  undefined4 firstLo;
  undefined4 firstHi;
  undefined4 result2 [4];
  int rect2 [5];
  undefined4 unused;
  undefined4 *unused2;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 *local_454;
  undefined4 *unused3;
  undefined4 *unused4;
  undefined4 *local_424;
  undefined4 it;
  undefined4 local_418;
  undefined4 *local_414;
  undefined4 unused5;
  undefined4 unused6;
  int unused7;
  undefined4 local_3fc;
  undefined4 local_3f8;
  int local_3f4;
  int local_3e4;
  int local_3d4;
  int local_3c4;
  undefined4 it2;
  undefined4 local_3b8;
  int local_3b4;
  int local_3ac [4];
  tagRECT rect;
  LONG local_38c;
  int local_388;
  int local_380;
  undefined4 unused8;
  undefined4 unused9;
  undefined4 unused10;
  undefined1 unused11;
  undefined4 result3;
  undefined4 local_360;
  undefined4 local_35c;
  undefined1 local_354;
  undefined4 unused12;
  undefined4 unused13;
  undefined4 unused14;
  undefined1 unused15;
  undefined4 result4;
  undefined4 local_330;
  undefined4 local_32c;
  undefined1 local_324;
  undefined4 unused16;
  undefined4 unused17;
  undefined4 unused18;
  undefined1 unused19;
  undefined4 result5;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined1 local_2f4;
  undefined4 unused20;
  undefined4 unused21;
  undefined4 unused22;
  undefined1 unused23;
  undefined4 result6;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined1 local_2c4;
  undefined4 unused24;
  undefined4 unused25;
  undefined4 unused26;
  undefined1 unused27;
  undefined4 result7;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined1 local_294;
  undefined4 unused28;
  undefined4 unused29;
  int unused30;
  undefined4 local_27c;
  undefined4 local_278;
  int local_274;
  int local_264;
  int local_254;
  int local_244;
  undefined4 it3;
  undefined4 local_238;
  int local_234;
  undefined4 unused31;
  undefined4 unused32;
  undefined4 unused33;
  undefined1 unused34;
  undefined4 result8;
  undefined4 local_210;
  undefined4 local_20c;
  undefined1 local_204;
  undefined4 unused35;
  undefined4 unused36;
  undefined4 unused37;
  undefined1 unused38;
  undefined4 result9;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined1 local_1d4;
  undefined4 unused39;
  undefined4 unused40;
  undefined4 unused41;
  undefined1 unused42;
  undefined4 result10;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined1 local_1a4;
  undefined4 unused43;
  undefined4 unused44;
  int unused45;
  undefined4 local_18c;
  undefined4 local_188;
  int local_184;
  int local_174;
  int local_164;
  int local_154;
  undefined4 it4;
  undefined4 local_148;
  int local_144;
  undefined4 unused46;
  undefined4 *unused47;
  undefined4 *unused48;
  int firstNode;
  int *entryTree;
  char local_11a;
  char local_119;
  int local_118;
  int unused49;
  int unused50;
  int *value;
  int *value2;
  int local_104;
  int unused51;
  int *value3;
  int *local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int *value4;
  int local_e4;
  int local_e0;
  int *value5;
  int local_d8;
  int unused52;
  int unused53;
  int unused54;
  int *value6;
  int *value7;
  int *local_c0;
  int unused55;
  int unused56;
  int *value8;
  int local_b0;
  int *local_ac;
  int local_a8;
  int unused57;
  undefined4 *local_a0;
  undefined4 unused58;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int local_74;
  int start;
  int unused59;
  int local_64;
  int unused60;
  int local_5c;
  int unused61;
  int local_54;
  int unused62;
  int first3;
  int unused63;
  int rangeStart;
  int unused64;
  int changed [4];
  undefined4 unused65;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 unused66;
  undefined4 *local_18;
  undefined4 unused67;
  undefined1 unused68;
  undefined4 unused69;
  undefined4 unused70;
  
  bVar9 = 0;
  __InitExceptBlockLDTC(0x4f2aa0);
  ehContext = 0x14;
  local_18 = (undefined4 *)0x0;
  unused67 = 0;
  unused68 = 0;
  unused69 = local_98;
  unused70 = local_94;
  changed[0] = 1;
  unused65 = 0;
  unused46 = 0;
  unused66 = 0;
  local_20 = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  unused58 = 0;
  MatchListWindows::EntryTree::AddNodeBuffer(changed);
  puVar1 = local_20 + 6;
  local_a0 = local_20;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  *local_20 = 0;
  local_20[1] = 0;
  local_20[2] = local_20;
  local_20[3] = local_20;
  changed[0] = 0x80;
  ehContext = 0x2c;
  local_20 = puVar1;
  local_18 = local_a0;
  if (extend == '\0') {
    ehContext = 0x74;
    unused50 = count;
    unused49 = first;
    value = &start;
    start = first;
    unused59 = count;
    local_74 = local_74 + 3;
    MatchListWindows::EntryTree::insert_unique(&result3,changed,value);
    unused8 = result3;
    unused9 = local_360;
    unused10 = local_35c;
    unused11 = local_354;
    local_74 = local_74 + -1;
  }
  else if (mode == 1) {
    local_154 = *(int *)(self[0x27] + 8);
    local_144 = local_154;
    unused57 = local_154;
    local_74 = local_74 + 2;
    while (local_174 = self[0x27], local_164 = local_174, local_a8 = local_174,
          local_174 != local_144) {
      if ((0 < count) &&
         (local_ac = (int *)(local_144 + 0x10), first < *local_ac + *(int *)(local_144 + 0x14))) {
        ehContext = 0x2c;
        local_b0 = count;
        if (*(int *)(local_144 + 0x10) < count + first) {
          local_b0 = *(int *)(local_144 + 0x10) - first;
        }
        if (0 < local_b0) {
          ehContext = 0x38;
          unused56 = local_b0;
          value8 = &rangeStart;
          unused64 = local_b0;
          local_74 = local_74 + 1;
          unused55 = first;
          rangeStart = first;
          MatchListWindows::EntryTree::insert_unique(&result10,changed,value8);
          unused39 = result10;
          unused40 = local_1b0;
          unused41 = local_1ac;
          unused42 = local_1a4;
          local_74 = local_74 + -1;
        }
        local_c0 = (int *)(local_144 + 0x10);
        local_b0 = (*local_c0 + *(int *)(local_144 + 0x14)) - first;
        first = first + local_b0;
        count = count - local_b0;
      }
      value7 = (int *)(local_144 + 0x10);
      MatchListWindows::EntryTree::insert_unique(&result9,changed,value7);
      unused35 = result9;
      unused36 = local_1e0;
      unused37 = local_1dc;
      unused38 = local_1d4;
      local_18c = it4;
      local_188 = local_148;
      local_184 = local_144;
      __rwstd::__rb_tree::iterator::increment_42ba94((int)&it4);
      unused43 = local_18c;
      unused44 = local_188;
      unused45 = local_184;
    }
    if (0 < count) {
      ehContext = 0x44;
      value6 = &first3;
      local_74 = local_74 + 1;
      unused53 = first;
      unused54 = count;
      first3 = first;
      unused63 = count;
      MatchListWindows::EntryTree::insert_unique(&result8,changed,value6);
      unused31 = result8;
      unused32 = local_210;
      unused33 = local_20c;
      unused34 = local_204;
      local_74 = local_74 + -1;
    }
  }
  else {
    local_244 = *(int *)(self[0x27] + 8);
    local_234 = local_244;
    unused52 = local_244;
    local_74 = local_74 + 2;
    while (local_264 = self[0x27], local_254 = local_264, local_264 != local_234) {
      if ((*(int *)(local_234 + 0x10) < first) ||
         (count + first <= *(int *)(local_234 + 0x10))) {
        if ((*(int *)(local_234 + 0x10) < first) &&
           (first < *(int *)(local_234 + 0x10) + *(int *)(local_234 + 0x14))) {
          ehContext = 0x5c;
          local_ec = first - *(int *)(local_234 + 0x10);
          local_f0 = *(int *)(local_234 + 0x10);
          value4 = &local_5c;
          local_74 = local_74 + 1;
          local_5c = local_f0;
          unused61 = local_ec;
          MatchListWindows::EntryTree::insert_unique(&result6,changed,value4);
          unused20 = result6;
          unused21 = local_2d0;
          unused22 = local_2cc;
          unused23 = local_2c4;
          local_f8 = (int *)(local_234 + 0x10);
          local_f4 = (*local_f8 + *(int *)(local_234 + 0x14)) - (count + first);
          ehContext = 0x2c;
          first2 = local_74 + -1;
          if (0 < local_f4) {
            ehContext = 0x68;
            local_104 = count + first;
            value3 = &local_64;
            unused51 = local_f4;
            local_64 = local_104;
            unused60 = local_f4;
            MatchListWindows::EntryTree::insert_unique(&result5,changed,value3);
            unused16 = result5;
            unused17 = local_300;
            unused18 = local_2fc;
            unused19 = local_2f4;
            first2 = local_74 + -1;
          }
        }
        else {
          value2 = (int *)(local_234 + 0x10);
          MatchListWindows::EntryTree::insert_unique(&result4,changed,value2);
          unused12 = result4;
          unused13 = local_330;
          unused14 = local_32c;
          unused15 = local_324;
          first2 = local_74;
        }
      }
      else {
        local_d8 = (count + first) - *(int *)(local_234 + 0x10);
        ehContext = 0x2c;
        first2 = local_74;
        if (local_d8 < *(int *)(local_234 + 0x14)) {
          ehContext = 0x50;
          local_e0 = *(int *)(local_234 + 0x14) - local_d8;
          local_e4 = *(int *)(local_234 + 0x10) + local_d8;
          value5 = &local_54;
          local_74 = local_74 + 1;
          local_54 = local_e4;
          unused62 = local_e0;
          MatchListWindows::EntryTree::insert_unique(&result7,changed,value5);
          unused24 = result7;
          unused25 = local_2a0;
          unused26 = local_29c;
          unused27 = local_294;
          first2 = local_74 + -1;
        }
      }
      local_74 = first2;
      local_27c = it3;
      local_278 = local_238;
      local_274 = local_234;
      __rwstd::__rb_tree::iterator::increment_42ba94((int)&it3);
      unused28 = local_27c;
      unused29 = local_278;
      unused30 = local_274;
    }
  }
  rect.left = 0;
  rect.top = 0;
  rect.right = 0;
  rect.bottom = 0;
  FUN_004a7a6c(*self,&rect);
  pRect = &rect;
  pLVar7 = &local_38c;
  for (first2 = 4; first2 != 0; first2 = first2 + -1) {
    *pLVar7 = pRect->left;
    pRect = (tagRECT *)((int)pRect + ((uint)bVar9 * -2 + 1) * 4);
    pLVar7 = pLVar7 + (uint)bVar9 * -2 + 1;
  }
  ehContext = 0x2c;
  local_3ac[0] = 0;
  local_3ac[1] = 0;
  local_3ac[2] = 0;
  local_3ac[3] = 0;
  if (0 < self[0x40]) {
    first2 = *(int *)(*(int *)(*self + 0x44) + 0xc) / self[0x40];
    local_118 = (*(int *)(*(int *)(*self + 0x44) + 0xc) + (local_380 - local_388) + self[0x40]
                + -1) / self[0x40];
    if (first2 <= local_118) {
      do {
        local_119 = '\0';
        ehContext = 0x2c;
        local_11a = '\0';
        local_3c4 = *(int *)(self[0x27] + 8);
        local_3b4 = local_3c4;
        while (local_3e4 = self[0x27], local_3d4 = local_3e4, local_3e4 != local_3b4) {
          if ((first2 < *(int *)(local_3b4 + 0x10)) ||
             (*(int *)(local_3b4 + 0x10) + *(int *)(local_3b4 + 0x14) <= first2)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            local_119 = '\x01';
            break;
          }
          local_3fc = it2;
          local_3f8 = local_3b8;
          local_3f4 = local_3b4;
          __rwstd::__rb_tree::iterator::increment_42ba94((int)&it2);
          unused5 = local_3fc;
          unused6 = local_3f8;
          unused7 = local_3f4;
        }
        local_424 = (undefined4 *)local_18[2];
        ehContext = 0x2c;
        local_414 = local_424;
        while( true ) {
          unused4 = local_18;
          unused3 = local_18;
          if (local_18 == local_414) break;
          if ((first2 < (int)local_414[4]) || ((int)(local_414[4] + local_414[5]) <= first2)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            local_11a = '\x01';
            break;
          }
          local_45c = it;
          local_458 = local_418;
          local_454 = local_414;
          __rwstd::__rb_tree::iterator::increment_42ba94((int)&it);
          rect2[4] = local_45c;
          unused = local_458;
          unused2 = local_454;
        }
        if (local_119 != local_11a) {
          rect2[0] = 0;
          rect2[1] = 0;
          rect2[2] = 0;
          rect2[3] = 0;
          ehContext = 0x2c;
          linesRect = MatchListWindows::GetLinesRect(self,first2,1,rect2);
          if ((char)linesRect != '\0') {
            FUN_00494540(local_3ac,rect2);
          }
        }
        first2 = first2 + 1;
      } while (first2 <= local_118);
    }
  }
  entryTree = self + 0x1e;
  MatchListWindows::EntryTree::operator_assign(entryTree,changed);
  piVar6 = local_3ac;
  piVar8 = result;
  for (first2 = 4; first2 != 0; first2 = first2 + -1) {
    *piVar8 = *piVar6;
    piVar6 = piVar6 + (uint)bVar9 * -2 + 1;
    piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
  }
  local_74 = local_74 + -2;
  if (local_18 != (undefined4 *)0x0) {
    unused48 = local_18;
    firstNode = local_18[2];
    MatchListWindows::EntryTree::erase_range(result2,(int)changed,firstLo,firstHi,firstNode);
    unused47 = local_18;
    local_18[3] = local_24;
    local_24 = local_18;
    __rwstd::__rb_tree::__deallocate_buffers((int)changed);
  }
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042faf4  MatchListWindows::EntryTree::insert_unique   (518 bytes, 2 ranges)   [analysis]
//   set<range>::insert keyed by first line
//   file placement: inferred (address adjacency)
undefined4 * __cdecl MatchListWindows::EntryTree::insert_unique(undefined4 *result,int *tree,int *value)

{
  bool goLeft;
  int node;
  undefined4 result2;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 result3;
  undefined4 local_7c;
  undefined4 local_78;
  int local_50;
  undefined4 it;
  undefined4 local_44;
  int parent2;
  undefined4 result4;
  undefined4 local_34;
  undefined4 local_30;
  int *local_10;
  int *unused;
  int parent;
  
  goLeft = true;
  node = *(int *)(tree[9] + 4);
  parent = tree[9];
  while (node != 0) {
    unused = value;
    goLeft = *value < *(int *)(node + 0x10);
    parent = node;
    if (goLeft) {
      node = *(int *)(node + 8);
    }
    else {
      node = *(int *)(node + 0xc);
    }
  }
  if ((char)tree[0xb] == '\0') {
    parent2 = parent;
    if (goLeft) {
      local_50 = *(int *)(tree[9] + 8);
      if (local_50 == parent) {
        MatchListWindows::EntryTree::__insert((int)&result3,tree,0,parent,value);
        *result = result3;
        result[1] = local_7c;
        result[2] = local_78;
        *(undefined1 *)(result + 4) = 1;
        return result;
      }
      __rwstd::__rb_tree::iterator::decrement_430114((int)&it);
    }
    local_10 = (int *)(parent2 + 0x10);
    if (*local_10 < *value) {
      MatchListWindows::EntryTree::__insert((int)&result2,tree,0,parent,value);
      *result = result2;
      result[1] = local_a4;
      result[2] = local_a0;
      *(undefined1 *)(result + 4) = 1;
    }
    else {
      *result = it;
      result[1] = local_44;
      result[2] = parent2;
      *(undefined1 *)(result + 4) = 0;
    }
  }
  else {
    MatchListWindows::EntryTree::__insert((int)&result4,tree,0,parent,value);
    *result = result4;
    result[1] = local_34;
    result[2] = local_30;
    *(undefined1 *)(result + 4) = 1;
  }
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042fcfc  MatchListWindows::EntryTree::__insert   (764 bytes)   [analysis]
//   links a new node under the parent and rebalances (red-black insert)
//   file placement: inferred (address adjacency)
int __cdecl MatchListWindows::EntryTree::__insert(int result,int *tree,int forceLeft,int parent,int *value)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *node;
  undefined4 *puVar5;
  
  node = MatchListWindows::EntryTree::__get_node(tree,value);
  tree[10] = tree[10] + 1;
  if ((parent != tree[9]) && (forceLeft == 0)) {
    if (*(int *)(parent + 0x10) <= *value) {
      *(undefined4 **)(parent + 0xc) = node;
      if (parent == *(int *)(tree[9] + 0xc)) {
        *(undefined4 **)(tree[9] + 0xc) = node;
      }
      goto LAB_0042fdb1;
    }
  }
  *(undefined4 **)(parent + 8) = node;
  if (parent == tree[9]) {
    *(undefined4 **)(tree[9] + 4) = node;
    *(undefined4 **)(tree[9] + 0xc) = node;
  }
  else if (parent == *(int *)(tree[9] + 8)) {
    *(undefined4 **)(tree[9] + 8) = node;
  }
LAB_0042fdb1:
  node[1] = parent;
  puVar5 = node;
  while ((puVar5 != *(undefined4 **)(tree[9] + 4) && (*(int *)puVar5[1] == 0))) {
    iVar1 = *(int *)(puVar5[1] + 4);
    if (*(int *)(iVar1 + 8) == puVar5[1]) {
      piVar2 = *(int **)(iVar1 + 0xc);
      if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
        puVar3 = (undefined4 *)puVar5[1];
        if (puVar5 == (undefined4 *)puVar3[3]) {
          iVar1 = puVar3[3];
          puVar3[3] = *(undefined4 *)(iVar1 + 8);
          if (*(int *)(iVar1 + 8) != 0) {
            *(undefined4 **)(*(int *)(iVar1 + 8) + 4) = puVar3;
          }
          *(undefined4 *)(iVar1 + 4) = puVar3[1];
          if (puVar3 == *(undefined4 **)(tree[9] + 4)) {
            *(int *)(tree[9] + 4) = iVar1;
          }
          else if (puVar3 == *(undefined4 **)(puVar3[1] + 8)) {
            *(int *)(puVar3[1] + 8) = iVar1;
          }
          else {
            *(int *)(puVar3[1] + 0xc) = iVar1;
          }
          *(undefined4 **)(iVar1 + 8) = puVar3;
          puVar3[1] = iVar1;
          puVar5 = puVar3;
        }
        puVar3 = (undefined4 *)puVar5[1];
        *puVar3 = 1;
        puVar3 = (undefined4 *)puVar3[1];
        *puVar3 = 0;
        iVar1 = puVar3[2];
        puVar3[2] = *(undefined4 *)(iVar1 + 0xc);
        if (*(int *)(iVar1 + 0xc) != 0) {
          *(undefined4 **)(*(int *)(iVar1 + 0xc) + 4) = puVar3;
        }
        *(undefined4 *)(iVar1 + 4) = puVar3[1];
        if (puVar3 == *(undefined4 **)(tree[9] + 4)) {
          *(int *)(tree[9] + 4) = iVar1;
        }
        else if (puVar3 == *(undefined4 **)(puVar3[1] + 0xc)) {
          *(int *)(puVar3[1] + 0xc) = iVar1;
        }
        else {
          *(int *)(puVar3[1] + 8) = iVar1;
        }
        *(undefined4 **)(iVar1 + 0xc) = puVar3;
        puVar3[1] = iVar1;
      }
      else {
        *(undefined4 *)puVar5[1] = 1;
        *piVar2 = 1;
        puVar5 = *(undefined4 **)(puVar5[1] + 4);
        *puVar5 = 0;
      }
    }
    else {
      piVar2 = *(int **)(*(int *)(puVar5[1] + 4) + 8);
      if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
        puVar3 = (undefined4 *)puVar5[1];
        if (puVar5 == (undefined4 *)puVar3[2]) {
          iVar1 = puVar3[2];
          puVar3[2] = *(undefined4 *)(iVar1 + 0xc);
          if (*(int *)(iVar1 + 0xc) != 0) {
            *(undefined4 **)(*(int *)(iVar1 + 0xc) + 4) = puVar3;
          }
          *(undefined4 *)(iVar1 + 4) = puVar3[1];
          if (puVar3 == *(undefined4 **)(tree[9] + 4)) {
            *(int *)(tree[9] + 4) = iVar1;
          }
          else if (puVar3 == *(undefined4 **)(puVar3[1] + 0xc)) {
            *(int *)(puVar3[1] + 0xc) = iVar1;
          }
          else {
            *(int *)(puVar3[1] + 8) = iVar1;
          }
          *(undefined4 **)(iVar1 + 0xc) = puVar3;
          puVar3[1] = iVar1;
          puVar5 = puVar3;
        }
        puVar3 = (undefined4 *)puVar5[1];
        *puVar3 = 1;
        puVar3 = (undefined4 *)puVar3[1];
        *puVar3 = 0;
        iVar1 = puVar3[3];
        puVar3[3] = *(undefined4 *)(iVar1 + 8);
        if (*(int *)(iVar1 + 8) != 0) {
          *(undefined4 **)(*(int *)(iVar1 + 8) + 4) = puVar3;
        }
        *(undefined4 *)(iVar1 + 4) = puVar3[1];
        if (puVar3 == *(undefined4 **)(tree[9] + 4)) {
          *(int *)(tree[9] + 4) = iVar1;
        }
        else if (puVar3 == *(undefined4 **)(puVar3[1] + 8)) {
          *(int *)(puVar3[1] + 8) = iVar1;
        }
        else {
          *(int *)(puVar3[1] + 0xc) = iVar1;
        }
        *(undefined4 **)(iVar1 + 8) = puVar3;
        puVar3[1] = iVar1;
      }
      else {
        *(undefined4 *)puVar5[1] = 1;
        *piVar2 = 1;
        puVar5 = *(undefined4 **)(puVar5[1] + 4);
        *puVar5 = 0;
      }
    }
  }
  **(undefined4 **)(tree[9] + 4) = 1;
  *(undefined4 **)(result + 8) = node;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042fff8  MatchListWindows::EntryTree::__get_node   (196 bytes, 2 ranges)   [analysis]
//   takes a node from the free list (or a new buffer) and stores the 8-byte value
//   file placement: inferred (address adjacency)
undefined4 * __cdecl MatchListWindows::EntryTree::__get_node(int *tree,undefined4 *value)

{
  undefined4 *node;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f2b5c);
  node = (undefined4 *)tree[6];
  if (node == (undefined4 *)0x0) {
    if (tree[7] == tree[8]) {
      MatchListWindows::EntryTree::AddNodeBuffer(tree);
      node = (undefined4 *)tree[7];
      tree[7] = tree[7] + 0x18;
    }
    else {
      node = (undefined4 *)tree[7];
      tree[7] = tree[7] + 0x18;
    }
  }
  else {
    tree[6] = *(int *)(tree[6] + 0xc);
  }
  node[1] = 0;
  node[2] = 0;
  node[3] = 0;
  *node = 0;
  if (node + 4 != (undefined4 *)0x0) {
    node[4] = *value;
    node[5] = value[1];
  }
  *sehChainHead = sehPrevFrame;
  return node;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430114  __rwstd::__rb_tree::iterator::decrement_430114   (107 bytes)   [analysis]
//   --iterator (in-order predecessor)
//   file placement: inferred (address adjacency)
void __cdecl __rwstd::__rb_tree::iterator::decrement_430114(int it)

{
  int *node;
  int parent;
  
  node = *(int **)(it + 8);
  if ((*node == 0) && (node == *(int **)(node[1] + 4))) {
    *(int *)(it + 8) = node[3];
  }
  else if (*(int *)(*(int *)(it + 8) + 8) == 0) {
    for (parent = *(int *)(*(int *)(it + 8) + 4); *(int *)(it + 8) == *(int *)(parent + 8);
        parent = *(int *)(parent + 4)) {
      *(int *)(it + 8) = parent;
    }
    *(int *)(it + 8) = parent;
  }
  else {
    for (parent = *(int *)(*(int *)(it + 8) + 8); *(int *)(parent + 0xc) != 0;
        parent = *(int *)(parent + 0xc)) {
    }
    *(int *)(it + 8) = parent;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430180  MatchListWindows::EntryTree::operator_assign   (161 bytes)   [analysis]
//   copies another tree (clears, then copies the nodes)
//   file placement: inferred (address adjacency)
int * __cdecl MatchListWindows::EntryTree::operator_assign(int *self,int *other)

{
  int iVar1;
  undefined4 *root;
  undefined4 uVar3;
  undefined4 firstLo;
  undefined4 firstHi;
  undefined4 result [4];
  
  if (other != self) {
    MatchListWindows::EntryTree::erase_range(result,(int)self,firstLo,firstHi,*(int *)(self[9] + 8))
    ;
    root = MatchListWindows::EntryTree::__copy(self,*(undefined4 **)(other[9] + 4),(undefined4 *)self[9]);
    iVar1 = self[9];
    *(undefined4 **)(iVar1 + 4) = root;
    if (*(int *)(iVar1 + 4) == 0) {
      *(int *)(iVar1 + 8) = iVar1;
      *(int *)(iVar1 + 0xc) = iVar1;
    }
    else {
      uVar3 = __rwstd::__rb_tree::__minimum(*(int *)(self[9] + 4));
      iVar1 = self[9];
      *(undefined4 *)(iVar1 + 8) = uVar3;
      uVar3 = __rwstd::__rb_tree::__maximum(*(int *)(iVar1 + 4));
      *(undefined4 *)(self[9] + 0xc) = uVar3;
    }
    self[10] = other[10];
  }
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430224  MatchListWindows::EntryTree::__copy   (105 bytes)   [analysis]
//   copies a subtree under a parent node
//   file placement: inferred (address adjacency)
undefined4 * __cdecl MatchListWindows::EntryTree::__copy(int *tree,undefined4 *src,undefined4 *parent)

{
  undefined4 *node;
  undefined4 *right;
  undefined4 *top;
  
  top = src;
  for (; src != (undefined4 *)0x0; src = (undefined4 *)src[2]) {
    node = MatchListWindows::EntryTree::__get_node(tree,src + 4);
    if (src == top) {
      top = node;
    }
    parent[2] = node;
    node[1] = parent;
    *node = *src;
    right = MatchListWindows::EntryTree::__copy(tree,(undefined4 *)src[3],node);
    node[3] = right;
    parent = node;
  }
  parent[2] = 0;
  return top;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430290  MatchListWindows::GetLinesRect   (423 bytes)   [analysis]
//   client rectangle of the visible part of lines first..first+count-1; false when none is visible
undefined4 __cdecl MatchListWindows::GetLinesRect(int *self,int first,int count,int *rect)

{
  int iVar1;
  bool visible;
  int top2;
  int bottom2;
  tagRECT *pRect;
  int *piVar6;
  LONG *pLVar7;
  int area [6];
  int unused;
  int unused2;
  tagRECT rect2;
  int client [4];
  int unused3;
  int unused4;
  int unused5;
  int unused6;
  undefined1 unused7;
  int unused8;
  int x1;
  int y1;
  int y0;
  
  if (0 < self[0x40]) {
    rect2.left = 0;
    rect2.top = 0;
    rect2.right = 0;
    rect2.bottom = 0;
    FUN_004a7a6c(*self,&rect2);
    pRect = &rect2;
    pLVar7 = client;
    for (bottom2 = 4; bottom2 != 0; bottom2 = bottom2 + -1) {
      *pLVar7 = pRect->left;
      pRect = (tagRECT *)&pRect->top;
      pLVar7 = pLVar7 + 1;
    }
    bottom2 = self[0x40];
    iVar1 = *(int *)(*(int *)(*self + 0x44) + 0xc);
    top2 = iVar1 / bottom2;
    bottom2 = (iVar1 + (client[3] - client[1]) + bottom2 + -1) / bottom2;
    if (top2 <= first) {
      top2 = first;
    }
    if (first + count + -1 <= bottom2) {
      bottom2 = first + count + -1;
    }
    if (top2 <= bottom2) {
      y0 = top2 * self[0x40] - *(int *)(*(int *)(*self + 0x44) + 0xc);
      y1 = ((bottom2 - top2) + 1) * self[0x40] + y0;
      x1 = client[2] - client[0];
      unused8 = y0;
      area[4] = 0;
      area[5] = y0;
      unused = x1;
      unused2 = y1;
      if ((((client[0] < x1) && (0 < client[2])) && (client[1] < y1)) &&
         (y0 < client[3])) {
        unused7 = 1;
        visible = true;
      }
      else {
        unused7 = 0;
        visible = false;
      }
      if (visible) {
        if (client[3] < y1) {
          y1 = client[3];
        }
        unused6 = y1;
        if (client[2] < x1) {
          x1 = client[2];
        }
        unused5 = x1;
        if (y0 < client[1]) {
          y0 = client[1];
        }
        unused4 = y0;
        if (client[0] < 1) {
          client[0] = 0;
        }
        unused3 = client[0];
        area[0] = client[0];
        area[1] = y0;
        area[2] = x1;
        area[3] = y1;
      }
      else {
        area[0] = 0;
        area[1] = 0;
        x1 = 0;
        area[2] = 0;
        area[3] = 0;
      }
      piVar6 = area;
      for (bottom2 = 4; bottom2 != 0; bottom2 = bottom2 + -1) {
        *rect = *piVar6;
        piVar6 = piVar6 + 1;
        rect = rect + 1;
      }
      return CONCAT31((int3)((uint)x1 >> 8),1);
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430438  MatchListWindows::InvalidateSelection_stub   (6 bytes)   [analysis]
//   first instruction of InvalidateSelection (Ghidra split the function here)
void __stdcall MatchListWindows::InvalidateSelection_stub(int *matchListWindows)

{
  undefined4 linesRect;
  int rect [5];
  undefined4 unused;
  int unused2;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_3c;
  int unused3;
  int iStack_1c;
  undefined4 it;
  undefined4 uStack_10;
  int iStack_c;
  
  iStack_1c = *(int *)(matchListWindows[0x27] + 8);
  iStack_c = iStack_1c;
  while( true ) {
    iStack_3c = matchListWindows[0x27];
    if (iStack_3c == iStack_c) break;
    rect[0] = 0;
    rect[1] = 0;
    rect[2] = 0;
    rect[3] = 0;
    unused3 = iStack_3c;
    linesRect = MatchListWindows::GetLinesRect(matchListWindows,*(int *)(iStack_c + 0x10),*(int *)(iStack_c + 0x14),rect);
    if ((char)linesRect != '\0') {
      (**(code **)(*(int *)(*matchListWindows + 8) + 0x6c))();
    }
    uStack_54 = it;
    uStack_50 = uStack_10;
    iStack_4c = iStack_c;
    __rwstd::__rb_tree::iterator::increment_42ba94((int)&it);
    rect[4] = uStack_54;
    unused = uStack_50;
    unused2 = iStack_4c;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043043e  MatchListWindows::InvalidateSelection   (176 bytes)   [analysis]
//   invalidates every selected range that is visible (body of a function Ghidra split after its first instruction)
void __stdcall MatchListWindows::InvalidateSelection(void)

{
  int *self;
  int iVar2;
  int iVar3;
  undefined4 node;
  int frame;
  
  self = *(int **)(frame + 8);
  node = *(undefined4 *)(self[0x27] + 8);
  *(undefined4 *)(frame + -0x18) = node;
  *(undefined4 *)(frame + -8) = node;
  while( true ) {
    iVar2 = self[0x27];
    *(int *)(frame + -0x28) = iVar2;
    *(int *)(frame + -0x38) = iVar2;
    iVar3 = *(int *)(frame + -8);
    if (iVar2 == iVar3) break;
    *(undefined4 *)(frame + -0x70) = 0;
    *(undefined4 *)(frame + -0x6c) = 0;
    *(undefined4 *)(frame + -0x68) = 0;
    *(undefined4 *)(frame + -100) = 0;
    node = MatchListWindows::GetLinesRect(self,*(int *)(iVar3 + 0x10),*(int *)(iVar3 + 0x14),
                         (int *)(frame + -0x70));
    if ((char)node != '\0') {
      (**(code **)(*(int *)(*self + 8) + 0x6c))();
    }
    *(undefined4 *)(frame + -0x50) = *(undefined4 *)(frame + -0x10);
    *(undefined4 *)(frame + -0x4c) = *(undefined4 *)(frame + -0xc);
    *(undefined4 *)(frame + -0x48) = *(undefined4 *)(frame + -8);
    __rwstd::__rb_tree::iterator::increment_42ba94(frame + -0x10);
    *(undefined4 *)(frame + -0x60) = *(undefined4 *)(frame + -0x50);
    *(undefined4 *)(frame + -0x5c) = *(undefined4 *)(frame + -0x4c);
    *(undefined4 *)(frame + -0x58) = *(undefined4 *)(frame + -0x48);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004304f0  MatchListWindows::Entry::Entry   (85 bytes)   [notes+analysis]
//   constructor(text, wordLength, linkIndex): next=NULL, link index, length byte at +8, text copied to +9
void __cdecl MatchListWindows::Entry::Entry(undefined4 *self,uint *text,char *wordLen,undefined4 group)

{
  char *len;
  
  *self = 0;
  self[1] = group;
  len = strlen(text);
  if (0xff < (int)len) {
    len = (char *)0xff;
  }
  if ((int)len < (int)wordLen) {
    wordLen = len;
  }
  *(char *)(self + 2) = (char)wordLen;
  strncpy((undefined4 *)((int)self + 9),text,len);
  len[(int)self + 9] = '\0';
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430548  MatchListWindows::SelectionLess   (23 bytes)   [analysis]
//   less<Selection>: CompareEntries in mode 3
//   file placement: inferred (address adjacency)
undefined4 __cdecl MatchListWindows::SelectionLess(undefined4 self,int a,int b)

{
  bool less;
  undefined3 regHigh;
  
  less = MatchListWindows::CompareEntries(a,b,3);
  return CONCAT31(regHigh,less);
}

// ----------------------------------------------------------------------------------------------------
// 0x00430560  MatchListWindows::EntryHead::EntryHead_move   (83 bytes)   [analysis]
//   move-constructs a 12-byte group head (the source is emptied)
undefined4 * __cdecl MatchListWindows::EntryHead::EntryHead_move(undefined4 *self,undefined4 *other)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f2b98);
  *self = *other;
  self[1] = other[1];
  self[2] = other[2];
  *other = 0;
  other[1] = 0;
  other[2] = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004305b4  MatchListWindows::EntryHead::operator_assign   (63 bytes)   [analysis]
//   move-assigns a group head
void __cdecl MatchListWindows::EntryHead::operator_assign(int *self,int *other)

{
  if (other != self) {
    if (*other == 0) {
      *self = 0;
      self[1] = 0;
      self[2] = 0;
    }
    else {
      *self = *other;
      self[1] = other[1];
      self[2] = other[2];
      *other = 0;
      other[1] = 0;
      other[2] = 0;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004305f4  MatchListWindows::EntryHead::Clear   (39 bytes)   [analysis]
//   frees the group's entries
void __cdecl MatchListWindows::EntryHead::Clear(undefined4 *self)

{
  while ((undefined4 *)*self != (undefined4 *)0x0) {
    *self = *(undefined4 *)*self;
    operator_delete();
  }
  self[1] = *self;
  self[2] = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043061c  MatchListWindows::SelectionIterator::SelectionIterator   (89 bytes)   [analysis]
//   iterator over the selected lines of a list, positioned at the first
int * __cdecl MatchListWindows::SelectionIterator::SelectionIterator(int *self,int list)

{
  int node;
  undefined4 *sehChainHead;
  int local_48;
  int local_44;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f2bac);
  *self = list + 0x78;
  node = *(int *)(*(int *)(list + 0x9c) + 8);
  self[2] = local_48;
  self[3] = local_44;
  self[4] = node;
  MatchListWindows::SelectionIterator::Seek(self,0);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430678  MatchListWindows::SelectionIterator::Next   (183 bytes)   [analysis]
//   the next selected line, or -1
int __cdecl MatchListWindows::SelectionIterator::Next(int *self)

{
  int rangeFirst;
  bool inRange;
  int line;
  
  if (*(int *)(*self + 0x24) == self[4]) {
    line = -1;
  }
  else {
    line = self[6];
    self[6] = self[6] + 1;
    rangeFirst = *(int *)(self[4] + 0x10);
    if ((self[6] < rangeFirst) || (rangeFirst + *(int *)(self[4] + 0x14) <= self[6])) {
      inRange = false;
    }
    else {
      inRange = true;
    }
    if (!inRange) {
      __rwstd::__rb_tree::iterator::increment_42ba94((int)(self + 2));
      if (*(int *)(*self + 0x24) != self[4]) {
        self[6] = *(int *)(self[4] + 0x10);
      }
    }
  }
  return line;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430730  MatchListWindows::SelectionIterator::Seek   (180 bytes)   [analysis]
//   positions the iterator at the n-th selected line
void __cdecl MatchListWindows::SelectionIterator::Seek(int *self,int n)

{
  int i;
  int *src;
  int *dst;
  int begin [6];
  undefined4 node;
  
  node = *(undefined4 *)(*(int *)(*self + 0x24) + 8);
  begin[2] = node;
  src = begin;
  dst = self + 2;
  for (i = 4; i != 0; i = i + -1) {
    *dst = *src;
    src = src + 1;
    dst = dst + 1;
  }
  for (; (*(int *)(*self + 0x24) != self[4] &&
         (i = *(int *)(self[4] + 0x14), -1 < n - i)); n = n - i) {
    __rwstd::__rb_tree::iterator::increment_42ba94((int)(self + 2));
  }
  if (*(int *)(*self + 0x24) != self[4]) {
    self[6] = n + *(int *)(self[4] + 0x10);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004307e4  MatchListWindows::IsSelected   (254 bytes)   [analysis]
//   whether a line is selected (the anchor range being dragged, or a stored range)
undefined4 __cdecl MatchListWindows::IsSelected(int self,int line)

{
  bool bVar1;
  int lo;
  int hi;
  undefined1 it [8];
  int local_c;
  
  if (*(int *)(self + 0x104) != -1) {
    if (*(int *)(self + 0x104) < *(int *)(self + 0x110)) {
      lo = *(int *)(self + 0x104);
    }
    else {
      lo = *(int *)(self + 0x110);
    }
    if (*(int *)(self + 0x110) < *(int *)(self + 0x104)) {
      hi = *(int *)(self + 0x104);
    }
    else {
      hi = *(int *)(self + 0x110);
    }
    if ((lo <= line) && (line <= hi)) {
      if (*(int *)(self + 0x108) == 0) {
        return 0;
      }
      return 1;
    }
  }
  local_c = *(int *)(*(int *)(self + 0x9c) + 8);
  while( true ) {
    if (*(int *)(self + 0x9c) == local_c) {
      return 0;
    }
    if ((line < *(int *)(local_c + 0x10)) ||
       (*(int *)(local_c + 0x10) + *(int *)(local_c + 0x14) <= line)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
    __rwstd::__rb_tree::iterator::increment_42ba94((int)it);
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004308e4  MatchListWindows::GetEntryAt   (232 bytes)   [analysis]
//   the Entry shown on a line (walks the length groups; caches the last lookup)
undefined4 * __cdecl MatchListWindows::GetEntryAt(int self,int index)

{
  undefined4 *group;
  undefined4 *entry;
  int firstLine;
  
  if (index == *(int *)(self + 0xb0)) {
    entry = *(undefined4 **)(self + 0xb8);
  }
  else {
    if (index != *(int *)(self + 0xb0) + 1) {
      *(int *)(self + 0xb0) = index;
      entry = (undefined4 *)0x0;
      firstLine = 0;
      *(undefined4 *)(self + 0xb4) = 0;
      while( true ) {
        if ((*(int *)(self + 0x58) - *(int *)(self + 0x54)) / 0xc <= *(int *)(self + 0xb4))
        goto LAB_004309be;
        group = (undefined4 *)(*(int *)(self + 0xb4) * 0xc + *(int *)(self + 0x54));
        if ((firstLine <= index) && (index < group[2] + firstLine)) break;
        firstLine = firstLine + group[2];
        *(int *)(self + 0xb4) = *(int *)(self + 0xb4) + 1;
      }
      entry = (undefined4 *)*group;
      firstLine = index - firstLine;
      while (0 < firstLine) {
        entry = (undefined4 *)*entry;
        firstLine = firstLine + -1;
      }
LAB_004309be:
      *(undefined4 **)(self + 0xb8) = entry;
      return entry;
    }
    *(int *)(self + 0xb0) = *(int *)(self + 0xb0) + 1;
    firstLine = **(int **)(self + 0xb8);
    *(int *)(self + 0xb8) = firstLine;
    if (firstLine == 0) {
      *(int *)(self + 0xb4) = *(int *)(self + 0xb4) + 1;
      *(undefined4 *)(self + 0xb8) =
           *(undefined4 *)(*(int *)(self + 0xb4) * 0xc + *(int *)(self + 0x54));
    }
    entry = *(undefined4 **)(self + 0xb8);
  }
  return entry;
}

// ----------------------------------------------------------------------------------------------------
// 0x004309cc  MatchListWindows::CompareEntries   (156 bytes)   [notes+analysis]
//   ordering predicate for the sort modes: modes > 2 compare by length first; odd/even selects direction
bool __cdecl MatchListWindows::CompareEntries(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  if (2 < (int)param_3) {
    uVar1 = CollationLength((byte *)(param_1 + 9),(uint)*(byte *)(param_1 + 8));
    uVar2 = CollationLength((byte *)(param_2 + 9),(uint)*(byte *)(param_2 + 8));
    if (uVar2 != uVar1) {
      if ((int)param_3 < 5) {
        return uVar1 < uVar2;
      }
      return uVar2 < uVar1;
    }
  }
  iVar3 = CollationCompare((byte *)(param_1 + 9),(uint)*(byte *)(param_1 + 8),(byte *)(param_2 + 9),
                       (uint)*(byte *)(param_2 + 8));
  if ((param_3 & 1) == 0) {
    bVar4 = 0 < iVar3;
  }
  else {
    bVar4 = iVar3 < 0;
  }
  return bVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430a68  MatchListWindows::CompareWithEntry   (130 bytes)   [analysis]
//   compares an entry with a word under a sort mode: by length first for modes 3..4, then by the collation order; descending for even modes
//   file placement: inferred (address adjacency)
int __cdecl MatchListWindows::CompareWithEntry(int entry,byte *word_,int wordLen,uint mode)

{
  int diff;
  int cmp;
  
  if (2 < (int)mode) {
    diff = CollationLength((byte *)(entry + 9),(uint)*(byte *)(entry + 8));
    cmp = CollationLength(word_,wordLen);
    diff = diff - cmp;
    if (diff != 0) {
      if ((int)mode < 5) {
        return diff;
      }
      return -diff;
    }
  }
  cmp = CollationCompare((byte *)(entry + 9),(uint)*(byte *)(entry + 8),word_,wordLen);
  if ((mode & 1) == 0) {
    cmp = -cmp;
  }
  return cmp;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430aec  MatchListWindows::ShowContextMenu   (362 bytes)   [analysis]
//   pops up the list's context menu at a point (menu chosen by whether the list is empty)
void __cdecl MatchListWindows::ShowContextMenu(int *self,int *point)

{
  int entryCount;
  int *piVar2;
  int metric;
  HWND hWnd;
  undefined4 *sehChainHead;
  tagPOINT pt;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 menu [3];
  undefined4 local_10;
  HMENU hMenu;
  
  __InitExceptBlockLDTC(0x4f2be0);
  pt.x = 0;
  pt.y = 0;
  if (point != (int *)0x0) {
    pt.x = *point;
    pt.y = point[1];
  }
  entryCount = MatchListWindows::GetEntryCount((int)self);
  if (entryCount == 0) {
    (*(LPCSTR *)&g_contextMenuId) = (LPCSTR)0x19f0;
  }
  else {
    (*(LPCSTR *)&g_contextMenuId) = (LPCSTR)0x1a04;
  }
  ehContext = 0x14;
  entryCount = 1;
  (*(LPCSTR *)&DAT_0051ac88) = (*(LPCSTR *)&g_contextMenuId);
  piVar2 = OWL::TMenu::TMenu_497b98(menu,*(HINSTANCE *)(*(int *)(*self + 0x6c) + 0xc),(*(LPCSTR *)&g_contextMenuId));
  ehDtorCount = ehDtorCount + 1;
  OWL::TPopupMenu::TPopupMenu_497fac(&local_10,piVar2,entryCount);
  ehDtorCount = ehDtorCount + 1;
  OWL::TMenu::_dtor(menu,2);
  ehContext = 8;
  ClientToScreen(*(HWND *)(*self + 0xc),&pt);
  metric = GetSystemMetrics(0);
  entryCount = pt.x;
  if (pt.x < 1) {
    entryCount = 0;
  }
  if (entryCount < metric) {
    if (pt.x < 1) {
      pt.x = 0;
    }
  }
  else {
    pt.x = GetSystemMetrics(0);
  }
  metric = GetSystemMetrics(1);
  entryCount = pt.y;
  if (pt.y < 1) {
    entryCount = 0;
  }
  if (entryCount < metric) {
    if (pt.y < 1) {
      pt.y = 0;
    }
  }
  else {
    pt.y = GetSystemMetrics(1);
  }
  hWnd = (HWND)TEAViewWindows::GetPopupOwner((int *)self[0x38]);
  TrackPopupMenu(hMenu,2,pt.x,pt.y,0,hWnd,(RECT *)0x0);
  ehDtorCount = ehDtorCount + -2;
  OWL::TMenu::_dtor(&local_10,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430c58  MatchListWindows::Selection::~Selection   (25 bytes)   [rtti:dtor destructor]
//   written in code as MatchListWindows::Selection::_dtor
void __cdecl MatchListWindows::Selection::_dtor(int self,byte dtorFlags)

{
  if ((self != 0) && ((dtorFlags & 1) != 0)) {
    operator_delete();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430d9c  MatchListWindows::EntryHead::~EntryHead   (34 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as MatchListWindows::EntryHead::_dtor
void __cdecl MatchListWindows::EntryHead::_dtor(undefined4 *self,byte dtorFlags)

{
  if (self != (undefined4 *)0x0) {
    MatchListWindows::EntryHead::Clear(self);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430e60  std::set<MatchListWindows::Selection,std::less<MatchListWindows::Selection>>::~set   (125 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as std::set_MatchListWindows_Selection_std_less_MatchListWindows_Selection::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::set_MatchListWindows_Selection_std_less_MatchListWindows_Selection::_dtor(int self,byte dtorFlags)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 firstLo;
  undefined4 firstHi;
  undefined4 result [4];
  undefined4 unused;
  undefined4 sehPrevFrame;
  int ehDtorCount;
  
  __InitExceptBlockLDTC(0x4f2c08);
  if (self != 0) {
    ehDtorCount = ehDtorCount + -1;
    if (*(int *)(self + 0x24) != 0) {
      unused = *(undefined4 *)(self + 0x24);
      MatchListWindows::EntryTree::erase_range(result,self,firstLo,firstHi,
                   *(int *)(*(int *)(self + 0x24) + 8));
      iVar1 = *(int *)(self + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(self + 0x18);
      *(int *)(self + 0x18) = iVar1;
      __rwstd::__rb_tree::__deallocate_buffers(self);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431158  __rwstd::__rb_tree<MatchListWindows::Selection,MatchListWindows::Selection,__rwstd::__ident<MatchListWindows::Selection,MatchListWindows::Selection>,std::less<MatchListWindows::Selection>>::~__rb_tree   (114 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as __rwstd::rb_tree_MatchListWindows_Selection_MatchListWindows_Selection_rwstd_ident_MatchListWindows_Selection_MatchListWindows_Selection_std_less_MatchListWindows_Selection::_dtor
//   file placement: inferred (address adjacency)
void __cdecl __rwstd::rb_tree_MatchListWindows_Selection_MatchListWindows_Selection_rwstd_ident_MatchListWindows_Selection_MatchListWindows_Selection_std_less_MatchListWindows_Selection::_dtor(int self,byte dtorFlags)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 firstLo;
  undefined4 firstHi;
  undefined4 result [4];
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f2d08);
  if (self != 0) {
    if (*(int *)(self + 0x24) != 0) {
      MatchListWindows::EntryTree::erase_range(result,self,firstLo,firstHi,
                   *(int *)(*(int *)(self + 0x24) + 8));
      iVar1 = *(int *)(self + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(self + 0x18);
      *(int *)(self + 0x18) = iVar1;
      __rwstd::__rb_tree::__deallocate_buffers(self);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431308  std::set<const MatchListWindows::Entry *,MatchListWindows::EntryIndexComparator>::~set   (125 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as std::set_const_MatchListWindows_Entry_ptr_MatchListWindows_EntryIndexComparator::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::set_const_MatchListWindows_Entry_ptr_MatchListWindows_EntryIndexComparator::_dtor(int self,byte dtorFlags)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 firstLo;
  undefined4 firstHi;
  undefined4 result [4];
  undefined4 unused;
  undefined4 sehPrevFrame;
  int ehDtorCount;
  
  __InitExceptBlockLDTC(0x4f2d10);
  if (self != 0) {
    ehDtorCount = ehDtorCount + -1;
    if (*(int *)(self + 0x24) != 0) {
      unused = *(undefined4 *)(self + 0x24);
      MatchListWindows::SelectionTree::erase_range(result,self,firstLo,firstHi,
                   *(int *)(*(int *)(self + 0x24) + 8));
      iVar1 = *(int *)(self + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(self + 0x18);
      *(int *)(self + 0x18) = iVar1;
      __rwstd::__rb_tree::__deallocate_buffers_42b9ac(self);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431388  std::vector<int>::~vector   (54 bytes)   [rtti:dtor destructor]
//   written in code as std::vector_int::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_int::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    std::_Destroy_range_ptr_42a45c(self,*(int *)(self + 4),*(int *)(self + 8));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004313c0  std::vector<MatchListWindows::EntryHead>::~vector   (54 bytes)   [rtti:dtor destructor]
//   written in code as std::vector_MatchListWindows_EntryHead::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_MatchListWindows_EntryHead::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    std::_Destroy_range_EntryHead(self,*(undefined4 **)(self + 4),*(undefined4 **)(self + 8));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004313f8  __rwstd::__rb_tree<const MatchListWindows::Entry *,const MatchListWindows::Entry *,__rwstd::__ident<const MatchListWindows::Entry *,const MatchListWindows::Entry *>,MatchListWindows::EntryIndexComparator>::~__rb_tree   (94 bytes)   [rtti:dtor destructor]
//   written in code as __rwstd::rb_tree_const_MatchListWindows_Entry_ptr_const_MatchListWindows_Entry_ptr_rwstd_ident_const_MatchListWindows_Entry_ptr_const_MatchListWindows_Entry_ptr_MatchListWindows_EntryIndexComparator::_dtor
//   file placement: inferred (address adjacency)
void __cdecl __rwstd::rb_tree_const_MatchListWindows_Entry_ptr_const_MatchListWindows_Entry_ptr_rwstd_ident_const_MatchListWindows_Entry_ptr_const_MatchListWindows_Entry_ptr_MatchListWindows_EntryIndexComparator::_dtor(int self,byte dtorFlags)

{
  int iVar1;
  undefined4 firstLo;
  undefined4 firstHi;
  undefined4 result [4];
  
  if (self != 0) {
    if (*(int *)(self + 0x24) != 0) {
      MatchListWindows::SelectionTree::erase_range(result,self,firstLo,firstHi,
                   *(int *)(*(int *)(self + 0x24) + 8));
      iVar1 = *(int *)(self + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(self + 0x18);
      *(int *)(self + 0x18) = iVar1;
      __rwstd::__rb_tree::__deallocate_buffers_42b9ac(self);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
