# TSMerge.exe — classes

Recovered from Borland C++ RTTI (type descriptors, vtables) and OWL response tables. Sizes, bases, destructors and vtable contents are read directly from tables in the binary.

Member lists are **partial**: RTTI records only members that need destruction (objects with destructors), with their offsets. Virtual slots are named `vfN` unless a better name was established; response-table handlers are named from the message or command id.

These are descriptions, not compilable class definitions — in the code each class name is a namespace holding its functions.

## Application classes (8)

### Abandon_exception

```cpp
// sizeof 4 (0x4)  rtti 0x004097d4  vptr at +0x0  destructor 0x0040aae0
class Abandon_exception : public std::exception {
    /* +0x000 */ // base subobject std::exception
    // vtable at 0x00462d8c (2 slots)
    //   [ 0] 0x0040aae0  Abandon_exception::~Abandon_exception
    //   [ 1] 0x0040ad10  Abandon_exception::vf1
};
```

### DMApplication

```cpp
// sizeof 119 (0x77)  rtti 0x00404320  vptr at +0x1b  destructor 0x00404384
class DMApplication : public OWL::TApplication, public virtual OWL::TEventHandler {
    /* +0x000 */ // base subobject OWL::TApplication
    // vtable at 0x00461f40 (19 slots)
    //   [ 0] 0x00404384  DMApplication::~DMApplication
    //   [ 1] 0x00430850  OWL::TApplication::vf1
    //   [ 2] 0x0042f1c0  OWL::TApplication::vf2
    //   [ 3] 0x0042f648  OWL::TApplication::vf3
    //   [ 4] 0x0042fc08  OWL::TApplication::vf4
    //   [ 5] 0x00430344  OWL::TApplication::vf5
    //   [ 6] 0x00430368  OWL::TApplication::vf6
    //   [ 7] 0x00430424  OWL::TApplication::vf7
    //   [ 8] 0x0043050c  OWL::TApplication::vf8
    //   [ 9] 0x004049d4  OWL::TApplication::vf9
    //   [10] 0x004308c8  OWL::TApplication::vf10
    //   [11] 0x004307ec  OWL::TApplication::Find
    //   [12] 0x0042ef1c  OWL::TApplication::vf12
    //   [13] 0x004049dc  OWL::TApplication::vf13
    //   [14] 0x004305f0  OWL::TApplication::vf14
    //   [15] 0x0042efb0  OWL::TApplication::vf15
    //   [16] 0x0042efb8  OWL::TApplication::vf16
    //   [17] 0x00404128  DMApplication::vf17
    //   [18] 0x0042f078  OWL::TApplication::vf18
};
```

### DMDialog

```cpp
// sizeof 3792 (0xed0)  rtti 0x004047f4  vptr at +0xc  destructor 0x00404aa8
class DMDialog : public OWL::TDialog, public MergeClient, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TDialog
    /* +0x018 */ // base subobject MergeClient
    /* +0x020 */ OWL::TRadioButton m_20;
    /* +0x0d0 */ OWL::TRadioButton m_d0;
    /* +0x180 */ OWL::TRadioButton m_180;
    /* +0x230 */ OWL::TRadioButton m_230;
    /* +0x2e0 */ OWL::TRadioButton m_2e0;
    /* +0x390 */ OWL::TRadioButton m_390;
    /* +0x440 */ OWL::TRadioButton m_440;
    /* +0x4f0 */ OWL::TRadioButton m_4f0;
    /* +0x5a0 */ OWL::TRadioButton m_5a0;
    /* +0x650 */ OWL::TRadioButton m_650;
    /* +0x700 */ OWL::TEdit m_700;
    /* +0x7b2 */ OWL::TEdit m_7b2;
    /* +0x864 */ OWL::TEdit m_864;
    /* +0x918 */ DMProgressBar m_918;
    /* +0x9cc */ OWL::TStatic m_9cc;
    /* +0xa7a */ OWL::TButton m_a7a;
    /* +0xb26 */ OWL::TButton m_b26;
    /* +0xbd2 */ OWL::TButton m_bd2;
    /* +0xc7e */ OWL::TButton m_c7e;
    /* +0xd2a */ OWL::TButton m_d2a;
    /* +0xdf0 */ TSMergeProfile m_df0;
    // vtable at 0x00462024 (18 slots)
    //   [ 0] 0x00404aa8  DMDialog::~DMDialog
    //   [ 1] 0x00434b04  OWL::TDialog::vf1
    //   [ 2] 0x00434ff4  OWL::TDialog::vf2
    //   [ 3] 0x00434cd8  OWL::TDialog::vf3
    //   [ 4] 0x00434d50  OWL::TDialog::vf4
    //   [ 5] 0x00434dcc  OWL::TDialog::vf5
    //   [ 6] 0x00434e2c  OWL::TDialog::vf6
    //   [ 7] 0x004348d4  OWL::TDialog::vf7
    //   [ 8] 0x00435068  OWL::TDialog::vf8
    //   [ 9] 0x004350c0  OWL::TDialog::vf9
    //   [10] 0x00435388  OWL::TDialog::vf10
    //   [11] 0x00401d58  DMDialog::vf11
    //   [12] 0x00434968  OWL::TDialog::vf12
    //   [13] 0x00434988  OWL::TDialog::vf13
    //   [14] 0x00401678  DMDialog::Find
    //   [15] 0x00401b04  DMDialog::vf15
    //   [16] 0x00401be0  DMDialog::vf16
    //   [17] 0x00401ca8  DMDialog::vf17
    // response table at 0x00461838 (17 entries)
    //   WM_CLOSE                                     -> 0x004031e4  DMDialog::EvClose
    //   EV_COMMAND(112)                              -> 0x00403dd4  DMDialog::Cmd112
    //   EV_COMMAND(104)                              -> 0x00403df4  DMDialog::Cmd104
    //   EV_COMMAND(120)                              -> 0x00403e14  DMDialog::Cmd120
    //   EV_COMMAND(101)                              -> 0x00403298  DMDialog::Cmd101
    //   EV_COMMAND(106)                              -> 0x00403540  DMDialog::Cmd106
    //   EV_COMMAND(122)                              -> 0x00403698  DMDialog::Cmd122
    //   EV_COMMAND(108)                              -> 0x00403784  DMDialog::CmShared_403784
    //   EV_COMMAND(114)                              -> 0x00403784  DMDialog::CmShared_403784
    //   EV_COMMAND(115)                              -> 0x00403784  DMDialog::CmShared_403784
    //   EV_COMMAND(110)                              -> 0x00403784  DMDialog::CmShared_403784
    //   EV_COMMAND(109)                              -> 0x00403784  DMDialog::CmShared_403784
    //   EV_COMMAND(116)                              -> 0x00403784  DMDialog::CmShared_403784
    //   EV_COMMAND(117)                              -> 0x00403784  DMDialog::CmShared_403784
    //   EV_COMMAND(118)                              -> 0x00403784  DMDialog::CmShared_403784
    //   EV_COMMAND(119)                              -> 0x00403784  DMDialog::CmShared_403784
    //   EV_COMMAND(121)                              -> 0x00403784  DMDialog::CmShared_403784
};
```

### DMProgressBar

```cpp
// sizeof 180 (0xb4)  rtti 0x00404958  vptr at +0xc  destructor 0x00401394
class DMProgressBar : public OWL::TButton, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TButton
    // vtable at 0x00462144 (11 slots)
    //   [ 0] 0x00401394  DMProgressBar::~DMProgressBar
    //   [ 1] 0x00432678  OWL::TControl::vf1
    //   [ 2] 0x004326d4  OWL::TControl::vf2
    //   [ 3] 0x004326f4  OWL::TControl::vf3
    //   [ 4] 0x00432734  OWL::TControl::vf4
    //   [ 5] 0x004014b4  DMProgressBar::vf5
    //   [ 6] 0x004327a4  OWL::TControl::vf6
    //   [ 7] 0x004327cc  OWL::TControl::vf7
    //   [ 8] 0x00431608  OWL::TButton::Find
    //   [ 9] 0x0043190c  OWL::TButton::vf9
    //   [10] 0x0043192c  OWL::TButton::vf10
};
```

### Help

```cpp
// sizeof 12 (0xc)  rtti 0x0040ec18  no vptr  destructor 0x0040ed80
class Help {
};
```

### MergeClient

```cpp
// sizeof 4 (0x4)  rtti 0x00405224  vptr at +0x0
class MergeClient {
    // vtable at 0x00462130 (2 slots)
    //   [ 0] 0x0045d604  vshared_45d604
    //   [ 1] 0x0045d604  vshared_45d604
};
```

### Persist

```cpp
// sizeof 8 (0x8)  rtti 0x0040c5f4  no vptr  destructor 0x0040ea04
class Persist {
};
```

### TSMergeProfile

```cpp
// sizeof 72 (0x48)  rtti 0x00405544  no vptr  destructor 0x0040bf28
class TSMergeProfile {
    /* +0x000 */ std::string m_0;
    /* +0x018 */ std::string m_18;
    /* +0x028 */ std::string m_28;
    /* +0x038 */ std::string m_38;
};
```

## Library and template classes (203)

### __rwstd::__string_ref_rep<std::allocator<char>>

```cpp
// sizeof 12 (0xc)  rtti 0x004532ec  no vptr
class __rwstd::__string_ref_rep<std::allocator<char>> {
};
```

### __rwstd::__string_ref<char>

```cpp
// sizeof 12 (0xc)  rtti 0x00453114  no vptr
class __rwstd::__string_ref<char> : public __rwstd::__string_ref_rep<std::allocator<char>> {
    /* +0x000 */ // base subobject __rwstd::__string_ref_rep<std::allocator<char>>
};
```

### __rwstd::facet_imp

```cpp
// sizeof 16 (0x10)  rtti 0x00411314  vptr at +0x0  destructor 0x0041139c
class __rwstd::facet_imp : public __rwstd::ref_counted {
    /* +0x000 */ // base subobject __rwstd::ref_counted
    // vtable at 0x00472fdc (3 slots)
    //   [ 0] 0x0041139c  __rwstd::facet_imp::~facet_imp
    //   [ 1] 0x00411394  __rwstd::facet_imp::vf1
    //   [ 2] 0x00453060  __rwstd::facet_imp::vf2
};
```

### __rwstd::locale_imp

```cpp
// sizeof 56 (0x38)  rtti 0x0045547c  vptr at +0x0  destructor 0x004545c4
class __rwstd::locale_imp : public __rwstd::ref_counted {
    /* +0x000 */ // base subobject __rwstd::ref_counted
    /* +0x008 */ __rwstd::locale_vector<std::string> m_8;
    /* +0x010 */ __rwstd::locale_vector<__rwstd::facet_imp *> m_10;
    /* +0x020 */ std::string m_20;
    // vtable at 0x00473ed4 (1 slots)
    //   [ 0] 0x004545c4  __rwstd::locale_imp::~locale_imp
};
```

### __rwstd::locale_vector<__rwstd::facet_imp *>

```cpp
// sizeof 8 (0x8)  rtti 0x00453250  no vptr  destructor 0x0044ce30
class __rwstd::locale_vector<__rwstd::facet_imp *> {
};
```

### __rwstd::locale_vector<std::string>

```cpp
// sizeof 8 (0x8)  rtti 0x004531b4  no vptr  destructor 0x0044daa4
class __rwstd::locale_vector<std::string> {
};
```

### __rwstd::ref_counted

```cpp
// sizeof 8 (0x8)  rtti 0x0040b870  vptr at +0x0  destructor 0x00454464
class __rwstd::ref_counted {
    // vtable at 0x00472fcc (1 slots)
    //   [ 0] 0x00454464  __rwstd::ref_counted::~ref_counted
};
```

### __rwstd::use_Clib_locale

```cpp
// sizeof 8 (0x8)  rtti 0x00452e3c  no vptr  destructor 0x00454908
class __rwstd::use_Clib_locale {
};
```

### OWL::__TBarDescrGdNode

```cpp
// sizeof 5 (0x5)  rtti 0x0044ab20  no vptr  destructor 0x0044a3a0
class OWL::__TBarDescrGdNode {
};
```

### OWL::__TFixedAlloc

```cpp
// sizeof 348 (0x15c)  rtti 0x004201cc  no vptr  destructor 0x00420380
class OWL::__TFixedAlloc {
    /* +0x000 */ OWL::TMMemBlocks<TStandardAllocator> m_0;
    /* +0x019 */ OWL::TMMemBlocks<TStandardAllocator> m_19;
    /* +0x032 */ OWL::TMMemBlocks<TStandardAllocator> m_32;
    /* +0x04b */ OWL::TMMemBlocks<TStandardAllocator> m_4b;
    /* +0x064 */ OWL::TMMemBlocks<TStandardAllocator> m_64;
    /* +0x07d */ OWL::TMMemBlocks<TStandardAllocator> m_7d;
    /* +0x096 */ OWL::TMMemBlocks<TStandardAllocator> m_96;
    /* +0x0af */ OWL::TMMemBlocks<TStandardAllocator> m_af;
    /* +0x0c8 */ OWL::TMMemBlocks<TStandardAllocator> m_c8;
    /* +0x0e1 */ OWL::TMMemBlocks<TStandardAllocator> m_e1;
    /* +0x0fa */ OWL::TMMemBlocks<TStandardAllocator> m_fa;
    /* +0x113 */ OWL::TMMemBlocks<TStandardAllocator> m_113;
};
```

### OWL::_TLocaleCache

```cpp
// sizeof 21 (0x15)  rtti 0x0041fa70  no vptr  destructor 0x0041facc
class OWL::_TLocaleCache : public OWL::_TLocaleCacheBase {
    /* +0x000 */ // base subobject OWL::_TLocaleCacheBase
};
```

### OWL::_TLocaleCacheBase

```cpp
// sizeof 12 (0xc)  rtti 0x0041fa30  no vptr
class OWL::_TLocaleCacheBase {
};
```

### OWL::_TLocaleCacheList

```cpp
// sizeof 4 (0x4)  rtti 0x0041f3a4  no vptr  destructor 0x0041f8d4
class OWL::_TLocaleCacheList {
};
```

### OWL::ObjectBuilder

```cpp
// sizeof 8 (0x8)  rtti 0x0040fdb4  no vptr
class OWL::ObjectBuilder {
};
```

### OWL::TAPointer<char>

```cpp
// sizeof 4 (0x4)  rtti 0x00410ef0  no vptr  destructor 0x004111ec
class OWL::TAPointer<char> : public OWL::TPointerBase<char> {
    /* +0x000 */ // base subobject OWL::TPointerBase<char>
};
```

### OWL::TAPointer<OWL::TDocTemplate *>

```cpp
// sizeof 4 (0x4)  rtti 0x00436c98  no vptr  destructor 0x004395c4
class OWL::TAPointer<OWL::TDocTemplate *> : public OWL::TPointerBase<OWL::TDocTemplate *> {
    /* +0x000 */ // base subobject OWL::TPointerBase<OWL::TDocTemplate *>
};
```

### OWL::TAPointer<OWL::TRect>

```cpp
// sizeof 4 (0x4)  rtti 0x0041c4d4  no vptr  destructor 0x0041c774
class OWL::TAPointer<OWL::TRect> : public OWL::TPointerBase<OWL::TRect> {
    /* +0x000 */ // base subobject OWL::TPointerBase<OWL::TRect>
};
```

### OWL::TAppDictImp

```cpp
// sizeof 4 (0x4)  rtti 0x00411b70  vptr at +0x0  destructor 0x00411bc0
class OWL::TAppDictImp {
    // vtable at 0x00465204 (7 slots)
    //   [ 0] 0x00411bc0  OWL::TAppDictImp::~TAppDictImp
    //   [ 1] 0x0045d604  vshared_45d604
    //   [ 2] 0x0045d604  vshared_45d604
    //   [ 3] 0x0045d604  vshared_45d604
    //   [ 4] 0x0045d604  vshared_45d604
    //   [ 5] 0x0045d604  vshared_45d604
    //   [ 6] 0x0045d604  vshared_45d604
};
```

### OWL::TAppDictInstImp

```cpp
// sizeof 12 (0xc)  rtti 0x00411b10  vptr at +0x0  destructor 0x00411be0
class OWL::TAppDictInstImp : public OWL::TAppDictImp {
    /* +0x000 */ // base subobject OWL::TAppDictImp
    // vtable at 0x0046522c (7 slots)
    //   [ 0] 0x00411be0  OWL::TAppDictInstImp::~TAppDictInstImp
    //   [ 1] 0x00411c18  OWL::TAppDictInstImp::vf1
    //   [ 2] 0x00411c28  OWL::TAppDictInstImp::vf2
    //   [ 3] 0x00411c38  OWL::TAppDictInstImp::vf3
    //   [ 4] 0x00411c44  OWL::TAppDictInstImp::vf4
    //   [ 5] 0x00411c50  OWL::TAppDictInstImp::vf5
    //   [ 6] 0x00411c60  OWL::TAppDictInstImp::vf6
};
```

### OWL::TAppDictionary

```cpp
// sizeof 4 (0x4)  rtti 0x004114c8  no vptr  destructor 0x00411634
class OWL::TAppDictionary {
};
```

### OWL::TAppDictPidImp

```cpp
// sizeof 12 (0xc)  rtti 0x00411ab4  vptr at +0x0  destructor 0x004117ec
class OWL::TAppDictPidImp : public OWL::TAppDictImp {
    /* +0x000 */ // base subobject OWL::TAppDictImp
    // vtable at 0x004651dc (7 slots)
    //   [ 0] 0x004117ec  OWL::TAppDictPidImp::~TAppDictPidImp
    //   [ 1] 0x00411848  OWL::TAppDictPidImp::vf1
    //   [ 2] 0x004118a0  OWL::TAppDictPidImp::vf2
    //   [ 3] 0x004118c4  OWL::TAppDictPidImp::vf3
    //   [ 4] 0x004118ec  OWL::TAppDictPidImp::vf4
    //   [ 5] 0x00411918  OWL::TAppDictPidImp::vf5
    //   [ 6] 0x00411944  OWL::TAppDictPidImp::vf6
};
```

### OWL::TApplicatData

```cpp
// sizeof 4 (0x4)  rtti 0x0042e50c  no vptr  destructor 0x0042e4a4
class OWL::TApplicatData {
};
```

### OWL::TApplication

```cpp
// sizeof 119 (0x77)  rtti 0x004043c8  vptr at +0x1b  destructor 0x0042e9b4
class OWL::TApplication : public OWL::TModule, public OWL::TMsgThread, public virtual OWL::TEventHandler {
    /* +0x004 */ // base subobject OWL::TModule
    /* +0x011 */ // base subobject OWL::TMsgThread
    /* +0x035 */ std::string m_35;
    // vtable at 0x0046ae1c (19 slots)
    //   [ 0] 0x0042e9b4  OWL::TApplication::~TApplication
    //   [ 1] 0x00430850  OWL::TApplication::vf1
    //   [ 2] 0x0042f1c0  OWL::TApplication::vf2
    //   [ 3] 0x0042f648  OWL::TApplication::vf3
    //   [ 4] 0x0042fc08  OWL::TApplication::vf4
    //   [ 5] 0x00430344  OWL::TApplication::vf5
    //   [ 6] 0x00430368  OWL::TApplication::vf6
    //   [ 7] 0x00430424  OWL::TApplication::vf7
    //   [ 8] 0x0043050c  OWL::TApplication::vf8
    //   [ 9] 0x004049d4  OWL::TApplication::vf9
    //   [10] 0x004308c8  OWL::TApplication::vf10
    //   [11] 0x004307ec  OWL::TApplication::Find
    //   [12] 0x0042ef1c  OWL::TApplication::vf12
    //   [13] 0x004049dc  OWL::TApplication::vf13
    //   [14] 0x004305f0  OWL::TApplication::vf14
    //   [15] 0x0042efb0  OWL::TApplication::vf15
    //   [16] 0x0042efb8  OWL::TApplication::vf16
    //   [17] 0x0042f00c  OWL::TApplication::vf17
    //   [18] 0x0042f078  OWL::TApplication::vf18
    // response table at 0x0046b4a4 (2 entries)
    //   WM_ACTIVATEAPP                               -> 0x00430794  OWL::TApplication::EvActivateApp
    //   EV_COMMAND(24310)                            -> 0x004307c4  OWL::TApplication::Cmd24310
};
```

### OWL::TArrayBase

```cpp
// sizeof 8 (0x8)  rtti 0x00414b38  no vptr
class OWL::TArrayBase {
};
```

### OWL::TBarDescr

```cpp
// sizeof 52 (0x34)  rtti 0x00443294  vptr at +0x0  destructor 0x0044a4c0
class OWL::TBarDescr {
    // vtable at 0x004705fc (4 slots)
    //   [ 0] 0x0044a4c0  OWL::TBarDescr::~TBarDescr
    //   [ 1] 0x0044a63c  OWL::TBarDescr::vf1
    //   [ 2] 0x0044a798  OWL::TBarDescr::vf2
    //   [ 3] 0x0044a9b4  OWL::TBarDescr::vf3
};
```

### OWL::TBitmap

```cpp
// sizeof 5 (0x5)  rtti 0x004124e0  no vptr  destructor 0x00411fc4
class OWL::TBitmap : public OWL::TGdiObject {
    /* +0x000 */ // base subobject OWL::TGdiObject
};
```

### OWL::TBrush

