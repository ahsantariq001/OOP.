//Question no 3.16
#include <iostream>
#include<string>
using namespace std;

class healthprofileclass{
private:
    string FN,LN,Gen;
    int D,M,Y;
    float height,weight;
    int yy=2019,age,hr,thr,we,he,wee;
public:
    healthprofileclass(string f,string l,string g,int d,int m,int y,float h,float w){
        FN=f;
        LN=l;
        Gen=g;
        D=d;
        M=m;
        Y=y;
        height=h;
        weight=w;
        }
    void getName(){
        cout<<"Name:"<<FN<<LN;
        }
    void setName(string a){
        a=FN;
        }
    void memfunc(){
            age=2019-Y;
            hr=220-age;
            thr=hr-70;
            he=6.2*12;
            we=(weight)*(1000/450);
        }
    void output(){
        cout<<"> Computerization of Health <\n\n";
        memfunc();
        cout<<"Date of Birth: "<<age<<endl;
        cout<<"\nYour Heart rate: "<<hr<<endl;
        cout<<"\nTarget Heart rate: "<<thr<<endl;
        cout<<"\nYour Heigth in Foot:6.2 "<<"\nHeight in Inches: "<<he<<"inches"<<endl;
        cout<<"\nYour Weight in KG:85  "<<"\nWeight in LB:"<<we<<"LB"<<endl;
        }
};
int main()
{
    healthprofileclass a("Ahsan","Tariq","Male",1,12,2000,6.2,85);
    a.output();
    return 0;
}
