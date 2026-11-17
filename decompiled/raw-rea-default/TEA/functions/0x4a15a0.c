// rea decompile_all
// name: FUN_004a15a0
// address: 0x4a15a0
// body: available
// range: 0x4a15a0-0x4a1e45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_004a15a0(void)

{
  undefined *puVar1;
  
  if (DAT_00509dc4 == '\0') {
    _DAT_00509dc0 = 0;
    DAT_00509dc4 = '\x01';
  }
  if (DAT_00509dcc == '\0') {
    _DAT_00509dc8 = 1;
    DAT_00509dcc = '\x01';
  }
  if (DAT_00509dd4 == '\0') {
    _DAT_00509dd0 = 2;
    DAT_00509dd4 = '\x01';
  }
  if (DAT_00509ddc == '\0') {
    _DAT_00509dd8 = 3;
    DAT_00509ddc = '\x01';
  }
  if (DAT_00509de4 == '\0') {
    _DAT_00509de0 = 4;
    DAT_00509de4 = '\x01';
  }
  if (DAT_00509dec == '\0') {
    DAT_00509de8 = 5;
    DAT_00509dec = '\x01';
  }
  if (DAT_00509df4 == '\0') {
    DAT_00509df0 = 6;
    DAT_00509df4 = '\x01';
  }
  if (DAT_00509dfc == '\0') {
    DAT_00509df8 = 7;
    DAT_00509dfc = '\x01';
  }
  if (DAT_00509e04 == '\0') {
    DAT_00509e00 = 8;
    DAT_00509e04 = '\x01';
  }
  if (DAT_00509e0c == '\0') {
    _DAT_00509e08 = 9;
    DAT_00509e0c = '\x01';
  }
  if (DAT_00509e14 == '\0') {
    _DAT_00509e10 = 10;
    DAT_00509e14 = '\x01';
  }
  if (DAT_00509e1c == '\0') {
    _DAT_00509e18 = 0xb;
    DAT_00509e1c = '\x01';
  }
  if (DAT_00509e24 == '\0') {
    _DAT_00509e20 = 0xc;
    DAT_00509e24 = '\x01';
  }
  if (DAT_00509e2c == '\0') {
    _DAT_00509e28 = 0xd;
    DAT_00509e2c = '\x01';
  }
  if (DAT_00509e34 == '\0') {
    _DAT_00509e30 = 0xe;
    DAT_00509e34 = '\x01';
  }
  if (DAT_00509e3c == '\0') {
    _DAT_00509e38 = 0xf;
    DAT_00509e3c = '\x01';
  }
  if (DAT_00509e44 == '\0') {
    _DAT_00509e40 = 0x10;
    DAT_00509e44 = '\x01';
  }
  if (DAT_00509e4c == '\0') {
    _DAT_00509e48 = 0x11;
    DAT_00509e4c = '\x01';
  }
  if (DAT_00509e54 == '\0') {
    _DAT_00509e50 = 0x12;
    DAT_00509e54 = '\x01';
  }
  if (DAT_00509e5c == '\0') {
    _DAT_00509e58 = 0x13;
    DAT_00509e5c = '\x01';
  }
  if (DAT_00509e64 == '\0') {
    DAT_00509e60 = 0x14;
    DAT_00509e64 = '\x01';
  }
  if (DAT_00509e6c == '\0') {
    DAT_00509e68 = 0x15;
    DAT_00509e6c = '\x01';
  }
  if (DAT_00509e74 == '\0') {
    _DAT_00509e70 = 0x16;
    DAT_00509e74 = '\x01';
  }
  if (DAT_00509e7c == '\0') {
    _DAT_00509e78 = 0x17;
    DAT_00509e7c = '\x01';
  }
  if (DAT_00509e84 == '\0') {
    _DAT_00509e80 = 0x18;
    DAT_00509e84 = '\x01';
  }
  if (DAT_00509e8c == '\0') {
    _DAT_00509e88 = 0x19;
    DAT_00509e8c = '\x01';
  }
  if (DAT_00509e94 == '\0') {
    _DAT_00509e90 = 0x1a;
    DAT_00509e94 = '\x01';
  }
  if (DAT_00509e9c == '\0') {
    _DAT_00509e98 = 0x1b;
    DAT_00509e9c = '\x01';
  }
  if (DAT_00509ea4 == '\0') {
    _DAT_00509ea0 = 0x1c;
    DAT_00509ea4 = '\x01';
  }
  if (DAT_00509eac == '\0') {
    _DAT_00509ea8 = 0x1d;
    DAT_00509eac = '\x01';
  }
  if (DAT_00509eb4 == '\0') {
    _DAT_00509eb0 = 0x1e;
    DAT_00509eb4 = '\x01';
  }
  if (DAT_00509ebc == '\0') {
    _DAT_00509eb8 = 0x1f;
    DAT_00509ebc = '\x01';
  }
  if (DAT_00509ec4 == '\0') {
    DAT_00509ec0 = 0x20;
    DAT_00509ec4 = '\x01';
  }
  if (DAT_00509ecc == '\0') {
    DAT_00509ec8 = 0x21;
    DAT_00509ecc = '\x01';
  }
  if (DAT_00509ed4 == '\0') {
    _DAT_00509ed0 = 0x22;
    DAT_00509ed4 = '\x01';
  }
  if (DAT_00509edc == '\0') {
    _DAT_00509ed8 = 0x23;
    DAT_00509edc = '\x01';
  }
  if (DAT_00509ee4 == '\0') {
    _DAT_00509ee0 = 0x24;
    DAT_00509ee4 = '\x01';
  }
  if (DAT_00509eec == '\0') {
    _DAT_00509ee8 = 0x25;
    DAT_00509eec = '\x01';
  }
  if (DAT_00509ef4 == '\0') {
    _DAT_00509ef0 = 0x26;
    DAT_00509ef4 = '\x01';
  }
  if (DAT_00509efc == '\0') {
    _DAT_00509ef8 = 0x27;
    DAT_00509efc = '\x01';
  }
  if (DAT_00509f04 == '\0') {
    _DAT_00509f00 = 0x28;
    DAT_00509f04 = '\x01';
  }
  if (DAT_00509f0c == '\0') {
    _DAT_00509f08 = 0x29;
    DAT_00509f0c = '\x01';
  }
  if (DAT_00509f14 == '\0') {
    _DAT_00509f10 = 0x2a;
    DAT_00509f14 = '\x01';
  }
  if (DAT_00509f1c == '\0') {
    _DAT_00509f18 = 0x2b;
    DAT_00509f1c = '\x01';
  }
  if (DAT_00509f24 == '\0') {
    _DAT_00509f20 = 0x2c;
    DAT_00509f24 = '\x01';
  }
  if (DAT_00509f2c == '\0') {
    _DAT_00509f28 = 0x2d;
    DAT_00509f2c = '\x01';
  }
  if (DAT_00509f34 == '\0') {
    _DAT_00509f30 = 0x2e;
    DAT_00509f34 = '\x01';
  }
  if (DAT_00509f3c == '\0') {
    _DAT_00509f38 = 0x2f;
    DAT_00509f3c = '\x01';
  }
  if (DAT_00509f44 == '\0') {
    _DAT_00509f40 = 0x30;
    DAT_00509f44 = '\x01';
  }
  if (DAT_00509f4c == '\0') {
    DAT_00509f48 = 0x31;
    DAT_00509f4c = '\x01';
  }
  if (DAT_00509f54 == '\0') {
    DAT_00509f50 = 0x32;
    DAT_00509f54 = '\x01';
  }
  if (DAT_00509f5c == '\0') {
    _DAT_00509f58 = 0x33;
    DAT_00509f5c = '\x01';
  }
  if (DAT_00509f64 == '\0') {
    _DAT_00509f60 = 0x34;
    DAT_00509f64 = '\x01';
  }
  if (DAT_00509f6c == '\0') {
    _DAT_00509f68 = 0x35;
    DAT_00509f6c = '\x01';
  }
  if (DAT_00509f74 == '\0') {
    _DAT_00509f70 = 0x36;
    DAT_00509f74 = '\x01';
  }
  if (DAT_00509f7c == '\0') {
    _DAT_00509f78 = 0x37;
    DAT_00509f7c = '\x01';
  }
  if (DAT_00509f84 == '\0') {
    _DAT_00509f80 = 0x38;
    DAT_00509f84 = '\x01';
  }
  if (DAT_00509f8c == '\0') {
    _DAT_00509f88 = 0x39;
    DAT_00509f8c = '\x01';
  }
  if (DAT_00509f94 == '\0') {
    _DAT_00509f90 = 0x3a;
    DAT_00509f94 = '\x01';
  }
  if (DAT_00509f9c == '\0') {
    _DAT_00509f98 = 0x3b;
    DAT_00509f9c = '\x01';
  }
  if (DAT_00509fa4 == '\0') {
    _DAT_00509fa0 = 0x3c;
    DAT_00509fa4 = '\x01';
  }
  if (DAT_00509fac == '\0') {
    _DAT_00509fa8 = 0x3d;
    DAT_00509fac = '\x01';
  }
  if (DAT_00509fb4 == '\0') {
    _DAT_00509fb0 = 0x3e;
    DAT_00509fb4 = '\x01';
  }
  if (DAT_00509fbc == '\0') {
    _DAT_00509fb8 = 0x3f;
    DAT_00509fbc = '\x01';
  }
  if (DAT_00509fc4 == '\0') {
    _DAT_00509fc0 = 0x40;
    DAT_00509fc4 = '\x01';
  }
  if (DAT_00509fcc == '\0') {
    _DAT_00509fc8 = 0x41;
    DAT_00509fcc = '\x01';
  }
  if (DAT_00509fd4 == '\0') {
    _DAT_00509fd0 = 0x42;
    DAT_00509fd4 = '\x01';
  }
  if (DAT_00509fdc == '\0') {
    _DAT_00509fd8 = 0x43;
    DAT_00509fdc = '\x01';
  }
  if (DAT_00509fe4 == '\0') {
    _DAT_00509fe0 = 0x44;
    DAT_00509fe4 = '\x01';
  }
  if (DAT_00509fec == '\0') {
    _DAT_00509fe8 = 0x45;
    DAT_00509fec = '\x01';
  }
  if (DAT_00509ff4 == '\0') {
    _DAT_00509ff0 = 0x46;
    DAT_00509ff4 = '\x01';
  }
  if (DAT_00509ffc == '\0') {
    _DAT_00509ff8 = 0x47;
    DAT_00509ffc = '\x01';
  }
  if (DAT_0050a004 == '\0') {
    _DAT_0050a000 = 0x48;
    DAT_0050a004 = '\x01';
  }
  if (DAT_0050a00c == '\0') {
    _DAT_0050a008 = 0x49;
    DAT_0050a00c = '\x01';
  }
  if (DAT_0050a014 == '\0') {
    _DAT_0050a010 = 0x4a;
    DAT_0050a014 = '\x01';
  }
  if (DAT_0050a01c == '\0') {
    _DAT_0050a018 = 0x4b;
    DAT_0050a01c = '\x01';
  }
  if (DAT_0050a024 == '\0') {
    _DAT_0050a020 = 0x4c;
    DAT_0050a024 = '\x01';
  }
  if (DAT_0050a02c == '\0') {
    _DAT_0050a028 = 0x4d;
    DAT_0050a02c = '\x01';
  }
  if (DAT_0050a034 == '\0') {
    _DAT_0050a030 = 0x4e;
    DAT_0050a034 = '\x01';
  }
  if (DAT_0050a03c == '\0') {
    _DAT_0050a038 = 0x4f;
    DAT_0050a03c = '\x01';
  }
  if (DAT_0050a044 == '\0') {
    _DAT_0050a040 = 0x50;
    DAT_0050a044 = '\x01';
  }
  if (DAT_0050a04c == '\0') {
    _DAT_0050a048 = 0x51;
    DAT_0050a04c = '\x01';
  }
  if (DAT_0050a054 == '\0') {
    puVar1 = FUN_0048751c();
    if ((*(uint *)(puVar1 + 4) < 5) &&
       ((puVar1 = FUN_0048751c(), *(int *)(puVar1 + 0x10) != 2 ||
        (puVar1 = FUN_0048751c(), *(uint *)(puVar1 + 4) < 4)))) {
      _DAT_0050a050 = 0x4c;
    }
    else {
      _DAT_0050a050 = 0x53;
    }
    DAT_0050a054 = 1;
    return;
  }
  return;
}

