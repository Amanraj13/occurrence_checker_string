#include<iostream>
#include<string>
using namespace std;

int main(){
    string a;  //string to store the text entered by the user
    char b;   //variable to take the character from user
    int count{0};

    cout<<"\nEnter a text: ";  //asking the user for the text
    getline(cin,a);

    cout<<"\nEnter the character you want to check the  occurrence:";   //asking the user for the character
    cin>>b;

    //checking the occurrence
    for(int i{0};i<=a.length();i++){

        if(a[i]==b){
            count++;  
    }

 }

    cout<<"\nThe number of occurrence is:"<<count<<endl;
    
}
