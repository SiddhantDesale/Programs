
class Base 
{
    public int A;
    public Base()            //default constructor
    {
        System.out.println("Inside Base default constructor");
        this.A = 11;
    }
    public Base(int i)            //parametrized constructor
    {
        System.out.println("Inside Base parametrized constructor");
        this.A = i;
    }
    public void fun()
    {
        System.out.println("Inside base fun");
    }

}

class Derived extends Base        //class Derived : public Base
{
    public int X;
    public Derived()
    {
        super(11);                                     //3
        System.out.println("Inside Derived constructor");
        this.X = 51;
    }
    public void gun()
    {
        System.out.println("Inside Derived gun");
        System.out.println("Value of A : "+super.A);  //1
        super.fun();                                  //2
    }

}


class SuperDemo
{
    public static void main(String arg[])
    {
        Derived dobj = new Derived();
        dobj.gun();
    }
}

//1. Access data of parent from child
//2. call method of parent from child
//3. call constructor of parent from child

    
