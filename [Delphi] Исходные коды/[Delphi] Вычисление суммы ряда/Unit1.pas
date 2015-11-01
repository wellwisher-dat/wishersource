{
     Составить программу решения следующей задачи:
     E - сумма при n = 0 до бесконечности
     e - exp
     xn = 0.1
     xk = 1
     E(cos(n*pi/4)/n!)*xn
     Y(x) = e(x*cos(pi/4))*cos(x*sin(pi/4))
}

unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, jpeg, ExtCtrls;

type
  TForm1 = class(TForm)
    edt1: TEdit;
    edt2: TEdit;
    edt3: TEdit;
    lbl1: TLabel;
    lbl2: TLabel;
    lbl3: TLabel;
    mmo1: TMemo;
    btn1: TButton;
    lbl4: TLabel;
    lbl5: TLabel;
    edt4: TEdit;
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
edt1.Text:='0,1';
edt2.Text:='1';
edt3.Text:='0,001';
edt4.Text:='1';
mmo1.Clear;
end;

procedure TForm1.btn1Click(Sender: TObject);
var xn,xk,x,h,e,a,s,y : Extended;
    n,k,M : Integer;
begin

xn:=StrToFloat(edt1.Text);
mmo1.Lines.Add('Xn = '+FloatToStrF(xn,ffFixed,6,2));
xk:=StrToFloat(edt2.Text);
mmo1.Lines.Add('Xk = '+FloatToStrF(xk,ffFixed,6,2));
e:=StrToFloat(edt3.Text);
mmo1.Lines.Add('e = '+FloatToStrF(e,ffFixed,6,2));
M:=StrToInt(edt4.Text);
mmo1.Lines.Add('M = '+FloatToStrF(M,ffFixed,6,2));

x:=xn;

repeat
  a:=1;
  S:=1;
  n:=0;
  while (Abs(a) > e) do begin
    n:=n+1;
    a:=a*x/n;
    s:=s+a;
  end;

  h:=(xk-xn)/M;
  y:=(Exp(x) + Exp(-x))/2;
  mmo1.Lines.Add('при x = '+FloatToStrF(x,ffFixed,6,2)+' сумма = '+FloatToStrF(s,ffFixed,8,4)+' y = '+FloatToStrF(s,ffFixed,8,4)+' N = '+IntToStr(n));
  x:=x+h;
  until x>(xk+h/2)

end;

end.
