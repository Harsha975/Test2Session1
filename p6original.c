/*#include<stdio.h>
void input_string(char *a)
{
    printf("enter the string\n");
    scanf("%s",a);
}
int str_reverse(char *string,char substring[])
{
    printf("enter the substring\n");
    scanf("%s",substring);
    for(int i=0;string[i]!='\0';i++)
    {
        if(substring[0]==string[i]&&string[i+1]==substring[i+1])
        {
           
            return i;
            break;
        }
    } 
}
void output(char *a,char *substring,int index)
{
    printf("the index of the %s in %s is %d",substring,a,index);
}
int main()
{
    char a[100];
    char substring[100];
    input_string(a);
    int index=str_reverse(a,substring);
    output(a,substring,index);
    return 0;
}*/
#include<stdio.h>
void input_string(char *a)
{
    printf("enter the string\n");
    scanf("%s",a);
}
int str_reverse(char *string,char substring[])
{
    
    printf("enter the substring\n");
    scanf("%s",substring);
    for(int i=0;substring[i]!='\0';i++)
    {
        for(int j=0;string[j]!='\0';j++)
        {
            if(substring[i]==string[j])
            {
               /* int h=1,q=1,m=0;;
                for(int k=j+1;substring[h]!='\0';k++)
                { 
                    if(substring[h]==string[k])
                    {
                        m=j;  
                        h++;
                    }
                    else 
                    {
                        break;
                    }
                     
                  q++;
                  
                }  
              */  
                return j;
            }
             continue;
        }
       
        break;
    } 
}
void output(char *a,char *substring,int index)
{
    printf("the index of the %s in %s is %d",substring,a,index);
}
int main()
{
    char a[100];
    char substring[100];
    input_string(a);
    int index=str_reverse(a,substring);
    output(a,substring,index);
    return 0;
}