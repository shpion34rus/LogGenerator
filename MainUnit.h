//---------------------------------------------------------------------------

#ifndef MainUnitH
#define MainUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.WinXPickers.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TTimer *TimerClock;
	TStaticText *Clock;
	TButton *ButtonClockStart;
	TButton *ButtonClockStop;
	TTimer *TimerClockVisibleTimer;
	TListBox *ListBox1;
	TComboBox *ComboBox1;
	void __fastcall TimerClockTimer(TObject *Sender);
	void __fastcall ButtonClockStartClick(TObject *Sender);
	void __fastcall ButtonClockStopClick(TObject *Sender);
	void __fastcall TimerClockVisibleTimerTimer(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
