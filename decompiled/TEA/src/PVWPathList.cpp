// TEA.exe — application module "PVWPathList"
// 65 functions, 0x0041fedc..0x00422cf8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041fedc  PVWPathList::PVWPathList   (868 bytes)   [analysis]
//   constructor: the available/selected list boxes, folder edit, buttons and up/down controls of the dictionary list page
/* WARNING: Removing unreachable block (ram,0x0041ffb4) */
/* WARNING: Removing unreachable block (ram,0x004200cc) */
int * __cdecl PVWPathList::PVWPathList(int *self,undefined4 *parent,int firstId,int module,int flags)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ef8c4);
  PVWPathListBox::PVWPathListBox(self,0,parent,flags + 0x1e96);
  PVWPathListBox::PVWPathListBox(self + 0x2c,0,parent,flags + 0x1ea0);
  self[0x58] = (int)parent;
  self[0x59] = firstId;
  PVWEdit::PVWEdit(self + 0x5a,0,parent,flags + 0x1eaa,0);
  self[0x89] = module;
  self[0x8a] = flags;
  self[0x8e] = 0;
  self[0x8e] = (int)&g_emptyStringData;
  if (parent == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *parent;
  }
  OWL::TButton::TButton(self + 0x90,0,uVar1,flags + 0x1ebe,0);
  if (parent == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *parent;
  }
  OWL::TButton::TButton(self + 0xbb,0,uVar1,flags + 0x1ec8,0);
  if (parent == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *parent;
  }
  OWL::TButton::TButton(self + 0xe6,0,uVar1,flags + 0x1ed2,0);
  if (parent == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *parent;
  }
  OWL::TButton::TButton(self + 0x111,0,uVar1,flags + 0x1edc,0);
  if (parent == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *parent;
  }
  OWL::TButton::TButton(self + 0x13c,0,uVar1,flags + 0x1ee6,0);
  self[0x16a] = 0;
  self[0x16a] = (int)&g_emptyStringData;
  self[0x16c] = 0;
  self[0x16d] = 0;
  self[0x16e] = 0;
  self[0x16f] = 0;
  if (flags == 0) {
    piVar2 = (int *)operator_new();
    if (piVar2 != (int *)0x0) {
      PVWEdit::PVWEdit(piVar2,0,parent,0x38ff,0);
    }
    self[0x16c] = (int)piVar2;
    piVar2 = (int *)operator_new();
    if (piVar2 != (int *)0x0) {
      if (parent == (undefined4 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *parent;
      }
      OWL::TUpDown::TUpDown(piVar2,0,uVar1,0x3909,0,0);
    }
    self[0x16d] = (int)piVar2;
    piVar2 = (int *)operator_new();
    if (piVar2 != (int *)0x0) {
      PVWEdit::PVWEdit(piVar2,0,parent,0x38fe,0);
    }
    self[0x16e] = (int)piVar2;
    piVar2 = (int *)operator_new();
    if (piVar2 != (int *)0x0) {
      if (parent == (undefined4 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *parent;
      }
      OWL::TUpDown::TUpDown(piVar2,0,uVar1,0x3908,0,0);
    }
    self[0x16f] = (int)piVar2;
  }
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420274  PVWPathList::~PVWPathList   (696 bytes)   [rtti:dtor destructor]
//   written in code as PVWPathList::_dtor
void __cdecl PVWPathList::_dtor(int *self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4efa00);
  if (self == (int *)0x0) goto LAB_0042051b;
  if (self[0x16c] != 0) {
    (*(code *)**(undefined4 **)(self[0x16c] + 0xc))();
  }
  if (self[0x16d] != 0) {
    (*(code *)**(undefined4 **)(self[0x16d] + 0xc))();
  }
  if (self[0x16e] != 0) {
    (*(code *)**(undefined4 **)(self[0x16e] + 0xc))();
  }
  if (self[0x16f] != 0) {
    (*(code *)**(undefined4 **)(self[0x16f] + 0xc))();
  }
  if (self[0x16a] != 0) {
    if (*(int *)(self[0x16a] + -0xc) != -1) {
      strRep = (int *)(self[0x16a] + -0xc);
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
      if (prevRefs != 0) goto LAB_004203d5;
    }
    operator_delete();
    self[0x16a] = 0;
  }
LAB_004203d5:
  OWL::TButton::_dtor(self + 0x13c,2);
  OWL::TButton::_dtor(self + 0x111,2);
  OWL::TButton::_dtor(self + 0xe6,2);
  OWL::TButton::_dtor(self + 0xbb,2);
  OWL::TButton::_dtor(self + 0x90,2);
  if (self[0x8e] != 0) {
    if (*(int *)(self[0x8e] + -0xc) != -1) {
      strRep = (int *)(self[0x8e] + -0xc);
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
      if (prevRefs != 0) goto LAB_004204c9;
    }
    operator_delete();
    self[0x8e] = 0;
  }
LAB_004204c9:
  PVWEdit::_dtor(self + 0x5a,2);
  PVWPathListBox::_dtor(self + 0x2c,2);
  PVWPathListBox::_dtor(self,2);
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_0042051b:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042056c  PVWPathList::EditDictionary   (1555 bytes, 2 ranges)   [analysis]
//   runs the dictionary properties dialog for the selected path and updates the list
void __cdecl PVWPathList::EditDictionary(int self,int index)

{
  int index2;
  int pvwPathListBox;
  char *pcVar3;
  uint *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *sehChainHead;
  int index3;
  int tsDictionaryList;
  uint local_b78;
  int index4;
  undefined4 sehPrevFrame;
  int teaDictionaryPropertiesWindows [696];
  undefined1 str [8];
  uint *local_3c;
  undefined1 local_34 [8];
  char *str2;
  undefined1 local_24 [8];
  int str3;
  undefined1 local_14 [8];
  int str4;
  
  __InitExceptBlockLDTC(0x4efb0c);
  pvwPathListBox = self;
  index2 = (**(code **)(*(int *)(self + 0xc) + 0x6c))();
  index3 = (**(code **)(*(int *)(self + 0xbc) + 0x6c))
                        (self + 0xb0,*(int *)(self + 0xbc),pvwPathListBox,self + 0xb0);
  index4 = index2 + 1;
  if (index < 0x1ed2) {
    if (index - 0x1ebeU < 2) {
      index4 = index2 + -1;
    }
    else if (1 < index - 0x1ec8U) goto LAB_00420b6d;
    PVWPathListBox::GetPathAt((int)local_14,self,index2);
    PVWPathListBox::UpdateEntry(self,(int)local_14,index4);
    (**(code **)(*(int *)(self + 0xc) + 0x70))();
    if (str4 != 0) {
      if (*(int *)(str4 + -0xc) != -1) {
        piVar7 = (int *)(str4 + -0xc);
        if (piVar7 == &g_nullStringRep) {
          pvwPathListBox = 1;
        }
        else if (piVar7 == &g_nullStringRep) {
          pvwPathListBox = 1;
        }
        else {
          *piVar7 = *piVar7 + -1;
          pvwPathListBox = *piVar7 + 1;
        }
        if (pvwPathListBox != 0) goto LAB_00420b6d;
      }
      operator_delete();
      str4 = 0;
    }
  }
  else if (index - 0x1ed2U < 2) {
    if ((-1 < index3) &&
       (pvwPathListBox = (**(code **)(*(int *)(self + 0xbc) + 0x24))(), index3 < pvwPathListBox)) {
      pvwPathListBox = self + 0xb0;
      PVWPathListBox::GetPathAt((int)local_24,pvwPathListBox,index3);
      index2 = (**(code **)(*(int *)(self + 0xc) + 0x24))();
      PVWPathListBox::UpdateEntry(self,(int)local_24,index2);
      index2 = (**(code **)(*(int *)(self + 0xbc) + 0x24))();
      if (index2 <= index3) {
        index3 = (**(code **)(*(int *)(self + 0xbc) + 0x24))
                              (index2,*(int *)(self + 0xbc),pvwPathListBox);
        index3 = index3 + -1;
      }
      if (-1 < index3) {
        (**(code **)(*(int *)(self + 0xbc) + 0x70))();
      }
      if (str3 != 0) {
        if (*(int *)(str3 + -0xc) != -1) {
          piVar7 = (int *)(str3 + -0xc);
          if (piVar7 == &g_nullStringRep) {
            pvwPathListBox = 1;
          }
          else if (piVar7 == &g_nullStringRep) {
            pvwPathListBox = 1;
          }
          else {
            *piVar7 = *piVar7 + -1;
            pvwPathListBox = *piVar7 + 1;
          }
          if (pvwPathListBox != 0) goto LAB_00420b6d;
        }
        operator_delete();
        str3 = 0;
      }
    }
  }
  else if (index - 0x1edcU < 2) {
    PVWPathListBox::GetPathAt((int)local_34,self,index2);
    local_b78 = g_stringNpos;
    if (*(uint *)(str2 + -4) < g_stringNpos) {
      local_b78 = *(uint *)(str2 + -4);
    }
    pcVar3 = memrchr(str2,'\\',local_b78);
    uVar6 = g_stringNpos;
    if (pcVar3 != (char *)0x0) {
      uVar6 = (int)pcVar3 - (int)str2;
    }
    if ((uVar6 != 0xffffffff) &&
       (pvwPathListBox = FUN_004d4220((int)local_34,0,uVar6 + 1,self + 0x230), pvwPathListBox == 0)) {
      PVWPathListBox::UpdateEntry(self + 0xb0,(int)local_34,-1);
    }
    pvwPathListBox = (**(code **)(*(int *)(self + 0xc) + 0x24))();
    if (pvwPathListBox <= index2) {
      index2 = (**(code **)(*(int *)(self + 0xc) + 0x24))();
      index2 = index2 + -1;
    }
    if (-1 < index2) {
      (**(code **)(*(int *)(self + 0xc) + 0x70))();
    }
    if (str2 != (char *)0x0) {
      if (*(int *)(str2 + -0xc) != -1) {
        piVar7 = (int *)(str2 + -0xc);
        if (piVar7 == &g_nullStringRep) {
          pvwPathListBox = 1;
        }
        else if (piVar7 == &g_nullStringRep) {
          pvwPathListBox = 1;
        }
        else {
          *piVar7 = *piVar7 + -1;
          pvwPathListBox = *piVar7 + 1;
        }
        if (pvwPathListBox != 0) goto LAB_00420b6d;
      }
      operator_delete();
      str2 = (char *)0x0;
    }
  }
  else if (index - 0x1ee6U < 2) {
    tsDictionaryList = 0;
    if (index2 < 0) {
      if (-1 < index3) {
        tsDictionaryList = *(int *)(self + 0xc4);
      }
    }
    else {
      tsDictionaryList = *(int *)(self + 0x14);
      index3 = index2;
    }
    if (tsDictionaryList != 0) {
      puVar4 = (uint *)TSDictionaryList::GetPath(tsDictionaryList,index3);
      std::string::string_from_cstr((int)str,puVar4);
      puVar4 = thunk_strrchr(local_3c,'.');
      if (puVar4 != (uint *)0x0) {
        pvwPathListBox = strcmp((char *)puVar4,PTR_DAT_004f33b8);
        if (pvwPathListBox == 0) {
          if (*(int *)(self + 0x160) == 0) {
            uVar5 = *(undefined4 *)(self + 0x160);
          }
          else {
            uVar5 = **(undefined4 **)(self + 0x160);
          }
          piVar7 = TEADictionaryPropertiesWindows::TEADictionaryPropertiesWindows(teaDictionaryPropertiesWindows,0,uVar5,*(int *)(self + 0x164),tsDictionaryList,index3);
          (**(code **)(piVar7[3] + 0x14))();
          TEADictionaryPropertiesWindows::_dtor(teaDictionaryPropertiesWindows,2);
        }
        else {
          strcmp((char *)puVar4,PTR_DAT_004f33bc);
        }
      }
      if (local_3c != (uint *)0x0) {
        if (local_3c[-3] != 0xffffffff) {
          puVar4 = local_3c + -3;
          if (puVar4 == &g_nullStringRep) {
            pvwPathListBox = 1;
          }
          else if (puVar4 == &g_nullStringRep) {
            pvwPathListBox = 1;
          }
          else {
            *puVar4 = *puVar4 - 1;
            pvwPathListBox = *puVar4 + 1;
          }
          if (pvwPathListBox != 0) goto LAB_00420b6d;
        }
        operator_delete();
        local_3c = (uint *)0x0;
      }
    }
  }
LAB_00420b6d:
  PVWPathList::Refresh(self);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420b88  memrchr   (41 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00408894. last occurrence of a character in [p, p + n], or 0
//   file placement: inferred (address adjacency)
char * __cdecl memrchr(char *p,char ch,int n)

{
  char *q;
  
  q = p + n;
  while( true ) {
    if (q < p) {
      return (char *)0x0;
    }
    if (ch == *q) break;
    q = q + -1;
  }
  return q;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420bb4  PVWPathList::Refresh   (261 bytes)   [analysis]
//   refills both list boxes and updates the buttons
void __cdecl PVWPathList::Refresh(int self)

{
  uint *pathList;
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  int str2;
  
  __InitExceptBlockLDTC(0x4efbb4);
  pathList = (uint *)TSDictionaryList::GetPathList(*(undefined4 **)(self + 0x14));
  std::string::string_from_cstr((int)str,pathList);
  (**(code **)(*(int *)(*(int *)(self + 0x160) + 0xc) + 0x94))();
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep = (int *)(str2 + -0xc);
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
      if (prevRefs != 0) goto LAB_00420c7d;
    }
    operator_delete();
    str2 = 0;
  }
LAB_00420c7d:
  PVWPathList::UpdateButtons(self,*(int *)(self + 0x228) + 0x1e96);
  PVWPathList::UpdateButtons(self,*(int *)(self + 0x228) + 0x1ea0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420cbc  PVWPathList::UpdateButtons   (367 bytes)   [analysis]
//   enables Add/Remove/Up/Down/Properties according to the selections
void __cdecl PVWPathList::UpdateButtons(int self,int listId)

{
  int iVar1;
  uint isFull;
  uint bEnable;
  HWND hWnd;
  int *piVar3;
  uint uVar4;
  
  iVar1 = (**(code **)(*(int *)(self + 0xbc) + 0x6c))();
  (**(code **)(*(int *)(*(int *)(self + 0x398) + 8) + 0x60))();
  if ((-1 < iVar1) && (*(int *)(self + 0x228) + 0x1ea0 == listId)) {
    (**(code **)(*(int *)(self + 0xc) + 0x70))();
  }
  iVar1 = (**(code **)(*(int *)(self + 0xc) + 0x6c))();
  if ((-1 < iVar1) && (*(int *)(self + 0x228) + 0x1e96 == listId)) {
    (**(code **)(*(int *)(self + 0xbc) + 0x70))();
    (**(code **)(*(int *)(*(int *)(self + 0x398) + 8) + 0x60))();
  }
  (**(code **)(*(int *)(*(int *)(self + 0x240) + 8) + 0x60))();
  if (-1 < iVar1) {
    (**(code **)(*(int *)(self + 0xc) + 0x24))();
  }
  (**(code **)(*(int *)(*(int *)(self + 0x2ec) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0x444) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0x4f0) + 8) + 0x60))();
  if (*(int *)(self + 0x5b0) != 0) {
    isFull = PVWPathListBox::IsFull(self);
    uVar4 = 0;
    piVar3 = &DAT_004ed280;
    do {
      bEnable = isFull & 0xff;
      hWnd = GetDlgItem(*(HWND *)(**(int **)(self + 0x160) + 0xc),*piVar3);
      EnableWindow(hWnd,bEnable);
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar4 < 7);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420e2c  PVWPathList::OnDoubleClick   (145 bytes)   [analysis]
//   double-click on a dictionary: opens its properties
void __cdecl PVWPathList::OnDoubleClick(int self,int listId)

{
  BOOL ok;
  
  if (listId == *(int *)(self + 0x228) + 0x1e96) {
    ok = IsWindowEnabled(*(HWND *)(*(int *)(self + 0x444) + 0xc));
    if (ok != 0) {
      PVWPathList::EditDictionary(self,*(int *)(self + 0x228) + 0x1edc);
      return;
    }
  }
  else if (listId == *(int *)(self + 0x228) + 0x1ea0) {
    ok = IsWindowEnabled(*(HWND *)(*(int *)(self + 0x398) + 0xc));
    if (ok != 0) {
      PVWPathList::EditDictionary(self,*(int *)(self + 0x228) + 0x1ed2);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420ec0  PVWPathList::GetControlTip   (684 bytes)   [analysis]
//   tooltip text for an entry of the lists (the dictionary's description)
/* WARNING: Removing unreachable block (ram,0x00420f55) */
void __cdecl PVWPathList::GetControlTip(int self,int *control,int index,int *out)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *lParam;
  undefined4 *sehChainHead;
  int lParam2;
  int local_9c;
  int local_98;
  int local_94;
  undefined *unused;
  undefined *unused2;
  WPARAM unused3;
  WPARAM wParam;
  int local_70;
  int local_6c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 local_44 [12];
  undefined1 str [8];
  undefined *local_c;
  
  __InitExceptBlockLDTC(0x4efc04);
  iVar2 = GetDlgCtrlID(*(HWND *)(*control + 0xc));
  if ((((iVar2 == 0x1e96) || (iVar2 == 0x1ea0)) || (iVar2 == 0x1e97)) || (iVar2 == 0x1ea1)) {
    if (control == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = control[3];
    }
    piVar3 = FUN_004dd744((int)control,iVar2,(int *)&DAT_00402be8,(int *)&DAT_004070f4,0);
    local_c = &g_emptyStringData;
    unused = &g_emptyStringData;
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x20;
    uVar4 = *(uint *)(index + 0xc);
    local_70 = (int)(short)uVar4;
    local_6c = (int)(short)(uVar4 >> 0x10);
    wParam = FUN_004a76a8(*piVar3,0x1a9,0,local_6c << 0x10 | uVar4 & 0xffff);
    iVar2 = (**(code **)(piVar3[3] + 0x24))();
    if ((int)wParam < iVar2) {
      lParam2 = 0;
      local_9c = 0;
      local_98 = 0;
      local_94 = 0;
      unused3 = wParam;
      iVar2 = FUN_004a76a8(*piVar3,0x198,wParam,(LPARAM)&lParam2);
      if (iVar2 != -1) {
        if (((local_70 < lParam2) || (local_98 <= local_70)) ||
           ((local_6c < local_9c || (local_94 <= local_6c)))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          TSDictionaryList::GetSummaryText(piVar3[5],wParam);
        }
      }
    }
    uVar4 = std::string::compare((int)str,0,*(uint *)(local_c + -4),*(byte **)(self + 0x5a8),
                         *(uint *)(*(int *)(self + 0x5a8) + -4));
    if (uVar4 != 0) {
      std::string::operator_assign(self + 0x5a0,(int)str);
      ehContext = 0x2c;
      lParam = FUN_0049f498(local_44,*(undefined4 *)(**(int **)(self + 0x160) + 0xc),
                            *(undefined4 *)(*control + 0xc),*(uint **)(self + 0x5a8));
      ehDtorCount = ehDtorCount + 2;
      FUN_004a76a8(*out,0x40c,0,(LPARAM)lParam);
      ehDtorCount = ehDtorCount + -2;
      operator_delete_array();
      ehContext = 0x20;
    }
    ehDtorCount = ehDtorCount + -1;
    if (local_c != (undefined *)0x0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar3 = (int *)(local_c + -0xc);
        if (piVar3 == &g_nullStringRep) {
          iVar2 = 1;
        }
        else if (piVar3 == &g_nullStringRep) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_0042115b;
      }
      unused2 = local_c + -0xc;
      operator_delete();
    }
  }
LAB_0042115b:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042116c  PVWPathList::FillAvailable   (1153 bytes)   [analysis]
//   lists the .tsd files of the dictionary folder that are not already selected (and are valid dictionaries)
/* WARNING: Removing unreachable block (ram,0x00421274) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl PVWPathList::FillAvailable(int self,int folder)

{
  uint *word_;
  bool bVar2;
  int index;
  uint *puVar4;
  char *path;
  int iVar6;
  undefined3 regHigh;
  int *strRep;
  uint uVar8;
  undefined **ppuVar9;
  undefined4 *sehChainHead;
  char *s2;
  uint local_98;
  undefined4 sehPrevFrame;
  undefined1 local_64 [8];
  char *str;
  undefined1 text [8];
  int str2;
  undefined4 local_44;
  uint first;
  uint last;
  undefined1 local_24 [8];
  int str3;
  undefined1 paths [8];
  undefined *local_c;
  
  __InitExceptBlockLDTC(0x4efcdc);
  PVWEdit::SetPathText((int *)(self + 0x168),folder);
  FindWordInString((int)text,folder,(uint *)&DAT_004ed376);
  std::string::operator_assign(self + 0x230,(int)text);
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep = (int *)(str2 + -0xc);
      if (strRep == &g_nullStringRep) {
        index = 1;
      }
      else if (strRep == &g_nullStringRep) {
        index = 1;
      }
      else {
        *strRep = *strRep + -1;
        index = *strRep + 1;
      }
      if (index != 0) goto LAB_00421249;
    }
    operator_delete();
    str2 = 0;
  }
LAB_00421249:
  local_c = &g_emptyStringData;
  FindWordInString((int)local_24,self + 0x230,(uint *)&DAT_004ed378 /* "*.*" */);
  ListFilesInDirectory(&local_44,(int)local_24);
  for (local_98 = first; local_98 < last; local_98 = local_98 + 0x10) {
    word_ = *(uint **)(local_98 + 8);
    puVar4 = thunk_strrchr(word_,'.');
    if (puVar4 != (uint *)0x0) {
      FindWordInString((int)local_64,self + 0x230,word_);
      for (index = 0; iVar6 = TSDictionaryList::GetCount(*(int *)(self + 0x14)), index < iVar6;
          index = index + 1) {
        s2 = str;
        path = (char *)TSDictionaryList::GetPath(*(int *)(self + 0x14),index);
        iVar6 = strcmp(path,s2);
        if (iVar6 == 0) break;
      }
      iVar6 = TSDictionaryList::GetCount(*(int *)(self + 0x14));
      if (iVar6 <= index) {
        uVar8 = 0;
        ppuVar9 = &PTR_DAT_004f33b0;
        do {
          if (((1 << ((byte)uVar8 & 0x1f) & *(uint *)(self + 0x224)) != 0) &&
             (index = strcmp((char *)puVar4,*ppuVar9), index == 0)) break;
          uVar8 = uVar8 + 1;
          ppuVar9 = ppuVar9 + 1;
        } while (uVar8 < 4);
        if ((uVar8 != 4) &&
           ((*(int *)(self + 0x224) != 4 ||
            (bVar2 = IsValidDictionaryFile(self,(int)local_64), CONCAT31(regHigh,bVar2) != 0)))) {
          if (*(int *)(local_c + -4) != 0) {
            std::string::replace_fill((int)paths,*(uint *)(local_c + -4),0,1,0x3b);
          }
          std::string::append((int)paths,(int)local_64);
        }
      }
      if (str != (char *)0x0) {
        if (*(int *)(str + -0xc) != -1) {
          strRep = (int *)(str + -0xc);
          if (strRep == &g_nullStringRep) {
            index = 1;
          }
          else if (strRep == &g_nullStringRep) {
            index = 1;
          }
          else {
            *strRep = *strRep + -1;
            index = *strRep + 1;
          }
          if (index != 0) goto LAB_0042147c;
        }
        operator_delete();
        str = (char *)0x0;
      }
    }
LAB_0042147c:
  }
  PVWPathListBox::Fill(self + 0xb0,(int)paths,'\x01');
  std::_Destroy_range_string(&local_44,first,last);
  operator_delete();
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      strRep = (int *)(str3 + -0xc);
      if (strRep == &g_nullStringRep) {
        index = 1;
      }
      else if (strRep == &g_nullStringRep) {
        index = 1;
      }
      else {
        *strRep = *strRep + -1;
        index = *strRep + 1;
      }
      if (index != 0) goto LAB_00421547;
    }
    operator_delete();
    str3 = 0;
  }
LAB_00421547:
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      strRep = (int *)(local_c + -0xc);
      if (strRep == &g_nullStringRep) {
        index = 1;
      }
      else if (strRep == &g_nullStringRep) {
        index = 1;
      }
      else {
        *strRep = *strRep + -1;
        index = *strRep + 1;
      }
      if (index != 0) goto LAB_004215da;
    }
    operator_delete();
  }
LAB_004215da:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004215f0  PVWPathList::FillSelected   (173 bytes)   [analysis]
//   lists the selected dictionaries
void __cdecl PVWPathList::FillSelected(int self,int paths)

{
  PVWPathListBox::Fill(self,paths,'\0');
  if (*(int **)(self + 0x5b0) != (int *)0x0) {
    PVWEdit::SetInt(*(int **)(self + 0x5b0));
    FUN_004a76a8(**(int **)(self + 0x5b4),0x465,0,999);
    PVWEdit::SetInt(*(int **)(self + 0x5b8));
    FUN_004a76a8(**(int **)(self + 0x5bc),0x465,0,999);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004216a0  PVWPathList::GetPaths   (60 bytes)   [analysis]
//   the selected dictionaries as a ';'-separated list
undefined4 * __cdecl PVWPathList::GetPaths(undefined4 *result,int self)

{
  undefined4 int_;
  undefined4 int_2;
  
  int_ = PVWEdit::GetInt(*(int **)(self + 0x5b0));
  int_2 = PVWEdit::GetInt(*(int **)(self + 0x5b8));
  *result = int_2;
  result[1] = int_;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x004216dc  IsValidDictionaryFile   (108 bytes)   [analysis]
//   opens a .tsd file through TSDictionaryList and reports whether it loads
//   file placement: inferred (address adjacency)
bool __cdecl IsValidDictionaryFile(undefined4 unused,int path)

{
  undefined1 isLoaded;
  undefined4 *tsDictionaryList;
  int count;
  undefined3 regHigh;
  bool bVar4;
  undefined4 local_c;
  
  bVar4 = false;
  tsDictionaryList = TSDictionaryList::Open(*(uint **)(path + 8));
  if (tsDictionaryList != (undefined4 *)0x0) {
    count = TSDictionaryList::GetCount((int)tsDictionaryList);
    if (count == 1) {
      isLoaded = TSDictionaryList::IsLoaded((int)tsDictionaryList,0);
      if (CONCAT31(regHigh,isLoaded) != 0) {
        TSDictionaryList::GetCounts((int)tsDictionaryList,0);
        bVar4 = 0 < local_c;
      }
    }
  }
  TSDictionaryList::ReleaseDictionaries((int)tsDictionaryList);
  return bVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004217d0  OWL::TDefaultGUIFont::~TDefaultGUIFont   (69 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TDefaultGUIFont::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TDefaultGUIFont::_dtor(uint *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4efd94);
  if (self != (uint *)0x0) {
    OWL::TGdiObject::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004219dc  OWL::TChooseColorDialog::TData::~TData   (69 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TChooseColorDialog::TData::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TChooseColorDialog::TData::_dtor(int self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4efd9c);
  if (self != 0) {
    operator_delete_array();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421a88  OWL::TPen::~TPen   (66 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TPen::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TPen::_dtor(uint *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4efdb0);
  if (self != (uint *)0x0) {
    OWL::TGdiObject::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421b48  PVWPathList::Entry::_dtor   (69 bytes)   [analysis; function defined from prologue-scan]
//   destructor
//   file placement: inferred (address adjacency)
void __cdecl PVWPathList::Entry::_dtor(int self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4efdb8);
  if (self != 0) {
    operator_delete_array();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421c10  OWL::TPopupMenu::~TPopupMenu   (66 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TPopupMenu::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TPopupMenu::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4efdcc);
  if (self != (undefined4 *)0x0) {
    OWL::TMenu::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421cd0  OWL::TListBox::GetCount   (28 bytes)   [rtti:vtable virtual slot 9; function defined from vtable-slot]
//   vtable slot 9; LB_GETCOUNT
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::GetCount(int *self)

{
  FUN_004a76a8(*self,0x18b,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421cec  OWL::TListBox::FindString   (32 bytes)   [rtti:vtable virtual slot 10]
//   vtable slot 10; LB_FINDSTRING
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::FindString(int *self,LPARAM lParam,WPARAM wParam)

{
  FUN_004a76a8(*self,399,wParam,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421d0c  OWL::TListBox::FindExactString   (45 bytes)   [rtti:vtable virtual slot 11]
//   vtable slot 11; the slot that holds CB_FINDSTRINGEXACT in TComboBox (no message of its own here)
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::FindExactString(int *self,undefined4 param_2,undefined4 param_3)

{
  FUN_004a6094(*self,0x1a2,param_3,param_2);
  (**(code **)(self[3] + 0x70))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421d3c  OWL::TListBox::GetTopIndex   (28 bytes)   [rtti:vtable virtual slot 12]
//   vtable slot 12; LB_GETTOPINDEX
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::GetTopIndex(int *self)

{
  FUN_004a76a8(*self,0x18e,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421d58  OWL::TListBox::SetTopIndex   (30 bytes)   [rtti:vtable virtual slot 13]
//   vtable slot 13; LB_SETTOPINDEX
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::SetTopIndex(int *self,WPARAM wParam)

{
  FUN_004a76a8(*self,0x197,wParam,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421d78  OWL::TListBox::GetHorizontalExtent   (28 bytes)   [rtti:vtable virtual slot 14]
//   vtable slot 14; LB_GETHORIZONTALEXTENT
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::GetHorizontalExtent(int *self)

{
  FUN_004a76a8(*self,0x193,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421d94  OWL::TListBox::SetHorizontalExtent   (30 bytes)   [rtti:vtable virtual slot 15]
//   vtable slot 15; LB_SETHORIZONTALEXTENT
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::SetHorizontalExtent(int *self,WPARAM wParam)

{
  FUN_004a76a8(*self,0x194,wParam,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421db4  OWL::TListBox::GetStringLen   (30 bytes)   [rtti:vtable virtual slot 16]
//   vtable slot 16; LB_GETTEXTLEN
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::GetStringLen(int *self,WPARAM wParam)

{
  FUN_004a76a8(*self,0x18a,wParam,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421dd4  OWL::TListBox::GetString   (32 bytes)   [rtti:vtable virtual slot 17]
//   vtable slot 17; LB_GETTEXT
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::GetString(int *self,LPARAM lParam,WPARAM wParam)

{
  FUN_004a76a8(*self,0x189,wParam,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421df4  OWL::TListBox::GetItemData   (32 bytes)   [rtti:vtable virtual slot 18]
//   vtable slot 18; LB_GETITEMDATA
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::GetItemData(int *self,WPARAM wParam)

{
  FUN_004a76a8(*self,0x199,wParam,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421e14  OWL::TListBox::SetItemData   (32 bytes)   [rtti:vtable virtual slot 19]
//   vtable slot 19; LB_SETITEMDATA
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::SetItemData(int *self,WPARAM wParam,LPARAM lParam)

{
  FUN_004a76a8(*self,0x19a,wParam,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421e34  OWL::TListBox::GetItemHeight   (30 bytes)   [rtti:vtable virtual slot 20]
//   vtable slot 20; LB_GETITEMHEIGHT
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::GetItemHeight(int *self,WPARAM wParam)

{
  FUN_004a76a8(*self,0x1a1,wParam,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421e54  OWL::TListBox::SetItemHeight   (48 bytes)   [rtti:vtable virtual slot 21]
//   vtable slot 21; LB_SETITEMHEIGHT
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::SetItemHeight(int *self,WPARAM wParam,ushort lParam)

{
  FUN_004a76a8(*self,0x1a0,wParam,(uint)lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421e84  OWL::TListBox::ClearList   (28 bytes)   [rtti:vtable virtual slot 22]
//   vtable slot 22; LB_RESETCONTENT
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::ClearList(int *self)

{
  FUN_004a76a8(*self,0x184,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421ea0  OWL::TListBox::DirectoryList   (32 bytes)   [rtti:vtable virtual slot 23]
//   vtable slot 23; LB_DIR
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::DirectoryList(int *self,WPARAM wParam,LPARAM lParam)

{
  FUN_004a76a8(*self,0x18d,wParam,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421ec0  OWL::TListBox::AddString   (30 bytes)   [rtti:vtable virtual slot 24]
//   vtable slot 24; LB_ADDSTRING
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::AddString(int *self,LPARAM lParam)

{
  FUN_004a76a8(*self,0x180,0,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421ee0  OWL::TListBox::InsertString   (32 bytes)   [rtti:vtable virtual slot 25]
//   vtable slot 25; LB_INSERTSTRING
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::InsertString(int *self,LPARAM lParam,WPARAM wParam)

{
  FUN_004a76a8(*self,0x181,wParam,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421f00  OWL::TListBox::DeleteString   (30 bytes)   [rtti:vtable virtual slot 26]
//   vtable slot 26; LB_DELETESTRING
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::DeleteString(int *self,WPARAM wParam)

{
  FUN_004a76a8(*self,0x182,wParam,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421ff8  OWL::TEdit::GetSelection   (32 bytes)   [rtti:vtable virtual slot 13]
//   vtable slot 13; EM_GETSEL
//   file placement: inferred (address adjacency)
void __cdecl OWL::TEdit::GetSelection(int *self,WPARAM wParam,LPARAM lParam)

{
  FUN_004a76a8(*self,0xb0,wParam,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422018  OWL::TEdit::vf14   (36 bytes)   [rtti:vtable virtual slot 14]
//   file placement: inferred (address adjacency)
undefined4 __cdecl OWL::TEdit::vf14(int self)

{
  (**(code **)(*(int *)(self + 0xc) + 0x34))();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042203c  OWL::TEdit::SetSelection   (42 bytes)   [rtti:vtable virtual slot 15]
//   vtable slot 15; EM_SETSEL
//   file placement: inferred (address adjacency)
bool __cdecl OWL::TEdit::SetSelection(int *self,WPARAM wParam,LPARAM lParam)

{
  int iVar1;
  
  iVar1 = FUN_004a76a8(*self,0xb1,wParam,lParam);
  return iVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422068  OWL::TEdit::Paste   (28 bytes)   [rtti:vtable virtual slot 17]
//   vtable slot 17; WM_PASTE
//   file placement: inferred (address adjacency)
void __cdecl OWL::TEdit::Paste(int *self)

{
  FUN_004a76a8(*self,0x302,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422084  OWL::TEdit::CharFromPos   (42 bytes)   [rtti:vtable virtual slot 18]
//   vtable slot 18; EM_CHARFROMPOS
//   file placement: inferred (address adjacency)
void __cdecl OWL::TEdit::CharFromPos(int *self,undefined2 param_2,undefined2 param_3)

{
  FUN_004a76a8(*self,0xd7,0,CONCAT22(param_2,param_3));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004220b0  OWL::TEdit::PosFromChar   (32 bytes)   [rtti:vtable virtual slot 19]
//   vtable slot 19; EM_POSFROMCHAR
//   file placement: inferred (address adjacency)
void __cdecl OWL::TEdit::PosFromChar(int *self,WPARAM wParam)

{
  FUN_004a76a8(*self,0xd6,wParam,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422160  OWL::TComboBox::GetCount   (28 bytes)   [rtti:vtable virtual slot 9]
//   vtable slot 9; CB_GETCOUNT
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::GetCount(int *self)

{
  FUN_004a76a8(*self,0x146,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042217c  OWL::TComboBox::FindString   (32 bytes)   [rtti:vtable virtual slot 10]
//   vtable slot 10; CB_FINDSTRING
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::FindString(int *self,LPARAM lParam,WPARAM wParam)

{
  FUN_004a76a8(*self,0x14c,wParam,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042219c  OWL::TComboBox::FindExactString   (45 bytes)   [rtti:vtable virtual slot 11]
//   vtable slot 11; CB_FINDSTRINGEXACT
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::FindExactString(int *self,LPARAM lParam,WPARAM wParam)

{
  FUN_004a76a8(*self,0x158,wParam,lParam);
  (**(code **)(self[3] + 0x70))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004221cc  OWL::TComboBox::GetTopIndex   (28 bytes)   [rtti:vtable virtual slot 12]
//   vtable slot 12; CB_GETTOPINDEX
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::GetTopIndex(int *self)

{
  FUN_004a76a8(*self,0x15b,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004221e8  OWL::TComboBox::SetTopIndex   (30 bytes)   [rtti:vtable virtual slot 13]
//   vtable slot 13; CB_SETTOPINDEX
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::SetTopIndex(int *self,WPARAM wParam)

{
  FUN_004a76a8(*self,0x15c,wParam,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422208  OWL::TComboBox::GetHorizontalExtent   (28 bytes)   [rtti:vtable virtual slot 14]
//   vtable slot 14; CB_GETHORIZONTALEXTENT
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::GetHorizontalExtent(int *self)

{
  FUN_004a76a8(*self,0x15d,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422224  OWL::TComboBox::SetHorizontalExtent   (30 bytes)   [rtti:vtable virtual slot 15]
//   vtable slot 15; CB_SETHORIZONTALEXTENT
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::SetHorizontalExtent(int *self,WPARAM wParam)

{
  FUN_004a76a8(*self,0x15e,wParam,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422244  OWL::TComboBox::GetStringLen   (30 bytes)   [rtti:vtable virtual slot 16]
//   vtable slot 16; CB_GETLBTEXTLEN
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::GetStringLen(int *self,WPARAM wParam)

{
  FUN_004a76a8(*self,0x149,wParam,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422264  OWL::TComboBox::GetString   (32 bytes)   [rtti:vtable virtual slot 17]
//   vtable slot 17; CB_GETLBTEXT
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::GetString(int *self,LPARAM lParam,WPARAM wParam)

{
  FUN_004a76a8(*self,0x148,wParam,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422284  OWL::TComboBox::GetItemData   (32 bytes)   [rtti:vtable virtual slot 18]
//   vtable slot 18; CB_GETITEMDATA
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::GetItemData(int *self,WPARAM wParam)

{
  FUN_004a76a8(*self,0x150,wParam,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004222a4  OWL::TComboBox::SetItemData   (32 bytes)   [rtti:vtable virtual slot 19]
//   vtable slot 19; CB_SETITEMDATA
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::SetItemData(int *self,WPARAM wParam,LPARAM lParam)

{
  FUN_004a76a8(*self,0x151,wParam,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004222c4  OWL::TComboBox::GetItemHeight   (30 bytes)   [rtti:vtable virtual slot 20]
//   vtable slot 20; CB_GETITEMHEIGHT
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::GetItemHeight(int *self,WPARAM wParam)

{
  FUN_004a76a8(*self,0x154,wParam,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004222e4  OWL::TComboBox::SetItemHeight   (48 bytes)   [rtti:vtable virtual slot 21]
//   vtable slot 21; CB_SETITEMHEIGHT
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::SetItemHeight(int *self,WPARAM wParam,ushort lParam)

{
  FUN_004a76a8(*self,0x153,wParam,(uint)lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422314  OWL::TComboBox::ClearList   (28 bytes)   [rtti:vtable virtual slot 22]
//   vtable slot 22; CB_RESETCONTENT
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::ClearList(int *self)

{
  FUN_004a76a8(*self,0x14b,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422330  OWL::TComboBox::DirectoryList   (32 bytes)   [rtti:vtable virtual slot 23]
//   vtable slot 23; CB_DIR
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::DirectoryList(int *self,WPARAM wParam,LPARAM lParam)

{
  FUN_004a76a8(*self,0x145,wParam,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422350  OWL::TComboBox::AddString   (30 bytes)   [rtti:vtable virtual slot 24]
//   vtable slot 24; CB_ADDSTRING
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::AddString(int *self,LPARAM lParam)

{
  FUN_004a76a8(*self,0x143,0,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422370  OWL::TComboBox::InsertString   (32 bytes)   [rtti:vtable virtual slot 25]
//   vtable slot 25; CB_INSERTSTRING
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::InsertString(int *self,LPARAM lParam,WPARAM wParam)

{
  FUN_004a76a8(*self,0x14a,wParam,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422390  OWL::TComboBox::DeleteString   (30 bytes)   [rtti:vtable virtual slot 26]
//   vtable slot 26; CB_DELETESTRING
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::DeleteString(int *self,WPARAM wParam)

{
  FUN_004a76a8(*self,0x144,wParam,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004223b0  OWL::TComboBox::GetSelIndex   (28 bytes)   [rtti:vtable virtual slot 27]
//   vtable slot 27; CB_GETCURSEL
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::GetSelIndex(int *self)

{
  FUN_004a76a8(*self,0x147,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004223cc  OWL::TComboBox::SetSelIndex   (30 bytes)   [rtti:vtable virtual slot 28]
//   vtable slot 28; CB_SETCURSEL
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::SetSelIndex(int *self,WPARAM wParam)

{
  FUN_004a76a8(*self,0x14e,wParam,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004223ec  OWL::TComboBox::GetSelStringIndex   (32 bytes)   [rtti:vtable virtual slot 31]
//   vtable slot 31; CB_FINDSTRINGEXACT of the given text
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::GetSelStringIndex(int *self,LPARAM lParam,WPARAM wParam)

{
  FUN_004a76a8(*self,0x158,wParam,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042240c  OWL::TComboBox::SetSelString   (32 bytes)   [rtti:vtable virtual slot 32]
//   vtable slot 32; CB_SELECTSTRING
//   file placement: inferred (address adjacency)
void __cdecl OWL::TComboBox::SetSelString(int *self,LPARAM lParam,WPARAM wParam)

{
  FUN_004a76a8(*self,0x14d,wParam,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422b88  OWL::TRichEdit::~TRichEdit   (162 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TRichEdit::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f0d88);
  if (self != (int *)0x0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
    OWL::TEditFile::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x1e,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x1c,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422cf8  OWL::TUpDown::~TUpDown   (162 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TUpDown::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TUpDown::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f0d90);
  if (self != (int *)0x0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x14;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x14;
    OWL::TControl::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x14;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x14;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0xe,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0xc,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
