# TEACON.exe — classes

Recovered from Borland C++ RTTI (type descriptors, vtables) and OWL response tables. Sizes, bases, destructors and vtable contents are read directly from tables in the binary.

Member lists are **partial**: RTTI records only members that need destruction (objects with destructors), with their offsets. Virtual slots are named `vfN` unless a better name was established; response-table handlers are named from the message or command id.

These are descriptions, not compilable class definitions — in the code each class name is a namespace holding its functions.

## Application classes (10)

### Common

```cpp
// sizeof 16 (0x10)  rtti 0x004046f0  no vptr  destructor 0x00414ddc
class Common {
    /* +0x000 */ std::string m_0;
};
```

### InputEngine

```cpp
// sizeof 18444 (0x480c)  rtti 0x00404798  no vptr  destructor 0x00409b24
class InputEngine {
};
```

### MatchEngine

```cpp
// sizeof 4432 (0x1150)  rtti 0x004067bc  no vptr  destructor 0x0040784c
class MatchEngine {
    /* +0x000 */ Pattern m_0;
    /* +0x1008 */ std::string m_1008;
};
```

### MatchEngineSet

```cpp
// sizeof 56 (0x38)  rtti 0x004047e0  no vptr  destructor 0x00411f58
class MatchEngineSet {
    /* +0x000 */ std::vector<MatchEngine *> m_0;
    /* +0x020 */ std::string m_20;
};
```

### Pattern

```cpp
// sizeof 4104 (0x1008)  rtti 0x00407914  no vptr  destructor 0x0040db54
class Pattern {
    /* +0x008 */ string[256] m_8;
};
```

### Persist

```cpp
// sizeof 8 (0x8)  rtti 0x0040473c  no vptr  destructor 0x00411a20
class Persist {
};
```

### TEAViewProfileWindows

```cpp
// sizeof 496 (0x1f0)  rtti 0x00404684  no vptr  destructor 0x00411148
class TEAViewProfileWindows {
    /* +0x000 */ std::string m_0;
    /* +0x010 */ std::string m_10;
    /* +0x1e0 */ std::string m_1e0;
};
```

### TSDictionaryList

```cpp
// sizeof 40 (0x28)  rtti 0x00407a28  no vptr  destructor 0x00405280
class TSDictionaryList {
    /* +0x008 */ std::vector<TSDictionaryList::Dictionary *> m_8;
};
```

### TSDictionaryList::Dictionary

```cpp
// sizeof 12200 (0x2fa8)  rtti 0x00407960  vptr at +0x0  destructor 0x00406950
class TSDictionaryList::Dictionary {
    /* +0x2f94 */ std::string m_2f94;
    // vtable at 0x0042bbb8 (11 slots)
    //   [ 0] 0x00406950  TSDictionaryList::Dictionary::~Dictionary
    //   [ 1] 0x00406a2c  TSDictionaryList::Dictionary::Load
    //   [ 2] 0x0040711c  TSDictionaryList::Dictionary::Unload
    //   [ 3] 0x004071a0  TSDictionaryList::Dictionary::EnsureCurrent
    //   [ 4] 0x00407200  TSDictionaryList::Dictionary::GetPathData
    //   [ 5] 0x00407210  TSDictionaryList::Dictionary::GetFileTitle
    //   [ 6] 0x00407254  TSDictionaryList::Dictionary::GetFileName
    //   [ 7] 0x004072cc  TSDictionaryList::Dictionary::GetSummaryText
    //   [ 8] 0x00407528  TSDictionaryList::Dictionary::GetFileDateText
    //   [ 9] 0x00407768  TSDictionaryList::Dictionary::GetDescription
    //   [10] 0x00407264  TSDictionaryList::Dictionary::GetCounts
};
```

### VariableValues

```cpp
// sizeof 11 (0xb)  rtti 0x0040eba0  no vptr  destructor 0x0040ed84
class VariableValues {
};
```

## Library and template classes (31)

### __rwstd::__string_ref_rep<std::allocator<char>>

```cpp
// sizeof 12 (0xc)  rtti 0x0041c6cc  no vptr
class __rwstd::__string_ref_rep<std::allocator<char>> {
};
```

### __rwstd::__string_ref<char>

```cpp
// sizeof 12 (0xc)  rtti 0x0041c4a0  no vptr
class __rwstd::__string_ref<char> : public __rwstd::__string_ref_rep<std::allocator<char>> {
    /* +0x000 */ // base subobject __rwstd::__string_ref_rep<std::allocator<char>>
};
```

### __rwstd::facet_imp

```cpp
// sizeof 16 (0x10)  rtti 0x0041c1e4  vptr at +0x0  destructor 0x0041c648
class __rwstd::facet_imp : public __rwstd::ref_counted {
    /* +0x000 */ // base subobject __rwstd::ref_counted
    // vtable at 0x00430a78 (3 slots)
    //   [ 0] 0x0041c648  __rwstd::facet_imp::~facet_imp
    //   [ 1] 0x0041c68c  __rwstd::facet_imp::vf1
    //   [ 2] 0x0041c3ec  __rwstd::facet_imp::vf2
};
```

### __rwstd::locale_imp

```cpp
// sizeof 56 (0x38)  rtti 0x0041e888  vptr at +0x0  destructor 0x0041d9d0
class __rwstd::locale_imp : public __rwstd::ref_counted {
    /* +0x000 */ // base subobject __rwstd::ref_counted
    /* +0x008 */ __rwstd::locale_vector<std::string> m_8;
    /* +0x010 */ __rwstd::locale_vector<__rwstd::facet_imp *> m_10;
    /* +0x020 */ std::string m_20;
    // vtable at 0x004318e4 (1 slots)
    //   [ 0] 0x0041d9d0  __rwstd::locale_imp::~locale_imp
};
```

### __rwstd::locale_vector<__rwstd::facet_imp *>

```cpp
// sizeof 8 (0x8)  rtti 0x0041c5dc  no vptr  destructor 0x00416b88
class __rwstd::locale_vector<__rwstd::facet_imp *> {
};
```

### __rwstd::locale_vector<std::string>

```cpp
// sizeof 8 (0x8)  rtti 0x0041c540  no vptr  destructor 0x004177fc
class __rwstd::locale_vector<std::string> {
};
```

### __rwstd::ref_counted

```cpp
// sizeof 8 (0x8)  rtti 0x00409a08  vptr at +0x0  destructor 0x0041d870
class __rwstd::ref_counted {
    // vtable at 0x00430a68 (1 slots)
    //   [ 0] 0x0041d870  __rwstd::ref_counted::~ref_counted
};
```

### __rwstd::use_Clib_locale

```cpp
// sizeof 8 (0x8)  rtti 0x0041be78  no vptr  destructor 0x0041dd14
class __rwstd::use_Clib_locale {
};
```

### std::bad_alloc

```cpp
// sizeof 4 (0x4)  rtti 0x00404c94  vptr at +0x0  destructor 0x0041eaa4
class std::bad_alloc : public std::exception {
    /* +0x000 */ // base subobject std::exception
    // vtable at 0x0042b39c (2 slots)
    //   [ 0] 0x0041eaa4  std::bad_alloc::~bad_alloc
    //   [ 1] 0x00404fa8  std::bad_alloc::vf1
};
```

### std::basic_filebuf<char>

```cpp
// sizeof 68 (0x44)  rtti 0x004097b8  vptr at +0x0  destructor 0x00417ffc
class std::basic_filebuf<char> : public std::basic_streambuf<char> {
    /* +0x000 */ // base subobject std::basic_streambuf<char>
    // vtable at 0x00430b6c (13 slots)
    //   [ 0] 0x00417ffc  std::basic_filebuf<char>::~basic_filebuf
    //   [ 1] 0x0041be60  std::basic_streambuf<char>::vf1
    //   [ 2] 0x0041aa6c  std::basic_filebuf<char>::vf2
    //   [ 3] 0x0041b5a0  std::basic_filebuf<char>::vf3
    //   [ 4] 0x0041bc28  std::basic_filebuf<char>::vf4
    //   [ 5] 0x0041a3e8  std::basic_filebuf<char>::vf5
    //   [ 6] 0x0041a700  std::basic_streambuf<char>::vf6
    //   [ 7] 0x00419e30  std::basic_filebuf<char>::vf7
    //   [ 8] 0x0041a398  std::basic_streambuf<char>::vf8
    //   [ 9] 0x004192a8  std::basic_filebuf<char>::vf9
    //   [10] 0x00419928  std::basic_filebuf<char>::vf10
    //   [11] 0x0041a43c  std::basic_filebuf<char>::vf11
    //   [12] 0x00419a88  std::basic_filebuf<char>::vf12
};
```

### std::basic_ios<char>

```cpp
// sizeof 56 (0x38)  rtti 0x00409740  vptr at +0x0  destructor 0x0041886c
class std::basic_ios<char> : public std::ios_base {
    /* +0x000 */ // base subobject std::ios_base
    // vtable at 0x00430ae4 (1 slots)
    //   [ 0] 0x0041886c  std::basic_ios<char>::~basic_ios
};
```

### std::basic_istream<char>

```cpp
// sizeof 68 (0x44)  rtti 0x004096c4  vptr at +0x4  destructor 0x004187f4
class std::basic_istream<char> : public virtual std::basic_ios<char> {
    // vtable at 0x00430b10 (1 slots)
    //   [ 0] 0x004187f4  std::basic_istream<char>::~basic_istream
};
```

### std::basic_istream<char>::sentry

```cpp
// sizeof 8 (0x8)  rtti 0x0041a5ec  no vptr  destructor 0x00418d8c
class std::basic_istream<char>::sentry {
};
```

### std::basic_ostream<char>

```cpp
// sizeof 64 (0x40)  rtti 0x0041c370  vptr at +0x4  destructor 0x0041877c
class std::basic_ostream<char> : public virtual std::basic_ios<char> {
    // vtable at 0x00430af4 (1 slots)
    //   [ 0] 0x0041877c  std::basic_ostream<char>::~basic_ostream
};
```

### std::basic_streambuf<char>

```cpp
// sizeof 36 (0x24)  rtti 0x00409834  vptr at +0x0  destructor 0x0041820c
class std::basic_streambuf<char> {
    /* +0x020 */ std::locale m_20;
    // vtable at 0x00430b2c (13 slots)
    //   [ 0] 0x0041820c  std::basic_streambuf<char>::~basic_streambuf
    //   [ 1] 0x0041be60  std::basic_streambuf<char>::vf1
    //   [ 2] 0x0041ab60  std::basic_streambuf<char>::vf2
    //   [ 3] 0x0041be30  std::basic_streambuf<char>::vf3
    //   [ 4] 0x0041be48  std::basic_streambuf<char>::vf4
    //   [ 5] 0x0041a670  std::basic_streambuf<char>::vf5
    //   [ 6] 0x0041a700  std::basic_streambuf<char>::vf6
    //   [ 7] 0x0041a3dc  std::basic_streambuf<char>::vf7
    //   [ 8] 0x0041a398  std::basic_streambuf<char>::vf8
    //   [ 9] 0x0041a378  std::basic_streambuf<char>::vf9
    //   [10] 0x0041a384  std::basic_streambuf<char>::vf10
    //   [11] 0x0041a7a0  std::basic_streambuf<char>::vf11
    //   [12] 0x0041a390  std::basic_streambuf<char>::vf12
};
```

### std::exception

```cpp
// sizeof 4 (0x4)  rtti 0x00404ed8  vptr at +0x0  destructor 0x0041ea84
class std::exception {
    // vtable at 0x0042b388 (2 slots)
    //   [ 0] 0x0041ea84  std::exception::~exception
    //   [ 1] 0x00404f9c  std::exception::vf1
};
```

### std::ios_base

```cpp
// sizeof 36 (0x24)  rtti 0x004098ac  vptr at +0x0  destructor 0x0041caf4
class std::ios_base {
    /* +0x010 */ std::locale m_10;
    // vtable at 0x00430d2c (1 slots)
    //   [ 0] 0x0041caf4  std::ios_base::~ios_base
};
```

### std::ios_base::failure

```cpp
// sizeof 24 (0x18)  rtti 0x00418670  vptr at +0x0  destructor 0x0041c888
class std::ios_base::failure : public std::exception {
    /* +0x000 */ // base subobject std::exception
    /* +0x008 */ std::string m_8;
    // vtable at 0x00430abc (2 slots)
    //   [ 0] 0x0041c888  std::ios_base::failure::~failure
    //   [ 1] 0x0041c964  std::ios_base::failure::vf1
};
```

### std::ios_base::Init

```cpp
// sizeof 8 (0x8)  rtti 0x0041cbd8  no vptr  destructor 0x0041ca20
class std::ios_base::Init {
};
```

### std::length_error

```cpp
// sizeof 24 (0x18)  rtti 0x00405ef4  vptr at +0x0  destructor 0x0041ebdc
class std::length_error : public std::logic_error {
    /* +0x000 */ // base subobject std::logic_error
    // vtable at 0x0042bc18 (2 slots)
    //   [ 0] 0x0041ebdc  std::length_error::~length_error
    //   [ 1] 0x00407a80  std::logic_error::vf1
};
```

### std::locale

```cpp
// sizeof 4 (0x4)  rtti 0x00409900  no vptr  destructor 0x00409948
class std::locale {
};
```

### std::locale::facet

```cpp
// sizeof 16 (0x10)  rtti 0x0041c240  vptr at +0x0  destructor 0x00417d2c
class std::locale::facet : public __rwstd::facet_imp {
    /* +0x000 */ // base subobject __rwstd::facet_imp
    // vtable at 0x00430ad0 (2 slots)
    //   [ 0] 0x00417d2c  std::locale::facet::~facet
    //   [ 1] 0x0041c68c  __rwstd::facet_imp::vf1
};
```

### std::logic_error

```cpp
// sizeof 24 (0x18)  rtti 0x004079c4  vptr at +0x0  destructor 0x0041eb00
class std::logic_error : public std::exception {
    /* +0x000 */ // base subobject std::exception
    /* +0x008 */ std::string m_8;
    // vtable at 0x0042bc04 (2 slots)
    //   [ 0] 0x0041eb00  std::logic_error::~logic_error
    //   [ 1] 0x00407a80  std::logic_error::vf1
};
```

### std::mbstate_t

```cpp
// sizeof 4 (0x4)  rtti 0x0041c468  no vptr
class std::mbstate_t {
};
```

### std::out_of_range

```cpp
// sizeof 24 (0x18)  rtti 0x0040604c  vptr at +0x0  destructor 0x0041ec3c
class std::out_of_range : public std::logic_error {
    /* +0x000 */ // base subobject std::logic_error
    // vtable at 0x0042bbf0 (2 slots)
    //   [ 0] 0x0041ec3c  std::out_of_range::~out_of_range
    //   [ 1] 0x00407a80  std::logic_error::vf1
};
```

### std::runtime_error

```cpp
// sizeof 24 (0x18)  rtti 0x0041e018  vptr at +0x0  destructor 0x0041ec9c
class std::runtime_error : public std::exception {
    /* +0x000 */ // base subobject std::exception
    /* +0x008 */ std::string m_8;
    // vtable at 0x004318d0 (2 slots)
    //   [ 0] 0x0041ec9c  std::runtime_error::~runtime_error
    //   [ 1] 0x0041e8fc  std::runtime_error::vf1
};
```

### std::string

```cpp
// sizeof 16 (0x10)  rtti 0x00404600  no vptr  destructor 0x00404fb4
class std::string {
};
```

### std::vector<MatchEngine *>

```cpp
// sizeof 32 (0x20)  rtti 0x00404f24  no vptr  destructor 0x0040507c
class std::vector<MatchEngine *> {
};
```

### std::vector<std::string>

```cpp
// sizeof 32 (0x20)  rtti 0x00404518  no vptr  destructor 0x00405044
class std::vector<std::string> {
};
```

### std::vector<TSDictionaryList::Dictionary *>

```cpp
// sizeof 32 (0x20)  rtti 0x004077b4  no vptr  destructor 0x00407a8c
class std::vector<TSDictionaryList::Dictionary *> {
};
```

### std::wstring

```cpp
// sizeof 16 (0x10)  rtti 0x0041785c  no vptr  destructor 0x004178e8
class std::wstring {
};
```

