// rea decompile_all
// name: FUN_0047c9d0
// address: 0x47c9d0
// body: available
// range: 0x47c9d0-0x47ca28 inclusive
// range: 0x47cab9-0x47ce46 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0047c9d0(undefined4 *param_1,uint param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_8;
  
  if (param_3 < 0x2c) {
    if (param_3 < 0x24) {
      switch(param_3) {
      case 0:
        if ((param_4 == (int *)0x0) || (*param_4 != 0)) {
          iVar2 = 1;
        }
        else {
          iVar2 = 0;
        }
        FUN_0047fdac((int)param_1,0,iVar2);
        break;
      case 1:
        if ((param_4 == (int *)0x0) || (*param_4 != 0)) {
          iVar2 = 1;
        }
        else {
          iVar2 = 0;
        }
        FUN_0047fdac((int)param_1,3,iVar2);
        break;
      case 2:
        if ((param_4 == (int *)0x0) || (*param_4 != 0)) {
          iVar2 = 1;
        }
        else {
          iVar2 = 0;
        }
        FUN_0047fdac((int)param_1,1,iVar2);
        break;
      case 3:
        FUN_0047fdac((int)param_1,1,0);
        break;
      case 4:
        if ((param_4 == (int *)0x0) || (*param_4 != 0)) {
          iVar2 = 1;
        }
        else {
          iVar2 = 0;
        }
        FUN_0047fdac((int)param_1,2,iVar2);
        break;
      case 5:
        FUN_0047fdac((int)param_1,0,0);
        FUN_0047fdac((int)param_1,3,0);
        FUN_0047fdac((int)param_1,1,0);
        FUN_0047fdac((int)param_1,2,0);
        FUN_0047fdac((int)param_1,6,0x18);
        break;
      case 6:
        if (param_4 == (int *)0x0) {
          iVar2 = -0x80000000;
        }
        else {
          iVar2 = *param_4;
        }
        param_1[0x84] = iVar2;
        break;
      case 7:
        if (param_4 == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *param_4;
        }
        FUN_0047fdac((int)param_1,4,iVar2);
        break;
      case 8:
        if (param_4 == (int *)0x0) {
          iVar2 = 0x18;
        }
        else {
          iVar2 = *param_4;
        }
        FUN_0047fdac((int)param_1,6,iVar2);
        break;
      case 9:
        if (param_4 == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *param_4;
        }
        FUN_0047fdac((int)param_1,5,iVar2);
        break;
      case 10:
        param_1[1] = 2;
        break;
      case 0xb:
        param_1[1] = 1;
        break;
      case 0xc:
        *param_1 = 1;
        if (param_4 == (int *)0x0) {
          _DAT_00501710 = 0;
        }
        else {
          _DAT_00501710 = *param_4;
        }
        break;
      case 0xd:
      case 0xf:
        if (param_1[0x92] == 4) {
          FUN_0047f720((int)param_1,param_2,&DAT_00501ad1);
        }
        else if (param_1[0x92] == 3) {
          FUN_0047f720((int)param_1,param_2,&DAT_00501c94);
        }
        else if (param_1[0x92] == 2) {
          FUN_0047f720((int)param_1,param_2,&DAT_00501c9b);
        }
        else {
          FUN_0047f720((int)param_1,param_2,&DAT_00501c98);
        }
        break;
      case 0xe:
        FUN_0047fa24((int)param_1,param_2,1);
        break;
      case 0x10:
        FUN_004803f0((int)param_1,0,1);
        break;
      case 0x11:
        FUN_004803f0((int)param_1,0,3);
        break;
      case 0x12:
        FUN_004803f0((int)param_1,0,2);
        break;
      case 0x13:
        if (param_4 == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *param_4;
        }
        FUN_004803f0((int)param_1,1,iVar2);
        break;
      case 0x14:
        if (param_4 == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *param_4;
        }
        FUN_004803f0((int)param_1,2,iVar2);
        break;
      case 0x15:
        if (param_4 == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *param_4;
        }
        FUN_004803f0((int)param_1,3,iVar2);
        break;
      case 0x16:
        if ((param_4 != (int *)0x0) && (*param_4 != 0)) {
          FUN_004804b0((int)param_1,*param_4);
        }
        break;
      case 0x17:
      case 0x18:
        if ((int)param_1[0xd] < 0x20) {
          param_1[param_1[0xd] + 0x2e] = param_3 + -0x16;
        }
        break;
      case 0x19:
        FUN_00480578((int)param_1);
        FUN_004803f0((int)param_1,0,1);
        FUN_004803f0((int)param_1,1,0);
        FUN_004803f0((int)param_1,2,0);
        FUN_004803f0((int)param_1,3,0);
        break;
      case 0x1a:
        FUN_0047faa8((int)param_1);
        break;
      case 0x1b:
        if (param_4 == (int *)0x0) {
          iVar2 = 1;
        }
        else {
          iVar2 = *param_4;
        }
        FUN_0047fb8c((int)param_1,iVar2);
        break;
      case 0x1c:
        if (param_4 == (int *)0x0) {
          iVar2 = 0x2d0;
        }
        else {
          iVar2 = *param_4;
        }
        FUN_0047fc9c((int)param_1,iVar2);
        break;
      case 0x1d:
        FUN_0047fa24((int)param_1,param_2,2);
        break;
      case 0x1e:
      case 0x1f:
      case 0x20:
        FUN_0047fb1c((int)param_1,param_3 + -0x1e);
        break;
      case 0x21:
      case 0x22:
      case 0x23:
        FUN_0047ce48((int)param_1,param_2,(undefined4 *)(&PTR_DAT_005015e0)[param_3],1);
      }
    }
    else {
      uVar1 = FUN_0047c168(param_3);
      uStack_8 = CONCAT13((char)uVar1,(undefined3)uStack_8);
      FUN_0047ce48((int)param_1,param_2,(undefined4 *)((int)&uStack_8 + 3),1);
    }
  }
  else {
    param_1[1] = 3;
  }
  return;
}

