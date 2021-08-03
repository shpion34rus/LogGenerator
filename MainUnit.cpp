//---------------------------------------------------------------------------

#include <vcl.h>
#include <time.h>
#pragma hdrstop

#include "MainUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerClockTimer(TObject *Sender)
{
	time_t t = time(NULL);
	struct tm* aTm = localtime(&t);
	Form1->Clock->Caption = Format("%.2d:%.2d:%.2d",aTm->tm_hour, aTm->tm_min, aTm->tm_sec);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonClockStartClick(TObject *Sender)
{
	time_t t = time(NULL);
	struct tm* aTm = localtime(&t);
	Form1->Clock->Caption = Format("%.2d:%.2d:%.2d",aTm->tm_hour, aTm->tm_min, aTm->tm_sec);
	TimerClock->Enabled = true;
	if (!Form1->Clock->Visible) {Form1->Clock->Visible = true;}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonClockStopClick(TObject *Sender)
{
	TimerClock->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerClockVisibleTimerTimer(TObject *Sender)
{
	if (!TimerClock->Enabled) {Form1->Clock->Visible = !Form1->Clock->Visible;}
}
//---------------------------------------------------------------------------

