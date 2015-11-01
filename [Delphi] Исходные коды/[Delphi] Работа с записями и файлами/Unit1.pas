{ Для получения места в общежитии формируется список студентов, который включает Ф.И.О. студента, группу, средний балл, доход на члена семьи. Общежитие в первую очередь предоставляется тем, у кого доход на члена семьи меньше двух минимальных зарплат, затем остальным в порядке уменьшения среднего балла. Вывести список очередности предоставления мест в общежитии. }

unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, Buttons, StdCtrls;

type
  TForm1 = class(TForm)
    OpenDialog1: TOpenDialog;
    SaveDialog1: TSaveDialog;
    Label1: TLabel;
    Edit1: TEdit;
    Label2: TLabel;
    Edit2: TEdit;
    Label3: TLabel;
    Edit3: TEdit;
    Label4: TLabel;
    Edit4: TEdit;
    Button1: TButton;
    Label5: TLabel;
    Memo1: TMemo;
    Button2: TButton;
    Button3: TButton;
    Button4: TButton;
    Button5: TButton;
    BitBtn1: TBitBtn;
    procedure FormCreate(Sender: TObject);
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure Button3Click(Sender: TObject);
    procedure Button4Click(Sender: TObject);
    procedure Button5Click(Sender: TObject);
    procedure BitBtn1Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

  Type
  TStudent = record
  FIO: string[40];
  group: string[40];
  SrBall: string[40];
  dohod: string[40];
  end;
var

Fz : file of Tstudent;
Ft : TextFile;
Stud : array[1..100] of Tstudent;
nzap : integer;
FileNameZ, FileNameT : string;

var
  Form1: TForm1;

implementation

{$R *.dfm}

procedure TForm1.FormCreate(Sender: TObject);
begin
Edit1.Clear;
Edit2.Clear;
Edit3.Clear;
Edit4.Clear;
Memo1.Clear;
Button1.Hide;
nzap:=0;
end;

procedure TForm1.Button1Click(Sender: TObject);
begin
nzap:=nzap+1;
with stud[nzap] do begin
FIO:=Edit1.Text;
group:=Edit2.Text;
SrBall:=Edit3.Text;
dohod:=Edit4.Text;
Memo1.Lines.Add(FIO+' '+group+' '+SrBall+' '+dohod);
end;
Write(Fz,Stud[nzap]);
Edit1.Clear;
Edit2.Clear;
Edit3.Clear;
Edit4.Clear;
end;

procedure TForm1.Button2Click(Sender: TObject);
begin
OpenDialog1.Title:='Создать новый файл';
if OpenDialog1.Execute then begin
FileNameZ:=OpenDialog1.FileName;
AssignFile(Fz,FileNameZ);
Rewrite(Fz);
end;
Button1.Show;
end;

procedure TForm1.Button3Click(Sender: TObject);
begin
if OpenDialog1.Execute then begin
FileNameZ:=OpenDialog1.FileName;
AssignFile(Fz,FileNameZ);
Reset(Fz);
end;
nzap:=0;
while not eof(fz) do begin
nzap:=nzap+1;
Read(Fz,stud[nzap]);
with stud[nzap] do
Memo1.Lines.Add(FIO+' '+group+' '+SrBall+' '+dohod);
end;
Button1.Show;
end;

procedure TForm1.Button4Click(Sender: TObject);
var i,j:word; st:TStudent;
begin

for i:=1 to nzap-1 do
for j:=i+1 to nzap do
if Stud[i].dohod > Stud[j].dohod then begin
st:=Stud[i];
Stud[i]:=Stud[j];
Stud[j]:=st;
end
else if Stud[i].dohod = Stud[j].dohod then begin
 if Stud[i].SrBall < Stud[j].SrBall then begin
st:=Stud[i];
Stud[i]:=Stud[j];
Stud[j]:=st;
end;
end;
Memo1.Clear;
for i:=1 to nzap do
with stud[i] do
Memo1.Lines.Add(IntToStr(i)+' '+FIO+' '+group+' '+SrBall+' '+dohod);

end;

procedure TForm1.Button5Click(Sender: TObject);
var i:word;
begin

if SaveDialog1.Execute then begin
FileNameT:=SaveDialog1.FileName;
AssignFile(Ft,FileNameT);
Rewrite(Ft);
end;
for i:=1 to nzap do
with stud[i] do Writeln(Ft,i:4,'. ',FIO,group,SrBall,dohod);
CloseFile(Ft);

end;

procedure TForm1.BitBtn1Click(Sender: TObject);
begin

CloseFile(Fz);

end;

end.
