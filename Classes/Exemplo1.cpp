#include<iostream>
using namespace std;


class Widget{
    public:
    Widget(){++count;}
    ~Widget(){--count;}
    static int count;
    static int n;
};
int Widget::count=0;


int main(){

Widget w,x;
cout<<"Agora há "<<w.count<<"widgets"<<endl;
{
    Widget w,x,y,z;
    cout<<"Agora há "<<w.count<<" widgets"<<endl;

}
cout<<"Agora há "<<w.count<<" widgets"<<endl;
Widget y;
cout<<"Agora há "<<w.count<<" widgets"<<endl;



    return 0;
}

