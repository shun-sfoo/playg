import java.awt.Point;
import java.util.LinkedList;

public class MentoCarloPiData {

  private Circle circle;
  private LinkedList<Point> points;
  private int insideCircle = 0;

  public MentoCarloPiData(Circle circle) {
    this.circle = circle;
    points = new LinkedList<Point>();
  }

  public Circle getCircle() {
    return circle;
  }

  public Point getPoint(int i) {
    assert (i >= 0 && i < points.size());
    return points.get(i);
  }

  public int getPointsNumber() {
    return points.size();
  }

  public void addPoint(Point p) {
    points.add(p);
    if (circle.contain(p)) ++insideCircle;
  }

  public double estimatePi() {
    if (points.size() == 0) return 0.0;
    int circleArea = insideCircle;
    int squareArea = points.size();
    return (double) circleArea * 4 / squareArea;
  }
}