```cpp
// sizeof 5 (0x5)  rtti 0x00414bd0  no vptr  destructor 0x00431428
class OWL::TBrush : public OWL::TGdiObject {
    /* +0x000 */ // base subobject OWL::TGdiObject
};
```

### OWL::TBrushCache

```cpp
// sizeof 196 (0xc4)  rtti 0x00430fc0  no vptr  destructor 0x00431078
class OWL::TBrushCache {
};
```

### OWL::TButton

```cpp
// sizeof 172 (0xac)  rtti 0x00405354  vptr at +0xc  destructor 0x00431810
class OWL::TButton : public OWL::TControl, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TControl
    // vtable at 0x0046b7b0 (11 slots)
    //   [ 0] 0x00431810  OWL::TButton::~TButton
    //   [ 1] 0x00432678  OWL::TControl::vf1
    //   [ 2] 0x004326d4  OWL::TControl::vf2
    //   [ 3] 0x004326f4  OWL::TControl::vf3
    //   [ 4] 0x00432734  OWL::TControl::vf4
    //   [ 5] 0x00432774  OWL::TControl::vf5
    //   [ 6] 0x004327a4  OWL::TControl::vf6
    //   [ 7] 0x004327cc  OWL::TControl::vf7
    //   [ 8] 0x00431608  OWL::TButton::Find
    //   [ 9] 0x0043190c  OWL::TButton::vf9
    //   [10] 0x0043192c  OWL::TButton::vf10
    // response table at 0x0046b75c (2 entries)
    //   WM_GETDLGCODE                                -> 0x00431960  OWL::TButton::EvGetDlgCode
    //   message 0x00f4                               -> 0x00431998  OWL::TButton::EvMsg_f4
};
```

### OWL::TButton::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x00431ddc  vptr at +0x0
class OWL::TButton::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0046b98c (4 slots)
    //   [ 0] 0x00410058  OWL::TNewStreamer::vf0
    //   [ 1] 0x00431c04  EvRegisteredMsg_431c04_431c04
    //   [ 2] 0x00431c94  OWL::TButton::Streamer::vf2
    //   [ 3] 0x00431e28  OWL::TButton::Streamer::vf3
};
```

### OWL::TButtonGadget

```cpp
// sizeof 96 (0x60)  rtti 0x0041281c  vptr at +0x0  destructor 0x00412ae8
class OWL::TButtonGadget : public OWL::TGadget {
    /* +0x000 */ // base subobject OWL::TGadget
    // vtable at 0x0046566c (29 slots)
    //   [ 0] 0x00412ae8  OWL::TButtonGadget::~TButtonGadget
    //   [ 1] 0x004190f8  OWL::TGadget::vf1
    //   [ 2] 0x00412f28  OWL::TButtonGadget::vf2
    //   [ 3] 0x00412e6c  OWL::TButtonGadget::vf3
    //   [ 4] 0x004190d0  OWL::TGadget::vf4
    //   [ 5] 0x00412bf8  OWL::TButtonGadget::vf5
    //   [ 6] 0x00412c54  OWL::TButtonGadget::vf6
    //   [ 7] 0x0041926c  OWL::TGadget::vf7
    //   [ 8] 0x00419328  OWL::TGadget::vf8
    //   [ 9] 0x004193fc  OWL::TGadget::vf9
    //   [10] 0x00419330  OWL::TGadget::vf10
    //   [11] 0x0041921c  OWL::TGadget::vf11
    //   [12] 0x004132c0  OWL::TButtonGadget::vf12
    //   [13] 0x00413310  OWL::TButtonGadget::vf13
    //   [14] 0x00413828  OWL::TButtonGadget::vf14
    //   [15] 0x00413860  OWL::TButtonGadget::vf15
    //   [16] 0x004138ac  OWL::TButtonGadget::vf16
    //   [17] 0x00413800  OWL::TButtonGadget::vf17
    //   [18] 0x00419a88  OWL::TGadget::vf18
    //   [19] 0x004138e4  OWL::TButtonGadget::vf19
    //   [20] 0x00419a90  OWL::TGadget::vf20
    //   [21] 0x00413508  OWL::TButtonGadget::vf21
    //   [22] 0x00412fb4  OWL::TButtonGadget::vf22
    //   [23] 0x0041305c  OWL::TButtonGadget::vf23
    //   [24] 0x004130c8  OWL::TButtonGadget::vf24
    //   [25] 0x00413694  OWL::TButtonGadget::vf25
    //   [26] 0x004136d8  OWL::TButtonGadget::vf26
    //   [27] 0x0041371c  OWL::TButtonGadget::vf27
    //   [28] 0x004125b0  OWL::TButtonGadget::vf28
};
```

### OWL::TButtonGadgetEnabler

```cpp
// sizeof 20 (0x14)  rtti 0x00413928  vptr at +0x0
class OWL::TButtonGadgetEnabler : public OWL::TCommandEnabler {
    /* +0x000 */ // base subobject OWL::TCommandEnabler
    // vtable at 0x00465654 (3 slots)
    //   [ 0] 0x00412930  OWL::TButtonGadgetEnabler::vf0
    //   [ 1] 0x00412958  OWL::TButtonGadgetEnabler::vf1
    //   [ 2] 0x00412960  OWL::TButtonGadgetEnabler::vf2
};
```

### OWL::TBwccDll

```cpp
// sizeof 61 (0x3d)  rtti 0x0042ed54  vptr at +0x0  destructor 0x0042ee70
class OWL::TBwccDll : public OWL::TModule {
    /* +0x000 */ // base subobject OWL::TModule
};
```

### OWL::TCacheEntryStr

```cpp
// sizeof 497 (0x1f1)  rtti 0x0042b844  no vptr  destructor 0x0042e0f8
class OWL::TCacheEntryStr {
};
```

### OWL::TCelArray

```cpp
// sizeof 49 (0x31)  rtti 0x004125d0  vptr at +0x0  destructor 0x00413c00
class OWL::TCelArray {
    // vtable at 0x00465948 (1 slots)
    //   [ 0] 0x00413c00  OWL::TCelArray::~TCelArray
};
```

### OWL::TCheckBox

```cpp
// sizeof 176 (0xb0)  rtti 0x00405908  vptr at +0xc  destructor 0x00432064
class OWL::TCheckBox : public OWL::TButton, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TButton
    // vtable at 0x0046b9f0 (12 slots)
    //   [ 0] 0x00432064  OWL::TCheckBox::~TCheckBox
    //   [ 1] 0x00432678  OWL::TControl::vf1
    //   [ 2] 0x004326d4  OWL::TControl::vf2
    //   [ 3] 0x004326f4  OWL::TControl::vf3
    //   [ 4] 0x00432734  OWL::TControl::vf4
    //   [ 5] 0x00432774  OWL::TControl::vf5
    //   [ 6] 0x004327a4  OWL::TControl::vf6
    //   [ 7] 0x004327cc  OWL::TControl::vf7
    //   [ 8] 0x00431e34  OWL::TCheckBox::vf8
    //   [ 9] 0x00432160  OWL::TCheckBox::vf9
    //   [10] 0x0043192c  OWL::TButton::vf10
    //   [11] 0x00432180  OWL::TCheckBox::vf11
};
```

### OWL::TChildMetrics

```cpp
// sizeof 89 (0x59)  rtti 0x0041f1ac  no vptr
class OWL::TChildMetrics {
};
```

### OWL::TClipboard

```cpp
// sizeof 1 (0x1)  rtti 0x0040f418  no vptr  destructor 0x00414e0c
class OWL::TClipboard {
};
```

### OWL::TCommandEnabler

```cpp
// sizeof 16 (0x10)  rtti 0x0041261c  vptr at +0x0
class OWL::TCommandEnabler {
    // vtable at 0x0046abb4 (4 slots)
    //   [ 0] 0x0042aa5c  OWL::TCommandEnabler::vf0
    //   [ 1] 0x0045d604  vshared_45d604
    //   [ 2] 0x0045d604  vshared_45d604
    //   [ 3] 0x0042e18c  OWL::TCommandEnabler::vf3
};
```

### OWL::TCommCtrlDll

```cpp
// sizeof 17 (0x11)  rtti 0x004106f0  vptr at +0x0  destructor 0x004107b8
class OWL::TCommCtrlDll : public OWL::TModule {
    /* +0x000 */ // base subobject OWL::TModule
    // vtable at 0x00464dc0 (2 slots)
    //   [ 0] 0x004107b8  OWL::TCommCtrlDll::~TCommCtrlDll
    //   [ 1] 0x00443e94  OWL::TModule::vf1
};
```

### OWL::TCommonDialog

```cpp
// sizeof 178 (0xb2)  rtti 0x00405658  vptr at +0xc  destructor 0x00415764
class OWL::TCommonDialog : public OWL::TDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TDialog
    // vtable at 0x0046603c (15 slots)
    //   [ 0] 0x00415764  OWL::TCommonDialog::~TCommonDialog
    //   [ 1] 0x00434b04  OWL::TDialog::vf1
    //   [ 2] 0x00434ff4  OWL::TDialog::vf2
    //   [ 3] 0x00434cd8  OWL::TDialog::vf3
    //   [ 4] 0x00415884  OWL::TCommonDialog::vf4
    //   [ 5] 0x00434dcc  OWL::TDialog::vf5
    //   [ 6] 0x0041588c  OWL::TCommonDialog::vf6
    //   [ 7] 0x004348d4  OWL::TDialog::vf7
    //   [ 8] 0x00435068  OWL::TDialog::vf8
    //   [ 9] 0x004350c0  OWL::TDialog::vf9
    //   [10] 0x00435388  OWL::TDialog::vf10
    //   [11] 0x00415860  OWL::TCommonDialog::vf11
    //   [12] 0x00434968  OWL::TDialog::vf12
    //   [13] 0x00434988  OWL::TDialog::vf13
    //   [14] 0x004155a8  OWL::TCommonDialog::Find
    // response table at 0x00465f88 (3 entries)
    //   WM_CLOSE                                     -> 0x004155f0  OWL::TCommonDialog::EvClose
    //   EV_COMMAND(1)                                -> 0x00415600  OWL::TCommonDialog::CmRange1to2
    //   EV_COMMAND(2)                                -> 0x00415600  OWL::TCommonDialog::CmRange1to2
};
```

### OWL::TConstraint

```cpp
// sizeof 36 (0x24)  rtti 0x0041f170  no vptr
class OWL::TConstraint {
};
```

### OWL::TControl

```cpp
// sizeof 170 (0xaa)  rtti 0x0040580c  vptr at +0xc  destructor 0x00432570
class OWL::TControl : public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    // vtable at 0x0046bbe0 (9 slots)
    //   [ 0] 0x00432570  OWL::TControl::~TControl
    //   [ 1] 0x00432678  OWL::TControl::vf1
    //   [ 2] 0x004326d4  OWL::TControl::vf2
    //   [ 3] 0x004326f4  OWL::TControl::vf3
    //   [ 4] 0x00432734  OWL::TControl::vf4
    //   [ 5] 0x00432774  OWL::TControl::vf5
    //   [ 6] 0x004327a4  OWL::TControl::vf6
    //   [ 7] 0x004327cc  OWL::TControl::vf7
    //   [ 8] 0x00432228  OWL::TControl::Find
    // response table at 0x0046bb20 (5 entries)
    //   WM_PAINT                                     -> 0x00432634  OWL::TControl::EvPaint
    //   WM_COMPAREITEM                               -> 0x00432660  OWL::TControl::EvCompareitem
    //   WM_DELETEITEM                                -> 0x004326bc  OWL::TControl::EvDeleteitem
    //   WM_DRAWITEM                                  -> 0x0043271c  OWL::TControl::EvDrawItem
    //   WM_MEASUREITEM                               -> 0x004326dc  OWL::TControl::EvMeasureItem
};
```

### OWL::TControl::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x00432bbc  vptr at +0x0
class OWL::TControl::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0046bda4 (5 slots)
    //   [ 0] 0x00410058  OWL::TNewStreamer::vf0
    //   [ 1] 0x004329e0  OWL::TControl::Streamer::vf1
    //   [ 2] 0x00432a70  OWL::TControl::Streamer::vf2
    //   [ 3] 0x00432c08  OWL::TControl::Streamer::vf3
    //   [ 4] 0x00416174  OWL::TControl::Streamer::vf4
};
```

### OWL::TControlBar

```cpp
// sizeof 227 (0xe3)  rtti 0x00416274  vptr at +0x18  destructor 0x00416194
class OWL::TControlBar : public OWL::TGadgetWindow, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TGadgetWindow
    // vtable at 0x00466264 (27 slots)
    //   [ 0] 0x00416194  OWL::TControlBar::~TControlBar
    //   [ 1] 0x0041aacc  OWL::TGadgetWindow::vf1
    //   [ 2] 0x0041aae8  OWL::TGadgetWindow::vf2
    //   [ 3] 0x004162f4  OWL::TGadgetWindow::vf3
    //   [ 4] 0x0041c104  OWL::TGadgetWindow::vf4
    //   [ 5] 0x0041b758  OWL::TGadgetWindow::vf5
    //   [ 6] 0x0041b780  OWL::TGadgetWindow::vf6
    //   [ 7] 0x0041b7e8  OWL::TGadgetWindow::vf7
    //   [ 8] 0x0041b7a8  OWL::TGadgetWindow::vf8
    //   [ 9] 0x0041b80c  OWL::TGadgetWindow::vf9
    //   [10] 0x0041b88c  OWL::TGadgetWindow::vf10
    //   [11] 0x0041b8e4  OWL::TGadgetWindow::vf11
    //   [12] 0x0041a704  OWL::TGadgetWindow::vf12
    //   [13] 0x0041a8dc  OWL::TGadgetWindow::vf13
    //   [14] 0x0041a914  OWL::TGadgetWindow::vf14
    //   [15] 0x0041bbec  OWL::TGadgetWindow::vf15
    //   [16] 0x0041ab6c  OWL::TGadgetWindow::vf16
    //   [17] 0x0041b70c  OWL::TGadgetWindow::vf17
    //   [18] 0x0041ac6c  OWL::TGadgetWindow::vf18
    //   [19] 0x0041bd80  OWL::TGadgetWindow::vf19
    //   [20] 0x0041ac24  OWL::TGadgetWindow::vf20
    //   [21] 0x0041b97c  OWL::TGadgetWindow::vf21
    //   [22] 0x0041ba40  OWL::TGadgetWindow::vf22
    //   [23] 0x0041baac  OWL::TGadgetWindow::vf23
    //   [24] 0x0041c2b4  OWL::TGadgetWindow::vf24
    //   [25] 0x0041c380  OWL::TGadgetWindow::vf25
    //   [26] 0x0041a068  OWL::TGadgetWindow::Find
};
```

### OWL::TControlEnabler

```cpp
// sizeof 16 (0x10)  rtti 0x0043533c  vptr at +0x0
class OWL::TControlEnabler : public OWL::TCommandEnabler {
    /* +0x000 */ // base subobject OWL::TCommandEnabler
    // vtable at 0x0046c2e8 (3 slots)
    //   [ 0] 0x00435240  OWL::TControlEnabler::vf0
    //   [ 1] 0x00435280  OWL::TControlEnabler::vf1
    //   [ 2] 0x00435308  OWL::TControlEnabler::vf2
};
```

### OWL::TCreatedDC

```cpp
// sizeof 33 (0x21)  rtti 0x00412488  vptr at +0x5  destructor 0x00416674
class OWL::TCreatedDC : public OWL::TDC {
    /* +0x000 */ // base subobject OWL::TDC
    // vtable at 0x00466400 (24 slots)
    //   [ 0] 0x00416674  OWL::TCreatedDC::~TCreatedDC
    //   [ 1] 0x00416ee8  OWL::TDC::vf1
    //   [ 2] 0x00416ef8  OWL::TDC::vf2
    //   [ 3] 0x00416f14  OWL::TDC::vf3
    //   [ 4] 0x00416f30  OWL::TDC::vf4
    //   [ 5] 0x00416bbc  OWL::TDC::vf5
    //   [ 6] 0x00416c4c  OWL::TDC::vf6
    //   [ 7] 0x00416cd0  OWL::TDC::vf7
    //   [ 8] 0x00416f4c  OWL::TDC::vf8
    //   [ 9] 0x00416f98  OWL::TDC::vf9
    //   [10] 0x00416fe4  OWL::TDC::vf10
    //   [11] 0x00417018  OWL::TDC::vf11
    //   [12] 0x00417064  OWL::TDC::vf12
    //   [13] 0x004170b0  OWL::TDC::vf13
    //   [14] 0x004170fc  OWL::TDC::vf14
    //   [15] 0x00417150  OWL::TDC::vf15
    //   [16] 0x0041719c  OWL::TDC::vf16
    //   [17] 0x004171f0  OWL::TDC::vf17
    //   [18] 0x00417228  OWL::TDC::vf18
    //   [19] 0x0041726c  OWL::TDC::vf19
    //   [20] 0x004172d4  OWL::TDC::vf20
    //   [21] 0x004172f4  OWL::TDC::vf21
    //   [22] 0x00417320  OWL::TDC::vf22
    //   [23] 0x00416b6c  OWL::TDC::vf23
};
```

### OWL::TCtl3dDll

```cpp
// sizeof 61 (0x3d)  rtti 0x0042ecfc  vptr at +0x0  destructor 0x0042eeb4
class OWL::TCtl3dDll : public OWL::TModule {
    /* +0x000 */ // base subobject OWL::TModule
};
```

### OWL::TDC

```cpp
// sizeof 33 (0x21)  rtti 0x00401624  vptr at +0x5  destructor 0x00416b40
class OWL::TDC : public OWL::TGdiBase {
    /* +0x000 */ // base subobject OWL::TGdiBase
    // vtable at 0x0046671c (24 slots)
    //   [ 0] 0x00416b40  OWL::TDC::~TDC
    //   [ 1] 0x00416ee8  OWL::TDC::vf1
    //   [ 2] 0x00416ef8  OWL::TDC::vf2
    //   [ 3] 0x00416f14  OWL::TDC::vf3
    //   [ 4] 0x00416f30  OWL::TDC::vf4
    //   [ 5] 0x00416bbc  OWL::TDC::vf5
    //   [ 6] 0x00416c4c  OWL::TDC::vf6
    //   [ 7] 0x00416cd0  OWL::TDC::vf7
    //   [ 8] 0x00416f4c  OWL::TDC::vf8
    //   [ 9] 0x00416f98  OWL::TDC::vf9
    //   [10] 0x00416fe4  OWL::TDC::vf10
    //   [11] 0x00417018  OWL::TDC::vf11
    //   [12] 0x00417064  OWL::TDC::vf12
    //   [13] 0x004170b0  OWL::TDC::vf13
    //   [14] 0x004170fc  OWL::TDC::vf14
    //   [15] 0x00417150  OWL::TDC::vf15
    //   [16] 0x0041719c  OWL::TDC::vf16
    //   [17] 0x004171f0  OWL::TDC::vf17
    //   [18] 0x00417228  OWL::TDC::vf18
    //   [19] 0x0041726c  OWL::TDC::vf19
    //   [20] 0x004172d4  OWL::TDC::vf20
    //   [21] 0x004172f4  OWL::TDC::vf21
    //   [22] 0x00417320  OWL::TDC::vf22
    //   [23] 0x00416b6c  OWL::TDC::vf23
};
```

### OWL::TDecoratedFrame

```cpp
// sizeof 299 (0x12b)  rtti 0x004126c4  vptr at +0x35  destructor 0x00432dc8
class OWL::TDecoratedFrame : public OWL::TLayoutWindow, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow, public virtual OWL::TFrameWindow {
    /* +0x004 */ // base subobject OWL::TLayoutWindow
    // vtable at 0x0046bf10 (15 slots)
    //   [ 0] 0x00432dc8  OWL::TDecoratedFrame::~TDecoratedFrame
    //   [ 1] 0x00434020  OWL::TDecoratedFrame::vf1
    //   [ 2] 0x00433258  OWL::TDecoratedFrame::vf2
    //   [ 3] 0x004331e8  OWL::TDecoratedFrame::vf3
    //   [ 4] 0x00433004  OWL::TDecoratedFrame::vf4
    //   [ 5] 0x004340e8  OWL::TDecoratedFrame::vf5
    //   [ 6] 0x004341d0  OWL::TDecoratedFrame::vf6
    //   [ 7] 0x00434210  OWL::TDecoratedFrame::vf7
    //   [ 8] 0x00434164  OWL::TDecoratedFrame::vf8
    //   [ 9] 0x00432f48  OWL::TDecoratedFrame::vf9
    //   [10] 0x00432fd0  OWL::TDecoratedFrame::vf10
    //   [11] 0x004331a8  OWL::TDecoratedFrame::vf11
    //   [12] 0x004335dc  OWL::TDecoratedFrame::vf12
    //   [13] 0x00433754  OWL::TDecoratedFrame::vf13
    //   [14] 0x00432d4c  OWL::TDecoratedFrame::Find
    // response table at 0x0046be04 (3 entries)
    //   WM_ENTERIDLE                                 -> 0x00433528  OWL::TDecoratedFrame::EvEnteridle
    //   WM_MENUSELECT                                -> 0x00433410  OWL::TDecoratedFrame::EvMenuSelect
    //   WM_SIZE                                      -> 0x004334f8  OWL::TDecoratedFrame::EvSize
};
```

### OWL::TDefaultGUIFont

```cpp
// sizeof 5 (0x5)  rtti 0x00418d50  no vptr  destructor 0x00418db0
class OWL::TDefaultGUIFont : public OWL::TFont {
    /* +0x000 */ // base subobject OWL::TFont
};
```

