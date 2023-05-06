import java.awt.*;

class GUIFrame
{
    public Frame fobj;

    public GUIFrame(String title)
    {
        Frame fobj = new Frame(title);
        fobj.setSize(400,400);
        fobj.setVisible(true);
    }
}

class GUI3
{
    public static void main(String arg[])
    {
        GUIFrame mobj = new GUIFrame("Frame");
    }
}