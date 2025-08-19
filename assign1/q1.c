#include <stdio.h>
# define max_size 10

void display(int arr[], int n){
    printf("[");
    for (int i=0; i<n;i++){
        printf("%d",arr[i]);
        if(i<n-1){
            printf(",");
        }
    }
    printf("] \n");
}

void insert(int val, int pos, int arr[], int* n){
    if((*n)>=max_size || (*n)<0) {
        return;
    }
    for(int i =(*n-1); i>=pos-1; i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=val;
    (*n)++;
    // return n;
    printf("after inserting %d at %d:",val, pos);
    display(arr, *n);
    
}


void delete(int ind, int arr[],int* n){
    if(ind>(*n)){
        return;
    }
    for (int i= ind-1; i<(*n)-1;i++){
        arr[i]=arr[i+1];
    }
    (*n)--;
    printf("after deleting element at %d:",ind);
    display(arr, *n);
}
void search(int val, int arr[],int n){
    for(int i=0; i<n; i++){
        if(val==arr[i]){
            printf("%d found at %d position",val, i+1);
            break;
        }
        else if (i==n-1){
            printf("element not found");
        }
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    insert(6, 3, arr, &n);
    delete(2,arr,&n);
    search(2,arr,n);
    
    return 0;
}