/*
 * class Object
 * {
 *    //code
 * }
 */
class Demo          //class Demo extends Object
{
    public int Addition(int a, int b)
    {
        return a+b;
    }
    public int Addition(int a, int b, int c)
    {
        return a+b+c;
    }
    public double Addition(double a, double b)
    {
        return a+b;
    }
    public double Addition(double a, double b, double c)
    {
        return a+b+c;
    }
}
class Overloading
{
    public static void main(String arg[])
    {
        Demo obj = new Demo();
        int A = 10, B = 20, C = 30, iRet = 0;
        double X = 10.8, Y = 90.7, Z = 70.9, dRet = 0.0;

        iRet = obj.Addition(A,B);        //CALL line 9
        iRet = obj.Addition(A,B,C);      //Call line 13

        dRet = obj.Addition(X,Y);       //call line 17
        dRet = obj.Addition(X,Y,Z);     //call line 21

    }
}
