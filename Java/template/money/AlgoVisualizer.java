import java.awt.*;
import java.awt.event.KeyAdapter;
import java.awt.event.MouseAdapter;
import java.util.Arrays;

public class AlgoVisualizer {

  private int[] money; // 数据
  private AlgoFrame frame; // 视图

  public AlgoVisualizer(int sceneWidth, int sceneHeight, int N) {

    this.money = new int[N];
    // 初始化数据
    for (int i = 0; i < N; ++i) {
      this.money[i] = 100;
    }

    // 初始化视图
    EventQueue.invokeLater(
        () -> {
          frame = new AlgoFrame("Welcome", sceneWidth, sceneHeight);
          // TODO: 根据情况决定是否加入键盘鼠标事件监听器
          frame.addKeyListener(new AlgoKeyListener());
          frame.addMouseListener(new AlgoMouseListener());
          new Thread(
                  () -> {
                    run();
                  })
              .start();
        });
  }

  // 动画逻辑
  private void run() {
    while (true) {
      Arrays.sort(money);
      // draw
      frame.render(money);

      AlgoVisHelper.pause(40);

      // update
      for (int k = 0; k < 50; ++k) {
        for (int i = 0; i < money.length; ++i) {
          int j = (int) (Math.random() * money.length);
          ++money[j];
          --money[i];
        }
      }
    }
  }

  private class AlgoKeyListener extends KeyAdapter {}

  private class AlgoMouseListener extends MouseAdapter {}

  public static void main(String[] args) {

    int sceneWidth = 800;
    int sceneHeight = 800;
    int N = 100;

    // TODO: 根据需要设置其他参数，初始化visualizer
    AlgoVisualizer visualizer = new AlgoVisualizer(sceneWidth, sceneHeight, N);
  }
}
