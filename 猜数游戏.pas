program c_k;
 var a,b,c:integer;
 begin
 randomize;
 a:=random(100);
 c:=0;
 repeat
 c:=c+1;
 write('please input b:');
 readln(b);
 if b>a then writeln('Too big')
 else if b<a then writeln('Too small')
 else if b=a tehn writeln('you are right');
 until (c=10) or (a=b);
 if c=10 then writeln('you false,the number is:',a);
 readln;readln;
 end.