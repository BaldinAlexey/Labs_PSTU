{Программа должна вывести все возможные комбинации чисел из 3-ех значного числа и найти среди них самое большое}
var  x:integer; 
a, b, c, d, i, max: integer;
begin
 write('Введите 3-х значное число:  ');
readln(x);
a:=x div 100;
b:=(x div 10) mod 10;
c:=x mod 10;
max:=0;
for i:=1 to 3 do
    begin
 x:=100*a+10*b+c;
 writeln(x);
 if x>max then max:=x;
 d:=b;
 b:=c;
 c:=d;
 x:=100*a+10*b+c;
  writeln(x);
  if x> max then max:=x;
d:=c;
c:=a;
a:=d;
    end;
    writeln('Максимальное число:', max);
end.
