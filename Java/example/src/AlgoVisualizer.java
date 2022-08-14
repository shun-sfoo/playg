import java.awt.*;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;

// controller
public class AlgoVisualizer {
  private Circle[] circles;
  private AlgoFrame frame;
  private boolean isAnimated = true;

  public AlgoVisualizer(int sceneWidth, int sceneHeight, int N) {
    // init data
    circles = new Circle[N];
    int R = 50;
    for (int i = 0; i < N; ++i) {
      int x = (int) (Math.random() * (sceneWidth - 2 * R)) + R;
      int y = (int) (Math.random() * (sceneHeight - 2 * R)) + R;
      int vx = (int) (Math.random() * 11) - 5;
      int vy = (int) (Math.random() * 12) - 5;
      circles[i] = new Circle(x, y, R, vx, vy);
    }

    // init view
    EventQueue.invokeLater(
        () -> {
          frame = new AlgoFrame("welcome", sceneWidth, sceneHeight);
          frame.addKeyListener(new AlgoKeyListener());
          frame.addMouseListener(new AlgoMouseListener());

          new Thread(
                  () -> {
                    run();
                  })
              .start();
        });
  }

  // amotion logic
  private void run() {
    while (true) {
      // draw
      frame.render(circles);
      AlgoVisHelper.pause(20);

      // update
      if (isAnimated) {
        for (Circle circle : circles) {
          circle.move(0, 0, frame.getCanvasWidth(), frame.getCanvasHeight());
        }
      }
    }
  }

  private class AlgoKeyListener extends KeyAdapter {
    @Override
    public void keyReleased(KeyEvent event) {
      if (event.getKeyChar() == ' ') {
        isAnimated = !isAnimated;
      }
    }
  }

  private class AlgoMouseListener extends MouseAdapter {

    @Override
    public void mousePressed(MouseEvent event) {
      event.translatePoint(0, frame.getBounds().height - frame.getCanvasHeight());
      for (Circle circle : circles) {
        if (circle.contains(event.getPoint())) circle.isFilled = !circle.isFilled;
      }
    }
  }
}
