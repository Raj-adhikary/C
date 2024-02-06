#include <iostream>
#include<conio.h>
using namespace std;
class student
{
public:
     int id;
     double gpa;
     void display(){
     cout<<id<<" "<<gpa<<endl;
     }
     student(int x,double y){
     id=x;
     gpa=y;
     }
	 student(){
		cout<<"default constructor"<<endl;
	 }
};


int main(){
	student ob;

student alim(112,3.4),s(132,3.33);

alim.display();



s.display();



	getch();
}
