import java.util.ArrayList;
import java.util.TreeMap;

class OrderStandings{
public static void orderStandingQueue(int[] heights, int[] infronts) {
    ArrayList<Integer> result = new ArrayList<Integer>();
    TreeMap<Integer,Integer> map = new TreeMap<Integer,Integer>();
    for (int i=0; i<heights.length; i++) {
        map.put(heights[i], infronts[i]);
    }
    boolean sorted = false;
    while(sorted == false) {
        int height = map.lastKey();
        int taller = map.get(height);
        map.remove(height);

        if (result.isEmpty()){
            result.add(height);
        } else if (taller == 0) {
            result.add(0,height);
        } else {
            result.add(taller,height);
        }
        if (map.isEmpty()) sorted = true;
    }
    System.out.println(result.toString());
}

public static void main(String args[]) {
	int[] heights = {9, 7, 6, 4, 2};
    int[] in_front = {0, 0, 1, 3, 3};
	orderStandingQueue(heights, in_front);
}

}