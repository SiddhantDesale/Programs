
class Marvellous   
{
    public int No1;
    public int No2;
}

class HashCodeDemo  
{
    public static void main(String arg[])
    {
        Marvellous mobj = new Marvellous();
        System.out.println("Hashcode of mobj is : "+mobj.hashCode());  //798154996(Hashcode is the address)
    }
}