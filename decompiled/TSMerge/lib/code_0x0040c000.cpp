// TSMerge.exe — runtime / library code "code_0x0040c000"
// 15 functions, 0x0040f010..0x0040fcbc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0040f010  FUN_0040f010   (108 bytes)   [unnamed]
void __cdecl FUN_0040f010(int param_1,byte param_2)

{
  int *moduleInstance;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4642e0);
  if (param_1 != 0) {
    moduleInstance = (int *)OWL::TRichEdit::GetModuleInstance();
    if ((undefined4 *)*moduleInstance != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*moduleInstance)();
    }
    *moduleInstance = 0;
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f0e0  FUN_0040f0e0   (28 bytes)   [unnamed]
void __cdecl FUN_0040f0e0(int *param_1,LPARAM lParam)

{
  FUN_0042d1a4(*param_1,0x434,0,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f12c  OWL::TRichEdit::SetSelection_46924c   (28 bytes)   [analysis (position-matched TEA.exe)]
//   paired with TEA.exe 0x0046924c by position between identical neighbours; the bodies differ (30 vs 28 bytes), so treat the name as probable. EM_EXSETSEL
undefined4 __cdecl OWL::TRichEdit::SetSelection_46924c(int *self,LPARAM range)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0042d1a4(*self,0x437,0,range);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f148  OWL::TRichEdit::GetTextRange   (28 bytes)   [analysis (position-matched TEA.exe)]
//   paired with TEA.exe 0x0046926c by position between identical neighbours; the bodies differ (30 vs 28 bytes), so treat the name as probable. EM_GETTEXTRANGE
void __cdecl OWL::TRichEdit::GetTextRange(int *self,LPARAM textRange)

{
  FUN_0042d1a4(*self,1099,0,textRange);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f194  FUN_0040f194   (29 bytes)   [unnamed]
undefined4 __cdecl FUN_0040f194(int *param_1,WPARAM wParam,LPARAM lParam)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0042d1a4(*param_1,0x438,wParam,lParam);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f28c  FUN_0040f28c   (31 bytes)   [unnamed]
void __cdecl FUN_0040f28c(int *param_1,WPARAM wParam,LPARAM lParam)

{
  FUN_0042d1a4(*param_1,0x449,wParam,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f2ac  FUN_0040f2ac   (31 bytes)   [unnamed]
void __cdecl FUN_0040f2ac(int *param_1,WPARAM wParam,LPARAM lParam)

{
  FUN_0042d1a4(*param_1,0x44a,wParam,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f5d4  FUN_0040f5d4   (67 bytes)   [unnamed]
undefined4 __stdcall FUN_0040f5d4(int *param_1,undefined1 *param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  if ((*(byte *)(*param_1 + 0x30) & 2) == 0) {
    FUN_00451098(param_1,param_2,param_3);
    uVar1 = FUN_00451050((int)param_1);
    *param_4 = uVar1;
  }
  else {
    *param_4 = 0;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f618  FUN_0040f618   (142 bytes)   [unnamed]
undefined4 __stdcall FUN_0040f618(int *param_1,int param_2,int param_3,int *param_4)

{
  int local_1c [3];
  int local_10 [3];
  
  FUN_00452bbc(local_10,param_1);
  FUN_004517ec(param_1,param_2,param_3);
  FUN_00452bbc(local_1c,param_1);
  *param_4 = local_1c[0] - local_10[0];
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f6b0  FUN_0040f6b0   (57 bytes)   [unnamed]
bool __cdecl FUN_0040f6b0(int *param_1,undefined4 param_2,WPARAM wParam)

{
  undefined4 lParam;
  int local_c;
  code *unused;
  
  lParam = param_2;
  local_c = 0;
  unused = FUN_0040f5d4;
  FUN_0040f28c(param_1,wParam,(LPARAM)&lParam);
  return local_c == 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040f6ec  FUN_0040f6ec   (57 bytes)   [unnamed]
bool __cdecl FUN_0040f6ec(int *param_1,undefined4 param_2,WPARAM wParam)

{
  undefined4 lParam;
  int local_c;
  code *unused;
  
  lParam = param_2;
  local_c = 0;
  unused = FUN_0040f618;
  FUN_0040f2ac(param_1,wParam,(LPARAM)&lParam);
  return local_c == 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040fb7c  FUN_0040fb7c   (87 bytes)   [unnamed]
void __cdecl FUN_0040fb7c(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 streamer [3];
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[3] != 0) {
    FUN_0042280c(param_2,&local_8,4);
  }
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  piVar1 = OWL::TEditFile::Streamer::Streamer(streamer,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040fbec  FUN_0040fbec   (81 bytes)   [unnamed]
void __cdecl FUN_0040fbec(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 streamer [3];
  undefined4 local_8;
  
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  OWL::TEditFile::Streamer::Streamer(streamer,piVar1);
  local_8 = 1;
  FUN_00422d00(param_2,&local_8,4);
  OWL::TEditFile::Streamer::vf2((int)streamer,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040fc8c  OWL::TRichEdit::UseRichEdit2   (48 bytes)   [analysis (matched TEA.exe)]
//   identical body to TEA.exe 0x00469b1c. whether the RichEdit 2.0 control is available
undefined4 __cdecl OWL::TRichEdit::UseRichEdit2(char load)

{
  if (DAT_004640c4 == '\0') {
    if (load == '\0') {
      DAT_004640c0 = GetRichEditVersion();
    }
    else {
      DAT_004640c0 = 1;
    }
    DAT_004640c4 = DAT_004640c4 + '\x01';
  }
  return DAT_004640c0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040fcbc  FUN_0040fcbc   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_0040fcbc(int *param_1)

{
  undefined4 *streamer;
  int *richEdit;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46443c);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      richEdit = (int *)operator_new();
      if (richEdit == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        OWL::TRichEdit::TRichEdit(richEdit,0);
        param_1 = (int *)richEdit[2];
      }
    }
    OWL::TRichEdit::Streamer::Streamer(streamer,param_1);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
}

} // namespace tea
