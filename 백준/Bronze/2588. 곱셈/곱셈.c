int main()
{
    int a,b,c,d,e;
    scanf("%d %d",&a,&b);
    e=b/100;
    d=b/10-e*10;
    c=b-d*10-e*100;
    printf("%d\n",c*a);
    printf("%d\n",d*a);
    printf("%d\n",e*a);
    printf("%d",a*b);
}