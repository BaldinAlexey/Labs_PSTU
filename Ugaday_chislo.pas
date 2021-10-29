{Задача отгадать число,заданное программой за 6 попыток}
var n,i,x, k:byte;
begin
randomize;
n:=random(100)+1;
k:=0;
repeat
readln(x);
k:=k+1;
if x>n  then writeln('Меньше');
if x<n then  writeln('Больше');
until  x=n;
writeln('Угадал за ', k,'  шагов!' );
end.
