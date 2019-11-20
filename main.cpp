#include<iostream>
#include<cassert>
using namespace std;

class myexception
{
    public:
    myexception() {
         message = "No! divide zero";
    }
    myexception(string s) {
         message = s;
    }
    string what() {
        return message;
    }
    private:
        string message;
};
int main()
{
int A;
int B;
int C;

try 
{    string inputStr = "! Error input";
     string test = "abcd";
     cout<<"enter A to be divided by B "<<endl;
     cin>>A;
     cout<<"enter B to divide A over it "<<endl;
     cin>>B;

//assert(B!=0);
     if (B == 0)
         throw myexception();
     else if(B<0)
         throw string("NO");
     else if(!cin)
        throw inputStr;
     //string sub_test = test.substr(20, 10);
     C=A/B;
     cout<<"A divided by B is: "<<C<<endl;
}
catch (myexception ex) 
{
    cout << "No, " << ex.what()<< endl;
}

//catch (string s)
//{  
 //   cout<<s<<", B cant be Negative"<<endl;
//}
catch(string m)
{
    cout<<m<<", B cant be a char dummy"<<endl;
}

catch(out_of_range x)
{
    cout<<"No!!! Out of range"<<x.what()<<endl;
}






}

