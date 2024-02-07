
#include<iostream>
using namespace std;
class student {
    public:
string name,session,exam1,pren1,ct;
int id,a;

double gpa;
void display(){
  cout<<"name = "<<name<<endl<<"session = "<<session<<endl;
  cout<<"id = "<<id<<" and "<<" cgpa id = "<<gpa<<endl;
  cout<<endl;

}
  student(string name1,string session1,int id1,double b){
  id=id1;
  gpa=b;
  name=name1;
  session=session1;
  }
  void display2(int a1){

    a=a1;
    cout<<"CT result = "<<a<<endl;
  }

};

int main(){
student s1("Raj Adhikary","2019-2020",190109,3.45);
student s2("Joydip das","2019-2020",190102,3.57);
student s3("SHOPON ahmed","2019-2020",190107,3.75);
student s4("Tasmia","2019-2020",190154,3.42);
student s5("Rahul roy","2019-2020",190108,3.41);


s1.display();

s1.display2(10);

s2.display();

s1.display2(01);

s3.display();

s1.display2(02);

s4.display();

s1.display2(03);

s5.display();

s1.display2(10);



}
