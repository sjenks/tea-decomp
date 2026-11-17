// name: FUN_0044f0f0
// address: 0x44f0f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0044f0f0(LPCSTR param_1,LPCSTR param_2,uint *param_3)

{
  UINT UVar1;
  HSZ hszService;
  HSZ hszTopic;
  HCONV hConv;
  char *pcVar2;
  HDDEDATA pHVar3;
  undefined4 uVar4;
  HCONV hConv_00;
  HSZ hszItem;
  UINT wType;
  DWORD dwTimeout;
  LPDWORD pdwResult;
  
  uVar4 = 0;
  DAT_004f74f8 = 0;
  UVar1 = DdeInitializeA(&DAT_004f74f8,FUN_0044f0dc,0x3c0010,0);
  if (UVar1 == 0) {
    hszService = DdeCreateStringHandleA(DAT_004f74f8,param_1,0x3ec);
    hszTopic = DdeCreateStringHandleA(DAT_004f74f8,param_2,0x3ec);
    hConv = DdeConnect(DAT_004f74f8,hszService,hszTopic,(PCONVCONTEXT)0x0);
    if (hConv == (HCONV)0x0) {
      uVar4 = 2;
    }
    else {
      pdwResult = (LPDWORD)0x0;
      dwTimeout = 10000;
      wType = 0x4050;
      UVar1 = 1;
      hszItem = (HSZ)0x0;
      hConv_00 = hConv;
      pcVar2 = FUN_004dc9f4(param_3);
      pHVar3 = DdeClientTransaction
                         ((LPBYTE)param_3,(DWORD)(pcVar2 + 1),hConv_00,hszItem,UVar1,wType,dwTimeout
                          ,pdwResult);
      if (pHVar3 == (HDDEDATA)0x0) {
        uVar4 = 3;
      }
      DdeDisconnect(hConv);
    }
    DdeFreeStringHandle(DAT_004f74f8,hszService);
    DdeFreeStringHandle(DAT_004f74f8,hszTopic);
    DdeUninitialize(DAT_004f74f8);
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

