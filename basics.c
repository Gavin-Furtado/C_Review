 #include<stdio.h>

 int main(){
    // Variables and printing //
    int z,y; //declaration
    z = 50; //initialization
    y = 10;

    printf("%d Something\n", z); // % d refernces a integer variable

    printf("Z is %d, Y is %d\n",z,y);

    printf("%s word\n", "some"); // To print string

    // Taking input from user //
    printf("Enter a number = ");
    int n;
    scanf("%d",&n);
    printf("your number is %d\n", n);

    // Using character array //
    char name[20]; // total size 19, last is reserved for '\0'
    printf("What is your name \n");
    scanf("%19s",name);
    printf("Hello %s\n",name);


    return 0;
 }