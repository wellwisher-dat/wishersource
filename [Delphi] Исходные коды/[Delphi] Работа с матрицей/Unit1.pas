{ Если матрица размером NxM. Получить массив B, присвоив его k-му элементу значение 1,
если k-я строка матрицы симметрична, и значение 0 в противном случае. }

unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, Grids;

const
  MaxSize=10;
type
  TForm1 = class(TForm)
    lblN: TLabel;
    lblM: TLabel;
    edtN: TEdit;
    edtM: TEdit;
    btnNxM: TButton;
    strngrdA: TStringGrid;
    strngrdB: TStringGrid;
    btnRes: TButton;
    lblErr: TLabel;
    procedure btnNxMClick(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure btnResClick(Sender: TObject);
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
var
  i:Integer;
begin
  for i:=1 to strtoint(edtN.Text) do
    begin
      strngrdA.cells[0,i]:='i='+FloatToStr(i);
      strngrdB.cells[0,i]:='i='+FloatToStr(i);
    end;
  for i:=1 to strtoint(edtM.Text) do
    strngrdA.cells[i,0]:='j='+FloatToStr(i);
end;

procedure TForm1.btnNxMClick(Sender: TObject);
var
  i:Integer;
begin
  strngrdA.RowCount:=StrToInt(edtN.Text)+1;
  strngrdA.ColCount:=StrToInt(edtM.Text)+1;
  strngrdB.RowCount:=StrToInt(edtN.Text)+1;
  strngrdB.ColCount:=StrToInt(edtM.Text)+1;
  for i:=1 to strtoint(edtN.Text) do
    begin
      strngrdA.cells[0,i]:='i='+FloatToStr(i);
      strngrdB.cells[0,i]:='i='+FloatToStr(i);
    end;
  for i:=1 to strtoint(edtM.Text) do
    strngrdA.cells[i,0]:='j='+FloatToStr(i);
end;



procedure TForm1.btnResClick(Sender: TObject);
var
  i,j,k,n,m,res:integer;
  a,b:array [1..MaxSize,1..MaxSize] of Extended;
begin

try
  n:=strngrdA.RowCount-1;
  m:=strngrdA.ColCount-1;
  for j:=1 to n do
    for i:=1 to m do
      a[i,j]:=StrToFloat(strngrdA.cells[i,j]);
except
   on ERangeError do begin ShowMessage('Выход за пределы массива. Уменьшите размер массива'); Exit; end;
   on EConvertError do begin ShowMessage('В ячейке отсутствует значение или число введено неверно'); Exit; end;
   else begin ShowMessage('Возникла неизвестная ошибка!'); Exit; end;
   end;

  for i:=1 to n do
    begin
      res:=1;
      k:=m;
      for j:=1 to m do
        begin
          if a[j,i]<>a[k,i] then
            begin
              res:=0;
              break;
            end;
          Dec(k);
        end;
      strngrdB.cells[1,i]:=IntToStr(res);
    end;
end;

end.
