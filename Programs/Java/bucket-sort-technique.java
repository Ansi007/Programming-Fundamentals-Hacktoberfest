import java.util.*;
import java.util.Collections;

class Main {
	static void bucketSort(float arr[], int n)
	{
		if (n <= 0)
			return;
    
		Vector<Float>[] buckets = new Vector[n];

		for (int i = 0; i < n; i++) {
			buckets[i] = new Vector<Float>();
		}

		for (int i = 0; i < n; i++) {
			float idx = arr[i] * n;
			buckets[(int)idx].add(arr[i]);
		}

		for (int i = 0; i < n; i++) {
			Collections.sort(buckets[i]);
		}

		int arrayIndex = 0;
		for (int i = 0; i < n; i++) {
		    int bucketSize = buckets[i].size();
			for (int k = 0; k < bucketSize; k++) {
				arr[arrayIndex ++] = buckets[i].get(k);
			}
		}
	}

	// Driver code
	public static void main(String args[])
	{
		float arr[] = { (float)0.42, (float)0.32,
						(float)0.35, (float)0.52,
						(float)0.39, (float)0.47,
						(float)0.50};

		int n = arr.length;
		bucketSort(arr, n);

		System.out.println("Sorted Array is: ");
		for (float element : arr) {
			System.out.print(element + " ");
		}
	}
}