### OWL::TDeferWinPos

```cpp
// sizeof 4 (0x4)  rtti 0x0041dfc8  no vptr  destructor 0x0041dc48
class OWL::TDeferWinPos {
};
```

### OWL::TDiagBase

```cpp
// sizeof 17 (0x11)  rtti 0x00414aa8  vptr at +0x0  destructor 0x0041475c
class OWL::TDiagBase {
    // vtable at 0x00465d98 (2 slots)
    //   [ 0] 0x0045d604  vshared_45d604
    //   [ 1] 0x0041475c  OWL::TDiagBase::~TDiagBase
};
```

### OWL::TDiagGroupDef

```cpp
// sizeof 17 (0x11)  rtti 0x00414a08  vptr at +0x0  destructor 0x00414a64
class OWL::TDiagGroupDef : public OWL::TDiagBase {
    /* +0x000 */ // base subobject OWL::TDiagBase
    // vtable at 0x00465dac (2 slots)
    //   [ 0] 0x004146b4  OWL::TDiagGroupDef::vf0
    //   [ 1] 0x00414a64  OWL::TDiagGroupDef::~TDiagGroupDef
};
```

### OWL::TDialog

```cpp
// sizeof 174 (0xae)  rtti 0x00403714  vptr at +0xc  destructor 0x00434760
class OWL::TDialog : public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    // vtable at 0x0046c184 (15 slots)
    //   [ 0] 0x00434760  OWL::TDialog::~TDialog
    //   [ 1] 0x00434b04  OWL::TDialog::vf1
    //   [ 2] 0x00434ff4  OWL::TDialog::vf2
    //   [ 3] 0x00434cd8  OWL::TDialog::vf3
    //   [ 4] 0x00434d50  OWL::TDialog::vf4
    //   [ 5] 0x00434dcc  OWL::TDialog::vf5
    //   [ 6] 0x00434e2c  OWL::TDialog::vf6
    //   [ 7] 0x004348d4  OWL::TDialog::vf7
    //   [ 8] 0x00435068  OWL::TDialog::vf8
    //   [ 9] 0x004350c0  OWL::TDialog::vf9
    //   [10] 0x00435388  OWL::TDialog::vf10
    //   [11] 0x00435024  OWL::TDialog::vf11
    //   [12] 0x00434968  OWL::TDialog::vf12
    //   [13] 0x00434988  OWL::TDialog::vf13
    //   [14] 0x0043444c  OWL::TDialog::vf14
};
```

### OWL::TDib

```cpp
// sizeof 32 (0x20)  rtti 0x0041255c  vptr at +0x5  destructor 0x00435578
class OWL::TDib : public OWL::TGdiBase {
    /* +0x000 */ // base subobject OWL::TGdiBase
    // vtable at 0x0046c300 (4 slots)
    //   [ 0] 0x00435578  OWL::TDib::~TDib
    //   [ 1] 0x00435768  OWL::TDib::vf1
    //   [ 2] 0x00435ac4  OWL::TDib::vf2
    //   [ 3] 0x00413044  OWL::TDib::vf3
};
```

### OWL::TDiskFileHandle

```cpp
// sizeof 28 (0x1c)  rtti 0x0043eb14  vptr at +0x0  destructor 0x0043eb7c
class OWL::TDiskFileHandle : public OWL::TFileHandle {
    /* +0x000 */ // base subobject OWL::TFileHandle
    /* +0x00c */ std::string m_c;
    // vtable at 0x0046e114 (23 slots)
    //   [ 0] 0x0043eb7c  OWL::TDiskFileHandle::~TDiskFileHandle
    //   [ 1] 0x0043ec34  OWL::TDiskFileHandle::vf1
    //   [ 2] 0x0043ec40  OWL::TDiskFileHandle::vf2
    //   [ 3] 0x0043eea8  OWL::TDiskFileHandle::vf3
    //   [ 4] 0x0043ed20  OWL::TDiskFileHandle::vf4
    //   [ 5] 0x0043ee10  OWL::TDiskFileHandle::vf5
    //   [ 6] 0x0043eeb4  OWL::TDiskFileHandle::vf6
    //   [ 7] 0x0043eed0  OWL::TDiskFileHandle::vf7
    //   [ 8] 0x0043eefc  OWL::TDiskFileHandle::vf8
    //   [ 9] 0x0043ef28  OWL::TDiskFileHandle::vf9
    //   [10] 0x0043ef68  OWL::TDiskFileHandle::vf10
    //   [11] 0x0043ef84  OWL::TDiskFileHandle::vf11
    //   [12] 0x0043efa8  OWL::TDiskFileHandle::vf12
    //   [13] 0x0043efe0  OWL::TDiskFileHandle::vf13
    //   [14] 0x0043f000  OWL::TDiskFileHandle::vf14
    //   [15] 0x0043f01c  OWL::TDiskFileHandle::vf15
    //   [16] 0x0043f054  OWL::TDiskFileHandle::vf16
    //   [17] 0x0043f074  OWL::TDiskFileHandle::vf17
    //   [18] 0x0043f090  OWL::TDiskFileHandle::vf18
    //   [19] 0x0043f0b4  OWL::TDiskFileHandle::vf19
    //   [20] 0x0043f0d8  OWL::TDiskFileHandle::vf20
    //   [21] 0x0043f11c  OWL::TDiskFileHandle::vf21
    //   [22] 0x0043f1a0  OWL::TDiskFileHandle::vf22
};
```

### OWL::TDockable

```cpp
// sizeof 4 (0x4)  rtti 0x00435f20  vptr at +0x0
class OWL::TDockable {
};
```

### OWL::TDockingSlip

```cpp
// sizeof 8 (0x8)  rtti 0x00435d60  vptr at +0x0
class OWL::TDockingSlip {
};
```

### OWL::TDocManager

```cpp
// sizeof 56 (0x38)  rtti 0x0042edac  vptr at +0x8  destructor 0x00436658
class OWL::TDocManager : public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase {
    /* +0x014 */ OWL::TDocument::TList m_14;
    // vtable at 0x0046cd10 (28 slots)
    //   [ 0] 0x00436658  OWL::TDocManager::~TDocManager
    //   [ 1] 0x0043686c  OWL::TDocManager::vf1
    //   [ 2] 0x004368d0  OWL::TDocManager::vf2
    //   [ 3] 0x00436934  OWL::TDocManager::vf3
    //   [ 4] 0x004369ec  OWL::TDocManager::vf4
    //   [ 5] 0x00436b04  OWL::TDocManager::vf5
    //   [ 6] 0x00436d04  OWL::TDocManager::vf6
    //   [ 7] 0x00437128  OWL::TDocManager::vf7
    //   [ 8] 0x00437220  OWL::TDocManager::vf8
    //   [ 9] 0x00437354  OWL::TDocManager::vf9
    //   [10] 0x00437404  OWL::TDocManager::vf10
    //   [11] 0x0043800c  OWL::TDocManager::vf11
    //   [12] 0x00438d84  OWL::TDocManager::vf12
    //   [13] 0x00438d48  OWL::TDocManager::vf13
    //   [14] 0x00438dc4  OWL::TDocManager::vf14
    //   [15] 0x00438f08  OWL::TDocManager::vf15
    //   [16] 0x00438e70  OWL::TDocManager::vf16
    //   [17] 0x00438fa4  OWL::TDocManager::vf17
    //   [18] 0x00439014  OWL::TDocManager::vf18
    //   [19] 0x004380b0  OWL::TDocManager::vf19
    //   [20] 0x0043813c  OWL::TDocManager::vf20
    //   [21] 0x00438180  OWL::TDocManager::vf21
    //   [22] 0x00438b4c  OWL::TDocManager::vf22
    //   [23] 0x004381c4  OWL::TDocManager::vf23
    //   [24] 0x0043835c  OWL::TDocManager::vf24
    //   [25] 0x00438980  OWL::TDocManager::vf25
    //   [26] 0x00438a98  OWL::TDocManager::vf26
    //   [27] 0x004365c4  OWL::TDocManager::Find
    // response table at 0x0046c440 (17 entries)
    //   WM_OWLCANCLOSE                               -> 0x00438c58  OWL::TDocManager::EvOwlcanclose
    //   WM_OWLPREPROCMENU                            -> 0x00438c8c  OWL::TDocManager::EvOwlpreprocmenu
    //   message 0x7ef6                               -> 0x00438cfc  OWL::TDocManager::EvMsg_7ef6
    //   EV_COMMAND(24331)                            -> 0x004365e8  OWL::TDocManager::Cmd24331
    //   EV_COMMAND(24332)                            -> 0x004365f8  OWL::TDocManager::Cmd24332
    //   EV_COMMAND(24333)                            -> 0x00436608  OWL::TDocManager::Cmd24333
    //   EV_COMMAND(24334)                            -> 0x00436618  OWL::TDocManager::Cmd24334
    //   EV_COMMAND(24335)                            -> 0x00436628  OWL::TDocManager::Cmd24335
    //   EV_COMMAND(24339)                            -> 0x00436638  OWL::TDocManager::Cmd24339
    //   EV_COMMAND(24341)                            -> 0x00436648  OWL::TDocManager::Cmd24341
    //   EV_COMMAND_ENABLE(24331)                     -> 0x00438d28  OWL::TDocManager::CeCmd24331
    //   EV_COMMAND_ENABLE(24332)                     -> 0x00438d64  OWL::TDocManager::CeCmd24332
    //   EV_COMMAND_ENABLE(24333)                     -> 0x00438ec8  OWL::TDocManager::CeCmd24333
    //   EV_COMMAND_ENABLE(24334)                     -> 0x00438e4c  OWL::TDocManager::CeCmd24334
    //   EV_COMMAND_ENABLE(24335)                     -> 0x00438f64  OWL::TDocManager::CeCmd24335
    //   EV_COMMAND_ENABLE(24339)                     -> 0x00438d9c  OWL::TDocManager::CeCmd24339
    //   EV_COMMAND_ENABLE(24341)                     -> 0x00438ff0  OWL::TDocManager::CeCmd24341
};
```

### OWL::TDocTemplate

```cpp
// sizeof 40 (0x28)  rtti 0x004395e8  vptr at +0x0  destructor 0x0043969c
class OWL::TDocTemplate : public OWL::TRegLink, public OWL::TStreamableBase {
    /* +0x000 */ // base subobject OWL::TRegLink
    /* +0x00c */ // base subobject OWL::TStreamableBase
    // vtable at 0x0046cfec (7 slots)
    //   [ 0] 0x0043969c  OWL::TDocTemplate::~TDocTemplate
    //   [ 1] 0x0045d604  vshared_45d604
    //   [ 2] 0x0045d604  vshared_45d604
    //   [ 3] 0x0045d604  vshared_45d604
    //   [ 4] 0x0045d604  vshared_45d604
    //   [ 5] 0x0045d604  vshared_45d604
    //   [ 6] 0x0045d604  vshared_45d604
};
```

### OWL::TDocument

```cpp
// sizeof 50 (0x32)  rtti 0x00436e00  vptr at +0x0  destructor 0x004397a0
class OWL::TDocument : public OWL::TStreamableBase {
    /* +0x000 */ // base subobject OWL::TStreamableBase
    /* +0x008 */ OWL::TDocument::TList m_8;
    // vtable at 0x0046cca0 (25 slots)
    //   [ 0] 0x004397a0  OWL::TDocument::~TDocument
    //   [ 1] 0x004392f0  OWL::TDocument::vf1
    //   [ 2] 0x004392f8  OWL::TDocument::vf2
    //   [ 3] 0x00439300  OWL::TDocument::vf3
    //   [ 4] 0x0043a1f0  OWL::TDocument::vf4
    //   [ 5] 0x00439ef8  OWL::TDocument::vf5
    //   [ 6] 0x00439f44  OWL::TDocument::vf6
    //   [ 7] 0x00439ad8  OWL::TDocument::vf7
    //   [ 8] 0x00439aec  OWL::TDocument::vf8
    //   [ 9] 0x00439bd4  OWL::TDocument::vf9
    //   [10] 0x0043a0e8  OWL::TDocument::vf10
    //   [11] 0x00439308  OWL::TDocument::vf11
    //   [12] 0x0043a1b0  OWL::TDocument::vf12
    //   [13] 0x0043a13c  OWL::TDocument::vf13
    //   [14] 0x0043a15c  OWL::TDocument::vf14
    //   [15] 0x0043a224  OWL::TDocument::vf15
    //   [16] 0x0043931c  OWL::TDocument::vf16
    //   [17] 0x00439974  OWL::TDocument::vf17
    //   [18] 0x00439954  OWL::TDocument::vf18
    //   [19] 0x00439934  OWL::TDocument::vf19
    //   [20] 0x004399a4  OWL::TDocument::vf20
    //   [21] 0x00439aa0  OWL::TDocument::vf21
    //   [22] 0x00439328  OWL::TDocument::vf22
    //   [23] 0x00439d18  OWL::TDocument::vf23
    //   [24] 0x00439d2c  OWL::TDocument::vf24
};
```

### OWL::TDocument::TList

```cpp
// sizeof 4 (0x4)  rtti 0x0042ee1c  no vptr  destructor 0x0042eef8
class OWL::TDocument::TList {
};
```

### OWL::TDvFileOpenDialog

```cpp
// sizeof 274 (0x112)  rtti 0x004388f0  vptr at +0xc  destructor 0x00439038
class OWL::TDvFileOpenDialog : public OWL::TFileOpenDialog, public OWL::TDvOpenSaveDataOwner, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TFileOpenDialog
    /* +0x078 */ // base subobject OWL::TDvOpenSaveDataOwner
    // vtable at 0x0046ce98 (16 slots)
    //   [ 0] 0x00439038  OWL::TDvFileOpenDialog::~TDvFileOpenDialog
    //   [ 1] 0x00436398  OWL::TDvFileOpenDialog::vf1
    //   [ 2] 0x00434ff4  OWL::TDialog::vf2
    //   [ 3] 0x00434cd8  OWL::TDialog::vf3
    //   [ 4] 0x00415884  OWL::TCommonDialog::vf4
    //   [ 5] 0x00434dcc  OWL::TDialog::vf5
    //   [ 6] 0x00446004  OWL::TFileOpenDialog::vf6
    //   [ 7] 0x004348d4  OWL::TDialog::vf7
    //   [ 8] 0x00435068  OWL::TDialog::vf8
    //   [ 9] 0x004350c0  OWL::TDialog::vf9
    //   [10] 0x00435388  OWL::TDialog::vf10
    //   [11] 0x00415860  OWL::TCommonDialog::vf11
    //   [12] 0x00434968  OWL::TDialog::vf12
    //   [13] 0x00434988  OWL::TDialog::vf13
    //   [14] 0x00445bb8  OWL::TOpenSaveDialog::vf14
    //   [15] 0x00445ea0  OWL::TOpenSaveDialog::vf15
};
```

### OWL::TDvFileSaveDialog

```cpp
// sizeof 274 (0x112)  rtti 0x00438860  vptr at +0xc  destructor 0x0043914c
class OWL::TDvFileSaveDialog : public OWL::TFileSaveDialog, public OWL::TDvOpenSaveDataOwner, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TFileSaveDialog
    /* +0x078 */ // base subobject OWL::TDvOpenSaveDataOwner
    // vtable at 0x0046cda4 (16 slots)
    //   [ 0] 0x0043914c  OWL::TDvFileSaveDialog::~TDvFileSaveDialog
    //   [ 1] 0x00436570  OWL::TDvFileSaveDialog::vf1
    //   [ 2] 0x00434ff4  OWL::TDialog::vf2
    //   [ 3] 0x00434cd8  OWL::TDialog::vf3
    //   [ 4] 0x00415884  OWL::TCommonDialog::vf4
    //   [ 5] 0x00434dcc  OWL::TDialog::vf5
    //   [ 6] 0x004461bc  OWL::TFileSaveDialog::vf6
    //   [ 7] 0x004348d4  OWL::TDialog::vf7
    //   [ 8] 0x00435068  OWL::TDialog::vf8
    //   [ 9] 0x004350c0  OWL::TDialog::vf9
    //   [10] 0x00435388  OWL::TDialog::vf10
    //   [11] 0x00415860  OWL::TCommonDialog::vf11
    //   [12] 0x00434968  OWL::TDialog::vf12
    //   [13] 0x00434988  OWL::TDialog::vf13
    //   [14] 0x00445bb8  OWL::TOpenSaveDialog::vf14
    //   [15] 0x00445ea0  OWL::TOpenSaveDialog::vf15
};
```

### OWL::TDvOpenSaveData

```cpp
// sizeof 52 (0x34)  rtti 0x00438800  no vptr  destructor 0x0043921c
class OWL::TDvOpenSaveData : public OWL::TOpenSaveDialog::TData {
    /* +0x000 */ // base subobject OWL::TOpenSaveDialog::TData
};
```

### OWL::TDvOpenSaveDataOwner

```cpp
// sizeof 4 (0x4)  rtti 0x00439108  no vptr
class OWL::TDvOpenSaveDataOwner {
};
```

### OWL::TEdit

```cpp
// sizeof 178 (0xb2)  rtti 0x00405450  vptr at +0xc  destructor 0x0043a624
class OWL::TEdit : public OWL::TStatic, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TStatic
    // vtable at 0x0046d604 (22 slots)
    //   [ 0] 0x0043a624  OWL::TEdit::~TEdit
    //   [ 1] 0x00432678  OWL::TControl::vf1
    //   [ 2] 0x004326d4  OWL::TControl::vf2
    //   [ 3] 0x004326f4  OWL::TControl::vf3
    //   [ 4] 0x00432734  OWL::TControl::vf4
    //   [ 5] 0x00432774  OWL::TControl::vf5
    //   [ 6] 0x004327a4  OWL::TControl::vf6
    //   [ 7] 0x004327cc  OWL::TControl::vf7
    //   [ 8] 0x0043a404  OWL::TEdit::Find
    //   [ 9] 0x0043acbc  OWL::TEdit::vf9
    //   [10] 0x0043b4cc  OWL::TEdit::vf10
    //   [11] 0x0043b38c  OWL::TEdit::vf11
    //   [12] 0x0043b228  OWL::TEdit::vf12
    //   [13] 0x0041019c  OWL::TEdit::vf13
    //   [14] 0x004101bc  OWL::TEdit::vf14
    //   [15] 0x004101e0  OWL::TEdit::vf15
    //   [16] 0x0043b070  OWL::TEdit::vf16
    //   [17] 0x00410208  OWL::TEdit::vf17
    //   [18] 0x00410224  OWL::TEdit::vf18
    //   [19] 0x00410250  OWL::TEdit::vf19
    //   [20] 0x0043b398  OWL::TEdit::vf20
    //   [21] 0x0043acd4  OWL::TEdit::vf21
    // response table at 0x0046d2b0 (20 entries)
    //   EV_COMMAND(24322)                            -> 0x0043a44c  OWL::TEdit::Cmd24322
    //   EV_COMMAND(24323)                            -> 0x0043a468  OWL::TEdit::Cmd24323
    //   EV_COMMAND(24324)                            -> 0x0043a484  OWL::TEdit::Cmd24324
    //   EV_COMMAND(24325)                            -> 0x0043a494  OWL::TEdit::Cmd24325
    //   EV_COMMAND(24326)                            -> 0x0043a4a4  OWL::TEdit::Cmd24326
    //   EV_COMMAND(24321)                            -> 0x0043a4b4  OWL::TEdit::Cmd24321
    //   EV_COMMAND_ENABLE(24322)                     -> 0x0043ad2c  OWL::TEdit::CeShared_43ad2c
    //   EV_COMMAND_ENABLE(24323)                     -> 0x0043ad2c  OWL::TEdit::CeShared_43ad2c
    //   EV_COMMAND_ENABLE(24325)                     -> 0x0043ad2c  OWL::TEdit::CeShared_43ad2c
    //   EV_COMMAND_ENABLE(24324)                     -> 0x0043ad64  OWL::TEdit::CeCmd24324
    //   EV_COMMAND_ENABLE(24326)                     -> 0x0043add8  OWL::TEdit::CeCmd24326
    //   EV_COMMAND_ENABLE(24321)                     -> 0x0043ae1c  OWL::TEdit::CeCmd24321
    //   EV_NOTIFY_AT_CHILD(code -722)                -> 0x0043ab44  OWL::TEdit::NotifyAtChild_m722
    //   EV_NOTIFY_AT_CHILD(code 1280)                -> 0x0043a754  OWL::TEdit::NotifyAtChild_1280
    //   WM_CHAR                                      -> 0x0043a79c  OWL::TEdit::EvChar
    //   WM_KEYDOWN                                   -> 0x0043a994  OWL::TEdit::EvKeyDown
    //   WM_GETDLGCODE                                -> 0x0043a770  OWL::TEdit::EvGetDlgCode
    //   WM_SETFOCUS                                  -> 0x0043ab24  OWL::TEdit::EvSetFocus
    //   WM_KILLFOCUS                                 -> 0x0043aa88  OWL::TEdit::EvKillFocus
    //   WM_CHILDINVALID                              -> 0x0043ac78  OWL::TEdit::EvChildinvalid
};
```

### OWL::TEdit::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x0043b960  vptr at +0x0
class OWL::TEdit::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0046d7b4 (4 slots)
    //   [ 0] 0x00410058  OWL::TNewStreamer::vf0
    //   [ 1] 0x0043b844  EvRegisteredMsg_43b844_43b844
    //   [ 2] 0x0043b874  OWL::TEdit::Streamer::vf2
    //   [ 3] 0x0043b9ac  OWL::TEdit::Streamer::vf3
};
```

### OWL::TEditFile

```cpp
// sizeof 250 (0xfa)  rtti 0x0040feb8  vptr at +0xc  destructor 0x0043ba40
class OWL::TEditFile : public OWL::TEditSearch, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TEditSearch
    /* +0x038 */ OWL::TOpenSaveDialog::TData m_38;
    // vtable at 0x004645dc (30 slots)
    //   [ 0] 0x0043ba40  OWL::TEditFile::~TEditFile
    //   [ 1] 0x00432678  OWL::TControl::vf1
    //   [ 2] 0x004326d4  OWL::TControl::vf2
    //   [ 3] 0x004326f4  OWL::TControl::vf3
    //   [ 4] 0x00432734  OWL::TControl::vf4
    //   [ 5] 0x00432774  OWL::TControl::vf5
    //   [ 6] 0x004327a4  OWL::TControl::vf6
    //   [ 7] 0x004327cc  OWL::TControl::vf7
    //   [ 8] 0x0043b9b8  OWL::TEditFile::vf8
    //   [ 9] 0x0043acbc  OWL::TEdit::vf9
    //   [10] 0x0043b4cc  OWL::TEdit::vf10
    //   [11] 0x0043b38c  OWL::TEdit::vf11
    //   [12] 0x0043b228  OWL::TEdit::vf12
    //   [13] 0x0041019c  OWL::TEdit::vf13
    //   [14] 0x004101bc  OWL::TEdit::vf14
    //   [15] 0x004101e0  OWL::TEdit::vf15
    //   [16] 0x0043b070  OWL::TEdit::vf16
    //   [17] 0x00410208  OWL::TEdit::vf17
    //   [18] 0x00410224  OWL::TEdit::vf18
    //   [19] 0x00410250  OWL::TEdit::vf19
    //   [20] 0x0043bb5c  OWL::TEditFile::vf20
    //   [21] 0x0043d274  OWL::TEditFile::vf21
    //   [22] 0x0043cd88  OWL::TEditFile::vf22
    //   [23] 0x0043c0a4  OWL::TEditFile::vf23
    //   [24] 0x0043c354  OWL::TEditFile::vf24
    //   [25] 0x0043c484  OWL::TEditFile::vf25
    //   [26] 0x0043c0f0  OWL::TEditFile::vf26
    //   [27] 0x0043c5ac  OWL::TEditFile::vf27
    //   [28] 0x0043c82c  OWL::TEditFile::vf28
    //   [29] 0x0043cc6c  OWL::TEditFile::vf29
};
```

### OWL::TEditFile::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x0043d694  vptr at +0x0
class OWL::TEditFile::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0046dcdc (4 slots)
    //   [ 0] 0x00410058  OWL::TNewStreamer::vf0
    //   [ 1] 0x0043d4b0  OWL::TEditFile::Streamer::vf1
    //   [ 2] 0x0043d548  OWL::TEditFile::Streamer::vf2
    //   [ 3] 0x0043d6e4  OWL::TEditFile::Streamer::vf3
};
```

### OWL::TEditSearch

```cpp
// sizeof 206 (0xce)  rtti 0x00410114  vptr at +0xc  destructor 0x0043d778
class OWL::TEditSearch : public OWL::TEdit, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TEdit
    /* +0x01c */ OWL::TFindReplaceDialog::TData m_1c;
    // vtable at 0x004644d0 (22 slots)
    //   [ 0] 0x0043d778  OWL::TEditSearch::~TEditSearch
    //   [ 1] 0x00432678  OWL::TControl::vf1
    //   [ 2] 0x004326d4  OWL::TControl::vf2
    //   [ 3] 0x004326f4  OWL::TControl::vf3
    //   [ 4] 0x00432734  OWL::TControl::vf4
    //   [ 5] 0x00432774  OWL::TControl::vf5
    //   [ 6] 0x004327a4  OWL::TControl::vf6
    //   [ 7] 0x004327cc  OWL::TControl::vf7
    //   [ 8] 0x0043d710  OWL::TEditSearch::Find
    //   [ 9] 0x0043acbc  OWL::TEdit::vf9
    //   [10] 0x0043b4cc  OWL::TEdit::vf10
    //   [11] 0x0043b38c  OWL::TEdit::vf11
    //   [12] 0x0043b228  OWL::TEdit::vf12
    //   [13] 0x0041019c  OWL::TEdit::vf13
    //   [14] 0x004101bc  OWL::TEdit::vf14
    //   [15] 0x004101e0  OWL::TEdit::vf15
    //   [16] 0x0043b070  OWL::TEdit::vf16
    //   [17] 0x00410208  OWL::TEdit::vf17
    //   [18] 0x00410224  OWL::TEdit::vf18
    //   [19] 0x00410250  OWL::TEdit::vf19
    //   [20] 0x0043d8e8  OWL::TEditSearch::vf20
    //   [21] 0x0043acd4  OWL::TEdit::vf21
    // response table at 0x0046dd00 (7 entries)
    //   EV_COMMAND(24351)                            -> 0x0043dc00  OWL::TEditSearch::Cmd24351
    //   EV_COMMAND_ENABLE(24351)                     -> 0x0043ddb4  OWL::TEditSearch::CeRange24351to24352
    //   EV_COMMAND(24352)                            -> 0x0043dcd8  OWL::TEditSearch::Cmd24352
    //   EV_COMMAND_ENABLE(24352)                     -> 0x0043ddb4  OWL::TEditSearch::CeRange24351to24352
    //   EV_COMMAND(24353)                            -> 0x0043ddd4  OWL::TEditSearch::Cmd24353
    //   EV_COMMAND_ENABLE(24353)                     -> 0x0043ddfc  OWL::TEditSearch::CeCmd24353
    //   message id 0 in the static table (filled at run time or WM_NULL) -> 0x0043de28  OWL::TEditSearch::EvRegisteredMsg_43de28
};
```

### OWL::TEditSearch::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x0043e610  vptr at +0x0
class OWL::TEditSearch::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0046dff8 (5 slots)
    //   [ 0] 0x00410058  OWL::TNewStreamer::vf0
    //   [ 1] 0x0043e418  OWL::TEditSearch::Streamer::vf1
    //   [ 2] 0x0043e4b8  OWL::TEditSearch::Streamer::vf2
    //   [ 3] 0x0043e660  OWL::TEditSearch::Streamer::vf3
    //   [ 4] 0x0043e760  vshared_43e760
};
```

### OWL::TEnumInfoStr

```cpp
// sizeof 12 (0xc)  rtti 0x0042e5b4  no vptr  destructor 0x0042e604
class OWL::TEnumInfoStr {
};
```

### OWL::TErrorMode

```cpp
// sizeof 4 (0x4)  rtti 0x0040fc40  no vptr  destructor 0x0040fdf0
class OWL::TErrorMode {
};
```

### OWL::TEventHandler

```cpp
// sizeof 4 (0x4)  rtti 0x00404444  vptr at +0x0
class OWL::TEventHandler {
    // vtable at 0x00462234 (1 slots)
    //   [ 0] 0x004179c4  OWL::TEventHandler::vf0
};
```

### OWL::TFile

```cpp
// sizeof 17 (0x11)  rtti 0x00415b5c  vptr at +0x0  destructor 0x0043f27c
class OWL::TFile {
    // vtable at 0x00466164 (33 slots)
    //   [ 0] 0x0043f27c  OWL::TFile::~TFile
    //   [ 1] 0x00415ba4  OWL::TFile::vf1
    //   [ 2] 0x0043f348  OWL::TFile::vf2
    //   [ 3] 0x0043f410  OWL::TFile::vf3
    //   [ 4] 0x00415bb0  OWL::TFile::vf4
    //   [ 5] 0x00415bcc  OWL::TFile::vf5
    //   [ 6] 0x00415be0  OWL::TFile::vf6
    //   [ 7] 0x00415bf4  OWL::TFile::vf7
    //   [ 8] 0x00415c0c  OWL::TFile::vf8
    //   [ 9] 0x00415c20  OWL::TFile::vf9
    //   [10] 0x00415c34  OWL::TFile::vf10
    //   [11] 0x00415c54  OWL::TFile::vf11
    //   [12] 0x00415c70  OWL::TFile::vf12
    //   [13] 0x00415c8c  OWL::TFile::vf13
    //   [14] 0x0043f4a4  OWL::TFile::vf14
    //   [15] 0x0043f4b8  OWL::TFile::vf15
    //   [16] 0x0043f4d4  OWL::TFile::vf16
    //   [17] 0x00415ca8  OWL::TFile::vf17
    //   [18] 0x00415cc8  OWL::TFile::vf18
    //   [19] 0x0043fbcc  OWL::TFile::vf19
    //   [20] 0x0043fbe8  OWL::TFile::vf20
    //   [21] 0x0043fc08  OWL::TFile::vf21
    //   [22] 0x0043fc28  OWL::TFile::vf22
    //   [23] 0x0043fc4c  OWL::TFile::vf23
    //   [24] 0x0043fc6c  OWL::TFile::vf24
    //   [25] 0x00415ce8  OWL::TFile::vf25
    //   [26] 0x0043fc90  OWL::TFile::vf26
    //   [27] 0x0043fca8  OWL::TFile::vf27
    //   [28] 0x0043fcc4  OWL::TFile::vf28
    //   [29] 0x0043fce0  OWL::TFile::vf29
    //   [30] 0x0043fcfc  OWL::TFile::vf30
    //   [31] 0x0043fd18  OWL::TFile::vf31
    //   [32] 0x00415d10  OWL::TFile::vf32
};
```

### OWL::TFileHandle

```cpp
// sizeof 4 (0x4)  rtti 0x0043ed34  vptr at +0x0  destructor 0x0043ed84
class OWL::TFileHandle {
    // vtable at 0x0046e17c (23 slots)
    //   [ 0] 0x0043ed84  OWL::TFileHandle::~TFileHandle
    //   [ 1] 0x0045d604  vshared_45d604
    //   [ 2] 0x0045d604  vshared_45d604
    //   [ 3] 0x0045d604  vshared_45d604
    //   [ 4] 0x0045d604  vshared_45d604
    //   [ 5] 0x0045d604  vshared_45d604
    //   [ 6] 0x0045d604  vshared_45d604
    //   [ 7] 0x0045d604  vshared_45d604
    //   [ 8] 0x0045d604  vshared_45d604
    //   [ 9] 0x0045d604  vshared_45d604
    //   [10] 0x0045d604  vshared_45d604
    //   [11] 0x0045d604  vshared_45d604
    //   [12] 0x0045d604  vshared_45d604
    //   [13] 0x0045d604  vshared_45d604
    //   [14] 0x0045d604  vshared_45d604
    //   [15] 0x0045d604  vshared_45d604
    //   [16] 0x0045d604  vshared_45d604
    //   [17] 0x0045d604  vshared_45d604
    //   [18] 0x0045d604  vshared_45d604
    //   [19] 0x0045d604  vshared_45d604
    //   [20] 0x0045d604  vshared_45d604
    //   [21] 0x0045d604  vshared_45d604
    //   [22] 0x0045d604  vshared_45d604
};
```

### OWL::TFileName

```cpp
// sizeof 357 (0x165)  rtti 0x00423cd8  no vptr  destructor 0x00423d54
class OWL::TFileName {
    /* +0x000 */ std::string m_0;
    /* +0x010 */ std::string m_10;
    /* +0x020 */ std::string m_20;
    /* +0x030 */ std::string m_30;
    /* +0x040 */ std::string m_40;
    /* +0x050 */ std::string m_50;
};
```

### OWL::TFileOpenDialog

```cpp
// sizeof 270 (0x10e)  rtti 0x00403d50  vptr at +0xc  destructor 0x004046e0
class OWL::TFileOpenDialog : public OWL::TOpenSaveDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TOpenSaveDialog
    // vtable at 0x0046f880 (16 slots)
    //   [ 0] 0x004046e0  OWL::TFileOpenDialog::~TFileOpenDialog
    //   [ 1] 0x00445e5c  OWL::TOpenSaveDialog::vf1
    //   [ 2] 0x00434ff4  OWL::TDialog::vf2
    //   [ 3] 0x00434cd8  OWL::TDialog::vf3
    //   [ 4] 0x00415884  OWL::TCommonDialog::vf4
    //   [ 5] 0x00434dcc  OWL::TDialog::vf5
    //   [ 6] 0x00446004  OWL::TFileOpenDialog::vf6
    //   [ 7] 0x004348d4  OWL::TDialog::vf7
    //   [ 8] 0x00435068  OWL::TDialog::vf8
    //   [ 9] 0x004350c0  OWL::TDialog::vf9
    //   [10] 0x00435388  OWL::TDialog::vf10
    //   [11] 0x00415860  OWL::TCommonDialog::vf11
    //   [12] 0x00434968  OWL::TDialog::vf12
    //   [13] 0x00434988  OWL::TDialog::vf13
    //   [14] 0x00445bb8  OWL::TOpenSaveDialog::vf14
    //   [15] 0x00445ea0  OWL::TOpenSaveDialog::vf15
};
```

### OWL::TFileSaveDialog

```cpp
// sizeof 270 (0x10e)  rtti 0x00403fa8  vptr at +0xc  destructor 0x004044f4
class OWL::TFileSaveDialog : public OWL::TOpenSaveDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TOpenSaveDialog
    // vtable at 0x0046f78c (16 slots)
    //   [ 0] 0x004044f4  OWL::TFileSaveDialog::~TFileSaveDialog
    //   [ 1] 0x00445e5c  OWL::TOpenSaveDialog::vf1
    //   [ 2] 0x00434ff4  OWL::TDialog::vf2
    //   [ 3] 0x00434cd8  OWL::TDialog::vf3
    //   [ 4] 0x00415884  OWL::TCommonDialog::vf4
    //   [ 5] 0x00434dcc  OWL::TDialog::vf5
    //   [ 6] 0x004461bc  OWL::TFileSaveDialog::vf6
    //   [ 7] 0x004348d4  OWL::TDialog::vf7
    //   [ 8] 0x00435068  OWL::TDialog::vf8
    //   [ 9] 0x004350c0  OWL::TDialog::vf9
    //   [10] 0x00435388  OWL::TDialog::vf10
    //   [11] 0x00415860  OWL::TCommonDialog::vf11
    //   [12] 0x00434968  OWL::TDialog::vf12
    //   [13] 0x00434988  OWL::TDialog::vf13
    //   [14] 0x00445bb8  OWL::TOpenSaveDialog::vf14
    //   [15] 0x00445ea0  OWL::TOpenSaveDialog::vf15
};
```

### OWL::TFindDialog

```cpp
// sizeof 222 (0xde)  rtti 0x0043ded8  vptr at +0xc  destructor 0x0043e004
class OWL::TFindDialog : public OWL::TFindReplaceDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TFindReplaceDialog
    // vtable at 0x0046e868 (15 slots)
    //   [ 0] 0x0043e004  OWL::TFindDialog::~TFindDialog
    //   [ 1] 0x0044105c  OWL::TFindReplaceDialog::vf1
    //   [ 2] 0x00434ff4  OWL::TDialog::vf2
    //   [ 3] 0x00434cd8  OWL::TDialog::vf3
    //   [ 4] 0x004411d4  OWL::TFindDialog::vf4
    //   [ 5] 0x00434dcc  OWL::TDialog::vf5
    //   [ 6] 0x0041588c  OWL::TCommonDialog::vf6
    //   [ 7] 0x004348d4  OWL::TDialog::vf7
    //   [ 8] 0x00435068  OWL::TDialog::vf8
    //   [ 9] 0x004350c0  OWL::TDialog::vf9
    //   [10] 0x00435388  OWL::TDialog::vf10
    //   [11] 0x00415860  OWL::TCommonDialog::vf11
    //   [12] 0x00434968  OWL::TDialog::vf12
    //   [13] 0x00434988  OWL::TDialog::vf13
    //   [14] 0x00440e30  OWL::TFindReplaceDialog::Find
};
```

### OWL::TFindReplaceDialog

```cpp
// sizeof 222 (0xde)  rtti 0x0043df80  vptr at +0xc  destructor 0x0043e154
class OWL::TFindReplaceDialog : public OWL::TCommonDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TCommonDialog
    // vtable at 0x0046e958 (15 slots)
    //   [ 0] 0x0043e154  OWL::TFindReplaceDialog::~TFindReplaceDialog
    //   [ 1] 0x0044105c  OWL::TFindReplaceDialog::vf1
    //   [ 2] 0x00434ff4  OWL::TDialog::vf2
    //   [ 3] 0x00434cd8  OWL::TDialog::vf3
    //   [ 4] 0x00441054  OWL::TFindReplaceDialog::vf4
    //   [ 5] 0x00434dcc  OWL::TDialog::vf5
    //   [ 6] 0x0041588c  OWL::TCommonDialog::vf6
    //   [ 7] 0x004348d4  OWL::TDialog::vf7
    //   [ 8] 0x00435068  OWL::TDialog::vf8
    //   [ 9] 0x004350c0  OWL::TDialog::vf9
    //   [10] 0x00435388  OWL::TDialog::vf10
    //   [11] 0x00415860  OWL::TCommonDialog::vf11
    //   [12] 0x00434968  OWL::TDialog::vf12
    //   [13] 0x00434988  OWL::TDialog::vf13
    //   [14] 0x00440e30  OWL::TFindReplaceDialog::Find
    // response table at 0x0046e6d0 (1 entries)
    //   WM_NCDESTROY                                 -> 0x00441078  OWL::TFindReplaceDialog::EvNCDestroy
};
```

### OWL::TFindReplaceDialog::TData

```cpp
// sizeof 20 (0x14)  rtti 0x004104b4  no vptr  destructor 0x00440e00
class OWL::TFindReplaceDialog::TData {
};
```

### OWL::TFloatingFrame

```cpp
// sizeof 282 (0x11a)  rtti 0x00435e94  vptr at +0xc  destructor 0x00435f58
class OWL::TFloatingFrame : public OWL::TFrameWindow, public OWL::TTinyCaption, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TFrameWindow
    /* +0x04a */ // base subobject OWL::TTinyCaption
};
```

### OWL::TFloatingSlip

```cpp
// sizeof 294 (0x126)  rtti 0x00435cc8  vptr at +0xc  destructor 0x00435d9c
class OWL::TFloatingSlip : public OWL::TFloatingFrame, public OWL::TDockingSlip, public OWL::TDockable, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TFloatingFrame
    /* +0x084 */ // base subobject OWL::TDockingSlip
    /* +0x08c */ // base subobject OWL::TDockable
};
```

### OWL::TFont

```cpp
// sizeof 5 (0x5)  rtti 0x004127c8  no vptr  destructor 0x00412878
class OWL::TFont : public OWL::TGdiObject {
    /* +0x000 */ // base subobject OWL::TGdiObject
};
```

### OWL::TFrameWindow

```cpp
// sizeof 224 (0xe0)  rtti 0x00404480  vptr at +0xc  destructor 0x00441be8
class OWL::TFrameWindow : public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    // vtable at 0x0046ecc8 (19 slots)
    //   [ 0] 0x00441be8  OWL::TFrameWindow::~TFrameWindow
    //   [ 1] 0x00442098  OWL::TFrameWindow::vf1
    //   [ 2] 0x00442050  OWL::TFrameWindow::vf2
    //   [ 3] 0x004432e0  OWL::TFrameWindow::vf3
    //   [ 4] 0x00425ab0  OWL::TFrameWindow::vf4
    //   [ 5] 0x00425ab8  OWL::TFrameWindow::vf5
    //   [ 6] 0x004422bc  OWL::TFrameWindow::vf6
    //   [ 7] 0x004422c8  OWL::TFrameWindow::vf7
    //   [ 8] 0x0044239c  OWL::TFrameWindow::vf8
    //   [ 9] 0x00441eb4  OWL::TFrameWindow::vf9
    //   [10] 0x00441fc8  OWL::TFrameWindow::vf10
    //   [11] 0x00441e38  Child4464308_Notify4408014_441e38
    //   [12] 0x00442778  OWL::TFrameWindow::vf12
    //   [13] 0x004423d4  OWL::TFrameWindow::vf13
    //   [14] 0x00441f38  OWL::TFrameWindow::vf14
    //   [15] 0x00441fa8  OWL::TFrameWindow::vf15
    //   [16] 0x00442eb4  OWL::TFrameWindow::vf16
    //   [17] 0x0044305c  OWL::TFrameWindow::vf17
    //   [18] 0x004418d4  OWL::TFrameWindow::Find
    // response table at 0x0046ea5c (9 entries)
    //   WM_PAINT                                     -> 0x004425a0  OWL::TFrameWindow::EvPaint
    //   WM_ERASEBKGND                                -> 0x00442690  OWL::TFrameWindow::EvEraseBkgnd
    //   WM_QUERYDRAGICON                             -> 0x004426fc  OWL::TFrameWindow::EvQuerydragicon
    //   WM_INITMENUPOPUP                             -> 0x00441db4  OWL::TFrameWindow::EvInitMenuPopup
    //   WM_SETFOCUS                                  -> 0x004427d4  OWL::TFrameWindow::EvSetFocus
    //   WM_SIZE                                      -> 0x004430c0  OWL::TFrameWindow::EvSize
    //   WM_PARENTNOTIFY                              -> 0x0044283c  OWL::TFrameWindow::EvParentNotify
    //   WM_QUERYNEWPALETTE                           -> 0x004428e0  OWL::TFrameWindow::EvQuerynewpalette
    //   WM_PALETTECHANGED                            -> 0x00442924  OWL::TFrameWindow::EvPalettechanged
};
```

### OWL::TGadget

```cpp
// sizeof 68 (0x44)  rtti 0x0041265c  vptr at +0x0  destructor 0x00419098
class OWL::TGadget {
    // vtable at 0x00467058 (21 slots)
    //   [ 0] 0x00419098  OWL::TGadget::~TGadget
    //   [ 1] 0x004190f8  OWL::TGadget::vf1
    //   [ 2] 0x004197c4  OWL::TGadget::vf2
    //   [ 3] 0x00419134  OWL::TGadget::vf3
    //   [ 4] 0x004190d0  OWL::TGadget::vf4
    //   [ 5] 0x004190e8  OWL::TGadget::vf5
    //   [ 6] 0x004190f0  OWL::TGadget::vf6
    //   [ 7] 0x0041926c  OWL::TGadget::vf7
    //   [ 8] 0x00419328  OWL::TGadget::vf8
    //   [ 9] 0x004193fc  OWL::TGadget::vf9
    //   [10] 0x00419330  OWL::TGadget::vf10
    //   [11] 0x0041921c  OWL::TGadget::vf11
    //   [12] 0x004197b0  OWL::TGadget::vf12
    //   [13] 0x0041967c  OWL::TGadget::vf13
    //   [14] 0x0041995c  OWL::TGadget::vf14
    //   [15] 0x0041997c  OWL::TGadget::vf15
    //   [16] 0x00419984  OWL::TGadget::vf16
    //   [17] 0x00419a50  OWL::TGadget::vf17
    //   [18] 0x00419a88  OWL::TGadget::vf18
    //   [19] 0x00419a6c  OWL::TGadget::vf19
    //   [20] 0x00419a90  OWL::TGadget::vf20
};
```

### OWL::TGadgetList

```cpp
// sizeof 12 (0xc)  rtti 0x004164c0  vptr at +0x0  destructor 0x00419e2c
class OWL::TGadgetList {
    // vtable at 0x00467114 (7 slots)
    //   [ 0] 0x00419e2c  OWL::TGadgetList::~TGadgetList
    //   [ 1] 0x00419f14  OWL::TGadgetList::vf1
    //   [ 2] 0x00419f68  OWL::TGadgetList::vf2
    //   [ 3] 0x00419ff8  OWL::TGadgetList::vf3
    //   [ 4] 0x0041a058  OWL::TGadgetList::vf4
    //   [ 5] 0x0041a060  OWL::TGadgetList::vf5
    //   [ 6] 0x0041c0e0  OWL::TGadgetList::vf6
};
```

### OWL::TGadgetWindow

```cpp
// sizeof 227 (0xe3)  rtti 0x00416440  vptr at +0x18  destructor 0x0041a59c
class OWL::TGadgetWindow : public OWL::TGadgetList, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x004 */ // base subobject OWL::TGadgetList
    // vtable at 0x00467580 (27 slots)
    //   [ 0] 0x0041a59c  OWL::TGadgetWindow::~TGadgetWindow
    //   [ 1] 0x0041aacc  OWL::TGadgetWindow::vf1
    //   [ 2] 0x0041aae8  OWL::TGadgetWindow::vf2
    //   [ 3] 0x004162f4  OWL::TGadgetWindow::vf3
    //   [ 4] 0x0041c104  OWL::TGadgetWindow::vf4
    //   [ 5] 0x0041b758  OWL::TGadgetWindow::vf5
    //   [ 6] 0x0041b780  OWL::TGadgetWindow::vf6
    //   [ 7] 0x0041b7e8  OWL::TGadgetWindow::vf7
    //   [ 8] 0x0041b7a8  OWL::TGadgetWindow::vf8
    //   [ 9] 0x0041b80c  OWL::TGadgetWindow::vf9
    //   [10] 0x0041b88c  OWL::TGadgetWindow::vf10
    //   [11] 0x0041b8e4  OWL::TGadgetWindow::vf11
    //   [12] 0x0041a704  OWL::TGadgetWindow::vf12
    //   [13] 0x0041a8dc  OWL::TGadgetWindow::vf13
    //   [14] 0x0041a914  OWL::TGadgetWindow::vf14
    //   [15] 0x0041bbec  OWL::TGadgetWindow::vf15
    //   [16] 0x0041ab6c  OWL::TGadgetWindow::vf16
    //   [17] 0x0041b70c  OWL::TGadgetWindow::vf17
    //   [18] 0x0041ac6c  OWL::TGadgetWindow::vf18
    //   [19] 0x0041bd80  OWL::TGadgetWindow::vf19
    //   [20] 0x0041ac24  OWL::TGadgetWindow::vf20
    //   [21] 0x0041b97c  OWL::TGadgetWindow::vf21
    //   [22] 0x0041ba40  OWL::TGadgetWindow::vf22
    //   [23] 0x0041baac  OWL::TGadgetWindow::vf23
    //   [24] 0x0041c2b4  OWL::TGadgetWindow::vf24
    //   [25] 0x0041c380  OWL::TGadgetWindow::vf25
    //   [26] 0x0041a068  OWL::TGadgetWindow::Find
    // response table at 0x00467150 (9 entries)
    //   WM_LBUTTONDOWN                               -> 0x0041bdb0  OWL::TGadgetWindow::EvLButtonDown
    //   WM_LBUTTONUP                                 -> 0x0041be30  OWL::TGadgetWindow::EvLButtonUp
    //   WM_LBUTTONDBLCLK                             -> 0x0041bea0  OWL::TGadgetWindow::EvLButtonDblClk
    //   WM_RBUTTONDOWN                               -> 0x0041becc  OWL::TGadgetWindow::EvRButtonDown
    //   WM_RBUTTONUP                                 -> 0x0041bf44  OWL::TGadgetWindow::EvRButtonUp
    //   WM_MOUSEMOVE                                 -> 0x0041bfb4  OWL::TGadgetWindow::EvMouseMove
    //   WM_WINDOWPOSCHANGING                         -> 0x0041bb68  OWL::TGadgetWindow::EvWindowPosChanging
    //   WM_SYSCOLORCHANGE                            -> 0x0041a6e4  OWL::TGadgetWindow::EvSysColorChange
    //   message 0x7ef2                               -> 0x0041bb34  OWL::TGadgetWindow::EvMsg_7ef2
};
```

### OWL::TGadgetWindow::TLayoutInfo

```cpp
// sizeof 12 (0xc)  rtti 0x0041aa18  no vptr  destructor 0x0041c490
class OWL::TGadgetWindow::TLayoutInfo {
    /* +0x008 */ OWL::TAPointer<OWL::TRect> m_8;
};
```

### OWL::TGadgetWindowFont

```cpp
// sizeof 5 (0x5)  rtti 0x0041c538  no vptr  destructor 0x0041c6d8
class OWL::TGadgetWindowFont : public OWL::TFont {
    /* +0x000 */ // base subobject OWL::TFont
};
```

### OWL::TGdiBase

```cpp
// sizeof 5 (0x5)  rtti 0x00404920  no vptr
class OWL::TGdiBase {
};
```

### OWL::TGdiObject

```cpp
// sizeof 5 (0x5)  rtti 0x00412394  no vptr  destructor 0x0041d334
class OWL::TGdiObject : public OWL::TGdiBase {
    /* +0x000 */ // base subobject OWL::TGdiBase
};
```

### OWL::THatch8x8Brush

```cpp
// sizeof 5 (0x5)  rtti 0x00427400  no vptr  destructor 0x00427528
class OWL::THatch8x8Brush : public OWL::TBrush {
    /* +0x000 */ // base subobject OWL::TBrush
};
```

### OWL::TLayoutWindow

```cpp
// sizeof 199 (0xc7)  rtti 0x00412754  vptr at +0xc  destructor 0x0041dd10
class OWL::TLayoutWindow : public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    // vtable at 0x00467c48 (4 slots)
    //   [ 0] 0x0041dd10  OWL::TLayoutWindow::~TLayoutWindow
    //   [ 1] 0x0041de40  OWL::TLayoutWindow::vf1
    //   [ 2] 0x0041e324  OWL::TLayoutWindow::vf2
    //   [ 3] 0x0041dc70  OWL::TLayoutWindow::Find
    // response table at 0x00467a54 (1 entries)
    //   WM_SIZE                                      -> 0x0041e2cc  OWL::TLayoutWindow::EvSize
};
```

### OWL::TLayoutWindow::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x0041f214  vptr at +0x0
class OWL::TLayoutWindow::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x00467c2c (4 slots)
    //   [ 0] 0x00410058  OWL::TNewStreamer::vf0
    //   [ 1] 0x0041eddc  OWL::TLayoutWindow::Streamer::vf1
    //   [ 2] 0x0041ede8  OWL::TLayoutWindow::Streamer::vf2
    //   [ 3] 0x0041f268  OWL::TLayoutWindow::Streamer::vf3
};
```

### OWL::TMBlockList<TStandardAllocator>

```cpp
// sizeof 4 (0x4)  rtti 0x00415af8  no vptr  destructor 0x00415d44
class OWL::TMBlockList<TStandardAllocator> {
};
```

### OWL::TMemDCCache

```cpp
// sizeof 80 (0x50)  rtti 0x004205bc  no vptr  destructor 0x00420674
class OWL::TMemDCCache {
};
```

### OWL::TMemoryDC

```cpp
// sizeof 37 (0x25)  rtti 0x00411e30  vptr at +0x5  destructor 0x00420914
class OWL::TMemoryDC : public OWL::TCreatedDC {
    /* +0x000 */ // base subobject OWL::TCreatedDC
    // vtable at 0x004682b4 (25 slots)
    //   [ 0] 0x00420914  OWL::TMemoryDC::~TMemoryDC
    //   [ 1] 0x00416ee8  OWL::TDC::vf1
    //   [ 2] 0x00416ef8  OWL::TDC::vf2
    //   [ 3] 0x00416f14  OWL::TDC::vf3
    //   [ 4] 0x00416f30  OWL::TDC::vf4
    //   [ 5] 0x00417368  OWL::TMemoryDC::vf5
    //   [ 6] 0x00416c4c  OWL::TDC::vf6
    //   [ 7] 0x00416cd0  OWL::TDC::vf7
    //   [ 8] 0x00416f4c  OWL::TDC::vf8
    //   [ 9] 0x00416f98  OWL::TDC::vf9
    //   [10] 0x00416fe4  OWL::TDC::vf10
    //   [11] 0x00417018  OWL::TDC::vf11
    //   [12] 0x00417064  OWL::TDC::vf12
    //   [13] 0x004170b0  OWL::TDC::vf13
    //   [14] 0x004170fc  OWL::TDC::vf14
    //   [15] 0x00417150  OWL::TDC::vf15
    //   [16] 0x0041719c  OWL::TDC::vf16
    //   [17] 0x004171f0  OWL::TDC::vf17
    //   [18] 0x00417228  OWL::TDC::vf18
    //   [19] 0x0041726c  OWL::TDC::vf19
    //   [20] 0x004172d4  OWL::TDC::vf20
    //   [21] 0x004172f4  OWL::TDC::vf21
    //   [22] 0x00417320  OWL::TDC::vf22
    //   [23] 0x00416b6c  OWL::TDC::vf23
    //   [24] 0x00420a04  OWL::TMemoryDC::vf24
};
```

### OWL::TMenu

```cpp
// sizeof 9 (0x9)  rtti 0x00410850  vptr at +0x0  destructor 0x00420b3c
class OWL::TMenu {
    // vtable at 0x0046858c (5 slots)
    //   [ 0] 0x00420b3c  OWL::TMenu::~TMenu
    //   [ 1] 0x004210e8  OWL::TMenu::vf1
    //   [ 2] 0x00420c3c  OWL::TMenu::vf2
    //   [ 3] 0x00420c44  OWL::TMenu::vf3
    //   [ 4] 0x0042111c  OWL::TMenu::vf4
};
```

### OWL::TMenuDescr

```cpp
// sizeof 41 (0x29)  rtti 0x0043e6bc  vptr at +0x0  destructor 0x00443440
class OWL::TMenuDescr : public OWL::TMenu {
    /* +0x000 */ // base subobject OWL::TMenu
    // vtable at 0x0046ee54 (4 slots)
    //   [ 0] 0x00443440  OWL::TMenuDescr::~TMenuDescr
    //   [ 1] 0x00443518  OWL::TMenuDescr::vf1
    //   [ 2] 0x00420c3c  OWL::TMenu::vf2
    //   [ 3] 0x00420c44  OWL::TMenu::vf3
};
```

### OWL::TMenuItemEnabler

```cpp
// sizeof 24 (0x18)  rtti 0x00424554  vptr at +0x0
class OWL::TMenuItemEnabler : public OWL::TCommandEnabler {
    /* +0x000 */ // base subobject OWL::TCommandEnabler
    // vtable at 0x0046ab9c (3 slots)
    //   [ 0] 0x0044191c  OWL::TMenuItemEnabler::vf0
    //   [ 1] 0x00441954  OWL::TMenuItemEnabler::vf1
    //   [ 2] 0x00441974  OWL::TMenuItemEnabler::vf2
};
```

### OWL::TMessageBar

```cpp
// sizeof 232 (0xe8)  rtti 0x00421420  vptr at +0x18  destructor 0x0042113c
class OWL::TMessageBar : public OWL::TGadgetWindow, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TGadgetWindow
    // vtable at 0x004685cc (28 slots)
    //   [ 0] 0x0042113c  OWL::TMessageBar::~TMessageBar
    //   [ 1] 0x0041aacc  OWL::TGadgetWindow::vf1
    //   [ 2] 0x0041aae8  OWL::TGadgetWindow::vf2
    //   [ 3] 0x004162f4  OWL::TGadgetWindow::vf3
    //   [ 4] 0x0041c104  OWL::TGadgetWindow::vf4
    //   [ 5] 0x0041b758  OWL::TGadgetWindow::vf5
    //   [ 6] 0x0041b780  OWL::TGadgetWindow::vf6
    //   [ 7] 0x0041b7e8  OWL::TGadgetWindow::vf7
    //   [ 8] 0x0041b7a8  OWL::TGadgetWindow::vf8
    //   [ 9] 0x0041b80c  OWL::TGadgetWindow::vf9
    //   [10] 0x0041b88c  OWL::TGadgetWindow::vf10
    //   [11] 0x0041b8e4  OWL::TGadgetWindow::vf11
    //   [12] 0x0041a704  OWL::TGadgetWindow::vf12
    //   [13] 0x0041a8dc  OWL::TGadgetWindow::vf13
    //   [14] 0x004213b4  OWL::TMessageBar::vf14
    //   [15] 0x0042124c  OWL::TMessageBar::vf15
    //   [16] 0x00421384  OWL::TMessageBar::vf16
    //   [17] 0x0041b70c  OWL::TGadgetWindow::vf17
    //   [18] 0x0041ac6c  OWL::TGadgetWindow::vf18
    //   [19] 0x0041bd80  OWL::TGadgetWindow::vf19
    //   [20] 0x0041ac24  OWL::TGadgetWindow::vf20
    //   [21] 0x0041b97c  OWL::TGadgetWindow::vf21
    //   [22] 0x0041ba40  OWL::TGadgetWindow::vf22
    //   [23] 0x0041baac  OWL::TGadgetWindow::vf23
    //   [24] 0x0041c2b4  OWL::TGadgetWindow::vf24
    //   [25] 0x0041c380  OWL::TGadgetWindow::vf25
    //   [26] 0x0041a068  OWL::TGadgetWindow::Find
    //   [27] 0x004213d8  OWL::TMessageBar::vf27
};
```

### OWL::TMMemBlocks<TStandardAllocator>

```cpp
// sizeof 25 (0x19)  rtti 0x00415d60  no vptr  destructor 0x00415e34
class OWL::TMMemBlocks<TStandardAllocator> {
    /* +0x004 */ OWL::TMMemStack<TStandardAllocator> m_4;
};
```

### OWL::TMMemStack<TStandardAllocator>

```cpp
// sizeof 17 (0x11)  rtti 0x00415dcc  no vptr  destructor 0x00415ef4
class OWL::TMMemStack<TStandardAllocator> {
    /* +0x000 */ OWL::TMBaseMemBlocks<TStandardAllocator> m_0;
};
```

### OWL::TModule

```cpp
// sizeof 13 (0xd)  rtti 0x004056d8  vptr at +0x0  destructor 0x00443cf8
class OWL::TModule : public OWL::TStreamableBase {
    /* +0x000 */ // base subobject OWL::TStreamableBase
    // vtable at 0x0046f5e0 (2 slots)
    //   [ 0] 0x00443cf8  OWL::TModule::~TModule
    //   [ 1] 0x00443e94  OWL::TModule::vf1
};
```

### OWL::TModule::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x00445990  vptr at +0x0
class OWL::TModule::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0046f6ac (4 slots)
    //   [ 0] 0x00410058  OWL::TNewStreamer::vf0
    //   [ 1] 0x0044585c  OWL::TModule::Streamer::vf1
    //   [ 2] 0x004458a4  OWL::TModule::Streamer::vf2
    //   [ 3] 0x004459dc  OWL::TModule::Streamer::vf3
};
```

### OWL::TMsgThread

```cpp
// sizeof 10 (0xa)  rtti 0x00405730  vptr at +0x0
class OWL::TMsgThread {
    // vtable at 0x00468794 (6 slots)
    //   [ 0] 0x00421724  OWL::TMsgThread::vf0
    //   [ 1] 0x004217c8  OWL::TMsgThread::vf1
    //   [ 2] 0x004217d0  OWL::TMsgThread::vf2
    //   [ 3] 0x0042186c  OWL::TMsgThread::vf3
    //   [ 4] 0x00421918  OWL::TMsgThread::vf4
    //   [ 5] 0x00421920  OWL::TMsgThread::vf5
};
```

### OWL::TNewStreamer

```cpp
// sizeof 8 (0x8)  rtti 0x004100cc  vptr at +0x0
class OWL::TNewStreamer : public OWL::TStreamer {
    /* +0x000 */ // base subobject OWL::TStreamer
    // vtable at 0x004644b4 (4 slots)
    //   [ 0] 0x00410058  OWL::TNewStreamer::vf0
    //   [ 1] 0x0045d604  vshared_45d604
    //   [ 2] 0x0045d604  vshared_45d604
    //   [ 3] 0x0045d604  vshared_45d604
};
```

### OWL::TObjInfo

```cpp
// sizeof 6 (0x6)  rtti 0x0041ce30  no vptr  destructor 0x0041d364
class OWL::TObjInfo {
};
```

### OWL::TOpenSaveDialog

```cpp
// sizeof 270 (0x10e)  rtti 0x004045a4  vptr at +0xc  destructor 0x004055b0
class OWL::TOpenSaveDialog : public OWL::TCommonDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TCommonDialog
    // vtable at 0x0046f974 (16 slots)
    //   [ 0] 0x004055b0  OWL::TOpenSaveDialog::~TOpenSaveDialog
    //   [ 1] 0x00445e5c  OWL::TOpenSaveDialog::vf1
    //   [ 2] 0x00434ff4  OWL::TDialog::vf2
    //   [ 3] 0x00434cd8  OWL::TDialog::vf3
    //   [ 4] 0x00415884  OWL::TCommonDialog::vf4
    //   [ 5] 0x00434dcc  OWL::TDialog::vf5
    //   [ 6] 0x0045d604  vshared_45d604
    //   [ 7] 0x004348d4  OWL::TDialog::vf7
    //   [ 8] 0x00435068  OWL::TDialog::vf8
    //   [ 9] 0x004350c0  OWL::TDialog::vf9
    //   [10] 0x00435388  OWL::TDialog::vf10
    //   [11] 0x00415860  OWL::TCommonDialog::vf11
    //   [12] 0x00434968  OWL::TDialog::vf12
    //   [13] 0x00434988  OWL::TDialog::vf13
    //   [14] 0x00445bb8  OWL::TOpenSaveDialog::vf14
    //   [15] 0x00445ea0  OWL::TOpenSaveDialog::vf15
};
```

### OWL::TOpenSaveDialog::TData

```cpp
// sizeof 40 (0x28)  rtti 0x00403cf8  no vptr  destructor 0x00445ad4
class OWL::TOpenSaveDialog::TData {
};
```

### OWL::TPaintDC

```cpp
// sizeof 101 (0x65)  rtti 0x00423b00  vptr at +0x5  destructor 0x00423a80
class OWL::TPaintDC : public OWL::TDC {
    /* +0x000 */ // base subobject OWL::TDC
    // vtable at 0x00468cb8 (25 slots)
    //   [ 0] 0x00423a80  OWL::TPaintDC::~TPaintDC
    //   [ 1] 0x00416ee8  OWL::TDC::vf1
    //   [ 2] 0x00416ef8  OWL::TDC::vf2
    //   [ 3] 0x00416f14  OWL::TDC::vf3
    //   [ 4] 0x00416f30  OWL::TDC::vf4
    //   [ 5] 0x00416bbc  OWL::TDC::vf5
    //   [ 6] 0x00416c4c  OWL::TDC::vf6
    //   [ 7] 0x00416cd0  OWL::TDC::vf7
    //   [ 8] 0x00416f4c  OWL::TDC::vf8
    //   [ 9] 0x00416f98  OWL::TDC::vf9
    //   [10] 0x00416fe4  OWL::TDC::vf10
    //   [11] 0x00417018  OWL::TDC::vf11
    //   [12] 0x00417064  OWL::TDC::vf12
    //   [13] 0x004170b0  OWL::TDC::vf13
    //   [14] 0x004170fc  OWL::TDC::vf14
    //   [15] 0x00417150  OWL::TDC::vf15
    //   [16] 0x0041719c  OWL::TDC::vf16
    //   [17] 0x004171f0  OWL::TDC::vf17
    //   [18] 0x00417228  OWL::TDC::vf18
    //   [19] 0x0041726c  OWL::TDC::vf19
    //   [20] 0x004172d4  OWL::TDC::vf20
    //   [21] 0x004172f4  OWL::TDC::vf21
    //   [22] 0x00417320  OWL::TDC::vf22
    //   [23] 0x00416b6c  OWL::TDC::vf23
    //   [24] 0x00423bac  OWL::TPaintDC::vf24
};
```

### OWL::TPalette

```cpp
// sizeof 5 (0x5)  rtti 0x00411f6c  no vptr  destructor 0x00412350
class OWL::TPalette : public OWL::TGdiObject {
    /* +0x000 */ // base subobject OWL::TGdiObject
};
```

### OWL::TPickListPopup

```cpp
// sizeof 163 (0xa3)  rtti 0x0042439c  vptr at +0x8  destructor 0x00424418
class OWL::TPickListPopup : public OWL::TWindow, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase {
    /* +0x000 */ // base subobject OWL::TWindow
    /* +0x086 */ OWL::TPopupMenu m_86;
    // vtable at 0x00468de0 (34 slots)
    //   [ 0] 0x00424418  OWL::TPickListPopup::~TPickListPopup
    //   [ 1] 0x00405060  OWL::TWindow::vf1
    //   [ 2] 0x0042dc00  OWL::TWindow::vf2
    //   [ 3] 0x0042cc40  OWL::TWindow::vf3
    //   [ 4] 0x0042c918  OWL::TWindow::vf4
    //   [ 5] 0x0042c8c8  OWL::TWindow::vf5
    //   [ 6] 0x0042c700  OWL::TWindow::vf6
    //   [ 7] 0x00424308  OWL::TPickListPopup::vf7
    //   [ 8] 0x0042ca98  OWL::TWindow::vf8
    //   [ 9] 0x0042cd50  OWL::TWindow::vf9
    //   [10] 0x0042afd4  OWL::TWindow::vf10
    //   [11] 0x0042b074  OWL::TWindow::vf11
    //   [12] 0x0042bce4  OWL::TWindow::vf12
    //   [13] 0x0042b164  OWL::TWindow::vf13
    //   [14] 0x0042b1f0  OWL::TWindow::vf14
    //   [15] 0x0042cd2c  OWL::TWindow::vf15
    //   [16] 0x0042b958  OWL::TWindow::vf16
    //   [17] 0x0042b7f0  OWL::TWindow::vf17
    //   [18] 0x00424388  OWL::TPickListPopup::vf18
    //   [19] 0x0042b538  OWL::TWindow::vf19
    //   [20] 0x0042b62c  OWL::TWindow::vf20
    //   [21] 0x0042c610  OWL::TWindow::vf21
    //   [22] 0x0042cb74  OWL::TWindow::vf22
    //   [23] 0x0042cbc0  OWL::TWindow::vf23
    //   [24] 0x0040506c  OWL::TWindow::vf24
    //   [25] 0x0042d620  OWL::TWindow::vf25
    //   [26] 0x00405090  OWL::TWindow::vf26
    //   [27] 0x004050ac  OWL::TWindow::vf27
    //   [28] 0x0042c780  OWL::TWindow::vf28
    //   [29] 0x0042c828  OWL::TWindow::vf29
    //   [30] 0x0042cad4  OWL::TWindow::vf30
    //   [31] 0x0042cb6c  OWL::TWindow::vf31
    //   [32] 0x0042b110  OWL::TWindow::vf32
    //   [33] 0x0042a9f8  OWL::TWindow::Find
};
```

### OWL::TPointer<OWL::TBitmap>

```cpp
// sizeof 4 (0x4)  rtti 0x0042745c  no vptr  destructor 0x00427578
class OWL::TPointer<OWL::TBitmap> : public OWL::TPointerBase<OWL::TBitmap> {
    /* +0x000 */ // base subobject OWL::TPointerBase<OWL::TBitmap>
};
```

### OWL::TPointer<OWL::TFont>

```cpp
// sizeof 4 (0x4)  rtti 0x004289b8  no vptr  destructor 0x0042a438
class OWL::TPointer<OWL::TFont> : public OWL::TPointerBase<OWL::TFont> {
    /* +0x000 */ // base subobject OWL::TPointerBase<OWL::TFont>
};
```

### OWL::TPointer<OWL::TStreamer>

```cpp
// sizeof 4 (0x4)  rtti 0x00422b84  no vptr  destructor 0x004231d0
class OWL::TPointer<OWL::TStreamer> : public OWL::TPointerBase<OWL::TStreamer> {
    /* +0x000 */ // base subobject OWL::TPointerBase<OWL::TStreamer>
};
```

### OWL::TPointerBase<char>

```cpp
// sizeof 4 (0x4)  rtti 0x00411154  no vptr
class OWL::TPointerBase<char> {
};
```

### OWL::TPointerBase<OWL::TBitmap>

```cpp
// sizeof 4 (0x4)  rtti 0x004274e0  no vptr
class OWL::TPointerBase<OWL::TBitmap> {
};
```

### OWL::TPointerBase<OWL::TDocTemplate *>

```cpp
// sizeof 4 (0x4)  rtti 0x00439260  no vptr
class OWL::TPointerBase<OWL::TDocTemplate *> {
};
```

### OWL::TPointerBase<OWL::TFont>

```cpp
// sizeof 4 (0x4)  rtti 0x0042a27c  no vptr
class OWL::TPointerBase<OWL::TFont> {
};
```

### OWL::TPointerBase<OWL::TRect>

```cpp
// sizeof 4 (0x4)  rtti 0x0041c720  no vptr
class OWL::TPointerBase<OWL::TRect> {
};
```

### OWL::TPointerBase<OWL::TStreamer>

```cpp
// sizeof 4 (0x4)  rtti 0x00423078  no vptr
class OWL::TPointerBase<OWL::TStreamer> {
};
```

### OWL::TPopupMenu

```cpp
// sizeof 9 (0x9)  rtti 0x00410898  vptr at +0x0  destructor 0x004108f0
class OWL::TPopupMenu : public OWL::TMenu {
    /* +0x000 */ // base subobject OWL::TMenu
    // vtable at 0x00468570 (4 slots)
    //   [ 0] 0x004108f0  OWL::TPopupMenu::~TPopupMenu
    //   [ 1] 0x004210e8  OWL::TMenu::vf1
    //   [ 2] 0x00420c3c  OWL::TMenu::vf2
    //   [ 3] 0x00420c44  OWL::TMenu::vf3
};
```

### OWL::TPWrittenObjects::TPWObj

```cpp
// sizeof 8 (0x8)  rtti 0x004230c4  no vptr
class OWL::TPWrittenObjects::TPWObj {
};
```

### OWL::TRadioButton

```cpp
// sizeof 176 (0xb0)  rtti 0x004053d0  vptr at +0xc  destructor 0x0040587c
class OWL::TRadioButton : public OWL::TCheckBox, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TCheckBox
    // vtable at 0x0046facc (12 slots)
    //   [ 0] 0x0040587c  OWL::TRadioButton::~TRadioButton
    //   [ 1] 0x00432678  OWL::TControl::vf1
    //   [ 2] 0x004326d4  OWL::TControl::vf2
    //   [ 3] 0x004326f4  OWL::TControl::vf3
    //   [ 4] 0x00432734  OWL::TControl::vf4
    //   [ 5] 0x00432774  OWL::TControl::vf5
    //   [ 6] 0x004327a4  OWL::TControl::vf6
    //   [ 7] 0x004327cc  OWL::TControl::vf7
    //   [ 8] 0x00446594  OWL::TRadioButton::Find
    //   [ 9] 0x00446714  OWL::TRadioButton::vf9
    //   [10] 0x0043192c  OWL::TButton::vf10
    //   [11] 0x00432180  OWL::TCheckBox::vf11
    // response table at 0x0046fa6c (1 entries)
    //   EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)      -> 0x00446734  OWL::TRadioButton::BNClicked
};
```

### OWL::TRegion

```cpp
// sizeof 5 (0x5)  rtti 0x0041bd28  no vptr  destructor 0x00424874
class OWL::TRegion : public OWL::TGdiBase {
    /* +0x000 */ // base subobject OWL::TGdiBase
};
```

### OWL::TRegKey

```cpp
// sizeof 17 (0x11)  rtti 0x00410b60  no vptr  destructor 0x00410d44
class OWL::TRegKey {
};
```

### OWL::TRegLink

```cpp
// sizeof 12 (0xc)  rtti 0x004248b0  vptr at +0x0  destructor 0x004248fc
class OWL::TRegLink {
    // vtable at 0x00468f24 (1 slots)
    //   [ 0] 0x004248fc  OWL::TRegLink::~TRegLink
};
```

### OWL::TRegValue

```cpp
// sizeof 24 (0x18)  rtti 0x00411194  no vptr  destructor 0x00410ec0
class OWL::TRegValue {
};
```

### OWL::TReplaceDialog

```cpp
// sizeof 222 (0xde)  rtti 0x0043de58  vptr at +0xc  destructor 0x0043e0ac
class OWL::TReplaceDialog : public OWL::TFindReplaceDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TFindReplaceDialog
    // vtable at 0x0046e778 (15 slots)
    //   [ 0] 0x0043e0ac  OWL::TReplaceDialog::~TReplaceDialog
    //   [ 1] 0x0044105c  OWL::TFindReplaceDialog::vf1
    //   [ 2] 0x00434ff4  OWL::TDialog::vf2
    //   [ 3] 0x00434cd8  OWL::TDialog::vf3
    //   [ 4] 0x00441318  OWL::TReplaceDialog::vf4
    //   [ 5] 0x00434dcc  OWL::TDialog::vf5
    //   [ 6] 0x0041588c  OWL::TCommonDialog::vf6
    //   [ 7] 0x004348d4  OWL::TDialog::vf7
    //   [ 8] 0x00435068  OWL::TDialog::vf8
    //   [ 9] 0x004350c0  OWL::TDialog::vf9
    //   [10] 0x00435388  OWL::TDialog::vf10
    //   [11] 0x00415860  OWL::TCommonDialog::vf11
    //   [12] 0x00434968  OWL::TDialog::vf12
    //   [13] 0x00434988  OWL::TDialog::vf13
    //   [14] 0x00440e30  OWL::TFindReplaceDialog::Find
};
```

### OWL::TResource<OWL::TOOLBARTEMPLATE,241>

```cpp
// sizeof 8 (0x8)  rtti 0x004246ec  no vptr  destructor 0x00424644
class OWL::TResource<OWL::TOOLBARTEMPLATE,241> {
};
```

### OWL::TRichEdit

```cpp
// sizeof 254 (0xfe)  rtti 0x0040f960  vptr at +0xc  destructor 0x0040fe14
class OWL::TRichEdit : public OWL::TEditFile, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TEditFile
    // vtable at 0x00464708 (30 slots)
    //   [ 0] 0x0040fe14  OWL::TRichEdit::~TRichEdit
    //   [ 1] 0x00432678  OWL::TControl::vf1
    //   [ 2] 0x004326d4  OWL::TControl::vf2
    //   [ 3] 0x004326f4  OWL::TControl::vf3
    //   [ 4] 0x00432734  OWL::TControl::vf4
    //   [ 5] 0x00432774  OWL::TControl::vf5
    //   [ 6] 0x004327a4  OWL::TControl::vf6
    //   [ 7] 0x004327cc  OWL::TControl::vf7
    //   [ 8] 0x0040ef00  OWL::TRichEdit::Find
    //   [ 9] 0x0043acbc  OWL::TEdit::vf9
    //   [10] 0x0040f6a8  OWL::TRichEdit::vf10
    //   [11] 0x0040f4dc  OWL::TRichEdit::vf11
    //   [12] 0x0040f164  OWL::TRichEdit::vf12
    //   [13] 0x0040f0a8  OWL::TRichEdit::vf13
    //   [14] 0x004101bc  OWL::TEdit::vf14
    //   [15] 0x0040f0fc  OWL::TRichEdit::vf15
    //   [16] 0x0040f1b4  OWL::TRichEdit::vf16
    //   [17] 0x0040f270  OWL::TRichEdit::vf17
    //   [18] 0x00410390  OWL::TRichEdit::vf18
    //   [19] 0x004103c4  OWL::TRichEdit::vf19
    //   [20] 0x0040f504  OWL::TRichEdit::vf20
    //   [21] 0x0043d274  OWL::TEditFile::vf21
    //   [22] 0x0043cd88  OWL::TEditFile::vf22
    //   [23] 0x0043c0a4  OWL::TEditFile::vf23
    //   [24] 0x0043c354  OWL::TEditFile::vf24
    //   [25] 0x0040f728  OWL::TRichEdit::vf25
    //   [26] 0x0043c0f0  OWL::TEditFile::vf26
    //   [27] 0x0043c5ac  OWL::TEditFile::vf27
    //   [28] 0x0043c82c  OWL::TEditFile::vf28
    //   [29] 0x0040f848  OWL::TRichEdit::vf29
    // response table at 0x00464120 (17 entries)
    //   EV_COMMAND(24322)                            -> 0x0040ef48  OWL::TRichEdit::Cmd24322
    //   EV_COMMAND(24323)                            -> 0x0040ef64  OWL::TRichEdit::Cmd24323
    //   EV_COMMAND(24324)                            -> 0x0040ef80  OWL::TRichEdit::Cmd24324
    //   EV_COMMAND(24325)                            -> 0x0040ef90  OWL::TRichEdit::Cmd24325
    //   EV_COMMAND(24326)                            -> 0x0040efa0  OWL::TRichEdit::Cmd24326
    //   EV_COMMAND(24321)                            -> 0x0040efb0  OWL::TRichEdit::Cmd24321
    //   EV_COMMAND_ENABLE(24322)                     -> 0x0040f328  OWL::TRichEdit::CeShared_40f328
    //   EV_COMMAND_ENABLE(24323)                     -> 0x0040f328  OWL::TRichEdit::CeShared_40f328
    //   EV_COMMAND_ENABLE(24325)                     -> 0x0040f328  OWL::TRichEdit::CeShared_40f328
    //   EV_COMMAND_ENABLE(24324)                     -> 0x0040f360  OWL::TRichEdit::CeCmd24324
    //   EV_COMMAND_ENABLE(24326)                     -> 0x0040f464  OWL::TRichEdit::CeCmd24326
    //   EV_COMMAND_ENABLE(24321)                     -> 0x0040f4a8  OWL::TRichEdit::CeCmd24321
    //   WM_CHAR                                      -> 0x0040f2e0  OWL::TRichEdit::EvChar
    //   WM_KEYDOWN                                   -> 0x0040f2f0  OWL::TRichEdit::EvKeyDown
    //   WM_GETDLGCODE                                -> 0x0040f2cc  OWL::TRichEdit::EvGetDlgCode
    //   WM_SETFOCUS                                  -> 0x0040f318  OWL::TRichEdit::EvSetFocus
    //   WM_KILLFOCUS                                 -> 0x0040f300  OWL::TRichEdit::EvKillFocus
};
```

### OWL::TRichEdit::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x00410008  vptr at +0x0
class OWL::TRichEdit::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0046447c (4 slots)
    //   [ 0] 0x00410058  OWL::TNewStreamer::vf0
    //   [ 1] 0x0040fb60  OWL::TRichEdit::Streamer::vf1
    //   [ 2] 0x0040fbd4  OWL::TRichEdit::Streamer::vf2
    //   [ 3] 0x00410088  OWL::TRichEdit::Streamer::vf3
};
```

### OWL::TRichEditModule

```cpp
// sizeof 13 (0xd)  rtti 0x0040ff3c  vptr at +0x0  destructor 0x0040ffc4
class OWL::TRichEditModule : public OWL::TModule {
    /* +0x000 */ // base subobject OWL::TModule
};
```

### OWL::TScreenDC

```cpp
// sizeof 37 (0x25)  rtti 0x00411e88  vptr at +0x5  destructor 0x004123ec
class OWL::TScreenDC : public OWL::TWindowDC {
    /* +0x000 */ // base subobject OWL::TWindowDC
    // vtable at 0x0046ac38 (24 slots)
    //   [ 0] 0x004123ec  OWL::TScreenDC::~TScreenDC
    //   [ 1] 0x00416ee8  OWL::TDC::vf1
    //   [ 2] 0x00416ef8  OWL::TDC::vf2
    //   [ 3] 0x00416f14  OWL::TDC::vf3
    //   [ 4] 0x00416f30  OWL::TDC::vf4
    //   [ 5] 0x00416bbc  OWL::TDC::vf5
    //   [ 6] 0x00416c4c  OWL::TDC::vf6
    //   [ 7] 0x00416cd0  OWL::TDC::vf7
    //   [ 8] 0x00416f4c  OWL::TDC::vf8
    //   [ 9] 0x00416f98  OWL::TDC::vf9
    //   [10] 0x00416fe4  OWL::TDC::vf10
    //   [11] 0x00417018  OWL::TDC::vf11
    //   [12] 0x00417064  OWL::TDC::vf12
    //   [13] 0x004170b0  OWL::TDC::vf13
    //   [14] 0x004170fc  OWL::TDC::vf14
    //   [15] 0x00417150  OWL::TDC::vf15
    //   [16] 0x0041719c  OWL::TDC::vf16
    //   [17] 0x004171f0  OWL::TDC::vf17
    //   [18] 0x00417228  OWL::TDC::vf18
    //   [19] 0x0041726c  OWL::TDC::vf19
    //   [20] 0x004172d4  OWL::TDC::vf20
    //   [21] 0x004172f4  OWL::TDC::vf21
    //   [22] 0x00417320  OWL::TDC::vf22
    //   [23] 0x00416b6c  OWL::TDC::vf23
};
```

### OWL::TScroller

```cpp
// sizeof 61 (0x3d)  rtti 0x0042e134  vptr at +0x0  destructor 0x004467e4
class OWL::TScroller : public OWL::TStreamableBase {
    /* +0x000 */ // base subobject OWL::TStreamableBase
    // vtable at 0x0046fbd4 (22 slots)
    //   [ 0] 0x004467e4  OWL::TScroller::~TScroller
    //   [ 1] 0x00447200  OWL::TScroller::vf1
    //   [ 2] 0x004469bc  OWL::TScroller::vf2
    //   [ 3] 0x00446854  OWL::TScroller::vf3
    //   [ 4] 0x004469d8  OWL::TScroller::vf4
    //   [ 5] 0x00446964  OWL::TScroller::vf5
    //   [ 6] 0x00446990  OWL::TScroller::vf6
    //   [ 7] 0x00446ad4  OWL::TScroller::vf7
    //   [ 8] 0x00446b54  OWL::TScroller::vf8
    //   [ 9] 0x00446bec  OWL::TScroller::vf9
    //   [10] 0x00446d3c  OWL::TScroller::vf10
    //   [11] 0x00446e8c  OWL::TScroller::vf11
    //   [12] 0x00447210  OWL::TScroller::vf12
    //   [13] 0x0044723c  OWL::TScroller::vf13
    //   [14] 0x00446fa0  OWL::TScroller::vf14
    //   [15] 0x00446fac  OWL::TScroller::vf15
    //   [16] 0x00447260  OWL::TScroller::vf16
    //   [17] 0x00447280  OWL::TScroller::vf17
    //   [18] 0x00447298  OWL::TScroller::vf18
    //   [19] 0x004472b4  OWL::TScroller::vf19
    //   [20] 0x004472d4  OWL::TScroller::vf20
    //   [21] 0x004472ec  OWL::TScroller::vf21
};
```

### OWL::TScroller::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x004477e8  vptr at +0x0
class OWL::TScroller::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0046fcdc (4 slots)
    //   [ 0] 0x00410058  OWL::TNewStreamer::vf0
    //   [ 1] 0x004474a8  OWL::TScroller::Streamer::vf1
    //   [ 2] 0x004475fc  OWL::TScroller::Streamer::vf2
    //   [ 3] 0x00447838  OWL::TScroller::Streamer::vf3
};
```

### OWL::TSeparatorGadget

```cpp
// sizeof 69 (0x45)  rtti 0x00419d24  vptr at +0x0  destructor 0x00419d84
class OWL::TSeparatorGadget : public OWL::TGadget {
    /* +0x000 */ // base subobject OWL::TGadget
    // vtable at 0x00466ff8 (21 slots)
    //   [ 0] 0x00419d84  OWL::TSeparatorGadget::~TSeparatorGadget
    //   [ 1] 0x004190f8  OWL::TGadget::vf1
    //   [ 2] 0x004197c4  OWL::TGadget::vf2
    //   [ 3] 0x00419134  OWL::TGadget::vf3
    //   [ 4] 0x004190d0  OWL::TGadget::vf4
    //   [ 5] 0x004190e8  OWL::TGadget::vf5
    //   [ 6] 0x004190f0  OWL::TGadget::vf6
    //   [ 7] 0x0041926c  OWL::TGadget::vf7
    //   [ 8] 0x00419b54  OWL::TSeparatorGadget::vf8
    //   [ 9] 0x004193fc  OWL::TGadget::vf9
    //   [10] 0x00419330  OWL::TGadget::vf10
    //   [11] 0x0041921c  OWL::TGadget::vf11
    //   [12] 0x00419b64  OWL::TSeparatorGadget::vf12
    //   [13] 0x0041967c  OWL::TGadget::vf13
    //   [14] 0x0041995c  OWL::TGadget::vf14
    //   [15] 0x0041997c  OWL::TGadget::vf15
    //   [16] 0x00419984  OWL::TGadget::vf16
    //   [17] 0x00419a50  OWL::TGadget::vf17
    //   [18] 0x00419a88  OWL::TGadget::vf18
    //   [19] 0x00419a6c  OWL::TGadget::vf19
    //   [20] 0x00419a90  OWL::TGadget::vf20
};
```

### OWL::TStatic

```cpp
// sizeof 174 (0xae)  rtti 0x004054c8  vptr at +0xc  destructor 0x00405768
class OWL::TStatic : public OWL::TControl, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TControl
    // vtable at 0x0046fd60 (12 slots)
    //   [ 0] 0x00405768  OWL::TStatic::~TStatic
    //   [ 1] 0x00432678  OWL::TControl::vf1
    //   [ 2] 0x004326d4  OWL::TControl::vf2
    //   [ 3] 0x004326f4  OWL::TControl::vf3
    //   [ 4] 0x00432734  OWL::TControl::vf4
    //   [ 5] 0x00432774  OWL::TControl::vf5
    //   [ 6] 0x004327a4  OWL::TControl::vf6
    //   [ 7] 0x004327cc  OWL::TControl::vf7
    //   [ 8] 0x00447844  OWL::TStatic::Find
    //   [ 9] 0x00447a40  OWL::TStatic::vf9
    //   [10] 0x00447a08  OWL::TStatic::vf10
    //   [11] 0x004479e8  OWL::TStatic::vf11
    // response table at 0x0046fd00 (1 entries)
    //   WM_SIZE                                      -> 0x004479c0  OWL::TStatic::EvSize
};
```

### OWL::TStatic::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x00447df0  vptr at +0x0
class OWL::TStatic::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0046fee8 (4 slots)
    //   [ 0] 0x00410058  OWL::TNewStreamer::vf0
    //   [ 1] 0x00447cd0  EvRegisteredMsg_447cd0_447cd0
    //   [ 2] 0x00447d00  OWL::TStatic::Streamer::vf2
    //   [ 3] 0x00447e3c  OWL::TStatic::Streamer::vf3
};
```

### OWL::TStreamableBase

```cpp
// sizeof 4 (0x4)  rtti 0x00404628  vptr at +0x0  destructor 0x00413978
class OWL::TStreamableBase {
    // vtable at 0x00462224 (1 slots)
    //   [ 0] 0x00413978  OWL::TStreamableBase::~TStreamableBase
};
```

### OWL::TStreamableClass

```cpp
// sizeof 16 (0x10)  rtti 0x0040fd54  no vptr  destructor 0x00421d64
class OWL::TStreamableClass : public OWL::ObjectBuilder {
    /* +0x000 */ // base subobject OWL::ObjectBuilder
};
```

### OWL::TStreamableTypes

```cpp
// sizeof 4 (0x4)  rtti 0x00423170  no vptr  destructor 0x00421e4c
class OWL::TStreamableTypes {
};
```

### OWL::TStreamer

```cpp
// sizeof 8 (0x8)  rtti 0x00410094  vptr at +0x0
class OWL::TStreamer {
    // vtable at 0x00464498 (4 slots)
    //   [ 0] 0x0045d604  vshared_45d604
    //   [ 1] 0x0045d604  vshared_45d604
    //   [ 2] 0x0045d604  vshared_45d604
    //   [ 3] 0x0045d604  vshared_45d604
};
```

### OWL::TSystemMessage

```cpp
// sizeof 20 (0x14)  rtti 0x004215e0  no vptr  destructor 0x00421638
class OWL::TSystemMessage {
    /* +0x004 */ std::string m_4;
};
```

### OWL::TTinyCaption

```cpp
// sizeof 198 (0xc6)  rtti 0x00436034  vptr at +0xc  destructor 0x00447e8c
class OWL::TTinyCaption : public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    // vtable at 0x00470190 (3 slots)
    //   [ 0] 0x00447e8c  OWL::TTinyCaption::~TTinyCaption
    //   [ 1] 0x004489dc  OWL::TTinyCaption::vf1
    //   [ 2] 0x00447e48  OWL::TTinyCaption::vf2
};
```

### OWL::TTmpBuffer<char>

```cpp
// sizeof 8 (0x8)  rtti 0x00414b70  no vptr  destructor 0x00414c74
class OWL::TTmpBuffer<char> : public OWL::TTmpBufferBase {
    /* +0x000 */ // base subobject OWL::TTmpBufferBase
};
```

### OWL::TTmpBufferBase

```cpp
// sizeof 8 (0x8)  rtti 0x00414c24  no vptr  destructor 0x0042033c
class OWL::TTmpBufferBase {
};
```

### OWL::TToolbarRes

```cpp
// sizeof 13 (0xd)  rtti 0x00424754  no vptr  destructor 0x004245c0
class OWL::TToolbarRes : public OWL::TResource<OWL::TOOLBARTEMPLATE,241> {
    /* +0x000 */ // base subobject OWL::TResource<OWL::TOOLBARTEMPLATE,241>
};
```

### OWL::TTooltip

```cpp
// sizeof 170 (0xaa)  rtti 0x0041c414  vptr at +0xc  destructor 0x0042592c
class OWL::TTooltip : public OWL::TControl, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TControl
    // vtable at 0x00469160 (10 slots)
    //   [ 0] 0x0042592c  OWL::TTooltip::~TTooltip
    //   [ 1] 0x00432678  OWL::TControl::vf1
    //   [ 2] 0x004326d4  OWL::TControl::vf2
    //   [ 3] 0x004326f4  OWL::TControl::vf3
    //   [ 4] 0x00432734  OWL::TControl::vf4
    //   [ 5] 0x00432774  OWL::TControl::vf5
    //   [ 6] 0x004327a4  OWL::TControl::vf6
    //   [ 7] 0x004327cc  OWL::TControl::vf7
    //   [ 8] 0x00432228  OWL::TControl::Find
    //   [ 9] 0x00425a00  OWL::TTooltip::vf9
};
```

### OWL::TTooltipEnabler

```cpp
// sizeof 20 (0x14)  rtti 0x00425a64  vptr at +0x0
class OWL::TTooltipEnabler : public OWL::TCommandEnabler {
    /* +0x000 */ // base subobject OWL::TCommandEnabler
    // vtable at 0x0046923c (3 slots)
    //   [ 0] 0x0042aa5c  OWL::TCommandEnabler::vf0
    //   [ 1] 0x00425798  OWL::TTooltipEnabler::vf1
    //   [ 2] 0x004257bc  OWL::TTooltipEnabler::vf2
};
```

### OWL::TUIFaceData

```cpp
// sizeof 21 (0x15)  rtti 0x004262fc  no vptr  destructor 0x00427378
class OWL::TUIFaceData {
    /* +0x000 */ OWL::THatch8x8Brush m_0;
    /* +0x011 */ OWL::TPointer<OWL::TBitmap> m_11;
};
```

### OWL::TUrlLink

```cpp
// sizeof 213 (0xd5)  rtti 0x00429d5c  vptr at +0xc  destructor 0x00427f64
class OWL::TUrlLink : public OWL::TStatic, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TStatic
    /* +0x02c */ std::string m_2c;
    // vtable at 0x0046a244 (21 slots)
    //   [ 0] 0x00427f64  OWL::TUrlLink::~TUrlLink
    //   [ 1] 0x00432678  OWL::TControl::vf1
    //   [ 2] 0x004326d4  OWL::TControl::vf2
    //   [ 3] 0x004326f4  OWL::TControl::vf3
    //   [ 4] 0x00432734  OWL::TControl::vf4
    //   [ 5] 0x00432774  OWL::TControl::vf5
    //   [ 6] 0x004327a4  OWL::TControl::vf6
    //   [ 7] 0x004327cc  OWL::TControl::vf7
    //   [ 8] 0x00427f00  OWL::TUrlLink::Find
    //   [ 9] 0x00447a40  OWL::TStatic::vf9
    //   [10] 0x00447a08  OWL::TStatic::vf10
    //   [11] 0x00428144  OWL::TUrlLink::vf11
    //   [12] 0x0042a344  OWL::TUrlLink::vf12
    //   [13] 0x00428438  OWL::TUrlLink::vf13
    //   [14] 0x00428628  OWL::TUrlLink::vf14
    //   [15] 0x00428150  OWL::TUrlLink::vf15
    //   [16] 0x004286dc  OWL::TUrlLink::vf16
    //   [17] 0x00428750  OWL::TUrlLink::vf17
    //   [18] 0x00428d78  OWL::TUrlLink::vf18
    //   [19] 0x00428fcc  OWL::TUrlLink::vf19
    //   [20] 0x00429abc  OWL::TUrlLink::vf20
    // response table at 0x00469a44 (7 entries)
    //   WM_PAINT                                     -> 0x00428a1c  OWL::TUrlLink::EvPaint
    //   WM_LBUTTONDOWN                               -> 0x00428b4c  OWL::TUrlLink::EvLButtonDown
    //   WM_MOUSEMOVE                                 -> 0x00428bb4  OWL::TUrlLink::EvMouseMove
    //   message 0x0019                               -> 0x00428a98  OWL::TUrlLink::EvMsg_19
    //   WM_GETFONT                                   -> 0x00428c58  OWL::TUrlLink::EvGetfont
    //   WM_SETFONT                                   -> 0x00428c74  OWL::TUrlLink::EvSetfont
    //   WM_GETDLGCODE                                -> 0x00428d6c  OWL::TUrlLink::EvGetDlgCode
};
```

### OWL::TUrlLink::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x0042a2ec  vptr at +0x0
class OWL::TUrlLink::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0046a228 (4 slots)
    //   [ 0] 0x00410058  OWL::TNewStreamer::vf0
    //   [ 1] 0x00429fb0  OWL::TUrlLink::Streamer::vf1
    //   [ 2] 0x0042a0d4  OWL::TUrlLink::Streamer::vf2
    //   [ 3] 0x0042a338  OWL::TUrlLink::Streamer::vf3
};
```

### OWL::TValidator

```cpp
// sizeof 6 (0x6)  rtti 0x00425ac0  vptr at +0x0  destructor 0x00449c24
class OWL::TValidator : public OWL::TStreamableBase {
    /* +0x000 */ // base subobject OWL::TStreamableBase
    // vtable at 0x00470274 (6 slots)
    //   [ 0] 0x00449c24  OWL::TValidator::~TValidator
    //   [ 1] 0x00449c80  OWL::TValidator::vf1
    //   [ 2] 0x00449c88  OWL::TValidator::vf2
    //   [ 3] 0x00449c90  OWL::TValidator::vf3
    //   [ 4] 0x00449c98  OWL::TValidator::vf4
    //   [ 5] 0x00449ca0  OWL::TValidator::vf5
};
```

### OWL::TValidator::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x00449f38  vptr at +0x0
class OWL::TValidator::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0047033c (4 slots)
    //   [ 0] 0x00410058  OWL::TNewStreamer::vf0
    //   [ 1] 0x00449e44  OWL::TValidator::Streamer::vf1
    //   [ 2] 0x00449e68  OWL::TValidator::Streamer::vf2
    //   [ 3] 0x00449f88  OWL::TValidator::Streamer::vf3
};
```

### OWL::TView

```cpp
// sizeof 44 (0x2c)  rtti 0x004244f4  vptr at +0x8  destructor 0x00449f94
class OWL::TView : public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase {
    // vtable at 0x00470420 (12 slots)
    //   [ 0] 0x00449f94  OWL::TView::~TView
    //   [ 1] 0x004244c8  OWL::TView::vf1
    //   [ 2] 0x004244d4  OWL::TView::vf2
    //   [ 3] 0x0045d604  vshared_45d604
    //   [ 4] 0x0044a1dc  OWL::TView::vf4
    //   [ 5] 0x0044a1e4  OWL::TView::vf5
    //   [ 6] 0x004244e0  OWL::TView::vf6
    //   [ 7] 0x0044a100  OWL::TView::vf7
    //   [ 8] 0x0044a0e0  OWL::TView::vf8
    //   [ 9] 0x0044a0c0  OWL::TView::vf9
    //   [10] 0x0044a130  OWL::TView::vf10
    //   [11] 0x004244ec  OWL::TView::vf11
};
```

### OWL::TWindow

```cpp
// sizeof 146 (0x92)  rtti 0x0040467c  vptr at +0x8  destructor 0x0042ade0
class OWL::TWindow : public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase {
    // vtable at 0x00468fdc (34 slots)
    //   [ 0] 0x0042ade0  OWL::TWindow::~TWindow
    //   [ 1] 0x00405060  OWL::TWindow::vf1
    //   [ 2] 0x0042dc00  OWL::TWindow::vf2
    //   [ 3] 0x0042cc40  OWL::TWindow::vf3
    //   [ 4] 0x0042c918  OWL::TWindow::vf4
    //   [ 5] 0x0042c8c8  OWL::TWindow::vf5
    //   [ 6] 0x0042c700  OWL::TWindow::vf6
    //   [ 7] 0x0042ca88  OWL::TWindow::vf7
    //   [ 8] 0x0042ca98  OWL::TWindow::vf8
    //   [ 9] 0x0042cd50  OWL::TWindow::vf9
    //   [10] 0x0042afd4  OWL::TWindow::vf10
    //   [11] 0x0042b074  OWL::TWindow::vf11
    //   [12] 0x0042bce4  OWL::TWindow::vf12
    //   [13] 0x0042b164  OWL::TWindow::vf13
    //   [14] 0x0042b1f0  OWL::TWindow::vf14
    //   [15] 0x0042cd2c  OWL::TWindow::vf15
    //   [16] 0x0042b958  OWL::TWindow::vf16
    //   [17] 0x0042b7f0  OWL::TWindow::vf17
    //   [18] 0x0042b488  OWL::TWindow::vf18
    //   [19] 0x0042b538  OWL::TWindow::vf19
    //   [20] 0x0042b62c  OWL::TWindow::vf20
    //   [21] 0x0042c610  OWL::TWindow::vf21
    //   [22] 0x0042cb74  OWL::TWindow::vf22
    //   [23] 0x0042cbc0  OWL::TWindow::vf23
    //   [24] 0x0040506c  OWL::TWindow::vf24
    //   [25] 0x0042d620  OWL::TWindow::vf25
    //   [26] 0x00405090  OWL::TWindow::vf26
    //   [27] 0x004050ac  OWL::TWindow::vf27
    //   [28] 0x0042c780  OWL::TWindow::vf28
    //   [29] 0x0042c828  OWL::TWindow::vf29
    //   [30] 0x0042cad4  OWL::TWindow::vf30
    //   [31] 0x0042cb6c  OWL::TWindow::vf31
    //   [32] 0x0042b110  OWL::TWindow::vf32
    //   [33] 0x0042a9f8  OWL::TWindow::Find
    // response table at 0x0046a4e4 (34 entries)
    //   WM_SETCURSOR                                 -> 0x0042c618  OWL::TWindow::EvSetCursor
    //   WM_SIZE                                      -> 0x0042bd34  OWL::TWindow::EvSize
    //   WM_MOVE                                      -> 0x0042bdec  OWL::TWindow::EvMove
    //   WM_COMPAREITEM                               -> 0x0042be7c  OWL::TWindow::EvCompareitem
    //   WM_DELETEITEM                                -> 0x0042beb4  OWL::TWindow::EvDeleteitem
    //   WM_DRAWITEM                                  -> 0x0042bef4  OWL::TWindow::EvDrawItem
    //   WM_MEASUREITEM                               -> 0x0042bf54  OWL::TWindow::EvMeasureItem
    //   WM_VSCROLL                                   -> 0x0042c2e4  OWL::TWindow::EvVScroll
    //   WM_HSCROLL                                   -> 0x0042c28c  OWL::TWindow::EvHScroll
    //   WM_CHILDINVALID                              -> 0x0042cf20  OWL::TWindow::EvChildinvalid
    //   WM_ERASEBKGND                                -> 0x0042c33c  OWL::TWindow::EvEraseBkgnd
    //   message 0x0019                               -> 0x0042c49c  OWL::TWindow::EvMsg_19
    //   WM_PAINT                                     -> 0x0042c550  OWL::TWindow::EvPaint
    //   WM_LBUTTONDOWN                               -> 0x0042c654  OWL::TWindow::EvLButtonDown
    //   WM_KILLFOCUS                                 -> 0x0042bcec  OWL::TWindow::EvKillFocus
    //   WM_CTLCOLORMSGBOX                            -> 0x0042c038  OWL::TWindow::EvShared_42c038
    //   WM_CTLCOLOREDIT                              -> 0x0042c038  OWL::TWindow::EvShared_42c038
    //   WM_CTLCOLORLISTBOX                           -> 0x0042c038  OWL::TWindow::EvShared_42c038
    //   WM_CTLCOLORBTN                               -> 0x0042c038  OWL::TWindow::EvShared_42c038
    //   WM_CTLCOLORDLG                               -> 0x0042c038  OWL::TWindow::EvShared_42c038
    //   WM_CTLCOLORSCROLLBAR                         -> 0x0042c038  OWL::TWindow::EvShared_42c038
    //   WM_CTLCOLORSTATIC                            -> 0x0042c038  OWL::TWindow::EvShared_42c038
    //   WM_CREATE                                    -> 0x0042bcc4  OWL::TWindow::EvCreate
    //   WM_CLOSE                                     -> 0x0042cd90  OWL::TWindow::EvClose
    //   WM_DESTROY                                   -> 0x0042cde4  OWL::TWindow::EvDestroy
    //   WM_NCDESTROY                                 -> 0x0042ce34  OWL::TWindow::EvNCDestroy
    //   WM_QUERYENDSESSION                           -> 0x0042ce4c  OWL::TWindow::EvQueryEndSession
    //   WM_ENDSESSION                                -> 0x0042cea0  OWL::TWindow::EvEndSession
    //   WM_SYSCOLORCHANGE                            -> 0x0042b0f0  OWL::TWindow::EvSysColorChange
    //   WM_INITMENUPOPUP                             -> 0x0042d818  OWL::TWindow::EvInitMenuPopup
    //   WM_CONTEXTMENU                               -> 0x0042d95c  OWL::TWindow::EvContextMenu
    //   WM_ENTERIDLE                                 -> 0x0042d9e4  OWL::TWindow::EvEnteridle
    //   WM_MOUSEWHEEL                                -> 0x0042c210  OWL::TWindow::EvMouseWheel
    //   message id 0 in the static table (filled at run time or WM_NULL) -> 0x0042c154  OWL::TWindow::EvRegisteredMsg_42c154
};
```

