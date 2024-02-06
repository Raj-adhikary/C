
#include<iostream>
using namespace std;
class student {
    public:
int id;
double gpa;
void display(){
  cout<<"id = "<<id<<" and "<<gpa<<endl;
}
};

int main(){
student prince,rana;
prince.id=10;
prince.gpa=3.45;
prince.display();
rana.id=12;
rana.gpa=3.34;
rana.display();

}
