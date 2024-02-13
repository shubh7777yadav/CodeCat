// class Solution {
// public:
//     void quicksort(vector<int>& nums, int start, int end) {
//         if (start >= end) return;
//         int i = start - 1;
//         int j = start;
//         int pivot = end;
//         while (j < pivot) {
//             if (nums[j] < nums[pivot]) {
//                 i++;
//                 swap(nums[i], nums[j]);
//             }
//             j++;
//         }
//         i++;
//         swap(nums[i], nums[pivot]);
//         quicksort(nums, start, i - 1);
//         quicksort(nums, i + 1, end);
//     }
    
  //   vector<int> sortArray(vector<int>& nums) {
//         int start = 0;
//         int end = nums.size() - 1;
//         quicksort(nums, start, end);
//         return nums;
//     }
// };
         // merge sort approch
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }   
    void mergeSort(vector<int>& nums, int left, int right) {
        if (left < right) {
            int mid = left + (right - left) / 2;
            mergeSort(nums, left, mid);
            mergeSort(nums, mid + 1, right);
            merge(nums, left, mid, right);
        }
    }    
    void merge(vector<int>& nums, int left, int mid, int right) {
        int leftlenght = mid - left + 1;
        int rightlength = right - mid;        
        //vector<int> L(n1), R(n2);
        int *L = new int [leftlenght];
        int *R = new int [rightlength];
        for (int i = 0; i < leftlenght; i++)
            L[i] = nums[left + i];
        for (int j = 0; j < rightlength; j++)
            R[j] = nums[mid + 1 + j];
        
        int i = 0, j = 0, k = left;
        
        while (i < leftlenght && j < rightlength) {
            if (L[i] <= R[j]) {
                nums[k] = L[i];
                i++;
            } else {
                nums[k] = R[j];
                j++;
            }
            k++;
        }       
        while (i < leftlenght) {
            nums[k] = L[i];
            i++;
            k++;
        }       
        while (j < rightlength) {
            nums[k] = R[j];
            j++;
            k++;
        }
        delete []L;
        delete []R;

    }
};

