//implement switch case using c++ programming language
// Name: umesh hakke
//roll no: 2059
//CSE A S4
#include<IOSTREAM.h>
#include<stdlib.h>
#include<conio.h>
void cal();
int main()
{
clrscr();
cal();
getch();
return 0;
}
void cal(){
	float result,c;
	int i;
	char o,a;
	clrscr();
	cout<<"Calculator\n";
	cout<<"enter the value followed by operator\n" ;
	cin>>result;
	for(i=0;i<=20;i++){
	  cin>>o;
	  switch(o){
		case '+':
		cin>>c;
		result=result+c;
		cout<<"="<<result;
		break;
		case '-':
		cin>>c;
		result=result-c;
		cout<<"="<<result;
		break;
		case '*':
		cin>>c;
		result=result*c;
		cout<<"="<<result;
		break;
		case '/':
		cin>>c;
		result=result/c;
		cout<<"="<<result;
		break;
	      /*	case '%':
		cin>>c;
		result=result%c;
		cout<<"="<<result;
		break;*/
		case '=':
		goto end;
		default:
		cout<<"invalid input\n";
	  }
	}
    end :
    cout<<"\n= "<<result;
    cout<<"\nenter y to go back to calculator\n";
    cin>>a;
    if(a=='y'){
    main();
    }
    else{
    cout<<"you are out of program\n";
}
getch();
}
/* 			OUTPUT
Calculator
enter the value followed by operator
34
*
65
=2210/65
=34*8
=272-200
=72-56
=16/4
=4=

= 4
enter y to go back to calculator
n
you are out of program*/

