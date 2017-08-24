///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __RECONUI_H__
#define __RECONUI_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/choice.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/slider.h>
#include <wx/checkbox.h>
#include <wx/toolbar.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/aui/auibook.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include <wx/aui/aui.h>
#include <wx/gauge.h>
#include <wx/dialog.h>
#include <wx/listctrl.h>
#include <wx/statline.h>
#include <wx/gbsizer.h>
#include <wx/radiobox.h>
#include <wx/grid.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class mainWindow
///////////////////////////////////////////////////////////////////////////////
class mainWindow : public wxFrame 
{
	private:
	
	protected:
		wxMenuBar* m_menubar1;
		wxMenu* file;
		wxMenu* config;
		wxMenu* calibration;
		wxMenu* help;
		wxChoice* optionBox;
		wxToolBar* navToolbar;
		wxStaticText* distanceLabel;
		wxTextCtrl* distanceValue;
		wxButton* autoFocus;
		wxStaticText* stepLabel;
		wxStaticText* stepVal;
		wxStaticText* stepUnits;
		wxSlider* stepSlider;
		wxButton* autoLight;
		wxStaticText* windowLabel;
		wxStaticText* windowVal;
		wxSlider* windowSlider;
		wxStaticText* levelLabel;
		wxStaticText* levelVal;
		wxSlider* levelSlider;
		wxStaticText* zoomLabel;
		wxStaticText* zoomVal;
		wxStaticText* zoomUnits;
		wxSlider* zoomSlider;
		wxButton* autoAll;
		wxCheckBox* vertFlip;
		wxCheckBox* horFlip;
		wxCheckBox* logView;
		wxCheckBox* projectionView;
		wxToolBar* edgeToolbar;
		wxCheckBox* xEnhance;
		wxCheckBox* yEnhance;
		wxCheckBox* absEnhance;
		wxStaticText* ratioLabel;
		wxStaticText* ratioValue;
		wxButton* resetEnhance;
		wxSlider* enhanceSlider;
		wxToolBar* scanToolbar;
		wxCheckBox* scanVertEnable;
		wxStaticText* scanVertValue;
		wxButton* resetScanVert;
		wxSlider* scanVertSlider;
		wxCheckBox* scanHorEnable;
		wxStaticText* scanHorValue;
		wxButton* resetScanHor;
		wxSlider* scanHorSlider;
		wxToolBar* noiseToolbar;
		wxCheckBox* outlierEnable;
		wxStaticText* noiseMaxVal;
		wxButton* resetNoiseMax;
		wxSlider* noiseMaxSlider;
		wxPanel* m_panel10;
		wxStatusBar* m_statusBar1;
		
		// Virtual event handlers, overide them in your derived class
		virtual void onKeyDown( wxKeyEvent& event ) { event.Skip(); }
		virtual void onKeyUp( wxKeyEvent& event ) { event.Skip(); }
		virtual void onNew( wxCommandEvent& event ) { event.Skip(); }
		virtual void onOpen( wxCommandEvent& event ) { event.Skip(); }
		virtual void onQuit( wxCommandEvent& event ) { event.Skip(); }
		virtual void onConfig( wxCommandEvent& event ) { event.Skip(); }
		virtual void onGainSelect( wxCommandEvent& event ) { event.Skip(); }
		virtual void onResList( wxCommandEvent& event ) { event.Skip(); }
		virtual void onContList( wxCommandEvent& event ) { event.Skip(); }
		virtual void onRunTest( wxCommandEvent& event ) { event.Skip(); }
		virtual void onTestGeo( wxCommandEvent& event ) { event.Skip(); }
		virtual void onAutoGeo( wxCommandEvent& event ) { event.Skip(); }
		virtual void onAbout( wxCommandEvent& event ) { event.Skip(); }
		virtual void onToolbarChoice( wxCommandEvent& event ) { event.Skip(); }
		virtual void onDistance( wxCommandEvent& event ) { event.Skip(); }
		virtual void onAutoFocus( wxCommandEvent& event ) { event.Skip(); }
		virtual void onStepSlider( wxScrollEvent& event ) { event.Skip(); }
		virtual void onAutoLight( wxCommandEvent& event ) { event.Skip(); }
		virtual void onWindowSlider( wxScrollEvent& event ) { event.Skip(); }
		virtual void onLevelSlider( wxScrollEvent& event ) { event.Skip(); }
		virtual void onZoomSlider( wxScrollEvent& event ) { event.Skip(); }
		virtual void onAutoAll( wxCommandEvent& event ) { event.Skip(); }
		virtual void onVertFlip( wxCommandEvent& event ) { event.Skip(); }
		virtual void onHorFlip( wxCommandEvent& event ) { event.Skip(); }
		virtual void onLogView( wxCommandEvent& event ) { event.Skip(); }
		virtual void onProjectionView( wxCommandEvent& event ) { event.Skip(); }
		virtual void onXEnhance( wxCommandEvent& event ) { event.Skip(); }
		virtual void onYEnhance( wxCommandEvent& event ) { event.Skip(); }
		virtual void onAbsEnhance( wxCommandEvent& event ) { event.Skip(); }
		virtual void onResetEnhance( wxCommandEvent& event ) { event.Skip(); }
		virtual void onEnhanceRatio( wxScrollEvent& event ) { event.Skip(); }
		virtual void onScanVertEnable( wxCommandEvent& event ) { event.Skip(); }
		virtual void onResetScanVert( wxCommandEvent& event ) { event.Skip(); }
		virtual void onScanVert( wxScrollEvent& event ) { event.Skip(); }
		virtual void onScanHorEnable( wxCommandEvent& event ) { event.Skip(); }
		virtual void onResetScanHor( wxCommandEvent& event ) { event.Skip(); }
		virtual void onScanHor( wxScrollEvent& event ) { event.Skip(); }
		virtual void onNoiseMaxEnable( wxCommandEvent& event ) { event.Skip(); }
		virtual void onResetNoiseMax( wxCommandEvent& event ) { event.Skip(); }
		virtual void onNoiseMax( wxScrollEvent& event ) { event.Skip(); }
		virtual void onPageChange( wxAuiNotebookEvent& event ) { event.Skip(); }
		
	
	public:
		wxAuiNotebook* m_auinotebook6;
		wxTextCtrl* m_textCtrl8;
		
		mainWindow( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Tomogrophy Reconstruction"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1074,681 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		wxAuiManager m_mgr;
		
		~mainWindow();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class RunBox
///////////////////////////////////////////////////////////////////////////////
class RunBox : public wxDialog 
{
	private:
	
	protected:
	
	public:
		wxGauge* m_gauge2;
		
		RunBox( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Reconstruction running"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 208,61 ), long style = wxDEFAULT_DIALOG_STYLE|wxSTAY_ON_TOP ); 
		~RunBox();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class resDialog
///////////////////////////////////////////////////////////////////////////////
class resDialog : public wxDialog 
{
	private:
	
	protected:
		wxListCtrl* m_listCtrl;
		wxButton* addNew;
		wxButton* remove;
		wxStaticLine* m_staticline3;
		wxButton* ok;
		wxButton* cancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void onAddNew( wxCommandEvent& event ) { event.Skip(); }
		virtual void onRemove( wxCommandEvent& event ) { event.Skip(); }
		virtual void onOk( wxCommandEvent& event ) { event.Skip(); }
		virtual void onCancel( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		resDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Resolution Pantoms"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1070,438 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~resDialog();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class MyDialog3
///////////////////////////////////////////////////////////////////////////////
class MyDialog3 : public wxDialog 
{
	private:
	
	protected:
	
	public:
		
		MyDialog3( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 619,499 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~MyDialog3();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class configDialog
///////////////////////////////////////////////////////////////////////////////
class configDialog : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText3;
		wxTextCtrl* sliceThickness;
		wxPanel* m_panel4;
		wxPanel* m_panel5;
		wxStaticText* m_staticText6;
		wxRadioBox* orientation;
		wxStaticText* m_staticText5;
		wxRadioBox* rotationEnabled;
		wxStaticText* m_staticText13;
		wxStaticText* m_staticText9;
		wxTextCtrl* pixelWidth;
		wxStaticText* m_staticText10;
		wxTextCtrl* pixelHeight;
		wxStaticText* m_staticText11;
		wxTextCtrl* pitchHeight;
		wxStaticText* m_staticText12;
		wxTextCtrl* pitchWidth;
		wxStaticText* m_staticText14;
		wxGrid* m_grid1;
		wxButton* loadConfig;
		wxButton* saveConfig;
		wxButton* ok;
		wxButton* cancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void onLoad( wxCommandEvent& event ) { event.Skip(); }
		virtual void onSave( wxCommandEvent& event ) { event.Skip(); }
		virtual void onOK( wxCommandEvent& event ) { event.Skip(); }
		virtual void onCancel( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		configDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Reconstruction Configuration"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1343,361 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~configDialog();
	
};

#endif //__RECONUI_H__
