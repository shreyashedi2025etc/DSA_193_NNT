  #include <stdio.h>
int linearSearch(int arr[], int n, int key)
{
 int i;
    int flag = 0;
      for(i = 0; i < n; i++){
        if(arr[i] == key){
            flag = 1;
            break;
        }
    }
    return flag;
}


int binarySearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    int mid;
   
    while(low <= high){
        mid = (low + high) / 2;
       
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return 0;
}


int main(){
    int n, key, i, choice, result;
   
    printf("Enter number of elements: ");
    scanf("%d", &n);
   
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    printf("\n--- MENU ---\n");
    printf("1. Linear Search\n");
    printf("2. Binary Search\n");
    printf("3. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
   
    switch(choice){
        case 1:
            printf("Enter the element to search: ");
            scanf("%d", &key);
           
            result = linearSearch(arr, n, key);
           
            if (result == 1) {
                printf("Element is present in the array.\n");
            } else {
                printf("Element is not present in the array.\n");
            }
            break;
           
        case 2:
            printf("Enter the element to search: ");
            scanf("%d", &key);
           
            result = binarySearch(arr, n, key);
           
            if (result == 1) {
                printf("Element is present in the array.\n");
            } else {
                printf("Element is not present in the array.\n");
            }
            break;
           
        case 3:
            printf("Exiting program.\n");
            return 0;
           
        default:
            printf("Invalid choice\n");
            break;
    }  
    return 0;
}
