#include<iostream>
using namespace std;
class Travel{
    private:
        string T_Code;
        int No_of_Adults,No_of_Children,Distance;
        float TotalFare;
    public:
        Travel(){
            T_Code = "NULL";
            No_of_Adults = 0;
            No_of_Children = 0;
            Distance = 0;
            TotalFare = 0;
        }
        float Assignfare(){
            if (Distance>=1000)
                TotalFare=(No_of_Adults*500) + (No_of_Children*250);
            else if(Distance<1000 && Distance>=500)
                TotalFare=(No_of_Adults*300) + (No_of_Children*150);
            else
                TotalFare=(No_of_Adults*200) + (No_of_Children*100);   
        }
        float EnterTravel(){
            cout<<"enter the travel code: ";
            cin>>T_Code;
            cout<<"enter the no. of adults: ";
            cin>>No_of_Adults;
            cout<<"enter the no. of childrens: ";
            cin>>No_of_Children;
            cout<<"enter the distance in km: ";
            cin>>Distance;
            Assignfare();
        }
        float ShowTravel(){
            cout<<"Total fare of the travel is "<<TotalFare;
        }

};
int main(){
    Travel obj;
    obj.EnterTravel();
    obj.ShowTravel();
    return 0;
}
