#include <stdio.h>
    
    struct Comx //structure
    {
    int Real;
    int Img;
};
    struct Comx Add(struct Comx c1,struct Comx c2) //sum function
    {
    struct Comx c;
    c.Real = c1.Real + c2.Real;
    c.Img = c1.Img + c2.Img;
    return c;
    }
    struct Comx Sub(struct Comx c1,struct Comx c2) //sum function
    {
    struct Comx c;
    c.Real = c1.Real - c2.Real;
    c.Img = c1.Img - c2.Img;
    return c;
    }
    struct Comx Mul(struct Comx c1,struct Comx c2)//product function
    {
    struct Comx c;
    c.Real = (c1.Real * c2.Real) - (c1.Img * c2.Img);
    c.Img = (c1.Real * c2.Img) + (c1.Img * c2.Real);
    return c;
    }
    void display(struct Comx c) //display function
    {
    printf("%d+%di",c.Real,c.Img);
    }
    int main()
    {
    struct Comx c1,c2; //structure variables
    printf("Enter Real and Imginary values of number 1 : ");
    scanf("%d %d",&c1.Real,&c1.Img);
    printf("Enter Real and Imginary values of number 2 : ");
    scanf("%d %d",&c2.Real,&c2.Img);
    printf("ADD = ");
    display(Add(c1,c2));
       printf("\nSUB = ");
    display(Sub(c1,c2));
    printf("\nMUL = ");
    display(Mul(c1,c2));
return 0;
}