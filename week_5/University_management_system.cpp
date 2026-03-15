#include<iostream>
using namespace std;

int main()
{
    int choice = 0;
    string name, course;
    int age;
    for(int i = 1; i <= 3; i++)
    {
        cout<<"Enter username: ";
        string username;
        cin>>username;

        cout<<"Enter password: ";
        int password;
        cin>>password;

        if(username == "admin" && password == 1234)
        {
            cout<<"Login Successful\n";

            while(choice != 4)
            {
                cout<<"--------University Menu---------\n";
                cout<<"1--> Add Student\n";
                cout<<"2--> View Student\n";
                cout<<"3--> Add Course\n";
                cout<<"4--> Exit\n";
                cout<<"Your Choice: ";
                cin>>choice;

                if(choice == 1)
                {
                    cout<<"Enter name: ";
                    cin>>name;

                    cout<<"Enter age: ";
                    cin>>age;

                    cout<<"Student added successfully\n";
                }
                else if(choice == 2)
                {
                    cout<<"Student name: "<<name<<endl;
                    cout<<"Student age: "<<age<<endl;
                }
                else if(choice == 3)
                {
                    cout<<"Enter course name: ";
                    cin>>course;

                    cout<<"Course added successfully\n";
                }
                else if(choice == 4)
                {
                    cout<<"Exiting program.\n";
                }
                else
                {
                    cout<<"Enter correct choice.\n";
                }
            }

            break; 
        }
        else
        {
            cout<<"Wrong username or password\n";
        }
    }
}