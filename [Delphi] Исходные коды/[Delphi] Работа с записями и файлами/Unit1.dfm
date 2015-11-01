object Form1: TForm1
  Left = 948
  Top = 179
  Width = 426
  Height = 500
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 24
    Width = 46
    Height = 20
    Caption = #1060'.'#1048'.'#1054'.'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = '@Arial Unicode MS'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 8
    Top = 56
    Width = 49
    Height = 20
    Caption = #1043#1088#1091#1087#1087#1072
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = '@Arial Unicode MS'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 8
    Top = 88
    Width = 58
    Height = 20
    Caption = #1057#1088'.'#1073#1072#1083#1083
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = '@Arial Unicode MS'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 8
    Top = 120
    Width = 43
    Height = 20
    Caption = #1044#1086#1093#1086#1076
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = '@Arial Unicode MS'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 168
    Top = 192
    Width = 54
    Height = 20
    Caption = #1057#1087#1080#1089#1086#1082':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = '@Arial Unicode MS'
    Font.Style = []
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 104
    Top = 24
    Width = 265
    Height = 21
    TabOrder = 0
    Text = 'Edit1'
  end
  object Edit2: TEdit
    Left = 104
    Top = 56
    Width = 265
    Height = 21
    TabOrder = 1
    Text = 'Edit2'
  end
  object Edit3: TEdit
    Left = 104
    Top = 88
    Width = 265
    Height = 21
    TabOrder = 2
    Text = 'Edit3'
  end
  object Edit4: TEdit
    Left = 104
    Top = 120
    Width = 265
    Height = 21
    TabOrder = 3
    Text = 'Edit4'
  end
  object Button1: TButton
    Left = 8
    Top = 152
    Width = 361
    Height = 25
    Caption = #1042#1085#1077#1089#1090#1080' '#1079#1072#1087#1080#1089#1100' '#1074' '#1086#1073#1097#1080#1081' '#1089#1087#1080#1089#1086#1082
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = '@Arial Unicode MS'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    OnClick = Button1Click
  end
  object Memo1: TMemo
    Left = 8
    Top = 216
    Width = 361
    Height = 145
    Lines.Strings = (
      'Memo1')
    ScrollBars = ssVertical
    TabOrder = 5
  end
  object Button2: TButton
    Left = 8
    Top = 376
    Width = 75
    Height = 25
    Caption = #1057#1086#1079#1076#1072#1090#1100
    TabOrder = 6
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 104
    Top = 376
    Width = 75
    Height = 25
    Caption = #1054#1090#1082#1088#1099#1090#1100
    TabOrder = 7
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 200
    Top = 376
    Width = 75
    Height = 25
    Caption = #1057#1086#1088#1090#1080#1088#1086#1074#1072#1090#1100
    TabOrder = 8
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 296
    Top = 376
    Width = 75
    Height = 25
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
    TabOrder = 9
    OnClick = Button5Click
  end
  object BitBtn1: TBitBtn
    Left = 8
    Top = 416
    Width = 361
    Height = 25
    Caption = #1047#1072#1082#1088#1099#1090#1100' '#1092#1072#1081#1083' '#1079#1072#1087#1080#1089#1077#1081
    TabOrder = 10
    OnClick = BitBtn1Click
  end
  object OpenDialog1: TOpenDialog
    DefaultExt = '.dat'
    Filter = #1060#1072#1081#1083' '#1076#1072#1085#1085#1099#1093'|*.dat|'#1042#1089#1077' '#1092#1072#1081#1083#1099'|*.*'
    Left = 376
    Top = 24
  end
  object SaveDialog1: TSaveDialog
    DefaultExt = '.txt'
    Filter = #1060#1072#1081#1083' '#1076#1072#1085#1085#1099#1093'|*.txt|'#1042#1089#1077' '#1092#1072#1081#1083#1099'|*.*'
    Left = 376
    Top = 56
  end
end
