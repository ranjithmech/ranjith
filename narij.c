 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 clrscr()
 n=input()
num=n
sum=0
if(num>0):
	rem=num%10
	temp=rem**3
	sum=sum+temp
	num=num/10
if(n==sum):
	    print('Armstrong number')
else:
      print("not a armstrong number")
       getch();
       return 0;
       }
