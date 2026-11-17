// TEA.exe — application module "Common"
// 7 functions, 0x00485ee0..0x004862b0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00485ee0  Common::~Common   (201 bytes)   [rtti:dtor destructor]
//   written in code as Common::_dtor
void __cdecl Common::_dtor(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x503a68);
  if (param_1 == 0) goto LAB_00485f99;
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00485f89;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_00485f89:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_00485f99:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00485fac  FUN_00485fac   (172 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00485fac(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  DWORD DVar2;
  uint local_804 [256];
  uint local_404 [256];
  
  if (*(int *)(*(int *)(param_1 + 8) + -4) == 0) {
    uVar1 = 0;
  }
  else {
    DVar2 = GetPrivateProfileStringA
                      ("License","LicenseOwner","License" + 7,
                       (LPSTR)local_404,0x3ff,*(LPCSTR *)(param_1 + 8));
    if ((DVar2 != 0) &&
       (DVar2 = GetPrivateProfileStringA
                          ("License","LicenseKey","License" + 7,
                           (LPSTR)local_804,0x3ff,*(LPCSTR *)(param_1 + 8)), DVar2 != 0)) {
      FUN_004cf41c(param_2,local_404);
      FUN_004cf41c(param_3,local_804);
      return 2;
    }
    uVar1 = 1;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00486058  FUN_00486058   (68 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00486058(int param_1,int param_2,int param_3)

{
  if (*(int *)(*(LPCSTR *)(param_1 + 8) + -4) != 0) {
    WritePrivateProfileStringA
              ("License","LicenseOwner",*(LPCSTR *)(param_2 + 8),
               *(LPCSTR *)(param_1 + 8));
    WritePrivateProfileStringA
              ("License","LicenseKey",*(LPCSTR *)(param_3 + 8),
               *(LPCSTR *)(param_1 + 8));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048609c  FUN_0048609c   (21 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0048609c(byte *param_1,char *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_004860b4(param_1,param_2);
  return CONCAT31(extraout_var,bVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004860b4  FUN_004860b4   (374 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
bool __cdecl FUN_004860b4(byte *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *pcVar6;
  int local_8;
  
  DAT_0051aeb4 = 0;
  _DAT_0051aeb0 = 0;
  for (pbVar4 = PTR_s_TEAWIN_00503a90; *pbVar4 != 0; pbVar4 = pbVar4 + 1) {
    FUN_0048622c(*pbVar4,&DAT_0051aeb0,&DAT_00503a88);
  }
  local_8 = 0;
  for (pbVar4 = param_1; *pbVar4 != 0; pbVar4 = pbVar4 + 1) {
  }
  while (param_1 < pbVar4) {
    pbVar4 = pbVar4 + -1;
    bVar3 = *pbVar4;
    uVar2 = (uint)bVar3;
    iVar1 = FUN_004e1394((uint)bVar3);
    if (iVar1 != 0) {
      uVar2 = FUN_004e3054((uint)bVar3);
    }
    iVar1 = FUN_004e1310(uVar2 & 0xff);
    if (iVar1 != 0) {
      local_8 = local_8 + 1;
      FUN_0048622c((byte)uVar2,&DAT_0051aeb0,&DAT_00503a88);
    }
  }
  pbVar4 = param_1;
  pcVar6 = param_2;
  if (0 < local_8) {
    do {
      do {
        while (pbVar5 = pbVar4, *pbVar5 != 0) {
          pbVar4 = pbVar5 + 1;
        }
        pbVar4 = param_1;
      } while (pbVar5 <= param_1);
      do {
        pbVar5 = pbVar5 + -1;
        bVar3 = *pbVar5;
        uVar2 = (uint)bVar3;
        iVar1 = FUN_004e1394((uint)bVar3);
        if (iVar1 != 0) {
          uVar2 = FUN_004e3054((uint)bVar3);
        }
        iVar1 = FUN_004e1310(uVar2 & 0xff);
        if (iVar1 != 0) {
          bVar3 = (byte)((char)uVar2 + -0x41 + (char)((ulonglong)DAT_0051aeb4 % 0x1a)) % 0x1a + 0x41
          ;
          if (((uint)bVar3 != (int)*pcVar6) &&
             (uVar2 = FUN_004e3000((uint)bVar3), uVar2 != (int)*pcVar6)) {
            return false;
          }
          pcVar6 = pcVar6 + 1;
          FUN_0048622c(bVar3,&DAT_0051aeb0,&DAT_00503a88);
          if (pcVar6 == param_2 + 10) {
            return *pcVar6 == '\0';
          }
        }
      } while (param_1 < pbVar5);
    } while( true );
  }
  return false;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048622c  FUN_0048622c   (129 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0048622c(byte param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int local_c;
  
  local_c = 0;
  do {
    bVar1 = *param_2;
    uVar5 = 0;
    iVar2 = 7;
    pbVar3 = param_2 + 7;
    do {
      uVar5 = (uint)*pbVar3 * 2 + (uint)(uVar5 != 0);
      iVar2 = iVar2 + -1;
      *pbVar3 = (byte)uVar5;
      pbVar3 = pbVar3 + -1;
      uVar5 = uVar5 & 0x100;
    } while (-1 < iVar2);
    if (((bVar1 ^ param_1) & 0x80) != 0) {
      iVar2 = 0;
      pbVar3 = param_3;
      pbVar4 = param_2;
      do {
        *pbVar4 = *pbVar4 ^ *pbVar3;
        iVar2 = iVar2 + 1;
        pbVar4 = pbVar4 + 1;
        pbVar3 = pbVar3 + 1;
      } while (iVar2 < 8);
    }
    param_1 = param_1 << 1;
    local_c = local_c + 1;
  } while (local_c < 8);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004862b0  FUN_004862b0   (435 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_004862b0(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x503b5c);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x78);
    param_1[0x78] = (int)(param_1 + 0x75);
    param_1[0x79] = (int)(param_1 + 0x76);
    param_1[1] = (int)(param_1 + 0x75);
    param_1[2] = (int)(param_1 + 0x76);
    param_1[0x74] = 0;
    param_1[0x77] = 0;
    param_1[0x75] = (int)&OWL::TEventHandler::vftable;
    param_1[0x76] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x78,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x170;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x170;
  FUN_00413cf4(param_1,1,0x503a9c,param_3,param_4,(uint *)0x19a,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x170;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x170;
  param_1[3] = (int)&LicenseViewWindows::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_00503c80;
  *(undefined ***)param_1[2] = &PTR_LAB_00503c8c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00503c98;
  param_1[0x18] = param_5;
  param_1[0x19] = param_6;
  FUN_004b6184(param_1 + 0x1a,0,*param_1,0x604,0x33,0);
  FUN_004b6184((int *)((int)param_1 + 0x11a),0,*param_1,0x60e,0xb,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea
