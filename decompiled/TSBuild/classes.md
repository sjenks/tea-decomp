# TSBuild.exe — classes

Recovered from Borland C++ RTTI (type descriptors, vtables) and OWL response tables. Sizes, bases, destructors and vtable contents are read directly from tables in the binary.

Member lists are **partial**: RTTI records only members that need destruction (objects with destructors), with their offsets. Virtual slots are named `vfN` unless a better name was established; response-table handlers are named from the message or command id.

These are descriptions, not compilable class definitions — in the code each class name is a namespace holding its functions.

## Application classes (8)

### DictionaryMaintainer

```cpp
// sizeof 4 (0x4)  rtti 0x004047cc  vptr at +0x0  destructor 0x00405fbc
class DictionaryMaintainer {
    // vtable at 0x00476b44 (5 slots)
    //   [ 0] 0x00405fbc  DictionaryMaintainer::~DictionaryMaintainer
    //   [ 1] 0x00470140  vshared_470140
    //   [ 2] 0x00470140  vshared_470140
    //   [ 3] 0x00414a94  DictionaryMaintainer::vf3
    //   [ 4] 0x00414a9c  DictionaryMaintainer::vf4
};
```

### DMApplication

```cpp
// sizeof 119 (0x77)  rtti 0x00403914  vptr at +0x1b  destructor 0x00403978
class DMApplication : public OWL::TApplication, public virtual OWL::TEventHandler {
    /* +0x000 */ // base subobject OWL::TApplication
    // vtable at 0x00474d70 (19 slots)
    //   [ 0] 0x00403978  DMApplication::~DMApplication
    //   [ 1] 0x0043b9e4  OWL::TApplication::vf1
    //   [ 2] 0x0043a354  OWL::TApplication::vf2
    //   [ 3] 0x0043a7dc  OWL::TApplication::vf3
    //   [ 4] 0x0043ad9c  OWL::TApplication::vf4
    //   [ 5] 0x0043b4d8  OWL::TApplication::vf5
    //   [ 6] 0x0043b4fc  OWL::TApplication::vf6
    //   [ 7] 0x0043b5b8  OWL::TApplication::vf7
    //   [ 8] 0x0043b6a0  OWL::TApplication::vf8
    //   [ 9] 0x00404090  OWL::TApplication::vf9
    //   [10] 0x0043ba5c  OWL::TApplication::vf10
    //   [11] 0x0043b980  OWL::TApplication::Find
    //   [12] 0x0043a0b0  OWL::TApplication::vf12
    //   [13] 0x00404098  OWL::TApplication::vf13
    //   [14] 0x0043b784  OWL::TApplication::vf14
    //   [15] 0x0043a144  OWL::TApplication::vf15
    //   [16] 0x0043a14c  OWL::TApplication::vf16
    //   [17] 0x00403778  DMApplication::vf17
    //   [18] 0x0043a20c  OWL::TApplication::vf18
};
```

### DMDialog

```cpp
// sizeof 3616 (0xe20)  rtti 0x00403f6c  vptr at +0xc  destructor 0x00404164
class DMDialog : public OWL::TDialog, public DictionaryMaintainer, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TDialog
    /* +0x018 */ // base subobject DictionaryMaintainer
    /* +0x024 */ OWL::TEdit m_24;
    /* +0x0d6 */ OWL::TEdit m_d6;
    /* +0x188 */ OWL::TEdit m_188;
    /* +0x23a */ OWL::TEdit m_23a;
    /* +0x2ec */ OWL::TCheckBox m_2ec;
    /* +0x39c */ TSDictionaryBuilderProgressBar m_39c;
    /* +0x450 */ OWL::TStatic m_450;
    /* +0x4fe */ OWL::TButton m_4fe;
    /* +0x5aa */ OWL::TButton m_5aa;
    /* +0x656 */ OWL::TButton m_656;
    /* +0x702 */ OWL::TButton m_702;
    /* +0x7ae */ OWL::TButton m_7ae;
    /* +0x85a */ OWL::TButton m_85a;
    /* +0x906 */ OWL::TScrollBar m_906;
    /* +0x9b8 */ OWL::TScrollBar m_9b8;
    /* +0xa6a */ OWL::TScrollBar m_a6a;
    /* +0xb1c */ OWL::TEdit m_b1c;
    /* +0xbce */ OWL::TEdit m_bce;
    /* +0xc80 */ OWL::TEdit m_c80;
    /* +0xd38 */ TSBuildProfile m_d38;
    // vtable at 0x00474e54 (20 slots)
    //   [ 0] 0x00404164  DMDialog::~DMDialog
    //   [ 1] 0x0043fc98  OWL::TDialog::vf1
    //   [ 2] 0x00440188  OWL::TDialog::vf2
    //   [ 3] 0x0043fe6c  OWL::TDialog::Create
    //   [ 4] 0x0043fee4  OWL::TDialog::PerformCreate
    //   [ 5] 0x0043ff60  OWL::TDialog::Execute
    //   [ 6] 0x0043ffc0  OWL::TDialog::DoExecute
    //   [ 7] 0x0043fa68  OWL::TDialog::PreProcessMsg
    //   [ 8] 0x004401fc  OWL::TDialog::CloseWindow
    //   [ 9] 0x004017c8  DMDialog::vf9
    //   [10] 0x0044051c  OWL::TDialog::IdleAction
    //   [11] 0x004017ec  DMDialog::vf11
    //   [12] 0x0043fafc  OWL::TDialog::GetClassName
    //   [13] 0x0043fb1c  OWL::TDialog::GetWindowClass
    //   [14] 0x0040124c  DMDialog::Find
    //   [15] 0x004016c0  DMDialog::vf15
    //   [16] 0x004023b0  DMDialog::vf16
    //   [17] 0x00402440  DMDialog::vf17
    //   [18] 0x00402458  DMDialog::vf18
    //   [19] 0x004024a8  DMDialog::vf19
    // response table at 0x00474694 (13 entries)
    //   WM_CLOSE                                     -> 0x0040233c  DMDialog::EvClose
    //   EV_COMMAND(112)                              -> 0x00402a40  DMDialog::Cmd112
    //   EV_COMMAND(104)                              -> 0x00402f18  DMDialog::Cmd104
    //   EV_COMMAND(120)                              -> 0x004031ac  DMDialog::Cmd120
    //   EV_COMMAND(101)                              -> 0x004024c4  DMDialog::Cmd101
    //   EV_COMMAND(106)                              -> 0x00402768  DMDialog::Cmd106
    //   EV_COMMAND(114)                              -> 0x004028c0  DMDialog::Cmd114
    //   EV_COMMAND(108)                              -> 0x00403458  DMDialog::Cmd108
    //   EV_CHILD_NOTIFY(id 108, code 1)              -> 0x00403478  DMDialog::Child108_Notify1
    //   EV_COMMAND(110)                              -> 0x00403498  DMDialog::Cmd110
    //   EV_CHILD_NOTIFY(id 110, code 1)              -> 0x004034b8  DMDialog::Child110_Notify1
    //   EV_COMMAND(119)                              -> 0x004034d8  DMDialog::Cmd119
    //   EV_CHILD_NOTIFY(id 119, code 1)              -> 0x004034f8  DMDialog::Child119_Notify1
};
```

### Help

```cpp
// sizeof 12 (0xc)  rtti 0x00419bac  no vptr  destructor 0x00419d14
class Help {
};
```

### OccurrenceListCache

```cpp
// sizeof 32 (0x20)  rtti 0x0040dd14  no vptr  destructor 0x00405ff4
class OccurrenceListCache {
    /* +0x000 */ std::vector<std::map<std::string,std::vector<long> *,std::less<std::basic_string<char,std::char_traits<char>,std::allocat m_0;
};
```

### Persist

```cpp
// sizeof 8 (0x8)  rtti 0x004168d4  no vptr  destructor 0x00419998
class Persist {
};
```

### TSBuildProfile

```cpp
// sizeof 80 (0x50)  rtti 0x00404b14  no vptr  destructor 0x004160b8
class TSBuildProfile {
    /* +0x000 */ std::string m_0;
    /* +0x010 */ std::string m_10;
    /* +0x020 */ std::string m_20;
    /* +0x030 */ std::string m_30;
};
```

### TSDictionaryBuilderProgressBar

```cpp
// sizeof 180 (0xb4)  rtti 0x00404914  vptr at +0xc  destructor 0x00417310
class TSDictionaryBuilderProgressBar : public OWL::TButton, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TButton
    // vtable at 0x00477094 (11 slots)
    //   [ 0] 0x00417310  TSDictionaryBuilderProgressBar::~TSDictionaryBuilderProgressBar
    //   [ 1] 0x0043d80c  OWL::TControl::vf1
    //   [ 2] 0x0043d868  OWL::TControl::vf2
    //   [ 3] 0x0043d888  OWL::TControl::vf3
    //   [ 4] 0x0043d8c8  OWL::TControl::vf4
    //   [ 5] 0x00417430  TSDictionaryBuilderProgressBar::vf5
    //   [ 6] 0x0043d938  OWL::TControl::vf6
    //   [ 7] 0x0043d960  OWL::TControl::vf7
    //   [ 8] 0x0043c79c  OWL::TButton::Find
    //   [ 9] 0x0043caa0  OWL::TButton::GetClassName
    //   [10] 0x0043cac0  OWL::TButton::SetupWindow
};
```

## Library and template classes (220)

### __rwstd::__rb_tree<int,std::pair<const int,std::string>,__rwstd::__select1st<std::pair<const int,std::string>,int>,std::less<int>>

```cpp
// sizeof 56 (0x38)  rtti 0x004655b0  no vptr  destructor 0x00457f10
class __rwstd::__rb_tree<int,std::pair<const int,std::string>,__rwstd::__select1st<std::pair<const int,std::string>,int>,std::less<int>> {
};
```

### __rwstd::__rwcat

```cpp
// sizeof 64 (0x40)  rtti 0x00465444  no vptr  destructor 0x00464f04
class __rwstd::__rwcat {
    /* +0x008 */ std::map<int,std::string,std::less<int>> m_8;
};
```

### __rwstd::__string_ref_rep<std::allocator<char>>

```cpp
// sizeof 12 (0xc)  rtti 0x004636b0  no vptr
class __rwstd::__string_ref_rep<std::allocator<char>> {
};
```

### __rwstd::__string_ref<char>

```cpp
// sizeof 12 (0xc)  rtti 0x004632f8  no vptr
class __rwstd::__string_ref<char> : public __rwstd::__string_ref_rep<std::allocator<char>> {
    /* +0x000 */ // base subobject __rwstd::__string_ref_rep<std::allocator<char>>
};
```

### __rwstd::facet_imp

```cpp
// sizeof 16 (0x10)  rtti 0x0041c338  vptr at +0x0  destructor 0x0041c3c0
class __rwstd::facet_imp : public __rwstd::ref_counted {
    /* +0x000 */ // base subobject __rwstd::ref_counted
    // vtable at 0x00487564 (3 slots)
    //   [ 0] 0x0041c3c0  __rwstd::facet_imp::~facet_imp
    //   [ 1] 0x0041c3b8  __rwstd::facet_imp::vf1
    //   [ 2] 0x004631b0  __rwstd::facet_imp::vf2
};
```

### __rwstd::locale_imp

```cpp
// sizeof 56 (0x38)  rtti 0x0046698c  vptr at +0x0  destructor 0x00465a28
class __rwstd::locale_imp : public __rwstd::ref_counted {
    /* +0x000 */ // base subobject __rwstd::ref_counted
    /* +0x008 */ __rwstd::locale_vector<std::string> m_8;
    /* +0x010 */ __rwstd::locale_vector<__rwstd::facet_imp *> m_10;
    /* +0x020 */ std::string m_20;
    // vtable at 0x0048885c (1 slots)
    //   [ 0] 0x00465a28  __rwstd::locale_imp::~locale_imp
};
```

### __rwstd::locale_vector<__rwstd::__rwcat *>

```cpp
// sizeof 8 (0x8)  rtti 0x004634a0  no vptr  destructor 0x004599a0
class __rwstd::locale_vector<__rwstd::__rwcat *> {
};
```

### __rwstd::locale_vector<__rwstd::facet_imp *>

```cpp
// sizeof 8 (0x8)  rtti 0x00463434  no vptr  destructor 0x00459a8c
class __rwstd::locale_vector<__rwstd::facet_imp *> {
};
```

### __rwstd::locale_vector<std::string>

```cpp
// sizeof 8 (0x8)  rtti 0x00463398  no vptr  destructor 0x0045a700
class __rwstd::locale_vector<std::string> {
};
```

### __rwstd::punct_data<char>

```cpp
// sizeof 24 (0x18)  rtti 0x00463730  no vptr  destructor 0x004638e4
class __rwstd::punct_data<char> {
    /* +0x008 */ std::string m_8;
};
```

### __rwstd::ref_counted

```cpp
// sizeof 8 (0x8)  rtti 0x004050c4  vptr at +0x0  destructor 0x004658c8
class __rwstd::ref_counted {
    // vtable at 0x00487554 (1 slots)
    //   [ 0] 0x004658c8  __rwstd::ref_counted::~ref_counted
};
```

### __rwstd::use_Clib_locale

```cpp
// sizeof 8 (0x8)  rtti 0x00462d48  no vptr  destructor 0x00465d6c
class __rwstd::use_Clib_locale {
};
```

### OWL::__TBarDescrGdNode

```cpp
// sizeof 5 (0x5)  rtti 0x00456060  no vptr  destructor 0x004558e0
class OWL::__TBarDescrGdNode {
};
```

### OWL::__TFixedAlloc

```cpp
// sizeof 348 (0x15c)  rtti 0x0042b340  no vptr  destructor 0x0042b4f4
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
// sizeof 21 (0x15)  rtti 0x0042abe4  no vptr  destructor 0x0042ac40
class OWL::_TLocaleCache : public OWL::_TLocaleCacheBase {
    /* +0x000 */ // base subobject OWL::_TLocaleCacheBase
};
```

### OWL::_TLocaleCacheBase

```cpp
// sizeof 12 (0xc)  rtti 0x0042aba4  no vptr
class OWL::_TLocaleCacheBase {
};
```

### OWL::_TLocaleCacheList

```cpp
// sizeof 4 (0x4)  rtti 0x0042a518  no vptr  destructor 0x0042aa48
class OWL::_TLocaleCacheList {
};
```

### OWL::ObjectBuilder

```cpp
// sizeof 8 (0x8)  rtti 0x0041add8  no vptr
class OWL::ObjectBuilder {
};
```

### OWL::TAPointer<char>

```cpp
// sizeof 4 (0x4)  rtti 0x0041bf14  no vptr  destructor 0x0041c210
class OWL::TAPointer<char> : public OWL::TPointerBase<char> {
    /* +0x000 */ // base subobject OWL::TPointerBase<char>
};
```

### OWL::TAPointer<OWL::TDocTemplate *>

```cpp
// sizeof 4 (0x4)  rtti 0x00441e2c  no vptr  destructor 0x00444758
class OWL::TAPointer<OWL::TDocTemplate *> : public OWL::TPointerBase<OWL::TDocTemplate *> {
    /* +0x000 */ // base subobject OWL::TPointerBase<OWL::TDocTemplate *>
};
```

### OWL::TAPointer<OWL::TRect>

```cpp
// sizeof 4 (0x4)  rtti 0x00427648  no vptr  destructor 0x004278e8
class OWL::TAPointer<OWL::TRect> : public OWL::TPointerBase<OWL::TRect> {
    /* +0x000 */ // base subobject OWL::TPointerBase<OWL::TRect>
};
```

### OWL::TAppDictImp

```cpp
// sizeof 4 (0x4)  rtti 0x0041cb94  vptr at +0x0  destructor 0x0041cbe4
class OWL::TAppDictImp {
    // vtable at 0x00478fb8 (7 slots)
    //   [ 0] 0x0041cbe4  OWL::TAppDictImp::~TAppDictImp
    //   [ 1] 0x00470140  vshared_470140
    //   [ 2] 0x00470140  vshared_470140
    //   [ 3] 0x00470140  vshared_470140
    //   [ 4] 0x00470140  vshared_470140
    //   [ 5] 0x00470140  vshared_470140
    //   [ 6] 0x00470140  vshared_470140
};
```

### OWL::TAppDictInstImp

```cpp
// sizeof 12 (0xc)  rtti 0x0041cb34  vptr at +0x0  destructor 0x0041cc04
class OWL::TAppDictInstImp : public OWL::TAppDictImp {
    /* +0x000 */ // base subobject OWL::TAppDictImp
    // vtable at 0x00478fe0 (7 slots)
    //   [ 0] 0x0041cc04  OWL::TAppDictInstImp::~TAppDictInstImp
    //   [ 1] 0x0041cc3c  OWL::TAppDictInstImp::vf1
    //   [ 2] 0x0041cc4c  OWL::TAppDictInstImp::vf2
    //   [ 3] 0x0041cc5c  OWL::TAppDictInstImp::vf3
    //   [ 4] 0x0041cc68  OWL::TAppDictInstImp::vf4
    //   [ 5] 0x0041cc74  OWL::TAppDictInstImp::vf5
    //   [ 6] 0x0041cc84  OWL::TAppDictInstImp::vf6
};
```

### OWL::TAppDictionary

```cpp
// sizeof 4 (0x4)  rtti 0x0041c4ec  no vptr  destructor 0x0041c658
class OWL::TAppDictionary {
};
```

### OWL::TAppDictPidImp

```cpp
// sizeof 12 (0xc)  rtti 0x0041cad8  vptr at +0x0  destructor 0x0041c810
class OWL::TAppDictPidImp : public OWL::TAppDictImp {
    /* +0x000 */ // base subobject OWL::TAppDictImp
    // vtable at 0x00478f90 (7 slots)
    //   [ 0] 0x0041c810  OWL::TAppDictPidImp::~TAppDictPidImp
    //   [ 1] 0x0041c86c  OWL::TAppDictPidImp::vf1
    //   [ 2] 0x0041c8c4  OWL::TAppDictPidImp::vf2
    //   [ 3] 0x0041c8e8  OWL::TAppDictPidImp::vf3
    //   [ 4] 0x0041c910  OWL::TAppDictPidImp::vf4
    //   [ 5] 0x0041c93c  OWL::TAppDictPidImp::vf5
    //   [ 6] 0x0041c968  OWL::TAppDictPidImp::vf6
};
```

### OWL::TApplicatData

```cpp
// sizeof 4 (0x4)  rtti 0x004396a0  no vptr  destructor 0x00439638
class OWL::TApplicatData {
};
```

### OWL::TApplication

```cpp
// sizeof 119 (0x77)  rtti 0x004039bc  vptr at +0x1b  destructor 0x00439b48
class OWL::TApplication : public OWL::TModule, public OWL::TMsgThread, public virtual OWL::TEventHandler {
    /* +0x004 */ // base subobject OWL::TModule
    /* +0x011 */ // base subobject OWL::TMsgThread
    /* +0x035 */ std::string m_35;
    // vtable at 0x0047ebf8 (19 slots)
    //   [ 0] 0x00439b48  OWL::TApplication::~TApplication
    //   [ 1] 0x0043b9e4  OWL::TApplication::vf1
    //   [ 2] 0x0043a354  OWL::TApplication::vf2
    //   [ 3] 0x0043a7dc  OWL::TApplication::vf3
    //   [ 4] 0x0043ad9c  OWL::TApplication::vf4
    //   [ 5] 0x0043b4d8  OWL::TApplication::vf5
    //   [ 6] 0x0043b4fc  OWL::TApplication::vf6
    //   [ 7] 0x0043b5b8  OWL::TApplication::vf7
    //   [ 8] 0x0043b6a0  OWL::TApplication::vf8
    //   [ 9] 0x00404090  OWL::TApplication::vf9
    //   [10] 0x0043ba5c  OWL::TApplication::vf10
    //   [11] 0x0043b980  OWL::TApplication::Find
    //   [12] 0x0043a0b0  OWL::TApplication::vf12
    //   [13] 0x00404098  OWL::TApplication::vf13
    //   [14] 0x0043b784  OWL::TApplication::vf14
    //   [15] 0x0043a144  OWL::TApplication::vf15
    //   [16] 0x0043a14c  OWL::TApplication::vf16
    //   [17] 0x0043a1a0  OWL::TApplication::vf17
    //   [18] 0x0043a20c  OWL::TApplication::vf18
    // response table at 0x0047f280 (2 entries)
    //   WM_ACTIVATEAPP                               -> 0x0043b928  OWL::TApplication::EvActivateApp
    //   EV_COMMAND(24310)                            -> 0x0043b958  OWL::TApplication::Cmd24310
};
```

### OWL::TArrayBase

```cpp
// sizeof 8 (0x8)  rtti 0x0041fb5c  no vptr
class OWL::TArrayBase {
};
```

### OWL::TBarDescr

```cpp
// sizeof 52 (0x34)  rtti 0x0044e428  vptr at +0x0  destructor 0x00455a00
class OWL::TBarDescr {
    // vtable at 0x0048442c (4 slots)
    //   [ 0] 0x00455a00  OWL::TBarDescr::~TBarDescr
    //   [ 1] 0x00455b7c  OWL::TBarDescr::vf1
    //   [ 2] 0x00455cd8  OWL::TBarDescr::vf2
    //   [ 3] 0x00455ef4  OWL::TBarDescr::vf3
};
```

### OWL::TBitmap

```cpp
// sizeof 5 (0x5)  rtti 0x0041d504  no vptr  destructor 0x0041cfe8
class OWL::TBitmap : public OWL::TGdiObject {
    /* +0x000 */ // base subobject OWL::TGdiObject
};
```

### OWL::TBrush

```cpp
// sizeof 5 (0x5)  rtti 0x0041fbf4  no vptr  destructor 0x0043c5bc
class OWL::TBrush : public OWL::TGdiObject {
    /* +0x000 */ // base subobject OWL::TGdiObject
};
```

### OWL::TBrushCache

```cpp
// sizeof 196 (0xc4)  rtti 0x0043c154  no vptr  destructor 0x0043c20c
class OWL::TBrushCache {
};
```

### OWL::TButton

```cpp
// sizeof 172 (0xac)  rtti 0x00404a1c  vptr at +0xc  destructor 0x0043c9a4
class OWL::TButton : public OWL::TControl, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TControl
    // vtable at 0x0047f58c (11 slots)
    //   [ 0] 0x0043c9a4  OWL::TButton::~TButton
    //   [ 1] 0x0043d80c  OWL::TControl::vf1
    //   [ 2] 0x0043d868  OWL::TControl::vf2
    //   [ 3] 0x0043d888  OWL::TControl::vf3
    //   [ 4] 0x0043d8c8  OWL::TControl::vf4
    //   [ 5] 0x0043d908  OWL::TControl::vf5
    //   [ 6] 0x0043d938  OWL::TControl::vf6
    //   [ 7] 0x0043d960  OWL::TControl::vf7
    //   [ 8] 0x0043c79c  OWL::TButton::Find
    //   [ 9] 0x0043caa0  OWL::TButton::GetClassName
    //   [10] 0x0043cac0  OWL::TButton::SetupWindow
    // response table at 0x0047f538 (2 entries)
    //   WM_GETDLGCODE                                -> 0x0043caf4  OWL::TButton::EvGetDlgCode
    //   message 0x00f4                               -> 0x0043cb2c  OWL::TButton::EvMsg_f4
};
```

### OWL::TButton::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x0043cf70  vptr at +0x0
class OWL::TButton::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0047f768 (4 slots)
    //   [ 0] 0x0041b07c  OWL::TNewStreamer::vf0
    //   [ 1] 0x0043cd98  EvRegisteredMsg_43cd98_43cd98
    //   [ 2] 0x0043ce28  OWL::TButton::Streamer::vf2
    //   [ 3] 0x0043cfbc  OWL::TButton::Streamer::vf3
};
```

### OWL::TButtonGadget

```cpp
// sizeof 96 (0x60)  rtti 0x0041d840  vptr at +0x0  destructor 0x0041db0c
class OWL::TButtonGadget : public OWL::TGadget {
    /* +0x000 */ // base subobject OWL::TGadget
    // vtable at 0x00479420 (29 slots)
    //   [ 0] 0x0041db0c  OWL::TButtonGadget::~TButtonGadget
    //   [ 1] 0x0042426c  OWL::TGadget::vf1
    //   [ 2] 0x0041df4c  OWL::TButtonGadget::vf2
    //   [ 3] 0x0041de90  OWL::TButtonGadget::vf3
    //   [ 4] 0x00424244  OWL::TGadget::vf4
    //   [ 5] 0x0041dc1c  OWL::TButtonGadget::vf5
    //   [ 6] 0x0041dc78  OWL::TButtonGadget::vf6
    //   [ 7] 0x004243e0  OWL::TGadget::vf7
    //   [ 8] 0x0042449c  OWL::TGadget::vf8
    //   [ 9] 0x00424570  OWL::TGadget::vf9
    //   [10] 0x004244a4  OWL::TGadget::vf10
    //   [11] 0x00424390  OWL::TGadget::vf11
    //   [12] 0x0041e2e4  OWL::TButtonGadget::vf12
    //   [13] 0x0041e334  OWL::TButtonGadget::vf13
    //   [14] 0x0041e84c  OWL::TButtonGadget::vf14
    //   [15] 0x0041e884  OWL::TButtonGadget::vf15
    //   [16] 0x0041e8d0  OWL::TButtonGadget::vf16
    //   [17] 0x0041e824  OWL::TButtonGadget::vf17
    //   [18] 0x00424bfc  OWL::TGadget::vf18
    //   [19] 0x0041e908  OWL::TButtonGadget::vf19
    //   [20] 0x00424c04  OWL::TGadget::vf20
    //   [21] 0x0041e52c  OWL::TButtonGadget::vf21
    //   [22] 0x0041dfd8  OWL::TButtonGadget::vf22
    //   [23] 0x0041e080  OWL::TButtonGadget::vf23
    //   [24] 0x0041e0ec  OWL::TButtonGadget::vf24
    //   [25] 0x0041e6b8  OWL::TButtonGadget::vf25
    //   [26] 0x0041e6fc  OWL::TButtonGadget::vf26
    //   [27] 0x0041e740  OWL::TButtonGadget::vf27
    //   [28] 0x0041d5d4  OWL::TButtonGadget::vf28
};
```

### OWL::TButtonGadgetEnabler

```cpp
// sizeof 20 (0x14)  rtti 0x0041e94c  vptr at +0x0
class OWL::TButtonGadgetEnabler : public OWL::TCommandEnabler {
    /* +0x000 */ // base subobject OWL::TCommandEnabler
    // vtable at 0x00479408 (3 slots)
    //   [ 0] 0x0041d954  OWL::TButtonGadgetEnabler::vf0
    //   [ 1] 0x0041d97c  OWL::TButtonGadgetEnabler::vf1
    //   [ 2] 0x0041d984  OWL::TButtonGadgetEnabler::vf2
};
```

### OWL::TBwccDll

```cpp
// sizeof 61 (0x3d)  rtti 0x00439ee8  vptr at +0x0  destructor 0x0043a004
class OWL::TBwccDll : public OWL::TModule {
    /* +0x000 */ // base subobject OWL::TModule
};
```

### OWL::TCacheEntryStr

```cpp
// sizeof 497 (0x1f1)  rtti 0x004369d8  no vptr  destructor 0x0043928c
class OWL::TCacheEntryStr {
};
```

### OWL::TCelArray

```cpp
// sizeof 49 (0x31)  rtti 0x0041d5f4  vptr at +0x0  destructor 0x0041ec24
class OWL::TCelArray {
    // vtable at 0x004796fc (1 slots)
    //   [ 0] 0x0041ec24  OWL::TCelArray::~TCelArray
};
```

### OWL::TCheckBox

```cpp
// sizeof 176 (0xb0)  rtti 0x00404898  vptr at +0xc  destructor 0x0043d1f8
class OWL::TCheckBox : public OWL::TButton, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TButton
    // vtable at 0x0047f7cc (12 slots)
    //   [ 0] 0x0043d1f8  OWL::TCheckBox::~TCheckBox
    //   [ 1] 0x0043d80c  OWL::TControl::vf1
    //   [ 2] 0x0043d868  OWL::TControl::vf2
    //   [ 3] 0x0043d888  OWL::TControl::vf3
    //   [ 4] 0x0043d8c8  OWL::TControl::vf4
    //   [ 5] 0x0043d908  OWL::TControl::vf5
    //   [ 6] 0x0043d938  OWL::TControl::vf6
    //   [ 7] 0x0043d960  OWL::TControl::vf7
    //   [ 8] 0x0043cfc8  OWL::TCheckBox::Find
    //   [ 9] 0x0043d2f4  OWL::TCheckBox::GetClassName
    //   [10] 0x0043cac0  OWL::TButton::SetupWindow
    //   [11] 0x0043d314  OWL::TCheckBox::Transfer
};
```

### OWL::TChildMetrics

```cpp
// sizeof 89 (0x59)  rtti 0x0042a320  no vptr
class OWL::TChildMetrics {
};
```

### OWL::TClipboard

```cpp
// sizeof 1 (0x1)  rtti 0x0041a3ac  no vptr  destructor 0x0041fe30
class OWL::TClipboard {
};
```

### OWL::TCommandEnabler

```cpp
// sizeof 16 (0x10)  rtti 0x0041d640  vptr at +0x0
class OWL::TCommandEnabler {
    // vtable at 0x0047e990 (4 slots)
    //   [ 0] 0x00435bf0  OWL::TCommandEnabler::vf0
    //   [ 1] 0x00470140  vshared_470140
    //   [ 2] 0x00470140  vshared_470140
    //   [ 3] 0x00439320  OWL::TCommandEnabler::vf3
};
```

### OWL::TCommCtrlDll

```cpp
// sizeof 17 (0x11)  rtti 0x0041b714  vptr at +0x0  destructor 0x0041b7dc
class OWL::TCommCtrlDll : public OWL::TModule {
    /* +0x000 */ // base subobject OWL::TModule
    // vtable at 0x00478b74 (2 slots)
    //   [ 0] 0x0041b7dc  OWL::TCommCtrlDll::~TCommCtrlDll
    //   [ 1] 0x0044f028  OWL::TModule::vf1
};
```

### OWL::TCommonDialog

```cpp
// sizeof 178 (0xb2)  rtti 0x00404cf4  vptr at +0xc  destructor 0x00420788
class OWL::TCommonDialog : public OWL::TDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TDialog
    // vtable at 0x00479df0 (15 slots)
    //   [ 0] 0x00420788  OWL::TCommonDialog::~TCommonDialog
    //   [ 1] 0x0043fc98  OWL::TDialog::vf1
    //   [ 2] 0x00440188  OWL::TDialog::vf2
    //   [ 3] 0x0043fe6c  OWL::TDialog::Create
    //   [ 4] 0x004208a8  OWL::TCommonDialog::PerformCreate
    //   [ 5] 0x0043ff60  OWL::TDialog::Execute
    //   [ 6] 0x004208b0  OWL::TCommonDialog::DoExecute
    //   [ 7] 0x0043fa68  OWL::TDialog::PreProcessMsg
    //   [ 8] 0x004401fc  OWL::TDialog::CloseWindow
    //   [ 9] 0x00440254  OWL::TDialog::Destroy
    //   [10] 0x0044051c  OWL::TDialog::IdleAction
    //   [11] 0x00420884  OWL::TCommonDialog::SetupWindow
    //   [12] 0x0043fafc  OWL::TDialog::GetClassName
    //   [13] 0x0043fb1c  OWL::TDialog::GetWindowClass
    //   [14] 0x004205cc  OWL::TCommonDialog::Find
    // response table at 0x00479d3c (3 entries)
    //   WM_CLOSE                                     -> 0x00420614  OWL::TCommonDialog::EvClose
    //   EV_COMMAND(1)                                -> 0x00420624  OWL::TCommonDialog::CmRange1to2
    //   EV_COMMAND(2)                                -> 0x00420624  OWL::TCommonDialog::CmRange1to2
};
```

### OWL::TConstraint

```cpp
// sizeof 36 (0x24)  rtti 0x0042a2e4  no vptr
class OWL::TConstraint {
};
```

### OWL::TControl

```cpp
// sizeof 170 (0xaa)  rtti 0x00404ef0  vptr at +0xc  destructor 0x0043d704
class OWL::TControl : public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    // vtable at 0x0047f9bc (9 slots)
    //   [ 0] 0x0043d704  OWL::TControl::~TControl
    //   [ 1] 0x0043d80c  OWL::TControl::vf1
    //   [ 2] 0x0043d868  OWL::TControl::vf2
    //   [ 3] 0x0043d888  OWL::TControl::vf3
    //   [ 4] 0x0043d8c8  OWL::TControl::vf4
    //   [ 5] 0x0043d908  OWL::TControl::vf5
    //   [ 6] 0x0043d938  OWL::TControl::vf6
    //   [ 7] 0x0043d960  OWL::TControl::vf7
    //   [ 8] 0x0043d3bc  OWL::TControl::Find
    // response table at 0x0047f8fc (5 entries)
    //   WM_PAINT                                     -> 0x0043d7c8  OWL::TControl::EvPaint
    //   WM_COMPAREITEM                               -> 0x0043d7f4  OWL::TControl::EvCompareitem
    //   WM_DELETEITEM                                -> 0x0043d850  OWL::TControl::EvDeleteitem
    //   WM_DRAWITEM                                  -> 0x0043d8b0  OWL::TControl::EvDrawItem
    //   WM_MEASUREITEM                               -> 0x0043d870  OWL::TControl::EvMeasureItem
};
```

### OWL::TControl::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x0043dd50  vptr at +0x0
class OWL::TControl::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0047fb80 (5 slots)
    //   [ 0] 0x0041b07c  OWL::TNewStreamer::vf0
    //   [ 1] 0x0043db74  OWL::TControl::Streamer::vf1
    //   [ 2] 0x0043dc04  OWL::TControl::Streamer::vf2
    //   [ 3] 0x0043dd9c  OWL::TControl::Streamer::vf3
    //   [ 4] 0x00421198  OWL::TControl::Streamer::vf4
};
```

### OWL::TControlBar

```cpp
// sizeof 227 (0xe3)  rtti 0x00421298  vptr at +0x18  destructor 0x004211b8
class OWL::TControlBar : public OWL::TGadgetWindow, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TGadgetWindow
    // vtable at 0x0047a018 (27 slots)
    //   [ 0] 0x004211b8  OWL::TControlBar::~TControlBar
    //   [ 1] 0x00425c40  OWL::TGadgetWindow::Create
    //   [ 2] 0x00425c5c  OWL::TGadgetWindow::vf2
    //   [ 3] 0x00421318  OWL::TGadgetWindow::GetTooltip
    //   [ 4] 0x00427278  OWL::TGadgetWindow::EnableTooltip
    //   [ 5] 0x004268cc  OWL::TGadgetWindow::vf5
    //   [ 6] 0x004268f4  OWL::TGadgetWindow::vf6
    //   [ 7] 0x0042695c  OWL::TGadgetWindow::vf7
    //   [ 8] 0x0042691c  OWL::TGadgetWindow::vf8
    //   [ 9] 0x00426980  OWL::TGadgetWindow::vf9
    //   [10] 0x00426a00  OWL::TGadgetWindow::vf10
    //   [11] 0x00426a58  OWL::TGadgetWindow::vf11
    //   [12] 0x00425878  OWL::TGadgetWindow::IdleAction
    //   [13] 0x00425a50  OWL::TGadgetWindow::vf13
    //   [14] 0x00425a88  OWL::TGadgetWindow::vf14
    //   [15] 0x00426d60  OWL::TGadgetWindow::vf15
    //   [16] 0x00425ce0  OWL::TGadgetWindow::vf16
    //   [17] 0x00426880  OWL::TGadgetWindow::vf17
    //   [18] 0x00425de0  OWL::TGadgetWindow::vf18
    //   [19] 0x00426ef4  OWL::TGadgetWindow::Paint
    //   [20] 0x00425d98  OWL::TGadgetWindow::vf20
    //   [21] 0x00426af0  OWL::TGadgetWindow::SetupWindow
    //   [22] 0x00426bb4  OWL::TGadgetWindow::CleanupWindow
    //   [23] 0x00426c20  OWL::TGadgetWindow::PreProcessMsg
    //   [24] 0x00427428  OWL::TGadgetWindow::EvCommand
    //   [25] 0x004274f4  OWL::TGadgetWindow::EvCommandEnable
    //   [26] 0x004251dc  OWL::TGadgetWindow::Find
};
```

### OWL::TControlEnabler

```cpp
// sizeof 16 (0x10)  rtti 0x004404d0  vptr at +0x0
class OWL::TControlEnabler : public OWL::TCommandEnabler {
    /* +0x000 */ // base subobject OWL::TCommandEnabler
    // vtable at 0x004800c4 (3 slots)
    //   [ 0] 0x004403d4  OWL::TControlEnabler::vf0
    //   [ 1] 0x00440414  OWL::TControlEnabler::vf1
    //   [ 2] 0x0044049c  OWL::TControlEnabler::vf2
};
```

### OWL::TCreatedDC

```cpp
// sizeof 33 (0x21)  rtti 0x0041d4ac  vptr at +0x5  destructor 0x00421698
class OWL::TCreatedDC : public OWL::TDC {
    /* +0x000 */ // base subobject OWL::TDC
    // vtable at 0x0047a1b4 (24 slots)
    //   [ 0] 0x00421698  OWL::TCreatedDC::~TCreatedDC
    //   [ 1] 0x0042205c  OWL::TDC::vf1
    //   [ 2] 0x0042206c  OWL::TDC::vf2
    //   [ 3] 0x00422088  OWL::TDC::vf3
    //   [ 4] 0x004220a4  OWL::TDC::vf4
    //   [ 5] 0x00421d30  OWL::TDC::vf5
    //   [ 6] 0x00421dc0  OWL::TDC::vf6
    //   [ 7] 0x00421e44  OWL::TDC::vf7
    //   [ 8] 0x004220c0  OWL::TDC::vf8
    //   [ 9] 0x0042210c  OWL::TDC::vf9
    //   [10] 0x00422158  OWL::TDC::vf10
    //   [11] 0x0042218c  OWL::TDC::vf11
    //   [12] 0x004221d8  OWL::TDC::vf12
    //   [13] 0x00422224  OWL::TDC::vf13
    //   [14] 0x00422270  OWL::TDC::vf14
    //   [15] 0x004222c4  OWL::TDC::vf15
    //   [16] 0x00422310  OWL::TDC::vf16
    //   [17] 0x00422364  OWL::TDC::vf17
    //   [18] 0x0042239c  OWL::TDC::vf18
    //   [19] 0x004223e0  OWL::TDC::vf19
    //   [20] 0x00422448  OWL::TDC::vf20
    //   [21] 0x00422468  OWL::TDC::vf21
    //   [22] 0x00422494  OWL::TDC::vf22
    //   [23] 0x00421ce0  OWL::TDC::vf23
};
```

### OWL::TCtl3dDll

```cpp
// sizeof 61 (0x3d)  rtti 0x00439e90  vptr at +0x0  destructor 0x0043a048
class OWL::TCtl3dDll : public OWL::TModule {
    /* +0x000 */ // base subobject OWL::TModule
};
```

### OWL::TDC

```cpp
// sizeof 33 (0x21)  rtti 0x004175a0  vptr at +0x5  destructor 0x00421cb4
class OWL::TDC : public OWL::TGdiBase {
    /* +0x000 */ // base subobject OWL::TGdiBase
    // vtable at 0x0047a4f8 (24 slots)
    //   [ 0] 0x00421cb4  OWL::TDC::~TDC
    //   [ 1] 0x0042205c  OWL::TDC::vf1
    //   [ 2] 0x0042206c  OWL::TDC::vf2
    //   [ 3] 0x00422088  OWL::TDC::vf3
    //   [ 4] 0x004220a4  OWL::TDC::vf4
    //   [ 5] 0x00421d30  OWL::TDC::vf5
    //   [ 6] 0x00421dc0  OWL::TDC::vf6
    //   [ 7] 0x00421e44  OWL::TDC::vf7
    //   [ 8] 0x004220c0  OWL::TDC::vf8
    //   [ 9] 0x0042210c  OWL::TDC::vf9
    //   [10] 0x00422158  OWL::TDC::vf10
    //   [11] 0x0042218c  OWL::TDC::vf11
    //   [12] 0x004221d8  OWL::TDC::vf12
    //   [13] 0x00422224  OWL::TDC::vf13
    //   [14] 0x00422270  OWL::TDC::vf14
    //   [15] 0x004222c4  OWL::TDC::vf15
    //   [16] 0x00422310  OWL::TDC::vf16
    //   [17] 0x00422364  OWL::TDC::vf17
    //   [18] 0x0042239c  OWL::TDC::vf18
    //   [19] 0x004223e0  OWL::TDC::vf19
    //   [20] 0x00422448  OWL::TDC::vf20
    //   [21] 0x00422468  OWL::TDC::vf21
    //   [22] 0x00422494  OWL::TDC::vf22
    //   [23] 0x00421ce0  OWL::TDC::vf23
};
```

### OWL::TDecoratedFrame

```cpp
// sizeof 299 (0x12b)  rtti 0x0041d6e8  vptr at +0x35  destructor 0x0043df5c
class OWL::TDecoratedFrame : public OWL::TLayoutWindow, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow, public virtual OWL::TFrameWindow {
    /* +0x004 */ // base subobject OWL::TLayoutWindow
    // vtable at 0x0047fcec (15 slots)
    //   [ 0] 0x0043df5c  OWL::TDecoratedFrame::~TDecoratedFrame
    //   [ 1] 0x0043f1b4  OWL::TDecoratedFrame::vf1
    //   [ 2] 0x0043e3ec  OWL::TDecoratedFrame::vf2
    //   [ 3] 0x0043e37c  OWL::TDecoratedFrame::TFrameWindow_vf10
    //   [ 4] 0x0043e198  OWL::TDecoratedFrame::TFrameWindow_vf7
    //   [ 5] 0x0043f27c  OWL::TDecoratedFrame::vf5
    //   [ 6] 0x0043f364  OWL::TDecoratedFrame::TFrameWindow_vf4
    //   [ 7] 0x0043f3a4  OWL::TDecoratedFrame::TFrameWindow_vf5
    //   [ 8] 0x0043f2f8  OWL::TDecoratedFrame::vf8
    //   [ 9] 0x0043e0dc  OWL::TDecoratedFrame::TFrameWindow_vf16
    //   [10] 0x0043e164  OWL::TDecoratedFrame::TFrameWindow_vf17
    //   [11] 0x0043e33c  OWL::TDecoratedFrame::TFrameWindow_vf8
    //   [12] 0x0043e770  OWL::TDecoratedFrame::TFrameWindow_vf14
    //   [13] 0x0043e8e8  OWL::TDecoratedFrame::TFrameWindow_vf15
    //   [14] 0x0043dee0  OWL::TDecoratedFrame::Find
    // response table at 0x0047fbe0 (3 entries)
    //   WM_ENTERIDLE                                 -> 0x0043e6bc  OWL::TDecoratedFrame::EvEnteridle
    //   WM_MENUSELECT                                -> 0x0043e5a4  OWL::TDecoratedFrame::EvMenuSelect
    //   WM_SIZE                                      -> 0x0043e68c  OWL::TDecoratedFrame::EvSize
};
```

### OWL::TDefaultGUIFont

```cpp
// sizeof 5 (0x5)  rtti 0x00423ec4  no vptr  destructor 0x00423f24
class OWL::TDefaultGUIFont : public OWL::TFont {
    /* +0x000 */ // base subobject OWL::TFont
};
```

### OWL::TDeferWinPos

```cpp
// sizeof 4 (0x4)  rtti 0x0042913c  no vptr  destructor 0x00428dbc
class OWL::TDeferWinPos {
};
```

### OWL::TDiagBase

```cpp
// sizeof 17 (0x11)  rtti 0x0041facc  vptr at +0x0  destructor 0x0041f780
class OWL::TDiagBase {
    // vtable at 0x00479b4c (2 slots)
    //   [ 0] 0x00470140  vshared_470140
    //   [ 1] 0x0041f780  OWL::TDiagBase::~TDiagBase
};
```

### OWL::TDiagGroupDef

```cpp
// sizeof 17 (0x11)  rtti 0x0041fa2c  vptr at +0x0  destructor 0x0041fa88
class OWL::TDiagGroupDef : public OWL::TDiagBase {
    /* +0x000 */ // base subobject OWL::TDiagBase
    // vtable at 0x00479b60 (2 slots)
    //   [ 0] 0x0041f6d8  OWL::TDiagGroupDef::vf0
    //   [ 1] 0x0041fa88  OWL::TDiagGroupDef::~TDiagGroupDef
};
```

### OWL::TDialog

```cpp
// sizeof 174 (0xae)  rtti 0x0040293c  vptr at +0xc  destructor 0x0043f8f4
class OWL::TDialog : public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    // vtable at 0x0047ff60 (15 slots)
    //   [ 0] 0x0043f8f4  OWL::TDialog::~TDialog
    //   [ 1] 0x0043fc98  OWL::TDialog::vf1
    //   [ 2] 0x00440188  OWL::TDialog::vf2
    //   [ 3] 0x0043fe6c  OWL::TDialog::Create
    //   [ 4] 0x0043fee4  OWL::TDialog::PerformCreate
    //   [ 5] 0x0043ff60  OWL::TDialog::Execute
    //   [ 6] 0x0043ffc0  OWL::TDialog::DoExecute
    //   [ 7] 0x0043fa68  OWL::TDialog::PreProcessMsg
    //   [ 8] 0x004401fc  OWL::TDialog::CloseWindow
    //   [ 9] 0x00440254  OWL::TDialog::Destroy
    //   [10] 0x0044051c  OWL::TDialog::IdleAction
    //   [11] 0x004401b8  OWL::TDialog::SetupWindow
    //   [12] 0x0043fafc  OWL::TDialog::GetClassName
    //   [13] 0x0043fb1c  OWL::TDialog::GetWindowClass
    //   [14] 0x0043f5e0  OWL::TDialog::Find
};
```

### OWL::TDib

```cpp
// sizeof 32 (0x20)  rtti 0x0041d580  vptr at +0x5  destructor 0x0044070c
class OWL::TDib : public OWL::TGdiBase {
    /* +0x000 */ // base subobject OWL::TGdiBase
    // vtable at 0x004800dc (4 slots)
    //   [ 0] 0x0044070c  OWL::TDib::~TDib
    //   [ 1] 0x004408fc  OWL::TDib::vf1
    //   [ 2] 0x00440c58  OWL::TDib::vf2
    //   [ 3] 0x0041e068  OWL::TDib::vf3
};
```

### OWL::TDiskFileHandle

```cpp
// sizeof 28 (0x1c)  rtti 0x00449ca8  vptr at +0x0  destructor 0x00449d10
class OWL::TDiskFileHandle : public OWL::TFileHandle {
    /* +0x000 */ // base subobject OWL::TFileHandle
    /* +0x00c */ std::string m_c;
    // vtable at 0x00481ef0 (23 slots)
    //   [ 0] 0x00449d10  OWL::TDiskFileHandle::~TDiskFileHandle
    //   [ 1] 0x00449dc8  OWL::TDiskFileHandle::vf1
    //   [ 2] 0x00449dd4  OWL::TDiskFileHandle::vf2
    //   [ 3] 0x0044a03c  OWL::TDiskFileHandle::vf3
    //   [ 4] 0x00449eb4  OWL::TDiskFileHandle::vf4
    //   [ 5] 0x00449fa4  OWL::TDiskFileHandle::vf5
    //   [ 6] 0x0044a048  OWL::TDiskFileHandle::vf6
    //   [ 7] 0x0044a064  OWL::TDiskFileHandle::vf7
    //   [ 8] 0x0044a090  OWL::TDiskFileHandle::vf8
    //   [ 9] 0x0044a0bc  OWL::TDiskFileHandle::vf9
    //   [10] 0x0044a0fc  OWL::TDiskFileHandle::vf10
    //   [11] 0x0044a118  OWL::TDiskFileHandle::vf11
    //   [12] 0x0044a13c  OWL::TDiskFileHandle::vf12
    //   [13] 0x0044a174  OWL::TDiskFileHandle::vf13
    //   [14] 0x0044a194  OWL::TDiskFileHandle::vf14
    //   [15] 0x0044a1b0  OWL::TDiskFileHandle::vf15
    //   [16] 0x0044a1e8  OWL::TDiskFileHandle::vf16
    //   [17] 0x0044a208  OWL::TDiskFileHandle::vf17
    //   [18] 0x0044a224  OWL::TDiskFileHandle::vf18
    //   [19] 0x0044a248  OWL::TDiskFileHandle::vf19
    //   [20] 0x0044a26c  OWL::TDiskFileHandle::vf20
    //   [21] 0x0044a2b0  OWL::TDiskFileHandle::vf21
    //   [22] 0x0044a334  OWL::TDiskFileHandle::vf22
};
```

### OWL::TDockable

```cpp
// sizeof 4 (0x4)  rtti 0x004410b4  vptr at +0x0
class OWL::TDockable {
};
```

### OWL::TDockingSlip

```cpp
// sizeof 8 (0x8)  rtti 0x00440ef4  vptr at +0x0
class OWL::TDockingSlip {
};
```

### OWL::TDocManager

```cpp
// sizeof 56 (0x38)  rtti 0x00439f40  vptr at +0x8  destructor 0x004417ec
class OWL::TDocManager : public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase {
    /* +0x014 */ OWL::TDocument::TList m_14;
    // vtable at 0x00480aec (28 slots)
    //   [ 0] 0x004417ec  OWL::TDocManager::~TDocManager
    //   [ 1] 0x00441a00  OWL::TDocManager::vf1
    //   [ 2] 0x00441a64  OWL::TDocManager::vf2
    //   [ 3] 0x00441ac8  OWL::TDocManager::vf3
    //   [ 4] 0x00441b80  OWL::TDocManager::vf4
    //   [ 5] 0x00441c98  OWL::TDocManager::vf5
    //   [ 6] 0x00441e98  OWL::TDocManager::vf6
    //   [ 7] 0x004422bc  OWL::TDocManager::vf7
    //   [ 8] 0x004423b4  OWL::TDocManager::vf8
    //   [ 9] 0x004424e8  OWL::TDocManager::vf9
    //   [10] 0x00442598  OWL::TDocManager::vf10
    //   [11] 0x004431a0  OWL::TDocManager::vf11
    //   [12] 0x00443f18  OWL::TDocManager::vf12
    //   [13] 0x00443edc  OWL::TDocManager::vf13
    //   [14] 0x00443f58  OWL::TDocManager::vf14
    //   [15] 0x0044409c  OWL::TDocManager::vf15
    //   [16] 0x00444004  OWL::TDocManager::vf16
    //   [17] 0x00444138  OWL::TDocManager::vf17
    //   [18] 0x004441a8  OWL::TDocManager::vf18
    //   [19] 0x00443244  OWL::TDocManager::vf19
    //   [20] 0x004432d0  OWL::TDocManager::vf20
    //   [21] 0x00443314  OWL::TDocManager::vf21
    //   [22] 0x00443ce0  OWL::TDocManager::vf22
    //   [23] 0x00443358  OWL::TDocManager::vf23
    //   [24] 0x004434f0  OWL::TDocManager::vf24
    //   [25] 0x00443b14  OWL::TDocManager::vf25
    //   [26] 0x00443c2c  OWL::TDocManager::vf26
    //   [27] 0x00441758  OWL::TDocManager::Find
    // response table at 0x0048021c (17 entries)
    //   WM_OWLCANCLOSE                               -> 0x00443dec  OWL::TDocManager::EvOwlcanclose
    //   WM_OWLPREPROCMENU                            -> 0x00443e20  OWL::TDocManager::EvOwlpreprocmenu
    //   message 0x7ef6                               -> 0x00443e90  OWL::TDocManager::EvMsg_7ef6
    //   EV_COMMAND(24331)                            -> 0x0044177c  OWL::TDocManager::Cmd24331
    //   EV_COMMAND(24332)                            -> 0x0044178c  OWL::TDocManager::Cmd24332
    //   EV_COMMAND(24333)                            -> 0x0044179c  OWL::TDocManager::Cmd24333
    //   EV_COMMAND(24334)                            -> 0x004417ac  OWL::TDocManager::Cmd24334
    //   EV_COMMAND(24335)                            -> 0x004417bc  OWL::TDocManager::Cmd24335
    //   EV_COMMAND(24339)                            -> 0x004417cc  OWL::TDocManager::Cmd24339
    //   EV_COMMAND(24341)                            -> 0x004417dc  OWL::TDocManager::Cmd24341
    //   EV_COMMAND_ENABLE(24331)                     -> 0x00443ebc  OWL::TDocManager::CeCmd24331
    //   EV_COMMAND_ENABLE(24332)                     -> 0x00443ef8  OWL::TDocManager::CeCmd24332
    //   EV_COMMAND_ENABLE(24333)                     -> 0x0044405c  OWL::TDocManager::CeCmd24333
    //   EV_COMMAND_ENABLE(24334)                     -> 0x00443fe0  OWL::TDocManager::CeCmd24334
    //   EV_COMMAND_ENABLE(24335)                     -> 0x004440f8  OWL::TDocManager::CeCmd24335
    //   EV_COMMAND_ENABLE(24339)                     -> 0x00443f30  OWL::TDocManager::CeCmd24339
    //   EV_COMMAND_ENABLE(24341)                     -> 0x00444184  OWL::TDocManager::CeCmd24341
};
```

### OWL::TDocTemplate

```cpp
// sizeof 40 (0x28)  rtti 0x0044477c  vptr at +0x0  destructor 0x00444830
class OWL::TDocTemplate : public OWL::TRegLink, public OWL::TStreamableBase {
    /* +0x000 */ // base subobject OWL::TRegLink
    /* +0x00c */ // base subobject OWL::TStreamableBase
    // vtable at 0x00480dc8 (7 slots)
    //   [ 0] 0x00444830  OWL::TDocTemplate::~TDocTemplate
    //   [ 1] 0x00470140  vshared_470140
    //   [ 2] 0x00470140  vshared_470140
    //   [ 3] 0x00470140  vshared_470140
    //   [ 4] 0x00470140  vshared_470140
    //   [ 5] 0x00470140  vshared_470140
    //   [ 6] 0x00470140  vshared_470140
};
```

### OWL::TDocument

```cpp
// sizeof 50 (0x32)  rtti 0x00441f94  vptr at +0x0  destructor 0x00444934
class OWL::TDocument : public OWL::TStreamableBase {
    /* +0x000 */ // base subobject OWL::TStreamableBase
    /* +0x008 */ OWL::TDocument::TList m_8;
    // vtable at 0x00480a7c (25 slots)
    //   [ 0] 0x00444934  OWL::TDocument::~TDocument
    //   [ 1] 0x00444484  OWL::TDocument::vf1
    //   [ 2] 0x0044448c  OWL::TDocument::vf2
    //   [ 3] 0x00444494  OWL::TDocument::vf3
    //   [ 4] 0x00445384  OWL::TDocument::vf4
    //   [ 5] 0x0044508c  OWL::TDocument::vf5
    //   [ 6] 0x004450d8  OWL::TDocument::vf6
    //   [ 7] 0x00444c6c  OWL::TDocument::vf7
    //   [ 8] 0x00444c80  OWL::TDocument::vf8
    //   [ 9] 0x00444d68  OWL::TDocument::vf9
    //   [10] 0x0044527c  OWL::TDocument::vf10
    //   [11] 0x0044449c  OWL::TDocument::vf11
    //   [12] 0x00445344  OWL::TDocument::vf12
    //   [13] 0x004452d0  OWL::TDocument::vf13
    //   [14] 0x004452f0  OWL::TDocument::vf14
    //   [15] 0x004453b8  OWL::TDocument::vf15
    //   [16] 0x004444b0  OWL::TDocument::vf16
    //   [17] 0x00444b08  OWL::TDocument::vf17
    //   [18] 0x00444ae8  OWL::TDocument::vf18
    //   [19] 0x00444ac8  OWL::TDocument::vf19
    //   [20] 0x00444b38  OWL::TDocument::vf20
    //   [21] 0x00444c34  OWL::TDocument::vf21
    //   [22] 0x004444bc  OWL::TDocument::vf22
    //   [23] 0x00444eac  OWL::TDocument::vf23
    //   [24] 0x00444ec0  OWL::TDocument::vf24
};
```

### OWL::TDocument::TList

```cpp
// sizeof 4 (0x4)  rtti 0x00439fb0  no vptr  destructor 0x0043a08c
class OWL::TDocument::TList {
};
```

### OWL::TDvFileOpenDialog

```cpp
// sizeof 274 (0x112)  rtti 0x00443a84  vptr at +0xc  destructor 0x004441cc
class OWL::TDvFileOpenDialog : public OWL::TFileOpenDialog, public OWL::TDvOpenSaveDataOwner, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TFileOpenDialog
    /* +0x078 */ // base subobject OWL::TDvOpenSaveDataOwner
    // vtable at 0x00480c74 (16 slots)
    //   [ 0] 0x004441cc  OWL::TDvFileOpenDialog::~TDvFileOpenDialog
    //   [ 1] 0x0044152c  OWL::TDvFileOpenDialog::vf1
    //   [ 2] 0x00440188  OWL::TDialog::vf2
    //   [ 3] 0x0043fe6c  OWL::TDialog::Create
    //   [ 4] 0x004208a8  OWL::TCommonDialog::PerformCreate
    //   [ 5] 0x0043ff60  OWL::TDialog::Execute
    //   [ 6] 0x00451198  OWL::TFileOpenDialog::vf6
    //   [ 7] 0x0043fa68  OWL::TDialog::PreProcessMsg
    //   [ 8] 0x004401fc  OWL::TDialog::CloseWindow
    //   [ 9] 0x00440254  OWL::TDialog::Destroy
    //   [10] 0x0044051c  OWL::TDialog::IdleAction
    //   [11] 0x00420884  OWL::TCommonDialog::SetupWindow
    //   [12] 0x0043fafc  OWL::TDialog::GetClassName
    //   [13] 0x0043fb1c  OWL::TDialog::GetWindowClass
    //   [14] 0x00450d4c  OWL::TOpenSaveDialog::vf14
    //   [15] 0x00451034  OWL::TOpenSaveDialog::vf15
};
```

### OWL::TDvFileSaveDialog

```cpp
// sizeof 274 (0x112)  rtti 0x004439f4  vptr at +0xc  destructor 0x004442e0
class OWL::TDvFileSaveDialog : public OWL::TFileSaveDialog, public OWL::TDvOpenSaveDataOwner, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TFileSaveDialog
    /* +0x078 */ // base subobject OWL::TDvOpenSaveDataOwner
    // vtable at 0x00480b80 (16 slots)
    //   [ 0] 0x004442e0  OWL::TDvFileSaveDialog::~TDvFileSaveDialog
    //   [ 1] 0x00441704  OWL::TDvFileSaveDialog::vf1
    //   [ 2] 0x00440188  OWL::TDialog::vf2
    //   [ 3] 0x0043fe6c  OWL::TDialog::Create
    //   [ 4] 0x004208a8  OWL::TCommonDialog::PerformCreate
    //   [ 5] 0x0043ff60  OWL::TDialog::Execute
    //   [ 6] 0x00451350  OWL::TFileSaveDialog::vf6
    //   [ 7] 0x0043fa68  OWL::TDialog::PreProcessMsg
    //   [ 8] 0x004401fc  OWL::TDialog::CloseWindow
    //   [ 9] 0x00440254  OWL::TDialog::Destroy
    //   [10] 0x0044051c  OWL::TDialog::IdleAction
    //   [11] 0x00420884  OWL::TCommonDialog::SetupWindow
    //   [12] 0x0043fafc  OWL::TDialog::GetClassName
    //   [13] 0x0043fb1c  OWL::TDialog::GetWindowClass
    //   [14] 0x00450d4c  OWL::TOpenSaveDialog::vf14
    //   [15] 0x00451034  OWL::TOpenSaveDialog::vf15
};
```

### OWL::TDvOpenSaveData

```cpp
// sizeof 52 (0x34)  rtti 0x00443994  no vptr  destructor 0x004443b0
class OWL::TDvOpenSaveData : public OWL::TOpenSaveDialog::TData {
    /* +0x000 */ // base subobject OWL::TOpenSaveDialog::TData
};
```

### OWL::TDvOpenSaveDataOwner

```cpp
// sizeof 4 (0x4)  rtti 0x0044429c  no vptr
class OWL::TDvOpenSaveDataOwner {
};
```

### OWL::TEdit

```cpp
// sizeof 178 (0xb2)  rtti 0x00404820  vptr at +0xc  destructor 0x004457b8
class OWL::TEdit : public OWL::TStatic, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TStatic
    // vtable at 0x004813e0 (22 slots)
    //   [ 0] 0x004457b8  OWL::TEdit::~TEdit
    //   [ 1] 0x0043d80c  OWL::TControl::vf1
    //   [ 2] 0x0043d868  OWL::TControl::vf2
    //   [ 3] 0x0043d888  OWL::TControl::vf3
    //   [ 4] 0x0043d8c8  OWL::TControl::vf4
    //   [ 5] 0x0043d908  OWL::TControl::vf5
    //   [ 6] 0x0043d938  OWL::TControl::vf6
    //   [ 7] 0x0043d960  OWL::TControl::vf7
    //   [ 8] 0x00445598  OWL::TEdit::Find
    //   [ 9] 0x00445e50  OWL::TEdit::vf9
    //   [10] 0x00446660  OWL::TEdit::Transfer
    //   [11] 0x00446520  OWL::TEdit::GetClassName
    //   [12] 0x004463bc  OWL::TEdit::GetSubText
    //   [13] 0x0041b1c0  OWL::TEdit::GetSelection
    //   [14] 0x0041b1e0  OWL::TEdit::vf14
    //   [15] 0x0041b204  OWL::TEdit::SetSelection
    //   [16] 0x00446204  OWL::TEdit::vf16
    //   [17] 0x0041b22c  OWL::TEdit::Paste
    //   [18] 0x0041b248  OWL::TEdit::CharFromPos
    //   [19] 0x0041b274  OWL::TEdit::PosFromChar
    //   [20] 0x0044652c  OWL::TEdit::SetupWindow
    //   [21] 0x00445e68  OWL::TEdit::CanClose
    // response table at 0x0048108c (20 entries)
    //   EV_COMMAND(24322)                            -> 0x004455e0  OWL::TEdit::Cmd24322
    //   EV_COMMAND(24323)                            -> 0x004455fc  OWL::TEdit::Cmd24323
    //   EV_COMMAND(24324)                            -> 0x00445618  OWL::TEdit::Cmd24324
    //   EV_COMMAND(24325)                            -> 0x00445628  OWL::TEdit::Cmd24325
    //   EV_COMMAND(24326)                            -> 0x00445638  OWL::TEdit::Cmd24326
    //   EV_COMMAND(24321)                            -> 0x00445648  OWL::TEdit::Cmd24321
    //   EV_COMMAND_ENABLE(24322)                     -> 0x00445ec0  OWL::TEdit::CeShared_445ec0
    //   EV_COMMAND_ENABLE(24323)                     -> 0x00445ec0  OWL::TEdit::CeShared_445ec0
    //   EV_COMMAND_ENABLE(24325)                     -> 0x00445ec0  OWL::TEdit::CeShared_445ec0
    //   EV_COMMAND_ENABLE(24324)                     -> 0x00445ef8  OWL::TEdit::CeCmd24324
    //   EV_COMMAND_ENABLE(24326)                     -> 0x00445f6c  OWL::TEdit::CeCmd24326
    //   EV_COMMAND_ENABLE(24321)                     -> 0x00445fb0  OWL::TEdit::CeCmd24321
    //   EV_NOTIFY_AT_CHILD(code -722)                -> 0x00445cd8  OWL::TEdit::NotifyAtChild_m722
    //   EV_NOTIFY_AT_CHILD(code 1280)                -> 0x004458e8  OWL::TEdit::NotifyAtChild_1280
    //   WM_CHAR                                      -> 0x00445930  OWL::TEdit::EvChar
    //   WM_KEYDOWN                                   -> 0x00445b28  OWL::TEdit::EvKeyDown
    //   WM_GETDLGCODE                                -> 0x00445904  OWL::TEdit::EvGetDlgCode
    //   WM_SETFOCUS                                  -> 0x00445cb8  OWL::TEdit::EvSetFocus
    //   WM_KILLFOCUS                                 -> 0x00445c1c  OWL::TEdit::EvKillFocus
    //   WM_CHILDINVALID                              -> 0x00445e0c  OWL::TEdit::EvChildinvalid
};
```

### OWL::TEdit::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x00446af4  vptr at +0x0
class OWL::TEdit::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x00481590 (4 slots)
    //   [ 0] 0x0041b07c  OWL::TNewStreamer::vf0
    //   [ 1] 0x004469d8  EvRegisteredMsg_4469d8_4469d8
    //   [ 2] 0x00446a08  OWL::TEdit::Streamer::vf2
    //   [ 3] 0x00446b40  OWL::TEdit::Streamer::vf3
};
```

### OWL::TEditFile

```cpp
// sizeof 250 (0xfa)  rtti 0x0041aedc  vptr at +0xc  destructor 0x00446bd4
class OWL::TEditFile : public OWL::TEditSearch, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TEditSearch
    /* +0x038 */ OWL::TOpenSaveDialog::TData m_38;
    // vtable at 0x00478390 (30 slots)
    //   [ 0] 0x00446bd4  OWL::TEditFile::~TEditFile
    //   [ 1] 0x0043d80c  OWL::TControl::vf1
    //   [ 2] 0x0043d868  OWL::TControl::vf2
    //   [ 3] 0x0043d888  OWL::TControl::vf3
    //   [ 4] 0x0043d8c8  OWL::TControl::vf4
    //   [ 5] 0x0043d908  OWL::TControl::vf5
    //   [ 6] 0x0043d938  OWL::TControl::vf6
    //   [ 7] 0x0043d960  OWL::TControl::vf7
    //   [ 8] 0x00446b4c  OWL::TEditFile::Find
    //   [ 9] 0x00445e50  OWL::TEdit::vf9
    //   [10] 0x00446660  OWL::TEdit::Transfer
    //   [11] 0x00446520  OWL::TEdit::GetClassName
    //   [12] 0x004463bc  OWL::TEdit::GetSubText
    //   [13] 0x0041b1c0  OWL::TEdit::GetSelection
    //   [14] 0x0041b1e0  OWL::TEdit::vf14
    //   [15] 0x0041b204  OWL::TEdit::SetSelection
    //   [16] 0x00446204  OWL::TEdit::vf16
    //   [17] 0x0041b22c  OWL::TEdit::Paste
    //   [18] 0x0041b248  OWL::TEdit::CharFromPos
    //   [19] 0x0041b274  OWL::TEdit::PosFromChar
    //   [20] 0x00446cf0  OWL::TEditFile::SetupWindow
    //   [21] 0x00448408  OWL::TEditFile::CanClose
    //   [22] 0x00447f1c  OWL::TEditFile::vf22
    //   [23] 0x00447238  OWL::TEditFile::vf23
    //   [24] 0x004474e8  OWL::TEditFile::vf24
    //   [25] 0x00447618  OWL::TEditFile::vf25
    //   [26] 0x00447284  OWL::TEditFile::vf26
    //   [27] 0x00447740  OWL::TEditFile::vf27
    //   [28] 0x004479c0  OWL::TEditFile::vf28
    //   [29] 0x00447e00  OWL::TEditFile::vf29
};
```

### OWL::TEditFile::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x00448828  vptr at +0x0
class OWL::TEditFile::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x00481ab8 (4 slots)
    //   [ 0] 0x0041b07c  OWL::TNewStreamer::vf0
    //   [ 1] 0x00448644  OWL::TEditFile::Streamer::vf1
    //   [ 2] 0x004486dc  OWL::TEditFile::Streamer::vf2
    //   [ 3] 0x00448878  OWL::TEditFile::Streamer::vf3
};
```

### OWL::TEditSearch

```cpp
// sizeof 206 (0xce)  rtti 0x0041b138  vptr at +0xc  destructor 0x0044890c
class OWL::TEditSearch : public OWL::TEdit, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TEdit
    /* +0x01c */ OWL::TFindReplaceDialog::TData m_1c;
    // vtable at 0x00478284 (22 slots)
    //   [ 0] 0x0044890c  OWL::TEditSearch::~TEditSearch
    //   [ 1] 0x0043d80c  OWL::TControl::vf1
    //   [ 2] 0x0043d868  OWL::TControl::vf2
    //   [ 3] 0x0043d888  OWL::TControl::vf3
    //   [ 4] 0x0043d8c8  OWL::TControl::vf4
    //   [ 5] 0x0043d908  OWL::TControl::vf5
    //   [ 6] 0x0043d938  OWL::TControl::vf6
    //   [ 7] 0x0043d960  OWL::TControl::vf7
    //   [ 8] 0x004488a4  OWL::TEditSearch::Find
    //   [ 9] 0x00445e50  OWL::TEdit::vf9
    //   [10] 0x00446660  OWL::TEdit::Transfer
    //   [11] 0x00446520  OWL::TEdit::GetClassName
    //   [12] 0x004463bc  OWL::TEdit::GetSubText
    //   [13] 0x0041b1c0  OWL::TEdit::GetSelection
    //   [14] 0x0041b1e0  OWL::TEdit::vf14
    //   [15] 0x0041b204  OWL::TEdit::SetSelection
    //   [16] 0x00446204  OWL::TEdit::vf16
    //   [17] 0x0041b22c  OWL::TEdit::Paste
    //   [18] 0x0041b248  OWL::TEdit::CharFromPos
    //   [19] 0x0041b274  OWL::TEdit::PosFromChar
    //   [20] 0x00448a7c  OWL::TEditSearch::SetupWindow
    //   [21] 0x00445e68  OWL::TEdit::CanClose
    // response table at 0x00481adc (7 entries)
    //   EV_COMMAND(24351)                            -> 0x00448d94  OWL::TEditSearch::Cmd24351
    //   EV_COMMAND_ENABLE(24351)                     -> 0x00448f48  OWL::TEditSearch::CeRange24351to24352
    //   EV_COMMAND(24352)                            -> 0x00448e6c  OWL::TEditSearch::Cmd24352
    //   EV_COMMAND_ENABLE(24352)                     -> 0x00448f48  OWL::TEditSearch::CeRange24351to24352
    //   EV_COMMAND(24353)                            -> 0x00448f68  OWL::TEditSearch::Cmd24353
    //   EV_COMMAND_ENABLE(24353)                     -> 0x00448f90  OWL::TEditSearch::CeCmd24353
    //   message id 0 in the static table (filled at run time or WM_NULL) -> 0x00448fbc  OWL::TEditSearch::EvRegisteredMsg_448fbc
};
```

### OWL::TEditSearch::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x004497a4  vptr at +0x0
class OWL::TEditSearch::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x00481dd4 (5 slots)
    //   [ 0] 0x0041b07c  OWL::TNewStreamer::vf0
    //   [ 1] 0x004495ac  OWL::TEditSearch::Streamer::vf1
    //   [ 2] 0x0044964c  OWL::TEditSearch::Streamer::vf2
    //   [ 3] 0x004497f4  OWL::TEditSearch::Streamer::vf3
    //   [ 4] 0x004498f4  vshared_4498f4
};
```

### OWL::TEnumInfoStr

```cpp
// sizeof 12 (0xc)  rtti 0x00439748  no vptr  destructor 0x00439798
class OWL::TEnumInfoStr {
};
```

### OWL::TErrorMode

```cpp
// sizeof 4 (0x4)  rtti 0x0041ac64  no vptr  destructor 0x0041ae14
class OWL::TErrorMode {
};
```

### OWL::TEventHandler

```cpp
// sizeof 4 (0x4)  rtti 0x00403a38  vptr at +0x0
class OWL::TEventHandler {
    // vtable at 0x00474f84 (1 slots)
    //   [ 0] 0x00422b38  OWL::TEventHandler::vf0
};
```

### OWL::TFile

```cpp
// sizeof 17 (0x11)  rtti 0x00420b80  vptr at +0x0  destructor 0x0044a410
class OWL::TFile {
    // vtable at 0x00479f18 (33 slots)
    //   [ 0] 0x0044a410  OWL::TFile::~TFile
    //   [ 1] 0x00420bc8  OWL::TFile::vf1
    //   [ 2] 0x0044a4dc  OWL::TFile::vf2
    //   [ 3] 0x0044a5a4  OWL::TFile::vf3
    //   [ 4] 0x00420bd4  OWL::TFile::vf4
    //   [ 5] 0x00420bf0  OWL::TFile::vf5
    //   [ 6] 0x00420c04  OWL::TFile::vf6
    //   [ 7] 0x00420c18  OWL::TFile::vf7
    //   [ 8] 0x00420c30  OWL::TFile::vf8
    //   [ 9] 0x00420c44  OWL::TFile::vf9
    //   [10] 0x00420c58  OWL::TFile::vf10
    //   [11] 0x00420c78  OWL::TFile::vf11
    //   [12] 0x00420c94  OWL::TFile::vf12
    //   [13] 0x00420cb0  OWL::TFile::vf13
    //   [14] 0x0044a638  OWL::TFile::vf14
    //   [15] 0x0044a64c  OWL::TFile::vf15
    //   [16] 0x0044a668  OWL::TFile::vf16
    //   [17] 0x00420ccc  OWL::TFile::vf17
    //   [18] 0x00420cec  OWL::TFile::vf18
    //   [19] 0x0044ad60  OWL::TFile::vf19
    //   [20] 0x0044ad7c  OWL::TFile::vf20
    //   [21] 0x0044ad9c  OWL::TFile::vf21
    //   [22] 0x0044adbc  OWL::TFile::vf22
    //   [23] 0x0044ade0  OWL::TFile::vf23
    //   [24] 0x0044ae00  OWL::TFile::vf24
    //   [25] 0x00420d0c  OWL::TFile::vf25
    //   [26] 0x0044ae24  OWL::TFile::vf26
    //   [27] 0x0044ae3c  OWL::TFile::vf27
    //   [28] 0x0044ae58  OWL::TFile::vf28
    //   [29] 0x0044ae74  OWL::TFile::vf29
    //   [30] 0x0044ae90  OWL::TFile::vf30
    //   [31] 0x0044aeac  OWL::TFile::vf31
    //   [32] 0x00420d34  OWL::TFile::vf32
};
```

### OWL::TFileHandle

```cpp
// sizeof 4 (0x4)  rtti 0x00449ec8  vptr at +0x0  destructor 0x00449f18
class OWL::TFileHandle {
    // vtable at 0x00481f58 (23 slots)
    //   [ 0] 0x00449f18  OWL::TFileHandle::~TFileHandle
    //   [ 1] 0x00470140  vshared_470140
    //   [ 2] 0x00470140  vshared_470140
    //   [ 3] 0x00470140  vshared_470140
    //   [ 4] 0x00470140  vshared_470140
    //   [ 5] 0x00470140  vshared_470140
    //   [ 6] 0x00470140  vshared_470140
    //   [ 7] 0x00470140  vshared_470140
    //   [ 8] 0x00470140  vshared_470140
    //   [ 9] 0x00470140  vshared_470140
    //   [10] 0x00470140  vshared_470140
    //   [11] 0x00470140  vshared_470140
    //   [12] 0x00470140  vshared_470140
    //   [13] 0x00470140  vshared_470140
    //   [14] 0x00470140  vshared_470140
    //   [15] 0x00470140  vshared_470140
    //   [16] 0x00470140  vshared_470140
    //   [17] 0x00470140  vshared_470140
    //   [18] 0x00470140  vshared_470140
    //   [19] 0x00470140  vshared_470140
    //   [20] 0x00470140  vshared_470140
    //   [21] 0x00470140  vshared_470140
    //   [22] 0x00470140  vshared_470140
};
```

### OWL::TFileName

```cpp
// sizeof 357 (0x165)  rtti 0x0042ee6c  no vptr  destructor 0x0042eee8
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
// sizeof 270 (0x10e)  rtti 0x00402dd4  vptr at +0xc  destructor 0x00403e58
class OWL::TFileOpenDialog : public OWL::TOpenSaveDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TOpenSaveDialog
    // vtable at 0x0048365c (16 slots)
    //   [ 0] 0x00403e58  OWL::TFileOpenDialog::~TFileOpenDialog
    //   [ 1] 0x00450ff0  OWL::TOpenSaveDialog::vf1
    //   [ 2] 0x00440188  OWL::TDialog::vf2
    //   [ 3] 0x0043fe6c  OWL::TDialog::Create
    //   [ 4] 0x004208a8  OWL::TCommonDialog::PerformCreate
    //   [ 5] 0x0043ff60  OWL::TDialog::Execute
    //   [ 6] 0x00451198  OWL::TFileOpenDialog::vf6
    //   [ 7] 0x0043fa68  OWL::TDialog::PreProcessMsg
    //   [ 8] 0x004401fc  OWL::TDialog::CloseWindow
    //   [ 9] 0x00440254  OWL::TDialog::Destroy
    //   [10] 0x0044051c  OWL::TDialog::IdleAction
    //   [11] 0x00420884  OWL::TCommonDialog::SetupWindow
    //   [12] 0x0043fafc  OWL::TDialog::GetClassName
    //   [13] 0x0043fb1c  OWL::TDialog::GetWindowClass
    //   [14] 0x00450d4c  OWL::TOpenSaveDialog::vf14
    //   [15] 0x00451034  OWL::TOpenSaveDialog::vf15
};
```

### OWL::TFileSaveDialog

```cpp
// sizeof 270 (0x10e)  rtti 0x00403318  vptr at +0xc  destructor 0x00403ae8
class OWL::TFileSaveDialog : public OWL::TOpenSaveDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TOpenSaveDialog
    // vtable at 0x00483568 (16 slots)
    //   [ 0] 0x00403ae8  OWL::TFileSaveDialog::~TFileSaveDialog
    //   [ 1] 0x00450ff0  OWL::TOpenSaveDialog::vf1
    //   [ 2] 0x00440188  OWL::TDialog::vf2
    //   [ 3] 0x0043fe6c  OWL::TDialog::Create
    //   [ 4] 0x004208a8  OWL::TCommonDialog::PerformCreate
    //   [ 5] 0x0043ff60  OWL::TDialog::Execute
    //   [ 6] 0x00451350  OWL::TFileSaveDialog::vf6
    //   [ 7] 0x0043fa68  OWL::TDialog::PreProcessMsg
    //   [ 8] 0x004401fc  OWL::TDialog::CloseWindow
    //   [ 9] 0x00440254  OWL::TDialog::Destroy
    //   [10] 0x0044051c  OWL::TDialog::IdleAction
    //   [11] 0x00420884  OWL::TCommonDialog::SetupWindow
    //   [12] 0x0043fafc  OWL::TDialog::GetClassName
    //   [13] 0x0043fb1c  OWL::TDialog::GetWindowClass
    //   [14] 0x00450d4c  OWL::TOpenSaveDialog::vf14
    //   [15] 0x00451034  OWL::TOpenSaveDialog::vf15
};
```

### OWL::TFindDialog

```cpp
// sizeof 222 (0xde)  rtti 0x0044906c  vptr at +0xc  destructor 0x00449198
class OWL::TFindDialog : public OWL::TFindReplaceDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TFindReplaceDialog
    // vtable at 0x00482644 (15 slots)
    //   [ 0] 0x00449198  OWL::TFindDialog::~TFindDialog
    //   [ 1] 0x0044c1f0  OWL::TFindReplaceDialog::vf1
    //   [ 2] 0x00440188  OWL::TDialog::vf2
    //   [ 3] 0x0043fe6c  OWL::TDialog::Create
    //   [ 4] 0x0044c368  OWL::TFindDialog::vf4
    //   [ 5] 0x0043ff60  OWL::TDialog::Execute
    //   [ 6] 0x004208b0  OWL::TCommonDialog::DoExecute
    //   [ 7] 0x0043fa68  OWL::TDialog::PreProcessMsg
    //   [ 8] 0x004401fc  OWL::TDialog::CloseWindow
    //   [ 9] 0x00440254  OWL::TDialog::Destroy
    //   [10] 0x0044051c  OWL::TDialog::IdleAction
    //   [11] 0x00420884  OWL::TCommonDialog::SetupWindow
    //   [12] 0x0043fafc  OWL::TDialog::GetClassName
    //   [13] 0x0043fb1c  OWL::TDialog::GetWindowClass
    //   [14] 0x0044bfc4  OWL::TFindReplaceDialog::Find
};
```

### OWL::TFindReplaceDialog

```cpp
// sizeof 222 (0xde)  rtti 0x00449114  vptr at +0xc  destructor 0x004492e8
class OWL::TFindReplaceDialog : public OWL::TCommonDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TCommonDialog
    // vtable at 0x00482734 (15 slots)
    //   [ 0] 0x004492e8  OWL::TFindReplaceDialog::~TFindReplaceDialog
    //   [ 1] 0x0044c1f0  OWL::TFindReplaceDialog::vf1
    //   [ 2] 0x00440188  OWL::TDialog::vf2
    //   [ 3] 0x0043fe6c  OWL::TDialog::Create
    //   [ 4] 0x0044c1e8  OWL::TFindReplaceDialog::vf4
    //   [ 5] 0x0043ff60  OWL::TDialog::Execute
    //   [ 6] 0x004208b0  OWL::TCommonDialog::DoExecute
    //   [ 7] 0x0043fa68  OWL::TDialog::PreProcessMsg
    //   [ 8] 0x004401fc  OWL::TDialog::CloseWindow
    //   [ 9] 0x00440254  OWL::TDialog::Destroy
    //   [10] 0x0044051c  OWL::TDialog::IdleAction
    //   [11] 0x00420884  OWL::TCommonDialog::SetupWindow
    //   [12] 0x0043fafc  OWL::TDialog::GetClassName
    //   [13] 0x0043fb1c  OWL::TDialog::GetWindowClass
    //   [14] 0x0044bfc4  OWL::TFindReplaceDialog::Find
    // response table at 0x004824ac (1 entries)
    //   WM_NCDESTROY                                 -> 0x0044c20c  OWL::TFindReplaceDialog::EvNCDestroy
};
```

### OWL::TFindReplaceDialog::TData

```cpp
// sizeof 20 (0x14)  rtti 0x0041b4d8  no vptr  destructor 0x0044bf94
class OWL::TFindReplaceDialog::TData {
};
```

### OWL::TFloatingFrame

```cpp
// sizeof 282 (0x11a)  rtti 0x00441028  vptr at +0xc  destructor 0x004410ec
class OWL::TFloatingFrame : public OWL::TFrameWindow, public OWL::TTinyCaption, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TFrameWindow
    /* +0x04a */ // base subobject OWL::TTinyCaption
};
```

### OWL::TFloatingSlip

```cpp
// sizeof 294 (0x126)  rtti 0x00440e5c  vptr at +0xc  destructor 0x00440f30
class OWL::TFloatingSlip : public OWL::TFloatingFrame, public OWL::TDockingSlip, public OWL::TDockable, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TFloatingFrame
    /* +0x084 */ // base subobject OWL::TDockingSlip
    /* +0x08c */ // base subobject OWL::TDockable
};
```

### OWL::TFont

```cpp
// sizeof 5 (0x5)  rtti 0x0041d7ec  no vptr  destructor 0x0041d89c
class OWL::TFont : public OWL::TGdiObject {
    /* +0x000 */ // base subobject OWL::TGdiObject
};
```

### OWL::TFrameWindow

```cpp
// sizeof 224 (0xe0)  rtti 0x00403a74  vptr at +0xc  destructor 0x0044cd7c
class OWL::TFrameWindow : public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    // vtable at 0x00482aa4 (19 slots)
    //   [ 0] 0x0044cd7c  OWL::TFrameWindow::~TFrameWindow
    //   [ 1] 0x0044d22c  OWL::TFrameWindow::vf1
    //   [ 2] 0x0044d1e4  OWL::TFrameWindow::vf2
    //   [ 3] 0x0044e474  OWL::TFrameWindow::vf3
    //   [ 4] 0x00430c44  OWL::TFrameWindow::vf4
    //   [ 5] 0x00430c4c  OWL::TFrameWindow::vf5
    //   [ 6] 0x0044d450  OWL::TFrameWindow::vf6
    //   [ 7] 0x0044d45c  OWL::TFrameWindow::vf7
    //   [ 8] 0x0044d530  OWL::TFrameWindow::RemoveChild
    //   [ 9] 0x0044d048  OWL::TFrameWindow::vf9
    //   [10] 0x0044d15c  OWL::TFrameWindow::PreProcessMsg
    //   [11] 0x0044cfcc  Child4509768_Notify4453474_44cfcc
    //   [12] 0x0044d90c  OWL::TFrameWindow::HoldFocusHWnd
    //   [13] 0x0044d568  OWL::TFrameWindow::SetDocTitle
    //   [14] 0x0044d0cc  OWL::TFrameWindow::EvCommand
    //   [15] 0x0044d13c  OWL::TFrameWindow::EvCommandEnable
    //   [16] 0x0044e048  OWL::TFrameWindow::SetupWindow
    //   [17] 0x0044e1f0  OWL::TFrameWindow::CleanupWindow
    //   [18] 0x0044ca68  OWL::TFrameWindow::Find
    // response table at 0x00482838 (9 entries)
    //   WM_PAINT                                     -> 0x0044d734  OWL::TFrameWindow::EvPaint
    //   WM_ERASEBKGND                                -> 0x0044d824  OWL::TFrameWindow::EvEraseBkgnd
    //   WM_QUERYDRAGICON                             -> 0x0044d890  OWL::TFrameWindow::EvQuerydragicon
    //   WM_INITMENUPOPUP                             -> 0x0044cf48  OWL::TFrameWindow::EvInitMenuPopup
    //   WM_SETFOCUS                                  -> 0x0044d968  OWL::TFrameWindow::EvSetFocus
    //   WM_SIZE                                      -> 0x0044e254  OWL::TFrameWindow::EvSize
    //   WM_PARENTNOTIFY                              -> 0x0044d9d0  OWL::TFrameWindow::EvParentNotify
    //   WM_QUERYNEWPALETTE                           -> 0x0044da74  OWL::TFrameWindow::EvQuerynewpalette
    //   WM_PALETTECHANGED                            -> 0x0044dab8  OWL::TFrameWindow::EvPalettechanged
};
```

### OWL::TGadget

```cpp
// sizeof 68 (0x44)  rtti 0x0041d680  vptr at +0x0  destructor 0x0042420c
class OWL::TGadget {
    // vtable at 0x0047ae34 (21 slots)
    //   [ 0] 0x0042420c  OWL::TGadget::~TGadget
    //   [ 1] 0x0042426c  OWL::TGadget::vf1
    //   [ 2] 0x00424938  OWL::TGadget::vf2
    //   [ 3] 0x004242a8  OWL::TGadget::vf3
    //   [ 4] 0x00424244  OWL::TGadget::vf4
    //   [ 5] 0x0042425c  OWL::TGadget::vf5
    //   [ 6] 0x00424264  OWL::TGadget::vf6
    //   [ 7] 0x004243e0  OWL::TGadget::vf7
    //   [ 8] 0x0042449c  OWL::TGadget::vf8
    //   [ 9] 0x00424570  OWL::TGadget::vf9
    //   [10] 0x004244a4  OWL::TGadget::vf10
    //   [11] 0x00424390  OWL::TGadget::vf11
    //   [12] 0x00424924  OWL::TGadget::vf12
    //   [13] 0x004247f0  OWL::TGadget::vf13
    //   [14] 0x00424ad0  OWL::TGadget::vf14
    //   [15] 0x00424af0  OWL::TGadget::vf15
    //   [16] 0x00424af8  OWL::TGadget::vf16
    //   [17] 0x00424bc4  OWL::TGadget::vf17
    //   [18] 0x00424bfc  OWL::TGadget::vf18
    //   [19] 0x00424be0  OWL::TGadget::vf19
    //   [20] 0x00424c04  OWL::TGadget::vf20
};
```

### OWL::TGadgetList

```cpp
// sizeof 12 (0xc)  rtti 0x004214e4  vptr at +0x0  destructor 0x00424fa0
class OWL::TGadgetList {
    // vtable at 0x0047aef0 (7 slots)
    //   [ 0] 0x00424fa0  OWL::TGadgetList::~TGadgetList
    //   [ 1] 0x00425088  OWL::TGadgetList::vf1
    //   [ 2] 0x004250dc  OWL::TGadgetList::vf2
    //   [ 3] 0x0042516c  OWL::TGadgetList::vf3
    //   [ 4] 0x004251cc  OWL::TGadgetList::vf4
    //   [ 5] 0x004251d4  OWL::TGadgetList::vf5
    //   [ 6] 0x00427254  OWL::TGadgetList::vf6
};
```

### OWL::TGadgetWindow

```cpp
// sizeof 227 (0xe3)  rtti 0x00421464  vptr at +0x18  destructor 0x00425710
class OWL::TGadgetWindow : public OWL::TGadgetList, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x004 */ // base subobject OWL::TGadgetList
    // vtable at 0x0047b35c (27 slots)
    //   [ 0] 0x00425710  OWL::TGadgetWindow::~TGadgetWindow
    //   [ 1] 0x00425c40  OWL::TGadgetWindow::Create
    //   [ 2] 0x00425c5c  OWL::TGadgetWindow::vf2
    //   [ 3] 0x00421318  OWL::TGadgetWindow::GetTooltip
    //   [ 4] 0x00427278  OWL::TGadgetWindow::EnableTooltip
    //   [ 5] 0x004268cc  OWL::TGadgetWindow::vf5
    //   [ 6] 0x004268f4  OWL::TGadgetWindow::vf6
    //   [ 7] 0x0042695c  OWL::TGadgetWindow::vf7
    //   [ 8] 0x0042691c  OWL::TGadgetWindow::vf8
    //   [ 9] 0x00426980  OWL::TGadgetWindow::vf9
    //   [10] 0x00426a00  OWL::TGadgetWindow::vf10
    //   [11] 0x00426a58  OWL::TGadgetWindow::vf11
    //   [12] 0x00425878  OWL::TGadgetWindow::IdleAction
    //   [13] 0x00425a50  OWL::TGadgetWindow::vf13
    //   [14] 0x00425a88  OWL::TGadgetWindow::vf14
    //   [15] 0x00426d60  OWL::TGadgetWindow::vf15
    //   [16] 0x00425ce0  OWL::TGadgetWindow::vf16
    //   [17] 0x00426880  OWL::TGadgetWindow::vf17
    //   [18] 0x00425de0  OWL::TGadgetWindow::vf18
    //   [19] 0x00426ef4  OWL::TGadgetWindow::Paint
    //   [20] 0x00425d98  OWL::TGadgetWindow::vf20
    //   [21] 0x00426af0  OWL::TGadgetWindow::SetupWindow
    //   [22] 0x00426bb4  OWL::TGadgetWindow::CleanupWindow
    //   [23] 0x00426c20  OWL::TGadgetWindow::PreProcessMsg
    //   [24] 0x00427428  OWL::TGadgetWindow::EvCommand
    //   [25] 0x004274f4  OWL::TGadgetWindow::EvCommandEnable
    //   [26] 0x004251dc  OWL::TGadgetWindow::Find
    // response table at 0x0047af2c (9 entries)
    //   WM_LBUTTONDOWN                               -> 0x00426f24  OWL::TGadgetWindow::EvLButtonDown
    //   WM_LBUTTONUP                                 -> 0x00426fa4  OWL::TGadgetWindow::EvLButtonUp
    //   WM_LBUTTONDBLCLK                             -> 0x00427014  OWL::TGadgetWindow::EvLButtonDblClk
    //   WM_RBUTTONDOWN                               -> 0x00427040  OWL::TGadgetWindow::EvRButtonDown
    //   WM_RBUTTONUP                                 -> 0x004270b8  OWL::TGadgetWindow::EvRButtonUp
    //   WM_MOUSEMOVE                                 -> 0x00427128  OWL::TGadgetWindow::EvMouseMove
    //   WM_WINDOWPOSCHANGING                         -> 0x00426cdc  OWL::TGadgetWindow::EvWindowPosChanging
    //   WM_SYSCOLORCHANGE                            -> 0x00425858  OWL::TGadgetWindow::EvSysColorChange
    //   message 0x7ef2                               -> 0x00426ca8  OWL::TGadgetWindow::EvMsg_7ef2
};
```

### OWL::TGadgetWindow::TLayoutInfo

```cpp
// sizeof 12 (0xc)  rtti 0x00425b8c  no vptr  destructor 0x00427604
class OWL::TGadgetWindow::TLayoutInfo {
    /* +0x008 */ OWL::TAPointer<OWL::TRect> m_8;
};
```

### OWL::TGadgetWindowFont

```cpp
// sizeof 5 (0x5)  rtti 0x004276ac  no vptr  destructor 0x0042784c
class OWL::TGadgetWindowFont : public OWL::TFont {
    /* +0x000 */ // base subobject OWL::TFont
};
```

### OWL::TGdiBase

```cpp
// sizeof 5 (0x5)  rtti 0x004175f4  no vptr
class OWL::TGdiBase {
};
```

### OWL::TGdiObject

```cpp
// sizeof 5 (0x5)  rtti 0x0041d3b8  no vptr  destructor 0x004284a8
class OWL::TGdiObject : public OWL::TGdiBase {
    /* +0x000 */ // base subobject OWL::TGdiBase
};
```

### OWL::THatch8x8Brush

```cpp
// sizeof 5 (0x5)  rtti 0x00432594  no vptr  destructor 0x004326bc
class OWL::THatch8x8Brush : public OWL::TBrush {
    /* +0x000 */ // base subobject OWL::TBrush
};
```

### OWL::TLayoutWindow

```cpp
// sizeof 199 (0xc7)  rtti 0x0041d778  vptr at +0xc  destructor 0x00428e84
class OWL::TLayoutWindow : public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    // vtable at 0x0047ba24 (4 slots)
    //   [ 0] 0x00428e84  OWL::TLayoutWindow::~TLayoutWindow
    //   [ 1] 0x00428fb4  OWL::TLayoutWindow::vf1
    //   [ 2] 0x00429498  OWL::TLayoutWindow::RemoveChild
    //   [ 3] 0x00428de4  OWL::TLayoutWindow::Find
    // response table at 0x0047b830 (1 entries)
    //   WM_SIZE                                      -> 0x00429440  OWL::TLayoutWindow::EvSize
};
```

### OWL::TLayoutWindow::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x0042a388  vptr at +0x0
class OWL::TLayoutWindow::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0047ba08 (4 slots)
    //   [ 0] 0x0041b07c  OWL::TNewStreamer::vf0
    //   [ 1] 0x00429f50  OWL::TLayoutWindow::Streamer::vf1
    //   [ 2] 0x00429f5c  OWL::TLayoutWindow::Streamer::vf2
    //   [ 3] 0x0042a3dc  OWL::TLayoutWindow::Streamer::vf3
};
```

### OWL::TMBlockList<TStandardAllocator>

```cpp
// sizeof 4 (0x4)  rtti 0x00420b1c  no vptr  destructor 0x00420d68
class OWL::TMBlockList<TStandardAllocator> {
};
```

### OWL::TMemDCCache

```cpp
// sizeof 80 (0x50)  rtti 0x0042b730  no vptr  destructor 0x0042b7e8
class OWL::TMemDCCache {
};
```

### OWL::TMemoryDC

```cpp
// sizeof 37 (0x25)  rtti 0x0041ce54  vptr at +0x5  destructor 0x0042ba88
class OWL::TMemoryDC : public OWL::TCreatedDC {
    /* +0x000 */ // base subobject OWL::TCreatedDC
    // vtable at 0x0047c090 (25 slots)
    //   [ 0] 0x0042ba88  OWL::TMemoryDC::~TMemoryDC
    //   [ 1] 0x0042205c  OWL::TDC::vf1
    //   [ 2] 0x0042206c  OWL::TDC::vf2
    //   [ 3] 0x00422088  OWL::TDC::vf3
    //   [ 4] 0x004220a4  OWL::TDC::vf4
    //   [ 5] 0x004224dc  OWL::TMemoryDC::vf5
    //   [ 6] 0x00421dc0  OWL::TDC::vf6
    //   [ 7] 0x00421e44  OWL::TDC::vf7
    //   [ 8] 0x004220c0  OWL::TDC::vf8
    //   [ 9] 0x0042210c  OWL::TDC::vf9
    //   [10] 0x00422158  OWL::TDC::vf10
    //   [11] 0x0042218c  OWL::TDC::vf11
    //   [12] 0x004221d8  OWL::TDC::vf12
    //   [13] 0x00422224  OWL::TDC::vf13
    //   [14] 0x00422270  OWL::TDC::vf14
    //   [15] 0x004222c4  OWL::TDC::vf15
    //   [16] 0x00422310  OWL::TDC::vf16
    //   [17] 0x00422364  OWL::TDC::vf17
    //   [18] 0x0042239c  OWL::TDC::vf18
    //   [19] 0x004223e0  OWL::TDC::vf19
    //   [20] 0x00422448  OWL::TDC::vf20
    //   [21] 0x00422468  OWL::TDC::vf21
    //   [22] 0x00422494  OWL::TDC::vf22
    //   [23] 0x00421ce0  OWL::TDC::vf23
    //   [24] 0x0042bb78  OWL::TMemoryDC::vf24
};
```

### OWL::TMenu

```cpp
// sizeof 9 (0x9)  rtti 0x0041b874  vptr at +0x0  destructor 0x0042bcb0
class OWL::TMenu {
    // vtable at 0x0047c368 (5 slots)
    //   [ 0] 0x0042bcb0  OWL::TMenu::~TMenu
    //   [ 1] 0x0042c25c  OWL::TMenu::vf1
    //   [ 2] 0x0042bdb0  OWL::TMenu::vf2
    //   [ 3] 0x0042bdb8  OWL::TMenu::vf3
    //   [ 4] 0x0042c290  OWL::TMenu::vf4
};
```

### OWL::TMenuDescr

```cpp
// sizeof 41 (0x29)  rtti 0x00449850  vptr at +0x0  destructor 0x0044e5d4
class OWL::TMenuDescr : public OWL::TMenu {
    /* +0x000 */ // base subobject OWL::TMenu
    // vtable at 0x00482c30 (4 slots)
    //   [ 0] 0x0044e5d4  OWL::TMenuDescr::~TMenuDescr
    //   [ 1] 0x0044e6ac  OWL::TMenuDescr::vf1
    //   [ 2] 0x0042bdb0  OWL::TMenu::vf2
    //   [ 3] 0x0042bdb8  OWL::TMenu::vf3
};
```

### OWL::TMenuItemEnabler

```cpp
// sizeof 24 (0x18)  rtti 0x0042f6e8  vptr at +0x0
class OWL::TMenuItemEnabler : public OWL::TCommandEnabler {
    /* +0x000 */ // base subobject OWL::TCommandEnabler
    // vtable at 0x0047e978 (3 slots)
    //   [ 0] 0x0044cab0  OWL::TMenuItemEnabler::vf0
    //   [ 1] 0x0044cae8  OWL::TMenuItemEnabler::vf1
    //   [ 2] 0x0044cb08  OWL::TMenuItemEnabler::vf2
};
```

### OWL::TMessageBar

```cpp
// sizeof 232 (0xe8)  rtti 0x0042c594  vptr at +0x18  destructor 0x0042c2b0
class OWL::TMessageBar : public OWL::TGadgetWindow, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TGadgetWindow
    // vtable at 0x0047c3a8 (28 slots)
    //   [ 0] 0x0042c2b0  OWL::TMessageBar::~TMessageBar
    //   [ 1] 0x00425c40  OWL::TGadgetWindow::Create
    //   [ 2] 0x00425c5c  OWL::TGadgetWindow::vf2
    //   [ 3] 0x00421318  OWL::TGadgetWindow::GetTooltip
    //   [ 4] 0x00427278  OWL::TGadgetWindow::EnableTooltip
    //   [ 5] 0x004268cc  OWL::TGadgetWindow::vf5
    //   [ 6] 0x004268f4  OWL::TGadgetWindow::vf6
    //   [ 7] 0x0042695c  OWL::TGadgetWindow::vf7
    //   [ 8] 0x0042691c  OWL::TGadgetWindow::vf8
    //   [ 9] 0x00426980  OWL::TGadgetWindow::vf9
    //   [10] 0x00426a00  OWL::TGadgetWindow::vf10
    //   [11] 0x00426a58  OWL::TGadgetWindow::vf11
    //   [12] 0x00425878  OWL::TGadgetWindow::IdleAction
    //   [13] 0x00425a50  OWL::TGadgetWindow::vf13
    //   [14] 0x0042c528  OWL::TMessageBar::vf14
    //   [15] 0x0042c3c0  OWL::TMessageBar::vf15
    //   [16] 0x0042c4f8  OWL::TMessageBar::vf16
    //   [17] 0x00426880  OWL::TGadgetWindow::vf17
    //   [18] 0x00425de0  OWL::TGadgetWindow::vf18
    //   [19] 0x00426ef4  OWL::TGadgetWindow::Paint
    //   [20] 0x00425d98  OWL::TGadgetWindow::vf20
    //   [21] 0x00426af0  OWL::TGadgetWindow::SetupWindow
    //   [22] 0x00426bb4  OWL::TGadgetWindow::CleanupWindow
    //   [23] 0x00426c20  OWL::TGadgetWindow::PreProcessMsg
    //   [24] 0x00427428  OWL::TGadgetWindow::EvCommand
    //   [25] 0x004274f4  OWL::TGadgetWindow::EvCommandEnable
    //   [26] 0x004251dc  OWL::TGadgetWindow::Find
    //   [27] 0x0042c54c  OWL::TMessageBar::vf27
};
```

### OWL::TMMemBlocks<TStandardAllocator>

```cpp
// sizeof 25 (0x19)  rtti 0x00420d84  no vptr  destructor 0x00420e58
class OWL::TMMemBlocks<TStandardAllocator> {
    /* +0x004 */ OWL::TMMemStack<TStandardAllocator> m_4;
};
```

### OWL::TMMemStack<TStandardAllocator>

```cpp
// sizeof 17 (0x11)  rtti 0x00420df0  no vptr  destructor 0x00420f18
class OWL::TMMemStack<TStandardAllocator> {
    /* +0x000 */ OWL::TMBaseMemBlocks<TStandardAllocator> m_0;
};
```

### OWL::TModule

```cpp
// sizeof 13 (0xd)  rtti 0x00404d74  vptr at +0x0  destructor 0x0044ee8c
class OWL::TModule : public OWL::TStreamableBase {
    /* +0x000 */ // base subobject OWL::TStreamableBase
    // vtable at 0x004833bc (2 slots)
    //   [ 0] 0x0044ee8c  OWL::TModule::~TModule
    //   [ 1] 0x0044f028  OWL::TModule::vf1
};
```

### OWL::TModule::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x00450b24  vptr at +0x0
class OWL::TModule::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x00483488 (4 slots)
    //   [ 0] 0x0041b07c  OWL::TNewStreamer::vf0
    //   [ 1] 0x004509f0  OWL::TModule::Streamer::vf1
    //   [ 2] 0x00450a38  OWL::TModule::Streamer::vf2
    //   [ 3] 0x00450b70  OWL::TModule::Streamer::vf3
};
```

### OWL::TMsgThread

```cpp
// sizeof 10 (0xa)  rtti 0x00404dcc  vptr at +0x0
class OWL::TMsgThread {
    // vtable at 0x0047c570 (6 slots)
    //   [ 0] 0x0042c898  OWL::TMsgThread::vf0
    //   [ 1] 0x0042c93c  OWL::TMsgThread::vf1
    //   [ 2] 0x0042c944  OWL::TMsgThread::vf2
    //   [ 3] 0x0042c9e0  OWL::TMsgThread::vf3
    //   [ 4] 0x0042ca8c  OWL::TMsgThread::vf4
    //   [ 5] 0x0042ca94  OWL::TMsgThread::vf5
};
```

### OWL::TNewStreamer

```cpp
// sizeof 8 (0x8)  rtti 0x0041b0f0  vptr at +0x0
class OWL::TNewStreamer : public OWL::TStreamer {
    /* +0x000 */ // base subobject OWL::TStreamer
    // vtable at 0x00478268 (4 slots)
    //   [ 0] 0x0041b07c  OWL::TNewStreamer::vf0
    //   [ 1] 0x00470140  vshared_470140
    //   [ 2] 0x00470140  vshared_470140
    //   [ 3] 0x00470140  vshared_470140
};
```

### OWL::TObjInfo

```cpp
// sizeof 6 (0x6)  rtti 0x00427fa4  no vptr  destructor 0x004284d8
class OWL::TObjInfo {
};
```

### OWL::TOpenSaveDialog

```cpp
// sizeof 270 (0x10e)  rtti 0x00403b98  vptr at +0xc  destructor 0x00404c4c
class OWL::TOpenSaveDialog : public OWL::TCommonDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TCommonDialog
    // vtable at 0x00483750 (16 slots)
    //   [ 0] 0x00404c4c  OWL::TOpenSaveDialog::~TOpenSaveDialog
    //   [ 1] 0x00450ff0  OWL::TOpenSaveDialog::vf1
    //   [ 2] 0x00440188  OWL::TDialog::vf2
    //   [ 3] 0x0043fe6c  OWL::TDialog::Create
    //   [ 4] 0x004208a8  OWL::TCommonDialog::PerformCreate
    //   [ 5] 0x0043ff60  OWL::TDialog::Execute
    //   [ 6] 0x00470140  vshared_470140
    //   [ 7] 0x0043fa68  OWL::TDialog::PreProcessMsg
    //   [ 8] 0x004401fc  OWL::TDialog::CloseWindow
    //   [ 9] 0x00440254  OWL::TDialog::Destroy
    //   [10] 0x0044051c  OWL::TDialog::IdleAction
    //   [11] 0x00420884  OWL::TCommonDialog::SetupWindow
    //   [12] 0x0043fafc  OWL::TDialog::GetClassName
    //   [13] 0x0043fb1c  OWL::TDialog::GetWindowClass
    //   [14] 0x00450d4c  OWL::TOpenSaveDialog::vf14
    //   [15] 0x00451034  OWL::TOpenSaveDialog::vf15
};
```

### OWL::TOpenSaveDialog::TData

```cpp
// sizeof 40 (0x28)  rtti 0x00402d7c  no vptr  destructor 0x00450c68
class OWL::TOpenSaveDialog::TData {
};
```

### OWL::TPaintDC

```cpp
// sizeof 101 (0x65)  rtti 0x0042ec94  vptr at +0x5  destructor 0x0042ec14
class OWL::TPaintDC : public OWL::TDC {
    /* +0x000 */ // base subobject OWL::TDC
    // vtable at 0x0047ca94 (25 slots)
    //   [ 0] 0x0042ec14  OWL::TPaintDC::~TPaintDC
    //   [ 1] 0x0042205c  OWL::TDC::vf1
    //   [ 2] 0x0042206c  OWL::TDC::vf2
    //   [ 3] 0x00422088  OWL::TDC::vf3
    //   [ 4] 0x004220a4  OWL::TDC::vf4
    //   [ 5] 0x00421d30  OWL::TDC::vf5
    //   [ 6] 0x00421dc0  OWL::TDC::vf6
    //   [ 7] 0x00421e44  OWL::TDC::vf7
    //   [ 8] 0x004220c0  OWL::TDC::vf8
    //   [ 9] 0x0042210c  OWL::TDC::vf9
    //   [10] 0x00422158  OWL::TDC::vf10
    //   [11] 0x0042218c  OWL::TDC::vf11
    //   [12] 0x004221d8  OWL::TDC::vf12
    //   [13] 0x00422224  OWL::TDC::vf13
    //   [14] 0x00422270  OWL::TDC::vf14
    //   [15] 0x004222c4  OWL::TDC::vf15
    //   [16] 0x00422310  OWL::TDC::vf16
    //   [17] 0x00422364  OWL::TDC::vf17
    //   [18] 0x0042239c  OWL::TDC::vf18
    //   [19] 0x004223e0  OWL::TDC::vf19
    //   [20] 0x00422448  OWL::TDC::vf20
    //   [21] 0x00422468  OWL::TDC::vf21
    //   [22] 0x00422494  OWL::TDC::vf22
    //   [23] 0x00421ce0  OWL::TDC::vf23
    //   [24] 0x0042ed40  OWL::TPaintDC::vf24
};
```

### OWL::TPalette

```cpp
// sizeof 5 (0x5)  rtti 0x0041cf90  no vptr  destructor 0x0041d374
class OWL::TPalette : public OWL::TGdiObject {
    /* +0x000 */ // base subobject OWL::TGdiObject
};
```

### OWL::TPickListPopup

```cpp
// sizeof 163 (0xa3)  rtti 0x0042f530  vptr at +0x8  destructor 0x0042f5ac
class OWL::TPickListPopup : public OWL::TWindow, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase {
    /* +0x000 */ // base subobject OWL::TWindow
    /* +0x086 */ OWL::TPopupMenu m_86;
    // vtable at 0x0047cbbc (34 slots)
    //   [ 0] 0x0042f5ac  OWL::TPickListPopup::~TPickListPopup
    //   [ 1] 0x00404558  OWL::TWindow::GetTooltip
    //   [ 2] 0x00438d94  OWL::TWindow::EnableTooltip
    //   [ 3] 0x00437dd4  OWL::TWindow::Register
    //   [ 4] 0x00437aac  OWL::TWindow::Create
    //   [ 5] 0x00437a5c  OWL::TWindow::PerformCreate
    //   [ 6] 0x00437894  OWL::TWindow::Destroy
    //   [ 7] 0x0042f49c  OWL::TPickListPopup::Execute
    //   [ 8] 0x00437c2c  OWL::TWindow::DoExecute
    //   [ 9] 0x00437ee4  OWL::TWindow::CloseWindow
    //   [10] 0x00436168  OWL::TWindow::PreProcessMsg
    //   [11] 0x00436208  OWL::TWindow::IdleAction
    //   [12] 0x00436e78  OWL::TWindow::HoldFocusHWnd
    //   [13] 0x004362f8  OWL::TWindow::SetParent
    //   [14] 0x00436384  OWL::TWindow::SetDocTitle
    //   [15] 0x00437ec0  OWL::TWindow::CanClose
    //   [16] 0x00436aec  OWL::TWindow::WindowProc
    //   [17] 0x00436984  OWL::TWindow::DefWindowProc
    //   [18] 0x0042f51c  OWL::TPickListPopup::EvCommand
    //   [19] 0x004366cc  OWL::TWindow::EvNotify
    //   [20] 0x004367c0  OWL::TWindow::EvCommandEnable
    //   [21] 0x004377a4  OWL::TWindow::Paint
    //   [22] 0x00437d08  OWL::TWindow::Transfer
    //   [23] 0x00437d54  OWL::TWindow::TransferData
    //   [24] 0x00404564  OWL::TWindow::EnableWindow
    //   [25] 0x004387b4  OWL::TWindow::ShowWindow
    //   [26] 0x00404588  OWL::TWindow::Invalidate
    //   [27] 0x004045a4  OWL::TWindow::InvalidateRect
    //   [28] 0x00437914  OWL::TWindow::GetWindowClass
    //   [29] 0x004379bc  OWL::TWindow::GetClassName
    //   [30] 0x00437c68  OWL::TWindow::SetupWindow
    //   [31] 0x00437d00  OWL::TWindow::CleanupWindow
    //   [32] 0x004362a4  OWL::TWindow::RemoveChild
    //   [33] 0x00435b8c  OWL::TWindow::Find
};
```

### OWL::TPointer<OWL::TBitmap>

```cpp
// sizeof 4 (0x4)  rtti 0x004325f0  no vptr  destructor 0x0043270c
class OWL::TPointer<OWL::TBitmap> : public OWL::TPointerBase<OWL::TBitmap> {
    /* +0x000 */ // base subobject OWL::TPointerBase<OWL::TBitmap>
};
```

### OWL::TPointer<OWL::TFont>

```cpp
// sizeof 4 (0x4)  rtti 0x00433b4c  no vptr  destructor 0x004355cc
class OWL::TPointer<OWL::TFont> : public OWL::TPointerBase<OWL::TFont> {
    /* +0x000 */ // base subobject OWL::TPointerBase<OWL::TFont>
};
```

### OWL::TPointer<OWL::TStreamer>

```cpp
// sizeof 4 (0x4)  rtti 0x0042dd18  no vptr  destructor 0x0042e364
class OWL::TPointer<OWL::TStreamer> : public OWL::TPointerBase<OWL::TStreamer> {
    /* +0x000 */ // base subobject OWL::TPointerBase<OWL::TStreamer>
};
```

### OWL::TPointerBase<char>

```cpp
// sizeof 4 (0x4)  rtti 0x0041c178  no vptr
class OWL::TPointerBase<char> {
};
```

### OWL::TPointerBase<OWL::TBitmap>

```cpp
// sizeof 4 (0x4)  rtti 0x00432674  no vptr
class OWL::TPointerBase<OWL::TBitmap> {
};
```

### OWL::TPointerBase<OWL::TDocTemplate *>

```cpp
// sizeof 4 (0x4)  rtti 0x004443f4  no vptr
class OWL::TPointerBase<OWL::TDocTemplate *> {
};
```

### OWL::TPointerBase<OWL::TFont>

```cpp
// sizeof 4 (0x4)  rtti 0x00435410  no vptr
class OWL::TPointerBase<OWL::TFont> {
};
```

### OWL::TPointerBase<OWL::TRect>

```cpp
// sizeof 4 (0x4)  rtti 0x00427894  no vptr
class OWL::TPointerBase<OWL::TRect> {
};
```

### OWL::TPointerBase<OWL::TStreamer>

```cpp
// sizeof 4 (0x4)  rtti 0x0042e20c  no vptr
class OWL::TPointerBase<OWL::TStreamer> {
};
```

### OWL::TPopupMenu

```cpp
// sizeof 9 (0x9)  rtti 0x0041b8bc  vptr at +0x0  destructor 0x0041b914
class OWL::TPopupMenu : public OWL::TMenu {
    /* +0x000 */ // base subobject OWL::TMenu
    // vtable at 0x0047c34c (4 slots)
    //   [ 0] 0x0041b914  OWL::TPopupMenu::~TPopupMenu
    //   [ 1] 0x0042c25c  OWL::TMenu::vf1
    //   [ 2] 0x0042bdb0  OWL::TMenu::vf2
    //   [ 3] 0x0042bdb8  OWL::TMenu::vf3
};
```

### OWL::TPWrittenObjects::TPWObj

```cpp
// sizeof 8 (0x8)  rtti 0x0042e258  no vptr
class OWL::TPWrittenObjects::TPWObj {
};
```

### OWL::TRegion

```cpp
// sizeof 5 (0x5)  rtti 0x00426e9c  no vptr  destructor 0x0042fa08
class OWL::TRegion : public OWL::TGdiBase {
    /* +0x000 */ // base subobject OWL::TGdiBase
};
```

### OWL::TRegKey

```cpp
// sizeof 17 (0x11)  rtti 0x0041bb84  no vptr  destructor 0x0041bd68
class OWL::TRegKey {
};
```

### OWL::TRegLink

```cpp
// sizeof 12 (0xc)  rtti 0x0042fa44  vptr at +0x0  destructor 0x0042fa90
class OWL::TRegLink {
    // vtable at 0x0047cd00 (1 slots)
    //   [ 0] 0x0042fa90  OWL::TRegLink::~TRegLink
};
```

### OWL::TRegValue

```cpp
// sizeof 24 (0x18)  rtti 0x0041c1b8  no vptr  destructor 0x0041bee4
class OWL::TRegValue {
};
```

### OWL::TReplaceDialog

```cpp
// sizeof 222 (0xde)  rtti 0x00448fec  vptr at +0xc  destructor 0x00449240
class OWL::TReplaceDialog : public OWL::TFindReplaceDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TFindReplaceDialog
    // vtable at 0x00482554 (15 slots)
    //   [ 0] 0x00449240  OWL::TReplaceDialog::~TReplaceDialog
    //   [ 1] 0x0044c1f0  OWL::TFindReplaceDialog::vf1
    //   [ 2] 0x00440188  OWL::TDialog::vf2
    //   [ 3] 0x0043fe6c  OWL::TDialog::Create
    //   [ 4] 0x0044c4ac  OWL::TReplaceDialog::vf4
    //   [ 5] 0x0043ff60  OWL::TDialog::Execute
    //   [ 6] 0x004208b0  OWL::TCommonDialog::DoExecute
    //   [ 7] 0x0043fa68  OWL::TDialog::PreProcessMsg
    //   [ 8] 0x004401fc  OWL::TDialog::CloseWindow
    //   [ 9] 0x00440254  OWL::TDialog::Destroy
    //   [10] 0x0044051c  OWL::TDialog::IdleAction
    //   [11] 0x00420884  OWL::TCommonDialog::SetupWindow
    //   [12] 0x0043fafc  OWL::TDialog::GetClassName
    //   [13] 0x0043fb1c  OWL::TDialog::GetWindowClass
    //   [14] 0x0044bfc4  OWL::TFindReplaceDialog::Find
};
```

### OWL::TResource<OWL::TOOLBARTEMPLATE,241>

```cpp
// sizeof 8 (0x8)  rtti 0x0042f880  no vptr  destructor 0x0042f7d8
class OWL::TResource<OWL::TOOLBARTEMPLATE,241> {
};
```

### OWL::TRichEdit

```cpp
// sizeof 254 (0xfe)  rtti 0x0041a984  vptr at +0xc  destructor 0x0041ae38
class OWL::TRichEdit : public OWL::TEditFile, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TEditFile
    // vtable at 0x004784bc (30 slots)
    //   [ 0] 0x0041ae38  OWL::TRichEdit::~TRichEdit
    //   [ 1] 0x0043d80c  OWL::TControl::vf1
    //   [ 2] 0x0043d868  OWL::TControl::vf2
    //   [ 3] 0x0043d888  OWL::TControl::vf3
    //   [ 4] 0x0043d8c8  OWL::TControl::vf4
    //   [ 5] 0x0043d908  OWL::TControl::vf5
    //   [ 6] 0x0043d938  OWL::TControl::vf6
    //   [ 7] 0x0043d960  OWL::TControl::vf7
    //   [ 8] 0x00419e94  OWL::TRichEdit::Find
    //   [ 9] 0x00445e50  OWL::TEdit::vf9
    //   [10] 0x0041a63c  OWL::TRichEdit::vf10
    //   [11] 0x0041a470  OWL::TRichEdit::vf11
    //   [12] 0x0041a0f8  OWL::TRichEdit::GetSubText
    //   [13] 0x0041a03c  OWL::TRichEdit::GetSelection
    //   [14] 0x0041b1e0  OWL::TEdit::vf14
    //   [15] 0x0041a090  OWL::TRichEdit::SetSelection
    //   [16] 0x0041a148  OWL::TRichEdit::vf16
    //   [17] 0x0041a204  OWL::TRichEdit::Paste
    //   [18] 0x0041b3b4  OWL::TRichEdit::CharFromPos
    //   [19] 0x0041b3e8  OWL::TRichEdit::PosFromChar
    //   [20] 0x0041a498  OWL::TRichEdit::vf20
    //   [21] 0x00448408  OWL::TEditFile::CanClose
    //   [22] 0x00447f1c  OWL::TEditFile::vf22
    //   [23] 0x00447238  OWL::TEditFile::vf23
    //   [24] 0x004474e8  OWL::TEditFile::vf24
    //   [25] 0x0041a6bc  OWL::TRichEdit::ReadFromFile
    //   [26] 0x00447284  OWL::TEditFile::vf26
    //   [27] 0x00447740  OWL::TEditFile::vf27
    //   [28] 0x004479c0  OWL::TEditFile::vf28
    //   [29] 0x0041a7dc  OWL::TRichEdit::WriteToFile
    // response table at 0x00477ed4 (17 entries)
    //   EV_COMMAND(24322)                            -> 0x00419edc  OWL::TRichEdit::Cmd24322
    //   EV_COMMAND(24323)                            -> 0x00419ef8  OWL::TRichEdit::Cmd24323
    //   EV_COMMAND(24324)                            -> 0x00419f14  OWL::TRichEdit::Cmd24324
    //   EV_COMMAND(24325)                            -> 0x00419f24  OWL::TRichEdit::Cmd24325
    //   EV_COMMAND(24326)                            -> 0x00419f34  OWL::TRichEdit::Cmd24326
    //   EV_COMMAND(24321)                            -> 0x00419f44  OWL::TRichEdit::Cmd24321
    //   EV_COMMAND_ENABLE(24322)                     -> 0x0041a2bc  OWL::TRichEdit::CeShared_41a2bc
    //   EV_COMMAND_ENABLE(24323)                     -> 0x0041a2bc  OWL::TRichEdit::CeShared_41a2bc
    //   EV_COMMAND_ENABLE(24325)                     -> 0x0041a2bc  OWL::TRichEdit::CeShared_41a2bc
    //   EV_COMMAND_ENABLE(24324)                     -> 0x0041a2f4  OWL::TRichEdit::CeCmd24324
    //   EV_COMMAND_ENABLE(24326)                     -> 0x0041a3f8  OWL::TRichEdit::CeCmd24326
    //   EV_COMMAND_ENABLE(24321)                     -> 0x0041a43c  OWL::TRichEdit::CeCmd24321
    //   WM_CHAR                                      -> 0x0041a274  OWL::TRichEdit::EvChar
    //   WM_KEYDOWN                                   -> 0x0041a284  OWL::TRichEdit::EvKeyDown
    //   WM_GETDLGCODE                                -> 0x0041a260  OWL::TRichEdit::EvGetDlgCode
    //   WM_SETFOCUS                                  -> 0x0041a2ac  OWL::TRichEdit::EvSetFocus
    //   WM_KILLFOCUS                                 -> 0x0041a294  OWL::TRichEdit::EvKillFocus
};
```

### OWL::TRichEdit::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x0041b02c  vptr at +0x0
class OWL::TRichEdit::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x00478230 (4 slots)
    //   [ 0] 0x0041b07c  OWL::TNewStreamer::vf0
    //   [ 1] 0x0041ab84  OWL::TRichEdit::Streamer::vf1
    //   [ 2] 0x0041abf8  OWL::TRichEdit::Streamer::vf2
    //   [ 3] 0x0041b0ac  OWL::TRichEdit::Streamer::vf3
};
```

### OWL::TRichEditModule

```cpp
// sizeof 13 (0xd)  rtti 0x0041af60  vptr at +0x0  destructor 0x0041afe8
class OWL::TRichEditModule : public OWL::TModule {
    /* +0x000 */ // base subobject OWL::TModule
};
```

### OWL::TScreenDC

```cpp
// sizeof 37 (0x25)  rtti 0x0041ceac  vptr at +0x5  destructor 0x0041d410
class OWL::TScreenDC : public OWL::TWindowDC {
    /* +0x000 */ // base subobject OWL::TWindowDC
    // vtable at 0x0047ea14 (24 slots)
    //   [ 0] 0x0041d410  OWL::TScreenDC::~TScreenDC
    //   [ 1] 0x0042205c  OWL::TDC::vf1
    //   [ 2] 0x0042206c  OWL::TDC::vf2
    //   [ 3] 0x00422088  OWL::TDC::vf3
    //   [ 4] 0x004220a4  OWL::TDC::vf4
    //   [ 5] 0x00421d30  OWL::TDC::vf5
    //   [ 6] 0x00421dc0  OWL::TDC::vf6
    //   [ 7] 0x00421e44  OWL::TDC::vf7
    //   [ 8] 0x004220c0  OWL::TDC::vf8
    //   [ 9] 0x0042210c  OWL::TDC::vf9
    //   [10] 0x00422158  OWL::TDC::vf10
    //   [11] 0x0042218c  OWL::TDC::vf11
    //   [12] 0x004221d8  OWL::TDC::vf12
    //   [13] 0x00422224  OWL::TDC::vf13
    //   [14] 0x00422270  OWL::TDC::vf14
    //   [15] 0x004222c4  OWL::TDC::vf15
    //   [16] 0x00422310  OWL::TDC::vf16
    //   [17] 0x00422364  OWL::TDC::vf17
    //   [18] 0x0042239c  OWL::TDC::vf18
    //   [19] 0x004223e0  OWL::TDC::vf19
    //   [20] 0x00422448  OWL::TDC::vf20
    //   [21] 0x00422468  OWL::TDC::vf21
    //   [22] 0x00422494  OWL::TDC::vf22
    //   [23] 0x00421ce0  OWL::TDC::vf23
};
```

### OWL::TScrollBar

```cpp
// sizeof 178 (0xb2)  rtti 0x00404a98  vptr at +0xc  destructor 0x00404e4c
class OWL::TScrollBar : public OWL::TControl, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TControl
    // vtable at 0x004838bc (28 slots)
    //   [ 0] 0x00404e4c  OWL::TScrollBar::~TScrollBar
    //   [ 1] 0x0043d80c  OWL::TControl::vf1
    //   [ 2] 0x0043d868  OWL::TControl::vf2
    //   [ 3] 0x0043d888  OWL::TControl::vf3
    //   [ 4] 0x0043d8c8  OWL::TControl::vf4
    //   [ 5] 0x0043d908  OWL::TControl::vf5
    //   [ 6] 0x0043d938  OWL::TControl::vf6
    //   [ 7] 0x0043d960  OWL::TControl::vf7
    //   [ 8] 0x00451728  OWL::TScrollBar::Find
    //   [ 9] 0x00451a20  OWL::TScrollBar::vf9
    //   [10] 0x00451968  OWL::TScrollBar::vf10
    //   [11] 0x00451a6c  OWL::TScrollBar::vf11
    //   [12] 0x004519a8  OWL::TScrollBar::vf12
    //   [13] 0x00451ab8  OWL::TScrollBar::vf13
    //   [14] 0x00451950  OWL::TScrollBar::vf14
    //   [15] 0x00451930  OWL::TScrollBar::vf15
    //   [16] 0x004518a4  OWL::TScrollBar::vf16
    //   [17] 0x00451aec  OWL::TScrollBar::vf17
    //   [18] 0x00451b04  OWL::TScrollBar::vf18
    //   [19] 0x00451b1c  OWL::TScrollBar::vf19
    //   [20] 0x00451b34  OWL::TScrollBar::vf20
    //   [21] 0x00451b4c  OWL::TScrollBar::vf21
    //   [22] 0x00451b64  OWL::TScrollBar::vf22
    //   [23] 0x00451b7c  OWL::TScrollBar::vf23
    //   [24] 0x00451bac  OWL::TScrollBar::vf24
    //   [25] 0x00451bdc  OWL::TScrollBar::vf25
    //   [26] 0x00451900  OWL::TScrollBar::vf26
    //   [27] 0x0045190c  OWL::TScrollBar::vf27
    // response table at 0x00483844 (2 entries)
    //   WM_VSCROLL                                   -> 0x00451c8c  OWL::TScrollBar::EvVScroll
    //   WM_HSCROLL                                   -> 0x00451be4  OWL::TScrollBar::EvHScroll
};
```

### OWL::TScroller

```cpp
// sizeof 61 (0x3d)  rtti 0x004392c8  vptr at +0x0  destructor 0x00451d24
class OWL::TScroller : public OWL::TStreamableBase {
    /* +0x000 */ // base subobject OWL::TStreamableBase
    // vtable at 0x00483a04 (22 slots)
    //   [ 0] 0x00451d24  OWL::TScroller::~TScroller
    //   [ 1] 0x00452740  OWL::TScroller::vf1
    //   [ 2] 0x00451efc  OWL::TScroller::vf2
    //   [ 3] 0x00451d94  OWL::TScroller::vf3
    //   [ 4] 0x00451f18  OWL::TScroller::vf4
    //   [ 5] 0x00451ea4  OWL::TScroller::vf5
    //   [ 6] 0x00451ed0  OWL::TScroller::vf6
    //   [ 7] 0x00452014  OWL::TScroller::vf7
    //   [ 8] 0x00452094  OWL::TScroller::vf8
    //   [ 9] 0x0045212c  OWL::TScroller::vf9
    //   [10] 0x0045227c  OWL::TScroller::vf10
    //   [11] 0x004523cc  OWL::TScroller::vf11
    //   [12] 0x00452750  OWL::TScroller::vf12
    //   [13] 0x0045277c  OWL::TScroller::vf13
    //   [14] 0x004524e0  OWL::TScroller::vf14
    //   [15] 0x004524ec  OWL::TScroller::vf15
    //   [16] 0x004527a0  OWL::TScroller::vf16
    //   [17] 0x004527c0  OWL::TScroller::vf17
    //   [18] 0x004527d8  OWL::TScroller::vf18
    //   [19] 0x004527f4  OWL::TScroller::vf19
    //   [20] 0x00452814  OWL::TScroller::vf20
    //   [21] 0x0045282c  OWL::TScroller::vf21
};
```

### OWL::TScroller::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x00452d28  vptr at +0x0
class OWL::TScroller::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x00483b0c (4 slots)
    //   [ 0] 0x0041b07c  OWL::TNewStreamer::vf0
    //   [ 1] 0x004529e8  OWL::TScroller::Streamer::vf1
    //   [ 2] 0x00452b3c  OWL::TScroller::Streamer::vf2
    //   [ 3] 0x00452d78  OWL::TScroller::Streamer::vf3
};
```

### OWL::TSeparatorGadget

```cpp
// sizeof 69 (0x45)  rtti 0x00424e98  vptr at +0x0  destructor 0x00424ef8
class OWL::TSeparatorGadget : public OWL::TGadget {
    /* +0x000 */ // base subobject OWL::TGadget
    // vtable at 0x0047add4 (21 slots)
    //   [ 0] 0x00424ef8  OWL::TSeparatorGadget::~TSeparatorGadget
    //   [ 1] 0x0042426c  OWL::TGadget::vf1
    //   [ 2] 0x00424938  OWL::TGadget::vf2
    //   [ 3] 0x004242a8  OWL::TGadget::vf3
    //   [ 4] 0x00424244  OWL::TGadget::vf4
    //   [ 5] 0x0042425c  OWL::TGadget::vf5
    //   [ 6] 0x00424264  OWL::TGadget::vf6
    //   [ 7] 0x004243e0  OWL::TGadget::vf7
    //   [ 8] 0x00424cc8  OWL::TSeparatorGadget::vf8
    //   [ 9] 0x00424570  OWL::TGadget::vf9
    //   [10] 0x004244a4  OWL::TGadget::vf10
    //   [11] 0x00424390  OWL::TGadget::vf11
    //   [12] 0x00424cd8  OWL::TSeparatorGadget::vf12
    //   [13] 0x004247f0  OWL::TGadget::vf13
    //   [14] 0x00424ad0  OWL::TGadget::vf14
    //   [15] 0x00424af0  OWL::TGadget::vf15
    //   [16] 0x00424af8  OWL::TGadget::vf16
    //   [17] 0x00424bc4  OWL::TGadget::vf17
    //   [18] 0x00424bfc  OWL::TGadget::vf18
    //   [19] 0x00424be0  OWL::TGadget::vf19
    //   [20] 0x00424c04  OWL::TGadget::vf20
};
```

### OWL::TStatic

```cpp
// sizeof 174 (0xae)  rtti 0x004049a0  vptr at +0xc  destructor 0x00404f60
class OWL::TStatic : public OWL::TControl, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TControl
    // vtable at 0x00483b90 (12 slots)
    //   [ 0] 0x00404f60  OWL::TStatic::~TStatic
    //   [ 1] 0x0043d80c  OWL::TControl::vf1
    //   [ 2] 0x0043d868  OWL::TControl::vf2
    //   [ 3] 0x0043d888  OWL::TControl::vf3
    //   [ 4] 0x0043d8c8  OWL::TControl::vf4
    //   [ 5] 0x0043d908  OWL::TControl::vf5
    //   [ 6] 0x0043d938  OWL::TControl::vf6
    //   [ 7] 0x0043d960  OWL::TControl::vf7
    //   [ 8] 0x00452d84  OWL::TStatic::Find
    //   [ 9] 0x00452f80  OWL::TStatic::vf9
    //   [10] 0x00452f48  OWL::TUrlLink::Transfer
    //   [11] 0x00452f28  OWL::TStatic::vf11
    // response table at 0x00483b30 (1 entries)
    //   WM_SIZE                                      -> 0x00452f00  OWL::TStatic::EvSize
};
```

### OWL::TStatic::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x00453330  vptr at +0x0
class OWL::TStatic::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x00483d18 (4 slots)
    //   [ 0] 0x0041b07c  OWL::TNewStreamer::vf0
    //   [ 1] 0x00453210  EvRegisteredMsg_453210_453210
    //   [ 2] 0x00453240  OWL::TStatic::Streamer::vf2
    //   [ 3] 0x0045337c  OWL::TStatic::Streamer::vf3
};
```

### OWL::TStreamableBase

```cpp
// sizeof 4 (0x4)  rtti 0x00403c1c  vptr at +0x0  destructor 0x0041e99c
class OWL::TStreamableBase {
    // vtable at 0x00474f74 (1 slots)
    //   [ 0] 0x0041e99c  OWL::TStreamableBase::~TStreamableBase
};
```

### OWL::TStreamableClass

```cpp
// sizeof 16 (0x10)  rtti 0x0041ad78  no vptr  destructor 0x0042cef8
class OWL::TStreamableClass : public OWL::ObjectBuilder {
    /* +0x000 */ // base subobject OWL::ObjectBuilder
};
```

### OWL::TStreamableTypes

```cpp
// sizeof 4 (0x4)  rtti 0x0042e304  no vptr  destructor 0x0042cfe0
class OWL::TStreamableTypes {
};
```

### OWL::TStreamer

```cpp
// sizeof 8 (0x8)  rtti 0x0041b0b8  vptr at +0x0
class OWL::TStreamer {
    // vtable at 0x0047824c (4 slots)
    //   [ 0] 0x00470140  vshared_470140
    //   [ 1] 0x00470140  vshared_470140
    //   [ 2] 0x00470140  vshared_470140
    //   [ 3] 0x00470140  vshared_470140
};
```

### OWL::TSystemMessage

```cpp
// sizeof 20 (0x14)  rtti 0x0042c754  no vptr  destructor 0x0042c7ac
class OWL::TSystemMessage {
    /* +0x004 */ std::string m_4;
};
```

### OWL::TTinyCaption

```cpp
// sizeof 198 (0xc6)  rtti 0x004411c8  vptr at +0xc  destructor 0x004533cc
class OWL::TTinyCaption : public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    // vtable at 0x00483fc0 (3 slots)
    //   [ 0] 0x004533cc  OWL::TTinyCaption::~TTinyCaption
    //   [ 1] 0x00453f1c  OWL::TTinyCaption::EvCommand
    //   [ 2] 0x00453388  OWL::TTinyCaption::Find
};
```

### OWL::TTmpBuffer<char>

```cpp
// sizeof 8 (0x8)  rtti 0x0041fb94  no vptr  destructor 0x0041fc98
class OWL::TTmpBuffer<char> : public OWL::TTmpBufferBase {
    /* +0x000 */ // base subobject OWL::TTmpBufferBase
};
```

### OWL::TTmpBufferBase

