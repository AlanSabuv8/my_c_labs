#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    char a[40],b[40],c[40],d[40];
    cout<<"input string 1: ";
    gets(a);
    cout<<"input string 2: ";
    gets(b);
    int o,len1,len2,i,vow=0,con=0;
    cout<<"\nMENU"<<"\n";
    cout<<"\n1.To find the length of both strings";
    cout<<"\n2.Connect both strings";
    cout<<"\n3.Find no. of vowels and consonants in both strings";
    cout<<"\n4.Create copies of the strings and print them"<<"\n";
    cout<<"\nEnter the option no: ";
    cin>>o;
    len1=strlen(a);
    len2=strlen(b);
    switch(o){
        case 1:{
            cout<<"\nLenth of string a= "<<len1;
            cout<<"\nLength of string b= "<<len2;
            break;
        }
        case 2:{
            strcat(a,b);
            cout<<"\nConnected string: "<<a;
            break;
        }
        case 3:{
            for(i=0; i<len1; i++){
                if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
                    vow++;
                else    
                    con++;    
            }
            cout<<"\nstring a"<<"\nNo of vowels= "<<vow<<"\tNo of consonants= "<<con;
            vow=0,con=0;
            for(i=0; i<len2; i++){
                if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'||b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='O'||b[i]=='U')
                    vow++;
                else    
                    con++;    
            }
            cout<<"\nstring b"<<"\nNo of vowels= "<<vow<<"\tNo of consonants= "<<con;
            break;
        }
        case 4:{
            strcpy(c,a);
            strcpy(d,b);
            cout<<"\nString c= "<<c;
            cout<<"\nString d= "<<d;
            cout<<"\nCopied successfully!!";
            break;
        }
        default: cout<<"\nwrong option!!";
            break;
    }
    return 0;

}