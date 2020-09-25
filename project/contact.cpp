#include <iostream>
using namespace std;
struct person
{
    int phone_number;
    string name;
    string relation;

};

int main ()

{

   cout << "****WELLCOME TO MY CONTACT MANEGEMENT SYSTEM****" << endl;
   int n;

   cout << "Enter the number of contact :";

   cin>>n;
   person s[n];
   for(int i=0;i<n;i++)
   {
       cout << "Enter the details of contact " << i+1 << endl;
       cout << "Enter the name :" ;
       cin >> s[i].name;
       cout << "Enter the phone number :";
       cin >> s[i].phone_number;
       cout << "Enter the relation :"  ;
       cin >> s[i].relation;
       cout << "_______________________________"<<endl;
   }

       cout << "*******************************" << endl;

     for(int i=0;i<n;i++)
     {
         cout << "Enter the details of contact" << i+1 << endl;
         cout << "name:" << s[i].name << endl;
         cout << "phone number:" << s[i].phone_number << endl;
         cout << "relation:" << s[i].relation << endl;


       cout << "*******************************" << endl;


     }


    return 0;

}
