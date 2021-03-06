﻿// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ovcprcbx.pas' rev: 28.00 (Windows)

#ifndef OvcprcbxHPP
#define OvcprcbxHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Printers.hpp>	// Pascal unit
#include <Vcl.ExtCtrls.hpp>	// Pascal unit
#include <ovccmbx.hpp>	// Pascal unit
#include <ovcmisc.hpp>	// Pascal unit
#include <Vcl.StdCtrls.hpp>	// Pascal unit
#include <ovcbase.hpp>	// Pascal unit
#include <Vcl.Menus.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Ovcprcbx
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TOvcPrinterComboBox;
class PASCALIMPLEMENTATION TOvcPrinterComboBox : public Ovccmbx::TOvcBaseComboBox
{
	typedef Ovccmbx::TOvcBaseComboBox inherited;
	
protected:
	bool FShowIcons;
	bool FSelectPrinter;
	Vcl::Controls::TImageList* cbPrnImages;
	virtual void __fastcall Loaded(void);
	virtual void __fastcall DrawItem(int Index, const System::Types::TRect &ItemRect, Winapi::Windows::TOwnerDrawState State);
	virtual void __fastcall SelectionChanged(void);
	
public:
	__fastcall virtual TOvcPrinterComboBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TOvcPrinterComboBox(void);
	void __fastcall Populate(void);
	
__published:
	__property bool ShowIcons = {read=FShowIcons, write=FShowIcons, default=1};
	__property bool SelectPrinter = {read=FSelectPrinter, write=FSelectPrinter, default=1};
	__property Anchors = {default=3};
	__property Constraints;
	__property DragKind = {default=0};
	__property About = {default=0};
	__property AutoSearch = {default=1};
	__property Color = {default=-16777211};
	__property Ctl3D;
	__property Cursor = {default=0};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property DropDownCount = {default=8};
	__property Enabled = {default=1};
	__property Font;
	__property HotTrack = {default=0};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property ItemHeight;
	__property KeyDelay = {default=500};
	__property LabelInfo;
	__property MRUListColor = {default=-16777211};
	__property MRUListCount = {default=3};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property Style = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text = {default=0};
	__property Visible = {default=1};
	__property AfterEnter;
	__property AfterExit;
	__property OnChange;
	__property OnClick;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDropDown;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnSelectionChange;
	__property OnStartDrag;
	__property OnMouseWheel;
public:
	/* TWinControl.CreateParented */ inline __fastcall TOvcPrinterComboBox(HWND ParentWindow) : Ovccmbx::TOvcBaseComboBox(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Ovcprcbx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_OVCPRCBX)
using namespace Ovcprcbx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// OvcprcbxHPP
