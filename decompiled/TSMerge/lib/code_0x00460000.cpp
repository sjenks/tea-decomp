// TSMerge.exe — runtime / library code "code_0x00460000"
// 284 functions, 0x00460272..0x00460988. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00460272  FUN_00460272   (84 bytes)   [unnamed]
uint __cdecl FUN_00460272(int param_1)

{
  int iVar1;
  
  if (param_1 == -1) {
    return 0xffffffff;
  }
  if (**(short **)(param_1 + 4) == 0x25ff) {
    iVar1 = **(int **)(*(int *)(param_1 + 4) + 2);
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
  }
  iVar1 = FUN_00455cf4((byte *)(iVar1 + -8),(byte *)"**BCCxh1",8);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  return (uint)*(ushort *)(param_1 + 0x10);
}

// ----------------------------------------------------------------------------------------------------
// 0x004602c8  ADVAPI32.DLL::IsTextUnicode   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to ADVAPI32.DLL::IsTextUnicode
BOOL __stdcall import_IsTextUnicode(void *lpv,int iSize,LPINT lpiResult)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004602c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = IsTextUnicode(lpv,iSize,lpiResult);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004602ce  ADVAPI32.DLL::RegCloseKey   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to ADVAPI32.DLL::RegCloseKey
LSTATUS __stdcall import_RegCloseKey(HKEY hKey)

