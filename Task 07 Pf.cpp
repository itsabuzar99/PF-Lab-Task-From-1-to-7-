#include<iostream>
using namespace std;
int main()
{
    int subject,marks;
    cout<<"Enter the no of subject you have::"<<endl;
    cin>>subject;
    for(int i=1;i<=subject;i++){
        cout<<"Enter the marks of Subject_"<<i<<"="<<endl;
        cin>>marks;
        if(marks>=90 &&marks<=100){
            cout<<"YOU HAVE GOT GRADE A"<<endl;
        }
        else if(marks>=75 &&marks<=89){
            cout<<"YOU HAVE GOT GRADE B"<<endl;
        }
        else if(marks>=50&&marks<=74){
            cout<<"YOU HAVE GOT GRADE C"<<endl;
        }
        else
        cout<<"Failed the exam"<<endl;
    }
}
