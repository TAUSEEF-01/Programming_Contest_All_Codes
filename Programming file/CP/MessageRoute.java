import java.util.*;

public class MessageRoute {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt(); // number of computers
        int m = scanner.nextInt(); // number of connections

        List<List<Integer>> graph = new ArrayList<>();
        for (int i = 0; i <= n; i++) {
            graph.add(new ArrayList<>());
        }

        // Read edges
        for (int i = 0; i < m; i++) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            graph.get(a).add(b);
            graph.get(b).add(a);
        }

        // BFS to find the shortest path
        int[] parent = new int[n + 1];
        Arrays.fill(parent, -1);
        boolean[] visited = new boolean[n + 1];
        Queue<Integer> queue = new LinkedList<>();

        visited[1] = true;
        queue.add(1);

        while (!queue.isEmpty()) {
            int current = queue.poll();
            if (current == n) {
                break; // Found Maija's computer
            }

            for (int neighbor : graph.get(current)) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    parent[neighbor] = current;
                    queue.add(neighbor);
                }
            }
        }

        // Check if we reached Maija's computer
        if (!visited[n]) {
            System.out.println("IMPOSSIBLE");
        } else {
            // Reconstruct the path
            List<Integer> path = new ArrayList<>();
            for (int at = n; at != -1; at = parent[at]) {
                path.add(at);
            }
            Collections.reverse(path); // Reverse to get the correct order

            // Output the result
            System.out.println(path.size());
            for (int computer : path) {
                System.out.print(computer + " ");
            }
        }

        scanner.close();
    }
}
