{
     Составить программу решения следующей задачи:

     c =  f(x)^2 + y^2 + sin(y) ; x - y = 0
          (f(x) - y)^2 + cos(y) ; x - y > 0
          (y - f(x))^2 + tg(y) ;  иначе
}

unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, ExtCtrls, Math, jpeg;

type
  TForm1 = class(TForm)
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    Edit1: TEdit;
    Edit2: TEdit;
    mmo1: TMemo;
    rg1: TRadioGroup;
    chk1: TCheckBox;
    btn1: TButton;
    img1: TImage;
    procedure FormCreate(Sender: TObject);
    procedure btn1Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

procedure TForm1.FormCreate(Sender: TObject);
begin
Edit1.Text:='0';
Edit2.Text:='0';
mmo1.Clear;
rg1.ItemIndex:=0;
end;

procedure TForm1.btn1Click(Sender: TObject);
var x,y,a,u,f : Extended;
begin

x:=StrToFloat(Edit1.Text);
y:=StrToFloat(Edit2.Text);

mmo1.Lines.Add('X = '+FloatToStrF(x,ffFixed,8,4));
mmo1.Lines.Add('Y = '+FloatToStrF(y,ffFixed,8,4));

case rg1.ItemIndex of
0: f:=cos(x);
1: f:=Power(x, 2);
2: f:=exp(x);
end;

if x-y=0 then
begin
  u:=f+y*y+Sin(y);
  end
else
if x-y>0 then
begin
  u:=Power(f-y, 2)+Cos(y);
    end
else
begin
  u:=Power(y-f, 2)+Tan(y);
    end;


if chk1.Checked then
mmo1.Lines.Add('C = '+IntToStr(Round(u)))
else
mmo1.Lines.Add('C = '+FloatToStrF(u,ffGeneral,8,2));
end;
end.



