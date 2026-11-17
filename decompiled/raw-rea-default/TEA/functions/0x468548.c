// rea decompile_all
// name: FUN_00468548
// address: 0x468548
// body: available
// range: 0x468548-0x46896c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004685da) */
/* WARNING: Removing unreachable block (ram,0x00468636) */
/* WARNING: Removing unreachable block (ram,0x0046870a) */
/* WARNING: Removing unreachable block (ram,0x004686bc) */
/* WARNING: Removing unreachable block (ram,0x004686fd) */
/* WARNING: Removing unreachable block (ram,0x004687a1) */
/* WARNING: Removing unreachable block (ram,0x004687c5) */
/* WARNING: Removing unreachable block (ram,0x004687d0) */
/* WARNING: Removing unreachable block (ram,0x00468810) */
/* WARNING: Removing unreachable block (ram,0x004687e9) */
/* WARNING: Removing unreachable block (ram,0x00468809) */
/* WARNING: Removing unreachable block (ram,0x004687f6) */
/* WARNING: Removing unreachable block (ram,0x00468815) */
/* WARNING: Removing unreachable block (ram,0x00468819) */
/* WARNING: Removing unreachable block (ram,0x00468867) */

void __cdecl FUN_00468548(int *param_1,int *param_2)

{
  HWND hWnd;
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  char *local_110;
  char *local_104;
  undefined1 local_100 [144];
  char *local_70;
  int local_6c;
  undefined1 local_65;
  int local_64;
  undefined4 local_60;
  undefined2 local_50;
  int local_44;
  undefined1 local_14 [8];
  char *local_c;
  
  FUN_004dce64(0x4fc9a4);
  hWnd = (HWND)FUN_004a76a8(param_1[0x18],0x132d,0,0);
  if (hWnd != (HWND)0x0) {
    local_134 = 0x2c;
    local_130 = 1;
    local_12c = *(undefined4 *)(*param_1 + 0xc);
    local_50 = 0x14;
    uVar1 = GetDlgCtrlID(*(HWND *)(*param_2 + 0xc));
    FUN_00464a94((int)local_14,param_1[0xe],uVar1);
    local_44 = local_44 + 1;
    local_50 = 8;
    local_65 = 10;
    local_6c = *(int *)(local_c + -4);
    local_70 = local_c;
    pcVar2 = thunk_FUN_004dc794(local_c,'\n',local_6c);
    local_64 = DAT_005140ac;
    if (pcVar2 != (char *)0x0) {
      local_64 = (int)pcVar2 - (int)local_c;
    }
    if (local_64 != -1) {
      local_100[0] = 0;
      uVar1 = local_64 + 1U;
      if (*(uint *)(local_c + -4) <= local_64 + 1U) {
        uVar1 = *(uint *)(local_c + -4);
      }
      FUN_004cfad4((int)local_14,0,uVar1,(uint)local_100,0,0,0);
    }
    local_110 = local_c;
    local_128 = *(undefined4 *)(*param_2 + 0xc);
    SendMessageA(hWnd,0x404,0,(LPARAM)&local_134);
    local_50 = 8;
    local_44 = local_44 + -1;
    if (local_c != (char *)0x0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar4 = (int *)(local_c + -0xc);
        if (piVar4 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (piVar4 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *piVar4 = *piVar4 + -1;
          iVar3 = *piVar4 + 1;
        }
        if (iVar3 != 0) goto LAB_0046895c;
      }
      local_104 = local_c + -0xc;
      FUN_004cc0bc();
    }
  }
LAB_0046895c:
  *in_FS_OFFSET = local_60;
  return;
}

