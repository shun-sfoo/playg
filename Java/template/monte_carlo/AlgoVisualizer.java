import java.awt.*;
import java.awt.event.KeyAdapter;
import java.awt.event.MouseAdapter;

public class AlgoVisualizer {

  private MentoCarloPiData data; // 数据
  private AlgoFrame frame; // 视图
  private int N;

  public AlgoVisualizer(int sceneWidth, int sceneHeight, int N) {

    // 初始化数据
    assert (sceneWidth == sceneHeight);

    this.N = N;
    Circle circle = new Circle(sceneWidth / 2, sceneHeight / 2, sceneWidth / 2);
    data = new MentoCarloPiData(circle);

    // 初始化视图
    EventQueue.invokeLater(
        () -> {
          frame = new AlgoFrame("Welcome", sceneWidth, sceneHeight);
          new Thread(
                  () -> {
                    run();
                  })
              .start();
        });
  }

  // 动画逻辑
  private void run() {
    for (int i = 0; i < N; ++i) {
      if (i % 100 == 0) {
        frame.render(data);
        AlgoVisHelper.pause(40);
        System.out.println(data.estimatePi());
      }

      int x = (int) (Math.random() * frame.getCanvasWidth());
      int y = (int) (Math.random() * frame.getCanvasHeight());
      data.addPoint(new Point(x, y));
    }
  }

  // TODO: 根据情况决定是否实现键盘鼠标等交互事件监听器类
  private class AlgoKeyListener extends KeyAdapter {}

  private class AlgoMouseListener extends MouseAdapter {}

  public static void main(String[] args) {

    int sceneWidth = 800;
    int sceneHeight = 800;
    int N = 10000;

    // TODO: 根据需要设置其他参数，初始化visualizer
    AlgoVisualizer visualizer = new AlgoVisualizer(sceneWidth, sceneHeight, N);
  }
}
