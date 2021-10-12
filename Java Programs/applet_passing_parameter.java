import java.applet.Applet;  
import java.awt.Graphics;  
public class applet_passing_parameter extends Applet{  
  
public void paint(Graphics g){  
String str1=this.getParameter("msg");  
g.drawString(str1,100, 100);  
}   
