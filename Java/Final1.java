
class Demo
{
    public int No1;
    final public int No2;
    final public int No3;
   
    public Demo(int i, int j, int k)
    {
        this.No1 = i;
        this.No2 = j;
        this.No3 = k;
    }
}

class Final1
{
    public static void main(String arg[])
    {
        Demo obj1 = new Demo(11,21,51);
        System.out.println(obj1.No1);
        System.out.println(obj1.No2);
        System.out.println(obj1.No3);

        obj1.No1++;                 //will print bcoz its not final(const)
        System.out.println(obj1.No1);

       // obj1.No2++;           //will show error bcoz its final(const)
       // obj1.No3++;          //will show error bcoz its final(const)
    }
}