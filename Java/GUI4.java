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

class GUIListner implements WindowListener
{
    public void windowActivated(WindowEvent obj){}
    public void windowDeactivated(WindowEvent obj){}

    public void windowDeiconified(WindowEvent obj){}
    public void windowIconified(WindowEvent obj){}

    public void windowClosed(WindowEvent obj){}
    public void windowOpened(WindowEvent obj){}

    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
}
class GUI4
{
    public static void main(String arg[])
    {
        GUIFrame mobj = new GUIFrame("Frame");
    }
}