```cpp
// sizeof 8 (0x8)  rtti 0x0041fc48  no vptr  destructor 0x0042b4b0
class OWL::TTmpBufferBase {
};
```

### OWL::TToolbarRes

```cpp
// sizeof 13 (0xd)  rtti 0x0042f8e8  no vptr  destructor 0x0042f754
class OWL::TToolbarRes : public OWL::TResource<OWL::TOOLBARTEMPLATE,241> {
    /* +0x000 */ // base subobject OWL::TResource<OWL::TOOLBARTEMPLATE,241>
};
```

### OWL::TTooltip

```cpp
// sizeof 170 (0xaa)  rtti 0x00427588  vptr at +0xc  destructor 0x00430ac0
class OWL::TTooltip : public OWL::TControl, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TControl
    // vtable at 0x0047cf3c (10 slots)
    //   [ 0] 0x00430ac0  OWL::TTooltip::~TTooltip
    //   [ 1] 0x0043d80c  OWL::TControl::vf1
    //   [ 2] 0x0043d868  OWL::TControl::vf2
    //   [ 3] 0x0043d888  OWL::TControl::vf3
    //   [ 4] 0x0043d8c8  OWL::TControl::vf4
    //   [ 5] 0x0043d908  OWL::TControl::vf5
    //   [ 6] 0x0043d938  OWL::TControl::vf6
    //   [ 7] 0x0043d960  OWL::TControl::vf7
    //   [ 8] 0x0043d3bc  OWL::TControl::Find
    //   [ 9] 0x00430b94  OWL::TTooltip::GetClassName
};
```

### OWL::TTooltipEnabler

```cpp
// sizeof 20 (0x14)  rtti 0x00430bf8  vptr at +0x0
class OWL::TTooltipEnabler : public OWL::TCommandEnabler {
    /* +0x000 */ // base subobject OWL::TCommandEnabler
    // vtable at 0x0047d018 (3 slots)
    //   [ 0] 0x00435bf0  OWL::TCommandEnabler::vf0
    //   [ 1] 0x0043092c  OWL::TTooltipEnabler::vf1
    //   [ 2] 0x00430950  OWL::TTooltipEnabler::vf2
};
```

### OWL::TUIFaceData

```cpp
// sizeof 21 (0x15)  rtti 0x00431490  no vptr  destructor 0x0043250c
class OWL::TUIFaceData {
    /* +0x000 */ OWL::THatch8x8Brush m_0;
    /* +0x011 */ OWL::TPointer<OWL::TBitmap> m_11;
};
```

### OWL::TUrlLink

```cpp
// sizeof 213 (0xd5)  rtti 0x00434ef0  vptr at +0xc  destructor 0x004330f8
class OWL::TUrlLink : public OWL::TStatic, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TStatic
    /* +0x02c */ std::string m_2c;
    // vtable at 0x0047e020 (21 slots)
    //   [ 0] 0x004330f8  OWL::TUrlLink::~TUrlLink
    //   [ 1] 0x0043d80c  OWL::TControl::vf1
    //   [ 2] 0x0043d868  OWL::TControl::vf2
    //   [ 3] 0x0043d888  OWL::TControl::vf3
    //   [ 4] 0x0043d8c8  OWL::TControl::vf4
    //   [ 5] 0x0043d908  OWL::TControl::vf5
    //   [ 6] 0x0043d938  OWL::TControl::vf6
    //   [ 7] 0x0043d960  OWL::TControl::vf7
    //   [ 8] 0x00433094  OWL::TUrlLink::Find
    //   [ 9] 0x00452f80  OWL::TStatic::vf9
    //   [10] 0x00452f48  OWL::TUrlLink::Transfer
    //   [11] 0x004332d8  OWL::TUrlLink::GetClassName
    //   [12] 0x004354d8  OWL::TUrlLink::GetTooltip
    //   [13] 0x004335cc  OWL::TUrlLink::EnableTooltip
    //   [14] 0x004337bc  OWL::TUrlLink::PreProcessMsg
    //   [15] 0x004332e4  OWL::TUrlLink::SetupWindow
    //   [16] 0x00433870  OWL::TUrlLink::GetWindowClass
    //   [17] 0x004338e4  OWL::TUrlLink::Paint
    //   [18] 0x00433f0c  OWL::TUrlLink::vf18
    //   [19] 0x00434160  OWL::TUrlLink::vf19
    //   [20] 0x00434c50  OWL::TUrlLink::vf20
    // response table at 0x0047d820 (7 entries)
    //   WM_PAINT                                     -> 0x00433bb0  OWL::TUrlLink::EvPaint
    //   WM_LBUTTONDOWN                               -> 0x00433ce0  OWL::TUrlLink::EvLButtonDown
    //   WM_MOUSEMOVE                                 -> 0x00433d48  OWL::TUrlLink::EvMouseMove
    //   message 0x0019                               -> 0x00433c2c  OWL::TUrlLink::EvMsg_19
    //   WM_GETFONT                                   -> 0x00433dec  OWL::TUrlLink::EvGetfont
    //   WM_SETFONT                                   -> 0x00433e08  OWL::TUrlLink::EvSetfont
    //   WM_GETDLGCODE                                -> 0x00433f00  OWL::TUrlLink::EvGetDlgCode
};
```

### OWL::TUrlLink::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x00435480  vptr at +0x0
class OWL::TUrlLink::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0047e004 (4 slots)
    //   [ 0] 0x0041b07c  OWL::TNewStreamer::vf0
    //   [ 1] 0x00435144  OWL::TUrlLink::Streamer::vf1
    //   [ 2] 0x00435268  OWL::TUrlLink::Streamer::vf2
    //   [ 3] 0x004354cc  OWL::TUrlLink::Streamer::vf3
};
```

### OWL::TValidator

```cpp
// sizeof 6 (0x6)  rtti 0x00430c54  vptr at +0x0  destructor 0x00455164
class OWL::TValidator : public OWL::TStreamableBase {
    /* +0x000 */ // base subobject OWL::TStreamableBase
    // vtable at 0x004840a4 (6 slots)
    //   [ 0] 0x00455164  OWL::TValidator::~TValidator
    //   [ 1] 0x004551c0  OWL::TValidator::vf1
    //   [ 2] 0x004551c8  OWL::TValidator::vf2
    //   [ 3] 0x004551d0  OWL::TValidator::vf3
    //   [ 4] 0x004551d8  OWL::TValidator::vf4
    //   [ 5] 0x004551e0  OWL::TValidator::vf5
};
```

### OWL::TValidator::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x00455478  vptr at +0x0
class OWL::TValidator::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0048416c (4 slots)
    //   [ 0] 0x0041b07c  OWL::TNewStreamer::vf0
    //   [ 1] 0x00455384  OWL::TValidator::Streamer::vf1
    //   [ 2] 0x004553a8  OWL::TValidator::Streamer::vf2
    //   [ 3] 0x004554c8  OWL::TValidator::Streamer::vf3
};
```

### OWL::TView

```cpp
// sizeof 44 (0x2c)  rtti 0x0042f688  vptr at +0x8  destructor 0x004554d4
class OWL::TView : public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase {
    // vtable at 0x00484250 (12 slots)
    //   [ 0] 0x004554d4  OWL::TView::~TView
    //   [ 1] 0x0042f65c  OWL::TView::vf1
    //   [ 2] 0x0042f668  OWL::TView::vf2
    //   [ 3] 0x00470140  vshared_470140
    //   [ 4] 0x0045571c  OWL::TView::vf4
    //   [ 5] 0x00455724  OWL::TView::vf5
    //   [ 6] 0x0042f674  OWL::TView::vf6
    //   [ 7] 0x00455640  OWL::TView::vf7
    //   [ 8] 0x00455620  OWL::TView::vf8
    //   [ 9] 0x00455600  OWL::TView::vf9
    //   [10] 0x00455670  OWL::TView::vf10
    //   [11] 0x0042f680  OWL::TView::vf11
};
```

### OWL::TWindow

```cpp
// sizeof 146 (0x92)  rtti 0x00403c70  vptr at +0x8  destructor 0x00435f74
class OWL::TWindow : public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase {
    // vtable at 0x0047cdb8 (34 slots)
    //   [ 0] 0x00435f74  OWL::TWindow::~TWindow
    //   [ 1] 0x00404558  OWL::TWindow::GetTooltip
    //   [ 2] 0x00438d94  OWL::TWindow::EnableTooltip
    //   [ 3] 0x00437dd4  OWL::TWindow::Register
    //   [ 4] 0x00437aac  OWL::TWindow::Create
    //   [ 5] 0x00437a5c  OWL::TWindow::PerformCreate
    //   [ 6] 0x00437894  OWL::TWindow::Destroy
    //   [ 7] 0x00437c1c  OWL::TWindow::Execute
    //   [ 8] 0x00437c2c  OWL::TWindow::DoExecute
    //   [ 9] 0x00437ee4  OWL::TWindow::CloseWindow
    //   [10] 0x00436168  OWL::TWindow::PreProcessMsg
    //   [11] 0x00436208  OWL::TWindow::IdleAction
    //   [12] 0x00436e78  OWL::TWindow::HoldFocusHWnd
    //   [13] 0x004362f8  OWL::TWindow::SetParent
    //   [14] 0x00436384  OWL::TWindow::SetDocTitle
    //   [15] 0x00437ec0  OWL::TWindow::CanClose
    //   [16] 0x00436aec  OWL::TWindow::WindowProc
    //   [17] 0x00436984  OWL::TWindow::DefWindowProc
    //   [18] 0x0043661c  OWL::TWindow::EvCommand
    //   [19] 0x004366cc  OWL::TWindow::EvNotify
    //   [20] 0x004367c0  OWL::TWindow::EvCommandEnable
    //   [21] 0x004377a4  OWL::TWindow::Paint
    //   [22] 0x00437d08  OWL::TWindow::Transfer
    //   [23] 0x00437d54  OWL::TWindow::TransferData
    //   [24] 0x00404564  OWL::TWindow::EnableWindow
    //   [25] 0x004387b4  OWL::TWindow::ShowWindow
    //   [26] 0x00404588  OWL::TWindow::Invalidate
    //   [27] 0x004045a4  OWL::TWindow::InvalidateRect
    //   [28] 0x00437914  OWL::TWindow::GetWindowClass
    //   [29] 0x004379bc  OWL::TWindow::GetClassName
    //   [30] 0x00437c68  OWL::TWindow::SetupWindow
    //   [31] 0x00437d00  OWL::TWindow::CleanupWindow
    //   [32] 0x004362a4  OWL::TWindow::RemoveChild
    //   [33] 0x00435b8c  OWL::TWindow::Find
    // response table at 0x0047e2c0 (34 entries)
    //   WM_SETCURSOR                                 -> 0x004377ac  OWL::TWindow::EvSetCursor
    //   WM_SIZE                                      -> 0x00436ec8  OWL::TWindow::EvSize
    //   WM_MOVE                                      -> 0x00436f80  OWL::TWindow::EvMove
    //   WM_COMPAREITEM                               -> 0x00437010  OWL::TWindow::EvCompareitem
    //   WM_DELETEITEM                                -> 0x00437048  OWL::TWindow::EvDeleteitem
    //   WM_DRAWITEM                                  -> 0x00437088  OWL::TWindow::EvDrawItem
    //   WM_MEASUREITEM                               -> 0x004370e8  OWL::TWindow::EvMeasureItem
    //   WM_VSCROLL                                   -> 0x00437478  OWL::TWindow::EvVScroll
    //   WM_HSCROLL                                   -> 0x00437420  OWL::TWindow::EvHScroll
    //   WM_CHILDINVALID                              -> 0x004380b4  OWL::TWindow::EvChildinvalid
    //   WM_ERASEBKGND                                -> 0x004374d0  OWL::TWindow::EvEraseBkgnd
    //   message 0x0019                               -> 0x00437630  OWL::TWindow::EvMsg_19
    //   WM_PAINT                                     -> 0x004376e4  OWL::TWindow::EvPaint
    //   WM_LBUTTONDOWN                               -> 0x004377e8  OWL::TWindow::EvLButtonDown
    //   WM_KILLFOCUS                                 -> 0x00436e80  OWL::TWindow::EvKillFocus
    //   WM_CTLCOLORMSGBOX                            -> 0x004371cc  OWL::TWindow::EvShared_4371cc
    //   WM_CTLCOLOREDIT                              -> 0x004371cc  OWL::TWindow::EvShared_4371cc
    //   WM_CTLCOLORLISTBOX                           -> 0x004371cc  OWL::TWindow::EvShared_4371cc
    //   WM_CTLCOLORBTN                               -> 0x004371cc  OWL::TWindow::EvShared_4371cc
    //   WM_CTLCOLORDLG                               -> 0x004371cc  OWL::TWindow::EvShared_4371cc
    //   WM_CTLCOLORSCROLLBAR                         -> 0x004371cc  OWL::TWindow::EvShared_4371cc
    //   WM_CTLCOLORSTATIC                            -> 0x004371cc  OWL::TWindow::EvShared_4371cc
    //   WM_CREATE                                    -> 0x00436e58  OWL::TWindow::EvCreate
    //   WM_CLOSE                                     -> 0x00437f24  OWL::TWindow::EvClose
    //   WM_DESTROY                                   -> 0x00437f78  OWL::TWindow::EvDestroy
    //   WM_NCDESTROY                                 -> 0x00437fc8  OWL::TWindow::EvNCDestroy
    //   WM_QUERYENDSESSION                           -> 0x00437fe0  OWL::TWindow::EvQueryEndSession
    //   WM_ENDSESSION                                -> 0x00438034  OWL::TWindow::EvEndSession
    //   WM_SYSCOLORCHANGE                            -> 0x00436284  OWL::TWindow::EvSysColorChange
    //   WM_INITMENUPOPUP                             -> 0x004389ac  OWL::TWindow::EvInitMenuPopup
    //   WM_CONTEXTMENU                               -> 0x00438af0  OWL::TWindow::EvContextMenu
    //   WM_ENTERIDLE                                 -> 0x00438b78  OWL::TWindow::EvEnteridle
    //   WM_MOUSEWHEEL                                -> 0x004373a4  OWL::TWindow::EvMouseWheel
    //   message id 0 in the static table (filled at run time or WM_NULL) -> 0x004372e8  OWL::TWindow::EvRegisteredMsg_4372e8
};
```

