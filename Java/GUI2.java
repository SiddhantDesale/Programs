import java.awt.*;

class GUIFrame
{
    public GUIFrame(String title)
    {
        Frame fobj = new Frame(title);
        fobj.setSize(400,400);
        fobj.setVisible(true);
    }
}

class GUI2
{
    public static void main(String arg[])
    {
        GUIFrame mobj = new GUIFrame("Frame");
    }
}