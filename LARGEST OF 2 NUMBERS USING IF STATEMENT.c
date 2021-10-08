
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<0 || b<0)
    {
        printf("INVALID NUMBER IN INPUT");
    }
    else
    if(a>b)
    {
        printf("THE LARGEST IS %d",a);
    }
    else
    printf("THE LARGEST IS %d",b);

    return 0;
}
