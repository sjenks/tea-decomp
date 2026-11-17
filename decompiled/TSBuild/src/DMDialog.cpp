// TSBuild.exe — application module "DMDialog"
// 63 functions, 0x00401000..0x00405f68. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00401000  entry   (2 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall entry(void)

{
  undefined **ppuVar1;
  
  _DAT_004742d7 = _tls_index << 2;
  GetModuleHandleA((LPCSTR)0x0);
  FUN_00457bd8();
  FUN_00456f74();
  FUN_00457bdc();
  FUN_00468830((undefined4 *)0x0);
  ppuVar1 = &PTR_DAT_0047427c;
  _DAT_004742db = GetModuleHandleA((LPCSTR)0x0);
  FUN_004710cc((int)ppuVar1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401012  FUN_00401012   (71 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_00401012(void)

{
  undefined **ppuVar1;
  
  _DAT_004742d7 = _tls_index << 2;
  GetModuleHandleA((LPCSTR)0x0);
  FUN_00457bd8();
  FUN_00456f74();
  FUN_00457bdc();
  FUN_00468830((undefined4 *)0x0);
  ppuVar1 = &PTR_DAT_0047427c;
  _DAT_004742db = GetModuleHandleA((LPCSTR)0x0);
  FUN_004710cc((int)ppuVar1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401059  __GetExceptDLLinfo   (5 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl __GetExceptDLLinfo(undefined4 *param_1)

{
                    /* 0x1059  1  __GetExceptDLLinfo */
  _DAT_00488f84 = FUN_00401140();
  _DAT_00488f84 = _DAT_00488f84 + 0x1c;
  *param_1 = 0x82727349;
  param_1[1] = &DAT_00488f70;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401140  FUN_00401140   (15 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
undefined4 __stdcall FUN_00401140(void)

{
  int *piVar1;
  undefined2 in_FS;
  
  piVar1 = (int *)segment(in_FS,0x2c);
  return *(undefined4 *)(*piVar1 + _tls_index * 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x00401150  FUN_00401150   (85 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
/* WARNING: Removing unreachable block (ram,0x0040118f) */
void __stdcall FUN_00401150(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x474314);
  (*(undefined * *)&DAT_0048b444) = &DAT_00485bd8;
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004011a8  FUN_004011a8   (163 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
void __stdcall FUN_004011a8(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x474334);
  if (DAT_0048b444 != 0) {
    if (*(int *)(DAT_0048b444 + -0xc) != -1) {
      piVar2 = (int *)(DAT_0048b444 + -0xc);
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
      if (iVar1 != 0) goto LAB_0040123b;
    }
    operator_delete();
    DAT_0048b444 = 0;
  }
LAB_0040123b:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040124c  DMDialog::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: DMDialog::vf14 [rtti:vtable]
undefined4 __cdecl DMDialog::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_00422b68(param_1[1],(int *)&DMDialog::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TDialog::vf14(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401294  FUN_00401294   (1042 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_00401294(int *param_1,int param_2,undefined4 param_3,uint *param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4747f4);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x366);
    param_1[0x366] = (int)(param_1 + 0x363);
    param_1[0x367] = (int)(param_1 + 0x364);
    param_1[1] = (int)(param_1 + 0x363);
    param_1[2] = (int)(param_1 + 0x364);
    param_1[0x362] = 0;
    param_1[0x365] = 0;
    param_1[0x363] = (int)&OWL::TEventHandler::vftable;
    param_1[0x364] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_00435d18(param_1 + 0x366,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xd70;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xd70;
  FUN_0043f628(param_1,1,param_3,param_4,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xd70;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xd70;
  FUN_00405f68(param_1 + 6);
  param_1[3] = (int)&DMDialog::vftable;
  param_1[6] = (int)&PTR_LAB_00474eac;
  *(undefined ***)param_1[1] = &PTR_LAB_00474ec8;
  *(undefined ***)param_1[2] = &PTR_LAB_00474ed4;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00474ee0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_00445680(param_1 + 9,0,*param_1,0x6f,1000,0);
  FUN_00445680((int *)((int)param_1 + 0xd6),0,*param_1,0x66,0,0);
  FUN_00445680(param_1 + 0x62,0,*param_1,0x69,0,0);
  FUN_00445680((int *)((int)param_1 + 0x23a),0,*param_1,0x71,1000,0);
  FUN_0043d0c0(param_1 + 0xbb,0,*param_1,0x79,0,0);
  FUN_004171b4(param_1 + 0xe7,0,*param_1,0x102);
  FUN_00452dcc(param_1 + 0x114,0,*param_1,0x67,0,0);
  FUN_0043c86c((int *)((int)param_1 + 0x4fe),0,*param_1,0x70,0);
  FUN_0043c86c((int *)((int)param_1 + 0x5aa),0,*param_1,0x68,0);
  FUN_0043c86c((int *)((int)param_1 + 0x656),0,*param_1,0x78,0);
  FUN_0043c86c((int *)((int)param_1 + 0x702),0,*param_1,0x65,0);
  FUN_0043c86c((int *)((int)param_1 + 0x7ae),0,*param_1,0x6a,0);
  FUN_0043c86c((int *)((int)param_1 + 0x85a),0,*param_1,1,0);
  FUN_00451770((int *)((int)param_1 + 0x906),0,*param_1,0x6c,0);
  FUN_00451770(param_1 + 0x26e,0,*param_1,0x6e,0);
  FUN_00451770((int *)((int)param_1 + 0xa6a),0,*param_1,0x77,0);
  FUN_00445680(param_1 + 0x2c7,0,*param_1,0x6b,0,0);
  FUN_00445680((int *)((int)param_1 + 0xbce),0,*param_1,0x6d,0,0);
  FUN_00445680(param_1 + 800,0,*param_1,0x76,0,0);
  param_1[0x34d] = 0;
  FUN_00415fb8((int)(param_1 + 0x34e));
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004016c0  DMDialog::vf15   (262 bytes)   [rtti:vtable virtual slot 15]
bool __cdecl DMDialog::vf15(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  uint local_8004 [7162];
  undefined4 uStackY_101c;
  
  iVar1 = 8;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  bVar3 = *(int *)(param_1 + 0x1c) != 2;
  if (bVar3) {
    GetWindowTextA(*(HWND *)(*(int *)(param_1 + 0x24) + 0xc),(LPSTR)local_8004,0x8000);
    FUN_00459b6c(param_1 + 0xd58,local_8004);
    GetWindowTextA(*(HWND *)(*(int *)(param_1 + 0xd6) + 0xc),(LPSTR)local_8004,0x8000);
    FUN_00459b6c(param_1 + 0xd68,local_8004);
    uVar2 = FUN_00403588(param_1,(int *)(param_1 + 0xb1c));
    *(undefined4 *)(param_1 + 0xd78) = uVar2;
    uVar2 = FUN_00403588(param_1,(int *)(param_1 + 0xbce));
    *(undefined4 *)(param_1 + 0xd7c) = uVar2;
    uVar2 = FUN_00403588(param_1,(int *)(param_1 + 0xc80));
    *(undefined4 *)(param_1 + 0xd80) = uVar2;
    uStackY_101c = 0x4017a0;
    iVar1 = FUN_00438338(*(int *)(param_1 + 0x2ec),0xf0,0,0);
    *(uint *)(param_1 + 0xd84) = (uint)(iVar1 == 1);
    FUN_00416c8c(param_1 + 0xd38);
  }
  return bVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004017c8  DMDialog::vf9   (36 bytes)   [rtti:vtable virtual slot 9]
void __cdecl DMDialog::vf9(int *param_1,INT_PTR param_2)

{
  if (param_1[7] == 2) {
    param_1[7] = 3;
    return;
  }
  OWL::TDialog::vf9(param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004017ec  DMDialog::vf11   (2076 bytes)   [rtti:vtable virtual slot 11]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl DMDialog::vf11(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_384 [248];
  undefined4 local_28c;
  int *local_27c;
  undefined1 local_264 [248];
  undefined4 local_16c;
  undefined4 local_15c;
  int local_154;
  uint local_150;
  undefined1 local_149;
  uint local_148;
  undefined1 *local_144;
  undefined4 local_140;
  int *local_13c;
  int *local_138;
  int *local_134;
  int *local_130;
  uint local_12c;
  undefined1 *local_128;
  int *local_124;
  int *local_120;
  uint local_11c;
  int *local_118;
  undefined1 *local_114;
  int *local_110;
  undefined4 local_10c;
  uint *local_100;
  uint local_fc;
  undefined1 *local_f8;
  undefined4 local_f4;
  int *local_f0;
  int *local_ec;
  int *local_e8;
  int *local_e4;
  uint local_e0;
  undefined1 *local_dc;
  int *local_d8;
  int *local_d4;
  uint local_d0;
  int *local_cc;
  undefined1 *local_c8;
  int *local_c4;
  undefined4 local_c0;
  uint *local_b4;
  undefined1 *local_b0;
  undefined4 local_ac;
  int local_a8;
  undefined1 *local_a4;
  undefined4 local_a0;
  int local_9c;
  undefined4 local_98;
  undefined2 local_88;
  int local_7c;
  undefined1 local_74 [8];
  int *local_6c;
  undefined1 local_64 [8];
  int *local_5c;
  undefined **local_54 [2];
  undefined1 local_4c [8];
  int *local_44;
  undefined **local_3c [2];
  undefined1 local_34 [8];
  int *local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x474960);
  OWL::TDialog::vf11(param_1);
  local_88 = 8;
  GetProgramDirectory((int)local_14);
  local_7c = local_7c + 1;
  FUN_004162e4((int)(param_1 + 0x34e),(int)local_14);
  local_7c = local_7c + -1;
  if (local_c != 0) {
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
      if (iVar1 != 0) goto LAB_004018b8;
    }
    local_9c = local_c + -0xc;
    operator_delete();
    local_a0 = 0;
    local_a4 = local_14;
    local_c = 0;
    local_15c = 0;
  }
LAB_004018b8:
  local_88 = 0x20;
  FUN_00418d04((int)local_24);
  local_7c = local_7c + 1;
  FUN_00459ad4(0x48b43c,(int)local_24);
  local_7c = local_7c + -1;
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar2 = (int *)(local_1c + -0xc);
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
      if (iVar1 != 0) goto LAB_00401962;
    }
    local_a8 = local_1c + -0xc;
    operator_delete();
    local_ac = 0;
    local_b0 = local_24;
    local_1c = 0;
    local_16c = 0;
  }
LAB_00401962:
  if (*(int *)(DAT_0048b444 + -4) == 0) goto LAB_00401eec;
  uVar3 = *(int *)(DAT_0048b444 + -4) - 1;
  if (DAT_00485f20 - 0xeU < uVar3) {
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 1;
    puVar5 = &LAB_00402064;
    uVar4 = 0;
    local_88 = 0x44;
    local_b4 = (uint *)FUN_004670cc(local_264,PTR_s_invalid_string_size_parameter_in_00488a54);
    std::string::string_from_cstr((int)local_64,local_b4);
    local_7c = local_7c + 2;
    local_3c[0] = &std::logic_error::vftable;
    local_c0 = 0;
    local_2c = (int *)0x0;
    local_88 = 0x50;
    if (local_5c[-3] == -1 || local_5c[-3] + 1 < 0) {
      local_d0 = local_5c[-1];
      local_d8 = std::string::__getRep(local_34,local_d0,local_d0);
      local_dc = local_34;
      local_27c = local_d8 + 3;
      local_e0 = local_d0;
      local_e4 = local_5c;
      local_e8 = local_27c;
      local_d4 = local_27c;
      local_2c = local_27c;
      memcpy(local_27c,local_5c,local_d0);
    }
    else {
      local_c8 = local_34;
      local_c4 = local_5c;
      local_2c = local_5c;
      local_cc = local_5c + -3;
      if (local_cc != &DAT_00485bcc) {
        *local_cc = *local_cc + 1;
      }
    }
    local_88 = 0x44;
    local_3c[0] = &std::length_error::vftable;
    local_7c = local_7c + 2;
    if (local_5c != (int *)0x0) {
      if (local_5c[-3] != -1) {
        piVar2 = local_5c + -3;
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
        if (iVar1 != 0) goto LAB_00401bbd;
      }
      local_ec = local_5c + -3;
      local_f0 = local_5c + -3;
      operator_delete();
      local_f4 = 0;
      local_f8 = local_64;
      local_5c = (int *)0x0;
      local_28c = 0;
    }
LAB_00401bbd:
    local_88 = 0x38;
    FUN_00471ae8((uint *)&DAT_00402008,(undefined4*)local_3c,uVar4,puVar5,uVar6,uVar7,uVar8,uVar9);
  }
  if (uVar3 < *(uint *)(DAT_0048b444 + -4)) {
    local_fc = *(int *)(DAT_0048b444 + -4) - uVar3;
    if (*(uint *)(DAT_0048b444 + -4) < uVar3) {
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 1;
      puVar5 = &LAB_004021bc;
      uVar4 = 0;
      local_88 = 0x74;
      local_100 = (uint *)FUN_004670cc(local_384,PTR_s_string_index_out_of_range_in_fun_00488a60);
      std::string::string_from_cstr((int)local_74,local_100);
      local_7c = local_7c + 2;
      local_54[0] = &std::logic_error::vftable;
      local_10c = 0;
      local_44 = (int *)0x0;
      local_88 = 0x80;
      if (local_6c[-3] == -1 || local_6c[-3] + 1 < 0) {
        local_11c = local_6c[-1];
        local_124 = std::string::__getRep(local_4c,local_11c,local_11c);
        local_128 = local_4c;
        local_134 = local_124 + 3;
        local_12c = local_11c;
        local_130 = local_6c;
        local_120 = local_134;
        local_44 = local_134;
        memcpy(local_134,local_6c,local_11c);
      }
      else {
        local_114 = local_4c;
        local_110 = local_6c;
        local_44 = local_6c;
        local_118 = local_6c + -3;
        if (local_118 != &DAT_00485bcc) {
          *local_118 = *local_118 + 1;
        }
      }
      local_88 = 0x74;
      local_54[0] = &std::out_of_range::vftable;
      local_7c = local_7c + 2;
      if (local_6c != (int *)0x0) {
        if (local_6c[-3] != -1) {
          piVar2 = local_6c + -3;
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
          if (iVar1 != 0) goto LAB_00401e3d;
        }
        local_138 = local_6c + -3;
        local_13c = local_6c + -3;
        operator_delete();
        local_140 = 0;
        local_144 = local_74;
        local_6c = (int *)0x0;
      }
LAB_00401e3d:
      local_88 = 0x38;
      FUN_00471ae8((uint *)&DAT_00402160,(undefined4*)local_54,uVar4,puVar5,uVar6,uVar7,uVar8,uVar9);
    }
    local_148 = *(int *)(DAT_0048b444 + -4) - uVar3;
    local_149 = 0;
    local_150 = local_148;
    if (local_fc < local_148) {
      local_150 = local_fc;
    }
    FUN_0045a224(0x48b43c,uVar3,local_150,(uint)&local_149,0,0,0);
  }
  else {
    std::string::replace_fill(0x48b43c,*(uint *)(DAT_0048b444 + -4),0,uVar3 - *(int *)(DAT_0048b444 + -4),0);
  }
  if ((undefined4 *)(DAT_0048b444 + -0xc) != &DAT_00485bcc) {
    *(undefined4 *)(DAT_0048b444 + -0xc) = 0;
  }
LAB_00401eec:
  FUN_00403554(param_1,param_1 + 0x2c7);
  FUN_00403554(param_1,(int *)((int)param_1 + 0xbce));
  FUN_00403554(param_1,param_1 + 800);
  FUN_0043d358(param_1 + 0xbb,(uint)(param_1[0x361] != 0));
  iVar1 = thunk_FUN_00468a98((LPCSTR)param_1[0x35c],0);
  if (iVar1 == 0) {
    FUN_004035b8((int)param_1,(uint *)param_1[0x35c]);
  }
  iVar1 = FUN_00419664((LPCSTR)param_1[0x358],&DAT_0048b33c,0x100,&local_154);
  param_1[8] = iVar1;
  if (iVar1 == 0) {
    iVar1 = FUN_00419664((LPCSTR)param_1[0x354],&DAT_0048b33c,0x100,&local_154);
    param_1[8] = iVar1;
    if (iVar1 != 0) {
      SetWindowTextA(*(HWND *)(param_1[9] + 0xc),(LPCSTR)param_1[0x354]);
    }
  }
  else {
    SetWindowTextA(*(HWND *)(param_1[9] + 0xc),(LPCSTR)param_1[0x358]);
  }
  FUN_004029e8((int)param_1);
  *in_FS_OFFSET = local_98;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040233c  DMDialog::EvClose   (15 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_CLOSE
void __cdecl DMDialog::EvClose(int *param_1)

{
  EvClose_440344(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040234c  FUN_0040234c   (97 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
bool __cdecl FUN_0040234c(int *param_1,int param_2)

{
  BOOL BVar1;
  MSG local_20;
  
  while( true ) {
    BVar1 = PeekMessageA(&local_20,(HWND)0x0,0,0,1);
    if (BVar1 == 0) break;
    BVar1 = IsDialogMessageA(*(HWND *)(*param_1 + 0xc),&local_20);
    if (BVar1 == 0) {
      TranslateMessage(&local_20);
      DispatchMessageA(&local_20);
    }
  }
  FUN_0041740c(param_1 + 0xe7,param_2);
  return param_1[7] == 2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004023b0  DMDialog::vf16   (141 bytes)   [rtti:vtable virtual slot 16]
undefined4 __cdecl DMDialog::vf16(int *param_1,undefined4 *param_2,int param_3,uint param_4,int param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined3 extraout_var;
  int iVar4;
  
  if ((param_2 != (undefined4 *)0x0) &&
     (puVar2 = FUN_00469618(param_2,param_3,(int *)param_1[0x34d]), puVar2 == (undefined4 *)0x0)) {
    return 1;
  }
  uVar3 = param_4 & 0x8000001f;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
  }
  if (uVar3 == 0) {
    if (param_5 < 1) {
      if ((int)param_4 < 0) {
        param_4 = param_4 + 0x1f;
      }
      iVar4 = (int)(CONCAT44((int)param_4 >> 0x1f,(int)param_4 >> 5) % 100);
    }
    else {
      iVar4 = (int)(param_4 * 100) / param_5;
    }
    bVar1 = FUN_0040234c(param_1,iVar4);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      return 0;
    }
  }
  return 2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00402440  DMDialog::vf17   (21 bytes)   [rtti:vtable virtual slot 17]
void __cdecl DMDialog::vf17(int param_1)

{
  FUN_0046a364(*(int **)(param_1 + 0xd34));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00402458  DMDialog::vf18   (79 bytes)   [rtti:vtable virtual slot 18]
void __cdecl DMDialog::vf18(int param_1,byte *param_2)

{
  int iVar1;
  CHAR aCStackY_10004 [61420];
  undefined4 uStackY_1018;
  
  iVar1 = 0x10;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  uStackY_1018 = 0x402489;
  FUN_0046a5c8(aCStackY_10004,param_2);
  SetWindowTextA(*(HWND *)(*(int *)(param_1 + 0x450) + 0xc),aCStackY_10004);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004024a8  DMDialog::vf19   (26 bytes)   [rtti:vtable virtual slot 19]
void __cdecl DMDialog::vf19(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x48))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004024c4  DMDialog::Cmd101   (673 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(101)
int __cdecl DMDialog::Cmd101(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStackY_107fc [1024];
  uint auStackY_103fc [250];
  CHAR aCStackY_10014 [32768];
  CHAR local_8014 [26600];
  undefined4 uStackY_182c;
  int local_c;
  
  iVar1 = 0x10;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + -1;
  } while (iVar2 + -1 != 0);
  if (param_1[7] == 1) {
    GetWindowTextA(*(HWND *)(*(int *)((int)param_1 + 0xd6) + 0xc),local_8014,0x8000);
    GetWindowTextA(*(HWND *)(param_1[0x62] + 0xc),aCStackY_10014,0x8000);
    GetWindowTextA(*(HWND *)(*(int *)((int)param_1 + 0x23a) + 0xc),(LPSTR)auStackY_103fc,1000);
    iVar1 = FUN_00438338(param_1[0xbb],0xf0,0,0);
    iVar2 = FUN_00403588(param_1,param_1 + 0x2c7);
    if (100 < iVar2) {
      iVar2 = 100;
    }
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    iVar3 = FUN_00403588(param_1,(int *)((int)param_1 + 0xbce));
    if (100 < iVar3) {
      iVar3 = 100;
    }
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    local_c = FUN_00403588(param_1,param_1 + 800);
    if (100 < local_c) {
      local_c = 100;
    }
    if (local_c < 0) {
      local_c = 0;
    }
    iVar4 = thunk_FUN_00468a98(aCStackY_10014,0);
    if (iVar4 == 0) {
      FUN_0046a5c8(auStackY_107fc,PTR_s_A_file_named_s_already_exists_A_004742f0);
      iVar4 = (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
      if (iVar4 != 6) {
        return iVar4;
      }
    }
    FUN_0040339c((int)param_1);
    param_1[7] = 2;
    FUN_00438410(*(int *)((int)param_1 + 0x702),(uint *)"&Abandon");
    piVar5 = fopen(local_8014,&DAT_00474513);
    param_1[0x34d] = (int)piVar5;
    if (param_1[0x34d] == 0) {
      (**(code **)(param_1[3] + 0x4c))();
    }
    if (param_1[0x34d] != 0) {
      uStackY_182c = 0x4026de;
      FUN_00406f08(param_1 + 6,0x48b33c,aCStackY_10014,auStackY_103fc,iVar2,iVar3,local_c,
                   (uint)(iVar1 == 1));
    }
    (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
    if ((int *)param_1[0x34d] != (int *)0x0) {
      FUN_00469508((int *)param_1[0x34d]);
      param_1[0x34d] = 0;
    }
    FUN_0040339c((int)param_1);
    FUN_004029e8((int)param_1);
    iVar2 = FUN_00438410(*(int *)((int)param_1 + 0x702),(uint *)"&Start");
  }
  else if (param_1[7] == 2) {
    param_1[7] = 3;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00402768  DMDialog::Cmd106   (344 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(106)
void __cdecl DMDialog::Cmd106(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x474a30);
  std::string::string_from_cstr((int)local_24,(uint *)"tsbuild.chm");
  FUN_0041901c((int)local_14,(int)local_24);
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar2 = (int *)(local_1c + -0xc);
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
      if (iVar1 != 0) goto LAB_00402823;
    }
    operator_delete();
    local_1c = 0;
  }
LAB_00402823:
  FUN_00419b20(*(HWND *)(*param_1 + 0xc));
  if (local_c != 0) {
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
      if (iVar1 != 0) goto LAB_004028af;
    }
    operator_delete();
  }
LAB_004028af:
  *in_FS_OFFSET = local_48;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004028c0  DMDialog::Cmd114   (121 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(114)
void __cdecl DMDialog::Cmd114(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_d8;
  int local_b4 [44];
  
  __InitExceptBlockLDTC(0x474a78);
  piVar1 = FUN_0043f628(local_b4,0,*param_1,(uint *)0xc8,0);
  (**(code **)(piVar1[3] + 0x14))();
  OWL::TDialog::_dtor(local_b4,2);
  *in_FS_OFFSET = local_d8;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004029ac  FUN_004029ac   (60 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004029ac(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = GetWindowTextLengthA(*(HWND *)(*param_2 + 0xc));
  if (iVar1 < 1) {
    *(undefined4 *)(param_3 + 0x18) = (*(undefined4 *)&DAT_0048b444);
  }
  else {
    GetWindowTextA(*(HWND *)(*param_2 + 0xc),*(LPSTR *)(param_3 + 8),0x104);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004029e8  FUN_004029e8   (86 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004029e8(int param_1)

{
  int iVar1;
  
  iVar1 = GetWindowTextLengthA(*(HWND *)(*(int *)(param_1 + 0xd6) + 0xc));
  if ((*(int *)(param_1 + 0x20) != 0) && (0 < iVar1)) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x702) + 8) + 0x60))();
    *(undefined4 *)(param_1 + 0x1c) = 1;
    return;
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x702) + 8) + 0x60))();
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00402a40  DMDialog::Cmd112   (828 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(112)
void __cdecl DMDialog::Cmd112(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  char cVar3;
  undefined *puVar4;
  int local_1e4;
  undefined4 local_1e0;
  undefined2 local_1d0;
  int local_1c4;
  undefined1 local_1bc [8];
  int local_1b4;
  int local_1ac [28];
  int local_13c;
  int local_138;
  undefined4 local_bc [2];
  undefined4 local_b4 [34];
  uint local_2c [2];
  LPCSTR local_24;
  
  __InitExceptBlockLDTC(0x474af8);
  local_1d0 = 8;
  FUN_00450b7c(local_2c,0x180c,(uint *)"Alphabet mapping files (*.tsm)|*.tsm|All Files (*.*)|*.*",0,0,0x474571,0,0,
               0);
  local_1c4 = local_1c4 + 1;
  local_1d0 = 0x14;
  FUN_004029ac(param_1,param_1 + 9,(int)local_2c);
  local_1d0 = 0x20;
  piVar1 = FUN_0045103c(&local_13c,0,*param_1,(int)local_2c,0,0x474575,0);
  local_1c4 = local_1c4 + 6;
  iVar2 = (**(code **)(piVar1[3] + 0x14))();
  cVar3 = iVar2 == 1;
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x5c;
  *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + -0x5c;
  local_1c4 = local_1c4 + -6;
  OWL::TCommonDialog::_dtor(&local_13c,0);
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x5c;
  *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + 0x5c;
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x96;
  local_1c4 = local_1c4 + -2;
  OWL::TWindow::_dtor(local_b4,0);
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x96;
  local_1c4 = local_1c4 + -1;
  OWL::TStreamableBase::_dtor(local_bc,0);
  if (cVar3 == '\0') goto LAB_00402d5b;
  iVar2 = FUN_00419664(local_24,&DAT_0048b33c,0x100,&local_1e4);
  param_1[8] = iVar2;
  if (iVar2 == 0) {
    if (local_1e4 < 1) {
      (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
    }
    else {
      local_1d0 = 0x2c;
      FUN_0045c504(local_1ac,0,8);
      local_1c4 = local_1c4 + 8;
      local_1d0 = 0x38;
      puVar4 = &LAB_00402f00;
      piVar1 = FUN_0045fc44(local_1ac,(uint *)PTR_s_Alphabet_mapping_file_error_at_l_00474300);
      piVar1 = FUN_0045f818(piVar1);
      FUN_0045f9d8(piVar1,puVar4);
      local_1d0 = 0x44;
      FUN_0045fefc((int)local_1bc,(int)local_1ac);
      local_1c4 = local_1c4 + 1;
      local_1d0 = 0x38;
      (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
      local_1c4 = local_1c4 + -1;
      if (local_1b4 != 0) {
        if (*(int *)(local_1b4 + -0xc) != -1) {
          piVar1 = (int *)(local_1b4 + -0xc);
          if (piVar1 == &DAT_00485bcc) {
            iVar2 = 1;
          }
          else if (piVar1 == &DAT_00485bcc) {
            iVar2 = 1;
          }
          else {
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1 + 1;
          }
          if (iVar2 != 0) goto LAB_00402d03;
        }
        operator_delete();
        local_1b4 = 0;
      }
LAB_00402d03:
      local_1c4 = local_1c4 + -8;
      std::basic_ostringstream_char::_dtor(local_1ac,2);
      local_1d0 = 0x14;
    }
    SetWindowTextA(*(HWND *)(param_1[9] + 0xc),"&Start" + 6);
  }
  else {
    SetWindowTextA(*(HWND *)(param_1[9] + 0xc),local_24);
  }
  FUN_004029e8((int)param_1);
LAB_00402d5b:
  local_1c4 = local_1c4 + -1;
  OWL::TOpenSaveDialog::TData::_dtor((int)local_2c,2);
  *in_FS_OFFSET = local_1e0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00402f18  DMDialog::Cmd104   (660 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(104)
void __cdecl DMDialog::Cmd104(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *in_FS_OFFSET;
  char cVar6;
  undefined4 local_170;
  undefined1 local_14c [8];
  int local_144;
  int local_13c;
  int local_138;
  undefined4 local_bc [2];
  undefined4 local_b4 [34];
  uint local_2c [2];
  uint *local_24;
  
  __InitExceptBlockLDTC(0x474ba4);
  FUN_00450b7c(local_2c,0x180c,(uint *)"Word list files (*.txt)|*.txt|All Files (*.*)|*.*",0,0,0x4745c7,0,0,
               0);
  FUN_004029ac(param_1,(int *)((int)param_1 + 0xd6),(int)local_2c);
  piVar2 = FUN_0045103c(&local_13c,0,*param_1,(int)local_2c,0,0x4745cb,0);
  iVar3 = (**(code **)(piVar2[3] + 0x14))();
  cVar6 = iVar3 == 1;
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x5c;
  *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + -0x5c;
  OWL::TCommonDialog::_dtor(&local_13c,0);
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x5c;
  *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + 0x5c;
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x96;
  OWL::TWindow::_dtor(local_b4,0);
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x96;
  OWL::TStreamableBase::_dtor(local_bc,0);
  if (cVar6 != '\0') {
    uVar4 = FUN_0041946c((LPCSTR)local_24);
    if ((char)uVar4 == '\0') {
      std::string::string_from_cstr((int)local_14c,local_24);
      uVar1 = *(uint *)(local_144 + -4);
      pcVar5 = strlen((uint *)" doesn't seem to be an ANSI text file");
      FUN_0045a224((int)local_14c,uVar1,0,0x4745e4,(uint)pcVar5,0,(uint)pcVar5);
      (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
      if (local_144 != 0) {
        if (*(int *)(local_144 + -0xc) != -1) {
          piVar2 = (int *)(local_144 + -0xc);
          if (piVar2 == &DAT_00485bcc) {
            iVar3 = 1;
          }
          else if (piVar2 == &DAT_00485bcc) {
            iVar3 = 1;
          }
          else {
            *piVar2 = *piVar2 + -1;
            iVar3 = *piVar2 + 1;
          }
          if (iVar3 != 0) goto LAB_0040318c;
        }
        operator_delete();
        local_144 = 0;
      }
    }
    else {
      FUN_004035b8((int)param_1,local_24);
    }
  }
LAB_0040318c:
  OWL::TOpenSaveDialog::TData::_dtor((int)local_2c,2);
  *in_FS_OFFSET = local_170;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004031ac  DMDialog::Cmd120   (361 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(120)
void __cdecl DMDialog::Cmd120(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  char cVar3;
  undefined4 local_160;
  int local_13c;
  int local_138;
  undefined4 local_bc [2];
  undefined4 local_b4 [34];
  uint local_2c [2];
  LPCSTR local_24;
  
  __InitExceptBlockLDTC(0x474c24);
  FUN_00450b7c(local_2c,0x80c,(uint *)"TEA&Sympathy Dictionary files (*.tsd)|*.tsd|All Files (*.*)|*.*",0,0,0x474359,0,0,0
              );
  FUN_004029ac(param_1,param_1 + 0x62,(int)local_2c);
  piVar1 = FUN_004511f4(&local_13c,0,*param_1,(int)local_2c,0,0x474657,0);
  iVar2 = (**(code **)(piVar1[3] + 0x14))();
  cVar3 = iVar2 == 1;
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x5c;
  *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + -0x5c;
  OWL::TCommonDialog::_dtor(&local_13c,0);
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x5c;
  *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + 0x5c;
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x96;
  OWL::TWindow::_dtor(local_b4,0);
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x96;
  OWL::TStreamableBase::_dtor(local_bc,0);
  if (cVar3 != '\0') {
    SetWindowTextA(*(HWND *)(param_1[0x62] + 0xc),local_24);
  }
  OWL::TOpenSaveDialog::TData::_dtor((int)local_2c,2);
  *in_FS_OFFSET = local_160;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040339c  FUN_0040339c   (185 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040339c(int param_1)

{
  (**(code **)(*(int *)(*(int *)(param_1 + 0x4fe) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x5aa) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x656) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x188) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x23a) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x85a) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x906) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x9b8) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0xb1c) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0xbce) + 8) + 0x60))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403458  DMDialog::Cmd108   (30 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(108)
void __cdecl DMDialog::Cmd108(int param_1)

{
  FUN_00403518(param_1,(int *)(param_1 + 0xb1c));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403478  DMDialog::Child108_Notify1   (30 bytes)   [owl:response-table message-handler]
//   EV_CHILD_NOTIFY(id 108, code 1)
void __cdecl DMDialog::Child108_Notify1(int param_1)

{
  FUN_00403518(param_1,(int *)(param_1 + 0xb1c));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403498  DMDialog::Cmd110   (30 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(110)
void __cdecl DMDialog::Cmd110(int param_1)

{
  FUN_00403518(param_1,(int *)(param_1 + 0xbce));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004034b8  DMDialog::Child110_Notify1   (30 bytes)   [owl:response-table message-handler]
//   EV_CHILD_NOTIFY(id 110, code 1)
void __cdecl DMDialog::Child110_Notify1(int param_1)

{
  FUN_00403518(param_1,(int *)(param_1 + 0xbce));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004034d8  DMDialog::Cmd119   (30 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(119)
void __cdecl DMDialog::Cmd119(int param_1)

{
  FUN_00403518(param_1,(int *)(param_1 + 0xc80));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004034f8  DMDialog::Child119_Notify1   (30 bytes)   [owl:response-table message-handler]
//   EV_CHILD_NOTIFY(id 119, code 1)
void __cdecl DMDialog::Child119_Notify1(int param_1)

{
  FUN_00403518(param_1,(int *)(param_1 + 0xc80));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403518  FUN_00403518   (58 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00403518(undefined4 param_1,int *param_2)

{
  FUN_00403588(param_1,param_2);
  FUN_00403554(param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403554  FUN_00403554   (49 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00403554(undefined4 param_1,int *param_2)

{
  CHAR local_24 [32];
  
  FUN_0046a5c8(local_24,&DAT_00474671);
  SetWindowTextA(*(HWND *)(*param_2 + 0xc),local_24);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403588  FUN_00403588   (45 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00403588(undefined4 param_1,int *param_2)

{
  int iVar1;
  CHAR local_24 [32];
  
  iVar1 = GetWindowTextA(*(HWND *)(*param_2 + 0xc),local_24,0x1f);
  local_24[iVar1] = '\0';
  iVar1 = FUN_0046db78(local_24);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004035b8  FUN_004035b8   (445 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004035b8(int param_1,uint *param_2)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  uint uVar5;
  undefined4 local_48;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  LPCSTR local_c;
  
  __InitExceptBlockLDTC(0x474c7c);
  SetWindowTextA(*(HWND *)(*(int *)(param_1 + 0xd6) + 0xc),(LPCSTR)param_2);
  pcVar1 = strlen(param_2);
  puVar2 = thunk_strrchr(param_2,'.');
  if (puVar2 != (uint *)0x0) {
    pcVar1 = (char *)((int)puVar2 - (int)param_2);
  }
  uVar5 = 0;
  std::string::string_from_cstr((int)local_24,param_2);
  FUN_0045c818((int)local_14,(int)local_24,uVar5,(uint)pcVar1);
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar4 = (int *)(local_1c + -0xc);
      if (piVar4 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_004036ab;
    }
    operator_delete();
    local_1c = 0;
  }
LAB_004036ab:
  uVar5 = *(uint *)(local_c + -4);
  pcVar1 = strlen((uint *)&DAT_00474358 /* ".tsd" */);
  FUN_0045a224((int)local_14,uVar5,0,0x474358,(uint)pcVar1,0,(uint)pcVar1);
  SetWindowTextA(*(HWND *)(*(int *)(param_1 + 0x188) + 0xc),local_c);
  FUN_004029e8(param_1);
  if (local_c != (LPCSTR)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar4 = (int *)(local_c + -0xc);
      if (piVar4 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_00403764;
    }
    operator_delete();
  }
LAB_00403764:
  *in_FS_OFFSET = local_48;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404164  DMDialog::~DMDialog   (1010 bytes)   [rtti:dtor destructor]
//   written in code as DMDialog::_dtor
void __cdecl DMDialog::_dtor(int *param_1,byte param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x474f88);
  if (param_1 != (int *)0x0) {
    TSBuildProfile::_dtor((int)(param_1 + 0x34e),2);
    OWL::TEdit::_dtor(param_1 + 800,2);
    OWL::TEdit::_dtor((int *)((int)param_1 + 0xbce),2);
    OWL::TEdit::_dtor(param_1 + 0x2c7,2);
    piVar2 = (int *)((int)param_1 + 0xa6a);
    piVar1 = (int *)(*(int *)((int)param_1 + 0xa6e) + -4);
    *piVar1 = *piVar1 + -8;
    *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + -8;
    OWL::TControl::_dtor(piVar2,0);
    piVar1 = (int *)(*(int *)((int)param_1 + 0xa6e) + -4);
    *piVar1 = *piVar1 + 8;
    *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + 8;
    piVar1 = (int *)(*(int *)((int)param_1 + 0xa6e) + -4);
    *piVar1 = *piVar1 + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0xa96),0);
    piVar1 = (int *)(*(int *)((int)param_1 + 0xa6e) + -4);
    *piVar1 = *piVar1 + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0xa8e),0);
    piVar1 = param_1 + 0x26e;
    *(int *)(param_1[0x26f] + -4) = *(int *)(param_1[0x26f] + -4) + -8;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + -8;
    OWL::TControl::_dtor(piVar1,0);
    *(int *)(param_1[0x26f] + -4) = *(int *)(param_1[0x26f] + -4) + 8;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + 8;
    *(int *)(param_1[0x26f] + -4) = *(int *)(param_1[0x26f] + -4) + 0x96;
    OWL::TWindow::_dtor(param_1 + 0x279,0);
    *(int *)(param_1[0x26f] + -4) = *(int *)(param_1[0x26f] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(param_1 + 0x277,0);
    piVar2 = (int *)((int)param_1 + 0x906);
    piVar1 = (int *)(*(int *)((int)param_1 + 0x90a) + -4);
    *piVar1 = *piVar1 + -8;
    *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + -8;
    OWL::TControl::_dtor(piVar2,0);
    piVar1 = (int *)(*(int *)((int)param_1 + 0x90a) + -4);
    *piVar1 = *piVar1 + 8;
    *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + 8;
    piVar1 = (int *)(*(int *)((int)param_1 + 0x90a) + -4);
    *piVar1 = *piVar1 + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x932),0);
    piVar1 = (int *)(*(int *)((int)param_1 + 0x90a) + -4);
    *piVar1 = *piVar1 + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x92a),0);
    OWL::TButton::_dtor((int *)((int)param_1 + 0x85a),2);
    OWL::TButton::_dtor((int *)((int)param_1 + 0x7ae),2);
    OWL::TButton::_dtor((int *)((int)param_1 + 0x702),2);
    OWL::TButton::_dtor((int *)((int)param_1 + 0x656),2);
    OWL::TButton::_dtor((int *)((int)param_1 + 0x5aa),2);
    OWL::TButton::_dtor((int *)((int)param_1 + 0x4fe),2);
    piVar1 = param_1 + 0x114;
    *(int *)(param_1[0x115] + -4) = *(int *)(param_1[0x115] + -4) + -4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + -4;
    OWL::TControl::_dtor(piVar1,0);
    *(int *)(param_1[0x115] + -4) = *(int *)(param_1[0x115] + -4) + 4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + 4;
    *(int *)(param_1[0x115] + -4) = *(int *)(param_1[0x115] + -4) + 0x96;
    OWL::TWindow::_dtor(param_1 + 0x11e,0);
    *(int *)(param_1[0x115] + -4) = *(int *)(param_1[0x115] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(param_1 + 0x11c,0);
    TSDictionaryBuilderProgressBar::_dtor(param_1 + 0xe7,2);
    OWL::TCheckBox::_dtor(param_1 + 0xbb,2);
    OWL::TEdit::_dtor((int *)((int)param_1 + 0x23a),2);
    OWL::TEdit::_dtor(param_1 + 0x62,2);
    OWL::TEdit::_dtor((int *)((int)param_1 + 0xd6),2);
    OWL::TEdit::_dtor(param_1 + 9,2);
    DictionaryMaintainer::_dtor(param_1 + 6,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xd70;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xd70;
    OWL::TDialog::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xd70;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xd70;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x366,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x364,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404558  OWL::TWindow::vf1   (11 bytes)   [rtti:vtable virtual slot 1]
//   file placement: inferred (address adjacency)
undefined4 __cdecl OWL::TWindow::vf1(int param_1)

{
  return *(undefined4 *)(param_1 + 100);
}

// ----------------------------------------------------------------------------------------------------
// 0x00404564  OWL::TWindow::vf24   (33 bytes)   [rtti:vtable virtual slot 24]
//   file placement: inferred (address adjacency)
bool __cdecl OWL::TWindow::vf24(int param_1,byte param_2)

{
  BOOL BVar1;
  
  BVar1 = EnableWindow(*(HWND *)(param_1 + 0xc),(uint)param_2);
  return BVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404588  OWL::TWindow::vf26   (25 bytes)   [rtti:vtable virtual slot 26]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TWindow::vf26(int param_1,byte param_2)

{
  InvalidateRect(*(HWND *)(param_1 + 0xc),(RECT *)0x0,(uint)param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004045a4  OWL::TWindow::vf27   (27 bytes)   [rtti:vtable virtual slot 27]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TWindow::vf27(int param_1,RECT *param_2,byte param_3)

{
  InvalidateRect(*(HWND *)(param_1 + 0xc),param_2,(uint)param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040473c  std::string::~basic_string   (143 bytes)   [rtti:dtor destructor]
//   written in code as std::string::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::string::_dtor(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 8) + -0xc);
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
      if (iVar1 != 0) goto LAB_004047b7;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_004047b7:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404c4c  OWL::TOpenSaveDialog::~TOpenSaveDialog   (168 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TOpenSaveDialog::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TOpenSaveDialog::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x474f90);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x5c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x5c;
    OWL::TCommonDialog::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x5c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x5c;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x22,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x20,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404e4c  OWL::TScrollBar::~TScrollBar   (162 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TScrollBar::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TScrollBar::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x474f98);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -8;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -8;
    OWL::TControl::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 8;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 8;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0xb,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 9,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404f60  OWL::TStatic::~TStatic   (162 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TStatic::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TStatic::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x474fa0);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
    OWL::TControl::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 10,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 8,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405004  std::locale::~locale   (110 bytes)   [rtti:dtor destructor]
//   written in code as std::locale::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::locale::_dtor(int *param_1,byte param_2)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x474fb8);
  if (param_1 != (int *)0x0) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[1] = puVar1[1] + -1;
    if ((puVar1[1] == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405118  FUN_00405118   (40 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00405118(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00469c98(&GHIDRA_STACK(0x00000008),2,1,param_1);
  if (uVar1 != 1) {
    (*(undefined4 *)&DAT_00474fd8) = 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405140  FUN_00405140   (24 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00405140(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405158  FUN_00405158   (140 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00405158(undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (0xf < (int)param_1[2]) {
    FUN_00405118((int *)*param_1);
    param_1[2] = 0;
    *(undefined2 *)(param_1 + 1) = 0;
  }
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) | (short)param_3 << ((byte)param_1[2] & 0x1f);
  iVar1 = 0x10 - param_1[2];
  if (iVar1 < param_2) {
    iVar2 = param_2 - iVar1;
    uVar3 = param_3 >> ((byte)iVar1 & 0x1f);
    FUN_00405118((int *)*param_1);
    *(short *)(param_1 + 1) = (short)uVar3;
    if (0x10 < iVar2) {
      FUN_00405118((int *)*param_1);
      iVar2 = iVar2 + -0x10;
      *(short *)(param_1 + 1) = (short)(uVar3 >> 0x10);
    }
    param_1[2] = iVar2;
  }
  else {
    param_1[2] = param_1[2] + param_2;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004051e4  FUN_004051e4   (65 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004051e4(undefined4 *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  
  pbVar1 = param_2 + param_3;
  for (; param_2 < pbVar1; param_2 = param_2 + 1) {
    FUN_00405158(param_1,(uint)(byte)(&DAT_0048b850)[*param_2],(&DAT_0048b450)[*param_2]);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405228  FUN_00405228   (32 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00405228(undefined4 *param_1)

{
  FUN_00405158(param_1,(uint)DAT_0048b850,DAT_0048b450);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405248  FUN_00405248   (30 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00405248(undefined4 *param_1)

{
  if (0 < (int)param_1[2]) {
    FUN_00405118((int *)*param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405268  FUN_00405268   (137 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_00405268(uint param_1,uint param_2,uint param_3)

{
  double dVar1;
  undefined4 in_EAX;
  undefined4 uVar2;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),0x80);
  if (param_1 != 0) {
    dVar1 = ((double)param_3 * (double)param_1) / (double)param_2;
    FUN_0046e008(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
    uVar2 = FUN_0046ddac();
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405308  FUN_00405308   (94 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_00405308(void)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int local_18;
  byte *local_14;
  
  puVar3 = &DAT_0048b450;
  local_18 = 0;
  local_14 = &DAT_0048b850;
  do {
    uVar2 = 0;
    for (iVar1 = 0; iVar1 < (int)(uint)*local_14; iVar1 = iVar1 + 1) {
      uVar2 = uVar2 * 2;
      if ((1 << ((byte)iVar1 & 0x1f) & *puVar3) != 0) {
        uVar2 = uVar2 | 1;
      }
    }
    *puVar3 = uVar2;
    local_18 = local_18 + 1;
    local_14 = local_14 + 1;
    puVar3 = puVar3 + 1;
  } while (local_18 < 0x100);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405368  FUN_00405368   (47 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00405368(int *param_1,int *param_2)

{
  if (*(uint *)(*param_1 + 0xc) < *(uint *)(*param_2 + 0xc)) {
    return 1;
  }
  if (*(uint *)(*param_2 + 0xc) < *(uint *)(*param_1 + 0xc)) {
    return 0xffffffff;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405398  FUN_00405398   (58 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00405398(int *param_1,int param_2)

{
  if (*param_1 == 0) {
    param_1[5] = param_1[5] | param_2 << ((byte)param_1[4] & 0x1f);
    param_1[4] = param_1[4] + 1;
  }
  else {
    FUN_00405398((int *)*param_1,param_2);
    FUN_00405398((int *)param_1[1],param_2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004053d4  FUN_004053d4   (64 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004053d4(int *param_1)

{
  int iVar1;
  
  if ((int *)*param_1 == (int *)0x0) {
    iVar1 = param_1[2];
    (&DAT_0048b450)[iVar1] = param_1[5];
    (&DAT_0048b850)[iVar1] = (char)param_1[4];
  }
  else {
    FUN_004053d4((int *)*param_1);
    FUN_004053d4((int *)param_1[1]);
  }
  operator_delete();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405414  FUN_00405414   (340 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int __stdcall FUN_00405414(void)

{
  int *piVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int **ppiVar7;
  int local_418;
  int *local_414 [257];
  
  iVar6 = 0;
  uVar4 = 0;
  local_418 = 1;
  local_414[0] = &DAT_0048b950;
  ppiVar7 = local_414 + 1;
  do {
    if (*local_414[0] != 0) {
      piVar1 = (int *)operator_new();
      *ppiVar7 = piVar1;
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = uVar4 & 0xff;
      iVar6 = iVar6 + 1;
      piVar1[3] = *local_414[0];
      piVar1[4] = 0;
      piVar1[5] = 0;
      ppiVar7 = ppiVar7 + 1;
    }
    uVar4 = uVar4 + 1;
    local_414[0] = local_414[0] + 1;
  } while ((int)uVar4 < 0x100);
  if (iVar6 == 0) {
    local_418 = -1;
  }
  else {
    _DAT_0048b44c = iVar6;
    for (iVar5 = 0; iVar5 < iVar6 + -1; iVar5 = iVar5 + 1) {
      uVar4 = iVar6 - iVar5;
      FUN_0047035c((undefined1 *)(local_414 + 1),uVar4,4,FUN_00405368);
      FUN_00405398((int *)(&local_418)[uVar4],0);
      FUN_00405398(local_414[uVar4],1);
      piVar1 = (int *)operator_new();
      piVar1[3] = *(int *)((&local_418)[uVar4] + 0xc) + local_414[uVar4][3];
      piVar1[2] = 0;
      piVar1[4] = 0;
      piVar1[5] = 0;
      piVar1[1] = (int)local_414[uVar4];
      *piVar1 = (&local_418)[uVar4];
      (&local_418)[uVar4] = (int)piVar1;
      local_414[uVar4] = (int *)0x0;
    }
    FUN_004053d4(local_414[1]);
    iVar6 = 0;
    pbVar2 = &DAT_0048b850;
    do {
      if (0x20 < *pbVar2) break;
      iVar6 = iVar6 + 1;
      pbVar2 = pbVar2 + 1;
    } while (iVar6 < 0x100);
    if (iVar6 < 0x100) {
      iVar6 = 0;
      local_418 = 0;
      piVar1 = &DAT_0048b450;
      puVar3 = &DAT_0048b850;
      do {
        *puVar3 = 8;
        *piVar1 = iVar6;
        iVar6 = iVar6 + 1;
        piVar1 = piVar1 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar6 < 0x100);
    }
  }
  return local_418;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405568  FUN_00405568   (1400 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00405624) */
int __cdecl FUN_00405568(int param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 *in_FS_OFFSET;
  byte bVar10;
  char local_114;
  char local_113 [19];
  undefined *local_100;
  undefined4 *local_f0;
  undefined4 *local_ec;
  undefined4 *local_e8;
  undefined4 *local_e4;
  uint local_e0;
  int local_dc;
  int *local_d8;
  int *local_d4;
  int local_d0;
  undefined4 *local_cc;
  undefined4 local_c8;
  undefined1 local_c2;
  undefined1 local_c1;
  uint *local_c0;
  uint *local_bc;
  char *local_b8;
  char local_b4 [76];
  uint *local_68;
  uint *local_64;
  char *local_60;
  uint local_5c;
  uint *local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  bVar10 = 0;
  __InitExceptBlockLDTC(0x475080);
  local_40 = DAT_00474fdc;
  local_3c = DAT_00474fe0;
  local_3a = DAT_00474fe2;
  uVar2 = FUN_0046786c((byte *)param_2,(byte *)&local_40,6);
  if (uVar2 != 0) {
    pcVar3 = strlen(param_2);
    if ((pcVar3 != (char *)0x0) && (pcVar3[(int)param_2 + -1] == '\n')) {
      pcVar3 = pcVar3 + -1;
    }
    local_28 = 8;
    FUN_0045c644(param_1,param_2,(uint)pcVar3);
    *in_FS_OFFSET = local_38;
    return param_1;
  }
  local_c = (undefined4 *)&DAT_00485bd8;
  local_100 = &DAT_00485bd8;
  local_1c = local_1c + 1;
  local_28 = 0x2c;
  local_4c = 2;
  iVar7 = 0;
  local_50 = 0;
  local_54 = 0;
  while ((cVar1 = (char)*param_2, cVar1 != '\n' && (cVar1 != '\0'))) {
    puVar5 = param_2;
    if (iVar7 == 2) {
      local_54 = local_54 + -1;
    }
    else if (cVar1 == '\\') {
      puVar5 = (uint *)((int)param_2 + 1);
      cVar1 = *(char *)puVar5;
      if (cVar1 < ']') {
        if (cVar1 == '\\') {
LAB_004056bf:
          local_5c = local_c[-1];
          local_58 = puVar5;
          local_60 = strlen(puVar5);
          FUN_0045a224((int)local_14,local_5c,0,(uint)local_58,(uint)local_60,0,(uint)local_60);
        }
        else if (cVar1 == '\'') {
          iVar7 = 1;
        }
        else if (cVar1 != '*') {
          if (cVar1 != '-') goto LAB_0040571b;
          goto LAB_004056fd;
        }
      }
      else if (cVar1 == '_') {
LAB_004056fd:
        std::string::replace_fill((int)local_14,local_c[-1],0,1,0x2d);
      }
      else {
        if ((cVar1 == '{') || (cVar1 == '}')) goto LAB_004056bf;
LAB_0040571b:
        iVar4 = FUN_0046b4e4((int)*(char *)puVar5);
        if (iVar4 == 0) {
          puVar5 = (uint *)((int)param_2 + 2);
        }
        else {
          local_28 = 0x2c;
          local_64 = puVar5;
          do {
            puVar6 = puVar5;
            puVar5 = (uint *)((int)puVar6 + 1);
            iVar4 = FUN_0046b4e4((int)*(char *)puVar5);
          } while (iVar4 != 0);
          if (*(char *)puVar5 == '-') {
            puVar5 = (uint *)((int)puVar6 + 2);
          }
          local_28 = 0x2c;
          local_68 = puVar5;
          while (iVar4 = FUN_0046b510((int)(char)*puVar5), iVar4 != 0) {
            puVar5 = (uint *)((int)puVar5 + 1);
          }
          if ((int)puVar5 - (int)local_64 < 10) {
            local_114 = '|';
            FUN_004679ec((undefined4 *)local_113,local_64,(char *)((int)puVar5 - (int)local_64));
            *(char *)((int)puVar5 + ((int)local_113 - (int)local_64)) = '|';
            *(char *)((int)puVar5 + (int)(local_113 + (1 - (int)local_64))) = '\0';
            pcVar3 = "|bin|par|line|tab|emdash|endash|bullet|lquote|rquote|ldblquote|rdblquote|";
            pcVar8 = local_b4;
            for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
              *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
              pcVar3 = pcVar3 + ((uint)bVar10 * -2 + 1) * 4;
              pcVar8 = pcVar8 + ((uint)bVar10 * -2 + 1) * 4;
            }
            *(undefined2 *)pcVar8 = *(undefined2 *)pcVar3;
            local_28 = 0x2c;
            local_b8 = thunk_FUN_00467ac4(local_b4,&local_114);
            if ((local_b8 != (char *)0x0) &&
               (std::string::replace_fill((int)local_14,local_c[-1],0,1,0x20), local_b4 == local_b8)) {
              local_bc = local_68;
              local_54 = FUN_0046db78((char *)local_68);
            }
          }
          if ((char)*puVar5 != ' ') {
            puVar5 = (uint *)((int)puVar5 + -1);
          }
        }
      }
    }
    else if ((cVar1 != '{') && (cVar1 != '}')) {
      if (iVar7 == 0) {
        uVar2 = FUN_00467944((char *)param_2,&DAT_0047520e /* "\{}" */);
        local_28 = 0x2c;
        local_c0 = param_2;
        FUN_0045a224((int)local_14,local_c[-1],0,(uint)param_2,uVar2,0,uVar2);
        puVar5 = (uint *)((int)param_2 + (uVar2 - 1));
      }
      else {
        local_50 = local_50 * 0x10;
        iVar4 = (int)(char)*param_2;
        if ((iVar4 < 0x30) || (0x39 < iVar4)) {
          iVar4 = (int)(char)*param_2;
          if ((iVar4 < 0x61) || (0x66 < iVar4)) {
            iVar4 = (int)(char)*param_2;
            if ((0x40 < iVar4) && (iVar4 < 0x47)) {
              local_50 = local_50 + iVar4 + -0x37;
            }
          }
          else {
            local_50 = local_50 + iVar4 + -0x57;
          }
        }
        else {
          local_50 = local_50 + iVar4 + -0x30;
        }
        local_4c = local_4c + -1;
        if (local_4c == 0) {
          local_c1 = (undefined1)local_50;
          local_28 = 0x2c;
          local_c2 = (undefined1)local_50;
          std::string::replace_fill((int)local_14,local_c[-1],0,1,(undefined1)local_50);
          local_4c = 2;
          iVar7 = 0;
          local_50 = 0;
        }
      }
    }
    param_2 = (uint *)((int)puVar5 + 1);
  }
  local_28 = 0x38;
  local_c8 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar2 = local_c[-1];
    local_d8 = std::string::__getRep(param_1,uVar2,uVar2);
    local_d4 = local_d8 + 3;
    *(int **)(param_1 + 8) = local_d4;
    local_dc = param_1;
    local_e4 = local_c;
    local_e8 = *(undefined4 **)(param_1 + 8);
    local_e0 = uVar2;
    memcpy(local_e8,local_c,uVar2);
  }
  else {
    local_cc = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    local_d0 = param_1;
    piVar9 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar9 != &DAT_00485bcc) {
      *piVar9 = *piVar9 + 1;
    }
  }
  local_28 = 0x50;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar9 = local_c + -3;
      if (piVar9 == &DAT_00485bcc) {
        iVar7 = 1;
      }
      else if (piVar9 == &DAT_00485bcc) {
        iVar7 = 1;
      }
      else {
        *piVar9 = *piVar9 + -1;
        iVar7 = *piVar9 + 1;
      }
      if (iVar7 != 0) goto LAB_00405ac5;
    }
    local_ec = local_c + -3;
    local_f0 = local_c + -3;
    operator_delete();
  }
LAB_00405ac5:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405ae0  FUN_00405ae0   (649 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00405b24) */
int __cdecl FUN_00405ae0(int param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x475138);
  local_c = (undefined4 *)&DAT_00485bd8;
  iVar2 = FUN_00467a94(param_2,&DAT_00475204);
  if (param_2[iVar2] != '\0') {
    pcVar4 = param_2 + iVar2;
    pcVar3 = thunk_FUN_00467a3c(pcVar4,&DAT_00475204);
    if (pcVar3 != (char *)0x0) {
      iVar2 = FUN_0045c644((int)local_24,(undefined4 *)pcVar4,(int)pcVar3 - (int)pcVar4);
      FUN_00459ad4((int)local_14,iVar2);
      if (local_1c != 0) {
        if (*(int *)(local_1c + -0xc) != -1) {
          piVar5 = (int *)(local_1c + -0xc);
          if (piVar5 == &DAT_00485bcc) {
            iVar2 = 1;
          }
          else if (piVar5 == &DAT_00485bcc) {
            iVar2 = 1;
          }
          else {
            *piVar5 = *piVar5 + -1;
            iVar2 = *piVar5 + 1;
          }
          if (iVar2 != 0) goto LAB_00405c05;
        }
        operator_delete();
        local_1c = 0;
      }
    }
  }
LAB_00405c05:
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    piVar5 = std::string::__getRep(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar5 + 3;
    memcpy(*(undefined4 **)(param_1 + 8),local_c,uVar1);
  }
  else {
    *(undefined4 **)(param_1 + 8) = local_c;
    piVar5 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar5 != &DAT_00485bcc) {
      *piVar5 = *piVar5 + 1;
    }
  }
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar5 = local_c + -3;
      if (piVar5 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar5 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar2 = *piVar5 + 1;
      }
      if (iVar2 != 0) goto LAB_00405d4e;
    }
    operator_delete();
  }
LAB_00405d4e:
  *in_FS_OFFSET = local_48;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405d6c  FUN_00405d6c   (476 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
uint __cdecl FUN_00405d6c(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  byte *local_c;
  
  __InitExceptBlockLDTC(0x4751cc);
  local_c = (byte *)0x0;
  iVar4 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    uVar3 = *(uint *)(*(int *)(param_2 + 8) + -4);
    piVar1 = std::string::__getRep(local_14,uVar3,uVar3);
    local_c = (byte *)(piVar1 + 3);
    memcpy((undefined4 *)local_c,*(undefined4 **)(param_2 + 8),uVar3);
  }
  else {
    local_c = *(byte **)(param_2 + 8);
    pbVar6 = local_c + -0xc;
    if (pbVar6 != (byte *)&DAT_00485bcc) {
      *(int *)pbVar6 = *(int *)pbVar6 + 1;
    }
  }
  if (1 < *(int *)(local_c + -0xc) + 1) {
    FUN_0045f64c((int)local_14);
  }
  pbVar5 = local_c + -0xc;
  pbVar6 = local_c;
  if (pbVar5 != (byte *)&DAT_00485bcc) {
    pbVar5[0] = 0xff;
    pbVar5[1] = 0xff;
    pbVar5[2] = 0xff;
    pbVar5[3] = 0xff;
  }
  while( true ) {
    if (1 < *(int *)(local_c + -0xc) + 1) {
      FUN_0045f64c((int)local_14);
    }
    pbVar5 = local_c + -0xc;
    if (pbVar5 != (byte *)&DAT_00485bcc) {
      pbVar5[0] = 0xff;
      pbVar5[1] = 0xff;
      pbVar5[2] = 0xff;
      pbVar5[3] = 0xff;
    }
    if (local_c + *(int *)(local_c + -4) <= pbVar6) break;
    *pbVar6 = *pbVar6 ^ 0xbd;
    pbVar6 = pbVar6 + 1;
  }
  std::string::replace_fill((int)local_14,*(uint *)(local_c + -4),0,1,0xbd);
  uVar3 = *(uint *)(local_c + -4);
  uVar2 = FUN_00469c98(local_c,1,uVar3,param_1);
  uVar3 = (uint)(uVar3 == uVar2);
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      pbVar6 = local_c + -0xc;
      if (pbVar6 == (byte *)&DAT_00485bcc) {
        iVar4 = 1;
      }
      else if (pbVar6 == (byte *)&DAT_00485bcc) {
        iVar4 = 1;
      }
      else {
        *(int *)pbVar6 = *(int *)pbVar6 + -1;
        iVar4 = *(int *)pbVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_00405f36;
    }
    operator_delete();
  }
LAB_00405f36:
  *in_FS_OFFSET = local_38;
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405f48  FUN_00405f48   (29 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
bool __cdecl FUN_00405f48(int param_1,int param_2)

{
  return *(int *)(*(int *)(param_1 + 8) + 0x20) < *(int *)(*(int *)(param_2 + 8) + 0x20);
}

// ----------------------------------------------------------------------------------------------------
// 0x00405f68  FUN_00405f68   (48 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00405f68(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4753f4);
  *param_1 = &DictionaryMaintainer::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea
