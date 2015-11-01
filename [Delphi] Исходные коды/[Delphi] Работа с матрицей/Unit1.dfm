object Form1: TForm1
  Left = 733
  Top = 239
  Width = 449
  Height = 255
  Caption = #1051#1072#1073#1086#1088#1072#1090#1086#1088#1085#1072#1103' '#1088#1072#1073#1086#1090#1072' 4'
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object lblN: TLabel
    Left = 80
    Top = 3
    Width = 29
    Height = 21
    Caption = 'N = '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = '@Arial Unicode MS'
    Font.Style = []
    ParentFont = False
  end
  object lblM: TLabel
    Left = 79
    Top = 37
    Width = 26
    Height = 21
    Caption = 'M ='
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = '@Arial Unicode MS'
    Font.Style = []
    ParentFont = False
  end
  object lblErr: TLabel
    Left = 395
    Top = 24
    Width = 3
    Height = 13
  end
  object edtN: TEdit
    Left = 112
    Top = 8
    Width = 121
    Height = 21
    TabOrder = 0
    Text = '3'
  end
  object edtM: TEdit
    Left = 112
    Top = 40
    Width = 121
    Height = 21
    TabOrder = 1
    Text = '3'
  end
  object btnNxM: TButton
    Left = 242
    Top = 18
    Width = 129
    Height = 25
    Caption = #1048#1079#1084#1077#1085#1080#1090#1100' '#1088#1072#1079#1084#1077#1088#1085#1086#1089#1090#1100
    TabOrder = 2
    OnClick = btnNxMClick
  end
  object strngrdA: TStringGrid
    Left = 10
    Top = 72
    Width = 263
    Height = 105
    ColCount = 4
    RowCount = 4
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
    TabOrder = 3
    RowHeights = (
      24
      24
      24
      24)
  end
  object strngrdB: TStringGrid
    Left = 288
    Top = 72
    Width = 134
    Height = 105
    ColCount = 2
    RowCount = 4
    ScrollBars = ssVertical
    TabOrder = 4
    RowHeights = (
      24
      24
      24
      24)
  end
  object btnRes: TButton
    Left = 8
    Top = 188
    Width = 409
    Height = 21
    Caption = #1042#1099#1095#1080#1089#1083#1080#1090#1100
    TabOrder = 5
    OnClick = btnResClick
  end
end