### OWL::TWindow::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x004303c8  vptr at +0x0
class OWL::TWindow::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0047ce64 (4 slots)
    //   [ 0] 0x0041b07c  OWL::TNewStreamer::vf0
    //   [ 1] 0x0042fcf4  OWL::TWindow::Streamer::vf1
    //   [ 2] 0x0043002c  OWL::TWindow::Streamer::vf2
    //   [ 3] 0x00430414  OWL::TWindow::Streamer::vf3
};
```

### OWL::TWindowDC

```cpp
// sizeof 37 (0x25)  rtti 0x0041d454  vptr at +0x5  destructor 0x004393a8
class OWL::TWindowDC : public OWL::TDC {
    /* +0x000 */ // base subobject OWL::TDC
    // vtable at 0x0047ea80 (24 slots)
    //   [ 0] 0x004393a8  OWL::TWindowDC::~TWindowDC
    //   [ 1] 0x0042205c  OWL::TDC::vf1
    //   [ 2] 0x0042206c  OWL::TDC::vf2
    //   [ 3] 0x00422088  OWL::TDC::vf3
    //   [ 4] 0x004220a4  OWL::TDC::vf4
    //   [ 5] 0x00421d30  OWL::TDC::vf5
    //   [ 6] 0x00421dc0  OWL::TDC::vf6
    //   [ 7] 0x00421e44  OWL::TDC::vf7
    //   [ 8] 0x004220c0  OWL::TDC::vf8
    //   [ 9] 0x0042210c  OWL::TDC::vf9
    //   [10] 0x00422158  OWL::TDC::vf10
    //   [11] 0x0042218c  OWL::TDC::vf11
    //   [12] 0x004221d8  OWL::TDC::vf12
    //   [13] 0x00422224  OWL::TDC::vf13
    //   [14] 0x00422270  OWL::TDC::vf14
    //   [15] 0x004222c4  OWL::TDC::vf15
    //   [16] 0x00422310  OWL::TDC::vf16
    //   [17] 0x00422364  OWL::TDC::vf17
    //   [18] 0x0042239c  OWL::TDC::vf18
    //   [19] 0x004223e0  OWL::TDC::vf19
    //   [20] 0x00422448  OWL::TDC::vf20
    //   [21] 0x00422468  OWL::TDC::vf21
    //   [22] 0x00422494  OWL::TDC::vf22
    //   [23] 0x00421ce0  OWL::TDC::vf23
};
```

### OWL::TXBadFormat

```cpp
// sizeof 12 (0xc)  rtti 0x00449964  vptr at +0x0  destructor 0x004499c0
class OWL::TXBadFormat : public OWL::TXOwl {
    /* +0x000 */ // base subobject OWL::TXOwl
    // vtable at 0x00481e44 (6 slots)
    //   [ 0] 0x004499c0  OWL::TXBadFormat::~TXBadFormat
    //   [ 1] 0x00422f18  OWL::TXBase::vf1
    //   [ 2] 0x00449a04  OWL::TXBadFormat::vf2
    //   [ 3] 0x00449a84  OWL::TXBadFormat::vf3
    //   [ 4] 0x0042323c  OWL::TXOwl::vf4
    //   [ 5] 0x004498f4  vshared_4498f4
};
```

### OWL::TXBase

```cpp
// sizeof 8 (0x8)  rtti 0x0041b820  vptr at +0x0  destructor 0x00422d84
class OWL::TXBase : public std::exception {
    /* +0x000 */ // base subobject std::exception
    // vtable at 0x0047a6a0 (4 slots)
    //   [ 0] 0x00422d84  OWL::TXBase::~TXBase
    //   [ 1] 0x00422f18  OWL::TXBase::vf1
    //   [ 2] 0x00422e70  OWL::TXBase::vf2
    //   [ 3] 0x00422ec4  OWL::TXBase::vf3
};
```

### OWL::TXClipboard

```cpp
// sizeof 12 (0xc)  rtti 0x0041fd60  vptr at +0x0  destructor 0x0041ffd0
class OWL::TXClipboard : public OWL::TXOwl {
    /* +0x000 */ // base subobject OWL::TXOwl
    // vtable at 0x00479c48 (5 slots)
    //   [ 0] 0x0041ffd0  OWL::TXClipboard::~TXClipboard
    //   [ 1] 0x00422f18  OWL::TXBase::vf1
    //   [ 2] 0x0041fedc  OWL::TXClipboard::vf2
    //   [ 3] 0x0041ff5c  OWL::TXClipboard::vf3
    //   [ 4] 0x0042323c  OWL::TXOwl::vf4
};
```

### OWL::TXEndSession

```cpp
// sizeof 1 (0x1)  rtti 0x00438070  no vptr
class OWL::TXEndSession {
};
```

### OWL::TXGdi

```cpp
// sizeof 12 (0xc)  rtti 0x00427b9c  vptr at +0x0  destructor 0x00427c9c
class OWL::TXGdi : public OWL::TXOwl {
    /* +0x000 */ // base subobject OWL::TXOwl
    // vtable at 0x0047b598 (5 slots)
    //   [ 0] 0x00427c9c  OWL::TXGdi::~TXGdi
    //   [ 1] 0x00422f18  OWL::TXBase::vf1
    //   [ 2] 0x00427aa8  OWL::TXGdi::vf2
    //   [ 3] 0x00427b28  OWL::TXGdi::vf3
    //   [ 4] 0x0042323c  OWL::TXOwl::vf4
};
```

### OWL::TXInvalidMainWindow

```cpp
// sizeof 12 (0xc)  rtti 0x0043bd10  vptr at +0x0  destructor 0x0043be18
class OWL::TXInvalidMainWindow : public OWL::TXOwl {
    /* +0x000 */ // base subobject OWL::TXOwl
    // vtable at 0x0047f3b4 (5 slots)
    //   [ 0] 0x0043be18  OWL::TXInvalidMainWindow::~TXInvalidMainWindow
    //   [ 1] 0x00422f18  OWL::TXBase::vf1
    //   [ 2] 0x0043bc1c  OWL::TXInvalidMainWindow::vf2
    //   [ 3] 0x0043bc9c  OWL::TXInvalidMainWindow::vf3
    //   [ 4] 0x0042323c  OWL::TXOwl::vf4
};
```

### OWL::TXInvalidModule

```cpp
// sizeof 12 (0xc)  rtti 0x00450588  vptr at +0x0  destructor 0x00450690
class OWL::TXInvalidModule : public OWL::TXOwl {
    /* +0x000 */ // base subobject OWL::TXOwl
    // vtable at 0x0048339c (5 slots)
    //   [ 0] 0x00450690  OWL::TXInvalidModule::~TXInvalidModule
    //   [ 1] 0x00422f18  OWL::TXBase::vf1
    //   [ 2] 0x00450494  OWL::TXInvalidModule::vf2
    //   [ 3] 0x00450514  OWL::TXInvalidModule::vf3
    //   [ 4] 0x0042323c  OWL::TXOwl::vf4
};
```

### OWL::TXMenu

```cpp
// sizeof 12 (0xc)  rtti 0x0042c11c  vptr at +0x0  destructor 0x0042c218
class OWL::TXMenu : public OWL::TXOwl {
    /* +0x000 */ // base subobject OWL::TXOwl
    // vtable at 0x0047c32c (5 slots)
    //   [ 0] 0x0042c218  OWL::TXMenu::~TXMenu
    //   [ 1] 0x00422f18  OWL::TXBase::vf1
    //   [ 2] 0x0042c028  OWL::TXMenu::vf2
    //   [ 3] 0x0042c0a8  OWL::TXMenu::vf3
    //   [ 4] 0x0042323c  OWL::TXOwl::vf4
};
```

### OWL::TXOutOfMemory

```cpp
// sizeof 12 (0xc)  rtti 0x00423924  vptr at +0x0  destructor 0x00423a24
class OWL::TXOutOfMemory : public OWL::TXOwl {
    /* +0x000 */ // base subobject OWL::TXOwl
    // vtable at 0x0047aaa4 (6 slots)
    //   [ 0] 0x00423a24  OWL::TXOutOfMemory::~TXOutOfMemory
    //   [ 1] 0x00422f18  OWL::TXBase::vf1
    //   [ 2] 0x00423830  OWL::TXOutOfMemory::vf2
    //   [ 3] 0x004238b0  OWL::TXOutOfMemory::vf3
    //   [ 4] 0x0042323c  OWL::TXOwl::vf4
    //   [ 5] 0x0041d6cc  OWL::TXOutOfMemory::vf5
};
```

### OWL::TXOwl

```cpp
// sizeof 12 (0xc)  rtti 0x0041b788  vptr at +0x0  destructor 0x004231dc
class OWL::TXOwl : public OWL::TXBase {
    /* +0x000 */ // base subobject OWL::TXBase
    // vtable at 0x00478b54 (5 slots)
    //   [ 0] 0x004231dc  OWL::TXOwl::~TXOwl
    //   [ 1] 0x00422f18  OWL::TXBase::vf1
    //   [ 2] 0x0042325c  OWL::TXOwl::vf2
    //   [ 3] 0x004232d0  OWL::TXOwl::vf3
    //   [ 4] 0x0042323c  OWL::TXOwl::vf4
};
```

### OWL::TXWindow

```cpp
// sizeof 16 (0x10)  rtti 0x00439198  vptr at +0x0  destructor 0x00439248
class OWL::TXWindow : public OWL::TXOwl {
    /* +0x000 */ // base subobject OWL::TXOwl
    // vtable at 0x0047e958 (5 slots)
    //   [ 0] 0x00439248  OWL::TXWindow::~TXWindow
    //   [ 1] 0x00422f18  OWL::TXBase::vf1
    //   [ 2] 0x004390f0  OWL::TXWindow::vf2
    //   [ 3] 0x00439144  OWL::TXWindow::vf3
    //   [ 4] 0x004390d4  OWL::TXWindow::vf4
};
```

### std::bad_alloc

```cpp
// sizeof 4 (0x4)  rtti 0x0040eb28  vptr at +0x0  destructor 0x004671c8
class std::bad_alloc : public std::exception {
    /* +0x000 */ // base subobject std::exception
    // vtable at 0x00476b30 (2 slots)
    //   [ 0] 0x004671c8  std::bad_alloc::~bad_alloc
    //   [ 1] 0x00415ae4  std::bad_alloc::vf1
};
```

### std::basic_filebuf<char>

```cpp
// sizeof 68 (0x44)  rtti 0x00419838  vptr at +0x0  destructor 0x0045af90
class std::basic_filebuf<char> : public std::basic_streambuf<char> {
    /* +0x000 */ // base subobject std::basic_streambuf<char>
    // vtable at 0x00487708 (14 slots)
    //   [ 0] 0x0045af90  std::basic_filebuf<char>::~basic_filebuf
    //   [ 1] 0x00462c44  std::basic_streambuf<char>::vf1
    //   [ 2] 0x004600cc  std::basic_filebuf<char>::vf2
    //   [ 3] 0x00460da4  std::basic_filebuf<char>::vf3
    //   [ 4] 0x0046142c  std::basic_filebuf<char>::vf4
    //   [ 5] 0x0045efb0  std::basic_filebuf<char>::vf5
    //   [ 6] 0x0045f468  std::basic_streambuf<char>::vf6
    //   [ 7] 0x0045e4c8  std::basic_filebuf<char>::vf7
    //   [ 8] 0x0045ea30  std::basic_streambuf<char>::vf8
    //   [ 9] 0x0045d940  std::basic_filebuf<char>::vf9
    //   [10] 0x0045dfc0  std::basic_filebuf<char>::vf10
    //   [11] 0x0045f004  std::basic_filebuf<char>::vf11
    //   [12] 0x0045e120  std::basic_filebuf<char>::vf12
    //   [13] 0x00463508  std::basic_filebuf<char>::vf13
};
```

### std::basic_ifstream<char>

```cpp
// sizeof 136 (0x88)  rtti 0x004195d4  vptr at +0x4  destructor 0x0045ba50
class std::basic_ifstream<char> : public std::basic_istream<char>, public virtual std::basic_ios<char> {
    /* +0x000 */ // base subobject std::basic_istream<char>
    /* +0x00c */ std::basic_filebuf<char> m_c;
    // vtable at 0x00487664 (1 slots)
    //   [ 0] 0x0045ba50  std::basic_ifstream<char>::~basic_ifstream
};
```

### std::basic_ios<char>

```cpp
// sizeof 56 (0x38)  rtti 0x00403d50  vptr at +0x0  destructor 0x0045b8dc
class std::basic_ios<char> : public std::ios_base {
    /* +0x000 */ // base subobject std::ios_base
    // vtable at 0x00487680 (1 slots)
    //   [ 0] 0x0045b8dc  std::basic_ios<char>::~basic_ios
};
```

### std::basic_istream<char>

```cpp
// sizeof 68 (0x44)  rtti 0x004197bc  vptr at +0x4  destructor 0x0045b864
class std::basic_istream<char> : public virtual std::basic_ios<char> {
    // vtable at 0x004876ac (1 slots)
    //   [ 0] 0x0045b864  std::basic_istream<char>::~basic_istream
};
```

### std::basic_istream<char>::sentry

```cpp
// sizeof 8 (0x8)  rtti 0x0045f354  no vptr  destructor 0x0045bfb0
class std::basic_istream<char>::sentry {
};
```

### std::basic_ofstream<char>

```cpp
// sizeof 132 (0x84)  rtti 0x0041a8f4  vptr at +0x4  destructor 0x0045c238
class std::basic_ofstream<char> : public std::basic_ostream<char>, public virtual std::basic_ios<char> {
    /* +0x000 */ // base subobject std::basic_ostream<char>
    /* +0x008 */ std::basic_filebuf<char> m_8;
    // vtable at 0x00487608 (1 slots)
    //   [ 0] 0x0045c238  std::basic_ofstream<char>::~basic_ofstream
};
```

### std::basic_ostream<char>

```cpp
// sizeof 64 (0x40)  rtti 0x00403cd4  vptr at +0x4  destructor 0x0045b7ec
class std::basic_ostream<char> : public virtual std::basic_ios<char> {
    // vtable at 0x00487690 (1 slots)
    //   [ 0] 0x0045b7ec  std::basic_ostream<char>::~basic_ostream
};
```

### std::basic_ostream<char>::sentry

```cpp
// sizeof 8 (0x8)  rtti 0x0045f6f0  no vptr  destructor 0x0045c440
class std::basic_ostream<char>::sentry {
};
```

### std::basic_ostringstream<char>

```cpp
// sizeof 112 (0x70)  rtti 0x00402e58  vptr at +0x4  destructor 0x0045c5a4
class std::basic_ostringstream<char> : public std::basic_ostream<char>, public virtual std::basic_ios<char> {
    /* +0x000 */ // base subobject std::basic_ostream<char>
    /* +0x008 */ std::basic_stringbuf<char> m_8;
    // vtable at 0x004875ec (1 slots)
    //   [ 0] 0x0045c5a4  std::basic_ostringstream<char>::~basic_ostringstream
};
```

### std::basic_streambuf<char>

```cpp
// sizeof 36 (0x24)  rtti 0x00404b80  vptr at +0x0  destructor 0x0045b1a0
class std::basic_streambuf<char> {
    /* +0x020 */ std::locale m_20;
    // vtable at 0x004876c8 (13 slots)
    //   [ 0] 0x0045b1a0  std::basic_streambuf<char>::~basic_streambuf
    //   [ 1] 0x00462c44  std::basic_streambuf<char>::vf1
    //   [ 2] 0x004601c0  std::basic_streambuf<char>::vf2
    //   [ 3] 0x004616b0  std::basic_streambuf<char>::vf3
    //   [ 4] 0x004616c8  std::basic_streambuf<char>::vf4
    //   [ 5] 0x0045f3d8  std::basic_streambuf<char>::vf5
    //   [ 6] 0x0045f468  std::basic_streambuf<char>::vf6
    //   [ 7] 0x0045ea74  std::basic_streambuf<char>::vf7
    //   [ 8] 0x0045ea30  std::basic_streambuf<char>::vf8
    //   [ 9] 0x0045ea10  std::basic_streambuf<char>::vf9
    //   [10] 0x0045ea1c  std::basic_streambuf<char>::vf10
    //   [11] 0x0045f508  std::basic_streambuf<char>::vf11
    //   [12] 0x0045ea28  std::basic_streambuf<char>::vf12
};
```

### std::basic_stringbuf<char>

```cpp
// sizeof 48 (0x30)  rtti 0x00403dc8  vptr at +0x0  destructor 0x0045c0b4
class std::basic_stringbuf<char> : public std::basic_streambuf<char> {
    /* +0x000 */ // base subobject std::basic_streambuf<char>
    // vtable at 0x00487624 (13 slots)
    //   [ 0] 0x0045c0b4  std::basic_stringbuf<char>::~basic_stringbuf
    //   [ 1] 0x00462c44  std::basic_streambuf<char>::vf1
    //   [ 2] 0x004601c8  std::basic_stringbuf<char>::vf2
    //   [ 3] 0x004616e0  std::basic_stringbuf<char>::vf3
    //   [ 4] 0x00461af4  std::basic_stringbuf<char>::vf4
    //   [ 5] 0x0045f3d8  std::basic_streambuf<char>::vf5
    //   [ 6] 0x0045f468  std::basic_streambuf<char>::vf6
    //   [ 7] 0x0045ee0c  std::basic_stringbuf<char>::vf7
    //   [ 8] 0x0045ea30  std::basic_streambuf<char>::vf8
    //   [ 9] 0x0045ebd0  std::basic_stringbuf<char>::vf9
    //   [10] 0x0045ed1c  std::basic_stringbuf<char>::vf10
    //   [11] 0x0045f564  std::basic_stringbuf<char>::vf11
    //   [12] 0x0045ea28  std::basic_streambuf<char>::vf12
};
```

### std::domain_error

```cpp
// sizeof 24 (0x18)  rtti 0x00464250  vptr at +0x0  destructor 0x00467300
class std::domain_error : public std::logic_error {
    /* +0x000 */ // base subobject std::logic_error
    // vtable at 0x00487b1c (2 slots)
    //   [ 0] 0x00467300  std::domain_error::~domain_error
    //   [ 1] 0x00404100  std::logic_error::vf1
};
```

### std::exception

```cpp
// sizeof 4 (0x4)  rtti 0x0040410c  vptr at +0x0  destructor 0x004671a8
class std::exception {
    // vtable at 0x00474e18 (2 slots)
    //   [ 0] 0x004671a8  std::exception::~exception
    //   [ 1] 0x00404158  std::exception::vf1
};
```

### std::ios_base

```cpp
// sizeof 36 (0x24)  rtti 0x00404bf8  vptr at +0x0  destructor 0x00463ca8
class std::ios_base {
    /* +0x010 */ std::locale m_10;
    // vtable at 0x004879b4 (1 slots)
    //   [ 0] 0x00463ca8  std::ios_base::~ios_base
};
```

### std::ios_base::failure

```cpp
// sizeof 24 (0x18)  rtti 0x00421a94  vptr at +0x0  destructor 0x00463a3c
class std::ios_base::failure : public std::exception {
    /* +0x000 */ // base subobject std::exception
    /* +0x008 */ std::string m_8;
    // vtable at 0x0047a49c (3 slots)
    //   [ 0] 0x00463a3c  std::ios_base::failure::~failure
    //   [ 1] 0x00463b18  std::ios_base::failure::vf1
    //   [ 2] 0x00421c58  std::ios_base::failure::vf2
};
```

### std::ios_base::Init

```cpp
// sizeof 8 (0x8)  rtti 0x00463d8c  no vptr  destructor 0x00463bd4
class std::ios_base::Init {
};
```

### std::length_error

```cpp
// sizeof 24 (0x18)  rtti 0x00402008  vptr at +0x0  destructor 0x00467380
class std::length_error : public std::logic_error {
    /* +0x000 */ // base subobject std::logic_error
    // vtable at 0x00474e40 (2 slots)
    //   [ 0] 0x00467380  std::length_error::~length_error
    //   [ 1] 0x00404100  std::logic_error::vf1
};
```

### std::locale

```cpp
// sizeof 4 (0x4)  rtti 0x00404e04  no vptr  destructor 0x00405004
class std::locale {
};
```

### std::locale::facet

```cpp
// sizeof 16 (0x10)  rtti 0x0041c234  vptr at +0x0  destructor 0x0041c2dc
class std::locale::facet : public __rwstd::facet_imp {
    /* +0x000 */ // base subobject __rwstd::facet_imp
    // vtable at 0x00478df4 (2 slots)
    //   [ 0] 0x0041c2dc  std::locale::facet::~facet
    //   [ 1] 0x0041c3b8  __rwstd::facet_imp::vf1
};
```

### std::logic_error

```cpp
// sizeof 24 (0x18)  rtti 0x00403f08  vptr at +0x0  destructor 0x00467224
class std::logic_error : public std::exception {
    /* +0x000 */ // base subobject std::exception
    /* +0x008 */ std::string m_8;
    // vtable at 0x00474e2c (2 slots)
    //   [ 0] 0x00467224  std::logic_error::~logic_error
    //   [ 1] 0x00404100  std::logic_error::vf1
};
```

### std::map<int,std::string,std::less<int>>

```cpp
// sizeof 56 (0x38)  rtti 0x0046549c  no vptr  destructor 0x00465750
class std::map<int,std::string,std::less<int>> {
    /* +0x000 */ __rwstd::__rb_tree<int,std::pair<const int,std::string>,__rwstd::__select1st<std::pair<const int,std::string>,int>,std::less<int>> m_0;
};
```

### std::map<std::string,long,std::less<std::string>>

```cpp
// sizeof 56 (0x38)  rtti 0x0040e2ac  no vptr  destructor 0x0041576c
class std::map<std::string,long,std::less<std::string>> {
    /* +0x000 */ __rwstd::__rb_tree<std::string,std::pair<const std::string,long>,__rwstd::__select1st< m_0;
};
```

### std::map<std::string,std::vector<long> *,std::less<std::string>,std::allocator<std::pair<const std::string,std::vector<long> *>>>

```cpp
// sizeof 56 (0x38)  rtti 0x0040def0  no vptr  destructor 0x004159e4
class std::map<std::string,std::vector<long> *,std::less<std::string>,std::allocator<std::pair<const std::string,std::vector<long> *>>> {
    /* +0x000 */ __rwstd::__rb_tree<std::string,std::pair<const std::string,std::vector<long,std::alloc m_0;
};
```

### std::mbstate_t

```cpp
// sizeof 4 (0x4)  rtti 0x004632c0  no vptr
class std::mbstate_t {
};
```

### std::multimap<std::string,long,WordListMapComparator>

```cpp
// sizeof 56 (0x38)  rtti 0x0040ddd0  no vptr  destructor 0x00415a64
class std::multimap<std::string,long,WordListMapComparator> {
    /* +0x000 */ __rwstd::__rb_tree<std::string,std::pair<const std::string,long>,__rwstd::__select1st< m_0;
};
```

### std::num_put<char,std::ostreambuf_iterator<char>>

```cpp
// sizeof 16 (0x10)  rtti 0x0046322c  vptr at +0x0  destructor 0x0045cabc
class std::num_put<char,std::ostreambuf_iterator<char>> : public std::locale::facet {
    /* +0x000 */ // base subobject std::locale::facet
    // vtable at 0x004875a8 (14 slots)
    //   [ 0] 0x0045cabc  std::num_put<char,std::ostreambuf_iterator<char>>::~num_put
    //   [ 1] 0x0041c3b8  __rwstd::facet_imp::vf1
    //   [ 2] 0x0046228c  std::num_put<char,std::ostreambuf_iterator<char>>::vf2
    //   [ 3] 0x004625f0  std::num_put<char,std::ostreambuf_iterator<char>>::vf3
    //   [ 4] 0x00462798  std::num_put<char,std::ostreambuf_iterator<char>>::vf4
    //   [ 5] 0x004624ac  std::num_put<char,std::ostreambuf_iterator<char>>::vf5
    //   [ 6] 0x00462580  std::num_put<char,std::ostreambuf_iterator<char>>::vf6
    //   [ 7] 0x00462444  std::num_put<char,std::ostreambuf_iterator<char>>::vf7
    //   [ 8] 0x00462658  std::num_put<char,std::ostreambuf_iterator<char>>::vf8
    //   [ 9] 0x00462800  std::num_put<char,std::ostreambuf_iterator<char>>::vf9
    //   [10] 0x00462518  std::num_put<char,std::ostreambuf_iterator<char>>::vf10
    //   [11] 0x00462730  std::num_put<char,std::ostreambuf_iterator<char>>::vf11
    //   [12] 0x00461e00  std::num_put<char,std::ostreambuf_iterator<char>>::vf12
    //   [13] 0x004626c4  std::num_put<char,std::ostreambuf_iterator<char>>::vf13
};
```

### std::out_of_range

```cpp
// sizeof 24 (0x18)  rtti 0x00402160  vptr at +0x0  destructor 0x004673e0
class std::out_of_range : public std::logic_error {
    /* +0x000 */ // base subobject std::logic_error
    // vtable at 0x00474e04 (2 slots)
    //   [ 0] 0x004673e0  std::out_of_range::~out_of_range
    //   [ 1] 0x00404100  std::logic_error::vf1
};
```

### std::pair<const int,std::string>

```cpp
// sizeof 24 (0x18)  rtti 0x004635d4  no vptr  destructor 0x0046382c
class std::pair<const int,std::string> {
    /* +0x008 */ std::string m_8;
};
```

### std::pair<const std::string,long>

```cpp
// sizeof 24 (0x18)  rtti 0x0040e12c  no vptr  destructor 0x00415894
class std::pair<const std::string,long> {
    /* +0x000 */ std::string m_0;
};
```

### std::pair<const std::string,std::vector<long> *>

```cpp
// sizeof 24 (0x18)  rtti 0x0040e1cc  no vptr  destructor 0x004157ec
class std::pair<const std::string,std::vector<long> *> {
    /* +0x000 */ std::string m_0;
};
```

### std::pair<std::string,long>

```cpp
// sizeof 24 (0x18)  rtti 0x0040e090  no vptr  destructor 0x0041593c
class std::pair<std::string,long> {
    /* +0x000 */ std::string m_0;
};
```

### std::runtime_error

```cpp
// sizeof 24 (0x18)  rtti 0x00466070  vptr at +0x0  destructor 0x00467440
class std::runtime_error : public std::exception {
    /* +0x000 */ // base subobject std::exception
    /* +0x008 */ std::string m_8;
    // vtable at 0x00488848 (2 slots)
    //   [ 0] 0x00467440  std::runtime_error::~runtime_error
    //   [ 1] 0x00466a00  std::runtime_error::vf1
};
```

### std::string

```cpp
// sizeof 16 (0x10)  rtti 0x004022b8  no vptr  destructor 0x0040473c
class std::string {
};
```

### std::type_info

```cpp
// sizeof 8 (0x8)  rtti 0x004685ec  vptr at +0x0  destructor 0x004682f0
class std::type_info {
    // vtable at 0x00488f30 (1 slots)
    //   [ 0] 0x004682f0  std::type_info::~type_info
};
```

### std::vector<long>

```cpp
// sizeof 32 (0x20)  rtti 0x0040dd6c  no vptr  destructor 0x00415b60
class std::vector<long> {
};
```

### std::vector<std::string>

```cpp
// sizeof 32 (0x20)  rtti 0x0040e404  no vptr  destructor 0x00415b28
class std::vector<std::string> {
};
```

### std::wstring

```cpp
// sizeof 16 (0x10)  rtti 0x0045a760  no vptr  destructor 0x0045a7ec
class std::wstring {
};
```

### TInstanceThunk

```cpp
// sizeof 10 (0xa)  rtti 0x0042eb30  no vptr
class TInstanceThunk {
};
```

### TThunkAllocator

```cpp
// sizeof 4 (0x4)  rtti 0x0042eac0  no vptr  destructor 0x0042eb0c
class TThunkAllocator {
};
```

### type_info_hash

```cpp
// sizeof 20 (0x14)  rtti 0x00468638  vptr at +0x0  destructor 0x00468690
class type_info_hash : public std::type_info {
    /* +0x000 */ // base subobject std::type_info
    // vtable at 0x00488f20 (1 slots)
    //   [ 0] 0x00468690  type_info_hash::~type_info_hash
};
```

## Response tables whose owning class was not resolved (4)

```
table at 0x0047f760
  message id 0 in the static table (filled at run time or WM_NULL) -> 0x0043cd98  EvRegisteredMsg_43cd98_43cd98
  WM_GETDLGCODE                                -> 0x0043d010  EvGetDlgCode_43d010
  EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)      -> 0x0043d390  BNClicked_43d390
table at 0x0047fdf8
  EV_CHILD_NOTIFY(id 4514932, code 4510180)    -> 0x0043f48c  Child4514932_Notify4510180_43f48c
  EV_CHILD_NOTIFY(id 4509768, code 4453474)    -> 0x0044cfcc  Child4509768_Notify4453474_44cfcc
  EV_CHILD_NOTIFY(id 4453411, code 4453432)    -> 0x0043f3f9  Child4453411_Notify4453432_43f3f9
  WM_CLOSE                                     -> 0x00440344  EvClose_440344
  WM_PAINT                                     -> 0x0043fbe8  EvPaint_43fbe8
  message 0x0019                               -> 0x0043fbf8  EvMsg_19_43fbf8
  WM_SETFONT                                   -> 0x0043fbc4  EvSetfont_43fbc4
  message 0x0400                               -> 0x0043fc58  EvMsg_400_43fc58
  message 0x0401                               -> 0x0043fc6c  EvMsg_401_43fc6c
  message 0x0402                               -> 0x0043fc88  EvMsg_402_43fc88
  EV_COMMAND(1)                                -> 0x004402e0  Cmd1_4402e0
  EV_COMMAND(2)                                -> 0x00440334  Cmd2_440334
table at 0x00481588
  message id 0 in the static table (filled at run time or WM_NULL) -> 0x004469d8  EvRegisteredMsg_4469d8_4469d8
  EV_COMMAND(24333)                            -> 0x00446b94  Cmd24333_446b94
  EV_COMMAND(24334)                            -> 0x00446ba4  Cmd24334_446ba4
  EV_COMMAND_ENABLE(24333)                     -> 0x00447dcc  CeCmd24333_447dcc
table at 0x00483d10
  message id 0 in the static table (filled at run time or WM_NULL) -> 0x00453210  EvRegisteredMsg_453210_453210
  WM_NCHITTEST                                 -> 0x004534c4  EvNCHitTest_4534c4
  WM_NCPAINT                                   -> 0x004536e8  EvNCPaint_4536e8
  WM_NCCALCSIZE                                -> 0x0045377c  EvNccalcsize_45377c
  WM_NCLBUTTONDOWN                             -> 0x004537fc  EvNclbuttondown_4537fc
  WM_MOUSEMOVE                                 -> 0x00453b48  EvMouseMove_453b48
  WM_LBUTTONUP                                 -> 0x00453d68  EvLButtonUp_453d68
  WM_NCACTIVATE                                -> 0x00453ea0  EvNcactivate_453ea0
  WM_SYSCOMMAND                                -> 0x00453fa8  EvSysCommand_453fa8
```

