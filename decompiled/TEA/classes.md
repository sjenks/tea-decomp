# TEA.exe — classes

Recovered from Borland C++ RTTI (type descriptors, vtables) and OWL response tables. Sizes, bases, destructors and vtable contents are read directly from tables in the binary.

Member lists are **partial**: RTTI records only members that need destruction (objects with destructors), with their offsets. Virtual slots are named `vfN` unless a better name was established; response-table handlers are named from the message or command id.

These are descriptions, not compilable class definitions — in the code each class name is a namespace holding its functions.

## Application classes (83)

### Common

```cpp
// sizeof 16 (0x10)  rtti 0x00463bb0  no vptr  destructor 0x00485ee0
class Common {
    /* +0x000 */ std::string m_0;
};
```

### Definition

```cpp
// sizeof 128 (0x80)  rtti 0x00409fdc  no vptr  destructor 0x00410f40
class Definition {
    /* +0x000 */ std::string m_0;
    /* +0x018 */ std::vector<std::string> m_18;
    /* +0x038 */ std::vector<std::string> m_38;
    /* +0x058 */ std::string m_58;
    /* +0x068 */ std::string m_68;
};
```

### DefinitionRichEdit

```cpp
// sizeof 264 (0x108)  rtti 0x00473718  vptr at +0xc  destructor 0x0046a1a4
class DefinitionRichEdit : public PVWRichEdit, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject PVWRichEdit
    // vtable at 0x004ff1d0 (33 slots)
    //   [ 0] 0x0046a1a4  DefinitionRichEdit::~DefinitionRichEdit
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x0046a010  DefinitionRichEdit::Find
    //   [ 9] 0x0041add0  PVWRichEdit::vf9
    //   [10] 0x004697b4  PVWRichEdit::Transfer
    //   [11] 0x004695dc  PVWRichEdit::GetClassName
    //   [12] 0x0046928c  OWL::TRichEdit::GetSubText
    //   [13] 0x004691c4  OWL::TRichEdit::GetSelection
    //   [14] 0x00422018  OWL::TEdit::vf14
    //   [15] 0x0046921c  OWL::TRichEdit::SetSelection
    //   [16] 0x004692dc  OWL::TRichEdit::vf16
    //   [17] 0x00469384  OWL::TRichEdit::Paste
    //   [18] 0x00422084  OWL::TEdit::CharFromPos
    //   [19] 0x004220b0  OWL::TEdit::PosFromChar
    //   [20] 0x0041aa24  PVWRichEdit::SetupWindow
    //   [21] 0x0041aa7c  PVWRichEdit::CanClose
    //   [22] 0x004b8b90  OWL::TEditFile::vf22
    //   [23] 0x004b7eac  OWL::TEditFile::vf23
    //   [24] 0x004b815c  OWL::TEditFile::vf24
    //   [25] 0x00469834  OWL::TRichEdit::ReadFromFile
    //   [26] 0x004b7ef8  OWL::TEditFile::vf26
    //   [27] 0x004b83b4  OWL::TEditFile::vf27
    //   [28] 0x004b8634  OWL::TEditFile::vf28
    //   [29] 0x00469954  OWL::TRichEdit::WriteToFile
    //   [30] 0x0041ad44  PVWRichEdit::vf30
    //   [31] 0x0046a27c  DefinitionRichEdit::vf31
    //   [32] 0x0041aa84  PVWRichEdit::SetDocTitle
    // response table at 0x004fd440 (1 entries)
    //   WM_KEYDOWN                                   -> 0x0046a360  DefinitionRichEdit::EvKeyDown
};
```

### DefinitionViewFrame

```cpp
// sizeof 384 (0x180)  rtti 0x0045da64  vptr at +0x35  destructor 0x00472edc
class DefinitionViewFrame : public OWL::TDecoratedFrame, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow, public virtual OWL::TFrameWindow {
    /* +0x000 */ // base subobject OWL::TDecoratedFrame
    /* +0x088 */ std::string m_88;
    // vtable at 0x004feef0 (16 slots)
    //   [ 0] 0x00472edc  DefinitionViewFrame::~DefinitionViewFrame
    //   [ 1] 0x004afa14  OWL::TDecoratedFrame::vf1
    //   [ 2] 0x004aec4c  OWL::TDecoratedFrame::vf2
    //   [ 3] 0x004aebdc  OWL::TDecoratedFrame::PreProcessMsg
    //   [ 4] 0x004ae9f8  OWL::TDecoratedFrame::TFrameWindow_vf7
    //   [ 5] 0x004afadc  OWL::TDecoratedFrame::vf5
    //   [ 6] 0x004afbc4  OWL::TDecoratedFrame::TFrameWindow_vf4
    //   [ 7] 0x004afc04  OWL::TDecoratedFrame::TFrameWindow_vf5
    //   [ 8] 0x004afb58  OWL::TDecoratedFrame::vf8
    //   [ 9] 0x004730e4  DefinitionViewFrame::SetupWindow
    //   [10] 0x004ae9c4  OWL::TDecoratedFrame::CleanupWindow
    //   [11] 0x004aeb9c  OWL::TDecoratedFrame::RemoveChild
    //   [12] 0x004aefd0  OWL::TDecoratedFrame::EvCommand
    //   [13] 0x004af148  OWL::TDecoratedFrame::EvCommandEnable
    //   [14] 0x004ae1b4  OWL::TDecoratedFrame::Find
    //   [15] 0x00473138  DefinitionViewFrame::Destroy
};
```

### DefinitionViewWindows

```cpp
// sizeof 696 (0x2b8)  rtti 0x0046a2bc  vptr at +0xc  destructor 0x0046a6a4
class DefinitionViewWindows : public PropertiesViewWindows, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject PropertiesViewWindows
    /* +0x068 */ std::vector<std::string> m_68;
    /* +0x090 */ std::vector<Definition> m_90;
    /* +0x0b8 */ OWL::TStatic m_b8;
    /* +0x166 */ OWL::TTreeWindow m_166;
    // vtable at 0x004ff050 (51 slots)
    //   [ 0] 0x0046a6a4  DefinitionViewWindows::~DefinitionViewWindows
    //   [ 1] 0x004b0624  OWL::TDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x004b0870  OWL::TDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x004b094c  OWL::TDialog::DoExecute
    //   [ 7] 0x0046c4e4  DefinitionViewWindows::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x0046bc90  DefinitionViewWindows::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x0046bac4  DefinitionViewWindows::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x0046a3c4  DefinitionViewWindows::Find
    //   [15] 0x0041413c  PropertiesViewWindows::SetupTooltips
    //   [16] 0x004141fc  PropertiesViewWindows::DestroyTooltips
    //   [17] 0x00414264  PropertiesViewWindows::IsTooltipActive
    //   [18] 0x00415154  PropertiesViewWindows::EnableControls
    //   [19] 0x00415174  PropertiesViewWindows::OnButton
    //   [20] 0x0041517c  PropertiesViewWindows::OnStaticClicked
    //   [21] 0x00415184  PropertiesViewWindows::OnEditKillFocus
    //   [22] 0x0041518c  PropertiesViewWindows::OnEditChange
    //   [23] 0x0046c210  DefinitionViewWindows::OnDoubleClick
    //   [24] 0x0041519c  PropertiesViewWindows::OnUpDown
    //   [25] 0x004151a4  PropertiesViewWindows::OnNotify25
    //   [26] 0x004151ac  PropertiesViewWindows::OnNotify26
    //   [27] 0x004151b4  PropertiesViewWindows::OnColourChanged
    //   [28] 0x004151bc  PropertiesViewWindows::OnFontChanged
    //   [29] 0x004151c4  PropertiesViewWindows::OnComboChange
    //   [30] 0x004151cc  PropertiesViewWindows::OnNotify30
    //   [31] 0x004151d4  PropertiesViewWindows::OnMouseOverControl
    //   [32] 0x004151dc  PropertiesViewWindows::OnTextClicked
    //   [33] 0x00415208  PropertiesViewWindows::IsResizable
    //   [34] 0x00415210  PropertiesViewWindows::GetSectionName
    //   [35] 0x00415254  PropertiesViewWindows::OnNotify35
    //   [36] 0x0041525c  PropertiesViewWindows::OnSelectionCommitted
    //   [37] 0x00415200  PropertiesViewWindows::OnPathListChanged
    //   [38] 0x00416964  PropertiesViewWindows::EvNotify
    //   [39] 0x00416320  PropertiesViewWindows::EvCtlColor
    //   [40] 0x0041651c  PropertiesViewWindows::EvSize
    //   [41] 0x00415328  PropertiesViewWindows::OnPropertyChanged
    //   [42] 0x00415344  PropertiesViewWindows::LoadResourceString
    //   [43] 0x004153a8  PropertiesViewWindows::ShowControlTip
    //   [44] 0x0046c534  DefinitionViewWindows::GetLookupWord
    //   [45] 0x00415be8  PropertiesViewWindows::ShowHelp
    //   [46] 0x00415e7c  PropertiesViewWindows::GetControlTipText
    //   [47] 0x0046bcac  DefinitionViewWindows::SetupMoveableControls
    //   [48] 0x0046bdf0  DefinitionViewWindows::OnSplitterButtonDown
    //   [49] 0x0046be30  DefinitionViewWindows::OnSplitterDrag
    //   [50] 0x0046bff4  DefinitionViewWindows::OnSplitterButtonUp
    // response table at 0x004fd4b8 (31 entries)
    //   WM_HELP                                      -> 0x0046e71c  DefinitionViewWindows::EvHelp
    //   WM_LBUTTONDOWN                               -> 0x00450b3c  TEAViewWindows::EvLButtonDown
    //   WM_MOUSEMOVE                                 -> 0x00450b4c  TEAViewWindows::EvMouseMove
    //   WM_LBUTTONUP                                 -> 0x00450b5c  TEAViewWindows::EvLButtonUp
    //   EV_CHILD_NOTIFY(id 13860, code -402)         -> 0x0046c574  DefinitionViewWindows::Child13860_Notifym402
    //   EV_CHILD_NOTIFY(id 13860, code -406)         -> 0x0046c6b4  DefinitionViewWindows::Child13860_Notifym406
    //   EV_COMMAND_ENABLE(7500)                      -> 0x0046a8f4  DefinitionViewWindows::CeShared_46a8f4   // &Edit > &Copy	Ctrl+C | &Copy	Ctrl+C | &Copy	Ctrl+C | accel ^C
    //   EV_COMMAND_ENABLE(12650)                     -> 0x0046a8f4  DefinitionViewWindows::CeShared_46a8f4   // &Go To > &Back	Alt+Left Arrow | accel ALT+VK_LEFT
    //   EV_COMMAND_ENABLE(12660)                     -> 0x0046a8f4  DefinitionViewWindows::CeShared_46a8f4   // &Go To > &Forward	Alt+Right Arrow | accel ALT+VK_RIGHT
    //   EV_COMMAND_ENABLE(12740)                     -> 0x0046a8f4  DefinitionViewWindows::CeShared_46a8f4   // &Go To > &Previous Result	Alt+Up Arrow | accel ALT+VK_UP
    //   EV_COMMAND_ENABLE(12730)                     -> 0x0046a8f4  DefinitionViewWindows::CeShared_46a8f4   // &Go To > &Next Result	Alt+Down Arrow | accel ALT+VK_DOWN
    //   EV_COMMAND(7500)                             -> 0x0046a924  DefinitionViewWindows::CmShared_46a924   // &Edit > &Copy	Ctrl+C | &Copy	Ctrl+C | &Copy	Ctrl+C | accel ^C
    //   EV_COMMAND(7510)                             -> 0x0046a924  DefinitionViewWindows::CmShared_46a924   // &Edit > &Select All	Ctrl+A | &Select All	Ctrl+A | &Select All	Ctrl+A | accel ^A
    //   EV_COMMAND(7490)                             -> 0x0046a924  DefinitionViewWindows::CmShared_46a924   // &Edit > &Lookup...	Ctrl+Enter | &Lookup...	Ctrl+Enter | &Lookup *	Ctrl+Enter | accel CONTROL+VK_RETURN | accel CONTROL+VK_RETURN
    //   EV_COMMAND(12640)                            -> 0x0046a924  DefinitionViewWindows::CmShared_46a924   // &Edit > Lookup in &New Window...	Shift+Ctrl+Enter | Lookup in &New Window...	Shift+Ctrl+Enter | Lookup * in &New Window...	Shift+Ctrl+Enter | accel CONTROL+SHIFT+VK_RETURN | accel CONTROL+SHIFT+VK_RETURN
    //   EV_COMMAND(12650)                            -> 0x0046a924  DefinitionViewWindows::CmShared_46a924   // &Go To > &Back	Alt+Left Arrow | accel ALT+VK_LEFT
    //   EV_COMMAND(12660)                            -> 0x0046a924  DefinitionViewWindows::CmShared_46a924   // &Go To > &Forward	Alt+Right Arrow | accel ALT+VK_RIGHT
    //   EV_COMMAND(12740)                            -> 0x0046a924  DefinitionViewWindows::CmShared_46a924   // &Go To > &Previous Result	Alt+Up Arrow | accel ALT+VK_UP
    //   EV_COMMAND(12730)                            -> 0x0046a924  DefinitionViewWindows::CmShared_46a924   // &Go To > &Next Result	Alt+Down Arrow | accel ALT+VK_DOWN
    //   EV_COMMAND(13900)                            -> 0x0046a924  DefinitionViewWindows::CmShared_46a924   // &Go To > &Previous Definition	Shift+Ctrl+Tab | accel CONTROL+SHIFT+VK_TAB
    //   EV_COMMAND(13890)                            -> 0x0046a924  DefinitionViewWindows::CmShared_46a924   // &Go To > &Next Definition	Ctrl+Tab | accel CONTROL+VK_TAB
    //   EV_COMMAND(12670)                            -> 0x0046a924  DefinitionViewWindows::CmShared_46a924
    //   EV_COMMAND(12671)                            -> 0x0046a924  DefinitionViewWindows::CmShared_46a924
    //   EV_COMMAND(12672)                            -> 0x0046a924  DefinitionViewWindows::CmShared_46a924
    //   EV_COMMAND(12673)                            -> 0x0046a924  DefinitionViewWindows::CmShared_46a924
    //   EV_COMMAND(12674)                            -> 0x0046a924  DefinitionViewWindows::CmShared_46a924
    //   EV_COMMAND(12675)                            -> 0x0046a924  DefinitionViewWindows::CmShared_46a924
    //   EV_COMMAND(12676)                            -> 0x0046a924  DefinitionViewWindows::CmShared_46a924
    //   EV_COMMAND(12677)                            -> 0x0046a924  DefinitionViewWindows::CmShared_46a924
    //   EV_COMMAND(12678)                            -> 0x0046a924  DefinitionViewWindows::CmShared_46a924
    //   EV_COMMAND(12679)                            -> 0x0046a924  DefinitionViewWindows::CmShared_46a924
};
```

### DictionaryListViewWindows

```cpp
// sizeof 2144 (0x860)  rtti 0x00405c90  vptr at +0xc  destructor 0x004774f0
class DictionaryListViewWindows : public PropertiesViewWindows, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject PropertiesViewWindows
    /* +0x068 */ std::string m_68;
    /* +0x078 */ std::string m_78;
    /* +0x088 */ PVWPathList m_88;
    /* +0x648 */ PVWPushButton m_648;
    /* +0x710 */ OWL::TButton m_710;
    // vtable at 0x0050067c (48 slots)
    //   [ 0] 0x004774f0  DictionaryListViewWindows::~DictionaryListViewWindows
    //   [ 1] 0x004b0624  OWL::TDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x004b0870  OWL::TDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x004b094c  OWL::TDialog::DoExecute
    //   [ 7] 0x004167d8  PropertiesViewWindows::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x00477a98  DictionaryListViewWindows::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x00477930  DictionaryListViewWindows::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x004765a0  DictionaryListViewWindows::Find
    //   [15] 0x0041413c  PropertiesViewWindows::SetupTooltips
    //   [16] 0x004141fc  PropertiesViewWindows::DestroyTooltips
    //   [17] 0x00414264  PropertiesViewWindows::IsTooltipActive
    //   [18] 0x00415154  PropertiesViewWindows::EnableControls
    //   [19] 0x00477744  DictionaryListViewWindows::OnButton
    //   [20] 0x0041517c  PropertiesViewWindows::OnStaticClicked
    //   [21] 0x00415184  PropertiesViewWindows::OnEditKillFocus
    //   [22] 0x004777a8  DictionaryListViewWindows::OnEditChange
    //   [23] 0x00415194  PropertiesViewWindows::OnDoubleClick
    //   [24] 0x0041519c  PropertiesViewWindows::OnUpDown
    //   [25] 0x004151a4  PropertiesViewWindows::OnNotify25
    //   [26] 0x004151ac  PropertiesViewWindows::OnNotify26
    //   [27] 0x004151b4  PropertiesViewWindows::OnColourChanged
    //   [28] 0x004151bc  PropertiesViewWindows::OnFontChanged
    //   [29] 0x004151c4  PropertiesViewWindows::OnComboChange
    //   [30] 0x004151cc  PropertiesViewWindows::OnNotify30
    //   [31] 0x004151d4  PropertiesViewWindows::OnMouseOverControl
    //   [32] 0x004151dc  PropertiesViewWindows::OnTextClicked
    //   [33] 0x00415208  PropertiesViewWindows::IsResizable
    //   [34] 0x00415210  PropertiesViewWindows::GetSectionName
    //   [35] 0x00415254  PropertiesViewWindows::OnNotify35
    //   [36] 0x0041525c  PropertiesViewWindows::OnSelectionCommitted
    //   [37] 0x004777dc  DictionaryListViewWindows::OnPathListChanged
    //   [38] 0x00416964  PropertiesViewWindows::EvNotify
    //   [39] 0x00416320  PropertiesViewWindows::EvCtlColor
    //   [40] 0x0041651c  PropertiesViewWindows::EvSize
    //   [41] 0x00415328  PropertiesViewWindows::OnPropertyChanged
    //   [42] 0x00415344  PropertiesViewWindows::LoadResourceString
    //   [43] 0x00477818  DictionaryListViewWindows::ShowControlTip
    //   [44] 0x00415e18  PropertiesViewWindows::GetLookupWord
    //   [45] 0x00415be8  PropertiesViewWindows::ShowHelp
    //   [46] 0x00415e7c  PropertiesViewWindows::GetControlTipText
    //   [47] 0x00417490  PropertiesViewWindows::SetupMoveableControls
    // response table at 0x00500270 (9 entries)
    //   EV_CHILD_NOTIFY(id 7830, code 2)             -> 0x00477b04  DictionaryListViewWindows::Child7830_Notify2
    //   EV_CHILD_NOTIFY(id 7830, code 1)             -> 0x00477ae8  DictionaryListViewWindows::Child7830_Notify1
    //   EV_CHILD_NOTIFY(id 7840, code 2)             -> 0x00477b3c  DictionaryListViewWindows::Child7840_Notify2
    //   EV_CHILD_NOTIFY(id 7840, code 1)             -> 0x00477b20  DictionaryListViewWindows::Child7840_Notify1
    //   EV_COMMAND(7870)                             -> 0x00477acc  DictionaryListViewWindows::CmShared_477acc
    //   EV_COMMAND(7880)                             -> 0x00477acc  DictionaryListViewWindows::CmShared_477acc
    //   EV_COMMAND(7890)                             -> 0x00477acc  DictionaryListViewWindows::CmShared_477acc
    //   EV_COMMAND(7900)                             -> 0x00477acc  DictionaryListViewWindows::CmShared_477acc
    //   EV_COMMAND(7910)                             -> 0x00477acc  DictionaryListViewWindows::CmShared_477acc
};
```

### DictionaryMaintainer

```cpp
// sizeof 4 (0x4)  rtti 0x0043cd78  vptr at +0x0  destructor 0x0043fdec
class DictionaryMaintainer {
    // vtable at 0x004f7330 (5 slots)
    //   [ 0] 0x0043fdec  DictionaryMaintainer::~DictionaryMaintainer
    //   [ 1] 0x004e6028  __vstub_4e6028
    //   [ 2] 0x004e6028  __vstub_4e6028
    //   [ 3] 0x0044d464  DictionaryMaintainer::vf3
    //   [ 4] 0x0044d46c  DictionaryMaintainer::vf4
};
```

### ExternalLookupViewWindows

```cpp
// sizeof 824 (0x338)  rtti 0x00465794  vptr at +0xc  destructor 0x00475d20
class ExternalLookupViewWindows : public PropertiesViewWindows, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject PropertiesViewWindows
    /* +0x060 */ OWL::TStatic m_60;
    /* +0x10e */ OWL::TButton m_10e;
    /* +0x1c0 */ PVWPushButton m_1c0;
    /* +0x288 */ std::string m_288;
    // vtable at 0x00500064 (48 slots)
    //   [ 0] 0x00475d20  ExternalLookupViewWindows::~ExternalLookupViewWindows
    //   [ 1] 0x004b0624  OWL::TDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x004b0870  OWL::TDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x004b094c  OWL::TDialog::DoExecute
    //   [ 7] 0x004167d8  PropertiesViewWindows::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x00475fd8  ExternalLookupViewWindows::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x00475ff0  ExternalLookupViewWindows::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x00413c7c  PropertiesViewWindows::Find
    //   [15] 0x0041413c  PropertiesViewWindows::SetupTooltips
    //   [16] 0x004141fc  PropertiesViewWindows::DestroyTooltips
    //   [17] 0x00414264  PropertiesViewWindows::IsTooltipActive
    //   [18] 0x00415154  PropertiesViewWindows::EnableControls
    //   [19] 0x00475f4c  ExternalLookupViewWindows::OnButton
    //   [20] 0x0041517c  PropertiesViewWindows::OnStaticClicked
    //   [21] 0x00415184  PropertiesViewWindows::OnEditKillFocus
    //   [22] 0x0041518c  PropertiesViewWindows::OnEditChange
    //   [23] 0x00415194  PropertiesViewWindows::OnDoubleClick
    //   [24] 0x0041519c  PropertiesViewWindows::OnUpDown
    //   [25] 0x004151a4  PropertiesViewWindows::OnNotify25
    //   [26] 0x004151ac  PropertiesViewWindows::OnNotify26
    //   [27] 0x004151b4  PropertiesViewWindows::OnColourChanged
    //   [28] 0x004151bc  PropertiesViewWindows::OnFontChanged
    //   [29] 0x004151c4  PropertiesViewWindows::OnComboChange
    //   [30] 0x004151cc  PropertiesViewWindows::OnNotify30
    //   [31] 0x004151d4  PropertiesViewWindows::OnMouseOverControl
    //   [32] 0x004151dc  PropertiesViewWindows::OnTextClicked
    //   [33] 0x00415208  PropertiesViewWindows::IsResizable
    //   [34] 0x00415210  PropertiesViewWindows::GetSectionName
    //   [35] 0x00415254  PropertiesViewWindows::OnNotify35
    //   [36] 0x0041525c  PropertiesViewWindows::OnSelectionCommitted
    //   [37] 0x00415200  PropertiesViewWindows::OnPathListChanged
    //   [38] 0x00416964  PropertiesViewWindows::EvNotify
    //   [39] 0x00416320  PropertiesViewWindows::EvCtlColor
    //   [40] 0x0041651c  PropertiesViewWindows::EvSize
    //   [41] 0x00415328  PropertiesViewWindows::OnPropertyChanged
    //   [42] 0x00415344  PropertiesViewWindows::LoadResourceString
    //   [43] 0x004153a8  PropertiesViewWindows::ShowControlTip
    //   [44] 0x00415e18  PropertiesViewWindows::GetLookupWord
    //   [45] 0x00415be8  PropertiesViewWindows::ShowHelp
    //   [46] 0x00415e7c  PropertiesViewWindows::GetControlTipText
    //   [47] 0x00417490  PropertiesViewWindows::SetupMoveableControls
};
```

### FileHistory

```cpp
// sizeof 168 (0xa8)  rtti 0x004123e4  no vptr  destructor 0x004131f8
class FileHistory {
    /* +0x000 */ string[10] m_0;
};
```

### FormattedTextParagraph

```cpp
// sizeof 336 (0x150)  rtti 0x00484bd4  no vptr  destructor 0x0048209c
class FormattedTextParagraph {
    /* +0x0a0 */ std::vector<FormattedTextSegment *> m_a0;
};
```

### FormattedTextSegment

```cpp
// sizeof 88 (0x58)  rtti 0x00484b78  no vptr  destructor 0x00481ebc
class FormattedTextSegment {
    /* +0x040 */ std::string m_40;
};
```

### GridAboutBoxViewWindows

```cpp
// sizeof 888 (0x378)  rtti 0x004352d0  vptr at +0xc  destructor 0x004350d4
class GridAboutBoxViewWindows : public PropertiesViewWindows, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject PropertiesViewWindows
    /* +0x060 */ PVWEdit m_60;
    /* +0x120 */ PVWURL m_120;
    /* +0x1f8 */ PVWURL m_1f8;
    /* +0x2d0 */ std::string m_2d0;
    // vtable at 0x004f3248 (48 slots)
    //   [ 0] 0x004350d4  GridAboutBoxViewWindows::~GridAboutBoxViewWindows
    //   [ 1] 0x004b0624  OWL::TDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x004b0870  OWL::TDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x004b094c  OWL::TDialog::DoExecute
    //   [ 7] 0x004167d8  PropertiesViewWindows::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x00415264  PropertiesViewWindows::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x004352ac  GridAboutBoxViewWindows::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x00413c7c  PropertiesViewWindows::Find
    //   [15] 0x0041413c  PropertiesViewWindows::SetupTooltips
    //   [16] 0x004141fc  PropertiesViewWindows::DestroyTooltips
    //   [17] 0x00414264  PropertiesViewWindows::IsTooltipActive
    //   [18] 0x00415154  PropertiesViewWindows::EnableControls
    //   [19] 0x00415174  PropertiesViewWindows::OnButton
    //   [20] 0x0041517c  PropertiesViewWindows::OnStaticClicked
    //   [21] 0x00415184  PropertiesViewWindows::OnEditKillFocus
    //   [22] 0x0041518c  PropertiesViewWindows::OnEditChange
    //   [23] 0x00415194  PropertiesViewWindows::OnDoubleClick
    //   [24] 0x0041519c  PropertiesViewWindows::OnUpDown
    //   [25] 0x004151a4  PropertiesViewWindows::OnNotify25
    //   [26] 0x004151ac  PropertiesViewWindows::OnNotify26
    //   [27] 0x004151b4  PropertiesViewWindows::OnColourChanged
    //   [28] 0x004151bc  PropertiesViewWindows::OnFontChanged
    //   [29] 0x004151c4  PropertiesViewWindows::OnComboChange
    //   [30] 0x004151cc  PropertiesViewWindows::OnNotify30
    //   [31] 0x004151d4  PropertiesViewWindows::OnMouseOverControl
    //   [32] 0x004151dc  PropertiesViewWindows::OnTextClicked
    //   [33] 0x00415208  PropertiesViewWindows::IsResizable
    //   [34] 0x00415210  PropertiesViewWindows::GetSectionName
    //   [35] 0x00415254  PropertiesViewWindows::OnNotify35
    //   [36] 0x0041525c  PropertiesViewWindows::OnSelectionCommitted
    //   [37] 0x00415200  PropertiesViewWindows::OnPathListChanged
    //   [38] 0x00416964  PropertiesViewWindows::EvNotify
    //   [39] 0x00416320  PropertiesViewWindows::EvCtlColor
    //   [40] 0x0041651c  PropertiesViewWindows::EvSize
    //   [41] 0x00415328  PropertiesViewWindows::OnPropertyChanged
    //   [42] 0x00415344  PropertiesViewWindows::LoadResourceString
    //   [43] 0x004153a8  PropertiesViewWindows::ShowControlTip
    //   [44] 0x00415e18  PropertiesViewWindows::GetLookupWord
    //   [45] 0x00415be8  PropertiesViewWindows::ShowHelp
    //   [46] 0x00415e7c  PropertiesViewWindows::GetControlTipText
    //   [47] 0x00417490  PropertiesViewWindows::SetupMoveableControls
};
```

### GridViewWindows

```cpp
// sizeof 368 (0x170)  rtti 0x004670bc  no vptr  destructor 0x00463058
class GridViewWindows {
    /* +0x000 */ std::string m_0;
    /* +0x020 */ string[4] m_20;
    /* +0x060 */ string[4] m_60;
    /* +0x0a0 */ string[4] m_a0;
    /* +0x0f0 */ string[4] m_f0;
    /* +0x148 */ std::string m_148;
    /* +0x158 */ std::string m_158;
};
```

### GripBar

```cpp
// sizeof 257 (0x101)  rtti 0x00473590  vptr at +0x18  destructor 0x00473ba8
class GripBar : public OWL::TStatusBar, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TStatusBar
    // vtable at 0x005014a8 (28 slots)
    //   [ 0] 0x00473ba8  GripBar::~GripBar
    //   [ 1] 0x004919b8  OWL::TGadgetWindow::Create
    //   [ 2] 0x004919d4  OWL::TGadgetWindow::vf2
    //   [ 3] 0x0047bff4  OWL::TGadgetWindow::GetTooltip
    //   [ 4] 0x00492f98  OWL::TGadgetWindow::EnableTooltip
    //   [ 5] 0x0049daf0  OWL::TStatusBar::vf5
    //   [ 6] 0x0049266c  OWL::TGadgetWindow::vf6
    //   [ 7] 0x004926d4  OWL::TGadgetWindow::vf7
    //   [ 8] 0x00492694  OWL::TGadgetWindow::vf8
    //   [ 9] 0x004926f8  OWL::TGadgetWindow::vf9
    //   [10] 0x00492778  OWL::TGadgetWindow::vf10
    //   [11] 0x004927d0  OWL::TGadgetWindow::vf11
    //   [12] 0x004915d4  OWL::TGadgetWindow::IdleAction
    //   [13] 0x004917c8  OWL::TGadgetWindow::vf13
    //   [14] 0x004987a0  OWL::TMessageBar::vf14
    //   [15] 0x00498638  OWL::TMessageBar::vf15
    //   [16] 0x00498770  OWL::TMessageBar::vf16
    //   [17] 0x004925f8  OWL::TGadgetWindow::vf17
    //   [18] 0x00491b58  OWL::TGadgetWindow::vf18
    //   [19] 0x00492c14  OWL::TGadgetWindow::Paint
    //   [20] 0x0049da5c  OWL::TStatusBar::vf20
    //   [21] 0x00492868  OWL::TGadgetWindow::SetupWindow
    //   [22] 0x0049292c  OWL::TGadgetWindow::CleanupWindow
    //   [23] 0x00492998  OWL::TGadgetWindow::PreProcessMsg
    //   [24] 0x00493108  OWL::TGadgetWindow::EvCommand
    //   [25] 0x004931d4  OWL::TGadgetWindow::EvCommandEnable
    //   [26] 0x0049d3fc  OWL::TStatusBar::Find
    //   [27] 0x0049db38  OWL::TStatusBar::vf27
};
```

### Help

```cpp
// sizeof 12 (0xc)  rtti 0x00485a08  no vptr  destructor 0x00485b70
class Help {
};
```

### InputEngine

```cpp
// sizeof 18444 (0x480c)  rtti 0x00409c34  no vptr  destructor 0x00411748
class InputEngine {
};
```

### IntroductionViewWindows

```cpp
// sizeof 472 (0x1d8)  rtti 0x00413688  vptr at +0xc  destructor 0x004134f0
class IntroductionViewWindows : public PropertiesViewWindows, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject PropertiesViewWindows
    /* +0x060 */ PVWURL m_60;
    // vtable at 0x004ed04c (48 slots)
    //   [ 0] 0x004134f0  IntroductionViewWindows::~IntroductionViewWindows
    //   [ 1] 0x004b0624  OWL::TDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x004b0870  OWL::TDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x004b094c  OWL::TDialog::DoExecute
    //   [ 7] 0x004167d8  PropertiesViewWindows::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x00415264  PropertiesViewWindows::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x004156f4  PropertiesViewWindows::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x00413260  IntroductionViewWindows::Find
    //   [15] 0x0041413c  PropertiesViewWindows::SetupTooltips
    //   [16] 0x004141fc  PropertiesViewWindows::DestroyTooltips
    //   [17] 0x00414264  PropertiesViewWindows::IsTooltipActive
    //   [18] 0x00415154  PropertiesViewWindows::EnableControls
    //   [19] 0x00415174  PropertiesViewWindows::OnButton
    //   [20] 0x0041517c  PropertiesViewWindows::OnStaticClicked
    //   [21] 0x00415184  PropertiesViewWindows::OnEditKillFocus
    //   [22] 0x0041518c  PropertiesViewWindows::OnEditChange
    //   [23] 0x00415194  PropertiesViewWindows::OnDoubleClick
    //   [24] 0x0041519c  PropertiesViewWindows::OnUpDown
    //   [25] 0x004151a4  PropertiesViewWindows::OnNotify25
    //   [26] 0x004151ac  PropertiesViewWindows::OnNotify26
    //   [27] 0x004151b4  PropertiesViewWindows::OnColourChanged
    //   [28] 0x004151bc  PropertiesViewWindows::OnFontChanged
    //   [29] 0x004151c4  PropertiesViewWindows::OnComboChange
    //   [30] 0x004151cc  PropertiesViewWindows::OnNotify30
    //   [31] 0x004151d4  PropertiesViewWindows::OnMouseOverControl
    //   [32] 0x004151dc  PropertiesViewWindows::OnTextClicked
    //   [33] 0x00415208  PropertiesViewWindows::IsResizable
    //   [34] 0x00415210  PropertiesViewWindows::GetSectionName
    //   [35] 0x00415254  PropertiesViewWindows::OnNotify35
    //   [36] 0x0041525c  PropertiesViewWindows::OnSelectionCommitted
    //   [37] 0x00415200  PropertiesViewWindows::OnPathListChanged
    //   [38] 0x00416964  PropertiesViewWindows::EvNotify
    //   [39] 0x00416320  PropertiesViewWindows::EvCtlColor
    //   [40] 0x0041651c  PropertiesViewWindows::EvSize
    //   [41] 0x00415328  PropertiesViewWindows::OnPropertyChanged
    //   [42] 0x00415344  PropertiesViewWindows::LoadResourceString
    //   [43] 0x004153a8  PropertiesViewWindows::ShowControlTip
    //   [44] 0x00415e18  PropertiesViewWindows::GetLookupWord
    //   [45] 0x00415be8  PropertiesViewWindows::ShowHelp
    //   [46] 0x00415e7c  PropertiesViewWindows::GetControlTipText
    //   [47] 0x00417490  PropertiesViewWindows::SetupMoveableControls
    // response table at 0x004ecf4c (4 entries)
    //   EV_COMMAND(1530)                             -> 0x00413610  IntroductionViewWindows::Cmd1530
    //   EV_COMMAND(29991)                            -> 0x00413630  IntroductionViewWindows::Cmd29991
    //   EV_COMMAND(90)                               -> 0x0041364c  IntroductionViewWindows::Cmd90
    //   EV_COMMAND(100)                              -> 0x00413668  IntroductionViewWindows::Cmd100
};
```

### LicenseViewWindows

```cpp
// sizeof 616 (0x268)  rtti 0x004662e0  vptr at +0xc  destructor 0x00486488
class LicenseViewWindows : public PropertiesViewWindows, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject PropertiesViewWindows
    /* +0x068 */ OWL::TEdit m_68;
    /* +0x11a */ OWL::TEdit m_11a;
    // vtable at 0x00503bb8 (48 slots)
    //   [ 0] 0x00486488  LicenseViewWindows::~LicenseViewWindows
    //   [ 1] 0x004b0624  OWL::TDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x004b0870  OWL::TDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x004b094c  OWL::TDialog::DoExecute
    //   [ 7] 0x004167d8  PropertiesViewWindows::PreProcessMsg
    //   [ 8] 0x004865c0  LicenseViewWindows::CloseWindow
    //   [ 9] 0x00415264  PropertiesViewWindows::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x004156f4  PropertiesViewWindows::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x00413c7c  PropertiesViewWindows::Find
    //   [15] 0x0041413c  PropertiesViewWindows::SetupTooltips
    //   [16] 0x004141fc  PropertiesViewWindows::DestroyTooltips
    //   [17] 0x00414264  PropertiesViewWindows::IsTooltipActive
    //   [18] 0x00415154  PropertiesViewWindows::EnableControls
    //   [19] 0x00415174  PropertiesViewWindows::OnButton
    //   [20] 0x0041517c  PropertiesViewWindows::OnStaticClicked
    //   [21] 0x00415184  PropertiesViewWindows::OnEditKillFocus
    //   [22] 0x0041518c  PropertiesViewWindows::OnEditChange
    //   [23] 0x00415194  PropertiesViewWindows::OnDoubleClick
    //   [24] 0x0041519c  PropertiesViewWindows::OnUpDown
    //   [25] 0x004151a4  PropertiesViewWindows::OnNotify25
    //   [26] 0x004151ac  PropertiesViewWindows::OnNotify26
    //   [27] 0x004151b4  PropertiesViewWindows::OnColourChanged
    //   [28] 0x004151bc  PropertiesViewWindows::OnFontChanged
    //   [29] 0x004151c4  PropertiesViewWindows::OnComboChange
    //   [30] 0x004151cc  PropertiesViewWindows::OnNotify30
    //   [31] 0x004151d4  PropertiesViewWindows::OnMouseOverControl
    //   [32] 0x004151dc  PropertiesViewWindows::OnTextClicked
    //   [33] 0x00415208  PropertiesViewWindows::IsResizable
    //   [34] 0x00415210  PropertiesViewWindows::GetSectionName
    //   [35] 0x00415254  PropertiesViewWindows::OnNotify35
    //   [36] 0x0041525c  PropertiesViewWindows::OnSelectionCommitted
    //   [37] 0x00415200  PropertiesViewWindows::OnPathListChanged
    //   [38] 0x00416964  PropertiesViewWindows::EvNotify
    //   [39] 0x00416320  PropertiesViewWindows::EvCtlColor
    //   [40] 0x0041651c  PropertiesViewWindows::EvSize
    //   [41] 0x00415328  PropertiesViewWindows::OnPropertyChanged
    //   [42] 0x00415344  PropertiesViewWindows::LoadResourceString
    //   [43] 0x004153a8  PropertiesViewWindows::ShowControlTip
    //   [44] 0x00415e18  PropertiesViewWindows::GetLookupWord
    //   [45] 0x00415be8  PropertiesViewWindows::ShowHelp
    //   [46] 0x00415e7c  PropertiesViewWindows::GetControlTipText
    //   [47] 0x00417490  PropertiesViewWindows::SetupMoveableControls
};
```

### LookupConfiguration

```cpp
// sizeof 56 (0x38)  rtti 0x00423018  no vptr  destructor 0x00425bb8
class LookupConfiguration {
    /* +0x010 */ std::string m_10;
    /* +0x020 */ std::string m_20;
};
```

### LookupConfiguration::LookupEntry

```cpp
// sizeof 56 (0x38)  rtti 0x00426028  no vptr  destructor 0x00425984
class LookupConfiguration::LookupEntry {
    /* +0x008 */ std::string m_8;
    /* +0x018 */ std::string m_18;
    /* +0x028 */ std::string m_28;
};
```

### LookupConfiguration::LookupStyleEntries

```cpp
// sizeof 288 (0x120)  rtti 0x004260a0  no vptr  destructor 0x0042612c
class LookupConfiguration::LookupStyleEntries {
    /* +0x000 */ std::string m_0;
    /* +0x010 */ std::string m_10;
    /* +0x020 */ std::string m_20;
    /* +0x030 */ std::string m_30;
    /* +0x040 */ LookupConfiguration::LookupEntry[4] m_40;
};
```

### LookupPropertiesViewWindows

```cpp
// sizeof 912 (0x390)  rtti 0x00415ca0  vptr at +0xc  destructor 0x00460e4c
class LookupPropertiesViewWindows : public PropertiesViewWindows, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject PropertiesViewWindows
    /* +0x0a8 */ PVWPushButton m_a8;
    /* +0x170 */ PVWEdit m_170;
    /* +0x230 */ PVWPushButton m_230;
    // vtable at 0x004fb100 (48 slots)
    //   [ 0] 0x00460e4c  LookupPropertiesViewWindows::~LookupPropertiesViewWindows
    //   [ 1] 0x004b0624  OWL::TDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x004b0870  OWL::TDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x004b094c  OWL::TDialog::DoExecute
    //   [ 7] 0x004167d8  PropertiesViewWindows::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x004611b0  LookupPropertiesViewWindows::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x00461204  LookupPropertiesViewWindows::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x00413c7c  PropertiesViewWindows::Find
    //   [15] 0x0041413c  PropertiesViewWindows::SetupTooltips
    //   [16] 0x004141fc  PropertiesViewWindows::DestroyTooltips
    //   [17] 0x00414264  PropertiesViewWindows::IsTooltipActive
    //   [18] 0x00415154  PropertiesViewWindows::EnableControls
    //   [19] 0x00461520  LookupPropertiesViewWindows::OnButton
    //   [20] 0x0041517c  PropertiesViewWindows::OnStaticClicked
    //   [21] 0x00415184  PropertiesViewWindows::OnEditKillFocus
    //   [22] 0x00461c00  LookupPropertiesViewWindows::OnEditChange
    //   [23] 0x00415194  PropertiesViewWindows::OnDoubleClick
    //   [24] 0x0041519c  PropertiesViewWindows::OnUpDown
    //   [25] 0x004151a4  PropertiesViewWindows::OnNotify25
    //   [26] 0x004151ac  PropertiesViewWindows::OnNotify26
    //   [27] 0x004151b4  PropertiesViewWindows::OnColourChanged
    //   [28] 0x004151bc  PropertiesViewWindows::OnFontChanged
    //   [29] 0x004625f0  LookupPropertiesViewWindows::OnComboChange
    //   [30] 0x004151cc  PropertiesViewWindows::OnNotify30
    //   [31] 0x004151d4  PropertiesViewWindows::OnMouseOverControl
    //   [32] 0x004151dc  PropertiesViewWindows::OnTextClicked
    //   [33] 0x00415208  PropertiesViewWindows::IsResizable
    //   [34] 0x00415210  PropertiesViewWindows::GetSectionName
    //   [35] 0x00415254  PropertiesViewWindows::OnNotify35
    //   [36] 0x0041525c  PropertiesViewWindows::OnSelectionCommitted
    //   [37] 0x00415200  PropertiesViewWindows::OnPathListChanged
    //   [38] 0x00416964  PropertiesViewWindows::EvNotify
    //   [39] 0x00416320  PropertiesViewWindows::EvCtlColor
    //   [40] 0x0041651c  PropertiesViewWindows::EvSize
    //   [41] 0x00415328  PropertiesViewWindows::OnPropertyChanged
    //   [42] 0x00415344  PropertiesViewWindows::LoadResourceString
    //   [43] 0x004153a8  PropertiesViewWindows::ShowControlTip
    //   [44] 0x00415e18  PropertiesViewWindows::GetLookupWord
    //   [45] 0x00415be8  PropertiesViewWindows::ShowHelp
    //   [46] 0x00415e7c  PropertiesViewWindows::GetControlTipText
    //   [47] 0x00417490  PropertiesViewWindows::SetupMoveableControls
};
```

### LookupPropertiesViewWindows::DDEControls

```cpp
// sizeof 776 (0x308)  rtti 0x0046275c  no vptr  destructor 0x00462a1c
class LookupPropertiesViewWindows::DDEControls {
    /* +0x008 */ PVWCheckBox m_8;
    /* +0x0d0 */ PVWEdit m_d0;
    /* +0x18c */ PVWEdit m_18c;
    /* +0x248 */ PVWEdit m_248;
};
```

### LookupPropertiesViewWindows::MessageControls

```cpp
// sizeof 776 (0x308)  rtti 0x004626d0  no vptr  destructor 0x00462aa4
class LookupPropertiesViewWindows::MessageControls {
    /* +0x008 */ PVWCheckBox m_8;
    /* +0x0d0 */ PVWEdit m_d0;
    /* +0x18c */ PVWEdit m_18c;
    /* +0x248 */ PVWEdit m_248;
};
```

### LookupPropertiesViewWindows::ProgramControls

```cpp
// sizeof 976 (0x3d0)  rtti 0x0046263c  no vptr  destructor 0x00462b2c
class LookupPropertiesViewWindows::ProgramControls {
    /* +0x008 */ PVWCheckBox m_8;
    /* +0x0d0 */ PVWEdit m_d0;
    /* +0x18c */ PVWEdit m_18c;
    /* +0x248 */ PVWPushButton m_248;
    /* +0x310 */ PVWEnumeration m_310;
};
```

### LookupPropertiesViewWindows::URLControls

```cpp
// sizeof 584 (0x248)  rtti 0x004627e4  no vptr  destructor 0x004629ac
class LookupPropertiesViewWindows::URLControls {
    /* +0x008 */ PVWCheckBox m_8;
    /* +0x0d0 */ PVWEdit m_d0;
    /* +0x18c */ PVWEdit m_18c;
};
```

### MatchEngine

```cpp
// sizeof 4432 (0x1150)  rtti 0x00409bdc  no vptr  destructor 0x00411264
class MatchEngine {
    /* +0x000 */ Pattern m_0;
    /* +0x1008 */ std::string m_1008;
};
```

### MatchEngineSet

```cpp
// sizeof 56 (0x38)  rtti 0x0045ef48  no vptr  destructor 0x00477d64
class MatchEngineSet {
    /* +0x000 */ std::vector<MatchEngine *> m_0;
    /* +0x020 */ std::string m_20;
};
```

### MatchListLabelWindows

```cpp
// sizeof 208 (0xd0)  rtti 0x004291c8  vptr at +0xc  destructor 0x00428eb4
class MatchListLabelWindows : public OWL::TStatic, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TStatic
    /* +0x020 */ std::string m_20;
    // vtable at 0x004f2138 (12 slots)
    //   [ 0] 0x00428eb4  MatchListLabelWindows::~MatchListLabelWindows
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x004c789c  OWL::TStatic::Find
    //   [ 9] 0x004c7bdc  OWL::TStatic::vf9
    //   [10] 0x004c7ba4  PVWStatic::Transfer
    //   [11] 0x004c7b84  PVWStatic::GetClassName
};
```

### MatchListWindows

```cpp
// sizeof 448 (0x1c0)  rtti 0x00430dc0  vptr at +0xc  destructor 0x0042a250
class MatchListWindows : public OWL::TControl, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TControl
    /* +0x018 */ std::set<const MatchListWindows::Entry *,MatchListWindows::EntryIndexComparator> m_18;
    /* +0x050 */ std::vector<MatchListWindows::EntryHead> m_50;
    /* +0x078 */ std::set<MatchListWindows::Selection,std::less<MatchListWindows::Selection>> m_78;
    /* +0x0c0 */ std::vector<int> m_c0;
    // vtable at 0x004f2c28 (14 slots)
    //   [ 0] 0x0042a250  MatchListWindows::~MatchListWindows
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x004292c0  MatchListWindows::Find
    //   [ 9] 0x0042bd1c  MatchListWindows::Invalidate
    //   [10] 0x0042bdac  MatchListWindows::PreProcessMsg
    //   [11] 0x0042bf44  MatchListWindows::GetClassName
    //   [12] 0x0042bf50  MatchListWindows::Paint
    //   [13] 0x0042cea8  MatchListWindows::SetupWindow
    // response table at 0x004f2240 (13 entries)
    //   WM_GETDLGCODE                                -> 0x0042cebc  MatchListWindows::EvGetDlgCode
    //   WM_KEYDOWN                                   -> 0x0042ced4  MatchListWindows::EvKeyDown
    //   WM_SYSKEYDOWN                                -> 0x0042d2d4  MatchListWindows::EvSysKeyDown
    //   WM_LBUTTONDOWN                               -> 0x0042d308  MatchListWindows::EvLButtonDown
    //   WM_LBUTTONDBLCLK                             -> 0x0042d540  MatchListWindows::EvLButtonDblClk
    //   WM_LBUTTONUP                                 -> 0x0042d558  MatchListWindows::EvLButtonUp
    //   WM_RBUTTONDOWN                               -> 0x0042d5f8  MatchListWindows::EvRButtonDown
    //   WM_RBUTTONUP                                 -> 0x0042d768  MatchListWindows::EvRButtonUp
    //   WM_MOUSEMOVE                                 -> 0x0042d78c  MatchListWindows::EvMouseMove
    //   WM_SETFOCUS                                  -> 0x0042d9c0  MatchListWindows::EvSetFocus
    //   WM_KILLFOCUS                                 -> 0x0042da58  MatchListWindows::EvKillFocus
    //   WM_TIMER                                     -> 0x0042dad4  MatchListWindows::EvTimer
    //   WM_VSCROLL                                   -> 0x0042db14  MatchListWindows::EvVScroll
};
```

### MatchListWindows::EntryHead

```cpp
// sizeof 12 (0xc)  rtti 0x004298a4  no vptr  destructor 0x00430d9c
class MatchListWindows::EntryHead {
};
```

### MatchListWindows::Selection

```cpp
// sizeof 8 (0x8)  rtti 0x0042fa9c  no vptr  destructor 0x00430c58
class MatchListWindows::Selection {
};
```

### MatchListWindows::SelectionIterator

```cpp
// sizeof 32 (0x20)  rtti 0x0043c57c  no vptr
class MatchListWindows::SelectionIterator {
};
```

### MyScroller

```cpp
// sizeof 63 (0x3f)  rtti 0x004280c0  vptr at +0x0  destructor 0x004283f4
class MyScroller : public OWL::TScroller {
    /* +0x000 */ // base subobject OWL::TScroller
    // vtable at 0x004f752c (22 slots)
    //   [ 0] 0x004283f4  MyScroller::~MyScroller
    //   [ 1] 0x0044f8dc  OWL::TScroller::vf1
    //   [ 2] 0x004c6b20  OWL::TScroller::vf2
    //   [ 3] 0x0044f2c4  MyScroller::vf3
    //   [ 4] 0x0044f4a8  MyScroller::vf4
    //   [ 5] 0x0044f3a4  MyScroller::vf5
    //   [ 6] 0x004c6af4  OWL::TScroller::vf6
    //   [ 7] 0x004c6c38  OWL::TScroller::vf7
    //   [ 8] 0x0044f7e8  MyScroller::vf8
    //   [ 9] 0x0044f6cc  MyScroller::vf9
    //   [10] 0x0044f5b0  MyScroller::vf10
    //   [11] 0x0044f3c0  MyScroller::vf11
    //   [12] 0x0044f8ec  OWL::TScroller::vf12
    //   [13] 0x0044f918  OWL::TScroller::vf13
    //   [14] 0x004c7104  OWL::TScroller::vf14
    //   [15] 0x004c7110  OWL::TScroller::vf15
    //   [16] 0x0044f93c  OWL::TScroller::vf16
    //   [17] 0x0044f95c  OWL::TScroller::vf17
    //   [18] 0x0044f974  OWL::TScroller::vf18
    //   [19] 0x0044f994  OWL::TScroller::vf19
    //   [20] 0x0044f9b8  OWL::TScroller::vf20
    //   [21] 0x0044f9d0  OWL::TScroller::vf21
};
```

### OccurrenceListCache

```cpp
// sizeof 32 (0x20)  rtti 0x00447b14  no vptr  destructor 0x0043fe0c
class OccurrenceListCache {
    /* +0x000 */ std::vector<std::map<std::string,std::vector<long> *,std::less<std::basic_string<char,std::char_traits<char>,std::allocat m_0;
};
```

### Pattern

```cpp
// sizeof 4104 (0x1008)  rtti 0x0041132c  no vptr  destructor 0x00434ba4
class Pattern {
    /* +0x008 */ string[256] m_8;
};
```

### Persist

```cpp
// sizeof 8 (0x8)  rtti 0x00412cac  no vptr  destructor 0x0044e920
class Persist {
};
```

### PrintoutFeeder

```cpp
// sizeof 4 (0x4)  rtti 0x004045a8  vptr at +0x0  destructor 0x00402f80
class PrintoutFeeder {
    // vtable at 0x004eacf0 (7 slots)
    //   [ 0] 0x00402f80  PrintoutFeeder::~PrintoutFeeder
    //   [ 1] 0x004e6028  __vstub_4e6028
    //   [ 2] 0x004e6028  __vstub_4e6028
    //   [ 3] 0x004e6028  __vstub_4e6028
    //   [ 4] 0x004e6028  __vstub_4e6028
    //   [ 5] 0x004e6028  __vstub_4e6028
    //   [ 6] 0x00404760  PrintoutFeeder::vf6
};
```

### PrintPreviewPrintout

```cpp
// sizeof 22 (0x16)  rtti 0x004044e8  vptr at +0x0  destructor 0x00404548
class PrintPreviewPrintout : public OWL::TPrintout {
    /* +0x000 */ // base subobject OWL::TPrintout
    // vtable at 0x004eacbc (10 slots)
    //   [ 0] 0x00404548  PrintPreviewPrintout::~PrintPreviewPrintout
    //   [ 1] 0x004c6584  OWL::TPrintout::vf1
    //   [ 2] 0x004c65a0  OWL::TPrintout::vf2
    //   [ 3] 0x004c65c4  OWL::TPrintout::vf3
    //   [ 4] 0x004c65cc  OWL::TPrintout::vf4
    //   [ 5] 0x004c65d4  OWL::TPrintout::vf5
    //   [ 6] 0x004c65e4  OWL::TPrintout::vf6
    //   [ 7] 0x004c65ec  OWL::TPrintout::vf7
    //   [ 8] 0x004c65f4  OWL::TPrintout::vf8
    //   [ 9] 0x004e6028  __vstub_4e6028
};
```

### PrintPreviewWindow

```cpp
// sizeof 400 (0x190)  rtti 0x004286a0  vptr at +0x35  destructor 0x00426de4
class PrintPreviewWindow : public OWL::TDecoratedFrame, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow, public virtual OWL::TFrameWindow {
    /* +0x000 */ // base subobject OWL::TDecoratedFrame
    /* +0x070 */ std::string m_70;
    /* +0x080 */ std::string m_80;
    // vtable at 0x004f1ee4 (22 slots)
    //   [ 0] 0x00426de4  PrintPreviewWindow::~PrintPreviewWindow
    //   [ 1] 0x004afa14  OWL::TDecoratedFrame::vf1
    //   [ 2] 0x004aec4c  OWL::TDecoratedFrame::vf2
    //   [ 3] 0x004276e0  PrintPreviewWindow::PreProcessMsg
    //   [ 4] 0x004ae9f8  OWL::TDecoratedFrame::TFrameWindow_vf7
    //   [ 5] 0x004afadc  OWL::TDecoratedFrame::vf5
    //   [ 6] 0x004afbc4  OWL::TDecoratedFrame::TFrameWindow_vf4
    //   [ 7] 0x004afc04  OWL::TDecoratedFrame::TFrameWindow_vf5
    //   [ 8] 0x004afb58  OWL::TDecoratedFrame::vf8
    //   [ 9] 0x00427578  PrintPreviewWindow::SetupWindow
    //   [10] 0x004ae9c4  OWL::TDecoratedFrame::CleanupWindow
    //   [11] 0x004aeb9c  OWL::TDecoratedFrame::RemoveChild
    //   [12] 0x004aefd0  OWL::TDecoratedFrame::EvCommand
    //   [13] 0x00427a70  PrintPreviewWindow::EvCommandEnable
    //   [14] 0x00426498  PrintPreviewWindow::Find
    //   [15] 0x004276a4  PrintPreviewWindow::Create
    //   [16] 0x004277a0  PrintPreviewWindow::Destroy
    //   [17] 0x00427bd8  PrintPreviewWindow::vf17
    //   [18] 0x00427b54  PrintPreviewWindow::vf18
    //   [19] 0x00427134  PrintPreviewWindow::vf19
    //   [20] 0x00427e30  PrintPreviewWindow::vf20
    //   [21] 0x00427fb4  PrintPreviewWindow::vf21
    // response table at 0x004f1984 (8 entries)
    //   WM_HELP                                      -> 0x00427f8c  PrintPreviewWindow::EvHelp
    //   WM_SIZE                                      -> 0x004264e0  PrintPreviewWindow::EvSize
    //   EV_COMMAND(5690)                             -> 0x00428174  PrintPreviewWindow::Cmd5690
    //   EV_COMMAND_ENABLE(5690)                      -> 0x00428114  PrintPreviewWindow::CeCmd5690
    //   EV_COMMAND(5720)                             -> 0x004282a8  PrintPreviewWindow::Cmd5720
    //   EV_COMMAND_ENABLE(5720)                      -> 0x00428128  PrintPreviewWindow::CeCmd5720
    //   EV_COMMAND(5730)                             -> 0x004282f4  PrintPreviewWindow::Cmd5730
    //   EV_COMMAND_ENABLE(5730)                      -> 0x0042814c  PrintPreviewWindow::CeCmd5730
};
```

### PrintPreviewWindowTEA

```cpp
// sizeof 408 (0x198)  rtti 0x0043c068  vptr at +0x35  destructor 0x0043be48
class PrintPreviewWindowTEA : public PrintPreviewWindow, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow, public virtual OWL::TFrameWindow {
    /* +0x000 */ // base subobject PrintPreviewWindow
    // vtable at 0x004f4cac (22 slots)
    //   [ 0] 0x0043be48  PrintPreviewWindowTEA::~PrintPreviewWindowTEA
    //   [ 1] 0x004afa14  OWL::TDecoratedFrame::vf1
    //   [ 2] 0x004aec4c  OWL::TDecoratedFrame::vf2
    //   [ 3] 0x004276e0  PrintPreviewWindow::PreProcessMsg
    //   [ 4] 0x004ae9f8  OWL::TDecoratedFrame::TFrameWindow_vf7
    //   [ 5] 0x004afadc  OWL::TDecoratedFrame::vf5
    //   [ 6] 0x004afbc4  OWL::TDecoratedFrame::TFrameWindow_vf4
    //   [ 7] 0x004afc04  OWL::TDecoratedFrame::TFrameWindow_vf5
    //   [ 8] 0x004afb58  OWL::TDecoratedFrame::vf8
    //   [ 9] 0x00427578  PrintPreviewWindow::SetupWindow
    //   [10] 0x004ae9c4  OWL::TDecoratedFrame::CleanupWindow
    //   [11] 0x004aeb9c  OWL::TDecoratedFrame::RemoveChild
    //   [12] 0x004aefd0  OWL::TDecoratedFrame::EvCommand
    //   [13] 0x00427a70  PrintPreviewWindow::EvCommandEnable
    //   [14] 0x0043bbb4  PrintPreviewWindowTEA::Find
    //   [15] 0x004276a4  PrintPreviewWindow::Create
    //   [16] 0x004277a0  PrintPreviewWindow::Destroy
    //   [17] 0x00427bd8  PrintPreviewWindow::vf17
    //   [18] 0x00427b54  PrintPreviewWindow::vf18
    //   [19] 0x00427134  PrintPreviewWindow::vf19
    //   [20] 0x00427e30  PrintPreviewWindow::vf20
    //   [21] 0x00427fb4  PrintPreviewWindow::vf21
    // response table at 0x004f4bf8 (3 entries)
    //   EV_COMMAND(9840)                             -> 0x0043bfc8  PrintPreviewWindowTEA::CmShared_43bfc8
    //   EV_COMMAND(9850)                             -> 0x0043bfc8  PrintPreviewWindowTEA::CmShared_43bfc8
    //   EV_COMMAND_ENABLE(9850)                      -> 0x0043c04c  PrintPreviewWindowTEA::CeCmd9850
};
```

### PropertiesViewWindows

```cpp
// sizeof 248 (0xf8)  rtti 0x00402910  vptr at +0xc  destructor 0x00413f3c
class PropertiesViewWindows : public OWL::TDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TDialog
    /* +0x018 */ std::vector<PropertiesViewWindows::MoveableControl *> m_18;
    // vtable at 0x004f0c20 (48 slots)
    //   [ 0] 0x00413f3c  PropertiesViewWindows::~PropertiesViewWindows
    //   [ 1] 0x004b0624  OWL::TDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x004b0870  OWL::TDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x004b094c  OWL::TDialog::DoExecute
    //   [ 7] 0x004167d8  PropertiesViewWindows::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x00415264  PropertiesViewWindows::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x004156f4  PropertiesViewWindows::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x00413c7c  PropertiesViewWindows::Find
    //   [15] 0x0041413c  PropertiesViewWindows::SetupTooltips
    //   [16] 0x004141fc  PropertiesViewWindows::DestroyTooltips
    //   [17] 0x00414264  PropertiesViewWindows::IsTooltipActive
    //   [18] 0x00415154  PropertiesViewWindows::EnableControls
    //   [19] 0x00415174  PropertiesViewWindows::OnButton
    //   [20] 0x0041517c  PropertiesViewWindows::OnStaticClicked
    //   [21] 0x00415184  PropertiesViewWindows::OnEditKillFocus
    //   [22] 0x0041518c  PropertiesViewWindows::OnEditChange
    //   [23] 0x00415194  PropertiesViewWindows::OnDoubleClick
    //   [24] 0x0041519c  PropertiesViewWindows::OnUpDown
    //   [25] 0x004151a4  PropertiesViewWindows::OnNotify25
    //   [26] 0x004151ac  PropertiesViewWindows::OnNotify26
    //   [27] 0x004151b4  PropertiesViewWindows::OnColourChanged
    //   [28] 0x004151bc  PropertiesViewWindows::OnFontChanged
    //   [29] 0x004151c4  PropertiesViewWindows::OnComboChange
    //   [30] 0x004151cc  PropertiesViewWindows::OnNotify30
    //   [31] 0x004151d4  PropertiesViewWindows::OnMouseOverControl
    //   [32] 0x004151dc  PropertiesViewWindows::OnTextClicked
    //   [33] 0x00415208  PropertiesViewWindows::IsResizable
    //   [34] 0x00415210  PropertiesViewWindows::GetSectionName
    //   [35] 0x00415254  PropertiesViewWindows::OnNotify35
    //   [36] 0x0041525c  PropertiesViewWindows::OnSelectionCommitted
    //   [37] 0x00415200  PropertiesViewWindows::OnPathListChanged
    //   [38] 0x00416964  PropertiesViewWindows::EvNotify
    //   [39] 0x00416320  PropertiesViewWindows::EvCtlColor
    //   [40] 0x0041651c  PropertiesViewWindows::EvSize
    //   [41] 0x00415328  PropertiesViewWindows::OnPropertyChanged
    //   [42] 0x00415344  PropertiesViewWindows::LoadResourceString
    //   [43] 0x004153a8  PropertiesViewWindows::ShowControlTip
    //   [44] 0x00415e18  PropertiesViewWindows::GetLookupWord
    //   [45] 0x00415be8  PropertiesViewWindows::ShowHelp
    //   [46] 0x00415e7c  PropertiesViewWindows::GetControlTipText
    //   [47] 0x00417490  PropertiesViewWindows::SetupMoveableControls
    // response table at 0x004ed37c (22 entries)
    //   message id 0 in the static table (filled at run time or WM_NULL) -> 0x004154a0  PropertiesViewWindows::EvRegisteredMsg_4154a0
    //   WM_ACTIVATE                                  -> 0x0041673c  PropertiesViewWindows::EvActivate
    //   WM_INITMENUPOPUP                             -> 0x004154ec  PropertiesViewWindows::EvInitMenuPopup
    //   WM_MENUSELECT                                -> 0x004156a4  PropertiesViewWindows::EvMenuSelect
    //   WM_PAINT                                     -> 0x004165cc  PropertiesViewWindows::EvPaint
    //   message 0x0019                               -> 0x00413cc4  PropertiesViewWindows::EvMsg_19
    //   WM_SIZE                                      -> 0x00413cd4  PropertiesViewWindows::EvSize_413cd4
    //   EV_COMMAND(1530)                             -> 0x00413ce4  PropertiesViewWindows::Cmd1530
    //   EV_COMMAND(5140)                             -> 0x00415c00  PropertiesViewWindows::CmEditExternalLookupSetup   // &Edit > &External Lookup > &Setup... | &External Lookup > &Setup... | &External Lookup > &Setup...
    //   EV_COMMAND(13120)                            -> 0x00415d40  PropertiesViewWindows::CmShared_415d40
    //   EV_COMMAND(13121)                            -> 0x00415d40  PropertiesViewWindows::CmShared_415d40
    //   EV_COMMAND(13122)                            -> 0x00415d40  PropertiesViewWindows::CmShared_415d40
    //   EV_COMMAND(13123)                            -> 0x00415d40  PropertiesViewWindows::CmShared_415d40
    //   EV_COMMAND(13124)                            -> 0x00415d40  PropertiesViewWindows::CmShared_415d40
    //   EV_COMMAND(13125)                            -> 0x00415d40  PropertiesViewWindows::CmShared_415d40
    //   EV_COMMAND(13126)                            -> 0x00415d40  PropertiesViewWindows::CmShared_415d40
    //   EV_COMMAND(13127)                            -> 0x00415d40  PropertiesViewWindows::CmShared_415d40
    //   EV_COMMAND(13128)                            -> 0x00415d40  PropertiesViewWindows::CmShared_415d40
    //   EV_COMMAND(13129)                            -> 0x00415d40  PropertiesViewWindows::CmShared_415d40
    //   EV_COMMAND(13130)                            -> 0x00415d40  PropertiesViewWindows::CmShared_415d40
    //   EV_COMMAND(13131)                            -> 0x00415d40  PropertiesViewWindows::CmShared_415d40
    //   EV_COMMAND(12710)                            -> 0x00415d40  PropertiesViewWindows::CmShared_415d40   // accel CONTROL+ALT+VK_RETURN | accel CONTROL+ALT+VK_RETURN
};
```

### PropertiesViewWindows::MoveableControl

```cpp
// sizeof 20 (0x14)  rtti 0x004024f4  no vptr
class PropertiesViewWindows::MoveableControl {
};
```

### PVWBrush

```cpp
// sizeof 16 (0x10)  rtti 0x00418dcc  no vptr  destructor 0x0041794c
class PVWBrush {
};
```

### PVWCheckBox

```cpp
// sizeof 200 (0xc8)  rtti 0x00406e80  vptr at +0xc  destructor 0x0041851c
class PVWCheckBox : public OWL::TCheckBox, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TCheckBox
    /* +0x020 */ std::string m_20;
    // vtable at 0x004f096c (12 slots)
    //   [ 0] 0x0041851c  PVWCheckBox::~PVWCheckBox
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x00418350  PVWCheckBox::Find
    //   [ 9] 0x004ac6ec  OWL::TCheckBox::GetClassName
    //   [10] 0x004abeb8  OWL::TButton::SetupWindow
    //   [11] 0x004ac70c  OWL::TCheckBox::Transfer
    // response table at 0x004ee218 (2 entries)
    //   WM_SHOWWINDOW                                -> 0x004186c0  PVWCheckBox::EvShowWindow
    //   EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)      -> 0x0041869c  PVWCheckBox::BNClicked
};
```

### PVWColourButton

```cpp
// sizeof 196 (0xc4)  rtti 0x00406ffc  vptr at +0xc  destructor 0x00418914
class PVWColourButton : public OWL::TButton, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TButton
    // vtable at 0x004f0888 (12 slots)
    //   [ 0] 0x00418914  PVWColourButton::~PVWColourButton
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x00418ac0  PVWColourButton::vf5
    //   [ 6] 0x00418aa8  PVWColourButton::vf6
    //   [ 7] 0x00418a90  PVWColourButton::vf7
    //   [ 8] 0x0041875c  PVWColourButton::Find
    //   [ 9] 0x004abe98  OWL::TButton::GetClassName
    //   [10] 0x004abeb8  OWL::TButton::SetupWindow
    //   [11] 0x00418a10  PVWColourButton::PreProcessMsg
    // response table at 0x004ee2c0 (2 entries)
    //   message id 0 in the static table (filled at run time or WM_NULL) -> 0x00418a70  PVWColourButton::EvRegisteredMsg_418a70
    //   EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)      -> 0x00418e14  PVWColourButton::BNClicked
};
```

### PVWCombo

```cpp
// sizeof 184 (0xb8)  rtti 0x00406f84  vptr at +0xc  destructor 0x0041c3b4
class PVWCombo : public OWL::TComboBox, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TComboBox
    // vtable at 0x004f0110 (36 slots)
    //   [ 0] 0x0041c3b4  PVWCombo::~PVWCombo
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x0041c210  PVWCombo::Find
    //   [ 9] 0x00422160  OWL::TComboBox::GetCount
    //   [10] 0x0042217c  OWL::TComboBox::FindString
    //   [11] 0x0042219c  OWL::TComboBox::FindExactString
    //   [12] 0x004221cc  OWL::TComboBox::GetTopIndex
    //   [13] 0x004221e8  OWL::TComboBox::SetTopIndex
    //   [14] 0x00422208  OWL::TComboBox::GetHorizontalExtent
    //   [15] 0x00422224  OWL::TComboBox::SetHorizontalExtent
    //   [16] 0x00422244  OWL::TComboBox::GetStringLen
    //   [17] 0x00422264  OWL::TComboBox::GetString
    //   [18] 0x00422284  OWL::TComboBox::GetItemData
    //   [19] 0x004222a4  OWL::TComboBox::SetItemData
    //   [20] 0x004222c4  OWL::TComboBox::GetItemHeight
    //   [21] 0x004222e4  OWL::TComboBox::SetItemHeight
    //   [22] 0x00422314  OWL::TComboBox::ClearList
    //   [23] 0x00422330  OWL::TComboBox::DirectoryList
    //   [24] 0x00422350  OWL::TComboBox::AddString
    //   [25] 0x00422370  OWL::TComboBox::InsertString
    //   [26] 0x00422390  OWL::TComboBox::DeleteString
    //   [27] 0x004223b0  OWL::TComboBox::GetSelIndex
    //   [28] 0x004223cc  OWL::TComboBox::SetSelIndex
    //   [29] 0x004aceec  OWL::TComboBox::Transfer
    //   [30] 0x004ad110  OWL::TComboBox::GetClassName
    //   [31] 0x004223ec  OWL::TComboBox::GetSelStringIndex
    //   [32] 0x0042240c  OWL::TComboBox::SetSelString
    //   [33] 0x004ad11c  OWL::TComboBox::SetupWindow
    //   [34] 0x004ad1d0  OWL::TComboBox::CleanupWindow
    //   [35] 0x0041c970  PVWCombo::PreProcessMsg
    // response table at 0x004eedd0 (1 entries)
    //   EV_NOTIFY_AT_CHILD(code 9)                   -> 0x0041c9e4  PVWCombo::NotifyAtChild_9
};
```

### PVWEdit

```cpp
// sizeof 188 (0xbc)  rtti 0x00402a7c  vptr at +0xc  destructor 0x0041b094
class PVWEdit : public OWL::TEdit, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TEdit
    // vtable at 0x004f055c (23 slots)
    //   [ 0] 0x0041b094  PVWEdit::~PVWEdit
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x0041aef0  PVWEdit::Find
    //   [ 9] 0x0041b5d4  PVWEdit::vf9
    //   [10] 0x004b7164  OWL::TEdit::Transfer
    //   [11] 0x004b7024  OWL::TEdit::GetClassName
    //   [12] 0x004b6ec0  OWL::TEdit::GetSubText
    //   [13] 0x00421ff8  OWL::TEdit::GetSelection
    //   [14] 0x00422018  OWL::TEdit::vf14
    //   [15] 0x0042203c  OWL::TEdit::SetSelection
    //   [16] 0x004b6d08  OWL::TEdit::vf16
    //   [17] 0x00422068  OWL::TEdit::Paste
    //   [18] 0x00422084  OWL::TEdit::CharFromPos
    //   [19] 0x004220b0  OWL::TEdit::PosFromChar
    //   [20] 0x004b7030  OWL::TEdit::SetupWindow
    //   [21] 0x004b696c  OWL::TEdit::CanClose
    //   [22] 0x0041b600  PVWEdit::PreProcessMsg
    // response table at 0x004ee9f8 (3 entries)
    //   WM_KILLFOCUS                                 -> 0x004b6720  PVWEdit::EvKillFocus
    //   EV_NOTIFY_AT_CHILD(code 512)                 -> 0x0041b190  PVWEdit::NotifyAtChild_512
    //   EV_NOTIFY_AT_CHILD(code 768)                 -> 0x0041b1b4  PVWEdit::NotifyAtChild_768
};
```

### PVWEnumeration

```cpp
// sizeof 188 (0xbc)  rtti 0x00421868  vptr at +0xc  destructor 0x0041bfe0
class PVWEnumeration : public OWL::TComboBox, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TComboBox
    // vtable at 0x004f0254 (35 slots)
    //   [ 0] 0x0041bfe0  PVWEnumeration::~PVWEnumeration
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x0041be30  PVWEnumeration::Find
    //   [ 9] 0x00422160  OWL::TComboBox::GetCount
    //   [10] 0x0042217c  OWL::TComboBox::FindString
    //   [11] 0x0042219c  OWL::TComboBox::FindExactString
    //   [12] 0x004221cc  OWL::TComboBox::GetTopIndex
    //   [13] 0x004221e8  OWL::TComboBox::SetTopIndex
    //   [14] 0x00422208  OWL::TComboBox::GetHorizontalExtent
    //   [15] 0x00422224  OWL::TComboBox::SetHorizontalExtent
    //   [16] 0x00422244  OWL::TComboBox::GetStringLen
    //   [17] 0x00422264  OWL::TComboBox::GetString
    //   [18] 0x00422284  OWL::TComboBox::GetItemData
    //   [19] 0x004222a4  OWL::TComboBox::SetItemData
    //   [20] 0x004222c4  OWL::TComboBox::GetItemHeight
    //   [21] 0x004222e4  OWL::TComboBox::SetItemHeight
    //   [22] 0x00422314  OWL::TComboBox::ClearList
    //   [23] 0x00422330  OWL::TComboBox::DirectoryList
    //   [24] 0x00422350  OWL::TComboBox::AddString
    //   [25] 0x00422370  OWL::TComboBox::InsertString
    //   [26] 0x00422390  OWL::TComboBox::DeleteString
    //   [27] 0x004223b0  OWL::TComboBox::GetSelIndex
    //   [28] 0x004223cc  OWL::TComboBox::SetSelIndex
    //   [29] 0x004aceec  OWL::TComboBox::Transfer
    //   [30] 0x004ad110  OWL::TComboBox::GetClassName
    //   [31] 0x004223ec  OWL::TComboBox::GetSelStringIndex
    //   [32] 0x0042240c  OWL::TComboBox::SetSelString
    //   [33] 0x0041c0dc  PVWEnumeration::SetupWindow
    //   [34] 0x004ad1d0  OWL::TComboBox::CleanupWindow
    // response table at 0x004eed0c (1 entries)
    //   EV_NOTIFY_AT_CHILD(code 9)                   -> 0x0041c1e4  PVWEnumeration::NotifyAtChild_9
};
```

### PVWFontButton

```cpp
// sizeof 288 (0x120)  rtti 0x00407078  vptr at +0xc  destructor 0x004192dc
class PVWFontButton : public OWL::TButton, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TButton
    // vtable at 0x004f07a4 (12 slots)
    //   [ 0] 0x004192dc  PVWFontButton::~PVWFontButton
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004194d8  PVWFontButton::vf5
    //   [ 6] 0x004194c0  PVWFontButton::vf6
    //   [ 7] 0x004194a8  PVWFontButton::vf7
    //   [ 8] 0x004190f0  PVWFontButton::Find
    //   [ 9] 0x004abe98  OWL::TButton::GetClassName
    //   [10] 0x004abeb8  OWL::TButton::SetupWindow
    //   [11] 0x004193e0  PVWFontButton::PreProcessMsg
    // response table at 0x004ee50c (2 entries)
    //   message id 0 in the static table (filled at run time or WM_NULL) -> 0x00419488  PVWFontButton::EvRegisteredMsg_419488
    //   EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)      -> 0x00419874  PVWFontButton::BNClicked
};
```

### PVWFontMaintainer

```cpp
// sizeof 68 (0x44)  rtti 0x00421818  no vptr  destructor 0x0041e8d8
class PVWFontMaintainer {
};
```

### PVWPathList

```cpp
// sizeof 1472 (0x5c0)  rtti 0x004069d4  no vptr  destructor 0x00420274
class PVWPathList {
    /* +0x000 */ PVWPathListBox m_0;
    /* +0x0b0 */ PVWPathListBox m_b0;
    /* +0x168 */ PVWEdit m_168;
    /* +0x230 */ std::string m_230;
    /* +0x240 */ OWL::TButton m_240;
    /* +0x2ec */ OWL::TButton m_2ec;
    /* +0x398 */ OWL::TButton m_398;
    /* +0x444 */ OWL::TButton m_444;
    /* +0x4f0 */ OWL::TButton m_4f0;
    /* +0x5a0 */ std::string m_5a0;
};
```

### PVWPathListBox

```cpp
// sizeof 176 (0xb0)  rtti 0x004070f4  vptr at +0xc  destructor 0x0041f020
class PVWPathListBox : public OWL::TListBox, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TListBox
    // vtable at 0x004efde0 (32 slots)
    //   [ 0] 0x0041f020  PVWPathListBox::~PVWPathListBox
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x0041ee74  PVWPathListBox::Find
    //   [ 9] 0x00421cd0  OWL::TListBox::GetCount
    //   [10] 0x00421cec  OWL::TListBox::FindString
    //   [11] 0x00421d0c  OWL::TListBox::FindExactString
    //   [12] 0x00421d3c  OWL::TListBox::GetTopIndex
    //   [13] 0x00421d58  OWL::TListBox::SetTopIndex
    //   [14] 0x00421d78  OWL::TListBox::GetHorizontalExtent
    //   [15] 0x00421d94  OWL::TListBox::SetHorizontalExtent
    //   [16] 0x00421db4  OWL::TListBox::GetStringLen
    //   [17] 0x00421dd4  OWL::TListBox::GetString
    //   [18] 0x00421df4  OWL::TListBox::GetItemData
    //   [19] 0x00421e14  OWL::TListBox::SetItemData
    //   [20] 0x00421e34  OWL::TListBox::GetItemHeight
    //   [21] 0x00421e54  OWL::TListBox::SetItemHeight
    //   [22] 0x00421e84  OWL::TListBox::ClearList
    //   [23] 0x00421ea0  OWL::TListBox::DirectoryList
    //   [24] 0x00421ec0  OWL::TListBox::AddString
    //   [25] 0x00421ee0  OWL::TListBox::InsertString
    //   [26] 0x00421f00  OWL::TListBox::DeleteString
    //   [27] 0x004bfda4  OWL::TListBox::GetSelIndex
    //   [28] 0x004bfe0c  OWL::TListBox::SetSelIndex
    //   [29] 0x004bfaf8  PVWPathListBox::Transfer
    //   [30] 0x004bfaec  PVWPathListBox::GetClassName
    //   [31] 0x0041f12c  PVWPathListBox::vf31
    // response table at 0x004ef534 (1 entries)
    //   WM_MOUSEMOVE                                 -> 0x0041eebc  PVWPathListBox::EvMouseMove
};
```

### PVWPushButton

```cpp
// sizeof 200 (0xc8)  rtti 0x00406a6c  vptr at +0xc  destructor 0x00417b74
class PVWPushButton : public OWL::TButton, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TButton
    /* +0x020 */ std::string m_20;
    // vtable at 0x004f0b3c (12 slots)
    //   [ 0] 0x00417b74  PVWPushButton::~PVWPushButton
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x004179a8  PVWPushButton::Find
    //   [ 9] 0x004abe98  OWL::TButton::GetClassName
    //   [10] 0x004abeb8  OWL::TButton::SetupWindow
    //   [11] 0x00417d18  PVWPushButton::PreProcessMsg
    // response table at 0x004ee0b0 (2 entries)
    //   WM_SHOWWINDOW                                -> 0x00417d50  PVWPushButton::EvShowWindow
    //   EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)      -> 0x00417cf4  PVWPushButton::BNClicked
};
```

### PVWRadioButton

```cpp
// sizeof 208 (0xd0)  rtti 0x00406f00  vptr at +0xc  destructor 0x00417ffc
class PVWRadioButton : public OWL::TRadioButton, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TRadioButton
    /* +0x028 */ std::string m_28;
    // vtable at 0x004f0a50 (14 slots)
    //   [ 0] 0x00417ffc  PVWRadioButton::~PVWRadioButton
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x00417dec  PVWRadioButton::Find
    //   [ 9] 0x004c677c  PVWRadioButton::GetClassName
    //   [10] 0x0041823c  PVWRadioButton::SetupWindow
    //   [11] 0x004ac70c  OWL::TCheckBox::Transfer
    //   [12] 0x00418190  PVWRadioButton::PreProcessMsg
    //   [13] 0x004181c8  PVWRadioButton::vf13
    // response table at 0x004ee158 (3 entries)
    //   WM_MOUSEMOVE                                 -> 0x00417e34  PVWRadioButton::EvMouseMove
    //   WM_SHOWWINDOW                                -> 0x004182b4  PVWRadioButton::EvShowWindow
    //   EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)      -> 0x0041826c  PVWRadioButton::BNClicked
};
```

### PVWRichEdit

```cpp
// sizeof 264 (0x108)  rtti 0x00416760  vptr at +0xc  destructor 0x00419db8
class PVWRichEdit : public OWL::TRichEdit, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TRichEdit
    // vtable at 0x004f066c (33 slots)
    //   [ 0] 0x00419db8  PVWRichEdit::~PVWRichEdit
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x00419bb8  PVWRichEdit::Find
    //   [ 9] 0x0041add0  PVWRichEdit::vf9
    //   [10] 0x004697b4  PVWRichEdit::Transfer
    //   [11] 0x004695dc  PVWRichEdit::GetClassName
    //   [12] 0x0046928c  OWL::TRichEdit::GetSubText
    //   [13] 0x004691c4  OWL::TRichEdit::GetSelection
    //   [14] 0x00422018  OWL::TEdit::vf14
    //   [15] 0x0046921c  OWL::TRichEdit::SetSelection
    //   [16] 0x004692dc  OWL::TRichEdit::vf16
    //   [17] 0x00469384  OWL::TRichEdit::Paste
    //   [18] 0x00422084  OWL::TEdit::CharFromPos
    //   [19] 0x004220b0  OWL::TEdit::PosFromChar
    //   [20] 0x0041aa24  PVWRichEdit::SetupWindow
    //   [21] 0x0041aa7c  PVWRichEdit::CanClose
    //   [22] 0x004b8b90  OWL::TEditFile::vf22
    //   [23] 0x004b7eac  OWL::TEditFile::vf23
    //   [24] 0x004b815c  OWL::TEditFile::vf24
    //   [25] 0x00469834  OWL::TRichEdit::ReadFromFile
    //   [26] 0x004b7ef8  OWL::TEditFile::vf26
    //   [27] 0x004b83b4  OWL::TEditFile::vf27
    //   [28] 0x004b8634  OWL::TEditFile::vf28
    //   [29] 0x00469954  OWL::TRichEdit::WriteToFile
    //   [30] 0x0041ad44  PVWRichEdit::vf30
    //   [31] 0x0041adc8  PVWRichEdit::vf31
    //   [32] 0x0041aa84  PVWRichEdit::SetDocTitle
    // response table at 0x004ee6fc (3 entries)
    //   WM_LBUTTONDBLCLK                             -> 0x00419ee0  PVWRichEdit::EvLButtonDblClk
    //   EV_NOTIFY_AT_CHILD(code 512)                 -> 0x00419f0c  PVWRichEdit::NotifyAtChild_512
    //   EV_NOTIFY_AT_CHILD(code 768)                 -> 0x00419f30  PVWRichEdit::NotifyAtChild_768
};
```

### PVWStatic

```cpp
// sizeof 180 (0xb4)  rtti 0x004164a4  vptr at +0xc  destructor 0x0041b7d4
class PVWStatic : public OWL::TStatic, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TStatic
    // vtable at 0x004f0478 (12 slots)
    //   [ 0] 0x0041b7d4  PVWStatic::~PVWStatic
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x0041b638  PVWStatic::Find
    //   [ 9] 0x004c7bdc  OWL::TStatic::vf9
    //   [10] 0x004c7ba4  PVWStatic::Transfer
    //   [11] 0x004c7b84  PVWStatic::GetClassName
    // response table at 0x004eeb8c (1 entries)
    //   EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)      -> 0x0041bad8  PVWStatic::BNClicked
};
```

### PVWTabs

```cpp
// sizeof 176 (0xb0)  rtti 0x004072e8  vptr at +0xc  destructor 0x0041ec18
class PVWTabs : public OWL::TTabControl, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TTabControl
    // vtable at 0x004eff14 (11 slots)
    //   [ 0] 0x0041ec18  PVWTabs::~PVWTabs
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x0041ea80  PVWTabs::Find
    //   [ 9] 0x0049eaf0  OWL::TTabControl::Transfer
    //   [10] 0x0049eadc  OWL::TTabControl::GetClassName
    // response table at 0x004ef4a4 (2 entries)
    //   WM_KEYDOWN                                   -> 0x0041ed14  PVWTabs::EvKeyDown
    //   WM_LBUTTONDBLCLK                             -> 0x0041ee00  PVWTabs::EvLButtonDblClk
};
```

### PVWUpDown

```cpp
// sizeof 196 (0xc4)  rtti 0x004218e4  vptr at +0xc  destructor 0x0041bc94
class PVWUpDown : public OWL::TUpDown, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TUpDown
    // vtable at 0x004f0394 (12 slots)
    //   [ 0] 0x0041bc94  PVWUpDown::~PVWUpDown
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x0041bafc  PVWUpDown::Find
    //   [ 9] 0x004a20b0  PVWUpDown::GetClassName
    //   [10] 0x004a20c4  PVWUpDown::PerformCreate
    //   [11] 0x0041bdb8  PVWUpDown::PreProcessMsg
    // response table at 0x004eec94 (1 entries)
    //   WM_VSCROLL                                   -> 0x0041bdf0  PVWUpDown::EvVScroll
};
```

### PVWURL

```cpp
// sizeof 216 (0xd8)  rtti 0x0041385c  vptr at +0xc  destructor 0x0041d7b0
class PVWURL : public OWL::TEdit, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TEdit
    /* +0x020 */ std::string m_20;
    // vtable at 0x004efff4 (26 slots)
    //   [ 0] 0x0041d7b0  PVWURL::~PVWURL
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x0041d510  PVWURL::Find
    //   [ 9] 0x004b6954  OWL::TEdit::vf9
    //   [10] 0x004b7164  OWL::TEdit::Transfer
    //   [11] 0x004b7024  OWL::TEdit::GetClassName
    //   [12] 0x004b6ec0  OWL::TEdit::GetSubText
    //   [13] 0x00421ff8  OWL::TEdit::GetSelection
    //   [14] 0x00422018  OWL::TEdit::vf14
    //   [15] 0x0042203c  OWL::TEdit::SetSelection
    //   [16] 0x004b6d08  OWL::TEdit::vf16
    //   [17] 0x00422068  OWL::TEdit::Paste
    //   [18] 0x00422084  OWL::TEdit::CharFromPos
    //   [19] 0x004220b0  OWL::TEdit::PosFromChar
    //   [20] 0x0041d930  PVWURL::SetupWindow
    //   [21] 0x004b696c  OWL::TEdit::CanClose
    //   [22] 0x0041e774  PVWURL::vf22
    //   [23] 0x0041e7a4  PVWURL::vf23
    //   [24] 0x0041e7ec  PVWURL::vf24
    //   [25] 0x0041e82c  PVWURL::vf25
    // response table at 0x004ef11c (4 entries)
    //   WM_GETDLGCODE                                -> 0x0041d558  PVWURL::EvGetDlgCode
    //   WM_LBUTTONDOWN                               -> 0x0041d564  PVWURL::EvLButtonDown
    //   WM_MOUSEMOVE                                 -> 0x0041d570  PVWURL::EvMouseMove
    //   WM_LBUTTONUP                                 -> 0x0041d57c  PVWURL::EvLButtonUp
};
```

### SearchModeButton

```cpp
// sizeof 174 (0xae)  rtti 0x0045e9f4  vptr at +0xc  destructor 0x0045ed70
class SearchModeButton : public OWL::TStatic, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TStatic
    // vtable at 0x004fa140 (13 slots)
    //   [ 0] 0x0045ed70  SearchModeButton::~SearchModeButton
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x00450ad8  SearchModeButton::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x004c789c  OWL::TStatic::Find
    //   [ 9] 0x004c7bdc  OWL::TStatic::vf9
    //   [10] 0x004c7ba4  PVWStatic::Transfer
    //   [11] 0x004c7b84  PVWStatic::GetClassName
    //   [12] 0x00450a78  SearchModeButton::vf12
};
```

### TabbyPropertiesViewWindows

```cpp
// sizeof 440 (0x1b8)  rtti 0x00406df0  vptr at +0xc  destructor 0x00467f50
class TabbyPropertiesViewWindows : public PropertiesViewWindows, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject PropertiesViewWindows
    /* +0x060 */ PVWTabs m_60;
    // vtable at 0x004fca18 (49 slots)
    //   [ 0] 0x00467f50  TabbyPropertiesViewWindows::~TabbyPropertiesViewWindows
    //   [ 1] 0x004b0624  OWL::TDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x004b0870  OWL::TDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x004b094c  OWL::TDialog::DoExecute
    //   [ 7] 0x0046819c  TabbyPropertiesViewWindows::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x00415264  PropertiesViewWindows::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x0046823c  TabbyPropertiesViewWindows::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x00467d40  TabbyPropertiesViewWindows::Find
    //   [15] 0x00468070  TabbyPropertiesViewWindows::SetupTooltips
    //   [16] 0x004141fc  PropertiesViewWindows::DestroyTooltips
    //   [17] 0x00414264  PropertiesViewWindows::IsTooltipActive
    //   [18] 0x00468400  TabbyPropertiesViewWindows::EnableControls
    //   [19] 0x00415174  PropertiesViewWindows::OnButton
    //   [20] 0x0041517c  PropertiesViewWindows::OnStaticClicked
    //   [21] 0x00415184  PropertiesViewWindows::OnEditKillFocus
    //   [22] 0x0041518c  PropertiesViewWindows::OnEditChange
    //   [23] 0x00415194  PropertiesViewWindows::OnDoubleClick
    //   [24] 0x0041519c  PropertiesViewWindows::OnUpDown
    //   [25] 0x004151a4  PropertiesViewWindows::OnNotify25
    //   [26] 0x004151ac  PropertiesViewWindows::OnNotify26
    //   [27] 0x004151b4  PropertiesViewWindows::OnColourChanged
    //   [28] 0x004151bc  PropertiesViewWindows::OnFontChanged
    //   [29] 0x004151c4  PropertiesViewWindows::OnComboChange
    //   [30] 0x004151cc  PropertiesViewWindows::OnNotify30
    //   [31] 0x004680a8  TabbyPropertiesViewWindows::OnMouseOverControl
    //   [32] 0x004151dc  PropertiesViewWindows::OnTextClicked
    //   [33] 0x00415208  PropertiesViewWindows::IsResizable
    //   [34] 0x00415210  PropertiesViewWindows::GetSectionName
    //   [35] 0x00415254  PropertiesViewWindows::OnNotify35
    //   [36] 0x0041525c  PropertiesViewWindows::OnSelectionCommitted
    //   [37] 0x00415200  PropertiesViewWindows::OnPathListChanged
    //   [38] 0x00468158  TabbyPropertiesViewWindows::EvNotify
    //   [39] 0x00416320  PropertiesViewWindows::EvCtlColor
    //   [40] 0x0041651c  PropertiesViewWindows::EvSize
    //   [41] 0x00415328  PropertiesViewWindows::OnPropertyChanged
    //   [42] 0x00415344  PropertiesViewWindows::LoadResourceString
    //   [43] 0x004681fc  TabbyPropertiesViewWindows::ShowControlTip
    //   [44] 0x00415e18  PropertiesViewWindows::GetLookupWord
    //   [45] 0x004683c0  TabbyPropertiesViewWindows::ShowHelp
    //   [46] 0x00468548  TabbyPropertiesViewWindows::GetControlTipText
    //   [47] 0x00417490  PropertiesViewWindows::SetupMoveableControls
    //   [48] 0x00468428  TabbyPropertiesViewWindows::OnPageChanged
    // response table at 0x004fc888 (1 entries)
    //   EV_CHILD_NOTIFY(id 8030, code -551)          -> 0x00450b3c  TEAViewWindows::EvLButtonDown
};
```

### TEAAppWindows

```cpp
// sizeof 132 (0x84)  rtti 0x00475644  vptr at +0x1b  destructor 0x00474ef0
class TEAAppWindows : public OWL::TApplication, public virtual OWL::TEventHandler {
    /* +0x000 */ // base subobject OWL::TApplication
    // vtable at 0x004ffc48 (19 slots)
    //   [ 0] 0x00474ef0  TEAAppWindows::~TEAAppWindows
    //   [ 1] 0x004aad98  OWL::TApplication::vf1
    //   [ 2] 0x004a9708  OWL::TApplication::vf2
    //   [ 3] 0x004a9b90  OWL::TApplication::vf3
    //   [ 4] 0x004aa150  OWL::TApplication::vf4
    //   [ 5] 0x004aa88c  OWL::TApplication::vf5
    //   [ 6] 0x004aa8b0  OWL::TApplication::vf6
    //   [ 7] 0x004aa96c  OWL::TApplication::vf7
    //   [ 8] 0x004aaa54  OWL::TApplication::vf8
    //   [ 9] 0x004757ac  OWL::TApplication::vf9
    //   [10] 0x004aae10  OWL::TApplication::vf10
    //   [11] 0x004aad34  OWL::TApplication::Find
    //   [12] 0x004a9444  OWL::TApplication::vf12
    //   [13] 0x004757b4  OWL::TApplication::vf13
    //   [14] 0x004aab38  OWL::TApplication::vf14
    //   [15] 0x004a94d8  OWL::TApplication::vf15
    //   [16] 0x00475584  TEAAppWindows::vf16
    //   [17] 0x00474fb8  TEAAppWindows::vf17
    //   [18] 0x004a95c0  OWL::TApplication::vf18
};
```

### TEADictionaryPropertiesWindows

```cpp
// sizeof 2784 (0xae0)  rtti 0x00402544  vptr at +0xc  destructor 0x004014d0
class TEADictionaryPropertiesWindows : public PropertiesViewWindows, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject PropertiesViewWindows
    /* +0x068 */ OWL::TGroupBox m_68;
    /* +0x114 */ PVWEdit m_114;
    /* +0x1d0 */ PVWEdit m_1d0;
    /* +0x28c */ PVWEdit m_28c;
    /* +0x348 */ OWL::TStatic m_348;
    /* +0x3f6 */ OWL::TStatic m_3f6;
    /* +0x4a4 */ OWL::TStatic m_4a4;
    /* +0x552 */ OWL::TStatic m_552;
    /* +0x600 */ PVWEdit m_600;
    /* +0x6bc */ PVWEdit m_6bc;
    /* +0x778 */ PVWEdit m_778;
    /* +0x834 */ PVWEdit m_834;
    /* +0x8f0 */ OWL::TButton m_8f0;
    /* +0x99c */ OWL::TButton m_99c;
    // vtable at 0x004ea7c8 (48 slots)
    //   [ 0] 0x004014d0  TEADictionaryPropertiesWindows::~TEADictionaryPropertiesWindows
    //   [ 1] 0x004b0624  OWL::TDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x004b0870  OWL::TDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x004b094c  OWL::TDialog::DoExecute
    //   [ 7] 0x004167d8  PropertiesViewWindows::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x00415264  PropertiesViewWindows::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x004018d4  TEADictionaryPropertiesWindows::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x00413c7c  PropertiesViewWindows::Find
    //   [15] 0x0041413c  PropertiesViewWindows::SetupTooltips
    //   [16] 0x004141fc  PropertiesViewWindows::DestroyTooltips
    //   [17] 0x00414264  PropertiesViewWindows::IsTooltipActive
    //   [18] 0x00415154  PropertiesViewWindows::EnableControls
    //   [19] 0x00415174  PropertiesViewWindows::OnButton
    //   [20] 0x0041517c  PropertiesViewWindows::OnStaticClicked
    //   [21] 0x00415184  PropertiesViewWindows::OnEditKillFocus
    //   [22] 0x0041518c  PropertiesViewWindows::OnEditChange
    //   [23] 0x00415194  PropertiesViewWindows::OnDoubleClick
    //   [24] 0x0041519c  PropertiesViewWindows::OnUpDown
    //   [25] 0x004151a4  PropertiesViewWindows::OnNotify25
    //   [26] 0x004151ac  PropertiesViewWindows::OnNotify26
    //   [27] 0x004151b4  PropertiesViewWindows::OnColourChanged
    //   [28] 0x004151bc  PropertiesViewWindows::OnFontChanged
    //   [29] 0x004151c4  PropertiesViewWindows::OnComboChange
    //   [30] 0x004151cc  PropertiesViewWindows::OnNotify30
    //   [31] 0x004151d4  PropertiesViewWindows::OnMouseOverControl
    //   [32] 0x004151dc  PropertiesViewWindows::OnTextClicked
    //   [33] 0x00415208  PropertiesViewWindows::IsResizable
    //   [34] 0x00415210  PropertiesViewWindows::GetSectionName
    //   [35] 0x00415254  PropertiesViewWindows::OnNotify35
    //   [36] 0x0041525c  PropertiesViewWindows::OnSelectionCommitted
    //   [37] 0x00415200  PropertiesViewWindows::OnPathListChanged
    //   [38] 0x00416964  PropertiesViewWindows::EvNotify
    //   [39] 0x00416320  PropertiesViewWindows::EvCtlColor
    //   [40] 0x0041651c  PropertiesViewWindows::EvSize
    //   [41] 0x00415328  PropertiesViewWindows::OnPropertyChanged
    //   [42] 0x00415344  PropertiesViewWindows::LoadResourceString
    //   [43] 0x004153a8  PropertiesViewWindows::ShowControlTip
    //   [44] 0x00415e18  PropertiesViewWindows::GetLookupWord
    //   [45] 0x00415be8  PropertiesViewWindows::ShowHelp
    //   [46] 0x00415e7c  PropertiesViewWindows::GetControlTipText
    //   [47] 0x0040209c  TEADictionaryPropertiesWindows::SetupMoveableControls
};
```

### TEAFrameWindow

```cpp
// sizeof 308 (0x134)  rtti 0x00475724  vptr at +0x35  destructor 0x00474188
class TEAFrameWindow : public OWL::TDecoratedFrame, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow, public virtual OWL::TFrameWindow {
    /* +0x000 */ // base subobject OWL::TDecoratedFrame
    // vtable at 0x004ffcdc (17 slots)
    //   [ 0] 0x00474188  TEAFrameWindow::~TEAFrameWindow
    //   [ 1] 0x004afa14  OWL::TDecoratedFrame::vf1
    //   [ 2] 0x004aec4c  OWL::TDecoratedFrame::vf2
    //   [ 3] 0x004aebdc  OWL::TDecoratedFrame::PreProcessMsg
    //   [ 4] 0x004ae9f8  OWL::TDecoratedFrame::TFrameWindow_vf7
    //   [ 5] 0x004afadc  OWL::TDecoratedFrame::vf5
    //   [ 6] 0x004afbc4  OWL::TDecoratedFrame::TFrameWindow_vf4
    //   [ 7] 0x004afc04  OWL::TDecoratedFrame::TFrameWindow_vf5
    //   [ 8] 0x004afb58  OWL::TDecoratedFrame::vf8
    //   [ 9] 0x004747ac  TEAFrameWindow::SetupWindow
    //   [10] 0x004ae9c4  OWL::TDecoratedFrame::CleanupWindow
    //   [11] 0x004aeb9c  OWL::TDecoratedFrame::RemoveChild
    //   [12] 0x004aefd0  OWL::TDecoratedFrame::EvCommand
    //   [13] 0x004af148  OWL::TDecoratedFrame::EvCommandEnable
    //   [14] 0x00473f30  TEAFrameWindow::Find
    //   [15] 0x00474764  TEAFrameWindow::GetClassName
    //   [16] 0x00474838  TEAFrameWindow::CanClose
    // response table at 0x004ff434 (43 entries)
    //   message id 0 in the static table (filled at run time or WM_NULL) -> 0x00474770  TEAFrameWindow::EvRegisteredMsg_474770
    //   WM_INITMENUPOPUP                             -> 0x0047431c  TEAFrameWindow::EvInitMenuPopup
    //   EV_COMMAND_ENABLE(3780)                      -> 0x004748a0  TEAFrameWindow::CeFilePageSetup   // &File > Page Set&up...
    //   EV_COMMAND_ENABLE(7580)                      -> 0x004748c8  TEAFrameWindow::CeShared_4748c8   // &File > &Close * | &Close
    //   EV_COMMAND_ENABLE(7600)                      -> 0x004748c8  TEAFrameWindow::CeShared_4748c8   // &File > &Demote * | &Demote
    //   EV_COMMAND_ENABLE(7590)                      -> 0x004748c8  TEAFrameWindow::CeShared_4748c8   // &File > Pro&mote * | Pro&mote
    //   EV_COMMAND_ENABLE(7560)                      -> 0x004748c8  TEAFrameWindow::CeShared_4748c8   // T&ools > &Options...
    //   EV_COMMAND_ENABLE(7620)                      -> 0x004748c8  TEAFrameWindow::CeShared_4748c8   // &Edit > Cu&t	Ctrl+X
    //   EV_COMMAND_ENABLE(7610)                      -> 0x004748c8  TEAFrameWindow::CeShared_4748c8   // &Edit > &Paste	Ctrl+V
    //   EV_COMMAND_ENABLE(14870)                     -> 0x004748c8  TEAFrameWindow::CeShared_4748c8   // &Window > Always On &Top
    //   EV_COMMAND_ENABLE(11860)                     -> 0x004748c8  TEAFrameWindow::CeShared_4748c8   // &Window > Tile &Horizontal
    //   EV_COMMAND_ENABLE(11870)                     -> 0x004748c8  TEAFrameWindow::CeShared_4748c8   // &Window > Tile &Vertical
    //   EV_COMMAND(4840)                             -> 0x00474938  TEAFrameWindow::CmRange4840to4849   // &File > 
    //   EV_COMMAND(4841)                             -> 0x00474938  TEAFrameWindow::CmRange4840to4849
    //   EV_COMMAND(4842)                             -> 0x00474938  TEAFrameWindow::CmRange4840to4849
    //   EV_COMMAND(4843)                             -> 0x00474938  TEAFrameWindow::CmRange4840to4849
    //   EV_COMMAND(4844)                             -> 0x00474938  TEAFrameWindow::CmRange4840to4849
    //   EV_COMMAND(4845)                             -> 0x00474938  TEAFrameWindow::CmRange4840to4849
    //   EV_COMMAND(4846)                             -> 0x00474938  TEAFrameWindow::CmRange4840to4849
    //   EV_COMMAND(4847)                             -> 0x00474938  TEAFrameWindow::CmRange4840to4849
    //   EV_COMMAND(4848)                             -> 0x00474938  TEAFrameWindow::CmRange4840to4849
    //   EV_COMMAND(4849)                             -> 0x00474938  TEAFrameWindow::CmRange4840to4849
    //   EV_COMMAND(7620)                             -> 0x00474a3c  TEAFrameWindow::CmShared_474a3c   // &Edit > Cu&t	Ctrl+X
    //   EV_COMMAND(7610)                             -> 0x00474a3c  TEAFrameWindow::CmShared_474a3c   // &Edit > &Paste	Ctrl+V
    //   EV_COMMAND(11860)                            -> 0x00474adc  TEAFrameWindow::CmShared_474adc   // &Window > Tile &Horizontal
    //   EV_COMMAND(11870)                            -> 0x00474adc  TEAFrameWindow::CmShared_474adc   // &Window > Tile &Vertical
    //   EV_COMMAND(7580)                             -> 0x004748e0  TEAFrameWindow::CmFileClose   // &File > &Close * | &Close
    //   EV_COMMAND(7600)                             -> 0x004748f4  TEAFrameWindow::CmFileDemote   // &File > &Demote * | &Demote
    //   EV_COMMAND(7590)                             -> 0x0047490c  TEAFrameWindow::CmFilePromote   // &File > Pro&mote * | Pro&mote
    //   EV_COMMAND(7560)                             -> 0x00474924  TEAFrameWindow::CmToolsOptions   // T&ools > &Options...
    //   EV_COMMAND(3780)                             -> 0x00474a28  TEAFrameWindow::CmFilePageSetup   // &File > Page Set&up...
    //   EV_COMMAND(4980)                             -> 0x00474a54  TEAFrameWindow::CmToolsDictionaryBuilder   // T&ools > &Dictionary Builder
    //   EV_COMMAND(5120)                             -> 0x00474a70  TEAFrameWindow::CmToolsWordListMerge   // T&ools > &Word List Merge
    //   EV_COMMAND(14870)                            -> 0x00474a8c  TEAFrameWindow::CmWindowAlwaysOnTop   // &Window > Always On &Top
    //   EV_COMMAND(4820)                             -> 0x00474af4  TEAFrameWindow::CmHelpQuickReference   // &Help > &Quick Reference...
    //   EV_COMMAND(13390)                            -> 0x00474b0c  TEAFrameWindow::CmHelpStartupTips   // &Help > &Startup Tips...
    //   EV_COMMAND(3770)                             -> 0x00474b20  TEAFrameWindow::CmHelpContents   // &Help > &Contents
    //   EV_COMMAND(5670)                             -> 0x00474b40  TEAFrameWindow::CmHelpOnlineTutorial   // &Help > Online &Tutorial
    //   EV_COMMAND(12110)                            -> 0x00474b5c  TEAFrameWindow::CmHelpEmailSupport   // &Help > &Email Support
    //   EV_COMMAND(6740)                             -> 0x00474b78  TEAFrameWindow::CmHelpOnlineHelp   // &Help > Online &Help
    //   EV_COMMAND(6750)                             -> 0x00474b94  TEAFrameWindow::CmHelpOnlineOrdering   // &Help > Online &Ordering
    //   EV_COMMAND(6760)                             -> 0x00474bb0  TEAFrameWindow::CmHelpOrderForm   // &Help > Order &Form...
    //   EV_COMMAND(1770)                             -> 0x00474d04  TEAFrameWindow::CmHelpAboutTEA   // &Help > &About TEA...
};
```

### TEAPrintout

```cpp
// sizeof 248 (0xf8)  rtti 0x00404474  vptr at +0x0  destructor 0x004030f4
class TEAPrintout : public PrintPreviewPrintout {
    /* +0x000 */ // base subobject PrintPreviewPrintout
    /* +0x0c0 */ std::vector<TEAPrintout::PageInfo> m_c0;
    // vtable at 0x004eac88 (10 slots)
    //   [ 0] 0x004030f4  TEAPrintout::~TEAPrintout
    //   [ 1] 0x004c6584  OWL::TPrintout::vf1
    //   [ 2] 0x00403478  TEAPrintout::vf2
    //   [ 3] 0x004c65c4  OWL::TPrintout::vf3
    //   [ 4] 0x004c65cc  OWL::TPrintout::vf4
    //   [ 5] 0x00404258  TEAPrintout::vf5
    //   [ 6] 0x00403194  TEAPrintout::vf6
    //   [ 7] 0x004c65ec  OWL::TPrintout::vf7
    //   [ 8] 0x004c65f4  OWL::TPrintout::vf8
    //   [ 9] 0x0040343c  TEAPrintout::vf9
};
```

### TEAPrintout::PageInfo

```cpp
// sizeof 8 (0x8)  rtti 0x004042fc  no vptr
class TEAPrintout::PageInfo {
};
```

### TEAPrintoutFeeder

```cpp
// sizeof 16 (0x10)  rtti 0x0043c5c8  vptr at +0x0  destructor 0x0043c3a8
class TEAPrintoutFeeder : public PrintoutFeeder {
    /* +0x000 */ // base subobject PrintoutFeeder
    // vtable at 0x004f4ec0 (6 slots)
    //   [ 0] 0x0043c3a8  TEAPrintoutFeeder::~TEAPrintoutFeeder
    //   [ 1] 0x0043c414  TEAPrintoutFeeder::vf1
    //   [ 2] 0x0043c428  TEAPrintoutFeeder::vf2
    //   [ 3] 0x0043c43c  TEAPrintoutFeeder::vf3
    //   [ 4] 0x0043c4ec  TEAPrintoutFeeder::vf4
    //   [ 5] 0x0043c510  TEAPrintoutFeeder::vf5
};
```

### TEAProgressBar

```cpp
// sizeof 220 (0xdc)  rtti 0x0045eb0c  vptr at +0xc  destructor 0x0044fc80
class TEAProgressBar : public OWL::TButton, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TButton
    // vtable at 0x004fa228 (12 slots)
    //   [ 0] 0x0044fc80  TEAProgressBar::~TEAProgressBar
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x00450068  TEAProgressBar::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x004abb94  OWL::TButton::Find
    //   [ 9] 0x004abe98  OWL::TButton::GetClassName
    //   [10] 0x004abeb8  OWL::TButton::SetupWindow
    //   [11] 0x004508e0  TEAProgressBar::PreProcessMsg
};
```

### TEAPropertiesViewWindows

```cpp
// sizeof 8440 (0x20f8)  rtti 0x00406af0  vptr at +0xc  destructor 0x00404f80
class TEAPropertiesViewWindows : public TabbyPropertiesViewWindows, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject TabbyPropertiesViewWindows
    /* +0x120 */ PVWEdit m_120;
    /* +0x1dc */ PVWEdit m_1dc;
    /* +0x298 */ PVWCheckBox m_298;
    /* +0x360 */ PVWCheckBox m_360;
    /* +0x428 */ PVWRadioButton m_428;
    /* +0x4f8 */ PVWRadioButton m_4f8;
    /* +0x5c8 */ PVWRadioButton m_5c8;
    /* +0x698 */ PVWPushButton m_698;
    /* +0x760 */ PVWCombo m_760;
    /* +0x818 */ OWL::TStatic m_818;
    /* +0x8c8 */ PVWColourButton m_8c8;
    /* +0x98c */ OWL::TStatic m_98c;
    /* +0xa40 */ PVWFontButton m_a40;
    /* +0xb60 */ OWL::TStatic m_b60;
    /* +0xc10 */ PVWFontButton m_c10;
    /* +0xd30 */ OWL::TStatic m_d30;
    /* +0xde0 */ PVWFontButton m_de0;
    /* +0xf00 */ OWL::TStatic m_f00;
    /* +0xfb0 */ PVWFontButton m_fb0;
    /* +0x10d0 */ OWL::TStatic m_10d0;
    /* +0x1180 */ PVWFontButton m_1180;
    /* +0x12a0 */ OWL::TStatic m_12a0;
    /* +0x1350 */ PVWFontButton m_1350;
    /* +0x1470 */ PVWCheckBox m_1470;
    /* +0x1538 */ PVWCheckBox m_1538;
    /* +0x1600 */ PVWRadioButton m_1600;
    /* +0x16d0 */ PVWRadioButton m_16d0;
    /* +0x17a0 */ PVWCheckBox m_17a0;
    /* +0x1868 */ PVWRadioButton m_1868;
    /* +0x1938 */ PVWRadioButton m_1938;
    /* +0x1a08 */ PVWRadioButton m_1a08;
    /* +0x1ad8 */ PVWCheckBox m_1ad8;
    /* +0x1ba0 */ PVWCheckBox m_1ba0;
    /* +0x1c68 */ PVWCheckBox m_1c68;
    /* +0x1d30 */ PVWCheckBox m_1d30;
    /* +0x1df8 */ PVWCheckBox m_1df8;
    /* +0x1ec0 */ PVWCheckBox m_1ec0;
    /* +0x1f98 */ PVWPushButton m_1f98;
    // vtable at 0x004eb1fc (49 slots)
    //   [ 0] 0x00404f80  TEAPropertiesViewWindows::~TEAPropertiesViewWindows
    //   [ 1] 0x004b0624  OWL::TDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x004b0870  OWL::TDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x004b094c  OWL::TDialog::DoExecute
    //   [ 7] 0x0046819c  TabbyPropertiesViewWindows::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x00415264  PropertiesViewWindows::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x004062dc  TEAPropertiesViewWindows::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x00467d40  TabbyPropertiesViewWindows::Find
    //   [15] 0x00468070  TabbyPropertiesViewWindows::SetupTooltips
    //   [16] 0x004141fc  PropertiesViewWindows::DestroyTooltips
    //   [17] 0x00414264  PropertiesViewWindows::IsTooltipActive
    //   [18] 0x00468400  TabbyPropertiesViewWindows::EnableControls
    //   [19] 0x00405630  TEAPropertiesViewWindows::OnButton
    //   [20] 0x0041517c  PropertiesViewWindows::OnStaticClicked
    //   [21] 0x00406094  TEAPropertiesViewWindows::OnEditKillFocus
    //   [22] 0x0041518c  PropertiesViewWindows::OnEditChange
    //   [23] 0x00415194  PropertiesViewWindows::OnDoubleClick
    //   [24] 0x0041519c  PropertiesViewWindows::OnUpDown
    //   [25] 0x004151a4  PropertiesViewWindows::OnNotify25
    //   [26] 0x004151ac  PropertiesViewWindows::OnNotify26
    //   [27] 0x00405d64  TEAPropertiesViewWindows::OnColourChanged
    //   [28] 0x00405df0  TEAPropertiesViewWindows::OnFontChanged
    //   [29] 0x00405d40  TEAPropertiesViewWindows::OnComboChange
    //   [30] 0x004151cc  PropertiesViewWindows::OnNotify30
    //   [31] 0x004680a8  TabbyPropertiesViewWindows::OnMouseOverControl
    //   [32] 0x004151dc  PropertiesViewWindows::OnTextClicked
    //   [33] 0x00415208  PropertiesViewWindows::IsResizable
    //   [34] 0x00415210  PropertiesViewWindows::GetSectionName
    //   [35] 0x00415254  PropertiesViewWindows::OnNotify35
    //   [36] 0x004061d0  TEAPropertiesViewWindows::OnSelectionCommitted
    //   [37] 0x00415200  PropertiesViewWindows::OnPathListChanged
    //   [38] 0x00468158  TabbyPropertiesViewWindows::EvNotify
    //   [39] 0x00416320  PropertiesViewWindows::EvCtlColor
    //   [40] 0x0041651c  PropertiesViewWindows::EvSize
    //   [41] 0x00415328  PropertiesViewWindows::OnPropertyChanged
    //   [42] 0x00415344  PropertiesViewWindows::LoadResourceString
    //   [43] 0x004681fc  TabbyPropertiesViewWindows::ShowControlTip
    //   [44] 0x00415e18  PropertiesViewWindows::GetLookupWord
    //   [45] 0x004683c0  TabbyPropertiesViewWindows::ShowHelp
    //   [46] 0x00468548  TabbyPropertiesViewWindows::GetControlTipText
    //   [47] 0x00417490  PropertiesViewWindows::SetupMoveableControls
    //   [48] 0x004068c8  TEAPropertiesViewWindows::OnPageChanged
};
```

### TEAQuickReferenceViewWindows

```cpp
// sizeof 520 (0x208)  rtti 0x0045a588  vptr at +0xc  destructor 0x00467594
class TEAQuickReferenceViewWindows : public PropertiesViewWindows, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject PropertiesViewWindows
    /* +0x0bc */ OWL::TCheckBox m_bc;
    // vtable at 0x004fc6fc (48 slots)
    //   [ 0] 0x00467594  TEAQuickReferenceViewWindows::~TEAQuickReferenceViewWindows
    //   [ 1] 0x004b0624  OWL::TDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x004b0870  OWL::TDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x004b094c  OWL::TDialog::DoExecute
    //   [ 7] 0x004167d8  PropertiesViewWindows::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x00415264  PropertiesViewWindows::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x00467898  TEAQuickReferenceViewWindows::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x00413c7c  PropertiesViewWindows::Find
    //   [15] 0x0041413c  PropertiesViewWindows::SetupTooltips
    //   [16] 0x004141fc  PropertiesViewWindows::DestroyTooltips
    //   [17] 0x00414264  PropertiesViewWindows::IsTooltipActive
    //   [18] 0x00415154  PropertiesViewWindows::EnableControls
    //   [19] 0x00415174  PropertiesViewWindows::OnButton
    //   [20] 0x0041517c  PropertiesViewWindows::OnStaticClicked
    //   [21] 0x00415184  PropertiesViewWindows::OnEditKillFocus
    //   [22] 0x0041518c  PropertiesViewWindows::OnEditChange
    //   [23] 0x00415194  PropertiesViewWindows::OnDoubleClick
    //   [24] 0x0041519c  PropertiesViewWindows::OnUpDown
    //   [25] 0x004151a4  PropertiesViewWindows::OnNotify25
    //   [26] 0x004151ac  PropertiesViewWindows::OnNotify26
    //   [27] 0x004151b4  PropertiesViewWindows::OnColourChanged
    //   [28] 0x004151bc  PropertiesViewWindows::OnFontChanged
    //   [29] 0x004151c4  PropertiesViewWindows::OnComboChange
    //   [30] 0x004151cc  PropertiesViewWindows::OnNotify30
    //   [31] 0x004151d4  PropertiesViewWindows::OnMouseOverControl
    //   [32] 0x004677e4  TEAQuickReferenceViewWindows::OnTextClicked
    //   [33] 0x00415208  PropertiesViewWindows::IsResizable
    //   [34] 0x00415210  PropertiesViewWindows::GetSectionName
    //   [35] 0x00415254  PropertiesViewWindows::OnNotify35
    //   [36] 0x0041525c  PropertiesViewWindows::OnSelectionCommitted
    //   [37] 0x00415200  PropertiesViewWindows::OnPathListChanged
    //   [38] 0x00416964  PropertiesViewWindows::EvNotify
    //   [39] 0x00467ae8  TEAQuickReferenceViewWindows::EvCtlColor
    //   [40] 0x0041651c  PropertiesViewWindows::EvSize
    //   [41] 0x00415328  PropertiesViewWindows::OnPropertyChanged
    //   [42] 0x00415344  PropertiesViewWindows::LoadResourceString
    //   [43] 0x004153a8  PropertiesViewWindows::ShowControlTip
    //   [44] 0x00415e18  PropertiesViewWindows::GetLookupWord
    //   [45] 0x00415be8  PropertiesViewWindows::ShowHelp
    //   [46] 0x00415e7c  PropertiesViewWindows::GetControlTipText
    //   [47] 0x00417490  PropertiesViewWindows::SetupMoveableControls
};
```

### TEAStartupTipsViewWindows

```cpp
// sizeof 872 (0x368)  rtti 0x0045b7f4  vptr at +0xc  destructor 0x0047ad78
class TEAStartupTipsViewWindows : public PropertiesViewWindows, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject PropertiesViewWindows
    /* +0x060 */ std::vector<std::string> m_60;
    /* +0x090 */ PVWPushButton m_90;
    /* +0x158 */ PVWPushButton m_158;
    /* +0x220 */ OWL::TCheckBox m_220;
    // vtable at 0x00501188 (48 slots)
    //   [ 0] 0x0047ad78  TEAStartupTipsViewWindows::~TEAStartupTipsViewWindows
    //   [ 1] 0x004b0624  OWL::TDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x004b0870  OWL::TDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x004b094c  OWL::TDialog::DoExecute
    //   [ 7] 0x004167d8  PropertiesViewWindows::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x0047b850  TEAStartupTipsViewWindows::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x0047afbc  TEAStartupTipsViewWindows::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x00413c7c  PropertiesViewWindows::Find
    //   [15] 0x0047af90  TEAStartupTipsViewWindows::SetupTooltips
    //   [16] 0x004141fc  PropertiesViewWindows::DestroyTooltips
    //   [17] 0x00414264  PropertiesViewWindows::IsTooltipActive
    //   [18] 0x00415154  PropertiesViewWindows::EnableControls
    //   [19] 0x0047af58  TEAStartupTipsViewWindows::OnButton
    //   [20] 0x0041517c  PropertiesViewWindows::OnStaticClicked
    //   [21] 0x00415184  PropertiesViewWindows::OnEditKillFocus
    //   [22] 0x0041518c  PropertiesViewWindows::OnEditChange
    //   [23] 0x00415194  PropertiesViewWindows::OnDoubleClick
    //   [24] 0x0041519c  PropertiesViewWindows::OnUpDown
    //   [25] 0x004151a4  PropertiesViewWindows::OnNotify25
    //   [26] 0x004151ac  PropertiesViewWindows::OnNotify26
    //   [27] 0x004151b4  PropertiesViewWindows::OnColourChanged
    //   [28] 0x004151bc  PropertiesViewWindows::OnFontChanged
    //   [29] 0x004151c4  PropertiesViewWindows::OnComboChange
    //   [30] 0x004151cc  PropertiesViewWindows::OnNotify30
    //   [31] 0x004151d4  PropertiesViewWindows::OnMouseOverControl
    //   [32] 0x004151dc  PropertiesViewWindows::OnTextClicked
    //   [33] 0x00415208  PropertiesViewWindows::IsResizable
    //   [34] 0x00415210  PropertiesViewWindows::GetSectionName
    //   [35] 0x00415254  PropertiesViewWindows::OnNotify35
    //   [36] 0x0041525c  PropertiesViewWindows::OnSelectionCommitted
    //   [37] 0x00415200  PropertiesViewWindows::OnPathListChanged
    //   [38] 0x00416964  PropertiesViewWindows::EvNotify
    //   [39] 0x00416320  PropertiesViewWindows::EvCtlColor
    //   [40] 0x0041651c  PropertiesViewWindows::EvSize
    //   [41] 0x00415328  PropertiesViewWindows::OnPropertyChanged
    //   [42] 0x00415344  PropertiesViewWindows::LoadResourceString
    //   [43] 0x004153a8  PropertiesViewWindows::ShowControlTip
    //   [44] 0x00415e18  PropertiesViewWindows::GetLookupWord
    //   [45] 0x00415be8  PropertiesViewWindows::ShowHelp
    //   [46] 0x00415e7c  PropertiesViewWindows::GetControlTipText
    //   [47] 0x00417490  PropertiesViewWindows::SetupMoveableControls
};
```

### TEAViewProfileWindows

```cpp
// sizeof 496 (0x1f0)  rtti 0x0043bb48  no vptr  destructor 0x00439ea0
class TEAViewProfileWindows {
    /* +0x000 */ std::string m_0;
    /* +0x010 */ std::string m_10;
    /* +0x1e0 */ std::string m_1e0;
};
```

### TEAViewWindows

```cpp
// sizeof 3424 (0xd60)  rtti 0x0044fec4  vptr at +0xc  destructor 0x004511c8
class TEAViewWindows : public PropertiesViewWindows, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject PropertiesViewWindows
    /* +0x078 */ OWL::TOpenSaveDialog::TData m_78;
    /* +0x0a8 */ OWL::TStatic m_a8;
    /* +0x158 */ PVWCombo m_158;
    /* +0x210 */ PVWPushButton m_210;
    /* +0x2d8 */ PVWEdit m_2d8;
    /* +0x394 */ PVWUpDown m_394;
    /* +0x458 */ PVWStatic m_458;
    /* +0x50c */ PVWEdit m_50c;
    /* +0x5c8 */ PVWUpDown m_5c8;
    /* +0x698 */ std::string m_698;
    /* +0x6b0 */ std::vector<TEAViewWindows::OutputGroup *> m_6b0;
    /* +0x6d4 */ TEAProgressBar m_6d4;
    /* +0x7bc */ PVWFontMaintainer[3] m_7bc;
    /* +0xc70 */ OWL::TDefaultGUIFont m_c70;
    /* +0xc80 */ std::vector<OWL::TWindow *> m_c80;
    // vtable at 0x004f9fac (56 slots)
    //   [ 0] 0x004511c8  TEAViewWindows::~TEAViewWindows
    //   [ 1] 0x004b0624  OWL::TDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x004b0870  OWL::TDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x004b094c  OWL::TDialog::DoExecute
    //   [ 7] 0x0045d674  TEAViewWindows::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x0045d634  TEAViewWindows::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x004592e0  TEAViewWindows::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x00450af4  TEAViewWindows::Find
    //   [15] 0x00454b20  TEAViewWindows::SetupTooltips
    //   [16] 0x004141fc  PropertiesViewWindows::DestroyTooltips
    //   [17] 0x00414264  PropertiesViewWindows::IsTooltipActive
    //   [18] 0x00415154  PropertiesViewWindows::EnableControls
    //   [19] 0x00454b40  TEAViewWindows::OnButton
    //   [20] 0x0041517c  PropertiesViewWindows::OnStaticClicked
    //   [21] 0x00457254  TEAViewWindows::OnEditKillFocus
    //   [22] 0x0045733c  TEAViewWindows::OnEditChange
    //   [23] 0x00415194  PropertiesViewWindows::OnDoubleClick
    //   [24] 0x00458c90  TEAViewWindows::OnUpDown
    //   [25] 0x004151a4  PropertiesViewWindows::OnNotify25
    //   [26] 0x004151ac  PropertiesViewWindows::OnNotify26
    //   [27] 0x004151b4  PropertiesViewWindows::OnColourChanged
    //   [28] 0x004151bc  PropertiesViewWindows::OnFontChanged
    //   [29] 0x0045680c  TEAViewWindows::OnComboChange
    //   [30] 0x004151cc  PropertiesViewWindows::OnNotify30
    //   [31] 0x004151d4  PropertiesViewWindows::OnMouseOverControl
    //   [32] 0x004151dc  PropertiesViewWindows::OnTextClicked
    //   [33] 0x00415208  PropertiesViewWindows::IsResizable
    //   [34] 0x00415210  PropertiesViewWindows::GetSectionName
    //   [35] 0x00415254  PropertiesViewWindows::OnNotify35
    //   [36] 0x0041525c  PropertiesViewWindows::OnSelectionCommitted
    //   [37] 0x00415200  PropertiesViewWindows::OnPathListChanged
    //   [38] 0x00416964  PropertiesViewWindows::EvNotify
    //   [39] 0x0045a61c  TEAViewWindows::EvCtlColor
    //   [40] 0x0045a3f8  TEAViewWindows::EvSize
    //   [41] 0x00415328  PropertiesViewWindows::OnPropertyChanged
    //   [42] 0x00415344  PropertiesViewWindows::LoadResourceString
    //   [43] 0x0045634c  TEAViewWindows::ShowControlTip
    //   [44] 0x0045643c  TEAViewWindows::GetLookupWord
    //   [45] 0x00415be8  PropertiesViewWindows::ShowHelp
    //   [46] 0x00415e7c  PropertiesViewWindows::GetControlTipText
    //   [47] 0x00458cd0  TEAViewWindows::SetupMoveableControls
    //   [48] 0x00459c44  TEAViewWindows::OnSplitterButtonDown
    //   [49] 0x00459c9c  TEAViewWindows::OnSplitterDrag
    //   [50] 0x0045a220  TEAViewWindows::OnSplitterButtonUp
    //   [51] 0x0045a250  TEAViewWindows::OnPaneLabelDoubleClick
    //   [52] 0x0045a274  TEAViewWindows::OnPaneLabelClick
    //   [53] 0x0045a2a4  TEAViewWindows::OnPaneLabelContextMenu
    //   [54] 0x0045a42c  TEAViewWindows::OnDropFiles
    //   [55] 0x0045a4c8  TEAViewWindows::OnSysColorChange
    // response table at 0x004f7a04 (37 entries)
    //   WM_LBUTTONDOWN                               -> 0x00450b3c  TEAViewWindows::EvLButtonDown
    //   WM_MOUSEMOVE                                 -> 0x00450b4c  TEAViewWindows::EvMouseMove
    //   WM_LBUTTONUP                                 -> 0x00450b5c  TEAViewWindows::EvLButtonUp
    //   WM_LBUTTONDBLCLK                             -> 0x00450b6c  TEAViewWindows::EvLButtonDblClk
    //   WM_RBUTTONDOWN                               -> 0x00450b7c  TEAViewWindows::EvRButtonDown
    //   WM_RBUTTONUP                                 -> 0x00450b8c  TEAViewWindows::EvRButtonUp
    //   WM_SIZE                                      -> 0x00413cd4  PropertiesViewWindows::EvSize_413cd4
    //   WM_DROPFILES                                 -> 0x00450b9c  TEAViewWindows::EvDropFiles
    //   WM_SYSCOLORCHANGE                            -> 0x00450bac  TEAViewWindows::EvSysColorChange
    //   EV_COMMAND(12690)                            -> 0x0045c5dc  TEAViewWindows::Cmd12690
    //   EV_CHILD_NOTIFY(id 4270, code 5)             -> 0x004568f0  TEAViewWindows::Child4270_Notify5
    //   EV_COMMAND_ENABLE(7550)                      -> 0x00454478  TEAViewWindows::CeShared_454478   // &File > &Open...	Ctrl+O | accel ^O
    //   EV_COMMAND_ENABLE(7480)                      -> 0x00454478  TEAViewWindows::CeShared_454478   // &File > Save Results from * &As...	Ctrl+S | Save Results &As...	Ctrl+S | accel ^S
    //   EV_COMMAND_ENABLE(7630)                      -> 0x00454478  TEAViewWindows::CeShared_454478
    //   EV_COMMAND_ENABLE(12470)                     -> 0x00454478  TEAViewWindows::CeShared_454478
    //   EV_COMMAND_ENABLE(7490)                      -> 0x00454478  TEAViewWindows::CeShared_454478   // &Edit > &Lookup...	Ctrl+Enter | &Lookup...	Ctrl+Enter | &Lookup *	Ctrl+Enter | accel CONTROL+VK_RETURN | accel CONTROL+VK_RETURN
    //   EV_COMMAND_ENABLE(12640)                     -> 0x00454478  TEAViewWindows::CeShared_454478   // &Edit > Lookup in &New Window...	Shift+Ctrl+Enter | Lookup in &New Window...	Shift+Ctrl+Enter | Lookup * in &New Window...	Shift+Ctrl+Enter | accel CONTROL+SHIFT+VK_RETURN | accel CONTROL+SHIFT+VK_RETURN
    //   EV_COMMAND_ENABLE(7500)                      -> 0x00454478  TEAViewWindows::CeShared_454478   // &Edit > &Copy	Ctrl+C | &Copy	Ctrl+C | &Copy	Ctrl+C | accel ^C
    //   EV_COMMAND_ENABLE(7510)                      -> 0x00454478  TEAViewWindows::CeShared_454478   // &Edit > &Select All	Ctrl+A | &Select All	Ctrl+A | &Select All	Ctrl+A | accel ^A
    //   EV_COMMAND_ENABLE(7520)                      -> 0x00454478  TEAViewWindows::CeShared_454478   // &File > &Print Results from *...	Ctrl+P | &Print...	Ctrl+P | accel ^P
    //   EV_COMMAND_ENABLE(7530)                      -> 0x00454478  TEAViewWindows::CeShared_454478   // &File > Print Pre&view Results from *... | Print Pre&view...
    //   EV_COMMAND_ENABLE(7540)                      -> 0x00454478  TEAViewWindows::CeShared_454478   // &File > P&roperties from * | P&roperties
    //   EV_COMMAND_ENABLE(12760)                     -> 0x00454478  TEAViewWindows::CeShared_454478   // &Word Search	Ctrl+W | accel ^W
    //   EV_COMMAND_ENABLE(12770)                     -> 0x00454478  TEAViewWindows::CeShared_454478   // &Full Text Search	Ctrl+F | accel ^F
    //   EV_COMMAND(7540)                             -> 0x004548d0  TEAViewWindows::CmShared_4548d0   // &File > P&roperties from * | P&roperties
    //   EV_COMMAND(7550)                             -> 0x004548d0  TEAViewWindows::CmShared_4548d0   // &File > &Open...	Ctrl+O | accel ^O
    //   EV_COMMAND(7480)                             -> 0x004548d0  TEAViewWindows::CmShared_4548d0   // &File > Save Results from * &As...	Ctrl+S | Save Results &As...	Ctrl+S | accel ^S
    //   EV_COMMAND(7630)                             -> 0x004548d0  TEAViewWindows::CmShared_4548d0
    //   EV_COMMAND(12470)                            -> 0x004548d0  TEAViewWindows::CmShared_4548d0
    //   EV_COMMAND(7490)                             -> 0x004548d0  TEAViewWindows::CmShared_4548d0   // &Edit > &Lookup...	Ctrl+Enter | &Lookup...	Ctrl+Enter | &Lookup *	Ctrl+Enter | accel CONTROL+VK_RETURN | accel CONTROL+VK_RETURN
    //   EV_COMMAND(12640)                            -> 0x004548d0  TEAViewWindows::CmShared_4548d0   // &Edit > Lookup in &New Window...	Shift+Ctrl+Enter | Lookup in &New Window...	Shift+Ctrl+Enter | Lookup * in &New Window...	Shift+Ctrl+Enter | accel CONTROL+SHIFT+VK_RETURN | accel CONTROL+SHIFT+VK_RETURN
    //   EV_COMMAND(7500)                             -> 0x004548d0  TEAViewWindows::CmShared_4548d0   // &Edit > &Copy	Ctrl+C | &Copy	Ctrl+C | &Copy	Ctrl+C | accel ^C
    //   EV_COMMAND(7510)                             -> 0x004548d0  TEAViewWindows::CmShared_4548d0   // &Edit > &Select All	Ctrl+A | &Select All	Ctrl+A | &Select All	Ctrl+A | accel ^A
    //   EV_COMMAND(7520)                             -> 0x004548d0  TEAViewWindows::CmShared_4548d0   // &File > &Print Results from *...	Ctrl+P | &Print...	Ctrl+P | accel ^P
    //   EV_COMMAND(7530)                             -> 0x004548d0  TEAViewWindows::CmShared_4548d0   // &File > Print Pre&view Results from *... | Print Pre&view...
    //   EV_COMMAND(12760)                            -> 0x004548d0  TEAViewWindows::CmShared_4548d0   // &Word Search	Ctrl+W | accel ^W
    //   EV_COMMAND(12770)                            -> 0x004548d0  TEAViewWindows::CmShared_4548d0   // &Full Text Search	Ctrl+F | accel ^F
};
```

### TEAViewWindows::OutputGroup

```cpp
// sizeof 112 (0x70)  rtti 0x0045e974  no vptr  destructor 0x0045e640
class TEAViewWindows::OutputGroup {
    /* +0x010 */ std::string m_10;
    /* +0x028 */ MatchEngineSet m_28;
};
```

### TSDictionaryDefinitionRetriever

```cpp
// sizeof 32 (0x20)  rtti 0x00409c7c  no vptr  destructor 0x0040c938
class TSDictionaryDefinitionRetriever {
    /* +0x008 */ std::string m_8;
};
```

### TSDictionaryDefinitionSearchIndexed

```cpp
// sizeof 48 (0x30)  rtti 0x00410ed8  no vptr  destructor 0x0041066c
class TSDictionaryDefinitionSearchIndexed {
    /* +0x010 */ std::vector<long> m_10;
};
```

### TSDictionaryDefinitionSearchSequential

```cpp
// sizeof 280 (0x118)  rtti 0x00410e74  no vptr  destructor 0x004108b8
class TSDictionaryDefinitionSearchSequential {
};
```

### TSDictionaryList

```cpp
// sizeof 40 (0x28)  rtti 0x00411440  no vptr  destructor 0x004076a8
class TSDictionaryList {
    /* +0x008 */ std::vector<TSDictionaryList::Dictionary *> m_8;
};
```

### TSDictionaryList::Dictionary

```cpp
// sizeof 12200 (0x2fa8)  rtti 0x00411378  vptr at +0x0  destructor 0x0040b9e8
class TSDictionaryList::Dictionary {
    /* +0x2f94 */ std::string m_2f94;
    // vtable at 0x004eca60 (11 slots)
    //   [ 0] 0x0040b9e8  TSDictionaryList::Dictionary::~Dictionary
    //   [ 1] 0x0040bac4  TSDictionaryList::Dictionary::Load
    //   [ 2] 0x0040c1b4  TSDictionaryList::Dictionary::Unload
    //   [ 3] 0x0040c238  TSDictionaryList::Dictionary::EnsureCurrent
    //   [ 4] 0x0040c298  TSDictionaryList::Dictionary::GetPathData
    //   [ 5] 0x0040c2a8  TSDictionaryList::Dictionary::GetFileTitle
    //   [ 6] 0x0040c2ec  TSDictionaryList::Dictionary::GetFileName
    //   [ 7] 0x0040c364  TSDictionaryList::Dictionary::GetSummaryText
    //   [ 8] 0x0040c5c0  TSDictionaryList::Dictionary::GetFileDateText
    //   [ 9] 0x0040c800  TSDictionaryList::Dictionary::GetDescription
    //   [10] 0x0040c2fc  TSDictionaryList::Dictionary::GetCounts
};
```

### TSDictionarySaveDialog

```cpp
// sizeof 2024 (0x7e8)  rtti 0x0043cc80  vptr at +0xc  destructor 0x0043d32c
class TSDictionarySaveDialog : public PropertiesViewWindows, public DictionaryMaintainer, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject PropertiesViewWindows
    /* +0x060 */ // base subobject DictionaryMaintainer
    /* +0x078 */ std::string m_78;
    /* +0x088 */ std::string m_88;
    /* +0x0a0 */ std::vector<std::string> m_a0;
    /* +0x0c0 */ std::vector<std::string> m_c0;
    /* +0x0e0 */ OWL::TStatic m_e0;
    /* +0x190 */ PVWEdit m_190;
    /* +0x24c */ PVWStatic m_24c;
    /* +0x300 */ PVWPushButton m_300;
    /* +0x3c8 */ OWL::TGroupBox m_3c8;
    /* +0x473 */ OWL::TListBox m_473;
    /* +0x51d */ OWL::TStatic m_51d;
    /* +0x5cc */ PVWEdit m_5cc;
    /* +0x688 */ PVWPushButton m_688;
    // vtable at 0x004f5990 (52 slots)
    //   [ 0] 0x0043d32c  TSDictionarySaveDialog::~TSDictionarySaveDialog
    //   [ 1] 0x004b0624  OWL::TDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x004b0870  OWL::TDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x004b094c  OWL::TDialog::DoExecute
    //   [ 7] 0x004167d8  PropertiesViewWindows::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x0043e898  TSDictionarySaveDialog::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x0043e074  TSDictionarySaveDialog::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x0043cdcc  TSDictionarySaveDialog::Find
    //   [15] 0x0041413c  PropertiesViewWindows::SetupTooltips
    //   [16] 0x004141fc  PropertiesViewWindows::DestroyTooltips
    //   [17] 0x00414264  PropertiesViewWindows::IsTooltipActive
    //   [18] 0x00415154  PropertiesViewWindows::EnableControls
    //   [19] 0x0043d7ac  TSDictionarySaveDialog::OnButton
    //   [20] 0x0041517c  PropertiesViewWindows::OnStaticClicked
    //   [21] 0x00415184  PropertiesViewWindows::OnEditKillFocus
    //   [22] 0x0041518c  PropertiesViewWindows::OnEditChange
    //   [23] 0x00415194  PropertiesViewWindows::OnDoubleClick
    //   [24] 0x0041519c  PropertiesViewWindows::OnUpDown
    //   [25] 0x004151a4  PropertiesViewWindows::OnNotify25
    //   [26] 0x004151ac  PropertiesViewWindows::OnNotify26
    //   [27] 0x004151b4  PropertiesViewWindows::OnColourChanged
    //   [28] 0x004151bc  PropertiesViewWindows::OnFontChanged
    //   [29] 0x004151c4  PropertiesViewWindows::OnComboChange
    //   [30] 0x004151cc  PropertiesViewWindows::OnNotify30
    //   [31] 0x004151d4  PropertiesViewWindows::OnMouseOverControl
    //   [32] 0x004151dc  PropertiesViewWindows::OnTextClicked
    //   [33] 0x00415208  PropertiesViewWindows::IsResizable
    //   [34] 0x00415210  PropertiesViewWindows::GetSectionName
    //   [35] 0x00415254  PropertiesViewWindows::OnNotify35
    //   [36] 0x0041525c  PropertiesViewWindows::OnSelectionCommitted
    //   [37] 0x00415200  PropertiesViewWindows::OnPathListChanged
    //   [38] 0x00416964  PropertiesViewWindows::EvNotify
    //   [39] 0x00416320  PropertiesViewWindows::EvCtlColor
    //   [40] 0x0041651c  PropertiesViewWindows::EvSize
    //   [41] 0x00415328  PropertiesViewWindows::OnPropertyChanged
    //   [42] 0x00415344  PropertiesViewWindows::LoadResourceString
    //   [43] 0x004153a8  PropertiesViewWindows::ShowControlTip
    //   [44] 0x00415e18  PropertiesViewWindows::GetLookupWord
    //   [45] 0x00415be8  PropertiesViewWindows::ShowHelp
    //   [46] 0x00415e7c  PropertiesViewWindows::GetControlTipText
    //   [47] 0x00417490  PropertiesViewWindows::SetupMoveableControls
    //   [48] 0x0043e8bc  TSDictionarySaveDialog::vf48
    //   [49] 0x0043e8fc  TSDictionarySaveDialog::vf49
    //   [50] 0x004e6028  __vstub_4e6028
    //   [51] 0x004e6028  __vstub_4e6028
    // response table at 0x004f551c (1 entries)
    //   EV_CHILD_NOTIFY(id 7830, code 1)             -> 0x0043e91c  TSDictionarySaveDialog::Child7830_Notify1
};
```

### TSDictionarySaveTEADialog

```cpp
// sizeof 2032 (0x7f0)  rtti 0x0043ca7c  vptr at +0xc  destructor 0x0043c8a4
class TSDictionarySaveTEADialog : public TSDictionarySaveDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject TSDictionarySaveDialog
    // vtable at 0x004f5280 (52 slots)
    //   [ 0] 0x0043c8a4  TSDictionarySaveTEADialog::~TSDictionarySaveTEADialog
    //   [ 1] 0x004b0624  OWL::TDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x004b0870  OWL::TDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x004b094c  OWL::TDialog::DoExecute
    //   [ 7] 0x004167d8  PropertiesViewWindows::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x0043e898  TSDictionarySaveDialog::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x0043e074  TSDictionarySaveDialog::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x0043cdcc  TSDictionarySaveDialog::Find
    //   [15] 0x0041413c  PropertiesViewWindows::SetupTooltips
    //   [16] 0x004141fc  PropertiesViewWindows::DestroyTooltips
    //   [17] 0x00414264  PropertiesViewWindows::IsTooltipActive
    //   [18] 0x00415154  PropertiesViewWindows::EnableControls
    //   [19] 0x0043d7ac  TSDictionarySaveDialog::OnButton
    //   [20] 0x0041517c  PropertiesViewWindows::OnStaticClicked
    //   [21] 0x00415184  PropertiesViewWindows::OnEditKillFocus
    //   [22] 0x0041518c  PropertiesViewWindows::OnEditChange
    //   [23] 0x00415194  PropertiesViewWindows::OnDoubleClick
    //   [24] 0x0041519c  PropertiesViewWindows::OnUpDown
    //   [25] 0x004151a4  PropertiesViewWindows::OnNotify25
    //   [26] 0x004151ac  PropertiesViewWindows::OnNotify26
    //   [27] 0x004151b4  PropertiesViewWindows::OnColourChanged
    //   [28] 0x004151bc  PropertiesViewWindows::OnFontChanged
    //   [29] 0x004151c4  PropertiesViewWindows::OnComboChange
    //   [30] 0x004151cc  PropertiesViewWindows::OnNotify30
    //   [31] 0x004151d4  PropertiesViewWindows::OnMouseOverControl
    //   [32] 0x004151dc  PropertiesViewWindows::OnTextClicked
    //   [33] 0x00415208  PropertiesViewWindows::IsResizable
    //   [34] 0x00415210  PropertiesViewWindows::GetSectionName
    //   [35] 0x00415254  PropertiesViewWindows::OnNotify35
    //   [36] 0x0041525c  PropertiesViewWindows::OnSelectionCommitted
    //   [37] 0x00415200  PropertiesViewWindows::OnPathListChanged
    //   [38] 0x00416964  PropertiesViewWindows::EvNotify
    //   [39] 0x00416320  PropertiesViewWindows::EvCtlColor
    //   [40] 0x0041651c  PropertiesViewWindows::EvSize
    //   [41] 0x00415328  PropertiesViewWindows::OnPropertyChanged
    //   [42] 0x00415344  PropertiesViewWindows::LoadResourceString
    //   [43] 0x004153a8  PropertiesViewWindows::ShowControlTip
    //   [44] 0x00415e18  PropertiesViewWindows::GetLookupWord
    //   [45] 0x00415be8  PropertiesViewWindows::ShowHelp
    //   [46] 0x00415e7c  PropertiesViewWindows::GetControlTipText
    //   [47] 0x00417490  PropertiesViewWindows::SetupMoveableControls
    //   [48] 0x0043e8bc  TSDictionarySaveDialog::vf48
    //   [49] 0x0043e8fc  TSDictionarySaveDialog::vf49
    //   [50] 0x0043c9b0  TSDictionarySaveTEADialog::vf50
    //   [51] 0x0043ca6c  TSDictionarySaveTEADialog::vf51
};
```

### VariableValues

```cpp
// sizeof 16 (0x10)  rtti 0x00460004  no vptr  destructor 0x004601e8
class VariableValues {
};
```

## Library and template classes (273)

### __rwstd::__rb_tree<const MatchListWindows::Entry *,const MatchListWindows::Entry *,__rwstd::__ident<const MatchListWindows::Entry *,const MatchListWindows::Entry *>,MatchListWindows::EntryIndexComparator>

```cpp
// sizeof 56 (0x38)  rtti 0x004311cc  no vptr  destructor 0x004313f8
class __rwstd::__rb_tree<const MatchListWindows::Entry *,const MatchListWindows::Entry *,__rwstd::__ident<const MatchListWindows::Entry *,const MatchListWindows::Entry *>,MatchListWindows::EntryIndexComparator> {
};
```

### __rwstd::__rb_tree<int,std::pair<const int,std::string>,__rwstd::__select1st<std::pair<const int,std::string>,int>,std::less<int>>

```cpp
// sizeof 56 (0x38)  rtti 0x004da804  no vptr  destructor 0x004cd7c0
class __rwstd::__rb_tree<int,std::pair<const int,std::string>,__rwstd::__select1st<std::pair<const int,std::string>,int>,std::less<int>> {
};
```

### __rwstd::__rb_tree<MatchListWindows::Selection,MatchListWindows::Selection,__rwstd::__ident<MatchListWindows::Selection,MatchListWindows::Selection>,std::less<MatchListWindows::Selection>>

```cpp
// sizeof 56 (0x38)  rtti 0x00430c74  no vptr  destructor 0x00431158
class __rwstd::__rb_tree<MatchListWindows::Selection,MatchListWindows::Selection,__rwstd::__ident<MatchListWindows::Selection,MatchListWindows::Selection>,std::less<MatchListWindows::Selection>> {
};
```

### __rwstd::__rwcat

```cpp
// sizeof 64 (0x40)  rtti 0x004da698  no vptr  destructor 0x004da158
class __rwstd::__rwcat {
    /* +0x008 */ std::map<int,std::string,std::less<int>> m_8;
};
```

### __rwstd::__string_ref_rep<std::allocator<char>>

```cpp
// sizeof 12 (0xc)  rtti 0x004d8904  no vptr
class __rwstd::__string_ref_rep<std::allocator<char>> {
};
```

### __rwstd::__string_ref<char>

```cpp
// sizeof 12 (0xc)  rtti 0x004d8558  no vptr
class __rwstd::__string_ref<char> : public __rwstd::__string_ref_rep<std::allocator<char>> {
    /* +0x000 */ // base subobject __rwstd::__string_ref_rep<std::allocator<char>>
};
```

### __rwstd::facet_imp

```cpp
// sizeof 16 (0x10)  rtti 0x0047bd40  vptr at +0x0  destructor 0x0047bdc0
class __rwstd::facet_imp : public __rwstd::ref_counted {
    /* +0x000 */ // base subobject __rwstd::ref_counted
    // vtable at 0x0051588c (3 slots)
    //   [ 0] 0x0047bdc0  __rwstd::facet_imp::~facet_imp
    //   [ 1] 0x0047bdb8  __rwstd::facet_imp::vf1
    //   [ 2] 0x004d8410  __rwstd::facet_imp::vf2
};
```

### __rwstd::locale_imp

```cpp
// sizeof 56 (0x38)  rtti 0x004dbbe0  vptr at +0x0  destructor 0x004dac7c
class __rwstd::locale_imp : public __rwstd::ref_counted {
    /* +0x000 */ // base subobject __rwstd::ref_counted
    /* +0x008 */ __rwstd::locale_vector<std::string> m_8;
    /* +0x010 */ __rwstd::locale_vector<__rwstd::facet_imp *> m_10;
    /* +0x020 */ std::string m_20;
    // vtable at 0x00516b28 (1 slots)
    //   [ 0] 0x004dac7c  __rwstd::locale_imp::~locale_imp
};
```

### __rwstd::locale_vector<__rwstd::__rwcat *>

```cpp
// sizeof 8 (0x8)  rtti 0x004d8700  no vptr  destructor 0x004cf250
class __rwstd::locale_vector<__rwstd::__rwcat *> {
};
```

### __rwstd::locale_vector<__rwstd::facet_imp *>

```cpp
// sizeof 8 (0x8)  rtti 0x004d8694  no vptr  destructor 0x004cf33c
class __rwstd::locale_vector<__rwstd::facet_imp *> {
};
```

### __rwstd::locale_vector<std::string>

```cpp
// sizeof 8 (0x8)  rtti 0x004d85f8  no vptr  destructor 0x004cffb0
class __rwstd::locale_vector<std::string> {
};
```

### __rwstd::punct_data<char>

```cpp
// sizeof 24 (0x18)  rtti 0x004d8984  no vptr  destructor 0x004d8b38
class __rwstd::punct_data<char> {
    /* +0x008 */ std::string m_8;
};
```

### __rwstd::ref_counted

```cpp
// sizeof 8 (0x8)  rtti 0x00437f70  vptr at +0x0  destructor 0x004dab1c
class __rwstd::ref_counted {
    // vtable at 0x0051587c (1 slots)
    //   [ 0] 0x004dab1c  __rwstd::ref_counted::~ref_counted
};
```

### __rwstd::use_Clib_locale

```cpp
// sizeof 8 (0x8)  rtti 0x004d7fa8  no vptr  destructor 0x004dafc0
class __rwstd::use_Clib_locale {
};
```

### OWL::__TBarDescrGdNode

```cpp
// sizeof 5 (0x5)  rtti 0x004cacf8  no vptr  destructor 0x004ca578
class OWL::__TBarDescrGdNode {
};
```

### OWL::__TFixedAlloc

```cpp
// sizeof 348 (0x15c)  rtti 0x004971e8  no vptr  destructor 0x0049739c
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
// sizeof 21 (0x15)  rtti 0x00496a8c  no vptr  destructor 0x00496ae8
class OWL::_TLocaleCache : public OWL::_TLocaleCacheBase {
    /* +0x000 */ // base subobject OWL::_TLocaleCacheBase
};
```

### OWL::_TLocaleCacheBase

```cpp
// sizeof 12 (0xc)  rtti 0x00496a4c  no vptr
class OWL::_TLocaleCacheBase {
};
```

### OWL::_TLocaleCacheList

```cpp
// sizeof 4 (0x4)  rtti 0x004963c0  no vptr  destructor 0x004968f0
class OWL::_TLocaleCacheList {
};
```

### OWL::ObjectBuilder

```cpp
// sizeof 8 (0x8)  rtti 0x00486c80  no vptr
class OWL::ObjectBuilder {
};
```

### OWL::TAPointer<char>

```cpp
// sizeof 4 (0x4)  rtti 0x00421bb0  no vptr  destructor 0x00422df0
class OWL::TAPointer<char> : public OWL::TPointerBase<char> {
    /* +0x000 */ // base subobject OWL::TPointerBase<char>
};
```

### OWL::TAPointer<OWL::TColor>

```cpp
// sizeof 4 (0x4)  rtti 0x00421a24  no vptr  destructor 0x00422e20
class OWL::TAPointer<OWL::TColor> : public OWL::TPointerBase<OWL::TColor> {
    /* +0x000 */ // base subobject OWL::TPointerBase<OWL::TColor>
};
```

### OWL::TAPointer<OWL::TDocTemplate *>

```cpp
// sizeof 4 (0x4)  rtti 0x004b27b8  no vptr  destructor 0x004b50e4
class OWL::TAPointer<OWL::TDocTemplate *> : public OWL::TPointerBase<OWL::TDocTemplate *> {
    /* +0x000 */ // base subobject OWL::TPointerBase<OWL::TDocTemplate *>
};
```

### OWL::TAPointer<OWL::TRect>

```cpp
// sizeof 4 (0x4)  rtti 0x004932ac  no vptr  destructor 0x004934a4
class OWL::TAPointer<OWL::TRect> : public OWL::TPointerBase<OWL::TRect> {
    /* +0x000 */ // base subobject OWL::TPointerBase<OWL::TRect>
};
```

### OWL::TAppDictImp

```cpp
// sizeof 4 (0x4)  rtti 0x004882b4  vptr at +0x0  destructor 0x00488304
class OWL::TAppDictImp {
    // vtable at 0x00504888 (7 slots)
    //   [ 0] 0x00488304  OWL::TAppDictImp::~TAppDictImp
    //   [ 1] 0x004e6028  __vstub_4e6028
    //   [ 2] 0x004e6028  __vstub_4e6028
    //   [ 3] 0x004e6028  __vstub_4e6028
    //   [ 4] 0x004e6028  __vstub_4e6028
    //   [ 5] 0x004e6028  __vstub_4e6028
    //   [ 6] 0x004e6028  __vstub_4e6028
};
```

### OWL::TAppDictInstImp

```cpp
// sizeof 12 (0xc)  rtti 0x00488254  vptr at +0x0  destructor 0x00488324
class OWL::TAppDictInstImp : public OWL::TAppDictImp {
    /* +0x000 */ // base subobject OWL::TAppDictImp
    // vtable at 0x005048b0 (7 slots)
    //   [ 0] 0x00488324  OWL::TAppDictInstImp::~TAppDictInstImp
    //   [ 1] 0x0048835c  OWL::TAppDictInstImp::vf1
    //   [ 2] 0x0048836c  OWL::TAppDictInstImp::vf2
    //   [ 3] 0x0048837c  OWL::TAppDictInstImp::vf3
    //   [ 4] 0x00488388  OWL::TAppDictInstImp::vf4
    //   [ 5] 0x00488394  OWL::TAppDictInstImp::vf5
    //   [ 6] 0x004883a4  OWL::TAppDictInstImp::vf6
};
```

### OWL::TAppDictionary

```cpp
// sizeof 4 (0x4)  rtti 0x00487c0c  no vptr  destructor 0x00487d78
class OWL::TAppDictionary {
};
```

### OWL::TAppDictPidImp

```cpp
// sizeof 12 (0xc)  rtti 0x004881f8  vptr at +0x0  destructor 0x00487f30
class OWL::TAppDictPidImp : public OWL::TAppDictImp {
    /* +0x000 */ // base subobject OWL::TAppDictImp
    // vtable at 0x00504860 (7 slots)
    //   [ 0] 0x00487f30  OWL::TAppDictPidImp::~TAppDictPidImp
    //   [ 1] 0x00487f8c  OWL::TAppDictPidImp::vf1
    //   [ 2] 0x00487fe4  OWL::TAppDictPidImp::vf2
    //   [ 3] 0x00488008  OWL::TAppDictPidImp::vf3
    //   [ 4] 0x00488030  OWL::TAppDictPidImp::vf4
    //   [ 5] 0x0048805c  OWL::TAppDictPidImp::vf5
    //   [ 6] 0x00488088  OWL::TAppDictPidImp::vf6
};
```

### OWL::TApplicatData

```cpp
// sizeof 4 (0x4)  rtti 0x004a8a34  no vptr  destructor 0x004a89cc
class OWL::TApplicatData {
};
```

### OWL::TApplication

```cpp
// sizeof 119 (0x77)  rtti 0x004756a8  vptr at +0x1b  destructor 0x004a8edc
class OWL::TApplication : public OWL::TModule, public OWL::TMsgThread, public virtual OWL::TEventHandler {
    /* +0x004 */ // base subobject OWL::TModule
    /* +0x011 */ // base subobject OWL::TMsgThread
    /* +0x035 */ std::string m_35;
    // vtable at 0x0050b660 (19 slots)
    //   [ 0] 0x004a8edc  OWL::TApplication::~TApplication
    //   [ 1] 0x004aad98  OWL::TApplication::vf1
    //   [ 2] 0x004a9708  OWL::TApplication::vf2
    //   [ 3] 0x004a9b90  OWL::TApplication::vf3
    //   [ 4] 0x004aa150  OWL::TApplication::vf4
    //   [ 5] 0x004aa88c  OWL::TApplication::vf5
    //   [ 6] 0x004aa8b0  OWL::TApplication::vf6
    //   [ 7] 0x004aa96c  OWL::TApplication::vf7
    //   [ 8] 0x004aaa54  OWL::TApplication::vf8
    //   [ 9] 0x004757ac  OWL::TApplication::vf9
    //   [10] 0x004aae10  OWL::TApplication::vf10
    //   [11] 0x004aad34  OWL::TApplication::Find
    //   [12] 0x004a9444  OWL::TApplication::vf12
    //   [13] 0x004757b4  OWL::TApplication::vf13
    //   [14] 0x004aab38  OWL::TApplication::vf14
    //   [15] 0x004a94d8  OWL::TApplication::vf15
    //   [16] 0x004a94e0  OWL::TApplication::vf16
    //   [17] 0x004a9534  OWL::TApplication::vf17
    //   [18] 0x004a95c0  OWL::TApplication::vf18
    // response table at 0x0050bce8 (2 entries)
    //   WM_ACTIVATEAPP                               -> 0x004aacdc  OWL::TApplication::EvActivateApp
    //   EV_COMMAND(24310)                            -> 0x004aad0c  OWL::TApplication::CmFileExit   // &File > E&xit
};
```

### OWL::TArrayBase

```cpp
// sizeof 8 (0x8)  rtti 0x0048aeb0  no vptr
class OWL::TArrayBase {
};
```

### OWL::TBarDescr

```cpp
// sizeof 52 (0x34)  rtti 0x004bf318  vptr at +0x0  destructor 0x004ca698
class OWL::TBarDescr {
    // vtable at 0x00512280 (4 slots)
    //   [ 0] 0x004ca698  OWL::TBarDescr::~TBarDescr
    //   [ 1] 0x004ca814  OWL::TBarDescr::vf1
    //   [ 2] 0x004ca970  OWL::TBarDescr::vf2
    //   [ 3] 0x004cab8c  OWL::TBarDescr::vf3
};
```

### OWL::TBitFlags<unsigned int>

```cpp
// sizeof 4 (0x4)  rtti 0x00422d9c  no vptr
class OWL::TBitFlags<unsigned int> {
};
```

### OWL::TBitmap

```cpp
// sizeof 5 (0x5)  rtti 0x00488a80  no vptr  destructor 0x004886b0
class OWL::TBitmap : public OWL::TGdiObject {
    /* +0x000 */ // base subobject OWL::TGdiObject
};
```

### OWL::TBrush

```cpp
// sizeof 5 (0x5)  rtti 0x00418d78  no vptr  destructor 0x004ab9b4
class OWL::TBrush : public OWL::TGdiObject {
    /* +0x000 */ // base subobject OWL::TGdiObject
};
```

### OWL::TBrushCache

```cpp
// sizeof 196 (0xc4)  rtti 0x004ab508  no vptr  destructor 0x004ab5c0
class OWL::TBrushCache {
};
```

### OWL::TButton

```cpp
// sizeof 172 (0xac)  rtti 0x00402b6c  vptr at +0xc  destructor 0x004abd9c
class OWL::TButton : public OWL::TControl, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TControl
    // vtable at 0x0050c018 (11 slots)
    //   [ 0] 0x004abd9c  OWL::TButton::~TButton
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x004abb94  OWL::TButton::Find
    //   [ 9] 0x004abe98  OWL::TButton::GetClassName
    //   [10] 0x004abeb8  OWL::TButton::SetupWindow
    // response table at 0x0050bfc4 (2 entries)
    //   WM_GETDLGCODE                                -> 0x004abeec  OWL::TButton::EvGetDlgCode
    //   message 0x00f4                               -> 0x004abf24  OWL::TButton::EvMsg_f4
};
```

### OWL::TButton::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x004ac368  vptr at +0x0
class OWL::TButton::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0050c1f4 (4 slots)
    //   [ 0] 0x00486d34  OWL::TNewStreamer::vf0
    //   [ 1] 0x004ac190  EvRegisteredMsg_4ac190_4ac190
    //   [ 2] 0x004ac220  OWL::TButton::Streamer::vf2
    //   [ 3] 0x004ac3b4  OWL::TButton::Streamer::vf3
};
```

### OWL::TButtonGadget

```cpp
// sizeof 96 (0x60)  rtti 0x0042850c  vptr at +0x0  destructor 0x00488dc4
class OWL::TButtonGadget : public OWL::TGadget {
    /* +0x000 */ // base subobject OWL::TGadget
    // vtable at 0x00504ce0 (29 slots)
    //   [ 0] 0x00488dc4  OWL::TButtonGadget::~TButtonGadget
    //   [ 1] 0x0048fe80  OWL::TGadget::vf1
    //   [ 2] 0x00489204  OWL::TButtonGadget::vf2
    //   [ 3] 0x00489148  OWL::TButtonGadget::vf3
    //   [ 4] 0x0048fe44  OWL::TGadget::vf4
    //   [ 5] 0x00488ed4  OWL::TButtonGadget::vf5
    //   [ 6] 0x00488f30  OWL::TButtonGadget::vf6
    //   [ 7] 0x0049001c  OWL::TGadget::vf7
    //   [ 8] 0x004900d8  OWL::TGadget::vf8
    //   [ 9] 0x004901ac  OWL::TGadget::vf9
    //   [10] 0x004900e0  OWL::TGadget::vf10
    //   [11] 0x0048ffcc  OWL::TGadget::vf11
    //   [12] 0x0048959c  OWL::TButtonGadget::vf12
    //   [13] 0x004895ec  OWL::TButtonGadget::vf13
    //   [14] 0x00489b04  OWL::TButtonGadget::vf14
    //   [15] 0x00489b3c  OWL::TButtonGadget::vf15
    //   [16] 0x00489b88  OWL::TButtonGadget::vf16
    //   [17] 0x00489adc  OWL::TButtonGadget::vf17
    //   [18] 0x00490838  OWL::TGadget::vf18
    //   [19] 0x00489bc0  OWL::TButtonGadget::vf19
    //   [20] 0x00490840  OWL::TGadget::vf20
    //   [21] 0x004897e4  OWL::TButtonGadget::vf21
    //   [22] 0x00489290  OWL::TButtonGadget::vf22
    //   [23] 0x00489338  OWL::TButtonGadget::vf23
    //   [24] 0x004893a4  OWL::TButtonGadget::vf24
    //   [25] 0x00489970  OWL::TButtonGadget::vf25
    //   [26] 0x004899b4  OWL::TButtonGadget::vf26
    //   [27] 0x004899f8  OWL::TButtonGadget::vf27
    //   [28] 0x00488b50  OWL::TButtonGadget::vf28
};
```

### OWL::TButtonGadgetEnabler

```cpp
// sizeof 20 (0x14)  rtti 0x00489c04  vptr at +0x0
class OWL::TButtonGadgetEnabler : public OWL::TCommandEnabler {
    /* +0x000 */ // base subobject OWL::TCommandEnabler
    // vtable at 0x00504cc8 (3 slots)
    //   [ 0] 0x00488c30  OWL::TButtonGadgetEnabler::vf0
    //   [ 1] 0x00488c58  OWL::TButtonGadgetEnabler::vf1
    //   [ 2] 0x00488c60  OWL::TButtonGadgetEnabler::vf2
};
```

### OWL::TBwccDll

```cpp
// sizeof 61 (0x3d)  rtti 0x004a927c  vptr at +0x0  destructor 0x004a9398
class OWL::TBwccDll : public OWL::TModule {
    /* +0x000 */ // base subobject OWL::TModule
};
```

### OWL::TCacheEntryStr

```cpp
// sizeof 497 (0x1f1)  rtti 0x004a5d24  no vptr  destructor 0x004a8618
class OWL::TCacheEntryStr {
};
```

### OWL::TCelArray

```cpp
// sizeof 49 (0x31)  rtti 0x00488b70  vptr at +0x0  destructor 0x00489edc
class OWL::TCelArray {
    // vtable at 0x00504fbc (1 slots)
    //   [ 0] 0x00489edc  OWL::TCelArray::~TCelArray
};
```

### OWL::TCheckBox

```cpp
// sizeof 176 (0xb0)  rtti 0x00405c14  vptr at +0xc  destructor 0x004ac5f0
class OWL::TCheckBox : public OWL::TButton, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TButton
    // vtable at 0x0050c258 (12 slots)
    //   [ 0] 0x004ac5f0  OWL::TCheckBox::~TCheckBox
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x004ac3c0  OWL::TCheckBox::Find
    //   [ 9] 0x004ac6ec  OWL::TCheckBox::GetClassName
    //   [10] 0x004abeb8  OWL::TButton::SetupWindow
    //   [11] 0x004ac70c  OWL::TCheckBox::Transfer
};
```

### OWL::TChildMetrics

```cpp
// sizeof 89 (0x59)  rtti 0x004961c8  no vptr
class OWL::TChildMetrics {
};
```

### OWL::TChooseColorDialog

```cpp
// sizeof 218 (0xda)  rtti 0x0041906c  vptr at +0xc  destructor 0x0048b2c4
class OWL::TChooseColorDialog : public OWL::TCommonDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TCommonDialog
    // vtable at 0x005054b4 (15 slots)
    //   [ 0] 0x0048b2c4  OWL::TChooseColorDialog::~TChooseColorDialog
    //   [ 1] 0x0048b3c0  OWL::TChooseColorDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x0048c788  OWL::TCommonDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x0048b3dc  OWL::TChooseColorDialog::DoExecute
    //   [ 7] 0x004b03f4  OWL::TDialog::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x004b0be0  OWL::TDialog::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x0048c764  OWL::TCommonDialog::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x0048b078  OWL::TChooseColorDialog::Find
};
```

### OWL::TChooseColorDialog::TData

```cpp
// sizeof 20 (0x14)  rtti 0x00419008  no vptr  destructor 0x004219dc
class OWL::TChooseColorDialog::TData {
    /* +0x010 */ OWL::TAPointer<OWL::TColor> m_10;
};
```

### OWL::TChooseFontDialog

```cpp
// sizeof 242 (0xf2)  rtti 0x00419b34  vptr at +0xc  destructor 0x0048b7dc
class OWL::TChooseFontDialog : public OWL::TCommonDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TCommonDialog
    // vtable at 0x00505604 (15 slots)
    //   [ 0] 0x0048b7dc  OWL::TChooseFontDialog::~TChooseFontDialog
    //   [ 1] 0x0048b8d8  OWL::TChooseFontDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x0048c788  OWL::TCommonDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x0048b8f4  OWL::TChooseFontDialog::DoExecute
    //   [ 7] 0x004b03f4  OWL::TDialog::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x004b0be0  OWL::TDialog::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x0048c764  OWL::TCommonDialog::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x0048b554  OWL::TChooseFontDialog::Find
};
```

### OWL::TClipboard

```cpp
// sizeof 1 (0x1)  rtti 0x004543e8  no vptr  destructor 0x0048bbe0
class OWL::TClipboard {
};
```

### OWL::TComboBox

```cpp
// sizeof 174 (0xae)  rtti 0x004071ec  vptr at +0xc  destructor 0x004acd74
class OWL::TComboBox : public OWL::TListBox, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TListBox
    // vtable at 0x0050c420 (35 slots)
    //   [ 0] 0x004acd74  OWL::TComboBox::~TComboBox
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x004ad690  OWL::TControl::Find
    //   [ 9] 0x00422160  OWL::TComboBox::GetCount
    //   [10] 0x0042217c  OWL::TComboBox::FindString
    //   [11] 0x0042219c  OWL::TComboBox::FindExactString
    //   [12] 0x004221cc  OWL::TComboBox::GetTopIndex
    //   [13] 0x004221e8  OWL::TComboBox::SetTopIndex
    //   [14] 0x00422208  OWL::TComboBox::GetHorizontalExtent
    //   [15] 0x00422224  OWL::TComboBox::SetHorizontalExtent
    //   [16] 0x00422244  OWL::TComboBox::GetStringLen
    //   [17] 0x00422264  OWL::TComboBox::GetString
    //   [18] 0x00422284  OWL::TComboBox::GetItemData
    //   [19] 0x004222a4  OWL::TComboBox::SetItemData
    //   [20] 0x004222c4  OWL::TComboBox::GetItemHeight
    //   [21] 0x004222e4  OWL::TComboBox::SetItemHeight
    //   [22] 0x00422314  OWL::TComboBox::ClearList
    //   [23] 0x00422330  OWL::TComboBox::DirectoryList
    //   [24] 0x00422350  OWL::TComboBox::AddString
    //   [25] 0x00422370  OWL::TComboBox::InsertString
    //   [26] 0x00422390  OWL::TComboBox::DeleteString
    //   [27] 0x004223b0  OWL::TComboBox::GetSelIndex
    //   [28] 0x004223cc  OWL::TComboBox::SetSelIndex
    //   [29] 0x004aceec  OWL::TComboBox::Transfer
    //   [30] 0x004ad110  OWL::TComboBox::GetClassName
    //   [31] 0x004223ec  OWL::TComboBox::GetSelStringIndex
    //   [32] 0x0042240c  OWL::TComboBox::SetSelString
    //   [33] 0x004ad11c  OWL::TComboBox::SetupWindow
    //   [34] 0x004ad1d0  OWL::TComboBox::CleanupWindow
};
```

### OWL::TComboBox::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x004ad634  vptr at +0x0
class OWL::TComboBox::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0050c790 (4 slots)
    //   [ 0] 0x00486d34  OWL::TNewStreamer::vf0
    //   [ 1] 0x004ad468  EvRegisteredMsg_4ad468_4ad468
    //   [ 2] 0x004ad4f0  OWL::TComboBox::Streamer::vf2
    //   [ 3] 0x004ad684  OWL::TComboBox::Streamer::vf3
};
```

### OWL::TCommandEnabler

```cpp
// sizeof 16 (0x10)  rtti 0x00427ac8  vptr at +0x0
class OWL::TCommandEnabler {
    // vtable at 0x0050b3f8 (4 slots)
    //   [ 0] 0x004a4da8  OWL::TCommandEnabler::vf0
    //   [ 1] 0x004e6028  __vstub_4e6028
    //   [ 2] 0x004e6028  __vstub_4e6028
    //   [ 3] 0x004a8654  OWL::TCommandEnabler::vf3
};
```

### OWL::TCommCtrlDll

```cpp
// sizeof 17 (0x11)  rtti 0x0048711c  vptr at +0x0  destructor 0x00487484
class OWL::TCommCtrlDll : public OWL::TModule {
    /* +0x000 */ // base subobject OWL::TModule
    // vtable at 0x0050450c (2 slots)
    //   [ 0] 0x00487484  OWL::TCommCtrlDll::~TCommCtrlDll
    //   [ 1] 0x004c0c48  OWL::TModule::vf1
};
```

### OWL::TCommonDialog

```cpp
// sizeof 178 (0xb2)  rtti 0x0042195c  vptr at +0xc  destructor 0x0048c668
class OWL::TCommonDialog : public OWL::TDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TDialog
    // vtable at 0x00505968 (15 slots)
    //   [ 0] 0x0048c668  OWL::TCommonDialog::~TCommonDialog
    //   [ 1] 0x004b0624  OWL::TDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x0048c788  OWL::TCommonDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x0048c790  OWL::TCommonDialog::DoExecute
    //   [ 7] 0x004b03f4  OWL::TDialog::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x004b0be0  OWL::TDialog::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x0048c764  OWL::TCommonDialog::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x0048c4ac  OWL::TCommonDialog::Find
    // response table at 0x005058b4 (3 entries)
    //   WM_CLOSE                                     -> 0x0048c4f4  OWL::TCommonDialog::EvClose
    //   EV_COMMAND(1)                                -> 0x0048c504  OWL::TCommonDialog::CmRange1to2
    //   EV_COMMAND(2)                                -> 0x0048c504  OWL::TCommonDialog::CmRange1to2
};
```

### OWL::TConstraint

```cpp
// sizeof 36 (0x24)  rtti 0x0049618c  no vptr
class OWL::TConstraint {
};
```

### OWL::TControl

```cpp
// sizeof 170 (0xaa)  rtti 0x00402be8  vptr at +0xc  destructor 0x004ad9d8
class OWL::TControl : public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    // vtable at 0x0050c860 (9 slots)
    //   [ 0] 0x004ad9d8  OWL::TControl::~TControl
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x004ad690  OWL::TControl::Find
};
```

### OWL::TControl::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x004ae024  vptr at +0x0
class OWL::TControl::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0050ca24 (5 slots)
    //   [ 0] 0x00486d34  OWL::TNewStreamer::vf0
    //   [ 1] 0x004ade48  OWL::TControl::Streamer::vf1
    //   [ 2] 0x004aded8  OWL::TControl::Streamer::vf2
    //   [ 3] 0x004ae070  OWL::TControl::Streamer::vf3
    //   [ 4] 0x004274e4  OWL::TControl::Streamer::vf4
};
```

### OWL::TControlBar

```cpp
// sizeof 227 (0xe3)  rtti 0x004285c8  vptr at +0x18  destructor 0x0048d078
class OWL::TControlBar : public OWL::TGadgetWindow, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TGadgetWindow
    // vtable at 0x00505b90 (27 slots)
    //   [ 0] 0x0048d078  OWL::TControlBar::~TControlBar
    //   [ 1] 0x004919b8  OWL::TGadgetWindow::Create
    //   [ 2] 0x004919d4  OWL::TGadgetWindow::vf2
    //   [ 3] 0x0047bff4  OWL::TGadgetWindow::GetTooltip
    //   [ 4] 0x00492f98  OWL::TGadgetWindow::EnableTooltip
    //   [ 5] 0x00492644  OWL::TGadgetWindow::vf5
    //   [ 6] 0x0049266c  OWL::TGadgetWindow::vf6
    //   [ 7] 0x004926d4  OWL::TGadgetWindow::vf7
    //   [ 8] 0x00492694  OWL::TGadgetWindow::vf8
    //   [ 9] 0x004926f8  OWL::TGadgetWindow::vf9
    //   [10] 0x00492778  OWL::TGadgetWindow::vf10
    //   [11] 0x004927d0  OWL::TGadgetWindow::vf11
    //   [12] 0x004915d4  OWL::TGadgetWindow::IdleAction
    //   [13] 0x004917c8  OWL::TGadgetWindow::vf13
    //   [14] 0x00491800  OWL::TGadgetWindow::vf14
    //   [15] 0x00492ad8  OWL::TGadgetWindow::vf15
    //   [16] 0x00491a58  OWL::TGadgetWindow::vf16
    //   [17] 0x004925f8  OWL::TGadgetWindow::vf17
    //   [18] 0x00491b58  OWL::TGadgetWindow::vf18
    //   [19] 0x00492c14  OWL::TGadgetWindow::Paint
    //   [20] 0x00491b10  OWL::TGadgetWindow::vf20
    //   [21] 0x00492868  OWL::TGadgetWindow::SetupWindow
    //   [22] 0x0049292c  OWL::TGadgetWindow::CleanupWindow
    //   [23] 0x00492998  OWL::TGadgetWindow::PreProcessMsg
    //   [24] 0x00493108  OWL::TGadgetWindow::EvCommand
    //   [25] 0x004931d4  OWL::TGadgetWindow::EvCommandEnable
    //   [26] 0x00490f60  OWL::TGadgetWindow::Find
};
```

### OWL::TControlEnabler

```cpp
// sizeof 16 (0x10)  rtti 0x004b0e5c  vptr at +0x0
class OWL::TControlEnabler : public OWL::TCommandEnabler {
    /* +0x000 */ // base subobject OWL::TCommandEnabler
    // vtable at 0x0050d004 (3 slots)
    //   [ 0] 0x004b0d60  OWL::TControlEnabler::vf0
    //   [ 1] 0x004b0da0  OWL::TControlEnabler::vf1
    //   [ 2] 0x004b0e28  OWL::TControlEnabler::vf2
};
```

### OWL::TCreatedDC

```cpp
// sizeof 33 (0x21)  rtti 0x00428a48  vptr at +0x5  destructor 0x0048d3a4
class OWL::TCreatedDC : public OWL::TDC {
    /* +0x000 */ // base subobject OWL::TDC
    // vtable at 0x00505d60 (24 slots)
    //   [ 0] 0x0048d3a4  OWL::TCreatedDC::~TCreatedDC
    //   [ 1] 0x0048dcbc  OWL::TDC::vf1
    //   [ 2] 0x0048dccc  OWL::TDC::vf2
    //   [ 3] 0x0048dce8  OWL::TDC::vf3
    //   [ 4] 0x0048dd04  OWL::TDC::vf4
    //   [ 5] 0x0048d97c  OWL::TDC::vf5
    //   [ 6] 0x0048da0c  OWL::TDC::vf6
    //   [ 7] 0x0048da90  OWL::TDC::vf7
    //   [ 8] 0x0048dd20  OWL::TDC::vf8
    //   [ 9] 0x0048dd6c  OWL::TDC::vf9
    //   [10] 0x0048ddb8  OWL::TDC::vf10
    //   [11] 0x0048ddec  OWL::TDC::vf11
    //   [12] 0x0048de38  OWL::TDC::vf12
    //   [13] 0x0048de84  OWL::TDC::vf13
    //   [14] 0x0048ded0  OWL::TDC::vf14
    //   [15] 0x0048df24  OWL::TDC::vf15
    //   [16] 0x0048df70  OWL::TDC::vf16
    //   [17] 0x0048dfc4  OWL::TDC::vf17
    //   [18] 0x0048dffc  OWL::TDC::vf18
    //   [19] 0x0048e040  OWL::TDC::vf19
    //   [20] 0x0048e0a8  OWL::TDC::vf20
    //   [21] 0x0048e0c8  OWL::TDC::vf21
    //   [22] 0x0048e0f4  OWL::TDC::vf22
    //   [23] 0x0048d8e8  OWL::TDC::vf23
};
```

### OWL::TCtl3dDll

```cpp
// sizeof 61 (0x3d)  rtti 0x004a9224  vptr at +0x0  destructor 0x004a93dc
class OWL::TCtl3dDll : public OWL::TModule {
    /* +0x000 */ // base subobject OWL::TModule
};
```

### OWL::TDC

```cpp
// sizeof 33 (0x21)  rtti 0x0040470c  vptr at +0x5  destructor 0x0048d8bc
class OWL::TDC : public OWL::TGdiBase {
    /* +0x000 */ // base subobject OWL::TGdiBase
    // vtable at 0x005060a0 (24 slots)
    //   [ 0] 0x0048d8bc  OWL::TDC::~TDC
    //   [ 1] 0x0048dcbc  OWL::TDC::vf1
    //   [ 2] 0x0048dccc  OWL::TDC::vf2
    //   [ 3] 0x0048dce8  OWL::TDC::vf3
    //   [ 4] 0x0048dd04  OWL::TDC::vf4
    //   [ 5] 0x0048d97c  OWL::TDC::vf5
    //   [ 6] 0x0048da0c  OWL::TDC::vf6
    //   [ 7] 0x0048da90  OWL::TDC::vf7
    //   [ 8] 0x0048dd20  OWL::TDC::vf8
    //   [ 9] 0x0048dd6c  OWL::TDC::vf9
    //   [10] 0x0048ddb8  OWL::TDC::vf10
    //   [11] 0x0048ddec  OWL::TDC::vf11
    //   [12] 0x0048de38  OWL::TDC::vf12
    //   [13] 0x0048de84  OWL::TDC::vf13
    //   [14] 0x0048ded0  OWL::TDC::vf14
    //   [15] 0x0048df24  OWL::TDC::vf15
    //   [16] 0x0048df70  OWL::TDC::vf16
    //   [17] 0x0048dfc4  OWL::TDC::vf17
    //   [18] 0x0048dffc  OWL::TDC::vf18
    //   [19] 0x0048e040  OWL::TDC::vf19
    //   [20] 0x0048e0a8  OWL::TDC::vf20
    //   [21] 0x0048e0c8  OWL::TDC::vf21
    //   [22] 0x0048e0f4  OWL::TDC::vf22
    //   [23] 0x0048d8e8  OWL::TDC::vf23
};
```

### OWL::TDecoratedFrame

```cpp
// sizeof 299 (0x12b)  rtti 0x00428974  vptr at +0x35  destructor 0x004ae77c
class OWL::TDecoratedFrame : public OWL::TLayoutWindow, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow, public virtual OWL::TFrameWindow {
    /* +0x004 */ // base subobject OWL::TLayoutWindow
    // vtable at 0x0050cc2c (15 slots)
    //   [ 0] 0x004ae77c  OWL::TDecoratedFrame::~TDecoratedFrame
    //   [ 1] 0x004afa14  OWL::TDecoratedFrame::vf1
    //   [ 2] 0x004aec4c  OWL::TDecoratedFrame::vf2
    //   [ 3] 0x004aebdc  OWL::TDecoratedFrame::PreProcessMsg
    //   [ 4] 0x004ae9f8  OWL::TDecoratedFrame::TFrameWindow_vf7
    //   [ 5] 0x004afadc  OWL::TDecoratedFrame::vf5
    //   [ 6] 0x004afbc4  OWL::TDecoratedFrame::TFrameWindow_vf4
    //   [ 7] 0x004afc04  OWL::TDecoratedFrame::TFrameWindow_vf5
    //   [ 8] 0x004afb58  OWL::TDecoratedFrame::vf8
    //   [ 9] 0x004ae93c  OWL::TDecoratedFrame::SetupWindow
    //   [10] 0x004ae9c4  OWL::TDecoratedFrame::CleanupWindow
    //   [11] 0x004aeb9c  OWL::TDecoratedFrame::RemoveChild
    //   [12] 0x004aefd0  OWL::TDecoratedFrame::EvCommand
    //   [13] 0x004af148  OWL::TDecoratedFrame::EvCommandEnable
    //   [14] 0x004ae1b4  OWL::TDecoratedFrame::Find
    // response table at 0x0050ca84 (3 entries)
    //   WM_ENTERIDLE                                 -> 0x004aef1c  OWL::TDecoratedFrame::EvEnteridle
    //   WM_MENUSELECT                                -> 0x004aee04  OWL::TDecoratedFrame::EvMenuSelect
    //   WM_SIZE                                      -> 0x004aeeec  OWL::TDecoratedFrame::EvSize
};
```

### OWL::TDefaultGUIFont

```cpp
// sizeof 5 (0x5)  rtti 0x0041ee14  no vptr  destructor 0x004217d0
class OWL::TDefaultGUIFont : public OWL::TFont {
    /* +0x000 */ // base subobject OWL::TFont
};
```

### OWL::TDeferWinPos

```cpp
// sizeof 4 (0x4)  rtti 0x00494f78  no vptr  destructor 0x00494a94
class OWL::TDeferWinPos {
};
```

### OWL::TDiagBase

```cpp
// sizeof 17 (0x11)  rtti 0x0048ae20  vptr at +0x0  destructor 0x0048aa38
class OWL::TDiagBase {
    // vtable at 0x0050540c (2 slots)
    //   [ 0] 0x004e6028  __vstub_4e6028
    //   [ 1] 0x0048aa38  OWL::TDiagBase::~TDiagBase
};
```

### OWL::TDiagGroupDef

```cpp
// sizeof 17 (0x11)  rtti 0x0048ad80  vptr at +0x0  destructor 0x0048addc
class OWL::TDiagGroupDef : public OWL::TDiagBase {
    /* +0x000 */ // base subobject OWL::TDiagBase
    // vtable at 0x00505420 (2 slots)
    //   [ 0] 0x0048a990  OWL::TDiagGroupDef::vf0
    //   [ 1] 0x0048addc  OWL::TDiagGroupDef::~TDiagGroupDef
};
```

### OWL::TDialog

```cpp
// sizeof 174 (0xae)  rtti 0x00402e14  vptr at +0xc  destructor 0x004b0280
class OWL::TDialog : public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    // vtable at 0x0050cea0 (15 slots)
    //   [ 0] 0x004b0280  OWL::TDialog::~TDialog
    //   [ 1] 0x004b0624  OWL::TDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x004b0870  OWL::TDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x004b094c  OWL::TDialog::DoExecute
    //   [ 7] 0x004b03f4  OWL::TDialog::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x004b0be0  OWL::TDialog::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x004b0b44  OWL::TDialog::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x004aff6c  OWL::TDialog::Find
};
```

### OWL::TDib

```cpp
// sizeof 32 (0x20)  rtti 0x00488afc  vptr at +0x5  destructor 0x004b1098
class OWL::TDib : public OWL::TGdiBase {
    /* +0x000 */ // base subobject OWL::TGdiBase
    // vtable at 0x0050d01c (4 slots)
    //   [ 0] 0x004b1098  OWL::TDib::~TDib
    //   [ 1] 0x004b1288  OWL::TDib::vf1
    //   [ 2] 0x004b15e4  OWL::TDib::vf2
    //   [ 3] 0x00489320  OWL::TDib::vf3
};
```

### OWL::TDiskFileHandle

```cpp
// sizeof 28 (0x1c)  rtti 0x004baa80  vptr at +0x0  destructor 0x004baae8
class OWL::TDiskFileHandle : public OWL::TFileHandle {
    /* +0x000 */ // base subobject OWL::TFileHandle
    /* +0x00c */ std::string m_c;
    // vtable at 0x0050eea8 (23 slots)
    //   [ 0] 0x004baae8  OWL::TDiskFileHandle::~TDiskFileHandle
    //   [ 1] 0x004baba0  OWL::TDiskFileHandle::vf1
    //   [ 2] 0x004babac  OWL::TDiskFileHandle::vf2
    //   [ 3] 0x004bae14  OWL::TDiskFileHandle::vf3
    //   [ 4] 0x004bac8c  OWL::TDiskFileHandle::vf4
    //   [ 5] 0x004bad7c  OWL::TDiskFileHandle::vf5
    //   [ 6] 0x004bae20  OWL::TDiskFileHandle::vf6
    //   [ 7] 0x004bae3c  OWL::TDiskFileHandle::vf7
    //   [ 8] 0x004bae68  OWL::TDiskFileHandle::vf8
    //   [ 9] 0x004bae94  OWL::TDiskFileHandle::vf9
    //   [10] 0x004baed4  OWL::TDiskFileHandle::vf10
    //   [11] 0x004baef0  OWL::TDiskFileHandle::vf11
    //   [12] 0x004baf14  OWL::TDiskFileHandle::vf12
    //   [13] 0x004baf4c  OWL::TDiskFileHandle::vf13
    //   [14] 0x004baf6c  OWL::TDiskFileHandle::vf14
    //   [15] 0x004baf88  OWL::TDiskFileHandle::vf15
    //   [16] 0x004bafc0  OWL::TDiskFileHandle::vf16
    //   [17] 0x004bafe0  OWL::TDiskFileHandle::vf17
    //   [18] 0x004baffc  OWL::TDiskFileHandle::vf18
    //   [19] 0x004bb020  OWL::TDiskFileHandle::vf19
    //   [20] 0x004bb044  OWL::TDiskFileHandle::vf20
    //   [21] 0x004bb088  OWL::TDiskFileHandle::vf21
    //   [22] 0x004bb10c  OWL::TDiskFileHandle::vf22
};
```

### OWL::TDllLoader<OWL::TRichEditModule>

```cpp
// sizeof 1 (0x1)  rtti 0x00468f34  no vptr  destructor 0x00469054
class OWL::TDllLoader<OWL::TRichEditModule> {
};
```

### OWL::TDockable

```cpp
// sizeof 4 (0x4)  rtti 0x004b1a40  vptr at +0x0
class OWL::TDockable {
};
```

### OWL::TDockingSlip

```cpp
// sizeof 8 (0x8)  rtti 0x004b1880  vptr at +0x0
class OWL::TDockingSlip {
};
```

### OWL::TDocManager

```cpp
// sizeof 56 (0x38)  rtti 0x004a92d4  vptr at +0x8  destructor 0x004b2178
class OWL::TDocManager : public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase {
    /* +0x014 */ OWL::TDocument::TList m_14;
    // vtable at 0x0050da2c (28 slots)
    //   [ 0] 0x004b2178  OWL::TDocManager::~TDocManager
    //   [ 1] 0x004b238c  OWL::TDocManager::vf1
    //   [ 2] 0x004b23f0  OWL::TDocManager::vf2
    //   [ 3] 0x004b2454  OWL::TDocManager::vf3
    //   [ 4] 0x004b250c  OWL::TDocManager::vf4
    //   [ 5] 0x004b2624  OWL::TDocManager::vf5
    //   [ 6] 0x004b2824  OWL::TDocManager::vf6
    //   [ 7] 0x004b2c48  OWL::TDocManager::vf7
    //   [ 8] 0x004b2d40  OWL::TDocManager::vf8
    //   [ 9] 0x004b2e74  OWL::TDocManager::vf9
    //   [10] 0x004b2f24  OWL::TDocManager::vf10
    //   [11] 0x004b3b2c  OWL::TDocManager::vf11
    //   [12] 0x004b48a4  OWL::TDocManager::vf12
    //   [13] 0x004b4868  OWL::TDocManager::vf13
    //   [14] 0x004b48e4  OWL::TDocManager::vf14
    //   [15] 0x004b4a28  OWL::TDocManager::vf15
    //   [16] 0x004b4990  OWL::TDocManager::vf16
    //   [17] 0x004b4ac4  OWL::TDocManager::vf17
    //   [18] 0x004b4b34  OWL::TDocManager::vf18
    //   [19] 0x004b3bd0  OWL::TDocManager::vf19
    //   [20] 0x004b3c5c  OWL::TDocManager::vf20
    //   [21] 0x004b3ca0  OWL::TDocManager::vf21
    //   [22] 0x004b466c  OWL::TDocManager::vf22
    //   [23] 0x004b3ce4  OWL::TDocManager::vf23
    //   [24] 0x004b3e7c  OWL::TDocManager::vf24
    //   [25] 0x004b44a0  OWL::TDocManager::vf25
    //   [26] 0x004b45b8  OWL::TDocManager::vf26
    //   [27] 0x004b20e4  OWL::TDocManager::Find
    // response table at 0x0050d15c (17 entries)
    //   WM_OWLCANCLOSE                               -> 0x004b4778  OWL::TDocManager::EvOwlcanclose
    //   WM_OWLPREPROCMENU                            -> 0x004b47ac  OWL::TDocManager::EvOwlpreprocmenu
    //   message 0x7ef6                               -> 0x004b481c  OWL::TDocManager::EvMsg_7ef6
    //   EV_COMMAND(24331)                            -> 0x004b2108  OWL::TDocManager::Cmd24331
    //   EV_COMMAND(24332)                            -> 0x004b2118  OWL::TDocManager::Cmd24332
    //   EV_COMMAND(24333)                            -> 0x004b2128  OWL::TDocManager::Cmd24333
    //   EV_COMMAND(24334)                            -> 0x004b2138  OWL::TDocManager::Cmd24334
    //   EV_COMMAND(24335)                            -> 0x004b2148  OWL::TDocManager::Cmd24335
    //   EV_COMMAND(24339)                            -> 0x004b2158  OWL::TDocManager::Cmd24339
    //   EV_COMMAND(24341)                            -> 0x004b2168  OWL::TDocManager::Cmd24341
    //   EV_COMMAND_ENABLE(24331)                     -> 0x004b4848  OWL::TDocManager::CeCmd24331
    //   EV_COMMAND_ENABLE(24332)                     -> 0x004b4884  OWL::TDocManager::CeCmd24332
    //   EV_COMMAND_ENABLE(24333)                     -> 0x004b49e8  OWL::TDocManager::CeCmd24333
    //   EV_COMMAND_ENABLE(24334)                     -> 0x004b496c  OWL::TDocManager::CeCmd24334
    //   EV_COMMAND_ENABLE(24335)                     -> 0x004b4a84  OWL::TDocManager::CeCmd24335
    //   EV_COMMAND_ENABLE(24339)                     -> 0x004b48bc  OWL::TDocManager::CeCmd24339
    //   EV_COMMAND_ENABLE(24341)                     -> 0x004b4b10  OWL::TDocManager::CeCmd24341
};
```

### OWL::TDocTemplate

```cpp
// sizeof 40 (0x28)  rtti 0x004b5108  vptr at +0x0  destructor 0x004b51bc
class OWL::TDocTemplate : public OWL::TRegLink, public OWL::TStreamableBase {
    /* +0x000 */ // base subobject OWL::TRegLink
    /* +0x00c */ // base subobject OWL::TStreamableBase
    // vtable at 0x0050dd08 (7 slots)
    //   [ 0] 0x004b51bc  OWL::TDocTemplate::~TDocTemplate
    //   [ 1] 0x004e6028  __vstub_4e6028
    //   [ 2] 0x004e6028  __vstub_4e6028
    //   [ 3] 0x004e6028  __vstub_4e6028
    //   [ 4] 0x004e6028  __vstub_4e6028
    //   [ 5] 0x004e6028  __vstub_4e6028
    //   [ 6] 0x004e6028  __vstub_4e6028
};
```

### OWL::TDocument

```cpp
// sizeof 50 (0x32)  rtti 0x004b2920  vptr at +0x0  destructor 0x004b52c0
class OWL::TDocument : public OWL::TStreamableBase {
    /* +0x000 */ // base subobject OWL::TStreamableBase
    /* +0x008 */ OWL::TDocument::TList m_8;
    // vtable at 0x0050d9bc (25 slots)
    //   [ 0] 0x004b52c0  OWL::TDocument::~TDocument
    //   [ 1] 0x004b4e10  OWL::TDocument::vf1
    //   [ 2] 0x004b4e18  OWL::TDocument::vf2
    //   [ 3] 0x004b4e20  OWL::TDocument::vf3
    //   [ 4] 0x004b5d10  OWL::TDocument::vf4
    //   [ 5] 0x004b5a18  OWL::TDocument::vf5
    //   [ 6] 0x004b5a64  OWL::TDocument::vf6
    //   [ 7] 0x004b55f8  OWL::TDocument::vf7
    //   [ 8] 0x004b560c  OWL::TDocument::vf8
    //   [ 9] 0x004b56f4  OWL::TDocument::vf9
    //   [10] 0x004b5c08  OWL::TDocument::vf10
    //   [11] 0x004b4e28  OWL::TDocument::vf11
    //   [12] 0x004b5cd0  OWL::TDocument::vf12
    //   [13] 0x004b5c5c  OWL::TDocument::vf13
    //   [14] 0x004b5c7c  OWL::TDocument::vf14
    //   [15] 0x004b5d44  OWL::TDocument::vf15
    //   [16] 0x004b4e3c  OWL::TDocument::vf16
    //   [17] 0x004b5494  OWL::TDocument::vf17
    //   [18] 0x004b5474  OWL::TDocument::vf18
    //   [19] 0x004b5454  OWL::TDocument::vf19
    //   [20] 0x004b54c4  OWL::TDocument::vf20
    //   [21] 0x004b55c0  OWL::TDocument::vf21
    //   [22] 0x004b4e48  OWL::TDocument::vf22
    //   [23] 0x004b5838  OWL::TDocument::vf23
    //   [24] 0x004b584c  OWL::TDocument::vf24
};
```

### OWL::TDocument::TList

```cpp
// sizeof 4 (0x4)  rtti 0x004a9344  no vptr  destructor 0x004a9420
class OWL::TDocument::TList {
};
```

### OWL::TDvFileOpenDialog

```cpp
// sizeof 274 (0x112)  rtti 0x004b4410  vptr at +0xc  destructor 0x004b4b58
class OWL::TDvFileOpenDialog : public OWL::TFileOpenDialog, public OWL::TDvOpenSaveDataOwner, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TFileOpenDialog
    /* +0x078 */ // base subobject OWL::TDvOpenSaveDataOwner
    // vtable at 0x0050dbb4 (16 slots)
    //   [ 0] 0x004b4b58  OWL::TDvFileOpenDialog::~TDvFileOpenDialog
    //   [ 1] 0x004b1eb8  OWL::TDvFileOpenDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x0048c788  OWL::TCommonDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x004c2db8  OWL::TFileOpenDialog::vf6
    //   [ 7] 0x004b03f4  OWL::TDialog::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x004b0be0  OWL::TDialog::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x0048c764  OWL::TCommonDialog::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x004c296c  OWL::TOpenSaveDialog::vf14
    //   [15] 0x004c2c54  OWL::TOpenSaveDialog::vf15
};
```

### OWL::TDvFileSaveDialog

```cpp
// sizeof 274 (0x112)  rtti 0x004b4380  vptr at +0xc  destructor 0x004b4c6c
class OWL::TDvFileSaveDialog : public OWL::TFileSaveDialog, public OWL::TDvOpenSaveDataOwner, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TFileSaveDialog
    /* +0x078 */ // base subobject OWL::TDvOpenSaveDataOwner
    // vtable at 0x0050dac0 (16 slots)
    //   [ 0] 0x004b4c6c  OWL::TDvFileSaveDialog::~TDvFileSaveDialog
    //   [ 1] 0x004b2090  OWL::TDvFileSaveDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x0048c788  OWL::TCommonDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x004c2f70  OWL::TFileSaveDialog::vf6
    //   [ 7] 0x004b03f4  OWL::TDialog::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x004b0be0  OWL::TDialog::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x0048c764  OWL::TCommonDialog::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x004c296c  OWL::TOpenSaveDialog::vf14
    //   [15] 0x004c2c54  OWL::TOpenSaveDialog::vf15
};
```

### OWL::TDvOpenSaveData

```cpp
// sizeof 52 (0x34)  rtti 0x004b4320  no vptr  destructor 0x004b4d3c
class OWL::TDvOpenSaveData : public OWL::TOpenSaveDialog::TData {
    /* +0x000 */ // base subobject OWL::TOpenSaveDialog::TData
};
```

### OWL::TDvOpenSaveDataOwner

```cpp
// sizeof 4 (0x4)  rtti 0x004b4c28  no vptr
class OWL::TDvOpenSaveDataOwner {
};
```

### OWL::TEdit

```cpp
// sizeof 178 (0xb2)  rtti 0x00402cfc  vptr at +0xc  destructor 0x004b62bc
class OWL::TEdit : public OWL::TStatic, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TStatic
    // vtable at 0x0050e344 (22 slots)
    //   [ 0] 0x004b62bc  OWL::TEdit::~TEdit
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x004b5f24  OWL::TEdit::Find
    //   [ 9] 0x004b6954  OWL::TEdit::vf9
    //   [10] 0x004b7164  OWL::TEdit::Transfer
    //   [11] 0x004b7024  OWL::TEdit::GetClassName
    //   [12] 0x004b6ec0  OWL::TEdit::GetSubText
    //   [13] 0x00421ff8  OWL::TEdit::GetSelection
    //   [14] 0x00422018  OWL::TEdit::vf14
    //   [15] 0x0042203c  OWL::TEdit::SetSelection
    //   [16] 0x004b6d08  OWL::TEdit::vf16
    //   [17] 0x00422068  OWL::TEdit::Paste
    //   [18] 0x00422084  OWL::TEdit::CharFromPos
    //   [19] 0x004220b0  OWL::TEdit::PosFromChar
    //   [20] 0x004b7030  OWL::TEdit::SetupWindow
    //   [21] 0x004b696c  OWL::TEdit::CanClose
    // response table at 0x0050dfcc (20 entries)
    //   EV_COMMAND(24322)                            -> 0x004b5f6c  OWL::TEdit::Cmd24322
    //   EV_COMMAND(24323)                            -> 0x004b5f88  OWL::TEdit::Cmd24323
    //   EV_COMMAND(24324)                            -> 0x004b5fa4  OWL::TEdit::Cmd24324
    //   EV_COMMAND(24325)                            -> 0x004b5fb4  OWL::TEdit::Cmd24325
    //   EV_COMMAND(24326)                            -> 0x004b5fc4  OWL::TEdit::Cmd24326
    //   EV_COMMAND(24321)                            -> 0x004b5fd4  OWL::TEdit::Cmd24321
    //   EV_COMMAND_ENABLE(24322)                     -> 0x004b69c4  OWL::TEdit::CeShared_4b69c4
    //   EV_COMMAND_ENABLE(24323)                     -> 0x004b69c4  OWL::TEdit::CeShared_4b69c4
    //   EV_COMMAND_ENABLE(24325)                     -> 0x004b69c4  OWL::TEdit::CeShared_4b69c4
    //   EV_COMMAND_ENABLE(24324)                     -> 0x004b69fc  OWL::TEdit::CeCmd24324
    //   EV_COMMAND_ENABLE(24326)                     -> 0x004b6a70  OWL::TEdit::CeCmd24326
    //   EV_COMMAND_ENABLE(24321)                     -> 0x004b6ab4  OWL::TEdit::CeCmd24321
    //   EV_NOTIFY_AT_CHILD(code -722)                -> 0x004b67dc  OWL::TEdit::NotifyAtChild_m722
    //   EV_NOTIFY_AT_CHILD(code 1280)                -> 0x004b63ec  OWL::TEdit::NotifyAtChild_1280
    //   WM_CHAR                                      -> 0x004b6434  OWL::TEdit::EvChar
    //   WM_KEYDOWN                                   -> 0x004b662c  OWL::TEdit::EvKeyDown
    //   WM_GETDLGCODE                                -> 0x004b6408  OWL::TEdit::EvGetDlgCode
    //   WM_SETFOCUS                                  -> 0x004b67bc  OWL::TEdit::EvSetFocus
    //   WM_KILLFOCUS                                 -> 0x004b6720  PVWEdit::EvKillFocus
    //   WM_CHILDINVALID                              -> 0x004b6910  OWL::TEdit::EvChildinvalid
};
```

### OWL::TEdit::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x004b75f8  vptr at +0x0
class OWL::TEdit::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0050e4f4 (4 slots)
    //   [ 0] 0x00486d34  OWL::TNewStreamer::vf0
    //   [ 1] 0x004b74dc  EvRegisteredMsg_4b74dc_4b74dc
    //   [ 2] 0x004b750c  OWL::TEdit::Streamer::vf2
    //   [ 3] 0x004b7644  OWL::TEdit::Streamer::vf3
};
```

### OWL::TEditFile

```cpp
// sizeof 250 (0xfa)  rtti 0x00422c2c  vptr at +0xc  destructor 0x004b7848
class OWL::TEditFile : public OWL::TEditSearch, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TEditSearch
    /* +0x038 */ OWL::TOpenSaveDialog::TData m_38;
    // vtable at 0x004fd108 (30 slots)
    //   [ 0] 0x004b7848  OWL::TEditFile::~TEditFile
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x004b7650  OWL::TEditFile::Find
    //   [ 9] 0x004b6954  OWL::TEdit::vf9
    //   [10] 0x004b7164  OWL::TEdit::Transfer
    //   [11] 0x004b7024  OWL::TEdit::GetClassName
    //   [12] 0x004b6ec0  OWL::TEdit::GetSubText
    //   [13] 0x00421ff8  OWL::TEdit::GetSelection
    //   [14] 0x00422018  OWL::TEdit::vf14
    //   [15] 0x0042203c  OWL::TEdit::SetSelection
    //   [16] 0x004b6d08  OWL::TEdit::vf16
    //   [17] 0x00422068  OWL::TEdit::Paste
    //   [18] 0x00422084  OWL::TEdit::CharFromPos
    //   [19] 0x004220b0  OWL::TEdit::PosFromChar
    //   [20] 0x004b7964  OWL::TEditFile::SetupWindow
    //   [21] 0x004b907c  OWL::TEditFile::CanClose
    //   [22] 0x004b8b90  OWL::TEditFile::vf22
    //   [23] 0x004b7eac  OWL::TEditFile::vf23
    //   [24] 0x004b815c  OWL::TEditFile::vf24
    //   [25] 0x004b828c  OWL::TEditFile::vf25
    //   [26] 0x004b7ef8  OWL::TEditFile::vf26
    //   [27] 0x004b83b4  OWL::TEditFile::vf27
    //   [28] 0x004b8634  OWL::TEditFile::vf28
    //   [29] 0x004b8a74  OWL::TEditFile::vf29
};
```

### OWL::TEditFile::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x004b949c  vptr at +0x0
class OWL::TEditFile::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0050ea40 (4 slots)
    //   [ 0] 0x00486d34  OWL::TNewStreamer::vf0
    //   [ 1] 0x004b92b8  OWL::TEditFile::Streamer::vf1
    //   [ 2] 0x004b9350  OWL::TEditFile::Streamer::vf2
    //   [ 3] 0x004b94ec  OWL::TEditFile::Streamer::vf3
};
```

### OWL::TEditSearch

```cpp
// sizeof 206 (0xce)  rtti 0x00422e44  vptr at +0xc  destructor 0x004b96e4
class OWL::TEditSearch : public OWL::TEdit, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TEdit
    /* +0x01c */ OWL::TFindReplaceDialog::TData m_1c;
    // vtable at 0x004fcffc (22 slots)
    //   [ 0] 0x004b96e4  OWL::TEditSearch::~TEditSearch
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x004b9518  OWL::TEditSearch::Find
    //   [ 9] 0x004b6954  OWL::TEdit::vf9
    //   [10] 0x004b7164  OWL::TEdit::Transfer
    //   [11] 0x004b7024  OWL::TEdit::GetClassName
    //   [12] 0x004b6ec0  OWL::TEdit::GetSubText
    //   [13] 0x00421ff8  OWL::TEdit::GetSelection
    //   [14] 0x00422018  OWL::TEdit::vf14
    //   [15] 0x0042203c  OWL::TEdit::SetSelection
    //   [16] 0x004b6d08  OWL::TEdit::vf16
    //   [17] 0x00422068  OWL::TEdit::Paste
    //   [18] 0x00422084  OWL::TEdit::CharFromPos
    //   [19] 0x004220b0  OWL::TEdit::PosFromChar
    //   [20] 0x004b9854  OWL::TEditSearch::SetupWindow
    //   [21] 0x004b696c  OWL::TEdit::CanClose
    // response table at 0x0050ea64 (7 entries)
    //   EV_COMMAND(24351)                            -> 0x004b9b6c  OWL::TEditSearch::Cmd24351
    //   EV_COMMAND_ENABLE(24351)                     -> 0x004b9d20  OWL::TEditSearch::CeRange24351to24352
    //   EV_COMMAND(24352)                            -> 0x004b9c44  OWL::TEditSearch::Cmd24352
    //   EV_COMMAND_ENABLE(24352)                     -> 0x004b9d20  OWL::TEditSearch::CeRange24351to24352
    //   EV_COMMAND(24353)                            -> 0x004b9d40  OWL::TEditSearch::Cmd24353
    //   EV_COMMAND_ENABLE(24353)                     -> 0x004b9d68  OWL::TEditSearch::CeCmd24353
    //   message id 0 in the static table (filled at run time or WM_NULL) -> 0x004b9d94  OWL::TEditSearch::EvRegisteredMsg_4b9d94
};
```

### OWL::TEditSearch::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x004ba57c  vptr at +0x0
class OWL::TEditSearch::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0050ed8c (5 slots)
    //   [ 0] 0x00486d34  OWL::TNewStreamer::vf0
    //   [ 1] 0x004ba384  OWL::TEditSearch::Streamer::vf1
    //   [ 2] 0x004ba424  OWL::TEditSearch::Streamer::vf2
    //   [ 3] 0x004ba5cc  OWL::TEditSearch::Streamer::vf3
    //   [ 4] 0x004ba6cc  vshared_4ba6cc
};
```

### OWL::TEnumInfoStr

```cpp
// sizeof 12 (0xc)  rtti 0x004a8adc  no vptr  destructor 0x004a8b2c
class OWL::TEnumInfoStr {
};
```

### OWL::TErrorMode

```cpp
// sizeof 4 (0x4)  rtti 0x00469ad0  no vptr  destructor 0x00469b4c
class OWL::TErrorMode {
};
```

### OWL::TEventHandler

```cpp
// sizeof 4 (0x4)  rtti 0x00402844  vptr at +0x0
class OWL::TEventHandler {
    // vtable at 0x004ea94c (1 slots)
    //   [ 0] 0x0048e7d8  OWL::TEventHandler::vf0
};
```

### OWL::TFile

```cpp
// sizeof 17 (0x11)  rtti 0x0048ca60  vptr at +0x0  destructor 0x004bb1e8
class OWL::TFile {
    // vtable at 0x00505a90 (33 slots)
    //   [ 0] 0x004bb1e8  OWL::TFile::~TFile
    //   [ 1] 0x0048caa8  OWL::TFile::vf1
    //   [ 2] 0x004bb2b4  OWL::TFile::vf2
    //   [ 3] 0x004bb37c  OWL::TFile::vf3
    //   [ 4] 0x0048cab4  OWL::TFile::vf4
    //   [ 5] 0x0048cad0  OWL::TFile::vf5
    //   [ 6] 0x0048cae4  OWL::TFile::vf6
    //   [ 7] 0x0048caf8  OWL::TFile::vf7
    //   [ 8] 0x0048cb10  OWL::TFile::vf8
    //   [ 9] 0x0048cb24  OWL::TFile::vf9
    //   [10] 0x0048cb38  OWL::TFile::vf10
    //   [11] 0x0048cb58  OWL::TFile::vf11
    //   [12] 0x0048cb74  OWL::TFile::vf12
    //   [13] 0x0048cb90  OWL::TFile::vf13
    //   [14] 0x004bb410  OWL::TFile::vf14
    //   [15] 0x004bb424  OWL::TFile::vf15
    //   [16] 0x004bb440  OWL::TFile::vf16
    //   [17] 0x0048cbac  OWL::TFile::vf17
    //   [18] 0x0048cbcc  OWL::TFile::vf18
    //   [19] 0x004bbb38  OWL::TFile::vf19
    //   [20] 0x004bbb54  OWL::TFile::vf20
    //   [21] 0x004bbb74  OWL::TFile::vf21
    //   [22] 0x004bbb94  OWL::TFile::vf22
    //   [23] 0x004bbbb8  OWL::TFile::vf23
    //   [24] 0x004bbbd8  OWL::TFile::vf24
    //   [25] 0x0048cbec  OWL::TFile::vf25
    //   [26] 0x004bbbfc  OWL::TFile::vf26
    //   [27] 0x004bbc14  OWL::TFile::vf27
    //   [28] 0x004bbc30  OWL::TFile::vf28
    //   [29] 0x004bbc4c  OWL::TFile::vf29
    //   [30] 0x004bbc68  OWL::TFile::vf30
    //   [31] 0x004bbc84  OWL::TFile::vf31
    //   [32] 0x0048cc14  OWL::TFile::vf32
};
```

### OWL::TFileHandle

```cpp
// sizeof 4 (0x4)  rtti 0x004baca0  vptr at +0x0  destructor 0x004bacf0
class OWL::TFileHandle {
    // vtable at 0x0050ef10 (23 slots)
    //   [ 0] 0x004bacf0  OWL::TFileHandle::~TFileHandle
    //   [ 1] 0x004e6028  __vstub_4e6028
    //   [ 2] 0x004e6028  __vstub_4e6028
    //   [ 3] 0x004e6028  __vstub_4e6028
    //   [ 4] 0x004e6028  __vstub_4e6028
    //   [ 5] 0x004e6028  __vstub_4e6028
    //   [ 6] 0x004e6028  __vstub_4e6028
    //   [ 7] 0x004e6028  __vstub_4e6028
    //   [ 8] 0x004e6028  __vstub_4e6028
    //   [ 9] 0x004e6028  __vstub_4e6028
    //   [10] 0x004e6028  __vstub_4e6028
    //   [11] 0x004e6028  __vstub_4e6028
    //   [12] 0x004e6028  __vstub_4e6028
    //   [13] 0x004e6028  __vstub_4e6028
    //   [14] 0x004e6028  __vstub_4e6028
    //   [15] 0x004e6028  __vstub_4e6028
    //   [16] 0x004e6028  __vstub_4e6028
    //   [17] 0x004e6028  __vstub_4e6028
    //   [18] 0x004e6028  __vstub_4e6028
    //   [19] 0x004e6028  __vstub_4e6028
    //   [20] 0x004e6028  __vstub_4e6028
    //   [21] 0x004e6028  __vstub_4e6028
    //   [22] 0x004e6028  __vstub_4e6028
};
```

### OWL::TFileName

```cpp
// sizeof 357 (0x165)  rtti 0x0049b214  no vptr  destructor 0x0049b290
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
// sizeof 270 (0x10e)  rtti 0x00452acc  vptr at +0xc  destructor 0x0045e8c4
class OWL::TFileOpenDialog : public OWL::TOpenSaveDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TOpenSaveDialog
    // vtable at 0x00510a10 (16 slots)
    //   [ 0] 0x0045e8c4  OWL::TFileOpenDialog::~TFileOpenDialog
    //   [ 1] 0x004c2c10  OWL::TOpenSaveDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x0048c788  OWL::TCommonDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x004c2db8  OWL::TFileOpenDialog::vf6
    //   [ 7] 0x004b03f4  OWL::TDialog::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x004b0be0  OWL::TDialog::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x0048c764  OWL::TCommonDialog::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x004c296c  OWL::TOpenSaveDialog::vf14
    //   [15] 0x004c2c54  OWL::TOpenSaveDialog::vf15
};
```

### OWL::TFileSaveDialog

```cpp
// sizeof 270 (0x10e)  rtti 0x0043db10  vptr at +0xc  destructor 0x0043ec04
class OWL::TFileSaveDialog : public OWL::TOpenSaveDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TOpenSaveDialog
    // vtable at 0x0051091c (16 slots)
    //   [ 0] 0x0043ec04  OWL::TFileSaveDialog::~TFileSaveDialog
    //   [ 1] 0x004c2c10  OWL::TOpenSaveDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x0048c788  OWL::TCommonDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x004c2f70  OWL::TFileSaveDialog::vf6
    //   [ 7] 0x004b03f4  OWL::TDialog::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x004b0be0  OWL::TDialog::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x0048c764  OWL::TCommonDialog::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x004c296c  OWL::TOpenSaveDialog::vf14
    //   [15] 0x004c2c54  OWL::TOpenSaveDialog::vf15
};
```

### OWL::TFindDialog

```cpp
// sizeof 222 (0xde)  rtti 0x004b9e44  vptr at +0xc  destructor 0x004b9f70
class OWL::TFindDialog : public OWL::TFindReplaceDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TFindReplaceDialog
    // vtable at 0x0050f5fc (15 slots)
    //   [ 0] 0x004b9f70  OWL::TFindDialog::~TFindDialog
    //   [ 1] 0x004bcfc8  OWL::TFindReplaceDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x004bd140  OWL::TFindDialog::vf4
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x0048c790  OWL::TCommonDialog::DoExecute
    //   [ 7] 0x004b03f4  OWL::TDialog::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x004b0be0  OWL::TDialog::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x0048c764  OWL::TCommonDialog::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x004bcd9c  OWL::TFindReplaceDialog::Find
};
```

### OWL::TFindReplaceDialog

```cpp
// sizeof 222 (0xde)  rtti 0x004b9eec  vptr at +0xc  destructor 0x004ba0c0
class OWL::TFindReplaceDialog : public OWL::TCommonDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TCommonDialog
    // vtable at 0x0050f6ec (15 slots)
    //   [ 0] 0x004ba0c0  OWL::TFindReplaceDialog::~TFindReplaceDialog
    //   [ 1] 0x004bcfc8  OWL::TFindReplaceDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x004bcfc0  OWL::TFindReplaceDialog::vf4
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x0048c790  OWL::TCommonDialog::DoExecute
    //   [ 7] 0x004b03f4  OWL::TDialog::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x004b0be0  OWL::TDialog::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x0048c764  OWL::TCommonDialog::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x004bcd9c  OWL::TFindReplaceDialog::Find
    // response table at 0x0050f464 (1 entries)
    //   WM_NCDESTROY                                 -> 0x004bcfe4  OWL::TFindReplaceDialog::EvNCDestroy
};
```

### OWL::TFindReplaceDialog::TData

```cpp
// sizeof 20 (0x14)  rtti 0x00422f24  no vptr  destructor 0x004bcd6c
class OWL::TFindReplaceDialog::TData {
};
```

### OWL::TFloatingFrame

```cpp
// sizeof 282 (0x11a)  rtti 0x004b19b4  vptr at +0xc  destructor 0x004b1a78
class OWL::TFloatingFrame : public OWL::TFrameWindow, public OWL::TTinyCaption, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TFrameWindow
    /* +0x04a */ // base subobject OWL::TTinyCaption
};
```

### OWL::TFloatingSlip

```cpp
// sizeof 294 (0x126)  rtti 0x004b17e8  vptr at +0xc  destructor 0x004b18bc
class OWL::TFloatingSlip : public OWL::TFloatingFrame, public OWL::TDockingSlip, public OWL::TDockable, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TFloatingFrame
    /* +0x084 */ // base subobject OWL::TDockingSlip
    /* +0x08c */ // base subobject OWL::TDockable
};
```

### OWL::TFont

```cpp
// sizeof 5 (0x5)  rtti 0x004033e8  no vptr  destructor 0x004043d8
class OWL::TFont : public OWL::TGdiObject {
    /* +0x000 */ // base subobject OWL::TGdiObject
};
```

### OWL::TFormattedStatic

```cpp
// sizeof 182 (0xb6)  rtti 0x004c609c  vptr at +0xc  destructor 0x004c4530
class OWL::TFormattedStatic : public OWL::TStatic, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TStatic
    // vtable at 0x0051151c (13 slots)
    //   [ 0] 0x004c4530  OWL::TFormattedStatic::~TFormattedStatic
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x004c789c  OWL::TStatic::Find
    //   [ 9] 0x004c7bdc  OWL::TStatic::vf9
    //   [10] 0x004c7ba4  PVWStatic::Transfer
    //   [11] 0x004c7b84  PVWStatic::GetClassName
    //   [12] 0x004c466c  OWL::TFormattedStatic::SetupWindow
};
```

### OWL::TFrameWindow

```cpp
// sizeof 224 (0xe0)  rtti 0x00415b1c  vptr at +0xc  destructor 0x004bdc6c
class OWL::TFrameWindow : public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    // vtable at 0x0050fa80 (19 slots)
    //   [ 0] 0x004bdc6c  OWL::TFrameWindow::~TFrameWindow
    //   [ 1] 0x004be11c  OWL::TFrameWindow::vf1
    //   [ 2] 0x004be0d4  OWL::TFrameWindow::vf2
    //   [ 3] 0x004bf364  OWL::TFrameWindow::vf3
    //   [ 4] 0x0049f8c8  OWL::TFrameWindow::vf4
    //   [ 5] 0x0049f8d0  OWL::TFrameWindow::vf5
    //   [ 6] 0x004be340  OWL::TFrameWindow::vf6
    //   [ 7] 0x004be34c  OWL::TFrameWindow::vf7
    //   [ 8] 0x004be420  OWL::TFrameWindow::RemoveChild
    //   [ 9] 0x004bdf38  OWL::TFrameWindow::vf9
    //   [10] 0x004be04c  OWL::TFrameWindow::PreProcessMsg
    //   [11] 0x004bdebc  Child4972344_Notify4914610_4bdebc
    //   [12] 0x004be7fc  OWL::TFrameWindow::HoldFocusHWnd
    //   [13] 0x004be458  OWL::TFrameWindow::SetDocTitle
    //   [14] 0x004bdfbc  OWL::TFrameWindow::EvCommand
    //   [15] 0x004be02c  OWL::TFrameWindow::EvCommandEnable
    //   [16] 0x004bef38  OWL::TFrameWindow::SetupWindow
    //   [17] 0x004bf0e0  OWL::TFrameWindow::CleanupWindow
    //   [18] 0x004bd840  OWL::TFrameWindow::Find
    // response table at 0x0050f7f0 (9 entries)
    //   WM_PAINT                                     -> 0x004be624  OWL::TFrameWindow::EvPaint
    //   WM_ERASEBKGND                                -> 0x004be714  OWL::TFrameWindow::EvEraseBkgnd
    //   WM_QUERYDRAGICON                             -> 0x004be780  OWL::TFrameWindow::EvQuerydragicon
    //   WM_INITMENUPOPUP                             -> 0x004bde38  OWL::TFrameWindow::EvInitMenuPopup
    //   WM_SETFOCUS                                  -> 0x004be858  OWL::TFrameWindow::EvSetFocus
    //   WM_SIZE                                      -> 0x004bf144  OWL::TFrameWindow::EvSize
    //   WM_PARENTNOTIFY                              -> 0x004be8c0  OWL::TFrameWindow::EvParentNotify
    //   WM_QUERYNEWPALETTE                           -> 0x004be964  OWL::TFrameWindow::EvQuerynewpalette
    //   WM_PALETTECHANGED                            -> 0x004be9a8  OWL::TFrameWindow::EvPalettechanged
};
```

### OWL::TFunctor1<OWL::TGadgetWindow *,OWL::TWindow *>

```cpp
// sizeof 20 (0x14)  rtti 0x004afccc  no vptr
class OWL::TFunctor1<OWL::TGadgetWindow *,OWL::TWindow *> : public OWL::TFunctorBase {
    /* +0x000 */ // base subobject OWL::TFunctorBase
};
```

### OWL::TFunctor3<bool,OWL::TDecoratedFrame &,OWL::TGadgetWindow &,OWL::TAbsLocation>

```cpp
// sizeof 20 (0x14)  rtti 0x004afc44  no vptr
class OWL::TFunctor3<bool,OWL::TDecoratedFrame &,OWL::TGadgetWindow &,OWL::TAbsLocation> : public OWL::TFunctorBase {
    /* +0x000 */ // base subobject OWL::TFunctorBase
};
```

### OWL::TFunctorBase

```cpp
// sizeof 16 (0x10)  rtti 0x004aff30  no vptr
class OWL::TFunctorBase {
};
```

### OWL::TGadget

```cpp
// sizeof 68 (0x44)  rtti 0x00427ee4  vptr at +0x0  destructor 0x0048fe0c
class OWL::TGadget {
    // vtable at 0x00506a60 (21 slots)
    //   [ 0] 0x0048fe0c  OWL::TGadget::~TGadget
    //   [ 1] 0x0048fe80  OWL::TGadget::vf1
    //   [ 2] 0x00490574  OWL::TGadget::vf2
    //   [ 3] 0x0048febc  OWL::TGadget::vf3
    //   [ 4] 0x0048fe44  OWL::TGadget::vf4
    //   [ 5] 0x0048fe5c  OWL::TGadget::vf5
    //   [ 6] 0x0048fe64  OWL::TGadget::vf6
    //   [ 7] 0x0049001c  OWL::TGadget::vf7
    //   [ 8] 0x004900d8  OWL::TGadget::vf8
    //   [ 9] 0x004901ac  OWL::TGadget::vf9
    //   [10] 0x004900e0  OWL::TGadget::vf10
    //   [11] 0x0048ffcc  OWL::TGadget::vf11
    //   [12] 0x00490560  OWL::TGadget::vf12
    //   [13] 0x0049042c  OWL::TGadget::vf13
    //   [14] 0x0049070c  OWL::TGadget::vf14
    //   [15] 0x0049072c  OWL::TGadget::vf15
    //   [16] 0x00490734  OWL::TGadget::vf16
    //   [17] 0x00490800  OWL::TGadget::vf17
    //   [18] 0x00490838  OWL::TGadget::vf18
    //   [19] 0x0049081c  OWL::TGadget::vf19
    //   [20] 0x00490840  OWL::TGadget::vf20
};
```

### OWL::TGadgetList

```cpp
// sizeof 12 (0xc)  rtti 0x00428c20  vptr at +0x0  destructor 0x00490d0c
class OWL::TGadgetList {
    // vtable at 0x00506b1c (7 slots)
    //   [ 0] 0x00490d0c  OWL::TGadgetList::~TGadgetList
    //   [ 1] 0x00490e0c  OWL::TGadgetList::vf1
    //   [ 2] 0x00490e60  OWL::TGadgetList::vf2
    //   [ 3] 0x00490ef0  OWL::TGadgetList::vf3
    //   [ 4] 0x00490f50  OWL::TGadgetList::vf4
    //   [ 5] 0x00490f58  OWL::TGadgetList::vf5
    //   [ 6] 0x00492f74  OWL::TGadgetList::vf6
};
```

### OWL::TGadgetWindow

```cpp
// sizeof 227 (0xe3)  rtti 0x00428aa0  vptr at +0x18  destructor 0x0049146c
class OWL::TGadgetWindow : public OWL::TGadgetList, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x004 */ // base subobject OWL::TGadgetList
    // vtable at 0x00506f88 (27 slots)
    //   [ 0] 0x0049146c  OWL::TGadgetWindow::~TGadgetWindow
    //   [ 1] 0x004919b8  OWL::TGadgetWindow::Create
    //   [ 2] 0x004919d4  OWL::TGadgetWindow::vf2
    //   [ 3] 0x0047bff4  OWL::TGadgetWindow::GetTooltip
    //   [ 4] 0x00492f98  OWL::TGadgetWindow::EnableTooltip
    //   [ 5] 0x00492644  OWL::TGadgetWindow::vf5
    //   [ 6] 0x0049266c  OWL::TGadgetWindow::vf6
    //   [ 7] 0x004926d4  OWL::TGadgetWindow::vf7
    //   [ 8] 0x00492694  OWL::TGadgetWindow::vf8
    //   [ 9] 0x004926f8  OWL::TGadgetWindow::vf9
    //   [10] 0x00492778  OWL::TGadgetWindow::vf10
    //   [11] 0x004927d0  OWL::TGadgetWindow::vf11
    //   [12] 0x004915d4  OWL::TGadgetWindow::IdleAction
    //   [13] 0x004917c8  OWL::TGadgetWindow::vf13
    //   [14] 0x00491800  OWL::TGadgetWindow::vf14
    //   [15] 0x00492ad8  OWL::TGadgetWindow::vf15
    //   [16] 0x00491a58  OWL::TGadgetWindow::vf16
    //   [17] 0x004925f8  OWL::TGadgetWindow::vf17
    //   [18] 0x00491b58  OWL::TGadgetWindow::vf18
    //   [19] 0x00492c14  OWL::TGadgetWindow::Paint
    //   [20] 0x00491b10  OWL::TGadgetWindow::vf20
    //   [21] 0x00492868  OWL::TGadgetWindow::SetupWindow
    //   [22] 0x0049292c  OWL::TGadgetWindow::CleanupWindow
    //   [23] 0x00492998  OWL::TGadgetWindow::PreProcessMsg
    //   [24] 0x00493108  OWL::TGadgetWindow::EvCommand
    //   [25] 0x004931d4  OWL::TGadgetWindow::EvCommandEnable
    //   [26] 0x00490f60  OWL::TGadgetWindow::Find
    // response table at 0x00506b58 (9 entries)
    //   WM_LBUTTONDOWN                               -> 0x00492c44  OWL::TGadgetWindow::EvLButtonDown
    //   WM_LBUTTONUP                                 -> 0x00492cc4  OWL::TGadgetWindow::EvLButtonUp
    //   WM_LBUTTONDBLCLK                             -> 0x00492d34  OWL::TGadgetWindow::EvLButtonDblClk
    //   WM_RBUTTONDOWN                               -> 0x00492d60  OWL::TGadgetWindow::EvRButtonDown
    //   WM_RBUTTONUP                                 -> 0x00492dd8  OWL::TGadgetWindow::EvRButtonUp
    //   WM_MOUSEMOVE                                 -> 0x00492e48  OWL::TGadgetWindow::EvMouseMove
    //   WM_WINDOWPOSCHANGING                         -> 0x00492a54  OWL::TGadgetWindow::EvWindowPosChanging
    //   WM_SYSCOLORCHANGE                            -> 0x004915b4  OWL::TGadgetWindow::EvSysColorChange
    //   message 0x7ef2                               -> 0x00492a20  OWL::TGadgetWindow::EvMsg_7ef2
};
```

### OWL::TGadgetWindow::TLayoutInfo

```cpp
// sizeof 12 (0xc)  rtti 0x00491904  no vptr  destructor 0x00493268
class OWL::TGadgetWindow::TLayoutInfo {
    /* +0x008 */ OWL::TAPointer<OWL::TRect> m_8;
};
```

### OWL::TGadgetWindowFont

```cpp
// sizeof 5 (0x5)  rtti 0x00428568  no vptr  destructor 0x00428b20
class OWL::TGadgetWindowFont : public OWL::TFont {
    /* +0x000 */ // base subobject OWL::TFont
};
```

### OWL::TGdiBase

```cpp
// sizeof 5 (0x5)  rtti 0x004046d4  no vptr
class OWL::TGdiBase {
};
```

### OWL::TGdiObject

```cpp
// sizeof 5 (0x5)  rtti 0x0040441c  no vptr  destructor 0x00494064
class OWL::TGdiObject : public OWL::TGdiBase {
    /* +0x000 */ // base subobject OWL::TGdiBase
};
```

### OWL::TGroupBox

```cpp
// sizeof 171 (0xab)  rtti 0x00402a00  vptr at +0xc  destructor 0x00402d74
class OWL::TGroupBox : public OWL::TControl, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TControl
    // vtable at 0x0050fc1c (11 slots)
    //   [ 0] 0x00402d74  OWL::TGroupBox::~TGroupBox
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x004ad690  OWL::TControl::Find
    //   [ 9] 0x004bf634  OWL::TGroupBox::vf9
    //   [10] 0x004bf4e4  OWL::TGroupBox::vf10
};
```

### OWL::THatch8x8Brush

```cpp
// sizeof 5 (0x5)  rtti 0x004a13d0  no vptr  destructor 0x004a14f8
class OWL::THatch8x8Brush : public OWL::TBrush {
    /* +0x000 */ // base subobject OWL::TBrush
};
```

### OWL::TImageList

```cpp
// sizeof 16 (0x10)  rtti 0x00473604  no vptr  destructor 0x0049468c
class OWL::TImageList {
};
```

### OWL::TLayoutWindow

```cpp
// sizeof 199 (0xc7)  rtti 0x00428c70  vptr at +0xc  destructor 0x00494cc0
class OWL::TLayoutWindow : public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    // vtable at 0x005076c0 (4 slots)
    //   [ 0] 0x00494cc0  OWL::TLayoutWindow::~TLayoutWindow
    //   [ 1] 0x00494df0  OWL::TLayoutWindow::vf1
    //   [ 2] 0x004952d4  OWL::TLayoutWindow::RemoveChild
    //   [ 3] 0x00494abc  OWL::TLayoutWindow::Find
    // response table at 0x005074a8 (1 entries)
    //   WM_SIZE                                      -> 0x0049527c  OWL::TLayoutWindow::EvSize
};
```

### OWL::TLayoutWindow::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x00496230  vptr at +0x0
class OWL::TLayoutWindow::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x005076a4 (4 slots)
    //   [ 0] 0x00486d34  OWL::TNewStreamer::vf0
    //   [ 1] 0x00495d8c  OWL::TLayoutWindow::Streamer::vf1
    //   [ 2] 0x00495d98  OWL::TLayoutWindow::Streamer::vf2
    //   [ 3] 0x00496284  OWL::TLayoutWindow::Streamer::vf3
};
```

### OWL::TListBox

```cpp
// sizeof 170 (0xaa)  rtti 0x00407170  vptr at +0xc  destructor 0x00407468
class OWL::TListBox : public OWL::TControl, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TControl
    // vtable at 0x0050fdd0 (31 slots)
    //   [ 0] 0x00407468  OWL::TListBox::~TListBox
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x004ad690  OWL::TControl::Find
    //   [ 9] 0x00421cd0  OWL::TListBox::GetCount
    //   [10] 0x00421cec  OWL::TListBox::FindString
    //   [11] 0x00421d0c  OWL::TListBox::FindExactString
    //   [12] 0x00421d3c  OWL::TListBox::GetTopIndex
    //   [13] 0x00421d58  OWL::TListBox::SetTopIndex
    //   [14] 0x00421d78  OWL::TListBox::GetHorizontalExtent
    //   [15] 0x00421d94  OWL::TListBox::SetHorizontalExtent
    //   [16] 0x00421db4  OWL::TListBox::GetStringLen
    //   [17] 0x00421dd4  OWL::TListBox::GetString
    //   [18] 0x00421df4  OWL::TListBox::GetItemData
    //   [19] 0x00421e14  OWL::TListBox::SetItemData
    //   [20] 0x00421e34  OWL::TListBox::GetItemHeight
    //   [21] 0x00421e54  OWL::TListBox::SetItemHeight
    //   [22] 0x00421e84  OWL::TListBox::ClearList
    //   [23] 0x00421ea0  OWL::TListBox::DirectoryList
    //   [24] 0x00421ec0  OWL::TListBox::AddString
    //   [25] 0x00421ee0  OWL::TListBox::InsertString
    //   [26] 0x00421f00  OWL::TListBox::DeleteString
    //   [27] 0x004bfda4  OWL::TListBox::GetSelIndex
    //   [28] 0x004bfe0c  OWL::TListBox::SetSelIndex
    //   [29] 0x004bfaf8  PVWPathListBox::Transfer
    //   [30] 0x004bfaec  PVWPathListBox::GetClassName
};
```

### OWL::TListBox::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x004c019c  vptr at +0x0
class OWL::TListBox::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0050ffa4 (5 slots)
    //   [ 0] 0x00486d34  OWL::TNewStreamer::vf0
    //   [ 1] 0x004c00a8  OWL::TListBox::Streamer::vf1
    //   [ 2] 0x004c00c4  OWL::TListBox::Streamer::vf2
    //   [ 3] 0x004c01e8  OWL::TListBox::Streamer::vf3
    //   [ 4] 0x004ba5d8  OWL::TListBox::Streamer::vf4
};
```

### OWL::TMBlockList<TStandardAllocator>

```cpp
// sizeof 4 (0x4)  rtti 0x0048c9fc  no vptr  destructor 0x0048cc48
class OWL::TMBlockList<TStandardAllocator> {
};
```

### OWL::TMemDCCache

```cpp
// sizeof 80 (0x50)  rtti 0x004975d8  no vptr  destructor 0x00497690
class OWL::TMemDCCache {
};
```

### OWL::TMemoryDC

```cpp
// sizeof 37 (0x25)  rtti 0x00488574  vptr at +0x5  destructor 0x00497930
class OWL::TMemoryDC : public OWL::TCreatedDC {
    /* +0x000 */ // base subobject OWL::TCreatedDC
    // vtable at 0x00507d2c (24 slots)
    //   [ 0] 0x00497930  OWL::TMemoryDC::~TMemoryDC
    //   [ 1] 0x0048dcbc  OWL::TDC::vf1
    //   [ 2] 0x0048dccc  OWL::TDC::vf2
    //   [ 3] 0x0048dce8  OWL::TDC::vf3
    //   [ 4] 0x0048dd04  OWL::TDC::vf4
    //   [ 5] 0x0048e13c  OWL::TMemoryDC::vf5
    //   [ 6] 0x0048da0c  OWL::TDC::vf6
    //   [ 7] 0x0048da90  OWL::TDC::vf7
    //   [ 8] 0x0048dd20  OWL::TDC::vf8
    //   [ 9] 0x0048dd6c  OWL::TDC::vf9
    //   [10] 0x0048ddb8  OWL::TDC::vf10
    //   [11] 0x0048ddec  OWL::TDC::vf11
    //   [12] 0x0048de38  OWL::TDC::vf12
    //   [13] 0x0048de84  OWL::TDC::vf13
    //   [14] 0x0048ded0  OWL::TDC::vf14
    //   [15] 0x0048df24  OWL::TDC::vf15
    //   [16] 0x0048df70  OWL::TDC::vf16
    //   [17] 0x0048dfc4  OWL::TDC::vf17
    //   [18] 0x0048dffc  OWL::TDC::vf18
    //   [19] 0x0048e040  OWL::TDC::vf19
    //   [20] 0x0048e0a8  OWL::TDC::vf20
    //   [21] 0x0048e0c8  OWL::TDC::vf21
    //   [22] 0x0048e0f4  OWL::TDC::vf22
    //   [23] 0x0048d8e8  OWL::TDC::vf23
};
```

### OWL::TMenu

```cpp
// sizeof 9 (0x9)  rtti 0x0041565c  vptr at +0x0  destructor 0x00497bf4
class OWL::TMenu {
    // vtable at 0x00508078 (5 slots)
    //   [ 0] 0x00497bf4  OWL::TMenu::~TMenu
    //   [ 1] 0x004982a0  OWL::TMenu::vf1
    //   [ 2] 0x00497cf4  OWL::TMenu::vf2
    //   [ 3] 0x00497cfc  OWL::TMenu::vf3
    //   [ 4] 0x00414108  vshared_414108
};
```

### OWL::TMenuDescr

```cpp
// sizeof 41 (0x29)  rtti 0x004ba628  vptr at +0x0  destructor 0x004c01f4
class OWL::TMenuDescr : public OWL::TMenu {
    /* +0x000 */ // base subobject OWL::TMenu
    // vtable at 0x0050ffe4 (4 slots)
    //   [ 0] 0x004c01f4  OWL::TMenuDescr::~TMenuDescr
    //   [ 1] 0x004c02cc  OWL::TMenuDescr::vf1
    //   [ 2] 0x00497cf4  OWL::TMenu::vf2
    //   [ 3] 0x00497cfc  OWL::TMenu::vf3
};
```

### OWL::TMenuItemEnabler

```cpp
// sizeof 24 (0x18)  rtti 0x0049cbb4  vptr at +0x0
class OWL::TMenuItemEnabler : public OWL::TCommandEnabler {
    /* +0x000 */ // base subobject OWL::TCommandEnabler
    // vtable at 0x0050b3e0 (3 slots)
    //   [ 0] 0x004bd888  OWL::TMenuItemEnabler::vf0
    //   [ 1] 0x004bd8c0  OWL::TMenuItemEnabler::vf1
    //   [ 2] 0x004bd8e0  OWL::TMenuItemEnabler::vf2
};
```

### OWL::TMessageBar

```cpp
// sizeof 232 (0xe8)  rtti 0x00473d70  vptr at +0x18  destructor 0x00498528
class OWL::TMessageBar : public OWL::TGadgetWindow, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TGadgetWindow
    // vtable at 0x00508134 (28 slots)
    //   [ 0] 0x00498528  OWL::TMessageBar::~TMessageBar
    //   [ 1] 0x004919b8  OWL::TGadgetWindow::Create
    //   [ 2] 0x004919d4  OWL::TGadgetWindow::vf2
    //   [ 3] 0x0047bff4  OWL::TGadgetWindow::GetTooltip
    //   [ 4] 0x00492f98  OWL::TGadgetWindow::EnableTooltip
    //   [ 5] 0x00492644  OWL::TGadgetWindow::vf5
    //   [ 6] 0x0049266c  OWL::TGadgetWindow::vf6
    //   [ 7] 0x004926d4  OWL::TGadgetWindow::vf7
    //   [ 8] 0x00492694  OWL::TGadgetWindow::vf8
    //   [ 9] 0x004926f8  OWL::TGadgetWindow::vf9
    //   [10] 0x00492778  OWL::TGadgetWindow::vf10
    //   [11] 0x004927d0  OWL::TGadgetWindow::vf11
    //   [12] 0x004915d4  OWL::TGadgetWindow::IdleAction
    //   [13] 0x004917c8  OWL::TGadgetWindow::vf13
    //   [14] 0x004987a0  OWL::TMessageBar::vf14
    //   [15] 0x00498638  OWL::TMessageBar::vf15
    //   [16] 0x00498770  OWL::TMessageBar::vf16
    //   [17] 0x004925f8  OWL::TGadgetWindow::vf17
    //   [18] 0x00491b58  OWL::TGadgetWindow::vf18
    //   [19] 0x00492c14  OWL::TGadgetWindow::Paint
    //   [20] 0x00491b10  OWL::TGadgetWindow::vf20
    //   [21] 0x00492868  OWL::TGadgetWindow::SetupWindow
    //   [22] 0x0049292c  OWL::TGadgetWindow::CleanupWindow
    //   [23] 0x00492998  OWL::TGadgetWindow::PreProcessMsg
    //   [24] 0x00493108  OWL::TGadgetWindow::EvCommand
    //   [25] 0x004931d4  OWL::TGadgetWindow::EvCommandEnable
    //   [26] 0x00490f60  OWL::TGadgetWindow::Find
    //   [27] 0x00498830  OWL::TMessageBar::vf27
};
```

### OWL::TMMemBlocks<TStandardAllocator>

```cpp
// sizeof 25 (0x19)  rtti 0x0048cc64  no vptr  destructor 0x0048cd38
class OWL::TMMemBlocks<TStandardAllocator> {
    /* +0x004 */ OWL::TMMemStack<TStandardAllocator> m_4;
};
```

### OWL::TMMemStack<TStandardAllocator>

```cpp
// sizeof 17 (0x11)  rtti 0x0048ccd0  no vptr  destructor 0x0048cdf8
class OWL::TMMemStack<TStandardAllocator> {
    /* +0x000 */ OWL::TMBaseMemBlocks<TStandardAllocator> m_0;
};
```

### OWL::TModeGadget

```cpp
// sizeof 100 (0x64)  rtti 0x00498ac4  vptr at +0x0  destructor 0x00498b20
class OWL::TModeGadget : public OWL::TTextGadget {
    /* +0x000 */ // base subobject OWL::TTextGadget
    // vtable at 0x0050829c (22 slots)
    //   [ 0] 0x00498b20  OWL::TModeGadget::~TModeGadget
    //   [ 1] 0x0048fe80  OWL::TGadget::vf1
    //   [ 2] 0x0049edbc  OWL::TTextGadget::vf2
    //   [ 3] 0x0048febc  OWL::TGadget::vf3
    //   [ 4] 0x00498a44  OWL::TModeGadget::vf4
    //   [ 5] 0x0048fe5c  OWL::TGadget::vf5
    //   [ 6] 0x0048fe64  OWL::TGadget::vf6
    //   [ 7] 0x0049001c  OWL::TGadget::vf7
    //   [ 8] 0x004900d8  OWL::TGadget::vf8
    //   [ 9] 0x004901ac  OWL::TGadget::vf9
    //   [10] 0x004900e0  OWL::TGadget::vf10
    //   [11] 0x0048ffcc  OWL::TGadget::vf11
    //   [12] 0x0049ee80  OWL::TTextGadget::vf12
    //   [13] 0x0049042c  OWL::TGadget::vf13
    //   [14] 0x0049070c  OWL::TGadget::vf14
    //   [15] 0x0049072c  OWL::TGadget::vf15
    //   [16] 0x00490734  OWL::TGadget::vf16
    //   [17] 0x00490800  OWL::TGadget::vf17
    //   [18] 0x00490838  OWL::TGadget::vf18
    //   [19] 0x0049081c  OWL::TGadget::vf19
    //   [20] 0x00490840  OWL::TGadget::vf20
    //   [21] 0x00498b64  OWL::TTextGadget::vf21
};
```

### OWL::TModeStrings

```cpp
// sizeof 12 (0xc)  rtti 0x0049d3ac  no vptr  destructor 0x0049dd50
class OWL::TModeStrings {
};
```

### OWL::TModule

```cpp
// sizeof 13 (0xd)  rtti 0x00469dc4  vptr at +0x0  destructor 0x004c0aac
class OWL::TModule : public OWL::TStreamableBase {
    /* +0x000 */ // base subobject OWL::TStreamableBase
    // vtable at 0x00510770 (2 slots)
    //   [ 0] 0x004c0aac  OWL::TModule::~TModule
    //   [ 1] 0x004c0c48  OWL::TModule::vf1
};
```

### OWL::TModule::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x004c2744  vptr at +0x0
class OWL::TModule::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0051083c (4 slots)
    //   [ 0] 0x00486d34  OWL::TNewStreamer::vf0
    //   [ 1] 0x004c2610  OWL::TModule::Streamer::vf1
    //   [ 2] 0x004c2658  OWL::TModule::Streamer::vf2
    //   [ 3] 0x004c2790  OWL::TModule::Streamer::vf3
};
```

### OWL::TMsgThread

```cpp
// sizeof 10 (0xa)  rtti 0x00475a3c  vptr at +0x0
class OWL::TMsgThread {
    // vtable at 0x0050838c (6 slots)
    //   [ 0] 0x00498cb8  OWL::TMsgThread::vf0
    //   [ 1] 0x00498d5c  OWL::TMsgThread::vf1
    //   [ 2] 0x00498d64  OWL::TMsgThread::vf2
    //   [ 3] 0x00498e00  OWL::TMsgThread::vf3
    //   [ 4] 0x00498eac  OWL::TMsgThread::vf4
    //   [ 5] 0x00498eb4  OWL::TMsgThread::vf5
};
```

### OWL::TNewStreamer

```cpp
// sizeof 8 (0x8)  rtti 0x00486da8  vptr at +0x0
class OWL::TNewStreamer : public OWL::TStreamer {
    /* +0x000 */ // base subobject OWL::TStreamer
    // vtable at 0x00503e9c (4 slots)
    //   [ 0] 0x00486d34  OWL::TNewStreamer::vf0
    //   [ 1] 0x004e6028  __vstub_4e6028
    //   [ 2] 0x004e6028  __vstub_4e6028
    //   [ 3] 0x004e6028  __vstub_4e6028
};
```

### OWL::TNumericStatic

```cpp
// sizeof 178 (0xb2)  rtti 0x004c601c  vptr at +0xc  destructor 0x004c62d8
class OWL::TNumericStatic : public OWL::TStatic, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TStatic
    // vtable at 0x00511438 (12 slots)
    //   [ 0] 0x004c62d8  OWL::TNumericStatic::~TNumericStatic
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x004c470c  OWL::TNumericStatic::Find
    //   [ 9] 0x004c7bdc  OWL::TStatic::vf9
    //   [10] 0x004c7ba4  PVWStatic::Transfer
    //   [11] 0x004c7b84  PVWStatic::GetClassName
    // response table at 0x00510e14 (1 entries)
    //   message 0x0464                               -> 0x004c48a4  OWL::TNumericStatic::EvMsg_464
};
```

### OWL::TObjInfo

```cpp
// sizeof 6 (0x6)  rtti 0x00493b60  no vptr  destructor 0x00494094
class OWL::TObjInfo {
};
```

### OWL::TOpenSaveDialog

```cpp
// sizeof 270 (0x10e)  rtti 0x0043ecb4  vptr at +0xc  destructor 0x0043eea0
class OWL::TOpenSaveDialog : public OWL::TCommonDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TCommonDialog
    // vtable at 0x00510b04 (16 slots)
    //   [ 0] 0x0043eea0  OWL::TOpenSaveDialog::~TOpenSaveDialog
    //   [ 1] 0x004c2c10  OWL::TOpenSaveDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x0048c788  OWL::TCommonDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x004e6028  __vstub_4e6028
    //   [ 7] 0x004b03f4  OWL::TDialog::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x004b0be0  OWL::TDialog::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x0048c764  OWL::TCommonDialog::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x004c296c  OWL::TOpenSaveDialog::vf14
    //   [15] 0x004c2c54  OWL::TOpenSaveDialog::vf15
};
```

### OWL::TOpenSaveDialog::TData

```cpp
// sizeof 40 (0x28)  rtti 0x00422ecc  no vptr  destructor 0x004c2888
class OWL::TOpenSaveDialog::TData {
};
```

### OWL::TPaintDC

```cpp
// sizeof 101 (0x65)  rtti 0x004166e4  vptr at +0x5  destructor 0x0049b014
class OWL::TPaintDC : public OWL::TDC {
    /* +0x000 */ // base subobject OWL::TDC
    // vtable at 0x005088b0 (25 slots)
    //   [ 0] 0x0049b014  OWL::TPaintDC::~TPaintDC
    //   [ 1] 0x0048dcbc  OWL::TDC::vf1
    //   [ 2] 0x0048dccc  OWL::TDC::vf2
    //   [ 3] 0x0048dce8  OWL::TDC::vf3
    //   [ 4] 0x0048dd04  OWL::TDC::vf4
    //   [ 5] 0x0048d97c  OWL::TDC::vf5
    //   [ 6] 0x0048da0c  OWL::TDC::vf6
    //   [ 7] 0x0048da90  OWL::TDC::vf7
    //   [ 8] 0x0048dd20  OWL::TDC::vf8
    //   [ 9] 0x0048dd6c  OWL::TDC::vf9
    //   [10] 0x0048ddb8  OWL::TDC::vf10
    //   [11] 0x0048ddec  OWL::TDC::vf11
    //   [12] 0x0048de38  OWL::TDC::vf12
    //   [13] 0x0048de84  OWL::TDC::vf13
    //   [14] 0x0048ded0  OWL::TDC::vf14
    //   [15] 0x0048df24  OWL::TDC::vf15
    //   [16] 0x0048df70  OWL::TDC::vf16
    //   [17] 0x0048dfc4  OWL::TDC::vf17
    //   [18] 0x0048dffc  OWL::TDC::vf18
    //   [19] 0x0048e040  OWL::TDC::vf19
    //   [20] 0x0048e0a8  OWL::TDC::vf20
    //   [21] 0x0048e0c8  OWL::TDC::vf21
    //   [22] 0x0048e0f4  OWL::TDC::vf22
    //   [23] 0x0048d8e8  OWL::TDC::vf23
    //   [24] 0x0049b0e8  OWL::TPaintDC::vf24
};
```

### OWL::TPalette

```cpp
// sizeof 5 (0x5)  rtti 0x00488658  no vptr  destructor 0x00488a3c
class OWL::TPalette : public OWL::TGdiObject {
    /* +0x000 */ // base subobject OWL::TGdiObject
};
```

### OWL::TPen

```cpp
// sizeof 5 (0x5)  rtti 0x00418d24  no vptr  destructor 0x00421a88
class OWL::TPen : public OWL::TGdiObject {
    /* +0x000 */ // base subobject OWL::TGdiObject
};
```

### OWL::TPickListPopup

```cpp
// sizeof 163 (0xa3)  rtti 0x0049bb74  vptr at +0x8  destructor 0x0049bbf0
class OWL::TPickListPopup : public OWL::TWindow, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase {
    /* +0x000 */ // base subobject OWL::TWindow
    /* +0x086 */ OWL::TPopupMenu m_86;
    // vtable at 0x00508a10 (34 slots)
    //   [ 0] 0x0049bbf0  OWL::TPickListPopup::~TPickListPopup
    //   [ 1] 0x00402640  OWL::TWindow::GetTooltip
    //   [ 2] 0x004a8104  OWL::TWindow::EnableTooltip
    //   [ 3] 0x004a7144  OWL::TWindow::Register
    //   [ 4] 0x004a6e1c  OWL::TWindow::Create
    //   [ 5] 0x004a6dcc  OWL::TWindow::PerformCreate
    //   [ 6] 0x004a6be0  OWL::TWindow::Destroy
    //   [ 7] 0x0049b940  OWL::TPickListPopup::Execute
    //   [ 8] 0x004a6f9c  OWL::TWindow::DoExecute
    //   [ 9] 0x004a7254  OWL::TWindow::CloseWindow
    //   [10] 0x004a54b4  OWL::TWindow::PreProcessMsg
    //   [11] 0x004a5554  OWL::TWindow::IdleAction
    //   [12] 0x004a61c4  OWL::TWindow::HoldFocusHWnd
    //   [13] 0x004a5644  OWL::TWindow::SetParent
    //   [14] 0x004a56d0  OWL::TWindow::SetDocTitle
    //   [15] 0x004a7230  OWL::TWindow::CanClose
    //   [16] 0x004a5e38  OWL::TWindow::WindowProc
    //   [17] 0x004a5cd0  OWL::TWindow::DefWindowProc
    //   [18] 0x0049b9c0  OWL::TPickListPopup::EvCommand
    //   [19] 0x004a5a18  OWL::TWindow::EvNotify
    //   [20] 0x004a5b0c  OWL::TWindow::EvCommandEnable
    //   [21] 0x004a6af0  OWL::TWindow::Paint
    //   [22] 0x004a7078  OWL::TWindow::Transfer
    //   [23] 0x004a70c4  OWL::TWindow::TransferData
    //   [24] 0x0040264c  OWL::TWindow::EnableWindow
    //   [25] 0x004a7b24  OWL::TWindow::ShowWindow
    //   [26] 0x00402670  OWL::TWindow::Invalidate
    //   [27] 0x0040268c  OWL::TWindow::InvalidateRect
    //   [28] 0x004a6c60  OWL::TWindow::GetWindowClass
    //   [29] 0x004a6d08  OWL::TWindow::GetClassName
    //   [30] 0x004a6fd8  OWL::TWindow::SetupWindow
    //   [31] 0x004a7070  OWL::TWindow::CleanupWindow
    //   [32] 0x004a55f0  OWL::TWindow::RemoveChild
    //   [33] 0x004a4d44  OWL::TWindow::Find
};
```

### OWL::TPointer<OWL::TBitmap>

```cpp
// sizeof 4 (0x4)  rtti 0x004a142c  no vptr  destructor 0x004a1548
class OWL::TPointer<OWL::TBitmap> : public OWL::TPointerBase<OWL::TBitmap> {
    /* +0x000 */ // base subobject OWL::TPointerBase<OWL::TBitmap>
};
```

### OWL::TPointer<OWL::TFont>

```cpp
// sizeof 4 (0x4)  rtti 0x004a2d04  no vptr  destructor 0x004a4784
class OWL::TPointer<OWL::TFont> : public OWL::TPointerBase<OWL::TFont> {
    /* +0x000 */ // base subobject OWL::TPointerBase<OWL::TFont>
};
```

### OWL::TPointer<OWL::TStreamer>

```cpp
// sizeof 4 (0x4)  rtti 0x0049a118  no vptr  destructor 0x0049a764
class OWL::TPointer<OWL::TStreamer> : public OWL::TPointerBase<OWL::TStreamer> {
    /* +0x000 */ // base subobject OWL::TPointerBase<OWL::TStreamer>
};
```

### OWL::TPointerBase<char>

```cpp
// sizeof 4 (0x4)  rtti 0x00422b48  no vptr
class OWL::TPointerBase<char> {
};
```

### OWL::TPointerBase<OWL::TBitmap>

```cpp
// sizeof 4 (0x4)  rtti 0x004a14b0  no vptr
class OWL::TPointerBase<OWL::TBitmap> {
};
```

### OWL::TPointerBase<OWL::TColor>

```cpp
// sizeof 4 (0x4)  rtti 0x00422cb0  no vptr
class OWL::TPointerBase<OWL::TColor> {
};
```

### OWL::TPointerBase<OWL::TDocTemplate *>

```cpp
// sizeof 4 (0x4)  rtti 0x004b4d80  no vptr
class OWL::TPointerBase<OWL::TDocTemplate *> {
};
```

### OWL::TPointerBase<OWL::TFont>

```cpp
// sizeof 4 (0x4)  rtti 0x004a45c8  no vptr
class OWL::TPointerBase<OWL::TFont> {
};
```

### OWL::TPointerBase<OWL::TRect>

```cpp
// sizeof 4 (0x4)  rtti 0x00493450  no vptr
class OWL::TPointerBase<OWL::TRect> {
};
```

### OWL::TPointerBase<OWL::TStreamer>

```cpp
// sizeof 4 (0x4)  rtti 0x0049a60c  no vptr
class OWL::TPointerBase<OWL::TStreamer> {
};
```

### OWL::TPopupMenu

```cpp
// sizeof 9 (0x9)  rtti 0x00415b90  vptr at +0x0  destructor 0x00421c10
class OWL::TPopupMenu : public OWL::TMenu {
    /* +0x000 */ // base subobject OWL::TMenu
    // vtable at 0x0050805c (4 slots)
    //   [ 0] 0x00421c10  OWL::TPopupMenu::~TPopupMenu
    //   [ 1] 0x004982a0  OWL::TMenu::vf1
    //   [ 2] 0x00497cf4  OWL::TMenu::vf2
    //   [ 3] 0x00497cfc  OWL::TMenu::vf3
};
```

### OWL::TPreviewDCBase

```cpp
// sizeof 57 (0x39)  rtti 0x0049c968  vptr at +0x5  destructor 0x0049c9e8
class OWL::TPreviewDCBase : public OWL::TPrintDC {
    /* +0x000 */ // base subobject OWL::TPrintDC
    // vtable at 0x00508d90 (24 slots)
    //   [ 0] 0x0049c9e8  OWL::TPreviewDCBase::~TPreviewDCBase
    //   [ 1] 0x0048dcbc  OWL::TDC::vf1
    //   [ 2] 0x0048dccc  OWL::TDC::vf2
    //   [ 3] 0x0048dce8  OWL::TDC::vf3
    //   [ 4] 0x0048dd04  OWL::TDC::vf4
    //   [ 5] 0x0048d97c  OWL::TDC::vf5
    //   [ 6] 0x0048da0c  OWL::TDC::vf6
    //   [ 7] 0x0048da90  OWL::TDC::vf7
    //   [ 8] 0x0048dd20  OWL::TDC::vf8
    //   [ 9] 0x0048dd6c  OWL::TDC::vf9
    //   [10] 0x0048ddb8  OWL::TDC::vf10
    //   [11] 0x0048ddec  OWL::TDC::vf11
    //   [12] 0x0048de38  OWL::TDC::vf12
    //   [13] 0x0048de84  OWL::TDC::vf13
    //   [14] 0x0048ded0  OWL::TDC::vf14
    //   [15] 0x0048df24  OWL::TDC::vf15
    //   [16] 0x0048df70  OWL::TDC::vf16
    //   [17] 0x0048dfc4  OWL::TDC::vf17
    //   [18] 0x0048dffc  OWL::TDC::vf18
    //   [19] 0x0048e040  OWL::TDC::vf19
    //   [20] 0x0048e0a8  OWL::TDC::vf20
    //   [21] 0x0048e0c8  OWL::TDC::vf21
    //   [22] 0x0048e0f4  OWL::TDC::vf22
    //   [23] 0x0049bd50  OWL::TPreviewDCBase::vf23
};
```

### OWL::TPreviewPage

```cpp
// sizeof 166 (0xa6)  rtti 0x00428438  vptr at +0x8  destructor 0x00428bac
class OWL::TPreviewPage : public OWL::TWindow, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase {
    /* +0x000 */ // base subobject OWL::TWindow
    // vtable at 0x00508c6c (34 slots)
    //   [ 0] 0x00428bac  OWL::TPreviewPage::~TPreviewPage
    //   [ 1] 0x00402640  OWL::TWindow::GetTooltip
    //   [ 2] 0x004a8104  OWL::TWindow::EnableTooltip
    //   [ 3] 0x004a7144  OWL::TWindow::Register
    //   [ 4] 0x004a6e1c  OWL::TWindow::Create
    //   [ 5] 0x004a6dcc  OWL::TWindow::PerformCreate
    //   [ 6] 0x004a6be0  OWL::TWindow::Destroy
    //   [ 7] 0x004a6f8c  OWL::TWindow::Execute
    //   [ 8] 0x004a6f9c  OWL::TWindow::DoExecute
    //   [ 9] 0x004a7254  OWL::TWindow::CloseWindow
    //   [10] 0x004a54b4  OWL::TWindow::PreProcessMsg
    //   [11] 0x004a5554  OWL::TWindow::IdleAction
    //   [12] 0x004a61c4  OWL::TWindow::HoldFocusHWnd
    //   [13] 0x004a5644  OWL::TWindow::SetParent
    //   [14] 0x004a56d0  OWL::TWindow::SetDocTitle
    //   [15] 0x004a7230  OWL::TWindow::CanClose
    //   [16] 0x004a5e38  OWL::TWindow::WindowProc
    //   [17] 0x004a5cd0  OWL::TWindow::DefWindowProc
    //   [18] 0x004a5968  OWL::TWindow::EvCommand
    //   [19] 0x004a5a18  OWL::TWindow::EvNotify
    //   [20] 0x004a5b0c  OWL::TWindow::EvCommandEnable
    //   [21] 0x0049c768  OWL::TPreviewPage::Paint
    //   [22] 0x004a7078  OWL::TWindow::Transfer
    //   [23] 0x004a70c4  OWL::TWindow::TransferData
    //   [24] 0x0040264c  OWL::TWindow::EnableWindow
    //   [25] 0x004a7b24  OWL::TWindow::ShowWindow
    //   [26] 0x00402670  OWL::TWindow::Invalidate
    //   [27] 0x0040268c  OWL::TWindow::InvalidateRect
    //   [28] 0x004a6c60  OWL::TWindow::GetWindowClass
    //   [29] 0x004a6d08  OWL::TWindow::GetClassName
    //   [30] 0x004a6fd8  OWL::TWindow::SetupWindow
    //   [31] 0x004a7070  OWL::TWindow::CleanupWindow
    //   [32] 0x004a55f0  OWL::TWindow::RemoveChild
    //   [33] 0x0049c5fc  OWL::TPreviewPage::Find
    // response table at 0x00508bc0 (1 entries)
    //   WM_SIZE                                      -> 0x0049c940  OWL::TPreviewPage::EvSize
};
```

### OWL::TPrintDC

```cpp
// sizeof 53 (0x35)  rtti 0x00428648  vptr at +0x5  destructor 0x00428a04
class OWL::TPrintDC : public OWL::TCreatedDC {
    /* +0x000 */ // base subobject OWL::TCreatedDC
    // vtable at 0x00508e50 (25 slots)
    //   [ 0] 0x00428a04  OWL::TPrintDC::~TPrintDC
    //   [ 1] 0x0048dcbc  OWL::TDC::vf1
    //   [ 2] 0x0048dccc  OWL::TDC::vf2
    //   [ 3] 0x0048dce8  OWL::TDC::vf3
    //   [ 4] 0x0048dd04  OWL::TDC::vf4
    //   [ 5] 0x0048d97c  OWL::TDC::vf5
    //   [ 6] 0x0048da0c  OWL::TDC::vf6
    //   [ 7] 0x0048da90  OWL::TDC::vf7
    //   [ 8] 0x0048dd20  OWL::TDC::vf8
    //   [ 9] 0x0048dd6c  OWL::TDC::vf9
    //   [10] 0x0048ddb8  OWL::TDC::vf10
    //   [11] 0x0048ddec  OWL::TDC::vf11
    //   [12] 0x0048de38  OWL::TDC::vf12
    //   [13] 0x0048de84  OWL::TDC::vf13
    //   [14] 0x0048ded0  OWL::TDC::vf14
    //   [15] 0x0048df24  OWL::TDC::vf15
    //   [16] 0x0048df70  OWL::TDC::vf16
    //   [17] 0x0048dfc4  OWL::TDC::vf17
    //   [18] 0x0048dffc  OWL::TDC::vf18
    //   [19] 0x0048e040  OWL::TDC::vf19
    //   [20] 0x0048e0a8  OWL::TDC::vf20
    //   [21] 0x0048e0c8  OWL::TDC::vf21
    //   [22] 0x0048e0f4  OWL::TDC::vf22
    //   [23] 0x0048d8e8  OWL::TDC::vf23
    //   [24] 0x0049cc00  OWL::TPrintDC::vf24
};
```

### OWL::TPrintDialog

```cpp
// sizeof 424 (0x1a8)  rtti 0x004c4140  vptr at +0xc  destructor 0x004c41c0
class OWL::TPrintDialog : public OWL::TCommonDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TCommonDialog
    // vtable at 0x00510c90 (15 slots)
    //   [ 0] 0x004c41c0  OWL::TPrintDialog::~TPrintDialog
    //   [ 1] 0x004c38ac  OWL::TPrintDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x0048c788  OWL::TCommonDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x004c38c8  OWL::TPrintDialog::vf6
    //   [ 7] 0x004b03f4  OWL::TDialog::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x004b0be0  OWL::TDialog::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x0048c764  OWL::TCommonDialog::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x004c3348  OWL::TPrintDialog::vf14
};
```

### OWL::TPrintDialog::TData

```cpp
// sizeof 94 (0x5e)  rtti 0x004c40e8  no vptr  destructor 0x004c3de8
class OWL::TPrintDialog::TData {
};
```

### OWL::TPrinter

```cpp
// sizeof 54 (0x36)  rtti 0x00467064  vptr at +0x0  destructor 0x004c4d50
class OWL::TPrinter : public OWL::TStreamableBase {
    /* +0x000 */ // base subobject OWL::TStreamableBase
    // vtable at 0x00511310 (11 slots)
    //   [ 0] 0x004c4d50  OWL::TPrinter::~TPrinter
    //   [ 1] 0x004c4dbc  OWL::TPrinter::vf1
    //   [ 2] 0x004c5b4c  OWL::TPrinter::vf2
    //   [ 3] 0x004c5360  OWL::TPrinter::vf3
    //   [ 4] 0x004c5b60  OWL::TPrinter::vf4
    //   [ 5] 0x004c5264  OWL::TPrinter::vf5
    //   [ 6] 0x004c4dd8  OWL::TPrinter::vf6
    //   [ 7] 0x004c4f14  OWL::TPrinter::vf7
    //   [ 8] 0x004c4f8c  OWL::TPrinter::vf8
    //   [ 9] 0x004c5094  OWL::TPrinter::vf9
    //   [10] 0x004c51b8  OWL::TPrinter::vf10
};
```

### OWL::TPrinterAbortDlg

```cpp
// sizeof 178 (0xb2)  rtti 0x004c5f98  vptr at +0xc  destructor 0x004c6120
class OWL::TPrinterAbortDlg : public OWL::TDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TDialog
    // vtable at 0x00511348 (15 slots)
    //   [ 0] 0x004c6120  OWL::TPrinterAbortDlg::~TPrinterAbortDlg
    //   [ 1] 0x004b0624  OWL::TDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x004b0870  OWL::TDialog::PerformCreate
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x004b094c  OWL::TDialog::DoExecute
    //   [ 7] 0x004b03f4  OWL::TDialog::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x004b0be0  OWL::TDialog::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x004c4be4  OWL::TPrinterAbortDlg::vf11
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x004c4974  OWL::TPrinterAbortDlg::Find
    // response table at 0x00510eb4 (1 entries)
    //   EV_COMMAND(2)                                -> 0x004c4c48  OWL::TPrinterAbortDlg::Cmd2
};
```

### OWL::TPrintout

```cpp
// sizeof 22 (0x16)  rtti 0x004045f4  vptr at +0x0  destructor 0x004c651c
class OWL::TPrintout : public OWL::TStreamableBase {
    /* +0x000 */ // base subobject OWL::TStreamableBase
    // vtable at 0x00511674 (9 slots)
    //   [ 0] 0x004c651c  OWL::TPrintout::~TPrintout
    //   [ 1] 0x004c6584  OWL::TPrintout::vf1
    //   [ 2] 0x004c65a0  OWL::TPrintout::vf2
    //   [ 3] 0x004c65c4  OWL::TPrintout::vf3
    //   [ 4] 0x004c65cc  OWL::TPrintout::vf4
    //   [ 5] 0x004c65d4  OWL::TPrintout::vf5
    //   [ 6] 0x004c65e4  OWL::TPrintout::vf6
    //   [ 7] 0x004c65ec  OWL::TPrintout::vf7
    //   [ 8] 0x004c65f4  OWL::TPrintout::vf8
};
```

### OWL::TPrintPreviewDC

```cpp
// sizeof 65 (0x41)  rtti 0x0049c8e0  vptr at +0x5  destructor 0x0049bea0
class OWL::TPrintPreviewDC : public OWL::TPreviewDCBase {
    /* +0x000 */ // base subobject OWL::TPreviewDCBase
    // vtable at 0x00508d18 (27 slots)
    //   [ 0] 0x0049bea0  OWL::TPrintPreviewDC::~TPrintPreviewDC
    //   [ 1] 0x0048dcbc  OWL::TDC::vf1
    //   [ 2] 0x0048dccc  OWL::TDC::vf2
    //   [ 3] 0x0049c0b0  OWL::TPrintPreviewDC::vf3
    //   [ 4] 0x0048dd04  OWL::TDC::vf4
    //   [ 5] 0x0049bf54  OWL::TPrintPreviewDC::vf5
    //   [ 6] 0x0049c02c  OWL::TPrintPreviewDC::vf6
    //   [ 7] 0x0049c07c  OWL::TPrintPreviewDC::vf7
    //   [ 8] 0x0049c404  OWL::TPrintPreviewDC::vf8
    //   [ 9] 0x0049c460  OWL::TPrintPreviewDC::vf9
    //   [10] 0x0049c4bc  OWL::TPrintPreviewDC::vf10
    //   [11] 0x0049c4e4  OWL::TPrintPreviewDC::vf11
    //   [12] 0x0049c510  OWL::TPrintPreviewDC::vf12
    //   [13] 0x0049c53c  OWL::TPrintPreviewDC::vf13
    //   [14] 0x0049c568  OWL::TPrintPreviewDC::vf14
    //   [15] 0x0049c59c  OWL::TPrintPreviewDC::vf15
    //   [16] 0x0049c5c8  OWL::TPrintPreviewDC::vf16
    //   [17] 0x0048dfc4  OWL::TDC::vf17
    //   [18] 0x0048dffc  OWL::TDC::vf18
    //   [19] 0x0048e040  OWL::TDC::vf19
    //   [20] 0x0048e0a8  OWL::TDC::vf20
    //   [21] 0x0048e0c8  OWL::TDC::vf21
    //   [22] 0x0048e0f4  OWL::TDC::vf22
    //   [23] 0x0049bd50  OWL::TPreviewDCBase::vf23
    //   [24] 0x0049c11c  OWL::TPrintPreviewDC::vf24
    //   [25] 0x0049c254  OWL::TPrintPreviewDC::vf25
    //   [26] 0x0049c334  OWL::TPrintPreviewDC::vf26
};
```

### OWL::TPWrittenObjects::TPWObj

```cpp
// sizeof 8 (0x8)  rtti 0x0049a658  no vptr
class OWL::TPWrittenObjects::TPWObj {
};
```

### OWL::TRadioButton

```cpp
// sizeof 176 (0xb0)  rtti 0x00407268  vptr at +0xc  destructor 0x004073dc
class OWL::TRadioButton : public OWL::TCheckBox, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TCheckBox
    // vtable at 0x00511708 (12 slots)
    //   [ 0] 0x004073dc  OWL::TRadioButton::~TRadioButton
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x004c65fc  OWL::TRadioButton::Find
    //   [ 9] 0x004c677c  PVWRadioButton::GetClassName
    //   [10] 0x004abeb8  OWL::TButton::SetupWindow
    //   [11] 0x004ac70c  OWL::TCheckBox::Transfer
    // response table at 0x005116a8 (1 entries)
    //   EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)      -> 0x004c679c  OWL::TRadioButton::BNClicked
};
```

### OWL::TRegion

```cpp
// sizeof 5 (0x5)  rtti 0x004522b8  no vptr  destructor 0x0049cf24
class OWL::TRegion : public OWL::TGdiBase {
    /* +0x000 */ // base subobject OWL::TGdiBase
};
```

### OWL::TRegKey

```cpp
// sizeof 17 (0x11)  rtti 0x00487748  no vptr  destructor 0x0048792c
class OWL::TRegKey {
};
```

### OWL::TRegLink

```cpp
// sizeof 12 (0xc)  rtti 0x0049d020  vptr at +0x0  destructor 0x0049d06c
class OWL::TRegLink {
    // vtable at 0x00508fb8 (1 slots)
    //   [ 0] 0x0049d06c  OWL::TRegLink::~TRegLink
};
```

### OWL::TRegValue

```cpp
// sizeof 24 (0x18)  rtti 0x00487ad8  no vptr  destructor 0x00487aa8
class OWL::TRegValue {
};
```

### OWL::TReplaceDialog

```cpp
// sizeof 222 (0xde)  rtti 0x004b9dc4  vptr at +0xc  destructor 0x004ba018
class OWL::TReplaceDialog : public OWL::TFindReplaceDialog, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TFindReplaceDialog
    // vtable at 0x0050f50c (15 slots)
    //   [ 0] 0x004ba018  OWL::TReplaceDialog::~TReplaceDialog
    //   [ 1] 0x004bcfc8  OWL::TFindReplaceDialog::vf1
    //   [ 2] 0x004b0b14  OWL::TDialog::vf2
    //   [ 3] 0x004b07f8  OWL::TDialog::Create
    //   [ 4] 0x004bd284  OWL::TReplaceDialog::vf4
    //   [ 5] 0x004b08ec  OWL::TDialog::Execute
    //   [ 6] 0x0048c790  OWL::TCommonDialog::DoExecute
    //   [ 7] 0x004b03f4  OWL::TDialog::PreProcessMsg
    //   [ 8] 0x004b0b88  OWL::TDialog::CloseWindow
    //   [ 9] 0x004b0be0  OWL::TDialog::Destroy
    //   [10] 0x004b0ea8  OWL::TDialog::IdleAction
    //   [11] 0x0048c764  OWL::TCommonDialog::SetupWindow
    //   [12] 0x004b0488  OWL::TDialog::GetClassName
    //   [13] 0x004b04a8  OWL::TDialog::GetWindowClass
    //   [14] 0x004bcd9c  OWL::TFindReplaceDialog::Find
};
```

### OWL::TResource<OWL::TOOLBARTEMPLATE,241>

```cpp
// sizeof 8 (0x8)  rtti 0x0049cd4c  no vptr  destructor 0x0049cca4
class OWL::TResource<OWL::TOOLBARTEMPLATE,241> {
};
```

### OWL::TRichEdit

```cpp
// sizeof 254 (0xfe)  rtti 0x00421acc  vptr at +0xc  destructor 0x00422b88
class OWL::TRichEdit : public OWL::TEditFile, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TEditFile
    // vtable at 0x004fd234 (30 slots)
    //   [ 0] 0x00422b88  OWL::TRichEdit::~TRichEdit
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x00468c8c  OWL::TRichEdit::Find
    //   [ 9] 0x004b6954  OWL::TEdit::vf9
    //   [10] 0x004697b4  PVWRichEdit::Transfer
    //   [11] 0x004695dc  PVWRichEdit::GetClassName
    //   [12] 0x0046928c  OWL::TRichEdit::GetSubText
    //   [13] 0x004691c4  OWL::TRichEdit::GetSelection
    //   [14] 0x00422018  OWL::TEdit::vf14
    //   [15] 0x0046921c  OWL::TRichEdit::SetSelection
    //   [16] 0x004692dc  OWL::TRichEdit::vf16
    //   [17] 0x00469384  OWL::TRichEdit::Paste
    //   [18] 0x00422084  OWL::TEdit::CharFromPos
    //   [19] 0x004220b0  OWL::TEdit::PosFromChar
    //   [20] 0x0046960c  OWL::TRichEdit::vf20
    //   [21] 0x004b907c  OWL::TEditFile::CanClose
    //   [22] 0x004b8b90  OWL::TEditFile::vf22
    //   [23] 0x004b7eac  OWL::TEditFile::vf23
    //   [24] 0x004b815c  OWL::TEditFile::vf24
    //   [25] 0x00469834  OWL::TRichEdit::ReadFromFile
    //   [26] 0x004b7ef8  OWL::TEditFile::vf26
    //   [27] 0x004b83b4  OWL::TEditFile::vf27
    //   [28] 0x004b8634  OWL::TEditFile::vf28
    //   [29] 0x00469954  OWL::TRichEdit::WriteToFile
    // response table at 0x004fcc28 (17 entries)
    //   EV_COMMAND(24322)                            -> 0x00468cd4  OWL::TRichEdit::Cmd24322
    //   EV_COMMAND(24323)                            -> 0x00468cf0  OWL::TRichEdit::Cmd24323
    //   EV_COMMAND(24324)                            -> 0x00468d0c  OWL::TRichEdit::Cmd24324
    //   EV_COMMAND(24325)                            -> 0x00468d1c  OWL::TRichEdit::Cmd24325
    //   EV_COMMAND(24326)                            -> 0x00468d2c  OWL::TRichEdit::Cmd24326
    //   EV_COMMAND(24321)                            -> 0x00468d3c  OWL::TRichEdit::Cmd24321
    //   EV_COMMAND_ENABLE(24322)                     -> 0x00469490  OWL::TRichEdit::CeShared_469490
    //   EV_COMMAND_ENABLE(24323)                     -> 0x00469490  OWL::TRichEdit::CeShared_469490
    //   EV_COMMAND_ENABLE(24325)                     -> 0x00469490  OWL::TRichEdit::CeShared_469490
    //   EV_COMMAND_ENABLE(24324)                     -> 0x004694c8  OWL::TRichEdit::CeCmd24324
    //   EV_COMMAND_ENABLE(24326)                     -> 0x00469560  OWL::TRichEdit::CeCmd24326
    //   EV_COMMAND_ENABLE(24321)                     -> 0x004695a8  OWL::TRichEdit::CeCmd24321
    //   WM_CHAR                                      -> 0x0046943c  OWL::TRichEdit::EvChar
    //   WM_KEYDOWN                                   -> 0x00469450  OWL::TRichEdit::EvKeyDown
    //   WM_GETDLGCODE                                -> 0x00469428  OWL::TRichEdit::EvGetDlgCode
    //   WM_SETFOCUS                                  -> 0x0046947c  OWL::TRichEdit::EvSetFocus
    //   WM_KILLFOCUS                                 -> 0x00469464  OWL::TRichEdit::EvKillFocus
};
```

### OWL::TRichEdit::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x00486ce4  vptr at +0x0
class OWL::TRichEdit::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x00503e64 (4 slots)
    //   [ 0] 0x00486d34  OWL::TNewStreamer::vf0
    //   [ 1] 0x00486aa8  OWL::TRichEdit::Streamer::vf1
    //   [ 2] 0x00486b1c  OWL::TRichEdit::Streamer::vf2
    //   [ 3] 0x00486d64  OWL::TRichEdit::Streamer::vf3
};
```

### OWL::TRichEditModule

```cpp
// sizeof 13 (0xd)  rtti 0x00469b70  vptr at +0x0  destructor 0x00469bd0
class OWL::TRichEditModule : public OWL::TModule {
    /* +0x000 */ // base subobject OWL::TModule
    // vtable at 0x004fcfe8 (2 slots)
    //   [ 0] 0x00469bd0  OWL::TRichEditModule::~TRichEditModule
    //   [ 1] 0x004c0c48  OWL::TModule::vf1
};
```

### OWL::TScreenDC

```cpp
// sizeof 37 (0x25)  rtti 0x00403e18  vptr at +0x5  destructor 0x0040433c
class OWL::TScreenDC : public OWL::TWindowDC {
    /* +0x000 */ // base subobject OWL::TWindowDC
    // vtable at 0x0050b47c (24 slots)
    //   [ 0] 0x0040433c  OWL::TScreenDC::~TScreenDC
    //   [ 1] 0x0048dcbc  OWL::TDC::vf1
    //   [ 2] 0x0048dccc  OWL::TDC::vf2
    //   [ 3] 0x0048dce8  OWL::TDC::vf3
    //   [ 4] 0x0048dd04  OWL::TDC::vf4
    //   [ 5] 0x0048d97c  OWL::TDC::vf5
    //   [ 6] 0x0048da0c  OWL::TDC::vf6
    //   [ 7] 0x0048da90  OWL::TDC::vf7
    //   [ 8] 0x0048dd20  OWL::TDC::vf8
    //   [ 9] 0x0048dd6c  OWL::TDC::vf9
    //   [10] 0x0048ddb8  OWL::TDC::vf10
    //   [11] 0x0048ddec  OWL::TDC::vf11
    //   [12] 0x0048de38  OWL::TDC::vf12
    //   [13] 0x0048de84  OWL::TDC::vf13
    //   [14] 0x0048ded0  OWL::TDC::vf14
    //   [15] 0x0048df24  OWL::TDC::vf15
    //   [16] 0x0048df70  OWL::TDC::vf16
    //   [17] 0x0048dfc4  OWL::TDC::vf17
    //   [18] 0x0048dffc  OWL::TDC::vf18
    //   [19] 0x0048e040  OWL::TDC::vf19
    //   [20] 0x0048e0a8  OWL::TDC::vf20
    //   [21] 0x0048e0c8  OWL::TDC::vf21
    //   [22] 0x0048e0f4  OWL::TDC::vf22
    //   [23] 0x0048d8e8  OWL::TDC::vf23
};
```

### OWL::TScroller

```cpp
// sizeof 61 (0x3d)  rtti 0x00428068  vptr at +0x0  destructor 0x004c6948
class OWL::TScroller : public OWL::TStreamableBase {
    /* +0x000 */ // base subobject OWL::TStreamableBase
    // vtable at 0x00511834 (22 slots)
    //   [ 0] 0x004c6948  OWL::TScroller::~TScroller
    //   [ 1] 0x0044f8dc  OWL::TScroller::vf1
    //   [ 2] 0x004c6b20  OWL::TScroller::vf2
    //   [ 3] 0x004c69b8  OWL::TScroller::vf3
    //   [ 4] 0x004c6b3c  OWL::TScroller::vf4
    //   [ 5] 0x004c6ac8  OWL::TScroller::vf5
    //   [ 6] 0x004c6af4  OWL::TScroller::vf6
    //   [ 7] 0x004c6c38  OWL::TScroller::vf7
    //   [ 8] 0x004c6cb8  OWL::TScroller::vf8
    //   [ 9] 0x004c6d50  OWL::TScroller::vf9
    //   [10] 0x004c6ea0  OWL::TScroller::vf10
    //   [11] 0x004c6ff0  OWL::TScroller::vf11
    //   [12] 0x0044f8ec  OWL::TScroller::vf12
    //   [13] 0x0044f918  OWL::TScroller::vf13
    //   [14] 0x004c7104  OWL::TScroller::vf14
    //   [15] 0x004c7110  OWL::TScroller::vf15
    //   [16] 0x0044f93c  OWL::TScroller::vf16
    //   [17] 0x0044f95c  OWL::TScroller::vf17
    //   [18] 0x0044f974  OWL::TScroller::vf18
    //   [19] 0x0044f994  OWL::TScroller::vf19
    //   [20] 0x0044f9b8  OWL::TScroller::vf20
    //   [21] 0x0044f9d0  OWL::TScroller::vf21
};
```

### OWL::TScroller::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x004c7840  vptr at +0x0
class OWL::TScroller::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0051193c (4 slots)
    //   [ 0] 0x00486d34  OWL::TNewStreamer::vf0
    //   [ 1] 0x004c7500  OWL::TScroller::Streamer::vf1
    //   [ 2] 0x004c7654  OWL::TScroller::Streamer::vf2
    //   [ 3] 0x004c7890  OWL::TScroller::Streamer::vf3
};
```

### OWL::TSeparatorGadget

```cpp
// sizeof 69 (0x45)  rtti 0x004284ac  vptr at +0x0  destructor 0x00428b68
class OWL::TSeparatorGadget : public OWL::TGadget {
    /* +0x000 */ // base subobject OWL::TGadget
    // vtable at 0x00506a00 (21 slots)
    //   [ 0] 0x00428b68  OWL::TSeparatorGadget::~TSeparatorGadget
    //   [ 1] 0x0048fe80  OWL::TGadget::vf1
    //   [ 2] 0x00490574  OWL::TGadget::vf2
    //   [ 3] 0x0048febc  OWL::TGadget::vf3
    //   [ 4] 0x0048fe44  OWL::TGadget::vf4
    //   [ 5] 0x0048fe5c  OWL::TGadget::vf5
    //   [ 6] 0x0048fe64  OWL::TGadget::vf6
    //   [ 7] 0x0049001c  OWL::TGadget::vf7
    //   [ 8] 0x004908e0  OWL::TSeparatorGadget::vf8
    //   [ 9] 0x004901ac  OWL::TGadget::vf9
    //   [10] 0x004900e0  OWL::TGadget::vf10
    //   [11] 0x0048ffcc  OWL::TGadget::vf11
    //   [12] 0x004908f0  OWL::TSeparatorGadget::vf12
    //   [13] 0x0049042c  OWL::TGadget::vf13
    //   [14] 0x0049070c  OWL::TGadget::vf14
    //   [15] 0x0049072c  OWL::TGadget::vf15
    //   [16] 0x00490734  OWL::TGadget::vf16
    //   [17] 0x00490800  OWL::TGadget::vf17
    //   [18] 0x00490838  OWL::TGadget::vf18
    //   [19] 0x0049081c  OWL::TGadget::vf19
    //   [20] 0x00490840  OWL::TGadget::vf20
};
```

### OWL::TSizeGripGadget

```cpp
// sizeof 69 (0x45)  rtti 0x00490c00  vptr at +0x0  destructor 0x00490c60
class OWL::TSizeGripGadget : public OWL::TSeparatorGadget {
    /* +0x000 */ // base subobject OWL::TSeparatorGadget
    // vtable at 0x005069a0 (21 slots)
    //   [ 0] 0x00490c60  OWL::TSizeGripGadget::~TSizeGripGadget
    //   [ 1] 0x0048fe80  OWL::TGadget::vf1
    //   [ 2] 0x00490574  OWL::TGadget::vf2
    //   [ 3] 0x0048febc  OWL::TGadget::vf3
    //   [ 4] 0x0048fe44  OWL::TGadget::vf4
    //   [ 5] 0x0048fe5c  OWL::TGadget::vf5
    //   [ 6] 0x0048fe64  OWL::TGadget::vf6
    //   [ 7] 0x0049001c  OWL::TGadget::vf7
    //   [ 8] 0x004908e0  OWL::TSeparatorGadget::vf8
    //   [ 9] 0x004901ac  OWL::TGadget::vf9
    //   [10] 0x004900e0  OWL::TGadget::vf10
    //   [11] 0x0048ffcc  OWL::TGadget::vf11
    //   [12] 0x00490b68  OWL::TSizeGripGadget::vf12
    //   [13] 0x0049042c  OWL::TGadget::vf13
    //   [14] 0x0049070c  OWL::TGadget::vf14
    //   [15] 0x0049072c  OWL::TGadget::vf15
    //   [16] 0x00490734  OWL::TGadget::vf16
    //   [17] 0x00490800  OWL::TGadget::vf17
    //   [18] 0x00490838  OWL::TGadget::vf18
    //   [19] 0x0049081c  OWL::TGadget::vf19
    //   [20] 0x00490840  OWL::TGadget::vf20
};
```

### OWL::TStatic

```cpp
// sizeof 174 (0xae)  rtti 0x00402af0  vptr at +0xc  destructor 0x00402c58
class OWL::TStatic : public OWL::TControl, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TControl
    // vtable at 0x005119e4 (12 slots)
    //   [ 0] 0x00402c58  OWL::TStatic::~TStatic
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x004c789c  OWL::TStatic::Find
    //   [ 9] 0x004c7bdc  OWL::TStatic::vf9
    //   [10] 0x004c7ba4  PVWStatic::Transfer
    //   [11] 0x004c7b84  PVWStatic::GetClassName
    // response table at 0x00511960 (1 entries)
    //   WM_SIZE                                      -> 0x004c7b5c  OWL::TStatic::EvSize
};
```

### OWL::TStatic::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x004c7f8c  vptr at +0x0
class OWL::TStatic::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x00511b6c (4 slots)
    //   [ 0] 0x00486d34  OWL::TNewStreamer::vf0
    //   [ 1] 0x004c7e6c  EvRegisteredMsg_4c7e6c_4c7e6c
    //   [ 2] 0x004c7e9c  OWL::TStatic::Streamer::vf2
    //   [ 3] 0x004c7fd8  OWL::TStatic::Streamer::vf3
};
```

### OWL::TStatusBar

```cpp
// sizeof 257 (0x101)  rtti 0x00473c50  vptr at +0x18  destructor 0x00473ccc
class OWL::TStatusBar : public OWL::TMessageBar, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TMessageBar
    // vtable at 0x00509210 (28 slots)
    //   [ 0] 0x00473ccc  OWL::TStatusBar::~TStatusBar
    //   [ 1] 0x004919b8  OWL::TGadgetWindow::Create
    //   [ 2] 0x004919d4  OWL::TGadgetWindow::vf2
    //   [ 3] 0x0047bff4  OWL::TGadgetWindow::GetTooltip
    //   [ 4] 0x00492f98  OWL::TGadgetWindow::EnableTooltip
    //   [ 5] 0x0049daf0  OWL::TStatusBar::vf5
    //   [ 6] 0x0049266c  OWL::TGadgetWindow::vf6
    //   [ 7] 0x004926d4  OWL::TGadgetWindow::vf7
    //   [ 8] 0x00492694  OWL::TGadgetWindow::vf8
    //   [ 9] 0x004926f8  OWL::TGadgetWindow::vf9
    //   [10] 0x00492778  OWL::TGadgetWindow::vf10
    //   [11] 0x004927d0  OWL::TGadgetWindow::vf11
    //   [12] 0x004915d4  OWL::TGadgetWindow::IdleAction
    //   [13] 0x004917c8  OWL::TGadgetWindow::vf13
    //   [14] 0x004987a0  OWL::TMessageBar::vf14
    //   [15] 0x00498638  OWL::TMessageBar::vf15
    //   [16] 0x00498770  OWL::TMessageBar::vf16
    //   [17] 0x004925f8  OWL::TGadgetWindow::vf17
    //   [18] 0x00491b58  OWL::TGadgetWindow::vf18
    //   [19] 0x00492c14  OWL::TGadgetWindow::Paint
    //   [20] 0x0049da5c  OWL::TStatusBar::vf20
    //   [21] 0x00492868  OWL::TGadgetWindow::SetupWindow
    //   [22] 0x0049292c  OWL::TGadgetWindow::CleanupWindow
    //   [23] 0x00492998  OWL::TGadgetWindow::PreProcessMsg
    //   [24] 0x00493108  OWL::TGadgetWindow::EvCommand
    //   [25] 0x004931d4  OWL::TGadgetWindow::EvCommandEnable
    //   [26] 0x0049d3fc  OWL::TStatusBar::Find
    //   [27] 0x0049db38  OWL::TStatusBar::vf27
    // response table at 0x005090b0 (2 entries)
    //   WM_NCHITTEST                                 -> 0x0049db60  OWL::TStatusBar::EvNCHitTest
    //   message 0x7ef5                               -> 0x0049dc20  OWL::TStatusBar::EvMsg_7ef5
};
```

### OWL::TStreamableBase

```cpp
// sizeof 4 (0x4)  rtti 0x004027f0  vptr at +0x0  destructor 0x00489c54
class OWL::TStreamableBase {
    // vtable at 0x004ea93c (1 slots)
    //   [ 0] 0x00489c54  OWL::TStreamableBase::~TStreamableBase
};
```

### OWL::TStreamableClass

```cpp
// sizeof 16 (0x10)  rtti 0x00486c20  no vptr  destructor 0x004992f8
class OWL::TStreamableClass : public OWL::ObjectBuilder {
    /* +0x000 */ // base subobject OWL::ObjectBuilder
};
```

### OWL::TStreamableTypes

```cpp
// sizeof 4 (0x4)  rtti 0x0049a704  no vptr  destructor 0x004993e0
class OWL::TStreamableTypes {
};
```

### OWL::TStreamer

```cpp
// sizeof 8 (0x8)  rtti 0x00486d70  vptr at +0x0
class OWL::TStreamer {
    // vtable at 0x00503e80 (4 slots)
    //   [ 0] 0x004e6028  __vstub_4e6028
    //   [ 1] 0x004e6028  __vstub_4e6028
    //   [ 2] 0x004e6028  __vstub_4e6028
    //   [ 3] 0x004e6028  __vstub_4e6028
};
```

### OWL::TSystemMessage

```cpp
// sizeof 20 (0x14)  rtti 0x00498b74  no vptr  destructor 0x00498bcc
class OWL::TSystemMessage {
    /* +0x004 */ std::string m_4;
};
```

### OWL::TTabControl

```cpp
// sizeof 170 (0xaa)  rtti 0x0040735c  vptr at +0xc  destructor 0x0049ea08
class OWL::TTabControl : public OWL::TControl, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TControl
    // vtable at 0x0050956c (11 slots)
    //   [ 0] 0x0049ea08  OWL::TTabControl::~TTabControl
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x0049e888  OWL::TTabControl::Find
    //   [ 9] 0x0049eaf0  OWL::TTabControl::Transfer
    //   [10] 0x0049eadc  OWL::TTabControl::GetClassName
    // response table at 0x005094d0 (2 entries)
    //   WM_HSCROLL                                   -> 0x0049eb08  OWL::TTabControl::EvHScroll
    //   WM_VSCROLL                                   -> 0x0049eaf8  OWL::TTabControl::EvVScroll
};
```

### OWL::TTextGadget

```cpp
// sizeof 96 (0x60)  rtti 0x00427f30  vptr at +0x0  destructor 0x0049ec68
class OWL::TTextGadget : public OWL::TGadget {
    /* +0x000 */ // base subobject OWL::TGadget
    // vtable at 0x005096c8 (22 slots)
    //   [ 0] 0x0049ec68  OWL::TTextGadget::~TTextGadget
    //   [ 1] 0x0048fe80  OWL::TGadget::vf1
    //   [ 2] 0x0049edbc  OWL::TTextGadget::vf2
    //   [ 3] 0x0048febc  OWL::TGadget::vf3
    //   [ 4] 0x0048fe44  OWL::TGadget::vf4
    //   [ 5] 0x0048fe5c  OWL::TGadget::vf5
    //   [ 6] 0x0048fe64  OWL::TGadget::vf6
    //   [ 7] 0x0049001c  OWL::TGadget::vf7
    //   [ 8] 0x004900d8  OWL::TGadget::vf8
    //   [ 9] 0x004901ac  OWL::TGadget::vf9
    //   [10] 0x004900e0  OWL::TGadget::vf10
    //   [11] 0x0048ffcc  OWL::TGadget::vf11
    //   [12] 0x0049ee80  OWL::TTextGadget::vf12
    //   [13] 0x0049042c  OWL::TGadget::vf13
    //   [14] 0x0049070c  OWL::TGadget::vf14
    //   [15] 0x0049072c  OWL::TGadget::vf15
    //   [16] 0x00490734  OWL::TGadget::vf16
    //   [17] 0x00490800  OWL::TGadget::vf17
    //   [18] 0x00490838  OWL::TGadget::vf18
    //   [19] 0x0049081c  OWL::TGadget::vf19
    //   [20] 0x00490840  OWL::TGadget::vf20
    //   [21] 0x00498b64  OWL::TTextGadget::vf21
};
```

### OWL::TTinyCaption

```cpp
// sizeof 198 (0xc6)  rtti 0x004b1b54  vptr at +0xc  destructor 0x004c8028
class OWL::TTinyCaption : public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    // vtable at 0x00511e14 (3 slots)
    //   [ 0] 0x004c8028  OWL::TTinyCaption::~TTinyCaption
    //   [ 1] 0x004c8b78  OWL::TTinyCaption::EvCommand
    //   [ 2] 0x004c7fe4  OWL::TTinyCaption::Find
};
```

### OWL::TTmpBuffer<char>

```cpp
// sizeof 8 (0x8)  rtti 0x0048af84  no vptr  destructor 0x0048b034
class OWL::TTmpBuffer<char> : public OWL::TTmpBufferBase {
    /* +0x000 */ // base subobject OWL::TTmpBufferBase
};
```

### OWL::TTmpBufferBase

```cpp
// sizeof 8 (0x8)  rtti 0x0048afe4  no vptr  destructor 0x00497358
class OWL::TTmpBufferBase {
};
```

### OWL::TToolbarRes

```cpp
// sizeof 13 (0xd)  rtti 0x0049cdb4  no vptr  destructor 0x0049cc20
class OWL::TToolbarRes : public OWL::TResource<OWL::TOOLBARTEMPLATE,241> {
    /* +0x000 */ // base subobject OWL::TResource<OWL::TOOLBARTEMPLATE,241>
};
```

### OWL::TTooltip

```cpp
// sizeof 170 (0xaa)  rtti 0x00421c54  vptr at +0xc  destructor 0x0049f790
class OWL::TTooltip : public OWL::TControl, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TControl
    // vtable at 0x0050980c (10 slots)
    //   [ 0] 0x0049f790  OWL::TTooltip::~TTooltip
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x004ad690  OWL::TControl::Find
    //   [ 9] 0x0049f864  OWL::TTooltip::GetClassName
};
```

### OWL::TTooltipEnabler

```cpp
// sizeof 20 (0x14)  rtti 0x00427b08  vptr at +0x0
class OWL::TTooltipEnabler : public OWL::TCommandEnabler {
    /* +0x000 */ // base subobject OWL::TCommandEnabler
    // vtable at 0x005098e8 (3 slots)
    //   [ 0] 0x004a4da8  OWL::TCommandEnabler::vf0
    //   [ 1] 0x0049f5fc  OWL::TTooltipEnabler::vf1
    //   [ 2] 0x0049f620  OWL::TTooltipEnabler::vf2
};
```

### OWL::TTreeNode

```cpp
// sizeof 48 (0x30)  rtti 0x0046b0a8  no vptr  destructor 0x00473650
class OWL::TTreeNode {
    /* +0x02c */ OWL::TAPointer<char> m_2c;
};
```

### OWL::TTreeWindow

```cpp
// sizeof 174 (0xae)  rtti 0x00473698  vptr at +0xc  destructor 0x004cb934
class OWL::TTreeWindow : public OWL::TListBox, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TListBox
    // vtable at 0x005128f8 (31 slots)
    //   [ 0] 0x004cb934  OWL::TTreeWindow::~TTreeWindow
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x004ad690  OWL::TControl::Find
    //   [ 9] 0x00421cd0  OWL::TListBox::GetCount
    //   [10] 0x00421cec  OWL::TListBox::FindString
    //   [11] 0x00421d0c  OWL::TListBox::FindExactString
    //   [12] 0x00421d3c  OWL::TListBox::GetTopIndex
    //   [13] 0x00421d58  OWL::TListBox::SetTopIndex
    //   [14] 0x00421d78  OWL::TListBox::GetHorizontalExtent
    //   [15] 0x00421d94  OWL::TListBox::SetHorizontalExtent
    //   [16] 0x00421db4  OWL::TListBox::GetStringLen
    //   [17] 0x00421dd4  OWL::TListBox::GetString
    //   [18] 0x00421df4  OWL::TListBox::GetItemData
    //   [19] 0x00421e14  OWL::TListBox::SetItemData
    //   [20] 0x004ca394  OWL::TTreeWindow::GetItemHeight
    //   [21] 0x004ca3b0  OWL::TTreeWindow::SetItemHeight
    //   [22] 0x00421e84  OWL::TListBox::ClearList
    //   [23] 0x00421ea0  OWL::TListBox::DirectoryList
    //   [24] 0x00421ec0  OWL::TListBox::AddString
    //   [25] 0x00421ee0  OWL::TListBox::InsertString
    //   [26] 0x00421f00  OWL::TListBox::DeleteString
    //   [27] 0x004bfda4  OWL::TListBox::GetSelIndex
    //   [28] 0x004bfe0c  OWL::TListBox::SetSelIndex
    //   [29] 0x004cba3c  OWL::TTreeWindow::Transfer
    //   [30] 0x004cba30  OWL::TTreeWindow::GetClassName
};
```

### OWL::TTreeWindow::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x004cbe14  vptr at +0x0
class OWL::TTreeWindow::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x005128dc (4 slots)
    //   [ 0] 0x00486d34  OWL::TNewStreamer::vf0
    //   [ 1] 0x004cbd1c  OWL::TTreeWindow::Streamer::vf1
    //   [ 2] 0x004cbd38  OWL::TTreeWindow::Streamer::vf2
    //   [ 3] 0x004cbe64  OWL::TTreeWindow::Streamer::vf3
};
```

### OWL::TUIFaceData

```cpp
// sizeof 21 (0x15)  rtti 0x004a018c  no vptr  destructor 0x004a1348
class OWL::TUIFaceData {
    /* +0x000 */ OWL::THatch8x8Brush m_0;
    /* +0x011 */ OWL::TPointer<OWL::TBitmap> m_11;
};
```

### OWL::TUpDown

```cpp
// sizeof 190 (0xbe)  rtti 0x00421748  vptr at +0xc  destructor 0x00422cf8
class OWL::TUpDown : public OWL::TControl, public OWL::TBitFlags<unsigned int>, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TControl
    /* +0x014 */ // base subobject OWL::TBitFlags<unsigned int>
    // vtable at 0x0050a0f8 (11 slots)
    //   [ 0] 0x00422cf8  OWL::TUpDown::~TUpDown
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x004a1ed4  OWL::TUpDown::Find
    //   [ 9] 0x004a20b0  PVWUpDown::GetClassName
    //   [10] 0x004a20c4  PVWUpDown::PerformCreate
    // response table at 0x0050a078 (2 entries)
    //   WM_VSCROLL                                   -> 0x004a2138  OWL::TUpDown::EvVScroll
    //   WM_HSCROLL                                   -> 0x004a2148  OWL::TUpDown::EvHScroll
};
```

### OWL::TUrlLink

```cpp
// sizeof 213 (0xd5)  rtti 0x004a40a8  vptr at +0xc  destructor 0x004a22b0
class OWL::TUrlLink : public OWL::TStatic, public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase, public virtual OWL::TWindow {
    /* +0x000 */ // base subobject OWL::TStatic
    /* +0x02c */ std::string m_2c;
    // vtable at 0x0050aa64 (21 slots)
    //   [ 0] 0x004a22b0  OWL::TUrlLink::~TUrlLink
    //   [ 1] 0x004adae0  OWL::TControl::vf1
    //   [ 2] 0x004adb3c  OWL::TControl::vf2
    //   [ 3] 0x004adb5c  OWL::TControl::vf3
    //   [ 4] 0x004adb9c  OWL::TControl::vf4
    //   [ 5] 0x004adbdc  OWL::TControl::vf5
    //   [ 6] 0x004adc0c  OWL::TControl::vf6
    //   [ 7] 0x004adc34  OWL::TControl::vf7
    //   [ 8] 0x004a224c  OWL::TUrlLink::Find
    //   [ 9] 0x004c7bdc  OWL::TStatic::vf9
    //   [10] 0x004c7ba4  PVWStatic::Transfer
    //   [11] 0x004a2490  OWL::TUrlLink::GetClassName
    //   [12] 0x004a4690  OWL::TUrlLink::GetTooltip
    //   [13] 0x004a2784  OWL::TUrlLink::EnableTooltip
    //   [14] 0x004a2974  OWL::TUrlLink::PreProcessMsg
    //   [15] 0x004a249c  OWL::TUrlLink::SetupWindow
    //   [16] 0x004a2a28  OWL::TUrlLink::GetWindowClass
    //   [17] 0x004a2a9c  OWL::TUrlLink::Paint
    //   [18] 0x004a30c4  OWL::TUrlLink::vf18
    //   [19] 0x004a3318  OWL::TUrlLink::vf19
    //   [20] 0x004a3e08  OWL::TUrlLink::vf20
    // response table at 0x0050a264 (7 entries)
    //   WM_PAINT                                     -> 0x004a2d68  OWL::TUrlLink::EvPaint
    //   WM_LBUTTONDOWN                               -> 0x004a2e98  OWL::TUrlLink::EvLButtonDown
    //   WM_MOUSEMOVE                                 -> 0x004a2f00  OWL::TUrlLink::EvMouseMove
    //   message 0x0019                               -> 0x004a2de4  OWL::TUrlLink::EvMsg_19
    //   WM_GETFONT                                   -> 0x004a2fa4  OWL::TUrlLink::EvGetfont
    //   WM_SETFONT                                   -> 0x004a2fc0  OWL::TUrlLink::EvSetfont
    //   WM_GETDLGCODE                                -> 0x004a30b8  OWL::TUrlLink::EvGetDlgCode
};
```

### OWL::TUrlLink::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x004a4638  vptr at +0x0
class OWL::TUrlLink::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x0050aa48 (4 slots)
    //   [ 0] 0x00486d34  OWL::TNewStreamer::vf0
    //   [ 1] 0x004a42fc  OWL::TUrlLink::Streamer::vf1
    //   [ 2] 0x004a4420  OWL::TUrlLink::Streamer::vf2
    //   [ 3] 0x004a4684  OWL::TUrlLink::Streamer::vf3
};
```

### OWL::TValidator

```cpp
// sizeof 6 (0x6)  rtti 0x0049f8d8  vptr at +0x0  destructor 0x004c9dc0
class OWL::TValidator : public OWL::TStreamableBase {
    /* +0x000 */ // base subobject OWL::TStreamableBase
    // vtable at 0x00511ef8 (6 slots)
    //   [ 0] 0x004c9dc0  OWL::TValidator::~TValidator
    //   [ 1] 0x004c9e1c  OWL::TValidator::vf1
    //   [ 2] 0x004c9e24  OWL::TValidator::vf2
    //   [ 3] 0x004c9e2c  OWL::TValidator::vf3
    //   [ 4] 0x004c9e34  OWL::TValidator::vf4
    //   [ 5] 0x004c9e3c  OWL::TValidator::vf5
};
```

### OWL::TValidator::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x004ca0d4  vptr at +0x0
class OWL::TValidator::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x00511fc0 (4 slots)
    //   [ 0] 0x00486d34  OWL::TNewStreamer::vf0
    //   [ 1] 0x004c9fe0  OWL::TValidator::Streamer::vf1
    //   [ 2] 0x004ca004  OWL::TValidator::Streamer::vf2
    //   [ 3] 0x004ca124  OWL::TValidator::Streamer::vf3
};
```

### OWL::TView

```cpp
// sizeof 44 (0x2c)  rtti 0x0049cb54  vptr at +0x8  destructor 0x004ca130
class OWL::TView : public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase {
    // vtable at 0x005120a4 (12 slots)
    //   [ 0] 0x004ca130  OWL::TView::~TView
    //   [ 1] 0x0049cb28  OWL::TView::vf1
    //   [ 2] 0x0049cb34  OWL::TView::vf2
    //   [ 3] 0x004e6028  __vstub_4e6028
    //   [ 4] 0x004ca378  OWL::TView::vf4
    //   [ 5] 0x004ca380  OWL::TView::vf5
    //   [ 6] 0x0049cb40  OWL::TView::vf6
    //   [ 7] 0x004ca29c  OWL::TView::vf7
    //   [ 8] 0x004ca27c  OWL::TView::vf8
    //   [ 9] 0x004ca25c  OWL::TView::vf9
    //   [10] 0x004ca2cc  OWL::TView::vf10
    //   [11] 0x0049cb4c  OWL::TView::vf11
};
```

### OWL::TWindow

```cpp
// sizeof 146 (0x92)  rtti 0x0040299c  vptr at +0x8  destructor 0x004a52c0
class OWL::TWindow : public virtual OWL::TEventHandler, public virtual OWL::TStreamableBase {
    // vtable at 0x005093fc (34 slots)
    //   [ 0] 0x004a52c0  OWL::TWindow::~TWindow
    //   [ 1] 0x00402640  OWL::TWindow::GetTooltip
    //   [ 2] 0x004a8104  OWL::TWindow::EnableTooltip
    //   [ 3] 0x004a7144  OWL::TWindow::Register
    //   [ 4] 0x004a6e1c  OWL::TWindow::Create
    //   [ 5] 0x004a6dcc  OWL::TWindow::PerformCreate
    //   [ 6] 0x004a6be0  OWL::TWindow::Destroy
    //   [ 7] 0x004a6f8c  OWL::TWindow::Execute
    //   [ 8] 0x004a6f9c  OWL::TWindow::DoExecute
    //   [ 9] 0x004a7254  OWL::TWindow::CloseWindow
    //   [10] 0x004a54b4  OWL::TWindow::PreProcessMsg
    //   [11] 0x004a5554  OWL::TWindow::IdleAction
    //   [12] 0x004a61c4  OWL::TWindow::HoldFocusHWnd
    //   [13] 0x004a5644  OWL::TWindow::SetParent
    //   [14] 0x004a56d0  OWL::TWindow::SetDocTitle
    //   [15] 0x004a7230  OWL::TWindow::CanClose
    //   [16] 0x004a5e38  OWL::TWindow::WindowProc
    //   [17] 0x004a5cd0  OWL::TWindow::DefWindowProc
    //   [18] 0x004a5968  OWL::TWindow::EvCommand
    //   [19] 0x004a5a18  OWL::TWindow::EvNotify
    //   [20] 0x004a5b0c  OWL::TWindow::EvCommandEnable
    //   [21] 0x004a6af0  OWL::TWindow::Paint
    //   [22] 0x004a7078  OWL::TWindow::Transfer
    //   [23] 0x004a70c4  OWL::TWindow::TransferData
    //   [24] 0x0040264c  OWL::TWindow::EnableWindow
    //   [25] 0x004a7b24  OWL::TWindow::ShowWindow
    //   [26] 0x00402670  OWL::TWindow::Invalidate
    //   [27] 0x0040268c  OWL::TWindow::InvalidateRect
    //   [28] 0x004a6c60  OWL::TWindow::GetWindowClass
    //   [29] 0x004a6d08  OWL::TWindow::GetClassName
    //   [30] 0x004a6fd8  OWL::TWindow::SetupWindow
    //   [31] 0x004a7070  OWL::TWindow::CleanupWindow
    //   [32] 0x004a55f0  OWL::TWindow::RemoveChild
    //   [33] 0x004a4d44  OWL::TWindow::Find
    // response table at 0x0050ad04 (34 entries)
    //   WM_SETCURSOR                                 -> 0x004a6af8  OWL::TWindow::EvSetCursor
    //   WM_SIZE                                      -> 0x004a6214  OWL::TWindow::EvSize
    //   WM_MOVE                                      -> 0x004a62cc  OWL::TWindow::EvMove
    //   WM_COMPAREITEM                               -> 0x004a635c  OWL::TWindow::EvCompareitem
    //   WM_DELETEITEM                                -> 0x004a6394  OWL::TWindow::EvDeleteitem
    //   WM_DRAWITEM                                  -> 0x004a63d4  OWL::TWindow::EvDrawItem
    //   WM_MEASUREITEM                               -> 0x004a6434  OWL::TWindow::EvMeasureItem
    //   WM_VSCROLL                                   -> 0x004a67c4  OWL::TWindow::EvVScroll
    //   WM_HSCROLL                                   -> 0x004a676c  OWL::TWindow::EvHScroll
    //   WM_CHILDINVALID                              -> 0x004a7424  OWL::TWindow::EvChildinvalid
    //   WM_ERASEBKGND                                -> 0x004a681c  OWL::TWindow::EvEraseBkgnd
    //   message 0x0019                               -> 0x004a697c  OWL::TWindow::EvMsg_19
    //   WM_PAINT                                     -> 0x004a6a30  OWL::TWindow::EvPaint
    //   WM_LBUTTONDOWN                               -> 0x004a6b34  OWL::TWindow::EvLButtonDown
    //   WM_KILLFOCUS                                 -> 0x004a61cc  OWL::TWindow::EvKillFocus
    //   WM_CTLCOLORMSGBOX                            -> 0x004a6518  OWL::TWindow::EvShared_4a6518
    //   WM_CTLCOLOREDIT                              -> 0x004a6518  OWL::TWindow::EvShared_4a6518
    //   WM_CTLCOLORLISTBOX                           -> 0x004a6518  OWL::TWindow::EvShared_4a6518
    //   WM_CTLCOLORBTN                               -> 0x004a6518  OWL::TWindow::EvShared_4a6518
    //   WM_CTLCOLORDLG                               -> 0x004a6518  OWL::TWindow::EvShared_4a6518
    //   WM_CTLCOLORSCROLLBAR                         -> 0x004a6518  OWL::TWindow::EvShared_4a6518
    //   WM_CTLCOLORSTATIC                            -> 0x004a6518  OWL::TWindow::EvShared_4a6518
    //   WM_CREATE                                    -> 0x004a61a4  OWL::TWindow::EvCreate
    //   WM_CLOSE                                     -> 0x004a7294  OWL::TWindow::EvClose
    //   WM_DESTROY                                   -> 0x004a72e8  OWL::TWindow::EvDestroy
    //   WM_NCDESTROY                                 -> 0x004a7338  OWL::TWindow::EvNCDestroy
    //   WM_QUERYENDSESSION                           -> 0x004a7350  OWL::TWindow::EvQueryEndSession
    //   WM_ENDSESSION                                -> 0x004a73a4  OWL::TWindow::EvEndSession
    //   WM_SYSCOLORCHANGE                            -> 0x004a55d0  OWL::TWindow::EvSysColorChange
    //   WM_INITMENUPOPUP                             -> 0x004a7d1c  OWL::TWindow::EvInitMenuPopup
    //   WM_CONTEXTMENU                               -> 0x004a7e60  OWL::TWindow::EvContextMenu
    //   WM_ENTERIDLE                                 -> 0x004a7ee8  OWL::TWindow::EvEnteridle
    //   WM_MOUSEWHEEL                                -> 0x004a66f0  OWL::TWindow::EvMouseWheel
    //   message id 0 in the static table (filled at run time or WM_NULL) -> 0x004a6634  OWL::TWindow::EvRegisteredMsg_4a6634
};
```

### OWL::TWindow::Streamer

```cpp
// sizeof 12 (0xc)  rtti 0x0049e7bc  vptr at +0x0
class OWL::TWindow::Streamer : public OWL::TNewStreamer {
    /* +0x000 */ // base subobject OWL::TNewStreamer
    // vtable at 0x005094a8 (4 slots)
    //   [ 0] 0x00486d34  OWL::TNewStreamer::vf0
    //   [ 1] 0x0049e0e8  OWL::TWindow::Streamer::vf1
    //   [ 2] 0x0049e420  OWL::TWindow::Streamer::vf2
    //   [ 3] 0x0049e808  OWL::TWindow::Streamer::vf3
};
```

### OWL::TWindowDC

```cpp
// sizeof 37 (0x25)  rtti 0x00404380  vptr at +0x5  destructor 0x004a86dc
class OWL::TWindowDC : public OWL::TDC {
    /* +0x000 */ // base subobject OWL::TDC
    // vtable at 0x0050b4e8 (24 slots)
    //   [ 0] 0x004a86dc  OWL::TWindowDC::~TWindowDC
    //   [ 1] 0x0048dcbc  OWL::TDC::vf1
    //   [ 2] 0x0048dccc  OWL::TDC::vf2
    //   [ 3] 0x0048dce8  OWL::TDC::vf3
    //   [ 4] 0x0048dd04  OWL::TDC::vf4
    //   [ 5] 0x0048d97c  OWL::TDC::vf5
    //   [ 6] 0x0048da0c  OWL::TDC::vf6
    //   [ 7] 0x0048da90  OWL::TDC::vf7
    //   [ 8] 0x0048dd20  OWL::TDC::vf8
    //   [ 9] 0x0048dd6c  OWL::TDC::vf9
    //   [10] 0x0048ddb8  OWL::TDC::vf10
    //   [11] 0x0048ddec  OWL::TDC::vf11
    //   [12] 0x0048de38  OWL::TDC::vf12
    //   [13] 0x0048de84  OWL::TDC::vf13
    //   [14] 0x0048ded0  OWL::TDC::vf14
    //   [15] 0x0048df24  OWL::TDC::vf15
    //   [16] 0x0048df70  OWL::TDC::vf16
    //   [17] 0x0048dfc4  OWL::TDC::vf17
    //   [18] 0x0048dffc  OWL::TDC::vf18
    //   [19] 0x0048e040  OWL::TDC::vf19
    //   [20] 0x0048e0a8  OWL::TDC::vf20
    //   [21] 0x0048e0c8  OWL::TDC::vf21
    //   [22] 0x0048e0f4  OWL::TDC::vf22
    //   [23] 0x0048d8e8  OWL::TDC::vf23
};
```

### OWL::TXBadFormat

```cpp
// sizeof 12 (0xc)  rtti 0x004ba73c  vptr at +0x0  destructor 0x004ba798
class OWL::TXBadFormat : public OWL::TXOwl {
    /* +0x000 */ // base subobject OWL::TXOwl
    // vtable at 0x0050edfc (6 slots)
    //   [ 0] 0x004ba798  OWL::TXBadFormat::~TXBadFormat
    //   [ 1] 0x0048ebb8  OWL::TXBase::vf1
    //   [ 2] 0x004ba7dc  OWL::TXBadFormat::vf2
    //   [ 3] 0x004ba85c  OWL::TXBadFormat::vf3
    //   [ 4] 0x0048eedc  OWL::TXOwl::vf4
    //   [ 5] 0x004ba6cc  vshared_4ba6cc
};
```

### OWL::TXBase

```cpp
// sizeof 8 (0x8)  rtti 0x004874c8  vptr at +0x0  destructor 0x0048ea24
class OWL::TXBase : public std::exception {
    /* +0x000 */ // base subobject std::exception
    // vtable at 0x00506248 (4 slots)
    //   [ 0] 0x0048ea24  OWL::TXBase::~TXBase
    //   [ 1] 0x0048ebb8  OWL::TXBase::vf1
    //   [ 2] 0x0048eb10  OWL::TXBase::vf2
    //   [ 3] 0x0048eb64  OWL::TXBase::vf3
};
```

### OWL::TXClipboard

```cpp
// sizeof 12 (0xc)  rtti 0x0048bb10  vptr at +0x0  destructor 0x0048bd98
class OWL::TXClipboard : public OWL::TXOwl {
    /* +0x000 */ // base subobject OWL::TXOwl
    // vtable at 0x005057c0 (5 slots)
    //   [ 0] 0x0048bd98  OWL::TXClipboard::~TXClipboard
    //   [ 1] 0x0048ebb8  OWL::TXBase::vf1
    //   [ 2] 0x0048bca4  OWL::TXClipboard::vf2
    //   [ 3] 0x0048bd24  OWL::TXClipboard::vf3
    //   [ 4] 0x0048eedc  OWL::TXOwl::vf4
};
```

### OWL::TXCommCtrl

```cpp
// sizeof 12 (0xc)  rtti 0x004872f0  vptr at +0x0  destructor 0x004873ec
class OWL::TXCommCtrl : public OWL::TXOwl {
    /* +0x000 */ // base subobject OWL::TXOwl
    // vtable at 0x005044ec (5 slots)
    //   [ 0] 0x004873ec  OWL::TXCommCtrl::~TXCommCtrl
    //   [ 1] 0x0048ebb8  OWL::TXBase::vf1
    //   [ 2] 0x004871fc  OWL::TXCommCtrl::vf2
    //   [ 3] 0x0048727c  OWL::TXCommCtrl::vf3
    //   [ 4] 0x0048eedc  OWL::TXOwl::vf4
};
```

### OWL::TXEndSession

```cpp
// sizeof 1 (0x1)  rtti 0x004a73e0  no vptr
class OWL::TXEndSession {
};
```

### OWL::TXGdi

```cpp
// sizeof 12 (0xc)  rtti 0x00493758  vptr at +0x0  destructor 0x00493858
class OWL::TXGdi : public OWL::TXOwl {
    /* +0x000 */ // base subobject OWL::TXOwl
    // vtable at 0x005071bc (5 slots)
    //   [ 0] 0x00493858  OWL::TXGdi::~TXGdi
    //   [ 1] 0x0048ebb8  OWL::TXBase::vf1
    //   [ 2] 0x00493664  OWL::TXGdi::vf2
    //   [ 3] 0x004936e4  OWL::TXGdi::vf3
    //   [ 4] 0x0048eedc  OWL::TXOwl::vf4
};
```

### OWL::TXInvalidMainWindow

```cpp
// sizeof 12 (0xc)  rtti 0x004ab0c4  vptr at +0x0  destructor 0x004ab1cc
class OWL::TXInvalidMainWindow : public OWL::TXOwl {
    /* +0x000 */ // base subobject OWL::TXOwl
    // vtable at 0x0050be1c (5 slots)
    //   [ 0] 0x004ab1cc  OWL::TXInvalidMainWindow::~TXInvalidMainWindow
    //   [ 1] 0x0048ebb8  OWL::TXBase::vf1
    //   [ 2] 0x004aafd0  OWL::TXInvalidMainWindow::vf2
    //   [ 3] 0x004ab050  OWL::TXInvalidMainWindow::vf3
    //   [ 4] 0x0048eedc  OWL::TXOwl::vf4
};
```

### OWL::TXInvalidModule

```cpp
// sizeof 12 (0xc)  rtti 0x004c21a8  vptr at +0x0  destructor 0x004c22b0
class OWL::TXInvalidModule : public OWL::TXOwl {
    /* +0x000 */ // base subobject OWL::TXOwl
    // vtable at 0x00510750 (5 slots)
    //   [ 0] 0x004c22b0  OWL::TXInvalidModule::~TXInvalidModule
    //   [ 1] 0x0048ebb8  OWL::TXBase::vf1
    //   [ 2] 0x004c20b4  OWL::TXInvalidModule::vf2
    //   [ 3] 0x004c2134  OWL::TXInvalidModule::vf3
    //   [ 4] 0x0048eedc  OWL::TXOwl::vf4
};
```

### OWL::TXMenu

```cpp
// sizeof 12 (0xc)  rtti 0x00498160  vptr at +0x0  destructor 0x0049825c
class OWL::TXMenu : public OWL::TXOwl {
    /* +0x000 */ // base subobject OWL::TXOwl
    // vtable at 0x0050803c (5 slots)
    //   [ 0] 0x0049825c  OWL::TXMenu::~TXMenu
    //   [ 1] 0x0048ebb8  OWL::TXBase::vf1
    //   [ 2] 0x0049806c  OWL::TXMenu::vf2
    //   [ 3] 0x004980ec  OWL::TXMenu::vf3
    //   [ 4] 0x0048eedc  OWL::TXOwl::vf4
};
```

### OWL::TXOutOfMemory

```cpp
// sizeof 12 (0xc)  rtti 0x0048f5c4  vptr at +0x0  destructor 0x0048f6c4
class OWL::TXOutOfMemory : public OWL::TXOwl {
    /* +0x000 */ // base subobject OWL::TXOwl
    // vtable at 0x0050664c (6 slots)
    //   [ 0] 0x0048f6c4  OWL::TXOutOfMemory::~TXOutOfMemory
    //   [ 1] 0x0048ebb8  OWL::TXBase::vf1
    //   [ 2] 0x0048f4d0  OWL::TXOutOfMemory::vf2
    //   [ 3] 0x0048f550  OWL::TXOutOfMemory::vf3
    //   [ 4] 0x0048eedc  OWL::TXOwl::vf4
    //   [ 5] 0x00414108  vshared_414108
};
```

### OWL::TXOwl

```cpp
// sizeof 12 (0xc)  rtti 0x00487430  vptr at +0x0  destructor 0x0048ee7c
class OWL::TXOwl : public OWL::TXBase {
    /* +0x000 */ // base subobject OWL::TXBase
    // vtable at 0x005044cc (5 slots)
    //   [ 0] 0x0048ee7c  OWL::TXOwl::~TXOwl
    //   [ 1] 0x0048ebb8  OWL::TXBase::vf1
    //   [ 2] 0x0048eefc  OWL::TXOwl::vf2
    //   [ 3] 0x0048ef70  OWL::TXOwl::vf3
    //   [ 4] 0x0048eedc  OWL::TXOwl::vf4
};
```

### OWL::TXPrinter

```cpp
// sizeof 12 (0xc)  rtti 0x004c5e54  vptr at +0x0  destructor 0x004c5f54
class OWL::TXPrinter : public OWL::TXOwl {
    /* +0x000 */ // base subobject OWL::TXOwl
    // vtable at 0x005112f0 (5 slots)
    //   [ 0] 0x004c5f54  OWL::TXPrinter::~TXPrinter
    //   [ 1] 0x0048ebb8  OWL::TXBase::vf1
    //   [ 2] 0x004c5d60  OWL::TXPrinter::vf2
    //   [ 3] 0x004c5de0  OWL::TXPrinter::vf3
    //   [ 4] 0x0048eedc  OWL::TXOwl::vf4
};
```

### OWL::TXWindow

```cpp
// sizeof 16 (0x10)  rtti 0x004a8524  vptr at +0x0  destructor 0x004a85d4
class OWL::TXWindow : public OWL::TXOwl {
    /* +0x000 */ // base subobject OWL::TXOwl
    // vtable at 0x0050b3c0 (5 slots)
    //   [ 0] 0x004a85d4  OWL::TXWindow::~TXWindow
    //   [ 1] 0x0048ebb8  OWL::TXBase::vf1
    //   [ 2] 0x004a847c  OWL::TXWindow::vf2
    //   [ 3] 0x004a84d0  OWL::TXWindow::vf3
    //   [ 4] 0x004a8460  OWL::TXWindow::vf4
};
```

### std::bad_alloc

```cpp
// sizeof 4 (0x4)  rtti 0x004040dc  vptr at +0x0  destructor 0x004dc41c
class std::bad_alloc : public std::exception {
    /* +0x000 */ // base subobject std::exception
    // vtable at 0x004eac74 (2 slots)
    //   [ 0] 0x004dc41c  std::bad_alloc::~bad_alloc
    //   [ 1] 0x004044dc  std::bad_alloc::vf1
};
```

### std::basic_filebuf<char>

```cpp
// sizeof 68 (0x44)  rtti 0x00437d20  vptr at +0x0  destructor 0x004d0840
class std::basic_filebuf<char> : public std::basic_streambuf<char> {
    /* +0x000 */ // base subobject std::basic_streambuf<char>
    // vtable at 0x005159d4 (14 slots)
    //   [ 0] 0x004d0840  std::basic_filebuf<char>::~basic_filebuf
    //   [ 1] 0x004d7ea4  std::basic_streambuf<char>::vf1
    //   [ 2] 0x004d5640  std::basic_filebuf<char>::vf2
    //   [ 3] 0x004d641c  std::basic_filebuf<char>::vf3
    //   [ 4] 0x004d6aa4  std::basic_filebuf<char>::vf4
    //   [ 5] 0x004d4324  std::basic_filebuf<char>::vf5
    //   [ 6] 0x004d47dc  std::basic_streambuf<char>::vf6
    //   [ 7] 0x004d3b18  std::basic_filebuf<char>::vf7
    //   [ 8] 0x004d4080  std::basic_streambuf<char>::vf8
    //   [ 9] 0x004d2f90  std::basic_filebuf<char>::vf9
    //   [10] 0x004d3610  std::basic_filebuf<char>::vf10
    //   [11] 0x004d4378  std::basic_filebuf<char>::vf11
    //   [12] 0x004d3770  std::basic_filebuf<char>::vf12
    //   [13] 0x004d8768  std::basic_filebuf<char>::vf13
};
```

### std::basic_ifstream<char>

```cpp
// sizeof 136 (0x88)  rtti 0x00437b14  vptr at +0x4  destructor 0x004d1300
class std::basic_ifstream<char> : public std::basic_istream<char>, public virtual std::basic_ios<char> {
    /* +0x000 */ // base subobject std::basic_istream<char>
    /* +0x00c */ std::basic_filebuf<char> m_c;
    // vtable at 0x00515930 (1 slots)
    //   [ 0] 0x004d1300  std::basic_ifstream<char>::~basic_ifstream
};
```

### std::basic_ios<char>

```cpp
// sizeof 56 (0x38)  rtti 0x00437ca8  vptr at +0x0  destructor 0x004d118c
class std::basic_ios<char> : public std::ios_base {
    /* +0x000 */ // base subobject std::ios_base
    // vtable at 0x0051594c (1 slots)
    //   [ 0] 0x004d118c  std::basic_ios<char>::~basic_ios
};
```

### std::basic_istream<char>

```cpp
// sizeof 68 (0x44)  rtti 0x00437c2c  vptr at +0x4  destructor 0x004d1114
class std::basic_istream<char> : public virtual std::basic_ios<char> {
    // vtable at 0x00515978 (1 slots)
    //   [ 0] 0x004d1114  std::basic_istream<char>::~basic_istream
};
```

### std::basic_istream<char>::sentry

```cpp
// sizeof 8 (0x8)  rtti 0x004d46c8  no vptr  destructor 0x004d1860
class std::basic_istream<char>::sentry {
};
```

### std::basic_ofstream<char>

```cpp
// sizeof 132 (0x84)  rtti 0x0045419c  vptr at +0x4  destructor 0x004d19d4
class std::basic_ofstream<char> : public std::basic_ostream<char>, public virtual std::basic_ios<char> {
    /* +0x000 */ // base subobject std::basic_ostream<char>
    /* +0x008 */ std::basic_filebuf<char> m_8;
    // vtable at 0x00515914 (1 slots)
    //   [ 0] 0x004d19d4  std::basic_ofstream<char>::~basic_ofstream
};
```

### std::basic_ostream<char>

```cpp
// sizeof 64 (0x40)  rtti 0x0045e848  vptr at +0x4  destructor 0x004d109c
class std::basic_ostream<char> : public virtual std::basic_ios<char> {
    // vtable at 0x0051595c (1 slots)
    //   [ 0] 0x004d109c  std::basic_ostream<char>::~basic_ostream
};
```

### std::basic_ostream<char>::sentry

```cpp
// sizeof 8 (0x8)  rtti 0x0047ed6c  no vptr  destructor 0x00484c30
class std::basic_ostream<char>::sentry {
};
```

### std::basic_streambuf<char>

```cpp
// sizeof 36 (0x24)  rtti 0x00437d9c  vptr at +0x0  destructor 0x004d0a50
class std::basic_streambuf<char> {
    /* +0x020 */ std::locale m_20;
    // vtable at 0x00515994 (13 slots)
    //   [ 0] 0x004d0a50  std::basic_streambuf<char>::~basic_streambuf
    //   [ 1] 0x004d7ea4  std::basic_streambuf<char>::vf1
    //   [ 2] 0x004d5734  std::basic_streambuf<char>::vf2
    //   [ 3] 0x004d6d28  std::basic_streambuf<char>::vf3
    //   [ 4] 0x004d6d40  std::basic_streambuf<char>::vf4
    //   [ 5] 0x004d474c  std::basic_streambuf<char>::vf5
    //   [ 6] 0x004d47dc  std::basic_streambuf<char>::vf6
    //   [ 7] 0x004d40c4  std::basic_streambuf<char>::vf7
    //   [ 8] 0x004d4080  std::basic_streambuf<char>::vf8
    //   [ 9] 0x004d4060  std::basic_streambuf<char>::vf9
    //   [10] 0x004d406c  std::basic_streambuf<char>::vf10
    //   [11] 0x004d487c  std::basic_streambuf<char>::vf11
    //   [12] 0x004d4078  std::basic_streambuf<char>::vf12
};
```

### std::domain_error

```cpp
// sizeof 24 (0x18)  rtti 0x004d94a4  vptr at +0x0  destructor 0x004dc554
class std::domain_error : public std::logic_error {
    /* +0x000 */ // base subobject std::logic_error
    // vtable at 0x00515de8 (2 slots)
    //   [ 0] 0x004dc554  std::domain_error::~domain_error
    //   [ 1] 0x00411498  std::logic_error::vf1
};
```

### std::exception

```cpp
// sizeof 4 (0x4)  rtti 0x004042b0  vptr at +0x0  destructor 0x004dc3fc
class std::exception {
    // vtable at 0x004eac60 (2 slots)
    //   [ 0] 0x004dc3fc  std::exception::~exception
    //   [ 1] 0x004044d0  std::exception::vf1
};
```

### std::ios_base

```cpp
// sizeof 36 (0x24)  rtti 0x00437e14  vptr at +0x0  destructor 0x004d8efc
class std::ios_base {
    /* +0x010 */ std::locale m_10;
    // vtable at 0x00515c80 (1 slots)
    //   [ 0] 0x004d8efc  std::ios_base::~ios_base
};
```

### std::ios_base::failure

```cpp
// sizeof 24 (0x18)  rtti 0x0047ec18  vptr at +0x0  destructor 0x004d8c90
class std::ios_base::failure : public std::exception {
    /* +0x000 */ // base subobject std::exception
    /* +0x008 */ std::string m_8;
    // vtable at 0x005036dc (2 slots)
    //   [ 0] 0x004d8c90  std::ios_base::failure::~failure
    //   [ 1] 0x004d8d6c  std::ios_base::failure::vf1
};
```

### std::ios_base::Init

```cpp
// sizeof 8 (0x8)  rtti 0x004d8fe0  no vptr  destructor 0x004d8e28
class std::ios_base::Init {
};
```

### std::length_error

```cpp
// sizeof 24 (0x18)  rtti 0x00408314  vptr at +0x0  destructor 0x004dc5d4
class std::length_error : public std::logic_error {
    /* +0x000 */ // base subobject std::logic_error
    // vtable at 0x004ecac0 (2 slots)
    //   [ 0] 0x004dc5d4  std::length_error::~length_error
    //   [ 1] 0x00411498  std::logic_error::vf1
};
```

### std::locale

```cpp
// sizeof 4 (0x4)  rtti 0x00437e68  no vptr  destructor 0x00437eb0
class std::locale {
};
```

### std::locale::facet

```cpp
// sizeof 16 (0x10)  rtti 0x0047bc38  vptr at +0x0  destructor 0x0047bce0
class std::locale::facet : public __rwstd::facet_imp {
    /* +0x000 */ // base subobject __rwstd::facet_imp
    // vtable at 0x00501320 (2 slots)
    //   [ 0] 0x0047bce0  std::locale::facet::~facet
    //   [ 1] 0x0047bdb8  __rwstd::facet_imp::vf1
};
```

### std::logic_error

```cpp
// sizeof 24 (0x18)  rtti 0x004113dc  vptr at +0x0  destructor 0x004dc478
class std::logic_error : public std::exception {
    /* +0x000 */ // base subobject std::exception
    /* +0x008 */ std::string m_8;
    // vtable at 0x004ecaac (2 slots)
    //   [ 0] 0x004dc478  std::logic_error::~logic_error
    //   [ 1] 0x00411498  std::logic_error::vf1
};
```

### std::map<int,std::string,std::less<int>>

```cpp
// sizeof 56 (0x38)  rtti 0x004da6f0  no vptr  destructor 0x004da9a4
class std::map<int,std::string,std::less<int>> {
    /* +0x000 */ __rwstd::__rb_tree<int,std::pair<const int,std::string>,__rwstd::__select1st<std::pair<const int,std::string>,int>,std::less<int>> m_0;
};
```

### std::map<std::string,long,std::less<std::string>>

```cpp
// sizeof 56 (0x38)  rtti 0x0044802c  no vptr  destructor 0x0044e124
class std::map<std::string,long,std::less<std::string>> {
    /* +0x000 */ __rwstd::__rb_tree<std::string,std::pair<const std::string,long>,__rwstd::__select1st< m_0;
};
```

### std::map<std::string,std::vector<long> *,std::less<std::string>,std::allocator<std::pair<const std::string,std::vector<long> *>>>

```cpp
// sizeof 56 (0x38)  rtti 0x00447c8c  no vptr  destructor 0x0044e39c
class std::map<std::string,std::vector<long> *,std::less<std::string>,std::allocator<std::pair<const std::string,std::vector<long> *>>> {
    /* +0x000 */ __rwstd::__rb_tree<std::string,std::pair<const std::string,std::vector<long,std::alloc m_0;
};
```

### std::mbstate_t

```cpp
// sizeof 4 (0x4)  rtti 0x004d8520  no vptr
class std::mbstate_t {
};
```

### std::multimap<std::string,long,WordListMapComparator>

```cpp
// sizeof 56 (0x38)  rtti 0x00447b6c  no vptr  destructor 0x0044e41c
class std::multimap<std::string,long,WordListMapComparator> {
    /* +0x000 */ __rwstd::__rb_tree<std::string,std::pair<const std::string,long>,__rwstd::__select1st< m_0;
};
```

### std::num_put<char,std::ostreambuf_iterator<char>>

```cpp
// sizeof 16 (0x10)  rtti 0x004d848c  vptr at +0x0  destructor 0x004d20e4
class std::num_put<char,std::ostreambuf_iterator<char>> : public std::locale::facet {
    /* +0x000 */ // base subobject std::locale::facet
    // vtable at 0x005158d0 (14 slots)
    //   [ 0] 0x004d20e4  std::num_put<char,std::ostreambuf_iterator<char>>::~num_put
    //   [ 1] 0x0047bdb8  __rwstd::facet_imp::vf1
    //   [ 2] 0x004d7274  std::num_put<char,std::ostreambuf_iterator<char>>::vf2
    //   [ 3] 0x004d75d8  std::num_put<char,std::ostreambuf_iterator<char>>::vf3
    //   [ 4] 0x004d7780  std::num_put<char,std::ostreambuf_iterator<char>>::vf4
    //   [ 5] 0x004d7494  std::num_put<char,std::ostreambuf_iterator<char>>::vf5
    //   [ 6] 0x004d7568  std::num_put<char,std::ostreambuf_iterator<char>>::vf6
    //   [ 7] 0x004d742c  std::num_put<char,std::ostreambuf_iterator<char>>::vf7
    //   [ 8] 0x004d7640  std::num_put<char,std::ostreambuf_iterator<char>>::vf8
    //   [ 9] 0x004d77e8  std::num_put<char,std::ostreambuf_iterator<char>>::vf9
    //   [10] 0x004d7500  std::num_put<char,std::ostreambuf_iterator<char>>::vf10
    //   [11] 0x004d7718  std::num_put<char,std::ostreambuf_iterator<char>>::vf11
    //   [12] 0x004d6de8  std::num_put<char,std::ostreambuf_iterator<char>>::vf12
    //   [13] 0x004d76ac  std::num_put<char,std::ostreambuf_iterator<char>>::vf13
};
```

### std::out_of_range

```cpp
// sizeof 24 (0x18)  rtti 0x0040846c  vptr at +0x0  destructor 0x004dc634
class std::out_of_range : public std::logic_error {
    /* +0x000 */ // base subobject std::logic_error
    // vtable at 0x004eca98 (2 slots)
    //   [ 0] 0x004dc634  std::out_of_range::~out_of_range
    //   [ 1] 0x00411498  std::logic_error::vf1
};
```

### std::pair<const int,std::string>

```cpp
// sizeof 24 (0x18)  rtti 0x004d8834  no vptr  destructor 0x004d8a80
class std::pair<const int,std::string> {
    /* +0x008 */ std::string m_8;
};
```

### std::pair<const std::string,long>

```cpp
// sizeof 24 (0x18)  rtti 0x00447ec8  no vptr  destructor 0x0044e24c
class std::pair<const std::string,long> {
    /* +0x000 */ std::string m_0;
};
```

### std::pair<const std::string,std::vector<long> *>

```cpp
// sizeof 24 (0x18)  rtti 0x00447f68  no vptr  destructor 0x0044e1a4
class std::pair<const std::string,std::vector<long> *> {
    /* +0x000 */ std::string m_0;
};
```

### std::pair<std::string,long>

```cpp
// sizeof 24 (0x18)  rtti 0x00447e2c  no vptr  destructor 0x0044e2f4
class std::pair<std::string,long> {
    /* +0x000 */ std::string m_0;
};
```

### std::runtime_error

```cpp
// sizeof 24 (0x18)  rtti 0x004db2c4  vptr at +0x0  destructor 0x004dc694
class std::runtime_error : public std::exception {
    /* +0x000 */ // base subobject std::exception
    /* +0x008 */ std::string m_8;
    // vtable at 0x00516b14 (2 slots)
    //   [ 0] 0x004dc694  std::runtime_error::~runtime_error
    //   [ 1] 0x004dbc54  std::runtime_error::vf1
};
```

### std::set<const MatchListWindows::Entry *,MatchListWindows::EntryIndexComparator>

```cpp
// sizeof 56 (0x38)  rtti 0x00430f98  no vptr  destructor 0x00431308
class std::set<const MatchListWindows::Entry *,MatchListWindows::EntryIndexComparator> {
    /* +0x000 */ __rwstd::__rb_tree<const MatchListWindows::Entry *,const MatchListWindows::Entry *,__rwstd::__ident<const MatchListWindows::Entry *,const MatchListWindows::Entry *>,MatchListWindows::EntryIndexComparator> m_0;
};
```

### std::set<MatchListWindows::Selection,std::less<MatchListWindows::Selection>>

```cpp
// sizeof 56 (0x38)  rtti 0x0042f9dc  no vptr  destructor 0x00430e60
class std::set<MatchListWindows::Selection,std::less<MatchListWindows::Selection>> {
    /* +0x000 */ __rwstd::__rb_tree<MatchListWindows::Selection,MatchListWindows::Selection,__rwstd::__ident<MatchListWindows::Selection,MatchListWindows::Selection>,std::less<MatchListWindows::Selection>> m_0;
};
```

### std::string

```cpp
// sizeof 16 (0x10)  rtti 0x00401c8c  no vptr  destructor 0x00402880
class std::string {
};
```

### std::type_info

```cpp
// sizeof 8 (0x8)  rtti 0x004dd8a8  vptr at +0x0  destructor 0x004dd5ac
class std::type_info {
    // vtable at 0x005171fc (1 slots)
    //   [ 0] 0x004dd5ac  std::type_info::~type_info
};
```

### std::vector<const MatchEngine *>

```cpp
// sizeof 32 (0x20)  rtti 0x00410d04  no vptr  destructor 0x004114dc
class std::vector<const MatchEngine *> {
};
```

### std::vector<Definition>

```cpp
// sizeof 32 (0x20)  rtti 0x00458020  no vptr  destructor 0x0045ef10
class std::vector<Definition> {
};
```

### std::vector<FormattedTextSegment *>

```cpp
// sizeof 32 (0x20)  rtti 0x00485554  no vptr  destructor 0x004855dc
class std::vector<FormattedTextSegment *> {
};
```

### std::vector<int>

```cpp
// sizeof 32 (0x20)  rtti 0x004310f4  no vptr  destructor 0x00431388
class std::vector<int> {
};
```

### std::vector<long>

```cpp
// sizeof 32 (0x20)  rtti 0x00409ce0  no vptr  destructor 0x00411514
class std::vector<long> {
};
```

### std::vector<MatchEngine *>

```cpp
// sizeof 32 (0x20)  rtti 0x0045f014  no vptr  destructor 0x0045f08c
class std::vector<MatchEngine *> {
};
```

### std::vector<MatchListWindows::EntryHead>

```cpp
// sizeof 32 (0x20)  rtti 0x00431060  no vptr  destructor 0x004313c0
class std::vector<MatchListWindows::EntryHead> {
};
```

### std::vector<OWL::TWindow *>

```cpp
// sizeof 32 (0x20)  rtti 0x0045ebb0  no vptr  destructor 0x0045efa4
class std::vector<OWL::TWindow *> {
};
```

### std::vector<PropertiesViewWindows::MoveableControl *>

```cpp
// sizeof 32 (0x20)  rtti 0x00402e84  no vptr  destructor 0x00402f30
class std::vector<PropertiesViewWindows::MoveableControl *> {
};
```

### std::vector<std::string>

```cpp
// sizeof 32 (0x20)  rtti 0x0041117c  no vptr  destructor 0x00411568
class std::vector<std::string> {
};
```

### std::vector<TEAPrintout::PageInfo>

```cpp
// sizeof 32 (0x20)  rtti 0x0040464c  no vptr  destructor 0x00404784
class std::vector<TEAPrintout::PageInfo> {
};
```

### std::vector<TEAViewWindows::OutputGroup *>

```cpp
// sizeof 32 (0x20)  rtti 0x0045ea74  no vptr  destructor 0x0045efdc
class std::vector<TEAViewWindows::OutputGroup *> {
};
```

### std::vector<TSDictionaryList::Dictionary *>

```cpp
// sizeof 32 (0x20)  rtti 0x00410ddc  no vptr  destructor 0x004114a4
class std::vector<TSDictionaryList::Dictionary *> {
};
```

### std::wstring

```cpp
// sizeof 16 (0x10)  rtti 0x004d0010  no vptr  destructor 0x004d009c
class std::wstring {
};
```

### TInstanceThunk

```cpp
// sizeof 10 (0xa)  rtti 0x0049af30  no vptr
class TInstanceThunk {
};
```

### TThunkAllocator

```cpp
// sizeof 4 (0x4)  rtti 0x0049aec0  no vptr  destructor 0x0049af0c
class TThunkAllocator {
};
```

### type_info_hash

```cpp
// sizeof 20 (0x14)  rtti 0x004dd8f4  vptr at +0x0  destructor 0x004dd94c
class type_info_hash : public std::type_info {
    /* +0x000 */ // base subobject std::type_info
    // vtable at 0x005171ec (1 slots)
    //   [ 0] 0x004dd94c  type_info_hash::~type_info_hash
};
```

## Response tables whose owning class was not resolved (5)

```
table at 0x0050c1ec
  message id 0 in the static table (filled at run time or WM_NULL) -> 0x004ac190  EvRegisteredMsg_4ac190_4ac190
  WM_GETDLGCODE                                -> 0x004ac408  EvGetDlgCode_4ac408
  EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)      -> 0x004ac788  BNClicked_4ac788
table at 0x0050c788
  message id 0 in the static table (filled at run time or WM_NULL) -> 0x004ad468  EvRegisteredMsg_4ad468_4ad468
  WM_PAINT                                     -> 0x004ada9c  EvPaint_4ada9c
  WM_COMPAREITEM                               -> 0x004adac8  EvCompareitem_4adac8
  WM_DELETEITEM                                -> 0x004adb24  EvDeleteitem_4adb24
  WM_DRAWITEM                                  -> 0x004adb84  EvDrawItem_4adb84
  WM_MEASUREITEM                               -> 0x004adb44  EvMeasureItem_4adb44
table at 0x0050cd38
  EV_CHILD_NOTIFY(id 4977508, code 4972756)    -> 0x004afddc  Child4977508_Notify4972756_4afddc
  EV_CHILD_NOTIFY(id 4972344, code 4914610)    -> 0x004bdebc  Child4972344_Notify4914610_4bdebc
  EV_CHILD_NOTIFY(id 4914547, code 4914568)    -> 0x004afd49  Child4914547_Notify4914568_4afd49
  WM_CLOSE                                     -> 0x004b0cd0  EvClose_4b0cd0
  WM_PAINT                                     -> 0x004b0574  EvPaint_4b0574
  message 0x0019                               -> 0x004b0584  EvMsg_19_4b0584
  WM_SETFONT                                   -> 0x004b0550  EvSetfont_4b0550
  message 0x0400                               -> 0x004b05e4  EvMsg_400_4b05e4
  message 0x0401                               -> 0x004b05f8  EvMsg_401_4b05f8
  message 0x0402                               -> 0x004b0614  EvMsg_402_4b0614
  EV_COMMAND(1)                                -> 0x004b0c6c  Cmd1_4b0c6c
  EV_COMMAND(2)                                -> 0x004b0cc0  Cmd2_4b0cc0
table at 0x0050e4ec
  message id 0 in the static table (filled at run time or WM_NULL) -> 0x004b74dc  EvRegisteredMsg_4b74dc_4b74dc
  EV_COMMAND(24333)                            -> 0x004b7698  Cmd24333_4b7698
  EV_COMMAND(24334)                            -> 0x004b76a8  Cmd24334_4b76a8
  EV_COMMAND_ENABLE(24333)                     -> 0x004b8a40  CeCmd24333_4b8a40
table at 0x00511b64
  message id 0 in the static table (filled at run time or WM_NULL) -> 0x004c7e6c  EvRegisteredMsg_4c7e6c_4c7e6c
  WM_NCHITTEST                                 -> 0x004c8120  EvNCHitTest_4c8120
  WM_NCPAINT                                   -> 0x004c8344  EvNCPaint_4c8344
  WM_NCCALCSIZE                                -> 0x004c83d8  EvNccalcsize_4c83d8
  WM_NCLBUTTONDOWN                             -> 0x004c8458  EvNclbuttondown_4c8458
  WM_MOUSEMOVE                                 -> 0x004c87a4  EvMouseMove_4c87a4
  WM_LBUTTONUP                                 -> 0x004c89c4  EvLButtonUp_4c89c4
  WM_NCACTIVATE                                -> 0x004c8afc  EvNcactivate_4c8afc
  WM_SYSCOMMAND                                -> 0x004c8c04  EvSysCommand_4c8c04
```