{
  LSTATUS regStatus;
  
                    /* WARNING: Could not recover jumptable at 0x004602ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  regStatus = RegCloseKey(hKey);
  return regStatus;
}

// ----------------------------------------------------------------------------------------------------
// 0x004602d4  ADVAPI32.DLL::RegCreateKeyExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to ADVAPI32.DLL::RegCreateKeyExA
LSTATUS __stdcall import_RegCreateKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD Reserved,LPSTR lpClass,DWORD dwOptions, REGSAM samDesired,LPSECURITY_ATTRIBUTES lpSecurityAttributes,PHKEY phkResult, LPDWORD lpdwDisposition)

{
  LSTATUS regStatus;
  
                    /* WARNING: Could not recover jumptable at 0x004602d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  regStatus = RegCreateKeyExA(hKey,lpSubKey,Reserved,lpClass,dwOptions,samDesired,lpSecurityAttributes,
                          phkResult,lpdwDisposition);
  return regStatus;
}

// ----------------------------------------------------------------------------------------------------
// 0x004602da  ADVAPI32.DLL::RegOpenKeyExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to ADVAPI32.DLL::RegOpenKeyExA
LSTATUS __stdcall import_RegOpenKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD ulOptions,REGSAM samDesired,PHKEY phkResult)

{
  LSTATUS regStatus;
  
                    /* WARNING: Could not recover jumptable at 0x004602da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  regStatus = RegOpenKeyExA(hKey,lpSubKey,ulOptions,samDesired,phkResult);
  return regStatus;
}

// ----------------------------------------------------------------------------------------------------
// 0x004602e0  ADVAPI32.DLL::RegQueryInfoKeyA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to ADVAPI32.DLL::RegQueryInfoKeyA
LSTATUS __stdcall import_RegQueryInfoKeyA(HKEY hKey,LPSTR lpClass,LPDWORD lpcchClass,LPDWORD lpReserved,LPDWORD lpcSubKeys, LPDWORD lpcbMaxSubKeyLen,LPDWORD lpcbMaxClassLen,LPDWORD lpcValues, LPDWORD lpcbMaxValueNameLen,LPDWORD lpcbMaxValueLen,LPDWORD lpcbSecurityDescriptor, PFILETIME lpftLastWriteTime)

{
  LSTATUS regStatus;
  
                    /* WARNING: Could not recover jumptable at 0x004602e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  regStatus = RegQueryInfoKeyA(hKey,lpClass,lpcchClass,lpReserved,lpcSubKeys,lpcbMaxSubKeyLen,
                           lpcbMaxClassLen,lpcValues,lpcbMaxValueNameLen,lpcbMaxValueLen,
                           lpcbSecurityDescriptor,lpftLastWriteTime);
  return regStatus;
}

// ----------------------------------------------------------------------------------------------------
// 0x004602e6  ADVAPI32.DLL::RegQueryValueExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to ADVAPI32.DLL::RegQueryValueExA
LSTATUS __stdcall import_RegQueryValueExA(HKEY hKey,LPCSTR lpValueName,LPDWORD lpReserved,LPDWORD lpType,LPBYTE lpData, LPDWORD lpcbData)

{
  LSTATUS regStatus;
  
                    /* WARNING: Could not recover jumptable at 0x004602e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  regStatus = RegQueryValueExA(hKey,lpValueName,lpReserved,lpType,lpData,lpcbData);
  return regStatus;
}

// ----------------------------------------------------------------------------------------------------
// 0x004602ec  ADVAPI32.DLL::RegSetValueExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to ADVAPI32.DLL::RegSetValueExA
LSTATUS __stdcall import_RegSetValueExA(HKEY hKey,LPCSTR lpValueName,DWORD Reserved,DWORD dwType,BYTE *lpData,DWORD cbData)

{
  LSTATUS regStatus;
  
                    /* WARNING: Could not recover jumptable at 0x004602ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  regStatus = RegSetValueExA(hKey,lpValueName,Reserved,dwType,lpData,cbData);
  return regStatus;
}

// ----------------------------------------------------------------------------------------------------
// 0x004602f4  KERNEL32.DLL::CloseHandle   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::CloseHandle
BOOL __stdcall import_CloseHandle(HANDLE hObject)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004602f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = CloseHandle(hObject);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004602fa  KERNEL32.DLL::CreateFileA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::CreateFileA
HANDLE __stdcall import_CreateFileA(LPCSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes,HANDLE hTemplateFile)

{
  HANDLE hFile;
  
                    /* WARNING: Could not recover jumptable at 0x004602fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hFile = CreateFileA(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                       dwCreationDisposition,dwFlagsAndAttributes,hTemplateFile);
  return hFile;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460300  KERNEL32.DLL::CreateFileW   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::CreateFileW
HANDLE __stdcall import_CreateFileW(LPCWSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes,HANDLE hTemplateFile)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateFileW(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                       dwCreationDisposition,dwFlagsAndAttributes,hTemplateFile);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460306  KERNEL32.DLL::DuplicateHandle   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::DuplicateHandle
BOOL __stdcall import_DuplicateHandle(HANDLE hSourceProcessHandle,HANDLE hSourceHandle,HANDLE hTargetProcessHandle, LPHANDLE lpTargetHandle,DWORD dwDesiredAccess,BOOL bInheritHandle,DWORD dwOptions)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460306. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,lpTargetHandle,
                          dwDesiredAccess,bInheritHandle,dwOptions);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460312  KERNEL32.DLL::ExitProcess   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::ExitProcess
void __stdcall import_ExitProcess(UINT uExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x00460312. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  ExitProcess(uExitCode);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460318  KERNEL32.DLL::ExpandEnvironmentStringsA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::ExpandEnvironmentStringsA
DWORD __stdcall import_ExpandEnvironmentStringsA(LPCSTR lpSrc,LPSTR lpDst,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = ExpandEnvironmentStringsA(lpSrc,lpDst,nSize);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046031e  KERNEL32.DLL::FileTimeToSystemTime   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FileTimeToSystemTime
BOOL __stdcall import_FileTimeToSystemTime(FILETIME *lpFileTime,LPSYSTEMTIME lpSystemTime)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x0046031e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = FileTimeToSystemTime(lpFileTime,lpSystemTime);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460324  KERNEL32.DLL::FindClose   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FindClose
BOOL __stdcall import_FindClose(HANDLE hFindFile)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = FindClose(hFindFile);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046032a  KERNEL32.DLL::FindFirstFileA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FindFirstFileA
HANDLE __stdcall import_FindFirstFileA(LPCSTR lpFileName,LPWIN32_FIND_DATAA lpFindFileData)

{
  HANDLE hFind;
  
                    /* WARNING: Could not recover jumptable at 0x0046032a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hFind = FindFirstFileA(lpFileName,lpFindFileData);
  return hFind;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460330  KERNEL32.DLL::FindResourceA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FindResourceA
HRSRC __stdcall import_FindResourceA(HMODULE hModule,LPCSTR lpName,LPCSTR lpType)

{
  HRSRC hResource;
  
                    /* WARNING: Could not recover jumptable at 0x00460330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hResource = FindResourceA(hModule,lpName,lpType);
  return hResource;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460336  KERNEL32.DLL::FindResourceExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FindResourceExA
HRSRC __stdcall import_FindResourceExA(HMODULE hModule,LPCSTR lpType,LPCSTR lpName,WORD wLanguage)

{
  HRSRC hResource;
  
                    /* WARNING: Could not recover jumptable at 0x00460336. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hResource = FindResourceExA(hModule,lpType,lpName,wLanguage);
  return hResource;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046033c  KERNEL32.DLL::FlushFileBuffers   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FlushFileBuffers
BOOL __stdcall import_FlushFileBuffers(HANDLE hFile)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x0046033c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = FlushFileBuffers(hFile);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460342  KERNEL32.DLL::FormatMessageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FormatMessageA
DWORD __stdcall import_FormatMessageA(DWORD dwFlags,LPCVOID lpSource,DWORD dwMessageId,DWORD dwLanguageId,LPSTR lpBuffer, DWORD nSize,va_list *Arguments)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460342. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FormatMessageA(dwFlags,lpSource,dwMessageId,dwLanguageId,lpBuffer,nSize,Arguments);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460348  KERNEL32.DLL::FreeLibrary   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FreeLibrary
BOOL __stdcall import_FreeLibrary(HMODULE hLibModule)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = FreeLibrary(hLibModule);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046034e  KERNEL32.DLL::FreeResource   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FreeResource
BOOL __stdcall import_FreeResource(HGLOBAL hResData)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x0046034e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = FreeResource(hResData);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460354  KERNEL32.DLL::GetACP   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetACP
UINT __stdcall import_GetACP(void)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetACP();
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046035a  KERNEL32.DLL::GetCPInfo   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetCPInfo
BOOL __stdcall import_GetCPInfo(UINT CodePage,LPCPINFO lpCPInfo)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x0046035a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetCPInfo(CodePage,lpCPInfo);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460360  KERNEL32.DLL::GetCommandLineA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetCommandLineA
LPSTR __stdcall import_GetCommandLineA(void)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetCommandLineA();
  return pCVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460366  KERNEL32.DLL::GetCurrentProcess   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetCurrentProcess
HANDLE __stdcall import_GetCurrentProcess(void)

{
  HANDLE hProcess;
  
                    /* WARNING: Could not recover jumptable at 0x00460366. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hProcess = GetCurrentProcess();
  return hProcess;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046036c  KERNEL32.DLL::GetCurrentProcessId   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetCurrentProcessId
DWORD __stdcall import_GetCurrentProcessId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046036c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentProcessId();
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460372  KERNEL32.DLL::GetCurrentThreadId   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetCurrentThreadId
DWORD __stdcall import_GetCurrentThreadId(void)

{
  DWORD threadId;
  
                    /* WARNING: Could not recover jumptable at 0x00460372. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  threadId = GetCurrentThreadId();
  return threadId;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460378  KERNEL32.DLL::GetDriveTypeA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetDriveTypeA
UINT __stdcall import_GetDriveTypeA(LPCSTR lpRootPathName)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetDriveTypeA(lpRootPathName);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046037e  KERNEL32.DLL::GetEnvironmentStrings   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetEnvironmentStrings
LPCH __stdcall import_GetEnvironmentStrings(void)

{
  LPCH pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046037e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetEnvironmentStrings();
  return pCVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460384  KERNEL32.DLL::GetFileAttributesA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetFileAttributesA
DWORD __stdcall import_GetFileAttributesA(LPCSTR lpFileName)

{
  DWORD attributes;
  
                    /* WARNING: Could not recover jumptable at 0x00460384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  attributes = GetFileAttributesA(lpFileName);
  return attributes;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046038a  KERNEL32.DLL::GetFileAttributesW   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetFileAttributesW
DWORD __stdcall import_GetFileAttributesW(LPCWSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046038a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileAttributesW(lpFileName);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460390  KERNEL32.DLL::GetFileSize   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetFileSize
DWORD __stdcall import_GetFileSize(HANDLE hFile,LPDWORD lpFileSizeHigh)

{
  DWORD fileSize;
  
                    /* WARNING: Could not recover jumptable at 0x00460390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fileSize = GetFileSize(hFile,lpFileSizeHigh);
  return fileSize;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460396  KERNEL32.DLL::GetFileTime   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetFileTime
BOOL __stdcall import_GetFileTime(HANDLE hFile,LPFILETIME lpCreationTime,LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460396. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetFileTime(hFile,lpCreationTime,lpLastAccessTime,lpLastWriteTime);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046039c  KERNEL32.DLL::GetFileType   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetFileType
DWORD __stdcall import_GetFileType(HANDLE hFile)

{
  DWORD fileType;
  
                    /* WARNING: Could not recover jumptable at 0x0046039c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fileType = GetFileType(hFile);
  return fileType;
}

// ----------------------------------------------------------------------------------------------------
// 0x004603a2  KERNEL32.DLL::GetFullPathNameA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetFullPathNameA
DWORD __stdcall import_GetFullPathNameA(LPCSTR lpFileName,DWORD nBufferLength,LPSTR lpBuffer,LPSTR *lpFilePart)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004603a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFullPathNameA(lpFileName,nBufferLength,lpBuffer,lpFilePart);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004603a8  KERNEL32.DLL::GetLastError   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetLastError
DWORD __stdcall import_GetLastError(void)

{
  DWORD lastError;
  
                    /* WARNING: Could not recover jumptable at 0x004603a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lastError = GetLastError();
  return lastError;
}

// ----------------------------------------------------------------------------------------------------
// 0x004603ae  KERNEL32.DLL::GetLocalTime   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetLocalTime
void __stdcall import_GetLocalTime(LPSYSTEMTIME lpSystemTime)

{
                    /* WARNING: Could not recover jumptable at 0x004603ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetLocalTime(lpSystemTime);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004603b4  KERNEL32.DLL::GetLocaleInfoA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetLocaleInfoA
int __stdcall import_GetLocaleInfoA(LCID Locale,LCTYPE LCType,LPSTR lpLCData,int cchData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004603b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetLocaleInfoA(Locale,LCType,lpLCData,cchData);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004603ba  KERNEL32.DLL::GetModuleFileNameA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetModuleFileNameA
DWORD __stdcall import_GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004603ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameA(hModule,lpFilename,nSize);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004603c0  KERNEL32.DLL::GetModuleHandleA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetModuleHandleA
HMODULE __stdcall import_GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE hModule;
  
                    /* WARNING: Could not recover jumptable at 0x004603c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hModule = GetModuleHandleA(lpModuleName);
  return hModule;
}

// ----------------------------------------------------------------------------------------------------
// 0x004603c6  KERNEL32.DLL::GetOEMCP   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetOEMCP
UINT __stdcall import_GetOEMCP(void)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004603c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetOEMCP();
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004603cc  KERNEL32.DLL::GetProcAddress   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetProcAddress
FARPROC __stdcall import_GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC procAddress;
  
                    /* WARNING: Could not recover jumptable at 0x004603cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  procAddress = GetProcAddress(hModule,lpProcName);
  return procAddress;
}

// ----------------------------------------------------------------------------------------------------
// 0x004603d8  KERNEL32.DLL::GetStartupInfoA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetStartupInfoA
void __stdcall import_GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo)

{
                    /* WARNING: Could not recover jumptable at 0x004603d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetStartupInfoA(lpStartupInfo);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004603de  KERNEL32.DLL::GetStdHandle   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetStdHandle
HANDLE __stdcall import_GetStdHandle(DWORD nStdHandle)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004603de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStdHandle(nStdHandle);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004603e4  KERNEL32.DLL::GetStringTypeA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetStringTypeA
BOOL __stdcall import_GetStringTypeA(LCID Locale,DWORD dwInfoType,LPCSTR lpSrcStr,int cchSrc,LPWORD lpCharType)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004603e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetStringTypeA(Locale,dwInfoType,lpSrcStr,cchSrc,lpCharType);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004603ea  KERNEL32.DLL::GetStringTypeW   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetStringTypeW
BOOL __stdcall import_GetStringTypeW(DWORD dwInfoType,LPCWSTR lpSrcStr,int cchSrc,LPWORD lpCharType)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004603ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetStringTypeW(dwInfoType,lpSrcStr,cchSrc,lpCharType);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004603f0  KERNEL32.DLL::GetSystemDefaultLangID   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetSystemDefaultLangID
LANGID __stdcall import_GetSystemDefaultLangID(void)

{
  LANGID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004603f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetSystemDefaultLangID();
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004603f6  KERNEL32.DLL::GetTickCount   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetTickCount
DWORD __stdcall import_GetTickCount(void)

{
  DWORD tickCount;
  
                    /* WARNING: Could not recover jumptable at 0x004603f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  tickCount = GetTickCount();
  return tickCount;
}

// ----------------------------------------------------------------------------------------------------
// 0x004603fc  KERNEL32.DLL::GetTimeZoneInformation   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetTimeZoneInformation
DWORD __stdcall import_GetTimeZoneInformation(LPTIME_ZONE_INFORMATION lpTimeZoneInformation)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004603fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTimeZoneInformation(lpTimeZoneInformation);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460402  KERNEL32.DLL::GetUserDefaultLCID   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetUserDefaultLCID
LCID __stdcall import_GetUserDefaultLCID(void)

{
  LCID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460402. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetUserDefaultLCID();
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046040e  KERNEL32.DLL::GetVersion   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetVersion
DWORD __stdcall import_GetVersion(void)

{
  DWORD version;
  
                    /* WARNING: Could not recover jumptable at 0x0046040e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  version = GetVersion();
  return version;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460414  KERNEL32.DLL::GetVersionExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetVersionExA
BOOL __stdcall import_GetVersionExA(LPOSVERSIONINFOA lpVersionInformation)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetVersionExA(lpVersionInformation);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046041a  KERNEL32.DLL::GetWindowsDirectoryA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetWindowsDirectoryA
UINT __stdcall import_GetWindowsDirectoryA(LPSTR lpBuffer,UINT uSize)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046041a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetWindowsDirectoryA(lpBuffer,uSize);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460420  KERNEL32.DLL::GlobalAlloc   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GlobalAlloc
HGLOBAL __stdcall import_GlobalAlloc(UINT uFlags,SIZE_T dwBytes)

{
  HGLOBAL hGlobal;
  
                    /* WARNING: Could not recover jumptable at 0x00460420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hGlobal = GlobalAlloc(uFlags,dwBytes);
  return hGlobal;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460426  KERNEL32.DLL::GlobalFree   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GlobalFree
HGLOBAL __stdcall import_GlobalFree(HGLOBAL hMem)

{
  HGLOBAL hGlobal;
  
                    /* WARNING: Could not recover jumptable at 0x00460426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hGlobal = GlobalFree(hMem);
  return hGlobal;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046042c  KERNEL32.DLL::GlobalHandle   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GlobalHandle
HGLOBAL __stdcall import_GlobalHandle(LPCVOID pMem)

{
  HGLOBAL hGlobal;
  
                    /* WARNING: Could not recover jumptable at 0x0046042c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hGlobal = GlobalHandle(pMem);
  return hGlobal;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460432  KERNEL32.DLL::GlobalLock   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GlobalLock
LPVOID __stdcall import_GlobalLock(HGLOBAL hMem)

{
  LPVOID lockedMem;
  
                    /* WARNING: Could not recover jumptable at 0x00460432. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lockedMem = GlobalLock(hMem);
  return lockedMem;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460438  KERNEL32.DLL::GlobalMemoryStatus   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GlobalMemoryStatus
void __stdcall import_GlobalMemoryStatus(LPMEMORYSTATUS lpBuffer)

{
                    /* WARNING: Could not recover jumptable at 0x00460438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GlobalMemoryStatus(lpBuffer);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046043e  KERNEL32.DLL::GlobalSize   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GlobalSize
SIZE_T __stdcall import_GlobalSize(HGLOBAL hMem)

{
  SIZE_T memSize;
  
                    /* WARNING: Could not recover jumptable at 0x0046043e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memSize = GlobalSize(hMem);
  return memSize;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460444  KERNEL32.DLL::GlobalUnlock   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GlobalUnlock
BOOL __stdcall import_GlobalUnlock(HGLOBAL hMem)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GlobalUnlock(hMem);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046044a  KERNEL32.DLL::HeapAlloc   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::HeapAlloc
LPVOID __stdcall import_HeapAlloc(HANDLE hHeap,DWORD dwFlags,SIZE_T dwBytes)

{
  LPVOID mem;
  
                    /* WARNING: Could not recover jumptable at 0x0046044a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  mem = HeapAlloc(hHeap,dwFlags,dwBytes);
  return mem;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460450  KERNEL32.DLL::HeapCreate   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::HeapCreate
HANDLE __stdcall import_HeapCreate(DWORD flOptions,SIZE_T dwInitialSize,SIZE_T dwMaximumSize)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = HeapCreate(flOptions,dwInitialSize,dwMaximumSize);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460456  KERNEL32.DLL::HeapDestroy   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::HeapDestroy
BOOL __stdcall import_HeapDestroy(HANDLE hHeap)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460456. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = HeapDestroy(hHeap);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046045c  KERNEL32.DLL::HeapFree   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::HeapFree
BOOL __stdcall import_HeapFree(HANDLE hHeap,DWORD dwFlags,LPVOID lpMem)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x0046045c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = HeapFree(hHeap,dwFlags,lpMem);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460462  KERNEL32.DLL::InterlockedIncrement   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::InterlockedIncrement
LONG __stdcall import_InterlockedIncrement(LONG *lpAddend)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460462. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = InterlockedIncrement(lpAddend);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460468  KERNEL32.DLL::IsBadReadPtr   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::IsBadReadPtr
BOOL __stdcall import_IsBadReadPtr(void *lp,UINT_PTR ucb)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = IsBadReadPtr(lp,ucb);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046046e  KERNEL32.DLL::IsValidLocale   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::IsValidLocale
BOOL __stdcall import_IsValidLocale(LCID Locale,DWORD dwFlags)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x0046046e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = IsValidLocale(Locale,dwFlags);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460474  KERNEL32.DLL::LCMapStringA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LCMapStringA
int __stdcall import_LCMapStringA(LCID Locale,DWORD dwMapFlags,LPCSTR lpSrcStr,int cchSrc,LPSTR lpDestStr,int cchDest)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LCMapStringA(Locale,dwMapFlags,lpSrcStr,cchSrc,lpDestStr,cchDest);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460480  KERNEL32.DLL::LoadLibraryA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LoadLibraryA
HMODULE __stdcall import_LoadLibraryA(LPCSTR lpLibFileName)

{
  HMODULE hModule;
  
                    /* WARNING: Could not recover jumptable at 0x00460480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hModule = LoadLibraryA(lpLibFileName);
  return hModule;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460486  KERNEL32.DLL::LoadResource   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LoadResource
HGLOBAL __stdcall import_LoadResource(HMODULE hModule,HRSRC hResInfo)

{
  HGLOBAL hGlobal;
  
                    /* WARNING: Could not recover jumptable at 0x00460486. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hGlobal = LoadResource(hModule,hResInfo);
  return hGlobal;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046048c  KERNEL32.DLL::LocalFree   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LocalFree
HLOCAL __stdcall import_LocalFree(HLOCAL hMem)

{
  HLOCAL hLocal;
  
                    /* WARNING: Could not recover jumptable at 0x0046048c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hLocal = LocalFree(hMem);
  return hLocal;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460492  KERNEL32.DLL::LocalHandle   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LocalHandle
HLOCAL __stdcall import_LocalHandle(LPCVOID pMem)

{
  HLOCAL hLocal;
  
                    /* WARNING: Could not recover jumptable at 0x00460492. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hLocal = LocalHandle(pMem);
  return hLocal;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460498  KERNEL32.DLL::LocalLock   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LocalLock
LPVOID __stdcall import_LocalLock(HLOCAL hMem)

{
  LPVOID lockedMem;
  
                    /* WARNING: Could not recover jumptable at 0x00460498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lockedMem = LocalLock(hMem);
  return lockedMem;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046049e  KERNEL32.DLL::LocalReAlloc   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LocalReAlloc
HLOCAL __stdcall import_LocalReAlloc(HLOCAL hMem,SIZE_T uBytes,UINT uFlags)

{
  HLOCAL hLocal;
  
                    /* WARNING: Could not recover jumptable at 0x0046049e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hLocal = LocalReAlloc(hMem,uBytes,uFlags);
  return hLocal;
}

// ----------------------------------------------------------------------------------------------------
// 0x004604a4  KERNEL32.DLL::LocalUnlock   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LocalUnlock
BOOL __stdcall import_LocalUnlock(HLOCAL hMem)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004604a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = LocalUnlock(hMem);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004604aa  KERNEL32.DLL::LockFile   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LockFile
BOOL __stdcall import_LockFile(HANDLE hFile,DWORD dwFileOffsetLow,DWORD dwFileOffsetHigh,DWORD nNumberOfBytesToLockLow, DWORD nNumberOfBytesToLockHigh)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004604aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = LockFile(hFile,dwFileOffsetLow,dwFileOffsetHigh,nNumberOfBytesToLockLow,
                   nNumberOfBytesToLockHigh);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004604b0  KERNEL32.DLL::LockResource   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LockResource
LPVOID __stdcall import_LockResource(HGLOBAL hResData)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004604b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LockResource(hResData);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004604b6  KERNEL32.DLL::MulDiv   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::MulDiv
int __stdcall import_MulDiv(int nNumber,int nNumerator,int nDenominator)

{
  int scaled;
  
                    /* WARNING: Could not recover jumptable at 0x004604b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  scaled = MulDiv(nNumber,nNumerator,nDenominator);
  return scaled;
}

// ----------------------------------------------------------------------------------------------------
// 0x004604bc  KERNEL32.DLL::MultiByteToWideChar   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::MultiByteToWideChar
int __stdcall import_MultiByteToWideChar(UINT CodePage,DWORD dwFlags,LPCSTR lpMultiByteStr,int cbMultiByte, LPWSTR lpWideCharStr,int cchWideChar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004604bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MultiByteToWideChar(CodePage,dwFlags,lpMultiByteStr,cbMultiByte,lpWideCharStr,cchWideChar)
  ;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004604c2  KERNEL32.DLL::RaiseException   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::RaiseException
void __stdcall import_RaiseException(DWORD dwExceptionCode,DWORD dwExceptionFlags,DWORD nNumberOfArguments, ULONG_PTR *lpArguments)

{
                    /* WARNING: Could not recover jumptable at 0x004604c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RaiseException(dwExceptionCode,dwExceptionFlags,nNumberOfArguments,lpArguments);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004604c8  KERNEL32.DLL::ReadFile   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::ReadFile
BOOL __stdcall import_ReadFile(HANDLE hFile,LPVOID lpBuffer,DWORD nNumberOfBytesToRead,LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004604c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,lpNumberOfBytesRead,lpOverlapped);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004604ce  KERNEL32.DLL::RtlUnwind   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::RtlUnwind
void __stdcall import_RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x004604ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004604d4  KERNEL32.DLL::SetConsoleCtrlHandler   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SetConsoleCtrlHandler
BOOL __stdcall import_SetConsoleCtrlHandler(PHANDLER_ROUTINE HandlerRoutine,BOOL Add)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004604d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SetConsoleCtrlHandler(HandlerRoutine,Add);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004604da  KERNEL32.DLL::SetEndOfFile   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SetEndOfFile
BOOL __stdcall import_SetEndOfFile(HANDLE hFile)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004604da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SetEndOfFile(hFile);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004604e0  KERNEL32.DLL::SetErrorMode   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SetErrorMode
UINT __stdcall import_SetErrorMode(UINT uMode)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004604e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetErrorMode(uMode);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004604e6  KERNEL32.DLL::SetFilePointer   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SetFilePointer
DWORD __stdcall import_SetFilePointer(HANDLE hFile,LONG lDistanceToMove,PLONG lpDistanceToMoveHigh,DWORD dwMoveMethod)

{
  DWORD filePos;
  
                    /* WARNING: Could not recover jumptable at 0x004604e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  filePos = SetFilePointer(hFile,lDistanceToMove,lpDistanceToMoveHigh,dwMoveMethod);
  return filePos;
}

// ----------------------------------------------------------------------------------------------------
// 0x004604ec  KERNEL32.DLL::SetHandleCount   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SetHandleCount
UINT __stdcall import_SetHandleCount(UINT uNumber)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004604ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetHandleCount(uNumber);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004604f2  KERNEL32.DLL::SetLastError   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SetLastError
void __stdcall import_SetLastError(DWORD dwErrCode)

{
                    /* WARNING: Could not recover jumptable at 0x004604f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetLastError(dwErrCode);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004604f8  KERNEL32.DLL::SetThreadLocale   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SetThreadLocale
BOOL __stdcall import_SetThreadLocale(LCID Locale)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004604f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SetThreadLocale(Locale);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460504  KERNEL32.DLL::TlsFree   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::TlsFree
BOOL __stdcall import_TlsFree(DWORD dwTlsIndex)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = TlsFree(dwTlsIndex);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046050a  KERNEL32.DLL::TlsGetValue   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::TlsGetValue
LPVOID __stdcall import_TlsGetValue(DWORD dwTlsIndex)

{
  LPVOID tlsValue;
  
                    /* WARNING: Could not recover jumptable at 0x0046050a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  tlsValue = TlsGetValue(dwTlsIndex);
  return tlsValue;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460510  KERNEL32.DLL::TlsSetValue   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::TlsSetValue
BOOL __stdcall import_TlsSetValue(DWORD dwTlsIndex,LPVOID lpTlsValue)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = TlsSetValue(dwTlsIndex,lpTlsValue);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460516  KERNEL32.DLL::UnhandledExceptionFilter   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::UnhandledExceptionFilter
LONG __stdcall import_UnhandledExceptionFilter(_EXCEPTION_POINTERS *ExceptionInfo)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460516. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = UnhandledExceptionFilter(ExceptionInfo);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046051c  KERNEL32.DLL::UnlockFile   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::UnlockFile
BOOL __stdcall import_UnlockFile(HANDLE hFile,DWORD dwFileOffsetLow,DWORD dwFileOffsetHigh,DWORD nNumberOfBytesToUnlockLow ,DWORD nNumberOfBytesToUnlockHigh)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x0046051c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = UnlockFile(hFile,dwFileOffsetLow,dwFileOffsetHigh,nNumberOfBytesToUnlockLow,
                     nNumberOfBytesToUnlockHigh);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460522  KERNEL32.DLL::VirtualAlloc   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::VirtualAlloc
LPVOID __stdcall import_VirtualAlloc(LPVOID lpAddress,SIZE_T dwSize,DWORD flAllocationType,DWORD flProtect)

{
  LPVOID mem;
  
                    /* WARNING: Could not recover jumptable at 0x00460522. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  mem = VirtualAlloc(lpAddress,dwSize,flAllocationType,flProtect);
  return mem;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460528  KERNEL32.DLL::VirtualFree   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::VirtualFree
BOOL __stdcall import_VirtualFree(LPVOID lpAddress,SIZE_T dwSize,DWORD dwFreeType)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = VirtualFree(lpAddress,dwSize,dwFreeType);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046052e  KERNEL32.DLL::VirtualQueryEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::VirtualQueryEx
SIZE_T __stdcall import_VirtualQueryEx(HANDLE hProcess,LPCVOID lpAddress,PMEMORY_BASIC_INFORMATION lpBuffer,SIZE_T dwLength)

{
  SIZE_T SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046052e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = VirtualQueryEx(hProcess,lpAddress,lpBuffer,dwLength);
  return SVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460534  KERNEL32.DLL::WideCharToMultiByte   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::WideCharToMultiByte
int __stdcall import_WideCharToMultiByte(UINT CodePage,DWORD dwFlags,LPCWSTR lpWideCharStr,int cchWideChar, LPSTR lpMultiByteStr,int cbMultiByte,LPCSTR lpDefaultChar, LPBOOL lpUsedDefaultChar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WideCharToMultiByte(CodePage,dwFlags,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                              lpDefaultChar,lpUsedDefaultChar);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046053a  KERNEL32.DLL::WinExec   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::WinExec
UINT __stdcall import_WinExec(LPCSTR lpCmdLine,UINT uCmdShow)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046053a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = WinExec(lpCmdLine,uCmdShow);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460540  KERNEL32.DLL::WriteFile   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::WriteFile
BOOL __stdcall import_WriteFile(HANDLE hFile,LPCVOID lpBuffer,DWORD nNumberOfBytesToWrite,LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = WriteFile(hFile,lpBuffer,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460546  KERNEL32.DLL::lstrcatA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::lstrcatA
LPSTR __stdcall import_lstrcatA(LPSTR lpString1,LPCSTR lpString2)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460546. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcatA(lpString1,lpString2);
  return pCVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046054c  KERNEL32.DLL::lstrcpyA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::lstrcpyA
LPSTR __stdcall import_lstrcpyA(LPSTR lpString1,LPCSTR lpString2)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046054c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcpyA(lpString1,lpString2);
  return pCVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460552  KERNEL32.DLL::lstrcpynA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::lstrcpynA
LPSTR __stdcall import_lstrcpynA(LPSTR lpString1,LPCSTR lpString2,int iMaxLength)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcpynA(lpString1,lpString2,iMaxLength);
  return pCVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460558  GDI32.DLL::BitBlt   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::BitBlt
BOOL __stdcall import_BitBlt(HDC hdc,int x,int y,int cx,int cy,HDC hdcSrc,int x1,int y1,DWORD rop)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = BitBlt(hdc,x,y,cx,cy,hdcSrc,x1,y1,rop);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046055e  GDI32.DLL::CreateBitmap   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateBitmap
HBITMAP __stdcall import_CreateBitmap(int nWidth,int nHeight,UINT nPlanes,UINT nBitCount,void *lpBits)

{
  HBITMAP hBitmap;
  
                    /* WARNING: Could not recover jumptable at 0x0046055e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hBitmap = CreateBitmap(nWidth,nHeight,nPlanes,nBitCount,lpBits);
  return hBitmap;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460564  GDI32.DLL::CreateCompatibleBitmap   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateCompatibleBitmap
HBITMAP __stdcall import_CreateCompatibleBitmap(HDC hdc,int cx,int cy)

{
  HBITMAP hBitmap;
  
                    /* WARNING: Could not recover jumptable at 0x00460564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hBitmap = CreateCompatibleBitmap(hdc,cx,cy);
  return hBitmap;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046056a  GDI32.DLL::CreateCompatibleDC   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateCompatibleDC
HDC __stdcall import_CreateCompatibleDC(HDC hdc)

{
  HDC hdc2;
  
                    /* WARNING: Could not recover jumptable at 0x0046056a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hdc2 = CreateCompatibleDC(hdc);
  return hdc2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460570  GDI32.DLL::CreateDIBPatternBrush   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateDIBPatternBrush
HBRUSH __stdcall import_CreateDIBPatternBrush(HGLOBAL h,UINT iUsage)

{
  HBRUSH hBrush;
  
                    /* WARNING: Could not recover jumptable at 0x00460570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hBrush = CreateDIBPatternBrush(h,iUsage);
  return hBrush;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460576  GDI32.DLL::CreateDIBitmap   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateDIBitmap
HBITMAP __stdcall import_CreateDIBitmap(HDC hdc,BITMAPINFOHEADER *pbmih,DWORD flInit,void *pjBits,BITMAPINFO *pbmi, UINT iUsage)

{
  HBITMAP hBitmap;
  
                    /* WARNING: Could not recover jumptable at 0x00460576. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hBitmap = CreateDIBitmap(hdc,pbmih,flInit,pjBits,pbmi,iUsage);
  return hBitmap;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046057c  GDI32.DLL::CreateDiscardableBitmap   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateDiscardableBitmap
HBITMAP __stdcall import_CreateDiscardableBitmap(HDC hdc,int cx,int cy)

{
  HBITMAP hBitmap;
  
                    /* WARNING: Could not recover jumptable at 0x0046057c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hBitmap = CreateDiscardableBitmap(hdc,cx,cy);
  return hBitmap;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460582  GDI32.DLL::CreateFontA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateFontA
HFONT __stdcall import_CreateFontA(int cHeight,int cWidth,int cEscapement,int cOrientation,int cWeight,DWORD bItalic, DWORD bUnderline,DWORD bStrikeOut,DWORD iCharSet,DWORD iOutPrecision,DWORD iClipPrecision ,DWORD iQuality,DWORD iPitchAndFamily,LPCSTR pszFaceName)

{
  HFONT hFont;
  
                    /* WARNING: Could not recover jumptable at 0x00460582. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hFont = CreateFontA(cHeight,cWidth,cEscapement,cOrientation,cWeight,bItalic,bUnderline,bStrikeOut
                       ,iCharSet,iOutPrecision,iClipPrecision,iQuality,iPitchAndFamily,pszFaceName);
  return hFont;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460588  GDI32.DLL::CreateFontIndirectA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateFontIndirectA
HFONT __stdcall import_CreateFontIndirectA(LOGFONTA *lplf)

{
  HFONT hFont;
  
                    /* WARNING: Could not recover jumptable at 0x00460588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hFont = CreateFontIndirectA(lplf);
  return hFont;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046058e  GDI32.DLL::CreatePalette   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreatePalette
HPALETTE __stdcall import_CreatePalette(LOGPALETTE *plpal)

{
  HPALETTE hPalette;
  
                    /* WARNING: Could not recover jumptable at 0x0046058e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hPalette = CreatePalette(plpal);
  return hPalette;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460594  GDI32.DLL::CreateRectRgn   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateRectRgn
HRGN __stdcall import_CreateRectRgn(int x1,int y1,int x2,int y2)

{
  HRGN hRgn;
  
                    /* WARNING: Could not recover jumptable at 0x00460594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hRgn = CreateRectRgn(x1,y1,x2,y2);
  return hRgn;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046059a  GDI32.DLL::CreateSolidBrush   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateSolidBrush
HBRUSH __stdcall import_CreateSolidBrush(COLORREF color)

{
  HBRUSH hBrush;
  
                    /* WARNING: Could not recover jumptable at 0x0046059a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hBrush = CreateSolidBrush(color);
  return hBrush;
}

// ----------------------------------------------------------------------------------------------------
// 0x004605a0  GDI32.DLL::DPtoLP   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::DPtoLP
BOOL __stdcall import_DPtoLP(HDC hdc,LPPOINT lppt,int c)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004605a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DPtoLP(hdc,lppt,c);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004605a6  GDI32.DLL::DeleteDC   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::DeleteDC
BOOL __stdcall import_DeleteDC(HDC hdc)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004605a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DeleteDC(hdc);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004605ac  GDI32.DLL::DeleteObject   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::DeleteObject
BOOL __stdcall import_DeleteObject(HGDIOBJ ho)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004605ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DeleteObject(ho);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004605b2  GDI32.DLL::ExtTextOutA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::ExtTextOutA
BOOL __stdcall import_ExtTextOutA(HDC hdc,int x,int y,UINT options,RECT *lprect,LPCSTR lpString,UINT c,INT *lpDx)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004605b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = ExtTextOutA(hdc,x,y,options,lprect,lpString,c,lpDx);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004605b8  GDI32.DLL::GetBkColor   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetBkColor
COLORREF __stdcall import_GetBkColor(HDC hdc)

{
  COLORREF color;
  
                    /* WARNING: Could not recover jumptable at 0x004605b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  color = GetBkColor(hdc);
  return color;
}

// ----------------------------------------------------------------------------------------------------
// 0x004605be  GDI32.DLL::GetClipRgn   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetClipRgn
int __stdcall import_GetClipRgn(HDC hdc,HRGN hrgn)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004605be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetClipRgn(hdc,hrgn);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004605c4  GDI32.DLL::GetDeviceCaps   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetDeviceCaps
int __stdcall import_GetDeviceCaps(HDC hdc,int index)

{
  int deviceCap;
  
                    /* WARNING: Could not recover jumptable at 0x004605c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  deviceCap = GetDeviceCaps(hdc,index);
  return deviceCap;
}

// ----------------------------------------------------------------------------------------------------
// 0x004605ca  GDI32.DLL::GetObjectA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetObjectA
int __stdcall import_GetObjectA(HANDLE h,int c,LPVOID pv)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004605ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetObjectA(h,c,pv);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004605d0  GDI32.DLL::GetStockObject   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetStockObject
HGDIOBJ __stdcall import_GetStockObject(int i)

{
  HGDIOBJ hGdiObject;
  
                    /* WARNING: Could not recover jumptable at 0x004605d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hGdiObject = GetStockObject(i);
  return hGdiObject;
}

// ----------------------------------------------------------------------------------------------------
// 0x004605d6  GDI32.DLL::GetSystemPaletteEntries   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetSystemPaletteEntries
UINT __stdcall import_GetSystemPaletteEntries(HDC hdc,UINT iStart,UINT cEntries,LPPALETTEENTRY pPalEntries)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004605d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetSystemPaletteEntries(hdc,iStart,cEntries,pPalEntries);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004605dc  GDI32.DLL::GetTextColor   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetTextColor
COLORREF __stdcall import_GetTextColor(HDC hdc)

{
  COLORREF color;
  
                    /* WARNING: Could not recover jumptable at 0x004605dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  color = GetTextColor(hdc);
  return color;
}

// ----------------------------------------------------------------------------------------------------
// 0x004605e2  GDI32.DLL::GetTextExtentPoint32A   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetTextExtentPoint32A
BOOL __stdcall import_GetTextExtentPoint32A(HDC hdc,LPCSTR lpString,int c,LPSIZE psizl)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004605e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetTextExtentPoint32A(hdc,lpString,c,psizl);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004605e8  GDI32.DLL::GetTextMetricsA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetTextMetricsA
BOOL __stdcall import_GetTextMetricsA(HDC hdc,LPTEXTMETRICA lptm)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004605e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetTextMetricsA(hdc,lptm);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004605ee  GDI32.DLL::GetViewportOrgEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetViewportOrgEx
BOOL __stdcall import_GetViewportOrgEx(HDC hdc,LPPOINT lppoint)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004605ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetViewportOrgEx(hdc,lppoint);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004605f4  GDI32.DLL::IntersectClipRect   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::IntersectClipRect
int __stdcall import_IntersectClipRect(HDC hdc,int left,int top,int right,int bottom)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004605f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IntersectClipRect(hdc,left,top,right,bottom);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004605fa  GDI32.DLL::LineTo   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::LineTo
BOOL __stdcall import_LineTo(HDC hdc,int x,int y)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004605fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = LineTo(hdc,x,y);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460600  GDI32.DLL::MoveToEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::MoveToEx
BOOL __stdcall import_MoveToEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = MoveToEx(hdc,x,y,lppt);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460606  GDI32.DLL::OffsetViewportOrgEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::OffsetViewportOrgEx
BOOL __stdcall import_OffsetViewportOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460606. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = OffsetViewportOrgEx(hdc,x,y,lppt);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046060c  GDI32.DLL::PatBlt   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::PatBlt
BOOL __stdcall import_PatBlt(HDC hdc,int x,int y,int w,int h,DWORD rop)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x0046060c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = PatBlt(hdc,x,y,w,h,rop);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460612  GDI32.DLL::RealizePalette   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::RealizePalette
UINT __stdcall import_RealizePalette(HDC hdc)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460612. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = RealizePalette(hdc);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460618  GDI32.DLL::Rectangle   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::Rectangle
BOOL __stdcall import_Rectangle(HDC hdc,int left,int top,int right,int bottom)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = Rectangle(hdc,left,top,right,bottom);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046061e  GDI32.DLL::ResetDCA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::ResetDCA
HDC __stdcall import_ResetDCA(HDC hdc,DEVMODEA *lpdm)

{
  HDC hdc2;
  
                    /* WARNING: Could not recover jumptable at 0x0046061e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hdc2 = ResetDCA(hdc,lpdm);
  return hdc2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460624  GDI32.DLL::RestoreDC   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::RestoreDC
BOOL __stdcall import_RestoreDC(HDC hdc,int nSavedDC)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = RestoreDC(hdc,nSavedDC);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046062a  GDI32.DLL::SaveDC   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SaveDC
int __stdcall import_SaveDC(HDC hdc)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046062a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SaveDC(hdc);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460630  GDI32.DLL::ScaleViewportExtEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::ScaleViewportExtEx
BOOL __stdcall import_ScaleViewportExtEx(HDC hdc,int xn,int dx,int yn,int yd,LPSIZE lpsz)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = ScaleViewportExtEx(hdc,xn,dx,yn,yd,lpsz);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460636  GDI32.DLL::ScaleWindowExtEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::ScaleWindowExtEx
BOOL __stdcall import_ScaleWindowExtEx(HDC hdc,int xn,int xd,int yn,int yd,LPSIZE lpsz)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460636. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = ScaleWindowExtEx(hdc,xn,xd,yn,yd,lpsz);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046063c  GDI32.DLL::SelectClipRgn   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SelectClipRgn
int __stdcall import_SelectClipRgn(HDC hdc,HRGN hrgn)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046063c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SelectClipRgn(hdc,hrgn);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460642  GDI32.DLL::SelectObject   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SelectObject
HGDIOBJ __stdcall import_SelectObject(HDC hdc,HGDIOBJ h)

{
  HGDIOBJ hGdiObject;
  
                    /* WARNING: Could not recover jumptable at 0x00460642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hGdiObject = SelectObject(hdc,h);
  return hGdiObject;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460648  GDI32.DLL::SelectPalette   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SelectPalette
HPALETTE __stdcall import_SelectPalette(HDC hdc,HPALETTE hPal,BOOL bForceBkgd)

{
  HPALETTE hPalette;
  
                    /* WARNING: Could not recover jumptable at 0x00460648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hPalette = SelectPalette(hdc,hPal,bForceBkgd);
  return hPalette;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046064e  GDI32.DLL::SetBkColor   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SetBkColor
COLORREF __stdcall import_SetBkColor(HDC hdc,COLORREF color)

{
  COLORREF color2;
  
                    /* WARNING: Could not recover jumptable at 0x0046064e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  color2 = SetBkColor(hdc,color);
  return color2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460654  GDI32.DLL::SetBkMode   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SetBkMode
int __stdcall import_SetBkMode(HDC hdc,int mode)

{
  int prevBkMode;
  
                    /* WARNING: Could not recover jumptable at 0x00460654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  prevBkMode = SetBkMode(hdc,mode);
  return prevBkMode;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046065a  GDI32.DLL::SetMapMode   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SetMapMode
int __stdcall import_SetMapMode(HDC hdc,int iMode)

{
  int prevMapMode;
  
                    /* WARNING: Could not recover jumptable at 0x0046065a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  prevMapMode = SetMapMode(hdc,iMode);
  return prevMapMode;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460660  GDI32.DLL::SetTextColor   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SetTextColor
COLORREF __stdcall import_SetTextColor(HDC hdc,COLORREF color)

{
  COLORREF color2;
  
                    /* WARNING: Could not recover jumptable at 0x00460660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  color2 = SetTextColor(hdc,color);
  return color2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460666  GDI32.DLL::SetViewportExtEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SetViewportExtEx
BOOL __stdcall import_SetViewportExtEx(HDC hdc,int x,int y,LPSIZE lpsz)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460666. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SetViewportExtEx(hdc,x,y,lpsz);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046066c  GDI32.DLL::SetViewportOrgEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SetViewportOrgEx
BOOL __stdcall import_SetViewportOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x0046066c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SetViewportOrgEx(hdc,x,y,lppt);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460672  GDI32.DLL::SetWindowExtEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SetWindowExtEx
BOOL __stdcall import_SetWindowExtEx(HDC hdc,int x,int y,LPSIZE lpsz)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460672. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SetWindowExtEx(hdc,x,y,lpsz);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460678  GDI32.DLL::TextOutA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::TextOutA
BOOL __stdcall import_TextOutA(HDC hdc,int x,int y,LPCSTR lpString,int c)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = TextOutA(hdc,x,y,lpString,c);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460680  SHELL32.DLL::SHGetMalloc   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to SHELL32.DLL::SHGetMalloc
HRESULT __stdcall import_SHGetMalloc(IMalloc **ppMalloc)

{
  HRESULT hr;
  
                    /* WARNING: Could not recover jumptable at 0x00460680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hr = SHGetMalloc(ppMalloc);
  return hr;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460686  SHELL32.DLL::SHGetSpecialFolderLocation   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to SHELL32.DLL::SHGetSpecialFolderLocation
HRESULT __stdcall import_SHGetSpecialFolderLocation(HWND hwnd,int csidl,LPITEMIDLIST *ppidl)

{
  HRESULT hr;
  
                    /* WARNING: Could not recover jumptable at 0x00460686. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hr = SHGetSpecialFolderLocation(hwnd,csidl,ppidl);
  return hr;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046068c  SHELL32.DLL::SHGetPathFromIDListA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to SHELL32.DLL::SHGetPathFromIDListA
BOOL __stdcall import_SHGetPathFromIDListA(LPCITEMIDLIST pidl,LPSTR pszPath)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x0046068c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SHGetPathFromIDListA(pidl,pszPath);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460694  USER32.DLL::AppendMenuA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::AppendMenuA
BOOL __stdcall import_AppendMenuA(HMENU hMenu,UINT uFlags,UINT_PTR uIDNewItem,LPCSTR lpNewItem)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = AppendMenuA(hMenu,uFlags,uIDNewItem,lpNewItem);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046069a  USER32.DLL::BeginDeferWindowPos   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::BeginDeferWindowPos
HDWP __stdcall import_BeginDeferWindowPos(int nNumWindows)

{
  HDWP hDwp;
  
                    /* WARNING: Could not recover jumptable at 0x0046069a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hDwp = BeginDeferWindowPos(nNumWindows);
  return hDwp;
}

// ----------------------------------------------------------------------------------------------------
// 0x004606a0  USER32.DLL::BeginPaint   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::BeginPaint
HDC __stdcall import_BeginPaint(HWND hWnd,LPPAINTSTRUCT lpPaint)

{
  HDC hdc;
  
                    /* WARNING: Could not recover jumptable at 0x004606a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hdc = BeginPaint(hWnd,lpPaint);
  return hdc;
}

// ----------------------------------------------------------------------------------------------------
// 0x004606a6  USER32.DLL::CallWindowProcA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CallWindowProcA
LRESULT __stdcall import_CallWindowProcA(WNDPROC lpPrevWndFunc,HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT lResult;
  
                    /* WARNING: Could not recover jumptable at 0x004606a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lResult = CallWindowProcA(lpPrevWndFunc,hWnd,Msg,wParam,lParam);
  return lResult;
}

// ----------------------------------------------------------------------------------------------------
// 0x004606ac  USER32.DLL::CheckMenuItem   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CheckMenuItem
DWORD __stdcall import_CheckMenuItem(HMENU hMenu,UINT uIDCheckItem,UINT uCheck)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004606ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = CheckMenuItem(hMenu,uIDCheckItem,uCheck);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004606b2  USER32.DLL::ClientToScreen   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::ClientToScreen
BOOL __stdcall import_ClientToScreen(HWND hWnd,LPPOINT lpPoint)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004606b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = ClientToScreen(hWnd,lpPoint);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004606b8  USER32.DLL::CloseClipboard   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CloseClipboard
BOOL __stdcall import_CloseClipboard(void)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004606b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = CloseClipboard();
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004606be  USER32.DLL::CopyIcon   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CopyIcon
HICON __stdcall import_CopyIcon(HICON hIcon)

{
  HICON hIcon2;
  
                    /* WARNING: Could not recover jumptable at 0x004606be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hIcon2 = CopyIcon(hIcon);
  return hIcon2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004606c4  USER32.DLL::CountClipboardFormats   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CountClipboardFormats
int __stdcall import_CountClipboardFormats(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004606c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CountClipboardFormats();
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004606ca  USER32.DLL::CreateDialogIndirectParamA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CreateDialogIndirectParamA
HWND __stdcall import_CreateDialogIndirectParamA(HINSTANCE hInstance,LPCDLGTEMPLATEA lpTemplate,HWND hWndParent,DLGPROC lpDialogFunc, LPARAM dwInitParam)

{
  HWND hWnd;
  
                    /* WARNING: Could not recover jumptable at 0x004606ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd = CreateDialogIndirectParamA(hInstance,lpTemplate,hWndParent,lpDialogFunc,dwInitParam);
  return hWnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x004606d0  USER32.DLL::CreateDialogParamA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CreateDialogParamA
HWND __stdcall import_CreateDialogParamA(HINSTANCE hInstance,LPCSTR lpTemplateName,HWND hWndParent,DLGPROC lpDialogFunc, LPARAM dwInitParam)

{
  HWND hWnd;
  
                    /* WARNING: Could not recover jumptable at 0x004606d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd = CreateDialogParamA(hInstance,lpTemplateName,hWndParent,lpDialogFunc,dwInitParam);
  return hWnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x004606d6  USER32.DLL::CreateMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CreateMenu
HMENU __stdcall import_CreateMenu(void)

{
  HMENU hMenu;
  
                    /* WARNING: Could not recover jumptable at 0x004606d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hMenu = CreateMenu();
  return hMenu;
}

// ----------------------------------------------------------------------------------------------------
// 0x004606dc  USER32.DLL::CreatePopupMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CreatePopupMenu
HMENU __stdcall import_CreatePopupMenu(void)

{
  HMENU hMenu;
  
                    /* WARNING: Could not recover jumptable at 0x004606dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hMenu = CreatePopupMenu();
  return hMenu;
}

// ----------------------------------------------------------------------------------------------------
// 0x004606e2  USER32.DLL::CreateWindowExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CreateWindowExA
HWND __stdcall import_CreateWindowExA(DWORD dwExStyle,LPCSTR lpClassName,LPCSTR lpWindowName,DWORD dwStyle,int X,int Y, int nWidth,int nHeight,HWND hWndParent,HMENU hMenu,HINSTANCE hInstance,LPVOID lpParam )

{
  HWND hWnd;
  
                    /* WARNING: Could not recover jumptable at 0x004606e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd = CreateWindowExA(dwExStyle,lpClassName,lpWindowName,dwStyle,X,Y,nWidth,nHeight,hWndParent,
                           hMenu,hInstance,lpParam);
  return hWnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x004606e8  USER32.DLL::DefWindowProcA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DefWindowProcA
LRESULT __stdcall import_DefWindowProcA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT lResult;
  
                    /* WARNING: Could not recover jumptable at 0x004606e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lResult = DefWindowProcA(hWnd,Msg,wParam,lParam);
  return lResult;
}

// ----------------------------------------------------------------------------------------------------
// 0x004606ee  USER32.DLL::DeferWindowPos   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DeferWindowPos
HDWP __stdcall import_DeferWindowPos(HDWP hWinPosInfo,HWND hWnd,HWND hWndInsertAfter,int x,int y,int cx,int cy,UINT uFlags )

{
  HDWP hDwp;
  
                    /* WARNING: Could not recover jumptable at 0x004606ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hDwp = DeferWindowPos(hWinPosInfo,hWnd,hWndInsertAfter,x,y,cx,cy,uFlags);
  return hDwp;
}

// ----------------------------------------------------------------------------------------------------
// 0x004606f4  USER32.DLL::DeleteMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DeleteMenu
BOOL __stdcall import_DeleteMenu(HMENU hMenu,UINT uPosition,UINT uFlags)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004606f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DeleteMenu(hMenu,uPosition,uFlags);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004606fa  USER32.DLL::DestroyCursor   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DestroyCursor
BOOL __stdcall import_DestroyCursor(HCURSOR hCursor)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004606fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DestroyCursor(hCursor);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460700  USER32.DLL::DestroyMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DestroyMenu
BOOL __stdcall import_DestroyMenu(HMENU hMenu)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DestroyMenu(hMenu);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460706  USER32.DLL::DestroyWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DestroyWindow
BOOL __stdcall import_DestroyWindow(HWND hWnd)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460706. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DestroyWindow(hWnd);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046070c  USER32.DLL::DialogBoxIndirectParamA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DialogBoxIndirectParamA
INT_PTR __stdcall import_DialogBoxIndirectParamA(HINSTANCE hInstance,LPCDLGTEMPLATEA hDialogTemplate,HWND hWndParent,DLGPROC lpDialogFunc, LPARAM dwInitParam)

{
  INT_PTR IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046070c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = DialogBoxIndirectParamA(hInstance,hDialogTemplate,hWndParent,lpDialogFunc,dwInitParam);
  return IVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460712  USER32.DLL::DialogBoxParamA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DialogBoxParamA
INT_PTR __stdcall import_DialogBoxParamA(HINSTANCE hInstance,LPCSTR lpTemplateName,HWND hWndParent,DLGPROC lpDialogFunc, LPARAM dwInitParam)

{
  INT_PTR dialogResult;
  
                    /* WARNING: Could not recover jumptable at 0x00460712. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dialogResult = DialogBoxParamA(hInstance,lpTemplateName,hWndParent,lpDialogFunc,dwInitParam);
  return dialogResult;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460718  USER32.DLL::DispatchMessageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DispatchMessageA
LRESULT __stdcall import_DispatchMessageA(MSG *lpMsg)

{
  LRESULT lResult;
  
                    /* WARNING: Could not recover jumptable at 0x00460718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lResult = DispatchMessageA(lpMsg);
  return lResult;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046071e  USER32.DLL::DrawEdge   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DrawEdge
BOOL __stdcall import_DrawEdge(HDC hdc,LPRECT qrc,UINT edge,UINT grfFlags)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x0046071e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DrawEdge(hdc,qrc,edge,grfFlags);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460724  USER32.DLL::DrawIcon   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DrawIcon
BOOL __stdcall import_DrawIcon(HDC hDC,int X,int Y,HICON hIcon)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DrawIcon(hDC,X,Y,hIcon);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046072a  USER32.DLL::DrawMenuBar   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DrawMenuBar
BOOL __stdcall import_DrawMenuBar(HWND hWnd)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x0046072a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DrawMenuBar(hWnd);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460730  USER32.DLL::DrawTextA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DrawTextA
int __stdcall import_DrawTextA(HDC hdc,LPCSTR lpchText,int cchText,LPRECT lprc,UINT format)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DrawTextA(hdc,lpchText,cchText,lprc,format);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460736  USER32.DLL::DrawTextExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DrawTextExA
int __stdcall import_DrawTextExA(HDC hdc,LPSTR lpchText,int cchText,LPRECT lprc,UINT format,LPDRAWTEXTPARAMS lpdtp)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460736. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DrawTextExA(hdc,lpchText,cchText,lprc,format,lpdtp);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046073c  USER32.DLL::EnableMenuItem   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::EnableMenuItem
BOOL __stdcall import_EnableMenuItem(HMENU hMenu,UINT uIDEnableItem,UINT uEnable)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x0046073c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = EnableMenuItem(hMenu,uIDEnableItem,uEnable);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460742  USER32.DLL::EnableScrollBar   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::EnableScrollBar
BOOL __stdcall import_EnableScrollBar(HWND hWnd,UINT wSBflags,UINT wArrows)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460742. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = EnableScrollBar(hWnd,wSBflags,wArrows);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460748  USER32.DLL::EnableWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::EnableWindow
BOOL __stdcall import_EnableWindow(HWND hWnd,BOOL bEnable)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = EnableWindow(hWnd,bEnable);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046074e  USER32.DLL::EndDeferWindowPos   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::EndDeferWindowPos
BOOL __stdcall import_EndDeferWindowPos(HDWP hWinPosInfo)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x0046074e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = EndDeferWindowPos(hWinPosInfo);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460754  USER32.DLL::EndDialog   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::EndDialog
BOOL __stdcall import_EndDialog(HWND hDlg,INT_PTR nResult)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = EndDialog(hDlg,nResult);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046075a  USER32.DLL::EndPaint   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::EndPaint
BOOL __stdcall import_EndPaint(HWND hWnd,PAINTSTRUCT *lpPaint)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x0046075a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = EndPaint(hWnd,lpPaint);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460760  USER32.DLL::EnumThreadWindows   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::EnumThreadWindows
BOOL __stdcall import_EnumThreadWindows(DWORD dwThreadId,WNDENUMPROC lpfn,LPARAM lParam)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = EnumThreadWindows(dwThreadId,lpfn,lParam);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460766  USER32.DLL::FindWindowA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::FindWindowA
HWND __stdcall import_FindWindowA(LPCSTR lpClassName,LPCSTR lpWindowName)

{
  HWND hWnd;
  
                    /* WARNING: Could not recover jumptable at 0x00460766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd = FindWindowA(lpClassName,lpWindowName);
  return hWnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046076c  USER32.DLL::FrameRect   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::FrameRect
int __stdcall import_FrameRect(HDC hDC,RECT *lprc,HBRUSH hbr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046076c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = FrameRect(hDC,lprc,hbr);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460772  USER32.DLL::GetActiveWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetActiveWindow
HWND __stdcall import_GetActiveWindow(void)

{
  HWND hWnd;
  
                    /* WARNING: Could not recover jumptable at 0x00460772. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd = GetActiveWindow();
  return hWnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460778  USER32.DLL::GetClassInfoA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetClassInfoA
BOOL __stdcall import_GetClassInfoA(HINSTANCE hInstance,LPCSTR lpClassName,LPWNDCLASSA lpWndClass)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetClassInfoA(hInstance,lpClassName,lpWndClass);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046077e  USER32.DLL::GetClassNameA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetClassNameA
int __stdcall import_GetClassNameA(HWND hWnd,LPSTR lpClassName,int nMaxCount)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046077e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetClassNameA(hWnd,lpClassName,nMaxCount);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460784  USER32.DLL::GetClientRect   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetClientRect
BOOL __stdcall import_GetClientRect(HWND hWnd,LPRECT lpRect)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetClientRect(hWnd,lpRect);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046078a  USER32.DLL::GetCursorPos   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetCursorPos
BOOL __stdcall import_GetCursorPos(LPPOINT lpPoint)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x0046078a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetCursorPos(lpPoint);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460790  USER32.DLL::GetDesktopWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetDesktopWindow
HWND __stdcall import_GetDesktopWindow(void)

{
  HWND hWnd;
  
                    /* WARNING: Could not recover jumptable at 0x00460790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd = GetDesktopWindow();
  return hWnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460796  USER32.DLL::GetDlgCtrlID   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetDlgCtrlID
int __stdcall import_GetDlgCtrlID(HWND hWnd)

{
  int ctrlId;
  
                    /* WARNING: Could not recover jumptable at 0x00460796. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ctrlId = GetDlgCtrlID(hWnd);
  return ctrlId;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046079c  USER32.DLL::GetDlgItem   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetDlgItem
HWND __stdcall import_GetDlgItem(HWND hDlg,int nIDDlgItem)

{
  HWND hWnd;
  
                    /* WARNING: Could not recover jumptable at 0x0046079c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd = GetDlgItem(hDlg,nIDDlgItem);
  return hWnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x004607a2  USER32.DLL::GetFocus   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetFocus
HWND __stdcall import_GetFocus(void)

{
  HWND hWnd;
  
                    /* WARNING: Could not recover jumptable at 0x004607a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd = GetFocus();
  return hWnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x004607a8  USER32.DLL::GetIconInfo   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetIconInfo
BOOL __stdcall import_GetIconInfo(HICON hIcon,PICONINFO piconinfo)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004607a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetIconInfo(hIcon,piconinfo);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004607ae  USER32.DLL::GetKeyState   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetKeyState
SHORT __stdcall import_GetKeyState(int nVirtKey)

{
  SHORT SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004607ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = GetKeyState(nVirtKey);
  return SVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004607b4  USER32.DLL::GetMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetMenu
HMENU __stdcall import_GetMenu(HWND hWnd)

{
  HMENU hMenu;
  
                    /* WARNING: Could not recover jumptable at 0x004607b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hMenu = GetMenu(hWnd);
  return hMenu;
}

// ----------------------------------------------------------------------------------------------------
// 0x004607ba  USER32.DLL::GetMenuItemCount   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetMenuItemCount
int __stdcall import_GetMenuItemCount(HMENU hMenu)

{
  int itemCount;
  
                    /* WARNING: Could not recover jumptable at 0x004607ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  itemCount = GetMenuItemCount(hMenu);
  return itemCount;
}

// ----------------------------------------------------------------------------------------------------
// 0x004607c0  USER32.DLL::GetMenuItemID   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetMenuItemID
UINT __stdcall import_GetMenuItemID(HMENU hMenu,int nPos)

{
  UINT itemId;
  
                    /* WARNING: Could not recover jumptable at 0x004607c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  itemId = GetMenuItemID(hMenu,nPos);
  return itemId;
}

// ----------------------------------------------------------------------------------------------------
// 0x004607c6  USER32.DLL::GetMenuState   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetMenuState
UINT __stdcall import_GetMenuState(HMENU hMenu,UINT uId,UINT uFlags)

{
  UINT menuState;
  
                    /* WARNING: Could not recover jumptable at 0x004607c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  menuState = GetMenuState(hMenu,uId,uFlags);
  return menuState;
}

// ----------------------------------------------------------------------------------------------------
// 0x004607cc  USER32.DLL::GetParent   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetParent
HWND __stdcall import_GetParent(HWND hWnd)

{
  HWND hWnd2;
  
                    /* WARNING: Could not recover jumptable at 0x004607cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd2 = GetParent(hWnd);
  return hWnd2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004607d2  USER32.DLL::GetScrollInfo   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetScrollInfo
BOOL __stdcall import_GetScrollInfo(HWND hwnd,int nBar,LPSCROLLINFO lpsi)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004607d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetScrollInfo(hwnd,nBar,lpsi);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004607d8  USER32.DLL::GetSubMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetSubMenu
HMENU __stdcall import_GetSubMenu(HMENU hMenu,int nPos)

{
  HMENU hMenu2;
  
                    /* WARNING: Could not recover jumptable at 0x004607d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hMenu2 = GetSubMenu(hMenu,nPos);
  return hMenu2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004607de  USER32.DLL::GetSysColor   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetSysColor
DWORD __stdcall import_GetSysColor(int nIndex)

{
  DWORD sysColor;
  
                    /* WARNING: Could not recover jumptable at 0x004607de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sysColor = GetSysColor(nIndex);
  return sysColor;
}

// ----------------------------------------------------------------------------------------------------
// 0x004607e4  USER32.DLL::GetSysColorBrush   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetSysColorBrush
HBRUSH __stdcall import_GetSysColorBrush(int nIndex)

{
  HBRUSH hBrush;
  
                    /* WARNING: Could not recover jumptable at 0x004607e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hBrush = GetSysColorBrush(nIndex);
  return hBrush;
}

// ----------------------------------------------------------------------------------------------------
// 0x004607ea  USER32.DLL::GetSystemMetrics   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetSystemMetrics
int __stdcall import_GetSystemMetrics(int nIndex)

{
  int metric;
  
                    /* WARNING: Could not recover jumptable at 0x004607ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  metric = GetSystemMetrics(nIndex);
  return metric;
}

// ----------------------------------------------------------------------------------------------------
// 0x004607f0  USER32.DLL::GetWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetWindow
HWND __stdcall import_GetWindow(HWND hWnd,UINT uCmd)

{
  HWND hWnd2;
  
                    /* WARNING: Could not recover jumptable at 0x004607f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd2 = GetWindow(hWnd,uCmd);
  return hWnd2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004607f6  USER32.DLL::GetWindowDC   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetWindowDC
HDC __stdcall import_GetWindowDC(HWND hWnd)

{
  HDC hdc;
  
                    /* WARNING: Could not recover jumptable at 0x004607f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hdc = GetWindowDC(hWnd);
  return hdc;
}

// ----------------------------------------------------------------------------------------------------
// 0x004607fc  USER32.DLL::GetWindowLongA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetWindowLongA
LONG __stdcall import_GetWindowLongA(HWND hWnd,int nIndex)

{
  LONG windowLong;
  
                    /* WARNING: Could not recover jumptable at 0x004607fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  windowLong = GetWindowLongA(hWnd,nIndex);
  return windowLong;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460802  USER32.DLL::GetWindowPlacement   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetWindowPlacement
BOOL __stdcall import_GetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460802. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetWindowPlacement(hWnd,lpwndpl);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460808  USER32.DLL::GetWindowRect   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetWindowRect
BOOL __stdcall import_GetWindowRect(HWND hWnd,LPRECT lpRect)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetWindowRect(hWnd,lpRect);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046080e  USER32.DLL::GetWindowTextA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetWindowTextA
int __stdcall import_GetWindowTextA(HWND hWnd,LPSTR lpString,int nMaxCount)

{
  int textLen;
  
                    /* WARNING: Could not recover jumptable at 0x0046080e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  textLen = GetWindowTextA(hWnd,lpString,nMaxCount);
  return textLen;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460814  USER32.DLL::GetWindowTextLengthA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetWindowTextLengthA
int __stdcall import_GetWindowTextLengthA(HWND hWnd)

{
  int textLen;
  
                    /* WARNING: Could not recover jumptable at 0x00460814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  textLen = GetWindowTextLengthA(hWnd);
  return textLen;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046081a  USER32.DLL::GetWindowThreadProcessId   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetWindowThreadProcessId
DWORD __stdcall import_GetWindowThreadProcessId(HWND hWnd,LPDWORD lpdwProcessId)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046081a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetWindowThreadProcessId(hWnd,lpdwProcessId);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460820  USER32.DLL::GrayStringA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GrayStringA
BOOL __stdcall import_GrayStringA(HDC hDC,HBRUSH hBrush,GRAYSTRINGPROC lpOutputFunc,LPARAM lpData,int nCount,int X,int Y, int nWidth,int nHeight)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GrayStringA(hDC,hBrush,lpOutputFunc,lpData,nCount,X,Y,nWidth,nHeight);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460826  USER32.DLL::InsertMenuA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::InsertMenuA
BOOL __stdcall import_InsertMenuA(HMENU hMenu,UINT uPosition,UINT uFlags,UINT_PTR uIDNewItem,LPCSTR lpNewItem)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460826. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = InsertMenuA(hMenu,uPosition,uFlags,uIDNewItem,lpNewItem);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046082c  USER32.DLL::InvalidateRect   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::InvalidateRect
BOOL __stdcall import_InvalidateRect(HWND hWnd,RECT *lpRect,BOOL bErase)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x0046082c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = InvalidateRect(hWnd,lpRect,bErase);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460832  USER32.DLL::IsChild   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsChild
BOOL __stdcall import_IsChild(HWND hWndParent,HWND hWnd)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = IsChild(hWndParent,hWnd);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460838  USER32.DLL::IsClipboardFormatAvailable   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsClipboardFormatAvailable
BOOL __stdcall import_IsClipboardFormatAvailable(UINT format)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = IsClipboardFormatAvailable(format);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046083e  USER32.DLL::IsDialogMessageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsDialogMessageA
BOOL __stdcall import_IsDialogMessageA(HWND hDlg,LPMSG lpMsg)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x0046083e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = IsDialogMessageA(hDlg,lpMsg);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460844  USER32.DLL::IsIconic   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsIconic
BOOL __stdcall import_IsIconic(HWND hWnd)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = IsIconic(hWnd);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046084a  USER32.DLL::IsMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsMenu
BOOL __stdcall import_IsMenu(HMENU hMenu)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x0046084a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = IsMenu(hMenu);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460850  USER32.DLL::IsWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsWindow
BOOL __stdcall import_IsWindow(HWND hWnd)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = IsWindow(hWnd);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460856  USER32.DLL::IsWindowEnabled   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsWindowEnabled
BOOL __stdcall import_IsWindowEnabled(HWND hWnd)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460856. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = IsWindowEnabled(hWnd);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046085c  USER32.DLL::IsWindowVisible   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsWindowVisible
BOOL __stdcall import_IsWindowVisible(HWND hWnd)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x0046085c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = IsWindowVisible(hWnd);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460862  USER32.DLL::IsZoomed   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsZoomed
BOOL __stdcall import_IsZoomed(HWND hWnd)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460862. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = IsZoomed(hWnd);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460868  USER32.DLL::KillTimer   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::KillTimer
BOOL __stdcall import_KillTimer(HWND hWnd,UINT_PTR uIDEvent)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = KillTimer(hWnd,uIDEvent);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046086e  USER32.DLL::LoadAcceleratorsA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::LoadAcceleratorsA
HACCEL __stdcall import_LoadAcceleratorsA(HINSTANCE hInstance,LPCSTR lpTableName)

{
  HACCEL hAccel;
  
                    /* WARNING: Could not recover jumptable at 0x0046086e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hAccel = LoadAcceleratorsA(hInstance,lpTableName);
  return hAccel;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460874  USER32.DLL::LoadCursorA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::LoadCursorA
HCURSOR __stdcall import_LoadCursorA(HINSTANCE hInstance,LPCSTR lpCursorName)

{
  HCURSOR hCursor;
  
                    /* WARNING: Could not recover jumptable at 0x00460874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hCursor = LoadCursorA(hInstance,lpCursorName);
  return hCursor;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046087a  USER32.DLL::LoadIconA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::LoadIconA
HICON __stdcall import_LoadIconA(HINSTANCE hInstance,LPCSTR lpIconName)

{
  HICON hIcon;
  
                    /* WARNING: Could not recover jumptable at 0x0046087a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hIcon = LoadIconA(hInstance,lpIconName);
  return hIcon;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460880  USER32.DLL::LoadImageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::LoadImageA
HANDLE __stdcall import_LoadImageA(HINSTANCE hInst,LPCSTR name,UINT type,int cx,int cy,UINT fuLoad)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LoadImageA(hInst,name,type,cx,cy,fuLoad);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460886  USER32.DLL::LoadMenuA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::LoadMenuA
HMENU __stdcall import_LoadMenuA(HINSTANCE hInstance,LPCSTR lpMenuName)

{
  HMENU hMenu;
  
                    /* WARNING: Could not recover jumptable at 0x00460886. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hMenu = LoadMenuA(hInstance,lpMenuName);
  return hMenu;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046088c  USER32.DLL::MapWindowPoints   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::MapWindowPoints
int __stdcall import_MapWindowPoints(HWND hWndFrom,HWND hWndTo,LPPOINT lpPoints,UINT cPoints)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046088c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MapWindowPoints(hWndFrom,hWndTo,lpPoints,cPoints);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460892  USER32.DLL::MessageBeep   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::MessageBeep
BOOL __stdcall import_MessageBeep(UINT uType)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460892. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = MessageBeep(uType);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460898  USER32.DLL::MessageBoxA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::MessageBoxA
int __stdcall import_MessageBoxA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType)

{
  int choice;
  
                    /* WARNING: Could not recover jumptable at 0x00460898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  choice = MessageBoxA(hWnd,lpText,lpCaption,uType);
  return choice;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046089e  USER32.DLL::MessageBoxExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::MessageBoxExA
int __stdcall import_MessageBoxExA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType,WORD wLanguageId)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046089e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MessageBoxExA(hWnd,lpText,lpCaption,uType,wLanguageId);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004608a4  USER32.DLL::ModifyMenuA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::ModifyMenuA
BOOL __stdcall import_ModifyMenuA(HMENU hMnu,UINT uPosition,UINT uFlags,UINT_PTR uIDNewItem,LPCSTR lpNewItem)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004608a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = ModifyMenuA(hMnu,uPosition,uFlags,uIDNewItem,lpNewItem);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004608aa  USER32.DLL::MsgWaitForMultipleObjects   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::MsgWaitForMultipleObjects
DWORD __stdcall import_MsgWaitForMultipleObjects(DWORD nCount,HANDLE *pHandles,BOOL fWaitAll,DWORD dwMilliseconds,DWORD dwWakeMask)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004608aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = MsgWaitForMultipleObjects(nCount,pHandles,fWaitAll,dwMilliseconds,dwWakeMask);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004608b0  USER32.DLL::OpenClipboard   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::OpenClipboard
BOOL __stdcall import_OpenClipboard(HWND hWndNewOwner)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004608b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = OpenClipboard(hWndNewOwner);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004608b6  USER32.DLL::PeekMessageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::PeekMessageA
BOOL __stdcall import_PeekMessageA(LPMSG lpMsg,HWND hWnd,UINT wMsgFilterMin,UINT wMsgFilterMax,UINT wRemoveMsg)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004608b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = PeekMessageA(lpMsg,hWnd,wMsgFilterMin,wMsgFilterMax,wRemoveMsg);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004608bc  USER32.DLL::PostMessageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::PostMessageA
BOOL __stdcall import_PostMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004608bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = PostMessageA(hWnd,Msg,wParam,lParam);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004608c2  USER32.DLL::PostQuitMessage   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::PostQuitMessage
void __stdcall import_PostQuitMessage(int nExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x004608c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostQuitMessage(nExitCode);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004608c8  USER32.DLL::RegisterClassA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::RegisterClassA
ATOM __stdcall import_RegisterClassA(WNDCLASSA *lpWndClass)

{
  ATOM atom;
  
                    /* WARNING: Could not recover jumptable at 0x004608c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  atom = RegisterClassA(lpWndClass);
  return atom;
}

// ----------------------------------------------------------------------------------------------------
// 0x004608ce  USER32.DLL::RegisterWindowMessageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::RegisterWindowMessageA
UINT __stdcall import_RegisterWindowMessageA(LPCSTR lpString)

{
  UINT msgId;
  
                    /* WARNING: Could not recover jumptable at 0x004608ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  msgId = RegisterWindowMessageA(lpString);
  return msgId;
}

// ----------------------------------------------------------------------------------------------------
// 0x004608d4  USER32.DLL::ReleaseCapture   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::ReleaseCapture
BOOL __stdcall import_ReleaseCapture(void)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004608d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = ReleaseCapture();
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004608da  USER32.DLL::ReleaseDC   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::ReleaseDC
int __stdcall import_ReleaseDC(HWND hWnd,HDC hDC)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004608da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ReleaseDC(hWnd,hDC);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004608e0  USER32.DLL::ScreenToClient   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::ScreenToClient
BOOL __stdcall import_ScreenToClient(HWND hWnd,LPPOINT lpPoint)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004608e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = ScreenToClient(hWnd,lpPoint);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004608e6  USER32.DLL::ScrollWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::ScrollWindow
BOOL __stdcall import_ScrollWindow(HWND hWnd,int XAmount,int YAmount,RECT *lpRect,RECT *lpClipRect)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004608e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = ScrollWindow(hWnd,XAmount,YAmount,lpRect,lpClipRect);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004608ec  USER32.DLL::SendDlgItemMessageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SendDlgItemMessageA
LRESULT __stdcall import_SendDlgItemMessageA(HWND hDlg,int nIDDlgItem,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT lResult;
  
                    /* WARNING: Could not recover jumptable at 0x004608ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lResult = SendDlgItemMessageA(hDlg,nIDDlgItem,Msg,wParam,lParam);
  return lResult;
}

// ----------------------------------------------------------------------------------------------------
// 0x004608f2  USER32.DLL::SendMessageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SendMessageA
LRESULT __stdcall import_SendMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT lResult;
  
                    /* WARNING: Could not recover jumptable at 0x004608f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lResult = SendMessageA(hWnd,Msg,wParam,lParam);
  return lResult;
}

// ----------------------------------------------------------------------------------------------------
// 0x004608f8  USER32.DLL::SetCapture   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetCapture
HWND __stdcall import_SetCapture(HWND hWnd)

{
  HWND hWnd2;
  
                    /* WARNING: Could not recover jumptable at 0x004608f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd2 = SetCapture(hWnd);
  return hWnd2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004608fe  USER32.DLL::SetCursor   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetCursor
HCURSOR __stdcall import_SetCursor(HCURSOR hCursor)

{
  HCURSOR hCursor2;
  
                    /* WARNING: Could not recover jumptable at 0x004608fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hCursor2 = SetCursor(hCursor);
  return hCursor2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460904  USER32.DLL::SetFocus   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetFocus
HWND __stdcall import_SetFocus(HWND hWnd)

{
  HWND hWnd2;
  
                    /* WARNING: Could not recover jumptable at 0x00460904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd2 = SetFocus(hWnd);
  return hWnd2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046090a  USER32.DLL::SetMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetMenu
BOOL __stdcall import_SetMenu(HWND hWnd,HMENU hMenu)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x0046090a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SetMenu(hWnd,hMenu);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460910  USER32.DLL::SetParent   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetParent
HWND __stdcall import_SetParent(HWND hWndChild,HWND hWndNewParent)

{
  HWND hWnd;
  
                    /* WARNING: Could not recover jumptable at 0x00460910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd = SetParent(hWndChild,hWndNewParent);
  return hWnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460916  USER32.DLL::SetScrollInfo   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetScrollInfo
int __stdcall import_SetScrollInfo(HWND hwnd,int nBar,LPCSCROLLINFO lpsi,BOOL redraw)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460916. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetScrollInfo(hwnd,nBar,lpsi,redraw);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046091c  USER32.DLL::SetTimer   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetTimer
UINT_PTR __stdcall import_SetTimer(HWND hWnd,UINT_PTR nIDEvent,UINT uElapse,TIMERPROC lpTimerFunc)

{
  UINT_PTR timerId;
  
                    /* WARNING: Could not recover jumptable at 0x0046091c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  timerId = SetTimer(hWnd,nIDEvent,uElapse,lpTimerFunc);
  return timerId;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460922  USER32.DLL::SetWindowLongA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetWindowLongA
LONG __stdcall import_SetWindowLongA(HWND hWnd,int nIndex,LONG dwNewLong)

{
  LONG prevWindowLong;
  
                    /* WARNING: Could not recover jumptable at 0x00460922. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  prevWindowLong = SetWindowLongA(hWnd,nIndex,dwNewLong);
  return prevWindowLong;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460928  USER32.DLL::SetWindowPlacement   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetWindowPlacement
BOOL __stdcall import_SetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SetWindowPlacement(hWnd,lpwndpl);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046092e  USER32.DLL::SetWindowPos   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetWindowPos
BOOL __stdcall import_SetWindowPos(HWND hWnd,HWND hWndInsertAfter,int X,int Y,int cx,int cy,UINT uFlags)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x0046092e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460934  USER32.DLL::SetWindowTextA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetWindowTextA
BOOL __stdcall import_SetWindowTextA(HWND hWnd,LPCSTR lpString)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SetWindowTextA(hWnd,lpString);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046093a  USER32.DLL::ShowScrollBar   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::ShowScrollBar
BOOL __stdcall import_ShowScrollBar(HWND hWnd,int wBar,BOOL bShow)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x0046093a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = ShowScrollBar(hWnd,wBar,bShow);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460940  USER32.DLL::ShowWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::ShowWindow
BOOL __stdcall import_ShowWindow(HWND hWnd,int nCmdShow)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = ShowWindow(hWnd,nCmdShow);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460946  USER32.DLL::SystemParametersInfoA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SystemParametersInfoA
BOOL __stdcall import_SystemParametersInfoA(UINT uiAction,UINT uiParam,PVOID pvParam,UINT fWinIni)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SystemParametersInfoA(uiAction,uiParam,pvParam,fWinIni);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046094c  USER32.DLL::TabbedTextOutA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::TabbedTextOutA
LONG __stdcall import_TabbedTextOutA(HDC hdc,int x,int y,LPCSTR lpString,int chCount,int nTabPositions, INT *lpnTabStopPositions,int nTabOrigin)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046094c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = TabbedTextOutA(hdc,x,y,lpString,chCount,nTabPositions,lpnTabStopPositions,nTabOrigin);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460952  USER32.DLL::TrackPopupMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::TrackPopupMenu
BOOL __stdcall import_TrackPopupMenu(HMENU hMenu,UINT uFlags,int x,int y,int nReserved,HWND hWnd,RECT *prcRect)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = TrackPopupMenu(hMenu,uFlags,x,y,nReserved,hWnd,prcRect);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460958  USER32.DLL::TranslateAcceleratorA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::TranslateAcceleratorA
int __stdcall import_TranslateAcceleratorA(HWND hWnd,HACCEL hAccTable,LPMSG lpMsg)

{
  int translated;
  
                    /* WARNING: Could not recover jumptable at 0x00460958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  translated = TranslateAcceleratorA(hWnd,hAccTable,lpMsg);
  return translated;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046095e  USER32.DLL::TranslateMDISysAccel   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::TranslateMDISysAccel
BOOL __stdcall import_TranslateMDISysAccel(HWND hWndClient,LPMSG lpMsg)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x0046095e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = TranslateMDISysAccel(hWndClient,lpMsg);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460964  USER32.DLL::TranslateMessage   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::TranslateMessage
BOOL __stdcall import_TranslateMessage(MSG *lpMsg)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = TranslateMessage(lpMsg);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046096a  USER32.DLL::UnregisterClassA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::UnregisterClassA
BOOL __stdcall import_UnregisterClassA(LPCSTR lpClassName,HINSTANCE hInstance)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x0046096a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = UnregisterClassA(lpClassName,hInstance);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460970  USER32.DLL::UpdateWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::UpdateWindow
BOOL __stdcall import_UpdateWindow(HWND hWnd)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = UpdateWindow(hWnd);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460976  USER32.DLL::WaitMessage   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::WaitMessage
BOOL __stdcall import_WaitMessage(void)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x00460976. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = WaitMessage();
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046097c  USER32.DLL::WindowFromPoint   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::WindowFromPoint
HWND __stdcall import_WindowFromPoint(POINT Point)

{
  HWND hWnd;
  
                    /* WARNING: Could not recover jumptable at 0x0046097c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd = WindowFromPoint(Point);
  return hWnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460982  USER32.DLL::wsprintfA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::wsprintfA
int __cdecl import_wsprintfA(LPSTR param_1,LPCSTR param_2,...)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = wsprintfA(param_1,param_2);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460988  USER32.DLL::GetSystemMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetSystemMenu
HMENU __stdcall import_GetSystemMenu(HWND hWnd,BOOL bRevert)

{
  HMENU hMenu;
  
                    /* WARNING: Could not recover jumptable at 0x00460988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hMenu = GetSystemMenu(hWnd,bRevert);
  return hMenu;
}

} // namespace tea