### OWL::TWindow::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x00425234  vptr at +0x0
class OWL::TWindow::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x00469088 (4 slots)
    //   [ 0] 0x00410058  OWL::TNewStreamer::vf0
    //   [ 1] 0x00424b60  OWL::TWindow::Streamer::vf1
    //   [ 2] 0x00424e98  OWL::TWindow::Streamer::vf2
    //   [ 3] 0x00425280  OWL::TWindow::Streamer::vf3
};
```

### OWL::TWindowDC

```cpp
// sizeof 37 (0x25)  rtti 0x00412430  vptr at +0x5  destructor 0x0042e214
class OWL::TWindowDC : public OWL::TDC {
    /* +0x000 */ // base subobject OWL::TDC
    // vtable at 0x0046aca4 (24 slots)
    //   [ 0] 0x0042e214  OWL::TWindowDC::~TWindowDC
    //   [ 1] 0x00416ee8  OWL::TDC::vf1
    //   [ 2] 0x00416ef8  OWL::TDC::vf2
    //   [ 3] 0x00416f14  OWL::TDC::vf3
    //   [ 4] 0x00416f30  OWL::TDC::vf4
    //   [ 5] 0x00416bbc  OWL::TDC::vf5
    //   [ 6] 0x00416c4c  OWL::TDC::vf6
    //   [ 7] 0x00416cd0  OWL::TDC::vf7
    //   [ 8] 0x00416f4c  OWL::TDC::vf8
    //   [ 9] 0x00416f98  OWL::TDC::vf9
    //   [10] 0x00416fe4  OWL::TDC::vf10
    //   [11] 0x00417018  OWL::TDC::vf11
    //   [12] 0x00417064  OWL::TDC::vf12
    //   [13] 0x004170b0  OWL::TDC::vf13
    //   [14] 0x004170fc  OWL::TDC::vf14
    //   [15] 0x00417150  OWL::TDC::vf15
    //   [16] 0x0041719c  OWL::TDC::vf16
    //   [17] 0x004171f0  OWL::TDC::vf17
    //   [18] 0x00417228  OWL::TDC::vf18
    //   [19] 0x0041726c  OWL::TDC::vf19
    //   [20] 0x004172d4  OWL::TDC::vf20
    //   [21] 0x004172f4  OWL::TDC::vf21
    //   [22] 0x00417320  OWL::TDC::vf22
    //   [23] 0x00416b6c  OWL::TDC::vf23
};
```

### OWL::TXBadFormat

```cpp
// sizeof 12 (0xc)  rtti 0x0043e7d0  vptr at +0x0  destructor 0x0043e82c
class OWL::TXBadFormat : public OWL::TXOwl {
    /* +0x000 */ // base subobject OWL::TXOwl
    // vtable at 0x0046e068 (6 slots)
    //   [ 0] 0x0043e82c  OWL::TXBadFormat::~TXBadFormat
    //   [ 1] 0x00417da4  OWL::TXBase::vf1
    //   [ 2] 0x0043e870  OWL::TXBadFormat::vf2
    //   [ 3] 0x0043e8f0  OWL::TXBadFormat::vf3
    //   [ 4] 0x004180c8  OWL::TXOwl::vf4
    //   [ 5] 0x0043e760  vshared_43e760
};
```

### OWL::TXBase

```cpp
// sizeof 8 (0x8)  rtti 0x004107fc  vptr at +0x0  destructor 0x00417c10
class OWL::TXBase : public std::exception {
    /* +0x000 */ // base subobject std::exception
    // vtable at 0x004668c4 (4 slots)
    //   [ 0] 0x00417c10  OWL::TXBase::~TXBase
    //   [ 1] 0x00417da4  OWL::TXBase::vf1
    //   [ 2] 0x00417cfc  OWL::TXBase::vf2
    //   [ 3] 0x00417d50  OWL::TXBase::vf3
};
```

### OWL::TXClipboard

```cpp
// sizeof 12 (0xc)  rtti 0x00414d3c  vptr at +0x0  destructor 0x00414fac
class OWL::TXClipboard : public OWL::TXOwl {
    /* +0x000 */ // base subobject OWL::TXOwl
    // vtable at 0x00465e94 (5 slots)
    //   [ 0] 0x00414fac  OWL::TXClipboard::~TXClipboard
    //   [ 1] 0x00417da4  OWL::TXBase::vf1
    //   [ 2] 0x00414eb8  OWL::TXClipboard::vf2
    //   [ 3] 0x00414f38  OWL::TXClipboard::vf3
    //   [ 4] 0x004180c8  OWL::TXOwl::vf4
};
```

### OWL::TXEndSession

```cpp
// sizeof 1 (0x1)  rtti 0x0042cedc  no vptr
class OWL::TXEndSession {
};
```

### OWL::TXGdi

```cpp
// sizeof 12 (0xc)  rtti 0x0041ca28  vptr at +0x0  destructor 0x0041cb28
class OWL::TXGdi : public OWL::TXOwl {
    /* +0x000 */ // base subobject OWL::TXOwl
    // vtable at 0x004677bc (5 slots)
    //   [ 0] 0x0041cb28  OWL::TXGdi::~TXGdi
    //   [ 1] 0x00417da4  OWL::TXBase::vf1
    //   [ 2] 0x0041c934  OWL::TXGdi::vf2
    //   [ 3] 0x0041c9b4  OWL::TXGdi::vf3
    //   [ 4] 0x004180c8  OWL::TXOwl::vf4
};
```

### OWL::TXInvalidMainWindow

```cpp
// sizeof 12 (0xc)  rtti 0x00430b7c  vptr at +0x0  destructor 0x00430c84
class OWL::TXInvalidMainWindow : public OWL::TXOwl {
    /* +0x000 */ // base subobject OWL::TXOwl
    // vtable at 0x0046b5d8 (5 slots)
    //   [ 0] 0x00430c84  OWL::TXInvalidMainWindow::~TXInvalidMainWindow
    //   [ 1] 0x00417da4  OWL::TXBase::vf1
    //   [ 2] 0x00430a88  OWL::TXInvalidMainWindow::vf2
    //   [ 3] 0x00430b08  OWL::TXInvalidMainWindow::vf3
    //   [ 4] 0x004180c8  OWL::TXOwl::vf4
};
```

### OWL::TXInvalidModule

```cpp
// sizeof 12 (0xc)  rtti 0x004453f4  vptr at +0x0  destructor 0x004454fc
class OWL::TXInvalidModule : public OWL::TXOwl {
    /* +0x000 */ // base subobject OWL::TXOwl
    // vtable at 0x0046f5c0 (5 slots)
    //   [ 0] 0x004454fc  OWL::TXInvalidModule::~TXInvalidModule
    //   [ 1] 0x00417da4  OWL::TXBase::vf1
    //   [ 2] 0x00445300  OWL::TXInvalidModule::vf2
    //   [ 3] 0x00445380  OWL::TXInvalidModule::vf3
    //   [ 4] 0x004180c8  OWL::TXOwl::vf4
};
```

### OWL::TXMenu

```cpp
// sizeof 12 (0xc)  rtti 0x00420fa8  vptr at +0x0  destructor 0x004210a4
class OWL::TXMenu : public OWL::TXOwl {
    /* +0x000 */ // base subobject OWL::TXOwl
    // vtable at 0x00468550 (5 slots)
    //   [ 0] 0x004210a4  OWL::TXMenu::~TXMenu
    //   [ 1] 0x00417da4  OWL::TXBase::vf1
    //   [ 2] 0x00420eb4  OWL::TXMenu::vf2
    //   [ 3] 0x00420f34  OWL::TXMenu::vf3
    //   [ 4] 0x004180c8  OWL::TXOwl::vf4
};
```

### OWL::TXOutOfMemory

```cpp
// sizeof 12 (0xc)  rtti 0x004187b0  vptr at +0x0  destructor 0x004188b0
class OWL::TXOutOfMemory : public OWL::TXOwl {
    /* +0x000 */ // base subobject OWL::TXOwl
    // vtable at 0x00466cc8 (6 slots)
    //   [ 0] 0x004188b0  OWL::TXOutOfMemory::~TXOutOfMemory
    //   [ 1] 0x00417da4  OWL::TXBase::vf1
    //   [ 2] 0x004186bc  OWL::TXOutOfMemory::vf2
    //   [ 3] 0x0041873c  OWL::TXOutOfMemory::vf3
    //   [ 4] 0x004180c8  OWL::TXOwl::vf4
    //   [ 5] 0x004126a8  OWL::TXOutOfMemory::vf5
};
```

### OWL::TXOwl

```cpp
// sizeof 12 (0xc)  rtti 0x00410764  vptr at +0x0  destructor 0x00418068
class OWL::TXOwl : public OWL::TXBase {
    /* +0x000 */ // base subobject OWL::TXBase
    // vtable at 0x00464da0 (5 slots)
    //   [ 0] 0x00418068  OWL::TXOwl::~TXOwl
    //   [ 1] 0x00417da4  OWL::TXBase::vf1
    //   [ 2] 0x004180e8  OWL::TXOwl::vf2
    //   [ 3] 0x0041815c  OWL::TXOwl::vf3
    //   [ 4] 0x004180c8  OWL::TXOwl::vf4
};
```

### OWL::TXWindow

```cpp
// sizeof 16 (0x10)  rtti 0x0042e004  vptr at +0x0  destructor 0x0042e0b4
class OWL::TXWindow : public OWL::TXOwl {
    /* +0x000 */ // base subobject OWL::TXOwl
    // vtable at 0x0046ab7c (5 slots)
    //   [ 0] 0x0042e0b4  OWL::TXWindow::~TXWindow
    //   [ 1] 0x00417da4  OWL::TXBase::vf1
    //   [ 2] 0x0042df5c  OWL::TXWindow::vf2
    //   [ 3] 0x0042dfb0  OWL::TXWindow::vf3
    //   [ 4] 0x0042df40  OWL::TXWindow::vf4
};
```

### std::bad_alloc

```cpp
// sizeof 4 (0x4)  rtti 0x00406864  vptr at +0x0  destructor 0x00455698
class std::bad_alloc : public std::exception {
    /* +0x000 */ // base subobject std::exception
    // vtable at 0x00462db4 (2 slots)
    //   [ 0] 0x00455698  std::bad_alloc::~bad_alloc
    //   [ 1] 0x0040ad34  std::bad_alloc::vf1
};
```

### std::basic_filebuf<char>

```cpp
// sizeof 68 (0x44)  rtti 0x0040ac18  vptr at +0x0  destructor 0x0044e334
class std::basic_filebuf<char> : public std::basic_streambuf<char> {
    /* +0x000 */ // base subobject std::basic_streambuf<char>
    // vtable at 0x004730e0 (13 slots)
    //   [ 0] 0x0044e334  std::basic_filebuf<char>::~basic_filebuf
    //   [ 1] 0x00452e24  std::basic_streambuf<char>::vf1
    //   [ 2] 0x00451938  std::basic_filebuf<char>::vf2
    //   [ 3] 0x0045232c  std::basic_filebuf<char>::vf3
    //   [ 4] 0x004529b4  std::basic_filebuf<char>::vf4
    //   [ 5] 0x00450e88  std::basic_filebuf<char>::vf5
    //   [ 6] 0x00451340  std::basic_streambuf<char>::vf6
    //   [ 7] 0x004508b4  std::basic_filebuf<char>::vf7
    //   [ 8] 0x00450e1c  std::basic_streambuf<char>::vf8
    //   [ 9] 0x0044fd2c  std::basic_filebuf<char>::vf9
    //   [10] 0x004503ac  std::basic_filebuf<char>::vf10
    //   [11] 0x00450edc  std::basic_filebuf<char>::vf11
    //   [12] 0x0045050c  std::basic_filebuf<char>::vf12
};
```

### std::basic_ifstream<char>

```cpp
// sizeof 136 (0x88)  rtti 0x0040641c  vptr at +0x4  destructor 0x0044edf4
class std::basic_ifstream<char> : public std::basic_istream<char>, public virtual std::basic_ios<char> {
    /* +0x000 */ // base subobject std::basic_istream<char>
    /* +0x00c */ std::basic_filebuf<char> m_c;
    // vtable at 0x0047303c (1 slots)
    //   [ 0] 0x0044edf4  std::basic_ifstream<char>::~basic_ifstream
};
```

### std::basic_ios<char>

```cpp
// sizeof 56 (0x38)  rtti 0x0040aba0  vptr at +0x0  destructor 0x0044ec80
class std::basic_ios<char> : public std::ios_base {
    /* +0x000 */ // base subobject std::ios_base
    // vtable at 0x00473058 (1 slots)
    //   [ 0] 0x0044ec80  std::basic_ios<char>::~basic_ios
};
```

### std::basic_istream<char>

```cpp
// sizeof 68 (0x44)  rtti 0x0040ac94  vptr at +0x4  destructor 0x0044ec08
class std::basic_istream<char> : public virtual std::basic_ios<char> {
    // vtable at 0x00473084 (1 slots)
    //   [ 0] 0x0044ec08  std::basic_istream<char>::~basic_istream
};
```

### std::basic_istream<char>::sentry

```cpp
// sizeof 8 (0x8)  rtti 0x0045122c  no vptr  destructor 0x0044f354
class std::basic_istream<char>::sentry {
};
```

### std::basic_ofstream<char>

```cpp
// sizeof 132 (0x84)  rtti 0x00408864  vptr at +0x4  destructor 0x0044f4c8
class std::basic_ofstream<char> : public std::basic_ostream<char>, public virtual std::basic_ios<char> {
    /* +0x000 */ // base subobject std::basic_ostream<char>
    /* +0x008 */ std::basic_filebuf<char> m_8;
    // vtable at 0x00473020 (1 slots)
    //   [ 0] 0x0044f4c8  std::basic_ofstream<char>::~basic_ofstream
};
```

### std::basic_ostream<char>

```cpp
// sizeof 64 (0x40)  rtti 0x0040ab24  vptr at +0x4  destructor 0x0044eb90
class std::basic_ostream<char> : public virtual std::basic_ios<char> {
    // vtable at 0x00473068 (1 slots)
    //   [ 0] 0x0044eb90  std::basic_ostream<char>::~basic_ostream
};
```

### std::basic_ostream<char>::sentry

```cpp
// sizeof 8 (0x8)  rtti 0x004087cc  no vptr  destructor 0x0040ad78
class std::basic_ostream<char>::sentry {
};
```

### std::basic_streambuf<char>

```cpp
// sizeof 36 (0x24)  rtti 0x0040b69c  vptr at +0x0  destructor 0x0044e544
class std::basic_streambuf<char> {
    /* +0x020 */ std::locale m_20;
    // vtable at 0x004730a0 (13 slots)
    //   [ 0] 0x0044e544  std::basic_streambuf<char>::~basic_streambuf
    //   [ 1] 0x00452e24  std::basic_streambuf<char>::vf1
    //   [ 2] 0x00451a2c  std::basic_streambuf<char>::vf2
    //   [ 3] 0x00452c38  std::basic_streambuf<char>::vf3
    //   [ 4] 0x00452c50  std::basic_streambuf<char>::vf4
    //   [ 5] 0x004512b0  std::basic_streambuf<char>::vf5
    //   [ 6] 0x00451340  std::basic_streambuf<char>::vf6
    //   [ 7] 0x00450e60  std::basic_streambuf<char>::vf7
    //   [ 8] 0x00450e1c  std::basic_streambuf<char>::vf8
    //   [ 9] 0x00450dfc  std::basic_streambuf<char>::vf9
    //   [10] 0x00450e08  std::basic_streambuf<char>::vf10
    //   [11] 0x004513e0  std::basic_streambuf<char>::vf11
    //   [12] 0x00450e14  std::basic_streambuf<char>::vf12
};
```

### std::exception

```cpp
// sizeof 4 (0x4)  rtti 0x00404a50  vptr at +0x0  destructor 0x00455678
class std::exception {
    // vtable at 0x00461fe8 (2 slots)
    //   [ 0] 0x00455678  std::exception::~exception
    //   [ 1] 0x00404a9c  std::exception::vf1
};
```

### std::ios_base

```cpp
// sizeof 36 (0x24)  rtti 0x0040b714  vptr at +0x0  destructor 0x004536e8
class std::ios_base {
    /* +0x010 */ std::locale m_10;
    // vtable at 0x0047331c (1 slots)
    //   [ 0] 0x004536e8  std::ios_base::~ios_base
};
```

### std::ios_base::failure

```cpp
// sizeof 24 (0x18)  rtti 0x00408678  vptr at +0x0  destructor 0x0045347c
class std::ios_base::failure : public std::exception {
    /* +0x000 */ // base subobject std::exception
    /* +0x008 */ std::string m_8;
    // vtable at 0x00462da0 (2 slots)
    //   [ 0] 0x0045347c  std::ios_base::failure::~failure
    //   [ 1] 0x00453558  std::ios_base::failure::vf1
};
```

### std::ios_base::Init

```cpp
// sizeof 8 (0x8)  rtti 0x004537cc  no vptr  destructor 0x00453614
class std::ios_base::Init {
};
```

### std::length_error

```cpp
// sizeof 24 (0x18)  rtti 0x00402e84  vptr at +0x0  destructor 0x004557d0
class std::length_error : public std::logic_error {
    /* +0x000 */ // base subobject std::logic_error
    // vtable at 0x00462010 (2 slots)
    //   [ 0] 0x004557d0  std::length_error::~length_error
    //   [ 1] 0x00404a44  std::logic_error::vf1
};
```

### std::locale

```cpp
// sizeof 4 (0x4)  rtti 0x0040b768  no vptr  destructor 0x0040b7b0
class std::locale {
};
```

### std::locale::facet

```cpp
// sizeof 16 (0x10)  rtti 0x00411210  vptr at +0x0  destructor 0x004112b8
class std::locale::facet : public __rwstd::facet_imp {
    /* +0x000 */ // base subobject __rwstd::facet_imp
    // vtable at 0x00465040 (2 slots)
    //   [ 0] 0x004112b8  std::locale::facet::~facet
    //   [ 1] 0x00411394  __rwstd::facet_imp::vf1
};
```

### std::logic_error

```cpp
// sizeof 24 (0x18)  rtti 0x00404790  vptr at +0x0  destructor 0x004556f4
class std::logic_error : public std::exception {
    /* +0x000 */ // base subobject std::exception
    /* +0x008 */ std::string m_8;
    // vtable at 0x00461ffc (2 slots)
    //   [ 0] 0x004556f4  std::logic_error::~logic_error
    //   [ 1] 0x00404a44  std::logic_error::vf1
};
```

### std::mbstate_t

```cpp
// sizeof 4 (0x4)  rtti 0x004530dc  no vptr
class std::mbstate_t {
};
```

### std::out_of_range

```cpp
// sizeof 24 (0x18)  rtti 0x00402fdc  vptr at +0x0  destructor 0x00455830
class std::out_of_range : public std::logic_error {
    /* +0x000 */ // base subobject std::logic_error
    // vtable at 0x00461fd4 (2 slots)
    //   [ 0] 0x00455830  std::out_of_range::~out_of_range
    //   [ 1] 0x00404a44  std::logic_error::vf1
};
```

### std::runtime_error

```cpp
// sizeof 24 (0x18)  rtti 0x00454c0c  vptr at +0x0  destructor 0x00455890
class std::runtime_error : public std::exception {
    /* +0x000 */ // base subobject std::exception
    /* +0x008 */ std::string m_8;
    // vtable at 0x00473ec0 (2 slots)
    //   [ 0] 0x00455890  std::runtime_error::~runtime_error
    //   [ 1] 0x004554f0  std::runtime_error::vf1
};
```

### std::string

```cpp
// sizeof 16 (0x10)  rtti 0x00403160  no vptr  destructor 0x004052c4
class std::string {
};
```

### std::type_info

```cpp
// sizeof 8 (0x8)  rtti 0x00456948  vptr at +0x0  destructor 0x0045664c
class std::type_info {
    // vtable at 0x00474544 (1 slots)
    //   [ 0] 0x0045664c  std::type_info::~type_info
};
```

### std::vector<std::string>

```cpp
// sizeof 32 (0x20)  rtti 0x004091ec  no vptr  destructor 0x0040ad40
class std::vector<std::string> {
};
```

### std::wstring

```cpp
// sizeof 16 (0x10)  rtti 0x0044db04  no vptr  destructor 0x0044db90
class std::wstring {
};
```

### TInstanceThunk

```cpp
// sizeof 10 (0xa)  rtti 0x0042399c  no vptr
class TInstanceThunk {
};
```

### TThunkAllocator

```cpp
// sizeof 4 (0x4)  rtti 0x0042392c  no vptr  destructor 0x00423978
class TThunkAllocator {
};
```

### type_info_hash

```cpp
// sizeof 20 (0x14)  rtti 0x00456994  vptr at +0x0  destructor 0x004569ec
class type_info_hash : public std::type_info {
    /* +0x000 */ // base subobject std::type_info
    // vtable at 0x00474534 (1 slots)
    //   [ 0] 0x004569ec  type_info_hash::~type_info_hash
};
```

## Response tables whose owning class was not resolved (4)

```
table at 0x0046b984
  message id 0 in the static table (filled at run time or WM_NULL) -> 0x00431c04  EvRegisteredMsg_431c04_431c04
  WM_GETDLGCODE                                -> 0x00431e7c  EvGetDlgCode_431e7c
  EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)      -> 0x004321fc  BNClicked_4321fc
table at 0x0046c01c
  EV_CHILD_NOTIFY(id 4469472, code 4464720)    -> 0x004342f8  Child4469472_Notify4464720_4342f8
  EV_CHILD_NOTIFY(id 4464308, code 4408014)    -> 0x00441e38  Child4464308_Notify4408014_441e38
  EV_CHILD_NOTIFY(id 4407951, code 4407972)    -> 0x00434265  Child4407951_Notify4407972_434265
  WM_CLOSE                                     -> 0x004351b0  EvClose_4351b0
  WM_PAINT                                     -> 0x00434a54  EvPaint_434a54
  message 0x0019                               -> 0x00434a64  EvMsg_19_434a64
  WM_SETFONT                                   -> 0x00434a30  EvSetfont_434a30
  message 0x0400                               -> 0x00434ac4  EvMsg_400_434ac4
  message 0x0401                               -> 0x00434ad8  EvMsg_401_434ad8
  message 0x0402                               -> 0x00434af4  EvMsg_402_434af4
  EV_COMMAND(1)                                -> 0x0043514c  Cmd1_43514c
  EV_COMMAND(2)                                -> 0x004351a0  Cmd2_4351a0
table at 0x0046d7ac
  message id 0 in the static table (filled at run time or WM_NULL) -> 0x0043b844  EvRegisteredMsg_43b844_43b844
  EV_COMMAND(24333)                            -> 0x0043ba00  Cmd24333_43ba00
  EV_COMMAND(24334)                            -> 0x0043ba10  Cmd24334_43ba10
  EV_COMMAND_ENABLE(24333)                     -> 0x0043cc38  CeCmd24333_43cc38
table at 0x0046fee0
  message id 0 in the static table (filled at run time or WM_NULL) -> 0x00447cd0  EvRegisteredMsg_447cd0_447cd0
  WM_NCHITTEST                                 -> 0x00447f84  EvNCHitTest_447f84
  WM_NCPAINT                                   -> 0x004481a8  EvNCPaint_4481a8
  WM_NCCALCSIZE                                -> 0x0044823c  EvNccalcsize_44823c
  WM_NCLBUTTONDOWN                             -> 0x004482bc  EvNclbuttondown_4482bc
  WM_MOUSEMOVE                                 -> 0x00448608  EvMouseMove_448608
  WM_LBUTTONUP                                 -> 0x00448828  EvLButtonUp_448828
  WM_NCACTIVATE                                -> 0x00448960  EvNcactivate_448960
  WM_SYSCOMMAND                                -> 0x00448a68  EvSysCommand_448a68
```

