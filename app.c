# include<stdio.h>

int main() {
    int number = 25;
    char star = '*';
    int age;
    float pi = 3.14;

    printf('Age is %d \n', number);
    printf('Star is %c \n', star);
    printf('This is pi %f \n', pi);

    scanf('%d', &age);
    printf('age is : %d \n', age);
    
    int a,b;
    
    printf('Enter a');
    scanf('%d', &a);
    
    printf('Enter b');
    scanf('%d', &b);
    
    
    int sum = a + b;
    
    printf("Answer is %d \n", sum);
    
    
    int side;
    printf('Enter Side');
    scanf('%d', &side);
    
    printf("Side is : %d \n", side * side);


    float radius;
    printf('Enter radius');
    scanf('%f', &radius);

    printf("Side is : %f \n",3.14 * radius * radius);
    
    return 0;

}
