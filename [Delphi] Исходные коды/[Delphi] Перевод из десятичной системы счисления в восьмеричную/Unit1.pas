{ Дана строка, представляющая собой запись числа в десятеричной системе счисления.
Преобразовать ее в строку, представляющую собой запис числа в восьмеричной системе счисления. }

unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls;

type
  TForm1 = class(TForm)
    Edit1: TEdit;
    Button1: TButton;
    Edit2: TEdit;
    procedure Button1Click(Sender: TObject);
  private
  function Oct(x: Integer): string;
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

function TForm1.Oct(x: Integer): string;
const digits:array [0..8] of char = ('0','1','2','3','4','5','6','7','8');
var res:string; d:0..8;
begin
res:='';
while (x<>0) do begin
d:=x mod 8; res:=digits[d]+res;
x:=x div 8;
end;
Oct:=res;

end;

procedure TForm1.Button1Click(Sender: TObject);
var a:integer;
begin
a:=StrToInt(Edit1.Text);
Edit2.Text:=(Oct(a));
end;

end.
