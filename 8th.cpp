//cpp program to check whether the character is vowel or consonant
#include<iostream>
#include<conio.h>
using namespace std;

class letters
     {
        char ch;
        public:
        void input()
        {
            cout<<"enter any character:";
            cin>>ch;
        }
        void display()
        {
            if (ch=='a'||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u'||ch=='A'|| ch=='E'||ch=='I'|| ch=='O'|| ch=='U')
            cout<<"vowel";
            else
            cout<<"consonant";
        }
     };

int main()
    { 
        letters l1;
        l1.input();
        l1.display();
       getch();  
     }
     
