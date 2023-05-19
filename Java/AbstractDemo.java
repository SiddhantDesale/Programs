//Ques - we cant create object of abstract class but we can inherit
abstract class RBI
{
    public abstract float CalculateROI();    //virtual float CalculateROI() = 0;(in C++)

    public void DisplayRules()
    {
        System.out.println("You have to submit Aadhar card and PAN card");
        System.out.println("Minimum balance is 10,000");
    }
}

class SBI extends RBI
{
    public float CalculateROI()        
    {
        return 5.7f;
    }
}

class BOM extends RBI
{
    public float CalculateROI()
    {
        return 7.7f;
    }
}

class AbstractDemo
{
    public static void main(String arg[])
    {
      //  RBI robj = new RBI();              //bcoz abstract so not allowed(important)
      
        SBI sobj = new SBI();
        BOM bobj = new BOM();

        sobj.DisplayRules();
        bobj.DisplayRules();

        float fRet = 0.0f;
        fRet = sobj.CalculateROI();
        System.out.println("ROI of SBI is : "+fRet);     //5.7

        fRet = bobj.CalculateROI();
        System.out.println("ROI of BOM is : "+fRet);    //7.7
    }
}