import java.awt.*;

public class Circle {
  public int x, y;
  private int r;
  public int vx, vy;
  public boolean isFilled = false;

  public Circle(int x, int y, int r, int vx, int vy) {
    this.x = x;
    this.y = y;
    this.r = r;
    this.vx = vx;
    this.vy = vy;
  }

  public int getR() {
    return r;
  }

  public void move(int minx, int miny, int maxx, int maxy) {
    x += vx;
    y += vy;
    checkCollion(minx, miny, maxx, maxy);
  }

  private void checkCollion(int minx, int miny, int maxx, int maxy) {
    if (x - r < minx) {
      x = r;
      vx = -vx;
    }

    if (x + r >= maxx) {
      x = maxx - r;
      vx = -vx;
    }

    if (y - r < miny) {
      y = r;
      vy = -vy;
    }

    if (y + r >= maxy) {
      y = maxy - r;
      vy = -vy;
    }
  }

  public boolean contains(Point p) {
    return (x - p.x) * (x - p.x) + (y - p.y) * (y - p.y) <= r * r;
  }
}
