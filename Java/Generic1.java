import java.util.*;

class Generic1
{
    public static void Display(Integer Arr[])
    {
        for(int no : Arr)               //for each loop
        {
            System.out.println(no);
        }
    }

    public static void main(String arg[])
    {
        Integer A[] = {10,20,30,40};
        Integer B[] = {50,60,70};

        Display(A);
        Display(B);
    }
}