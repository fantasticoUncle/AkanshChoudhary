#include<iostream>
#include<fstream>
using namespace std ;
int main()
{ int z ,age;
char ans,Y,N ;
string filename ,name,gender,line;
jump_point:
    cout << "enter 1 for making new account.  " ;
    cout<<"\n";
    cout<<"\n";
    cout<<"enter 2 for viewing existing account. " ;
    cout<<"\n";
    cout<<"\n";
    cout<<"enter 3 for editing your account. " ;
    cout<<"\n";
    cout<<"\n";
    cin>>z ;
    cout<<"\n";
    cout<<"\n";

    switch(z)
    {
    case 1:
       {
           cout<<"enter the name of file u want to create : "<<endl ;
           cin>>filename ;
           filename=filename+".txt" ;
           fstream file ;
        file.open(filename.c_str(), ios::out) ;
        cout<<"\n";
        cout<<"\n";
   cout<<"File created successfully.";
         break ;
         }
    case 2:
        {
        cout<<"enter the filename u want to open and read : " ;
        cin>>filename;
        filename=filename+".txt";
        ifstream file ;
         file.open(filename.c_str(),ios::in) ;
         if (file.is_open())
         {
             while(getline(file,line))
             {
                 cout<<line<<"\n"  ;

             }
             file.close();
         }
        break;
        }
    case 3:
        {
            cout<<"please enter the filename u want to open : " ;
            cout<<"\n" ;
            cout<<"\n" ;
            cin>>filename ;
            filename=filename+".txt" ;
            ofstream file ;
            file.open(filename.c_str(),ios::in) ;
            if (file.is_open())
            {
                cout<<"please enter your NAME :" ;
                cin>> name ;
                cout<<"\n" ;
                cout<<"\n" ;
                cout<<"please enter your AGE :" ;
                cin>> age;
                cout<<"\n" ;
                cout<<"\n" ;
                cout<<"please enter your GENDER :" ;
                cin>> gender;
                file<<"NAME : "<<name<<endl ;
                file<<"AGE : "<<age<<endl ;
                file<<"GENDER : "<<gender<<endl;
                cout<<"\n" ;
                cout<<"\n" ;
                cout<<"data edited successfully";
                file.close() ;
                break;
            }
        }
    default :
       {
        break; }
    }
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<< "do u want to continue ? " ;
    cin>>ans ;
    switch(ans)
    {
    case 'Y':
        goto jump_point ;
        break;
    case 'N':
        return 0 ;

    }
}
