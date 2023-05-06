import java.awt.*;
import java.awt.event.*;

class GUIFrame
{
    public Frame fobj;                 
    public GUIFrame(String title)
    {
        Frame fobj = new Frame(title);
        fobj.setSize(400,400);
        fobj.setVisible(true);
        fobj.addWindowListener(new GUIListner());
    }
}

class GUIListner extends WindowAdapter
{    
    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
}
class GUI5
{
    public static void main(String arg[])
    {
        GUIFrame mobj = new GUIFrame("Frame");
    }
}