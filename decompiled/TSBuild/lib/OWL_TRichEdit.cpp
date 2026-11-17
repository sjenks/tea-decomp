// TSBuild.exe — runtime / library code "OWL_TRichEdit"
// 32 functions, 0x00419e94..0x0041b3e8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00419e94  OWL::TRichEdit::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TRichEdit::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TRichEdit::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_00422b68(param_1[1],(int *)&OWL::TRichEdit::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TEditFile::vf8(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419edc  OWL::TRichEdit::Cmd24322   (27 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24322)
void __cdecl OWL::TRichEdit::Cmd24322(int *param_1)

{
  FUN_00438338(*param_1,0x300,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419ef8  OWL::TRichEdit::Cmd24323   (27 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24323)
void __cdecl OWL::TRichEdit::Cmd24323(int *param_1)

{
  FUN_00438338(*param_1,0x301,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419f14  OWL::TRichEdit::Cmd24324   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24324)
void __cdecl OWL::TRichEdit::Cmd24324(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x44))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419f24  OWL::TRichEdit::Cmd24325   (15 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24325)
void __cdecl OWL::TRichEdit::Cmd24325(int *param_1)

{
  FUN_0044634c(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419f34  OWL::TRichEdit::Cmd24326   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24326)
void __cdecl OWL::TRichEdit::Cmd24326(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x24))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419f44  OWL::TRichEdit::Cmd24321   (27 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24321)
void __cdecl OWL::TRichEdit::Cmd24321(int *param_1)

{
  FUN_00438338(*param_1,0x304,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a03c  OWL::TRichEdit::vf13   (54 bytes)   [rtti:vtable virtual slot 13]
void __cdecl OWL::TRichEdit::vf13(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0xffffffff;
  FUN_0041a074(param_1,(LPARAM)&local_c);
  *param_2 = local_c;
  *param_3 = local_8;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a090  OWL::TRichEdit::vf15   (48 bytes)   [rtti:vtable virtual slot 15]
bool __cdecl OWL::TRichEdit::vf15(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_2;
  local_8 = param_3;
  iVar1 = FUN_0041a0c0(param_1,(LPARAM)&local_c);
  return -1 < iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a0f8  OWL::TRichEdit::vf12   (46 bytes)   [rtti:vtable virtual slot 12]
void __cdecl OWL::TRichEdit::vf12(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_3;
  local_c = param_4;
  local_8 = param_2;
  FUN_0041a0dc(param_1,(LPARAM)&local_10);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a148  OWL::TRichEdit::vf16   (185 bytes)   [rtti:vtable virtual slot 16]
int __cdecl OWL::TRichEdit::vf16(int *param_1,int param_2,uint *param_3,char param_4,char param_5,char param_6)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int local_18 [2];
  uint *local_10;
  int local_c;
  int local_8;
  
  if ((param_3 == (uint *)0x0) || ((char)*param_3 == '\0')) {
    iVar1 = -1;
  }
  else {
    if ((param_2 == -1) && ((**(code **)(param_1[3] + 0x34))(), param_2 = local_c, param_6 != '\0'))
    {
      param_2 = local_8;
    }
    local_18[1] = 0xffffffff;
    local_10 = param_3;
    if (param_4 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 4;
    }
    if (param_5 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = 2;
    }
    local_18[0] = param_2;
    iVar1 = FUN_0041a128(param_1,uVar2 | uVar4 | (uint)(param_6 == '\0'),(LPARAM)local_18);
    if (-1 < iVar1) {
      pcVar3 = strlen(param_3);
      (**(code **)(param_1[3] + 0x3c))
                (pcVar3 + iVar1,param_1[3],param_3,param_1,pcVar3 + iVar1,iVar1);
    }
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a204  OWL::TRichEdit::vf17   (27 bytes)   [rtti:vtable virtual slot 17]
void __cdecl OWL::TRichEdit::vf17(int *param_1)

{
  FUN_00438338(*param_1,0x302,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a260  OWL::TRichEdit::EvGetDlgCode   (18 bytes)   [owl:response-table message-handler]
//   WM_GETDLGCODE
void __cdecl OWL::TRichEdit::EvGetDlgCode(int *param_1)

{
  FUN_00436428(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a274  OWL::TRichEdit::EvChar   (16 bytes)   [owl:response-table message-handler]
//   WM_CHAR
void __cdecl OWL::TRichEdit::EvChar(int *param_1)

{
  FUN_00436428(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a284  OWL::TRichEdit::EvKeyDown   (16 bytes)   [owl:response-table message-handler]
//   WM_KEYDOWN
void __cdecl OWL::TRichEdit::EvKeyDown(int *param_1)

{
  FUN_00436428(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a294  OWL::TRichEdit::EvKillFocus   (21 bytes)   [owl:response-table message-handler]
//   WM_KILLFOCUS
void __cdecl OWL::TRichEdit::EvKillFocus(int *param_1)

{
  OWL::TWindow::EvKillFocus(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a2ac  OWL::TRichEdit::EvSetFocus   (16 bytes)   [owl:response-table message-handler]
//   WM_SETFOCUS
void __cdecl OWL::TRichEdit::EvSetFocus(int *param_1)

{
  FUN_00436428(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a2bc  OWL::TRichEdit::CeShared_41a2bc   (55 bytes)   [owl:response-table message-handler]
//   one handler for 3 table entries: id 24322; id 24323; id 24325
//   also: OWL::TRichEdit::CeShared_41a2bc [owl:response-table]; OWL::TRichEdit::CeShared_41a2bc [owl:response-table]
void __cdecl OWL::TRichEdit::CeShared_41a2bc(int param_1,undefined4 *param_2)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x34))();
  (**(code **)*param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a2f4  OWL::TRichEdit::CeCmd24324   (184 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24324)
void __cdecl OWL::TRichEdit::CeCmd24324(int *param_1,undefined4 *param_2)

{
  int iVar1;
  BOOL BVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  char local_5;
  
  __InitExceptBlockLDTC(0x4780d4);
  FUN_0041fcdc(&local_5,*(HWND *)(*param_1 + 0xc),'\x01');
  if (local_5 != '\0') {
    iVar1 = CountClipboardFormats();
    if (iVar1 != 0) {
      BVar2 = IsClipboardFormatAvailable(1);
      if (BVar2 == 0) {
        BVar2 = IsClipboardFormatAvailable(7);
        if (BVar2 == 0) {
          BVar2 = IsClipboardFormatAvailable(0xd);
          if (BVar2 == 0) goto LAB_0041a382;
        }
      }
      (**(code **)*param_2)();
      goto LAB_0041a38c;
    }
  }
LAB_0041a382:
  (**(code **)*param_2)();
LAB_0041a38c:
  OWL::TClipboard::_dtor(&local_5,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a3f8  OWL::TRichEdit::CeCmd24326   (68 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   EV_COMMAND_ENABLE(24326)
void __cdecl OWL::TRichEdit::CeCmd24326(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00438338(*param_1,0xba,0,0);
  if (iVar1 == 1) {
    FUN_00445fe4(param_1,0);
  }
  (**(code **)*param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a43c  OWL::TRichEdit::CeCmd24321   (49 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24321)
void __cdecl OWL::TRichEdit::CeCmd24321(int *param_1,undefined4 *param_2)

{
  FUN_00438338(*param_1,0xc6,0,0);
  (**(code **)*param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a470  OWL::TRichEdit::vf11   (37 bytes)   [rtti:vtable virtual slot 11]
char * __stdcall OWL::TRichEdit::vf11(void)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\0';
  FUN_00419e84();
  iVar1 = FUN_0041acb0(cVar2);
  if (1 < iVar1) {
    return "RichEdit20A";
  }
  return "RICHEDIT";
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a498  OWL::TRichEdit::vf20   (205 bytes)   [rtti:vtable virtual slot 20]
void __cdecl OWL::TRichEdit::vf20(int *param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  char *local_c;
  
  __InitExceptBlockLDTC(0x478104);
  OWL::TEditFile::vf20(param_1);
  FUN_0044f1ec((int)local_14,*(int *)(*param_1 + 0x70),0x7f2b);
  FUN_00450c98(local_c,extraout_EDX,extraout_ECX,(int)(param_1 + 0xe),(uint *)local_c);
  if (local_c != (char *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0041a554;
    }
    operator_delete();
  }
LAB_0041a554:
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a63c  OWL::TRichEdit::vf10   (7 bytes)   [rtti:vtable virtual slot 10]
undefined4 __stdcall OWL::TRichEdit::vf10(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a6bc  OWL::TRichEdit::vf25   (285 bytes)   [rtti:vtable virtual slot 25]
undefined4 __cdecl OWL::TRichEdit::vf25(int *param_1,LPCSTR param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_b0;
  int local_8c [34];
  
  __InitExceptBlockLDTC(0x478144);
  if (param_2 == (LPCSTR)0x0) {
    if (param_1[0x18] == 0) {
      *in_FS_OFFSET = local_b0;
      return 0;
    }
    param_2 = (LPCSTR)param_1[0x18];
  }
  FUN_0045b958(local_8c,0,param_2,6,0x1b6);
  if ((*(byte *)(local_8c[0] + 0x30) & 5) == 0) {
    (**(code **)(param_1[3] + 0x24))();
    bVar1 = FUN_0041a644(param_1,local_8c,param_1[0x19]);
    if (bVar1) {
      uVar2 = FUN_00438338(*param_1,0xb9,0,0);
      uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
      std::basic_ifstream_char::_dtor(local_8c,2);
      *in_FS_OFFSET = local_b0;
      return uVar2;
    }
  }
  uVar2 = 0;
  std::basic_ifstream_char::_dtor(local_8c,2);
  *in_FS_OFFSET = local_b0;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a7dc  OWL::TRichEdit::vf29   (277 bytes)   [rtti:vtable virtual slot 29]
undefined4 __cdecl OWL::TRichEdit::vf29(int *param_1,LPCSTR param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_ac;
  int local_88 [33];
  
  __InitExceptBlockLDTC(0x478184);
  if (param_2 == (LPCSTR)0x0) {
    if (param_1[0x18] == 0) {
      *in_FS_OFFSET = local_ac;
      return 0;
    }
    param_2 = (LPCSTR)param_1[0x18];
  }
  FUN_0045c140(local_88,0,param_2,10,0x1b6);
  if (((*(byte *)(local_88[0] + 0x30) & 5) == 0) &&
     (bVar1 = FUN_0041a680(param_1,local_88,param_1[0x19]), bVar1)) {
    uVar2 = FUN_00438338(*param_1,0xb9,0,0);
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
    std::basic_ofstream_char::_dtor(local_88,2);
    *in_FS_OFFSET = local_ac;
  }
  else {
    uVar2 = 0;
    std::basic_ofstream_char::_dtor(local_88,2);
    *in_FS_OFFSET = local_ac;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ab84  OWL::TRichEdit::Streamer::vf1   (27 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TRichEdit::Streamer::vf1(int param_1,int *param_2)

{
  FUN_0041aba0(*(int *)(param_1 + 8),param_2);
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0041abf8  OWL::TRichEdit::Streamer::vf2   (22 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TRichEdit::Streamer::vf2(int param_1,int *param_2)

{
  FUN_0041ac10(*(int *)(param_1 + 8),param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ae38  OWL::TRichEdit::~TRichEdit   (162 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TRichEdit::_dtor
void __cdecl OWL::TRichEdit::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47821c);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
    OWL::TEditFile::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x1e,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x1c,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b0ac  OWL::TRichEdit::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3]
undefined4 __stdcall OWL::TRichEdit::Streamer::vf3(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b3b4  OWL::TRichEdit::vf18   (50 bytes)   [rtti:vtable virtual slot 18]
void __cdecl OWL::TRichEdit::vf18(int *param_1,short param_2,short param_3)

{
  int local_c;
  int local_8;
  
  local_c = (int)param_2;
  local_8 = (int)param_3;
  FUN_00438338(*param_1,0xd7,0,(LPARAM)&local_c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b3e8  OWL::TRichEdit::vf19   (93 bytes)   [rtti:vtable virtual slot 19]
undefined4 __cdecl OWL::TRichEdit::vf19(int *param_1,WPARAM param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  undefined2 local_c [2];
  undefined2 local_8;
  
  cVar3 = '\0';
  FUN_00419e84();
  iVar1 = FUN_0041acb0(cVar3);
  if (iVar1 == 2) {
    uVar2 = FUN_00438338(*param_1,0xd6,param_2,0);
  }
  else {
    FUN_00438338(*param_1,0xd6,(WPARAM)local_c,param_2);
    uVar2 = CONCAT22(local_c[0],local_8);
  }
  return uVar2;
}

} // namespace tea
