#include <iostream>

using namespace std;

int main()
{
    int n = 10;
    int *ptr= (int*) malloc(n*sizeof(int));

    for(int i=0;i<n;++i)
    {
        scanf("%d",ptr+i);

    }

    for(int j=0;j<n;++j)
        printf("%d ",*(ptr+j));

}
