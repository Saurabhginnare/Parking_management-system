#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    k:
    int m_amo=0;int r_amo=0;int c_amo=0;int b_amo=0;
    int m_cnt=0;int r_cnt=0;int c_cnt=0;int b_cnt=0;
    int t_amo=0;int t_cnt=0;int x;

system("cls");
h:
 cout<<"\n\n\t\t\t<--Parking Project-->"<<endl;
 cout<<"1. MotoCycle"<<endl;
 cout<<"2. Rickshaw"<<endl;
 cout<<"3. Car"<<endl;
 cout<<"4. Bus"<<endl;
 cout<<"5. Check Record"<<endl;
 cout<<"6. Delete Vehicale Record"<<endl;
 cout<<"7. Delete Record"<<endl;
 cout<<"8. Exit";
 cout<<"\n\n Your Choice: ";
 cin>>x;
 switch (x)
 {
 case 1: 
 if(t_cnt<100){
     m_cnt++;
     t_cnt++;
     m_amo +=50;
     t_amo +=50;
     cout<<"\n\n\t\t\t Motorcycle Successfully Parkde...."<<endl;

 }else{
     cout<<"\n\n\t\t\t Parking is Full...."<<endl;
 }
     break;
case 2:
if(r_cnt<100){
     r_cnt++;
     t_cnt++;
     r_amo +=100;
     t_amo +=100;
     cout<<"\n\n\t\t\t Rickshaw Successfully Parkde...."<<endl;

 }else{
     cout<<"\n\n\t\t\t Parking is Full...."<<endl;
 }
break;

case 3:
if(c_cnt<100){
     c_cnt++;
     t_cnt++;
     c_amo +=150;
     t_amo +=150;
     cout<<"\n\n\t\t\t Car Successfully Parkde...."<<endl;

 }else{
     cout<<"\n\n\t\t\t Parking is Full...."<<endl;
 }
break;

case 4:
if(b_cnt<100){
     b_cnt++;
     t_cnt++;
     b_amo +=200;
     t_amo +=200;
     cout<<"\n\n\t\t\t Bus Successfully Parkde...."<<endl;

 }else{
     cout<<"\n\n\t\t\t Parking is Full...."<<endl;
 }
break;

case 5:
if(t_cnt>0){
    system("cls");
cout<<"\n\n\n\t\t\t\tCheck Record"<<endl;

    cout<<"\n\n => MotorCycle in Parking :"<<m_cnt<<endl;
    cout<<" => MotorCycle Amount: "<<m_amo<<endl;

    cout<<"\n\n => Rickshaw in Parking :"<<r_cnt<<endl;
    cout<<" => Rickshaw Amount: "<<r_amo<<endl;

    cout<<"\n\n => Car in Parking :"<<c_cnt<<endl;
    cout<<" => Car Amount: "<<c_amo<<endl;

    cout<<"\n\n => Bus in Parking :"<<b_cnt<<endl;
    cout<<" => Bus Amount: "<<b_amo<<endl;

    cout<<"\n\n => Total Vehicales in Parking :"<<t_cnt<<endl;
    cout<<" => Total Amount: "<<t_amo<<endl;
}else{
    cout<<"\n\n\n Parking is Empty there are no record"<<endl;
}
break;

case 6:
p:
system("cls");
cout<<"\n\n\n\t\t\t\t Delete Vehicle "<<endl;
cout<<"\n\n 1.Motorcycle"<<endl;
cout<<"\n\n 2.Rickshaw"<<endl;
cout<<"\n\n 3.Car"<<endl;
cout<<"\n\n 4.Bus"<<endl;
cout<<"\n\n Your choice: "<<endl;
cin>>x;
if(x==1){
    m_cnt--;
    t_cnt--;
    cout<<"\n\n\t\t\t Motorcycle Successfully removed...."<<endl;
}
else if(x==2){
    r_cnt--;
    t_cnt--;
    cout<<"\n\n\t\t\t Richshaw Successfully removed...."<<endl;
}
else if(x==3){
    c_cnt--;
    t_cnt--;
    cout<<"\n\n\t\t\t Car Successfully removed...."<<endl;
}
else if(x==4){
    b_cnt--;
    t_cnt--;
    cout<<"\n\n\t\t\t Bus Successfully removed...."<<endl;
}else{
    cout<<"\n\n Invalid Choice..Please try again"<<endl;
    getch();
    goto p;
}
break;

case 7:
cout<<"\n\n\t\t\t Delete All Record Successfully..."<<endl;
getch();
goto k;
break;

case 8:
exit(0);
 default:
 cout<<"\n\n\n\t\t Invalid Choice.. Please Try again.."<<endl;
 }
 getch();
 goto h;

  
return 0;
}