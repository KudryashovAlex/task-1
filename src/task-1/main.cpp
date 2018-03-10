 #include<iostream>
#include<math.h>
#include<sstream>
#include<cstring>
int first(int a);
int second(int a);
int main()
{
    for (int i=0;i<1000; i++)
    {
       first(i);
            //std::cout<<i;
    }
return 0;
}
int first(int a)
{
    std::string buf;
    std::stringstream ss;
    ss<<a;
    ss>>buf;
    std::cout<<buf;
    return 0;

}

int second(int a);
