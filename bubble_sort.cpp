#include <iostream>
using namespace std;
#define size 100//定义数组最大容量
int main()
{
    int len,data[size],i,j,t;
    cin>>len;//输入数组长度
    for(i=0;i<len;i++)
        cin>>data[i];//输入数组内容
    for(i=1;i<len;i++)
    {
        for(j=0;j<len-i;j++)
        {
            //前面的数字比后面的大则交换
            if(data[j]>data[j+1])
            {
                t=data[j];
                data[j]=data[j+1];
                data[j+1]=t;
            }
        }
    }
    for(i=0;i<len;i++)
        cout<<data[i]<<" ";
    cout<<endl;
    cout<<"这里做了修改！！！"<<endl;
    system("pause");
}
懂了，都修改了
