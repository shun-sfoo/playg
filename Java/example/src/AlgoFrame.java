import java.awt.Color;
import java.awt.Dimension;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.RenderingHints;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class AlgoFrame extends JFrame {
  private int canvasHeight;
  private int canvasWidth;

  public AlgoFrame(String title, int canvasWidth, int canvasHeight) {
    super(title);

    this.canvasWidth = canvasWidth;
    this.canvasHeight = canvasHeight;
    AlgoCanvas canvas = new AlgoCanvas();

    // canvas.setPreferredSize(new Dimension(canvasWidth, canvasHeight)); replace by override
    // getPreferredSize
    setContentPane(canvas);
    pack(); // set window size as panel size;

    setResizable(false);
    setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    setVisible(true);
  }

  public AlgoFrame(String title) {
    this(title, 1024, 768);
  }

  private Circle[] circles;

  public void render(Circle[] circles) {
    this.circles = circles;
    repaint();
  }

  public int getCanvasHeight() {
    return canvasHeight;
  }

  public int getCanvasWidth() {
    return canvasWidth;
  }

  private class AlgoCanvas extends JPanel {

    public AlgoCanvas() {
      // isDoubleBuffered
      super(true);
    }

    @Override
    public void paintComponent(Graphics g) {
      super.paintComponent(g);
      Graphics2D g2d = (Graphics2D) g;

      // anti-alias
      RenderingHints hints =
          new RenderingHints(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
      g2d.addRenderingHints(hints);

      // draw
      AlgoVisHelper.setStrokeWidth(g2d, 1);
      AlgoVisHelper.setColor(g2d, Color.RED);
      for (Circle circle : circles)
        if (circle.isFilled) {
          AlgoVisHelper.fillCircle(g2d, circle.x, circle.y, circle.getR());
        } else {
          AlgoVisHelper.strokeCircle(g2d, circle.x, circle.y, circle.getR());
        }
    }

    @Override
    public Dimension getPreferredSize() {
      return new Dimension(canvasWidth, canvasHeight);
    }
  }
}
