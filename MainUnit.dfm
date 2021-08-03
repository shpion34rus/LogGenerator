object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'LogGenerator'
  ClientHeight = 462
  ClientWidth = 760
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  DesignSize = (
    760
    462)
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 8
    Top = 8
    Width = 65
    Height = 33
    TabOrder = 0
    object Clock: TStaticText
      Left = 9
      Top = 9
      Width = 48
      Height = 17
      Caption = '00:00:00'
      TabOrder = 0
    end
  end
  object ButtonClockStart: TButton
    Left = 104
    Top = 13
    Width = 25
    Height = 25
    Caption = #9654
    TabOrder = 1
    OnClick = ButtonClockStartClick
  end
  object ButtonClockStop: TButton
    Left = 135
    Top = 13
    Width = 25
    Height = 25
    Caption = #9209
    TabOrder = 2
    OnClick = ButtonClockStopClick
  end
  object ListBox1: TListBox
    Left = 0
    Top = 312
    Width = 760
    Height = 156
    Anchors = [akLeft, akTop, akRight, akBottom]
    ItemHeight = 13
    TabOrder = 3
  end
  object TimerClock: TTimer
    Enabled = False
    OnTimer = TimerClockTimer
    Left = 696
    Top = 32
  end
  object TimerClockVisibleTimer: TTimer
    OnTimer = TimerClockVisibleTimerTimer
    Left = 696
    Top = 80
  end
end
