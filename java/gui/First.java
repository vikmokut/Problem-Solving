import javax.swing.*; // holds JFrame, JLabel, other libraries
import java.awt.event.ActionEvent; // event handling - actions
import java.awt.event.ActionListener; // event listener

public class First {
    public static void main (String[] args) {
        System.out.println("Tis good to serve Jesus!");
        
        // Create a JFrame (window)
        JFrame frame = new JFrame("First Jave GUI");
        frame.setDefaultCloseOperation (JFrame.EXIT_ON_CLOSE);
        
        // Create a JLabel (text label)
        JLabel label = new JLabel("Hi, Java GUI");
        
        // Create a button
        JButton button = new JButton("Hi, click me!");
        
        // add an action listener to the button
        button.addActionListener(new ActionListener() {
            public void actionPerformed (ActionEvent e) {
                JOptionPane.showMessageDialog(null, "wow, Button Clicked!");
            }
        });
        
        // add the components to the frame
        frame.add(label); // adds the label
        frame.add(button); // adds button
        frame.setSize(250, 150); // set frame size and makes visible
        frame.setVisible(true); // makes frame visible
    }
}
