//file-- an object of ofstream/fstream






#include<iostream>
#include<fstream> //fstream is used to read/write to a file
using namespace std;

class temp{
    string userName,Email,Password;
    fstream file;
    public:
    void SignUp(){
        
    }
    void Login();
    void Forgot();


}obj;
void temp :: SignUp(){
    cout<<"\nEnter Your User Name:";
    getline(cin,userName); //The getline() function in C++ is used to read a full line of text, including spaces, from an input stream (like cin or a file)
    cout<<"\nEnter Your Email Address:";
    getline(cin,Email);
    cout<<"\nEnter Your Password:";
    getline(cin,Password);

    file.open("loginData.txt",ios :: out | ios :: app);
    //file--> an object of ofstream/fstream
    //.open(....) --> opens the file named "loginData.txt"
    //"loginData.txt"--> the file where data will be written
    //ios::out  --> write to the file
    //ios::oapp --> append mode-data is added at the end,existing data is not erased.
    file <<userName<<"*"<<Email<<"*"<<Password<<endl; //It writes user data into a file in a structured format.
    file.close();
}
void temp:: Login(){
    string searchName,searchPass;
    cout<<"-------LOGIN-------"<<endl;
    cout<<"Enter Your UserName:"<<endl;
    getline(cin,searchName);
    cout<<"Enter Your Password:"<<endl;
    getline(cin,searchPass);

    file.open("loginData.txt",ios :: in);
    getline(file,userName,'*');
    getline(file,Email,'*');
    getline(file,Password,'\n');

    while(!file.eof()){
        if(userName == searchName){
            if(Password == searchPass){
                cout<<"\nAccount Login Successful...!";
                
            }
        }
    }
}
int main(){
    char choice;
    cout<<"\n1-Login";
    cout<<"\n2-Sign-up";
    cout<<"\n3-Forgot Password";
    cout<<"\n4-Exit";
    cout<<"\nEnter Your Choice:";
    cin>>choice;
    switch(choice){
        case '1':

        break;
        case '2':
        break;
        case '3':
        break;
        case '4':
        break;
        default:
         cout<<"Please enter the correct choice!";
    }
    return 0;
}
