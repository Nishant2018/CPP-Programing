//Program by Nishant 
#include<iostream>
using namespace std;
int main()
{
    int i,batsman_1,batsman_2,faster_bowler,spiner_bowler,ball,run,striker,power_play,open_field,field_type;
    int fineleg,cover,extracover,midon,midoff,midwicket,straight,hook,leave,single,two_run,three_run,third_man;
    int bouncer,inswing,outswing,length,slower,knockel,short_ball,wide_yorker,yorker,googly,leg_spin,off_spin,fliper,carrom_ball,slower_spin; 
    cout<<"Enter tha name of batsman_1:::";
    cin>>batsman_1;
    cout<<"Enter the name of batsman_2";
    cin>>batsman_2;
    cout<<"Enter the name of faster_bowler::";
    cin>>faster_bowler;
    cout<<"Enter the name of spiner_bowler::";
    cin>>spiner_bowler;
    cout<<"select the batsman for striker write batsman_1 or batsman_2";
    cin>>striker;

    if(striker==batsman_1)
    {
       cout<<"Select the bowler spiner_bowler or faster_bowler::";
       cin>>i;
       switch(i)
       {
           case 'faster_bowler':
           cout<<"Select the type of field power_play or open_field::";
           cin >>field_type;
           
           if (field_type==power_play)
           {
            cout <<"if field_type is power_play then select the bowling type from(out_swing,in_swing,length,short_ball) if field is open then select from rest";
            cout <<"Select the type of ball you want to bowl::";
            cin>>ball;   

            if (ball==outswing)
            {
               cout<<"Single in third_man";
            } 
            else if (ball==inswing)
            {
               cout <<" Thats out!!! Bowled ....";
            }
            else if(ball==length)
            {
               cout<<"Defence";
            }
            else if (ball==short_ball)
            {
               cout<<"Pull and six run ....incredible start ";
            }

           }
           else if(field_type==open_field)
           {
              cout<<"program is not ready for this ...";
           }
           default :
           cout<<"Rest program will coming soon....";
       }
    }

}